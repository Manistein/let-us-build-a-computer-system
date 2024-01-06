`include "../sdram/sdram_top.v"
`include "../io/segcom.v"

module counter (
	input clock_50m,
	input reset_n,

	output led0,
	output [0:7] sel,
	output [0:7] data,

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
	localparam CLOCK_CYCLE_PER_SEC = 50000000;
	localparam CLOCK_CYCLE_HALF_SEC = 25000000;
	localparam WRITE_ADDR = 24'b0;
	localparam READ_ADDR = 24'b0;

	reg [0:31] clock_counter;
	reg [0:15] v_wr_reg; // accumulator register
	reg [0:15] v_rd_reg;
	reg read_req;
	reg write_req;

	wire sdram_wr_ack;
	wire sdram_rd_ack;
	wire sdram_init_done;
	wire sdram_busy;

	always @(posedge clock_50m or negedge reset_n) begin
		if (!reset_n) begin
			clock_counter <= 32'b0;
			v_wr_reg <= 16'b0;
			v_rd_reg <= 16'b0;
			read_req <= 1'b0;
			write_req <= 1'b0;
		end else if (clock_counter == CLOCK_CYCLE_HALF_SEC and sdram_init_done) begin
			read_req <= 1'b1;
		end else if (clock_counter == CLOCK_CYCLE_PER_SEC and sdram_init_done) begin
			clock_counter <= 32'b0;
			v_wr_reg <= v_reg + 1'b1;
			write_req <= 1'b1;
		end else if (sdram_init_done) begin
			clock_counter <= clock_counter + 1'b1;
			read_req <= 1'b0;
			write_req <= 1'b0;
		end
	end

	sdram_top sdram_com(
		.clk_50m(clock_50m),
    	.rst_n(reset_n),

    	.sdram_wr_addr(WRITE_ADDR),
    	.sdram_wr_data(v_wr_reg),
    	.sdram_wr_req(write_req),
    	.sdwr_bytes(9'b1), // brust write size
    	.sdram_wr_ack(sdram_wr_ack),

    	.sdram_rd_addr(READ_ADDR),
    	.sdram_rd_data(v_rd_reg),
    	.sdram_rd_req(read_req),
    	.sdrd_bytes(9'b1), // brust read size
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

	// output to seg display
	reg [0:7] sel_reg;
	reg [0:7] seg_data_reg;
	reg [9:0] segcounter;

	wire [7:0] segdata0;
	wire [7:0] segdata1;
	wire [7:0] segdata2;
	wire [7:0] segdata3;

	segcom hseg0(.val(v_rd_reg[3:0]), .data(segdata0));
	segcom hseg1(.val(v_rd_reg[7:4]), .data(segdata1));
	segcom hseg2(.val(v_rd_reg[11:8]), .data(segdata2));
	segcom hseg3(.val(v_rd_reg[15:12]), .data(segdata3));

	always @(posedge clock_50m or negedge reset_n) begin
		if (!reset_n) begin
			sel_reg <= 8'b0;
			seg_data_reg <= 8'b0;
			segcounter <= 10'b0;
		end else begin
			segcounter <= segcounter + 2'b1;
			case (segcounter[9:8])
			2'b00: begin
				sel_reg <= 8'b11111110;
				seg_data_reg <= segdata0;
			end
			2'b01: begin
				sel_reg <= 8'b11111101;
				seg_data_reg <= segdata1;
			end
			2'b10: begin
				sel_reg <= 8'b11111011;
				seg_data_reg <= segdata2;
			end
			2'b11: begin
				sel_reg <= 8'b11110111;
				seg_data_reg <= segdata3;
			end
			default: begin
				segcounter <= 0;
			end
			endcase
		end
	end

	assign led0 = sdram_init_done? 1'b1 : 1'b0;
	assign sel = sel_reg; 
	assign data = seg_data_reg;
endmodule