`timescale 1ns / 1ps

`include "../../HDL/computer/io/vgadisplay.v"
`include "../../HDL/computer/sdram/sdram_core.v"
`include "../../HDL/computer/graphics/drawunit.v"

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
        output [4:0] b,

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

localparam X_POS = 10'd100;
localparam Y_POS = 10'd100;
localparam WIDTH = 10'd100;
localparam HEIGHT = 10'd100;

wire clk_100m;
wire vga_clk;

reg [15:0] color;
reg commit;

reg [1:0] du_bank;
reg [1:0] vga_bank;

wire write_burst_req;
wire write_burst_data_req;
wire write_burst_data_finish;

wire [15:0] rgb;
wire [23:0] addr;
wire [9:0] write_burst_len;
wire done;
wire ack;

chip_pll pll_0 (
    .clk_in(clk_50m),
    .sdram_clk(sdram_clk),
    .sdram_clk_ref(clk_100m),
    .vga_clk(vga_clk)
);

drawunit du_0(
    .clk(clk_100m),
    .rst_n(rst_n),

    .command(DRAW_CMD_RECT),
    .data({200'b0, color, HEIGHT, WIDTH, Y_POS, X_POS}),
    .commit(commit),

    .bank(du_bank),
    .write_burst_data_req(write_burst_data_req),
    .write_burst_data_finish(write_burst_data_finish),

    .write_burst_req(write_burst_req),
    .rgb(rgb),
    .addr(addr),
    .write_burst_len(write_burst_len),

    .done(done),
    .ack(ack)
);

sdram_core sdram_core_0();
vgadisplay vgadisplay_0();

endmodule
