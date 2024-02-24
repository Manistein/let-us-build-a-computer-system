library verilog;
use verilog.vl_types.all;
entity pll is
    port(
        clk_in          : in     vl_logic;
        clk_out1        : out    vl_logic;
        clk_out2        : out    vl_logic;
        clk_out3        : out    vl_logic;
        clk_out4        : out    vl_logic;
        reset           : in     vl_logic;
        locked          : out    vl_logic
    );
end pll;
