library verilog;
use verilog.vl_types.all;
entity key_debounce is
    port(
        clk             : in     vl_logic;
        rst_n           : in     vl_logic;
        key1            : in     vl_logic;
        seg_sel         : out    vl_logic_vector(5 downto 0);
        seg_data        : out    vl_logic_vector(7 downto 0)
    );
end key_debounce;
