library verilog;
use verilog.vl_types.all;
entity seg_scan is
    generic(
        SCAN_FREQ       : integer := 200;
        CLK_FREQ        : integer := 50000000;
        SCAN_COUNT      : vl_notype
    );
    port(
        clk             : in     vl_logic;
        rst_n           : in     vl_logic;
        seg_sel         : out    vl_logic_vector(5 downto 0);
        seg_data        : out    vl_logic_vector(7 downto 0);
        seg_data_0      : in     vl_logic_vector(7 downto 0);
        seg_data_1      : in     vl_logic_vector(7 downto 0);
        seg_data_2      : in     vl_logic_vector(7 downto 0);
        seg_data_3      : in     vl_logic_vector(7 downto 0);
        seg_data_4      : in     vl_logic_vector(7 downto 0);
        seg_data_5      : in     vl_logic_vector(7 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of SCAN_FREQ : constant is 1;
    attribute mti_svvh_generic_type of CLK_FREQ : constant is 1;
    attribute mti_svvh_generic_type of SCAN_COUNT : constant is 3;
end seg_scan;
