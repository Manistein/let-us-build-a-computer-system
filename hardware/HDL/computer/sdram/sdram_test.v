`timescale 1us / 10ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:35:34 12/09/2023
// Design Name:   sdram_top
// Module Name:   /home/ise/hardware/HDL/computer/sdram/sdram_test.v
// Project Name:  sdram_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sdram_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sdram_test;

	// Inputs
	reg clk_50m;
	reg rst_n;
	reg [0:23] sdram_wr_addr;
	reg [0:15] sdram_wr_data;
	reg sdram_wr_req;
	reg [0:8] sdwr_bytes;
	reg [0:23] sdram_rd_addr;
	reg sdram_rd_req;
	reg [0:8] sdrd_bytes;

	// Outputs
	wire sdram_wr_ack;
	wire [0:15] sdram_rd_data;
	wire sdram_rd_ack;
	wire sdram_init_done;
	wire sdram_busy;
	wire sdram_clk;
	wire sdram_cke;
	wire sdram_cs_n;
	wire sdram_ras_n;
	wire sdram_cas_n;
	wire [0:1] sdram_ba;
	wire [0:12] sdram_addr;
	wire sdram_we_n;

	// Bidirs
	wire [0:15] sdram_data;

	// Instantiate the Unit Under Test (UUT)
	sdram_top uut (
		.clk_50m(clk_50m), 
		.rst_n(rst_n), 
		.sdram_wr_addr(sdram_wr_addr), 
		.sdram_wr_data(sdram_wr_data), 
		.sdram_wr_req(sdram_wr_req), 
		.sdwr_bytes(sdwr_bytes), 
		.sdram_wr_ack(sdram_wr_ack), 
		.sdram_rd_addr(sdram_rd_addr), 
		.sdram_rd_data(sdram_rd_data), 
		.sdram_rd_req(sdram_rd_req), 
		.sdrd_bytes(sdrd_bytes), 
		.sdram_rd_ack(sdram_rd_ack), 
		.sdram_init_done(sdram_init_done), 
		.sdram_busy(sdram_busy), 
		.sdram_data(sdram_data), 
		.sdram_clk(sdram_clk), 
		.sdram_cke(sdram_cke), 
		.sdram_cs_n(sdram_cs_n), 
		.sdram_ras_n(sdram_ras_n), 
		.sdram_cas_n(sdram_cas_n), 
		.sdram_ba(sdram_ba), 
		.sdram_addr(sdram_addr), 
		.sdram_we_n(sdram_we_n)
	);
	
	always begin
		clk_50m = 1'b0;
		# 0.01;
		
		clk_50m = 1'b1;
		# 0.01;
	end

	always @(sdram_wr_ack or sdram_rd_ack) begin
		if (sdram_wr_ack) begin
			sdram_wr_req <= 1'b0;
		end

		if (sdram_rd_ack) begin
			sdram_rd_req <= 1'b0;
		end
	end

	initial begin
		// Initialize Inputs
		clk_50m = 0;
		rst_n = 0;
		sdram_wr_addr = 0;
		sdram_wr_data = 0;
		sdram_wr_req = 0;
		sdwr_bytes = 0;
		sdram_rd_addr = 0;
		sdram_rd_req = 0;
		sdrd_bytes = 0;

		// Wait 60 ns for global reset to finish
		# 0.06;
		
		rst_n = 1;
		
		# 300;
        
		sdram_wr_addr = {00, 0000000000010, 000000000};
		sdwr_bytes = 9'b1;
		sdram_wr_req = 1'b1;
		sdram_wr_data = 16'b1111;

		# 0.01;
		// Add stimulus here

		sdram_rd_addr = {00, 0000000000010, 000000000};
		sdrd_bytes = 9'b1;
		sdram_rd_req = 1'b1;
	end
      
endmodule

