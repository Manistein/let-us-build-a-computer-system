`ifndef _load_v_
`define _load_v_

// logic circuit for load
// opcode: 8'b00000001
// LOAD X/Y/MAR/MDR, in_s
// in_s = X/Y/MAR/MDR
module load(
    input clk,
    input rst_n,

    input [15:0] instruction,
    input [15:0] MDR,
    input [15:0] in_mem_data,

    output [15:0] load_out,
    output is_loaded
);

localparam STATE_IDLE = 2'b00;
localparam STATE_LOAD = 2'b01;

reg [1:0] state;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state <= STATE_IDLE;
    end else begin
        case (state)
            STATE_IDLE: begin
                if (instruction[15:8] == 8'b00000001) begin
                    state <= STATE_LOAD;
                end
            end
            STATE_LOAD: begin
                state <= STATE_IDLE;
            end
            default: begin
                state <= STATE_IDLE;
            end
        endcase
    end
end 

assign load_out = (state == STATE_LOAD) ? in_mem_data : MDR;
assign is_loaded = (state == STATE_LOAD);

endmodule

`endif 