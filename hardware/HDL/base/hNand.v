`ifndef _h_nand_
`define _h_nand_
`timescale 1ns / 1ps

module hNand(
    input wire a,
    input wire b,
    output wire out
    );

	assign out = ~(a&b);
endmodule

`endif