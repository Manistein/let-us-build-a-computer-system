`timescale 1ns / 1ps

`include "hCPU.v"
`include "./io/segcom.v"

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:04:31 09/07/2023 
// Design Name: 
// Module Name:    segdisplay 
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
module segdisplay(
    input clock,
    input reset,
    output reg [7:0] sel,
    output reg [7:0] data
    );
	 
	 // localparam MAX_COUNTER_VALUE = 873814;
	 localparam MAX_COUNTER_VALUE = 1;
	 
	 reg  [31:0] counter;
	 wire [31:0] instruction;
	 
	 wire [15:0] inM;
	 wire [15:0] outM;
	 wire writeM;
	 wire [15:0] addressM;
	 wire [15:0] pc;
	 
	 wire [7:0] segdata0;
	 wire [7:0] segdata1;
	 wire [7:0] segdata2;
	 wire [7:0] segdata3;
	 reg [1:0] segcounter;
	 
	 reg delay_clock;
	 
	 reg [15:0] memory;
	 
	 always @(posedge clock) begin
		if (counter >= MAX_COUNTER_VALUE) begin
			delay_clock <= ~delay_clock;
			counter <= 32'b0;
		end else begin
			counter <= counter + 1;
		end
	 end

	test_rom hrom(.clka(delay_clock), .ena(1'b1), .addra({16'b0, pc}), .douta(instruction));
	
	hCPU hcpu(.inM(inM), 
	.instruction(instruction[15:0]), 
	.reset(reset), 
	.clock(delay_clock), 
	.outM(outM), 
	.writeM(writeM), 
	.addressM(addressM),
	.pc(pc));
	
	always @(posedge delay_clock) begin
		memory <= (writeM == 1'b1) ? outM : memory;
	end
	
	segcom hseg0(.val(memory[3:0]), .data(segdata0));
	segcom hseg1(.val(memory[7:4]), .data(segdata1));
	segcom hseg2(.val(memory[11:8]), .data(segdata2));
	segcom hseg3(.val(memory[15:12]), .data(segdata3));
	
	always @(posedge clock) begin
		segcounter <= segcounter + 1;
		case (segcounter)
			2'b00: begin
				sel = 8'b11111110;
				data = segdata0;
			end
			2'b01: begin
				sel = 8'b11111101;
				data = segdata1;
			end
			2'b10: begin
				sel = 8'b11111011;
				data = segdata2;
			end
			2'b11: begin
				sel = 8'b11110111;
				data = segdata3;
			end
			default: begin
				data = 8'bz;
				sel = 8'bz;
			end
		endcase
	end
	
	initial begin
		counter = 32'b0;
		delay_clock = 1'b0;
		segcounter = 2'b0;
	end

endmodule
