`timescale 1ns / 1ps

`include "../../HDL/computer/sdram/sdram_core.v"
`include "../../HDL/computer/graphics/drawunit.v"
`include "../../HDL/computer/io/frame_fifo_read.v"
`include "../../HDL/computer/io/video_timing_data.v"

module top(
        input clk_50m,
        input rst_n,

        input key1_n,

        output hsync,
        output vsync,
        output [4:0] r,
        output [5:0] g,
        output [4:0] b,

        output sdram_clk,
        output sdram_cke,
        output sdram_cs_n,
        output sdram_ras_n,
        output sdram_cas_n,
        output sdram_we_n,
        output [1:0] sdram_ba,
        output [12:0] sdram_addr,
        output [1:0] sdram_dqm,
        inout [15:0] sdram_dq
    );

localparam DRAW_CMD_RECT = 8'h01;

localparam X_POS = 10'd100;
localparam Y_POS = 10'd100;
localparam WIDTH = 10'd100;
localparam HEIGHT = 10'd100;

wire clk_100m;
wire vga_clk;

reg commit;

wire write_burst_req;
wire write_burst_data_req;
wire write_burst_data_finish;

wire [15:0] rgb;
wire [21:0] addr;
wire [9:0] write_burst_len;
// wire done;
// wire ack;

chip_pll pll_0 (
    .clk_in(clk_50m),
    .sdram_clk(sdram_clk),
    .sdram_clk_ref(clk_100m),
    .vga_clk(vga_clk)
);

always @(posedge clk_100m or negedge key1_n) begin
    if (!key1_n) begin
        commit <= 1'b1;
    end else begin
        commit <= 1'b0;
    end
end

drawunit du_0(
    .clk(clk_100m),
    .rst_n(rst_n),

    .command(DRAW_CMD_RECT),
    .data({200'b0, 16'h0ff0, HEIGHT, WIDTH, Y_POS, X_POS}),
    .commit(commit),

    .write_burst_data_req(write_burst_data_req),
    .write_burst_data_finish(write_burst_data_finish),

    .write_burst_req(write_burst_req),
    .rgb(rgb),
    .addr(addr),
    .write_burst_len(write_burst_len),

    .done(),
    .ack()
);

wire [15:0] read_data;
wire read_req_ack;

wire read_req;
wire read_en;
wire [15:0] vout_data;

wire [8:0] wr_data_count;
wire read_fifo_aclr;

video_timing_data vtd_0(
    .video_clk(vga_clk),
    .rst(!rst_n),

    .read_req(read_req),
    .read_req_ack(read_req_ack),

    .read_en(read_en),
    .read_data(read_data),
    .hs(hsync),
    .vs(vsync),
    .de(),
    .vout_data(vout_data)
);
assign {r, g, b} = vout_data;

wire rd_burst_req;
wire [9:0] rd_burst_len;
wire [23:0] rd_burst_addr;
wire [15:0] rd_burst_data;
wire rd_burst_data_valid;
wire rd_burst_finish;

fifo fifo_i0(
    .rst(read_fifo_aclr),
    .wr_clk(clk_100m),
    .rd_clk(vga_clk),
    .din(rd_burst_data),
    .wr_en(rd_burst_data_valid),
    .rd_en(read_en),
    .dout(read_data),
    .full(),
    .empty(),
    .rd_data_count(),
    .wr_data_count(wr_data_count)
);

frame_fifo_read
#
(
	.MEM_DATA_BITS              (10'd16),
	.ADDR_BITS                  (10'd24),
	.BUSRT_BITS                 (10'd10),
	.BURST_SIZE                 (256'd128),
    .FIFO_DEPTH                 (10'd512)
)
frame_fifo_read_m0
(
	.rst                        (!rst_n),
	.mem_clk                    (clk_100m),
	.rd_burst_req               (rd_burst_req),   
	.rd_burst_len               (rd_burst_len),  
	.rd_burst_addr              (rd_burst_addr),
	.rd_burst_data_valid        (rd_burst_data_valid),    
	.rd_burst_finish            (rd_burst_finish),
	.read_req                   (read_req),
	.read_req_ack               (read_req_ack),
	.read_finish                (),
	.read_addr_0                (24'd0),
	.read_addr_1                (24'd0),
	.read_addr_2                (24'd0),
	.read_addr_3                (24'd0),
	.read_addr_index            (2'd0),    
	.read_len                   (24'd307200), // 640*480
	.fifo_aclr                  (read_fifo_aclr),
	.wr_data_count              ({7'b0, wr_data_count})
);

sdram_core sdram_core_0(
    .clk(clk_100m),
    .rst(!rst_n),

    .wr_burst_req(write_burst_req),
    .wr_burst_data(rgb),
    .wr_burst_len(write_burst_len),
    .wr_burst_addr({2'b00, addr}),

    .wr_burst_data_req(write_burst_data_req),
    .wr_burst_finish(write_burst_data_finish),

    .rd_burst_req(rd_burst_req),
    .rd_burst_len(rd_burst_len),
    .rd_burst_addr(rd_burst_addr),

    .rd_burst_data(rd_burst_data),
    .rd_burst_data_valid(rd_burst_data_valid),
    .rd_burst_finish(rd_burst_finish),

    .sdram_cke(sdram_cke),
    .sdram_cs_n(sdram_cs_n),
    .sdram_ras_n(sdram_ras_n),
    .sdram_cas_n(sdram_cas_n),
    .sdram_we_n(sdram_we_n),
    .sdram_ba(sdram_ba),
    .sdram_addr(sdram_addr),
    .sdram_dqm(sdram_dqm),
    .sdram_dq(sdram_dq)
);

endmodule
