`ifndef _sdram_ctrl_
`define _sdram_ctrl_

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:02:20 11/25/2023 
// Design Name: 
// Module Name:    sdram_ctrl 
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
module sdram_ctrl(
    input clk_100m,
    input rst_n,
    input sdram_wr_req,
    input sdram_rd_req,
    input [8:0] sdwr_bytes,
    input [8:0] sdrd_bytes,
    output sdram_wr_ack,
    output sdram_rd_ack,
    output sdram_init_done,
    output [3:0] init_state,
    output [3:0] work_state,
    output [15:0] cnt_clk,
	output sdram_busy,
    output sys_rw_n  // 0 for read, 1 for write
    );

	`include "sdram_para.v";
	
	reg [15:0] cnt_clk_r;
	reg [3:0] work_state_r;
	reg [3:0] init_state_r;
	reg [15:0] cnt_ref_r;  // refresh
	reg done_200us;
	reg sys_rw_n_r;
	
	reg sdram_ref_req;
	wire sdram_ref_ack;
	wire init_done;
	
	reg reset_cnt_clk_n;
	
	// update clock counter
	always @(posedge clk_100m) begin
		if (!rst_n) begin
			cnt_clk_r <= 0;
			done_200us <= 0;
		end else begin
			if (!reset_cnt_clk_n) begin
				cnt_clk_r <= 0;
			end else begin 
				cnt_clk_r <= cnt_clk_r + 1;
			end
		end
		
		if (cnt_clk_r == 16'd20000) begin
			done_200us <= 1;
		end
	end
	
	//auto-refresh counter
	assign sdram_ref_ack = (work_state_r == `W_AR) ? 1'b1 : 1'b0;
	assign init_done = (init_state_r == `I_DONE) ? 1'b1 : 1'b0;
	always @(posedge clk_100m) begin
		if (!rst_n) begin
			cnt_ref_r <= 0;
			sdram_ref_req <= 1'b0;
		end else begin
			// 64ms / 8192 is about 7500ns, a clock cycle is about 10ns in 100Mhz clock;
			if (cnt_ref_r == 16'd748) begin
				sdram_ref_req <= 1'b1;
				cnt_ref_r <= cnt_ref_r + 1'b1;
			end else if (sdram_ref_ack) begin
				sdram_ref_req <= 0;
				cnt_ref_r <= 0;
			end else if (init_done) begin
				cnt_ref_r <= cnt_ref_r + 1'b1;
			end
		end
	end

	// state fsm
	always @(posedge clk_100m) begin
		if (!rst_n) begin
			work_state_r <= `W_IDLE;
			init_state_r <= `I_NOP;
		end
		
		case (init_state_r)
		`I_NOP: init_state_r <= done_200us ? `I_PRECHARGE : `I_NOP;
		`I_PRECHARGE: init_state_r <= `I_TRP;
		`I_TRP: init_state_r <= (`end_trp) ? `I_AUTO_REFRESH1 : `I_TRP;
		`I_AUTO_REFRESH1: init_state_r <= `I_TRF1;
		`I_TRF1: init_state_r <= (`end_trf) ? `I_AUTO_REFRESH2 : `I_TRF1;
		`I_AUTO_REFRESH2: init_state_r <= `I_TRF2;
		`I_TRF2: init_state_r <= (`end_trf) ? `I_MRS : `I_TRF2;
		`I_MRS: init_state_r <= `I_TMRD;
		`I_TMRD: init_state_r <= (`end_tmrd) ? `I_DONE : `I_TMRD;
		default: begin
			case (work_state_r)
			`W_IDLE: begin
				if (sdram_ref_req && sdram_init_done) begin
					work_state_r <= `W_AR;
					sys_rw_n_r <= 0;
				end else if (sdram_rd_req && sdram_init_done) begin
					work_state_r <= `W_ACTIVE;
					sys_rw_n_r <= 0;
				end else if (sdram_wr_req && sdram_init_done) begin
					work_state_r <= `W_ACTIVE;
					sys_rw_n_r <= 1;
				end else begin
					work_state_r <= `W_IDLE;
				end
			end
			`W_ACTIVE: work_state_r <= `W_TRCD;
			`W_TRCD: begin
				if (`end_trcd) begin
					work_state_r <= (sys_rw_n_r == 0) ? `W_READ : `W_WRITE;
				end else begin
					work_state_r <= `W_TRCD;
				end
			end
			
			// read operation
			`W_READ: work_state_r <= `W_CL;
			`W_CL: work_state_r <= (`end_tcl) ? `W_RD : `W_CL;
			`W_RD: work_state_r <= (`end_tread) ? `W_IDLE : `W_RD;
			
			// write operation
			`W_WRITE: work_state_r <= `W_WD;
			`W_WD: work_state_r <= (`end_twrite) ? `W_TDAL : `W_WD;
			`W_TDAL: work_state_r <= (`end_tdal) ? `W_IDLE : `W_TDAL;
			
			// auto-refresh
			`W_AR: work_state_r <= `W_TRFC;
			`W_TRFC: work_state_r <= (`end_trf) ? `W_IDLE : `W_TRFC;
			endcase
		end
		endcase
	end
	
	// try to reset cnt_clk_r
	always @(init_state_r or work_state_r or cnt_clk_r or sdrd_bytes or sdwr_bytes) begin
		case (init_state_r)
			`I_NOP: reset_cnt_clk_n <= done_200us ? 1'b0 : 1'b1;
			`I_PRECHARGE: reset_cnt_clk_n <= 1'b1;
			`I_TRP: reset_cnt_clk_n <= (`end_trp)?1'b0:1'b1;
			`I_AUTO_REFRESH1, `I_AUTO_REFRESH2: reset_cnt_clk_n <= 1'b1; 
			`I_TRF1, `I_TRF2: reset_cnt_clk_n <= (`end_trf)?1'b0:1'b1;
			`I_MRS: reset_cnt_clk_n <= 1'b1;
			`I_TMRD: reset_cnt_clk_n <= (`end_tmrd)?1'b0:1'b1;
			`I_DONE: begin
				case (work_state_r) 
					`W_IDLE: reset_cnt_clk_n <= 1'b1;
					`W_ACTIVE: reset_cnt_clk_n <= 1'b0;
					`W_TRCD: reset_cnt_clk_n <= (`end_trcd)?1'b0:1'b1;

					// read operation
					`W_READ: reset_cnt_clk_n <= 1'b0; 
					`W_CL: reset_cnt_clk_n <= (`end_tcl)?1'b0:1'b1;
					`W_RD: reset_cnt_clk_n <= (`end_tread)?1'b0:1'b1;

					// write operation
					`W_WRITE: reset_cnt_clk_n <= 1'b0;
					`W_WD: reset_cnt_clk_n <= (`end_twrite)?1'b0:1'b1;
					`W_TDAL: reset_cnt_clk_n <= (`end_tdal)?1'b0:1'b1;

					// auto refresh
					`W_AR: reset_cnt_clk_n <= 1'b0;
					`W_TRFC: reset_cnt_clk_n <= (`end_trf)?1'b0:1'b1;
					default: reset_cnt_clk_n <= 1'b1;
				endcase
			end
			default: reset_cnt_clk_n <= 1'b1;
		endcase
	end
		
	assign sdram_busy = ((init_state_r == `I_DONE) && (work_state_r == `W_IDLE));

	assign sdram_rd_ack = work_state_r == `W_RD;
	assign sdram_wr_ack = work_state_r == `W_TDAL;
	assign sdram_init_done = init_state_r == `I_DONE;
	assign init_state = init_state_r;
	assign work_state = work_state_r;
	assign cnt_clk = cnt_clk_r;
	assign sys_rw_n = sys_rw_n_r;
endmodule

`endif 