library verilog;
use verilog.vl_types.all;
entity uart_test is
    generic(
        CLK_FRE         : integer := 50
    );
    port(
        clk             : in     vl_logic;
        rst_n           : in     vl_logic;
        uart_rx         : in     vl_logic;
        uart_tx         : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of CLK_FRE : constant is 1;
end uart_test;
