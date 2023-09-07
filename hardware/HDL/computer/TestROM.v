`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:02:52 09/07/2023
// Design Name:   test_rom
// Module Name:   /home/ise/HDL/computer/TestROM.v
// Project Name:  hack_computer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test_rom
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestROM;
	localparam T = 10;

	// Inputs
	reg clka;
	reg ena;
	reg [31:0] addra;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	test_rom uut (
		.clka(clka), 
		.ena(ena), 
		.addra(addra), 
		.douta(douta)
	);
	
	always begin
		clka = 1'b0;
		#(T/2);
		
		clka = 1'b1;
		#(T/2);
		
		addra = addra + 3'b100;
	end

	initial begin
		// Initialize Inputs
		ena = 1;
		addra = 0;

		#1000;
	end
      
endmodule

