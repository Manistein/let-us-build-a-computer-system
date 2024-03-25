`timescale 1ns / 1ps
`include "../../../HDL/computer/io/video_timing_data.v"

//////////////////////////////////////////////////////////////////////////////////
//   vga color bar test                                                         //
//                                                                              //
//  Author: meisq                                                               //
//          msq@qq.com                                                          //
//          ALINX(shanghai) Technology Co.,Ltd                                  //
//          heijin                                                              //
//     WEB: http://www.alinx.cn/                                                //
//     BBS: http://www.heijin.org/                                              //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Copyright (c) 2017,ALINX(shanghai) Technology Co.,Ltd                        //
//                    All rights reserved                                       //
//                                                                              //
// This source file may be used and distributed without restriction provided    //
// that this copyright statement is not removed from the file and that any      //
// derivative work contains the original copyright notice and the associated    //
// disclaimer.                                                                  //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

//================================================================================
//  Revision History:
//  Date          By            Revision    Change Description
//--------------------------------------------------------------------------------
//2017/7/20                    1.0          Original
//*******************************************************************************/
module top(
	input                       clk,
	input                       rst_n,
	//vga output        
	output                      vga_out_hs, //vga horizontal synchronization         
	output                      vga_out_vs, //vga vertical synchronization                  
	output[4:0]                 vga_out_r,  //vga red
	output[5:0]                 vga_out_g,  //vga green
	output[4:0]                 vga_out_b   //vga blue
	
);

wire                            video_clk;
wire                            video_hs;
wire                            video_vs;

assign vga_out_hs = video_hs;
assign vga_out_vs = video_vs;

//generate video pixel clock
video_pll video_pll_m0(
	.CLK_IN1(clk),
	.CLK_OUT1(video_clk),
	.RESET(~rst_n),
	.LOCKED(LOCKED)
	);

wire [15:0] out_rgb;
video_timing_data vtd0(
	.video_clk(video_clk),
	.rst(~rst_n),
	.read_req(),
	.read_req_ack(),
	.read_en(),
	.read_data(16'b1111100000000000),
	.hs(video_hs),
	.vs(video_vs),
	.de(),
	.vout_data(out_rgb)
);

assign vga_out_r = out_rgb[15:11];
assign vga_out_g = out_rgb[10:5];
assign vga_out_b = out_rgb[4:0];

endmodule