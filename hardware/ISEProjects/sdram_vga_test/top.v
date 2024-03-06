`timescale 1ns / 1ps

`include "../../HDL/computer/io/vgadisplay.v"
`include "../../HDL/computer/sdram/sdram_core.v"
`include "../../HDL/computer/graphics/drawrect.v"

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:01 02/28/2024 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
        input clk_50m,
        input rst_n,

        input key1,
        input key2,
        input key3,
        input key4,

        output hsync,
        output vsync,
        output [4:0] r,
        output [5:0] g,
        output [4:0] b

        output sdram_clk,
        output sdram_cke,
        output sdram_cs_n,
        output sdram_ras_n,
        output sdram_cas_n,
        output sdram_we_n,
        output [1:0] sdram_ba,
        output [12:0] sdram_addr,
        output [1:0] sdram_dqm,
        inout [15:0] sdram_dq
    );


endmodule
