`include "../sdram/sdram_top.v"
`include "../io/segcom.v"

module counter (
	input clock_50m,
	input reset_n,

	output led0,
	output [7:0] sel,
	output [7:0] data,

	inout [15:0] sdram_data,
    output sdram_clk,
    output sdram_cke, 
    output sdram_cs_n, 
    output sdram_ras_n, 
    output sdram_cas_n, 
    output [1:0] sdram_ba,
    output [12:0] sdram_addr,
    output sdram_we_n
);
	localparam CLOCK_CYCLE_PER_SEC = 50000000;
	localparam CLOCK_CYCLE_HALF_SEC = 25000000;
	localparam WRITE_ADDR = 24'b0;
	localparam READ_ADDR = 24'b0;

	wire clk_50m;
	wire clk_sdram_ref;
	wire clk_sdram_refout;
	wire clk_sdram_oddr;
	
	sdram_pll	u_sdram_pll(
		.CLK_IN1(clock_50m),
		.RESET(~reset_n),
		.LOCKED(),
			
		.CLK_OUT1(clk_sdram_ref),
		.CLK_OUT2(clk_sdram_oddr),
		.CLK_OUT3(clk_50m)
	 );

	ODDR2 #(
    	.DDR_ALIGNMENT("NONE"), // Sets output alignment to "NONE", "C0" or "C1" 
    	.INIT(1'b0),    // Sets initial state of the Q output to 1'b0 or 1'b1
    	.SRTYPE("SYNC") // Specifies "SYNC" or "ASYNC" set/reset
    ) U_ODDR2_c2 (
      .Q(clk_sdram_refout),   // 1-bit DDR output data
      .C0(clk_sdram_oddr),   // 1-bit clock input
      .C1(~clk_sdram_oddr),   // 1-bit clock input
      .CE(1'b1), // 1-bit clock enable input
      .D0(1'b1), // 1-bit data input (associated with C0)
      .D1(1'b0), // 1-bit data input (associated with C1)
      .R(1'b0),   // 1-bit reset input
      .S(1'b0)    // 1-bit set input
	);

	assign sdram_clk = clk_sdram_refout;

	reg [31:0] clock_counter;
	reg [15:0] v_wr_reg; // accumulator register
	reg [15:0] v_rd_reg;
	reg read_req;
	reg write_req;

	wire [15:0] rd_from_sdram;
	wire sdram_wr_ack;
	wire sdram_rd_ack;
	wire sdram_init_done;
	wire sdram_busy;

	always @(posedge clk_50m or negedge reset_n) begin
		if (!reset_n) begin
			clock_counter <= 32'b0;
			v_wr_reg <= 16'b0;
			read_req <= 1'b0;
			write_req <= 1'b0;
		end else if ((clock_counter == CLOCK_CYCLE_HALF_SEC) && sdram_init_done) begin
			read_req <= 1'b1;
		end else if ((clock_counter == CLOCK_CYCLE_PER_SEC) && sdram_init_done) begin
			clock_counter <= 32'b0;
			v_wr_reg <= v_wr_reg + 1'b1;
			write_req <= 1'b1;
		end else if (sdram_init_done) begin
			clock_counter <= clock_counter + 1'b1;
			read_req <= 1'b0;
			write_req <= 1'b0;
		end
	end

	sdram_top sdram_com(
		.clk_100m(clk_sdram_ref),
    	.rst_n(reset_n),

    	.sdram_wr_addr(WRITE_ADDR),
    	.sdram_wr_data(v_wr_reg),
    	.sdram_wr_req(write_req),
    	.sdwr_bytes(9'b1), // brust write size
    	.sdram_wr_ack(sdram_wr_ack),

    	.sdram_rd_addr(READ_ADDR),
    	.sdram_rd_data(rd_from_sdram),
    	.sdram_rd_req(read_req),
    	.sdrd_bytes(9'b1), // brust read size
    	.sdram_rd_ack(sdram_rd_ack),

    	.sdram_init_done(sdram_init_done),
    	.sdram_busy(sdram_busy),

    	.sdram_data(sdram_data),
    	// .sdram_clk(sdram_clk),
    	.sdram_cke(sdram_cke), 
    	.sdram_cs_n(sdram_cs_n), 
    	.sdram_ras_n(sdram_ras_n), 
    	.sdram_cas_n(sdram_cas_n), 
    	.sdram_ba(sdram_ba),
    	.sdram_addr(sdram_addr),
    	.sdram_we_n(sdram_we_n)
	);

	always @(rd_from_sdram) begin
		v_rd_reg <= (!reset_n) ? 16'b0 : rd_from_sdram;
	end

	// output to seg display
	reg [7:0] sel_reg;
	reg [7:0] seg_data_reg;
	reg [9:0] segcounter;

	wire [7:0] segdata0;
	wire [7:0] segdata1;
	wire [7:0] segdata2;
	wire [7:0] segdata3;

	segcom hseg0(.val(v_rd_reg[3:0]), .data(segdata0));
	segcom hseg1(.val(v_rd_reg[7:4]), .data(segdata1));
	segcom hseg2(.val(v_rd_reg[11:8]), .data(segdata2));
	segcom hseg3(.val(v_rd_reg[15:12]), .data(segdata3));

	always @(posedge clk_50m or negedge reset_n) begin
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