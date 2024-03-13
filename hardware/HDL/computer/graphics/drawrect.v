`timescale 1ns / 1ps

// Draw a solid rectangle on the screen
module drawrect#(
    parameter BURST_BITS = 10,
    parameter SCREEN_WIDTH = 640,
    parameter SCREEN_HEIGHT = 480,
    parameter MAX_WRITE_BURST_LEN = 128,
    parameter BIT_SIZE = 10
)
(
    input clk,
    input rst_n,
    input enable,

    input [BIT_SIZE - 1 : 0] x_pixel,
    input [BIT_SIZE - 1 : 0] y_pixel,
    input [BIT_SIZE - 1 : 0] width,
    input [BIT_SIZE - 1 : 0] height, 
    input [15 : 0] color,

    input write_burst_data_req,
    input write_burst_data_finish,
    output write_burst_req,
    output [15 : 0] rgb,
    output [21 : 0] addr,
    output [BURST_BITS - 1 : 0] write_burst_len,
    output  done
);

reg done_r;
reg [BIT_SIZE - 1 : 0] delta_x;
reg [BIT_SIZE - 1 : 0] delta_y;

wire [BIT_SIZE - 1 : 0] current_x;
wire [BIT_SIZE - 1 : 0] current_y;

wire [BIT_SIZE - 1 : 0] x_limit;
wire [BIT_SIZE - 1 : 0] y_limit;

assign current_x = x_pixel + delta_x;
assign current_y = y_pixel + delta_y;

assign x_limit = (x_pixel + width) < SCREEN_WIDTH ? (x_pixel + width) : SCREEN_WIDTH;
assign y_limit = (y_pixel + height) < SCREEN_HEIGHT ? (y_pixel + height) : SCREEN_HEIGHT;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        delta_x <= 0;
        delta_y <= 0;
        done_r <= 0;
    end else begin
        if (enable) begin
            if (write_burst_data_req) begin
                if (current_x < x_limit) begin
                    delta_x <= delta_x + 1;
                end else begin
                    if (current_y < y_limit) begin
                        delta_x <= 0;
                        delta_y <= delta_y + 1;
                    end
                end
            end else if (write_burst_data_finish) begin 
                if (current_y >= y_limit) begin
                    done_r <= 1;
                    delta_x <= 0;
                    delta_y <= 0;
                end
            end else begin
                done_r <= 0;
            end
        end
    end
end

assign addr = (current_y * SCREEN_WIDTH) + current_x;
assign write_burst_req = enable && (current_x < x_limit) && (current_y < y_limit) && !write_burst_data_finish; 
assign rgb = color;
assign write_burst_len = width < MAX_WRITE_BURST_LEN ? width : MAX_WRITE_BURST_LEN;
assign done = done_r;

endmodule