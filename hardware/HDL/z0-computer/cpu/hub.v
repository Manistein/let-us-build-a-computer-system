`ifndef _hub_v_ 
`define _hub_v_

module hub(
    input [15:0] instruction,
    input [15:0] pc_in,

    // mov instruction
    input [15:0] mov_in_x,
    input [15:0] mov_in_y,
    input [15:0] mov_in_mar,
    input [15:0] mov_in_mdr,

    // load instruction
    input [15:0] load_to_mdr;
    input is_loaded,

    output [15:0] final_x,
    output [15:0] final_y,
    output [15:0] final_mar,
    output [15:0] final_mdr,
    output [15:0] pc_out
);

always @* begin 
    final_x = mov_in_x;
    final_y = mov_in_y;
    final_mar = mov_in_mar;
    final_mdr = mov_in_mdr;

    case (instruction[15:8])
        OP_MOVE: begin
            pc_out = pc_in + 1;
        end
        OP_LOAD: begin
            if (is_loaded) begin 
                final_mdr = load_to_mdr;
                pc_out = pc_in + 1;
            end else begin
                pc_out = pc_in;
            end 
        end
        default: begin
            final_x = 16'b0;
            final_y = 16'b0;
            final_mar = 16'b0;
            final_mdr = 16'b0;
            pc_out = pc_in;
        end
    endcase
end 

endmodule

`endif