`timescale 1ns / 1ps

module drawunit(
    input clk,
    input rst_n,

    input [7:0] command,
    input [255:0] data,
    input commit,

    input [1:0] bank,
    input write_burst_data_req,
    input write_burst_data_finish,
    output write_burst_req,
    output [15:0] rgb,
    output [23:0] addr,
    output [BURST_BITS-1:0] write_burst_len,
    output  done,

    output ack  // if drawunit is busy, ack is 0
);

localparam STATE_IDLE = 4'd0;
localparam STATE_DRAW_RECT = 4'd1;

reg [3:0] state;

endmodule