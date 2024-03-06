`timescale 1ns / 1ps

`include "commands.v"
`include "drawrect.v"

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
localparam STATE_DRAW = 4'd1;

reg [3:0] prev_state;
reg [3:0] state;
reg [7:0] command_r;
reg [255:0] data_r;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state <= STATE_IDLE;
        prev_state <= STATE_IDLE;

        command_r <= 8'd0;
        data_r <= 256'd0;
    end else begin
        case (state)
            STATE_IDLE: begin
                if (commit) begin
                    state <= STATE_DRAW;
                    prev_state <= state;

                    command_r <= command;
                    data_r <= data;
                end else begin
                    prev_state <= state;
                end
            end
            STATE_DRAW: begin
                if (done) begin
                    state <= STATE_IDLE;
                end else begin
                    prev_state <= state;
                end
            end
            default: begin
                state <= STATE_IDLE;
                prev_state <= STATE_IDLE;
            end
        endcase
    end
end 

assign ack = (prev_state == STATE_IDLE) & (state == STATE_DRAW);

wire dr_enable;
wire dr_wr_burst_req;
wire [15:0] dr_rgb;
wire [23:0] dr_addr;
wire [9:0] dr_wr_burst_len;
wire dr_done;

assign dr_enable = (state == STATE_DRAW) & (command_r == DRAW_CMD_RECT);

drawrect dr_0(
    .clk(clk), 
    .rst_n(rst_n), 
    .enable(dr_enable),

    .x_pixel(data_r[9:0]), 
    .y_pixel(data_r[19:10]), 
    .width(data_r[29:20]), 
    .height(data_r[39:30]), 
    .color(data_r[55:40]), 
    
    .bank(bank), 
    .write_burst_data_req(write_burst_data_req), 
    .write_burst_data_finish(write_burst_data_finish), 

    .write_burst_req(dr_wr_burst_req), 
    .rgb(dr_rgb), 
    .addr(dr_addr), 
    .write_burst_len(dr_wr_burst_len), 

    .done(dr_done));

always @(*) begin
    case (command_r)
        DRAW_CMD_RECT: begin
            write_burst_req = dr_wr_burst_req;
            rgb = dr_rgb;
            addr = dr_addr;
            write_burst_len = dr_wr_burst_len;
            done = dr_done;
        end
        default: begin
            write_burst_req = 0;
            rgb = 16'd0;
            addr = 24'd0;
            write_burst_len = 10'd0;
            done = 0;
        end
    endcase
end

endmodule