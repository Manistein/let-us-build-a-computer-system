`ifndef _sdram_rw_data_
`define _sdram_rw_data_

// sdram read/write operations
module sdram_rw_data(
    input clk_100m,
    input rst_n,

    inout [15:0] sdram_data,
    input [15:0] sys_data_in, // write data into the sdram
    input [3:0] work_state,

    output [15:0] sys_data_out // read data from the sdram
);
    `include "sdram_para.v";

    reg we_r;
    reg [15:0] data_out_r;

    always @(work_state) begin
        if (work_state == `W_WD) begin
            we_r <= 1'b1;
        end else if (work_state == `W_RD) begin
            data_out_r <= sdram_data;
        end else begin
            we_r <= 1'b0;
            data_out_r <= 16'b0;
        end
    end

    assign sdram_data = we_r ? sys_data_in : 16'hzzzz;
    assign sys_data_out = data_out_r;
endmodule

`endif 