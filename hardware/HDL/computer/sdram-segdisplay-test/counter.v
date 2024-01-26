`include "../io/segcom.v"
`include "../sdram/sdram_top.v"

module counter(
    input clock,
    input reset,
    output [7:0] sel,
    output [7:0] data,
	output led0
    );

	sdram_top sdram_com(
		.clock_50m(clock), 
		.rst_n(reset), 

		.sdram_wr_addr(),
		.sdram_wr_data(),
		.sdram_wr_req(),
		.sdwr_bytes(),
		.sdram_wr_ack(),
		
		.sdram_rd_addr(),
    	.sdram_rd_data(),
    	.sdram_rd_req(),
    	.sdrd_bytes(), // brust read size
    	.sdram_rd_ack(),

		.sdram_init_done(),
    	.sdram_busy(),

		.sdram_data(),
    	.sdram_clk(),
    	.sdram_cke(), 
    	.sdram_cs_n(), 
    	.sdram_ras_n(), 
    	.sdram_cas_n(), 
    	.sdram_ba(),
    	.sdram_addr(),
    	.sdram_we_n()
	);
);

endmodule