`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:22:59 11/24/2023 
// Design Name: 
// Module Name:    sdram_para 
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

// The enumerated values of initialization states.
// You can read all details of the following paramters in the H57V2562GTR datasheet.
`define I_NOP 				4'd0

`define I_PRECHARGE  	4'd1  // precharge state
`define I_TRP 				4'd2  // time duration of the precharge operation

`define I_AUTO_REFRESH1 4'd3  // the first auto-refresh operation
`define I_TRF1				4'd4  // time duration of the first auto-refresh operation

`define I_AUTO_REFRESH2 4'd5  // the secound auto-refresh operation
`define I_TRF2  			4'd6  // time duration of the second auto-refresh operation

`define I_MRS				4'd7  // mode register settings
`define I_TMRD 			4'd8  // time duration of the mode register setting operation

`define I_DONE  			4'd9  // initialization done!


// The enumerated values of work states
`define W_IDLE				4'd0

`define W_ACTIVE 			4'd1 	// Active a row, send a RAS signal
`define W_TRCD 			4'd2	// RAS to CAS delay

`define W_READ 			4'd3
`define W_CL 				4'd4 	// CAS lagency(only for the reading operation)
`define W_RD 				4'd5 	// burst read and precharge time

`define W_WRITE 			4'd6
`define W_WD 				4'd7  // burst write time
`define W_TDAL 			4'd8	// data in and precharge time

`define W_AR 				4'd9  // auto-refresh
`define W_TRFC 			4'd10 // auto-refresh time

 
 // Commands
 // The parameters are in the "COMMAND TRUTH TABLE"
 `define CMD_INIT 			5'b01111
 `define CMD_NOP 				5'b10111
 `define CMD_PRECHARGE  	5'b10010
 `define CMD_AUTO_REFRESH	5'b10001
 `define CMD_ACTIVE			5'b10011
 `define CMD_READ 			5'b10101
 `define CMD_WRITE 			5'b10100
 `define CMD_MRS				5'b10000
 `define CMD_BURST_STOP 	5'b10110
 
 
// Time for states
`define CLK_TRP  10'd2
`define CLK_TRF  10'd6  // 60ns
`define CLK_TMRD 10'd2
`define CLK_TRCD 10'd2  // 20ns
`define CLK_TCL  10'd3  // CAS lagency
`define CLK_TDAL 10'd4  // tDPL + tRP = 2 + 2 = 4

// end time
`define end_trp 	 cnt_clk_r == CLK_TRP
`define end_trf 	 cnt_clk_r == CLK_TRF
`define end_tmrd 	 cnt_clk_r == CLK_TMRD
`define end_trcd 	 cnt_clk_r == CLK_TRCD
`define end_tcl 	 cnt_clk_r == CLK_TCL
`define end_tread  cnt_clk_r == CLK_TRP + sdrd_byte
`define end_twrite cnt_clk_r == sdwr_byte - 1
`define end_tdal 	 cnt_clk_r == CLK_TDAL