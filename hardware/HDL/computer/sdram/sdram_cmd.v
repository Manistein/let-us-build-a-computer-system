`ifndef _sdram_cmd_
`define _sdram_cmd_

module sdram_cmd(
    input clk_100m,
    input rst_n,
    input [8:0] sdwr_bytes, // 1~512 bytes
    input [8:0] sdrd_bytes, // 1~512 bytes
    input [23:0] sys_wraddr, // [22:23] for bank select, [9:21] for row address, [0:8] for column address
    input [23:0] sys_rdaddr,

    input [3:0] init_state,
    input [3:0] work_state,
    input [15:0] cnt_clk,
    input sys_r_wn,

    output sdram_cke,
    output sdram_cs_n,
    output sdram_ras_n,
    output sdram_cas_n,
    output [1:0] sdram_ba,
    output [12:0] sdram_addr,
    output sdram_we_n
);
    `include "sdram_para.v";

    reg [4:0] sdram_cmd_r;
    reg [1:0] sdram_ba_r;
    reg [12:0] sdram_addr_r;
    wire [23:0] sys_addr; 

    assign {sdram_cke, sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} = sdram_cmd_r;
    assign sdram_ba = sdram_ba_r;
    assign sdram_addr = sdram_addr_r;
    assign sys_addr = (sys_r_wn == 1'b0) ? sys_rdaddr : sys_wraddr;

    always @(posedge clk_100m or negedge rst_n) begin
        if (!rst_n) begin
            sdram_cmd_r <= `CMD_INIT;
            sdram_ba_r <= 2'b11;
            sdram_addr_r <= 16'hfff;
        end else begin
            case (init_state) 
                `I_NOP, `I_TRP, `I_TRF1, `I_TRF2, `I_TMRD: begin 
                    sdram_cmd_r <= `CMD_NOP;
                    sdram_ba_r <= 2'b11;
                    sdram_addr_r <= 16'hfff;
                end
                `I_PRECHARGE: begin
                    sdram_cmd_r <= `CMD_PRECHARGE;
                    sdram_ba_r <= 2'b11;
                    sdram_addr_r <= 16'hfff;
                end
                `I_AUTO_REFRESH1, `I_AUTO_REFRESH2: begin
                    sdram_cmd_r <= `CMD_AUTO_REFRESH;
                    sdram_ba_r <= 2'b11;
                    sdram_addr_r <= 16'hfff;
                end
                `I_MRS: begin // read the BASIC FUNCTIONAL DESCRIPTION section in the datasheet
                    sdram_cmd_r <= `CMD_MRS;
                    sdram_ba_r <= 2'b00;
                    sdram_addr_r <= {
                        0, 0, 0, // A12,A11,A10
                        0, // A9, burst read and burst write
                        0, 0, // A8, A7
                        0, 1, 1, // A4~A6 CAS Latency is 3
                        0, // A3, burst type is sequential
                        1, 1, 1 // A0~A2, brust length is full page
                    };
                end
                `I_DONE: begin
                    case (work_state)
                        `W_IDLE, `W_TRCD, `W_CL, `W_RD, `W_WD, `W_TDAL, `W_TRFC: begin
                            sdram_cmd_r <= `CMD_NOP;
                            sdram_ba_r <= 2'b11;
                            sdram_addr_r <= 16'hfff;
                        end
                        `W_ACTIVE: begin
                            sdram_cmd_r <= `CMD_ACTIVE;
                            sdram_ba_r <= sys_addr[23:22];
                            sdram_addr_r <= sys_addr[21:9]; // select row
                        end
                        `W_READ: begin
                            sdram_cmd_r <= `CMD_READ;
                            sdram_ba_r <= sys_addr[23:22];
                            sdram_addr_r <= sys_addr[8:0]; // select column
                        end
                        `W_WRITE: begin
                            sdram_cmd_r <= `CMD_WRITE;
                            sdram_ba_r <= sys_addr[23:22];
                            sdram_addr_r <= sys_addr[8:0];
                        end
                        `W_AR: begin
                            sdram_cmd_r <= `CMD_AUTO_REFRESH;
                            sdram_ba_r <= 2'b11;
                            sdram_addr_r <= 16'hfff;
                        end
                        default: begin
                            sdram_cmd_r <= `CMD_NOP;
                            sdram_ba_r <= 2'b11;
                            sdram_addr_r <= 16'hfff;
                        end
                    endcase
                end
                default: begin
                    sdram_cmd_r <= `CMD_NOP;
                    sdram_ba_r <= 2'b11;
                    sdram_addr_r <= 16'hfff;
                end
            endcase
        end
    end

endmodule

`endif 