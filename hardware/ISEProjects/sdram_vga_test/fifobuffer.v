module fifobuffer(
    input clk_100m,
    input rst_n,

    input [15:0] rd_burst_data,
    input rd_burst_data_valid,
    input rd_burst_finish,

    output rd_burst_req,
    output [9:0] rd_burst_len,
    output [21:0] rd_burst_addr
);

reg wr_en;
reg rd_burst_req_r;
reg [21:0] rd_burst_addr_r;

assign rd_burst_req = rd_burst_req_r;
assign rd_burst_len = 10'd128;
assign rd_burst_addr = rd_burst_addr_r;

always @(posedge clk_100m or negedge rst_n) begin
    if (!rst_n) begin
        wr_en <= 1'b0;
        rd_burst_req_r <= 1'b0;
        rd_burst_addr_r <= 22'b0;
    end else begin
        if (~full) begin
            if (rd_burst_data_valid) begin
                wr_en <= 1'b1;
                rd_burst_req_r <= 1'b0;

            end else if (rd_burst_finish) begin
                wr_en <= 1'b0;
                rd_burst_req_r <= 1'b1;
            end else begin
                rd_burst_req_r <= 1'b0;
            end
        end else begin
            wr_en <= 1'b0;
            rd_burst_req_r <= 1'b0;
        end
    end
end

fifo fifo_0(
  rst(!rst_n),
  wr_clk(clk_100m),
  rd_clk(vga_clk),
  din(rd_burst_data),
  wr_en(wr_en),
  rd_en,
  dout,
  full(full),
  empty,
  rd_data_count(),
  wr_data_count()

);

endmodule