`timescale 1ns / 1ps

`include "sdram_ctrl.v"
`include "sdram_cmd.v"
`include "sdram_rw_data.v"

module sdram_top(
    input clk_50m,
    input rst_n,

    input [0:23] sdram_wr_addr,
    input [0:15] sdram_wr_data,
    input sdram_wr_req,
    input [0:8] sdwr_bytes, // brust write size
    output sdram_wr_ack,

    input [0:23] sdram_rd_addr,
    output [0:15] sdram_rd_data,
    input sdram_rd_req,
    input [0:8] sdrd_bytes, // brust read size
    output sdram_rd_ack,

    output sdram_init_done,
    output sdram_busy,

    inout [0:15] sdram_data,
    output sdram_clk,
    output sdram_cke, 
    output sdram_cs_n, 
    output sdram_ras_n, 
    output sdram_cas_n, 
    output [0:1] sdram_ba,
    output [0:12] sdram_addr,
    output sdram_we_n
);
    wire clk_100m;
    wire [0:3] init_state;
    wire [0:3] work_state;
    wire [0:31] cnt_clk;
    wire sys_rw_n;
		
	 sdram_pll	u_sdram_pll(
		.CLK_IN1	(clk_50m),
		.RESET	(~rst_n),
		.LOCKED	(),
			
		.CLK_OUT1      (clk_100m)
	 );

    sdram_ctrl fsm(
        .clk_100m(clk_100m),
        .rst_n(rst_n),
        .sdram_wr_req(sdram_wr_req),
        .sdram_rd_req(sdram_rd_req),
        .sdwr_bytes(sdwr_bytes),
        .sdrd_bytes(sdrd_bytes),
        .sdram_wr_ack(sdram_wr_ack),
        .sdram_rd_ack(sdram_rd_ack),
        .sdram_init_done(sdram_init_done),
        .init_state(init_state),
        .work_state(work_state),
        .cnt_clk(cnt_clk),
	    .sdram_busy(sdram_busy),
        .sys_rw_n(sys_rw_n)  // 0 for read, 1 for write
    );

    sdram_cmd cmd(
        .clk_100m(clk_100m),
        .rst_n(rst_n),
        .sdwr_bytes(sdwr_bytes), // 1~512 bytes
        .sdrd_bytes(sdrd_bytes), // 1~512 bytes
        .sys_wraddr(sdram_wr_addr), // [22:23] for bank select, [9:21] for row address, [0:8] for column address
        .sys_rdaddr(sdram_rd_addr),

        .init_state(init_state),
        .work_state(work_state),
        .cnt_clk(cnt_clk),
        .sys_r_wn(sys_rw_n),
    
        .sdram_cke(sdram_cke),
        .sdram_cs_n(sdram_cs_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_ba(sdram_ba),
        .sdram_addr(sdram_addr),
        .sdram_we_n(sdram_we_n)
    );

    sdram_rw_data rw_data(
        .clk_100m(clk_100m),
        .rst_n(rst_n),

        .sdram_data(sdram_data),
        .sys_data_in(sdram_wr_data), // write data into the sdram
        .work_state(work_state),

        .sys_data_out(sdram_rd_data) // read data from the sdram
    );

endmodule