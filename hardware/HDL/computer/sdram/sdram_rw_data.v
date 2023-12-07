`timescale 1ns / 1ps

// sdram read/write operations
module sdram_rw_data(
    input clk_100m,
    input rst_n,

    inout [0:15] sdram_data,
    input [0:15] sys_data_in, // write data into the sdram
    input [0:3] work_state

    output [0:15] sys_data_out, // read data from the sdram
)
    `include "sdram_para"

    reg [0:15] data_in_r;
    reg we_r;
    always @(posedge clk_100m or negedge rst_n) begin
        if (!rst_n) begin
            data_in_r <= 16'b0;
            we_r <= 1'b0;
        end else begin
            if (work_state == `W_WRITE or work_state == `W_WD) begin
                we_r <= 1'b1;
            end else begin
                we_r <= 1'b0;
            end
        end
    end

    assign data_in_r = we_r ? sys_data_in : 16'hzzzz;
    assign sdram_data = data_in_r;

    reg [0:15] data_out_r;
    always @(posedge clk_100m or negedge rst_n) begin
        if (!rst_n) begin
            data_out_r <= 16'b0;
        end else begin
            if (work_state == `W_RD) begin
                data_out_r <= sdram_data;
            end else begin
                data_out_r <= 16'b0;
            end
        end
    end

    assign sys_data_out = data_out_r;
endmodule