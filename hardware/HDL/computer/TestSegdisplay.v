`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:13:44 09/07/2023
// Design Name:   segdisplay
// Module Name:   /home/ise/HDL/computer/TestSegdisplay.v
// Project Name:  hack_computer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: segdisplay
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestSegdisplay;
	localparam T = 10;

	// Inputs
	reg clock;
	reg reset;
	reg [15:0] pc;
	reg [15:0] instruction;

	// Outputs
	// wire [7:0] sel;
	// wire [7:0] data;

	// Instantiate the Unit Under Test (UUT)
	// segdisplay uut (
		// .clock(clock), 
		// .reset(reset), 
		// .sel(sel), 
		// .data(data)
	// );
	
	test_rom uut (
		.clka(clock), 
		.ena(1'b1), 
		.addra({16'b0, pc}), 
		.douta(instruction)
	);
	
	always begin
		clock = 1'b0;
		#(T/2);
		
		clock = 1'b1;
		#(T/2);
	end

	initial begin
		reset = 0;
		pc = 16'b0;
		
		if (instruction != 16'h0000) begin
			$display("error");
			$finish;
		end
		
		@(negedge clock);
	end
      
endmodule

