module sdram_simple (
    input clk_100m_i,
    input rst_n_i,        // reset operation, active low
    input refresh_i,      // refresh operation, active high

    input [23:0] addr_i,  // [23:22] bank, [21:9] row, [8:0] column 
    input [15:0] data_i,  // host data to SDRAM
    input rw_i,           // read/write operation, active high
    input we_n_i,         // write enable, active low 
    input ub_n_i,         // upper byte enable, active low 
    input lb_n_i,         // lower byte enable, active low 

    output ready_o,       // SDRAM ready to host
    output reg done_o,    // SDRAM operation done
    output [15:0] data_o, // SDRAM data to host

    output sdCke_o,       // SDRAM clock enable
    output sdCs_n_o,      // SDRAM chip select, active low
    output sdRas_n_o,     // SDRAM row address strobe, active low
    output sdCas_n_o,     // SDRAM column address strobe, active low
    output sdWe_n_o,      // SDRAM write enable, active low
    inout [15:0] sdData_io,      // SDRAM data to SDRAM
    output [1:0] sdBa_o,  // SDRAM bank address
    output [12:0] sdAddr_o,  // SDRAM address
    output [1:0] sdUdqm_o, 
    output [1:0] sdLdqm_o
);
    
    localparam CMD_NOP = 4'b0111;
    localparam CMD_ACTIVE = 4'b0011;
    localparam CMD_READ = 4'b0101;
    localparam CMD_WRITE = 4'b0100;
    localparam CMD_PRECHARGE = 4'b0010;
    localparam CMD_REFRESH = 4'b0001;
    localparam CMD_MRS = 4'b0000;

    typedef enum {
        ST_INIT_WAIT,
        ST_INIT_PRECHARGE,
        ST_INIT_REFRESH1,
        ST_INIT_MRS,
        ST_INIT_REFRESH2,
        ST_IDLE,
        ST_ACTIVE,
        ST_REFRESH,
        ST_RCD,
        ST_RW,
        ST_RAS1,
        ST_RAS2,
        ST_PRECHARGE
    } state_t;
    state_t state_r, state_x;

    wire [8:0] col_s;
    wire [12:0] row_s;
    wire [1:0] bank_s;

    reg [15:0] time_r, time_x;
    reg [15:0] refresh_cnt_r, refresh_cnt_x;

    reg ready_r, ready_x;
    reg [15:0] buf_dout_r, buf_dout_x; // read data from SDRAM

    reg cke_r, cke_x;
    reg [2:0] cmd_r, cmd_x;

    reg [15:0] sd_dout_r, sd_dout_x;  // write data to SDRAM
    reg bus_dir_r, bus_dir_x;

    reg [1:0] sd_ba_r, sd_ba_x;  // SDRAM bank address
    reg [12:0] sd_addr_r, sd_addr_x;  // SDRAM address

    reg sd_udqm_r, sd_udqm_x;
    reg sd_ldqm_r, sd_ldqm_x;

    assign bank_s = addr_i[23:22];
    assign row_s = addr_i[21:9];
    assign col_s = addr_i[8:0];

    assign ready_o = ready_r;
    assign data_o = buf_dout_r;

    assign sdCke_o = cke_r;
    assign {sdCs_n_o, sdRas_n_o, sdCas_n_o, sdWe_n_o} = cmd_r;
    assign sdData_io = bus_dir_r ? sd_dout_r : 16'bz;
    assign sdAddr_o = sd_addr_r;
    assign sdBa_o = sd_ba_r;
    assign {sdUdqm_o, sdLdqm_o} = {sd_udqm_r, sd_ldqm_r};

    always @(*) begin
        state_x <= state_r;
        time_x <= time_r;
        refresh_cnt_x <= refresh_cnt_r;

        ready_x <= ready_r;
        buf_dout_x <= buf_dout_r;

        cke_x <= cke_r;
        cmd_x <= CMD_NOP;

        sd_dout_x <= sd_dout_r;
        bus_dir_x <= bus_dir_r;

        sd_ba_x <= sd_ba_r;
        sd_addr_x <= sd_addr_r;

        sd_udqm_x <= sd_udqm_r;
        sd_ldqm_x <= sd_ldqm_r;
        done_o <= 1'b0;

        if (time_r ~= 0) begin
            time_x <= time_r - 1;
        end else begin
            cke_x <= 1'b1; 
            sd_ba_x <= bank_s;
            sd_addr_x <= {4'b0000, col_s};
            sd_udqm_x <= 1'b0;
            sd_ldqm_x <= 1'b0;

            case (state_r)
                ST_INIT_WAIT:begin 
                    time_x <= 16'd20000;          // wait 200us after power up
                    state_x <= ST_INIT_PRECHARGE;

                    sd_udqm_x <= 1'b1;
                    sd_ldqm_x <= 1'b1;
                end
                ST_INIT_PRECHARGE:begin 
                    cmd_x <= CMD_PRECHARGE;
                    time_x <= 2;            // wait 2 cycles for precharge
                    sd_ba_x <= 2'b00;
                    sd_addr_x[10] <= 1'b1;  // precharge all banks

                    state_x <= ST_INIT_REFRESH1;
                    refresh_cnt_x <= 8;     // Do 8 refresh cycles in the next state 
                end
                ST_INIT_REFRESH1:begin 
                    if (refresh_cnt_r == 0) begin
                        state_x <= ST_INIT_MRS;
                    end else begin
                        cmd_x <= CMD_REFRESH;
                        refresh_cnt_x <= refresh_cnt_r - 1;
                        time_x <= 7;         // wait 7 cycles for refresh
                    end
                end
                ST_INIT_MRS:begin 
                    cmd_x <= CMD_MRS;
                    time_x <= 2;            // wait 2 cycles for MRS

                    sd_ba_x <= 2'b00;
                    sd_addr_x[12:10] <= 3'b000;  
                    sd_addr_x[9] <= 1'b0;      // burst read and burst write
                    sd_addr_x[8:7] <= 2'b0;  
                    sd_addr_x[6:4] <= 3'b010;  // CAS latency = 2
                    sd_addr_x[3] <= 1'b0;      // burst type = sequential
                    sd_addr_x[2:0] <= 3'b000;  // burst length = 1

                    state_x <= ST_INIT_REFRESH2;
                    refresh_cnt_x <= 8;     // Do 8 refresh cycles in the next state 
                end
                ST_INIT_REFRESH2:begin 
                    if (refresh_cnt_r == 0) begin
                        state_x <= ST_IDLE;
                        ready_x <= 1'b1;
                    end else begin
                        cmd_x <= CMD_REFRESH;
                        refresh_cnt_x <= refresh_cnt_r - 1;
                        time_x <= 7;         // wait 7 cycles for refresh
                    end
                end
                ST_IDLE:begin
                    if (rw_i) begin
                        cmd_x <= CMD_ACTIVE;
                        sd_addr_x <= row_s;
                        state_x <= ST_ACTIVE;
                    end else if (refresh_i) begin
                        cmd_x <= CMD_REFRESH;
                        time_x <= 7;        // wait 7 cycles for refresh
                        state_x <= ST_REFRESH;
                    end
                end
                ST_REFRESH:begin
                    state_x <= ST_IDLE;
                    done_o <= 1'b1;
                end
                ST_ACTIVE:begin
                    state_x <= ST_RCD;
                    sd_dout_x <= data_i;
                end
                ST_RCD:begin 
                    state_x <= ST_RW;

                    if (we_n_i == 0) begin
                        cmd_x <= CMD_WRITE;
                        bus_dir_x <= 1'b1;
                        sd_udqm_x <= ub_n_i;
                        sd_ldqm_x <= lb_n_i;
                    end else begin
                        cmd_x <= CMD_READ;
                    end
                end 
                ST_RW:begin 
                    state_x <= ST_RAS1;
                    bus_dir_x <= 1'b0;
                end
                ST_RAS1:begin 
                    state_x <= ST_RAS2;
                    buf_dout_x <= sdData_io;
                end
                ST_RAS2:begin 
                    state_x <= ST_PRECHARGE;
                    cmd_x <= CMD_PRECHARGE;
                    sd_addr_x[10] <= 1'b1;
                end
                ST_PRECHARGE:begin 
                    state_x <= ST_IDLE;
                    time_x <= 1'b1;
                    done_o <= 1'b1;
                end
            endcase
        end
    end

    alwasy @(posedge clk_100m_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            state_r <= ST_INIT_WAIT;
            time_r <= 16'b0;
            refresh_cnt_r <= 16'b0;

            ready_r <= 1'b0;
            buf_dout_r <= 16'b0;
        end else begin
            state_r <= state_x;
            time_r <= time_x;
            refresh_cnt_r <= refresh_cnt_x;

            ready_r <= ready_x;
            buf_dout_r <= buf_dout_x;

            cke_r <= cke_x;
            cmd_r <= cmd_x;
            sd_dout_r <= sd_dout_x;
            bus_dir_r <= bus_dir_x;

            sd_ba_r <= sd_ba_x;
            sd_addr_r <= sd_addr_x;

            sd_udqm_r <= sd_udqm_x;
            sd_ldqm_r <= sd_ldqm_x;
        end
    end

endmodule