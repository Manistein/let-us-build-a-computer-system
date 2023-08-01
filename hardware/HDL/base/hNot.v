`ifndef _h_not_
`define _h_not_
`timescale 1ns / 1ps
`include "hNand.v"

module hNot(
    input wire in,
    output wire out
    );

   	hNand hnand(.a(in), .b(in), .out(out)); 

endmodule

`endif