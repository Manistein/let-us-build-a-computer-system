library verilog;
use verilog.vl_types.all;
entity DCM_SP is
    generic(
        CLKDV_DIVIDE    : real    := 2.000000e+000;
        CLKFX_DIVIDE    : integer := 1;
        CLKFX_MULTIPLY  : integer := 4;
        CLKIN_DIVIDE_BY_2: string  := "FALSE";
        CLKIN_PERIOD    : real    := 1.000000e+001;
        CLKOUT_PHASE_SHIFT: string  := "NONE";
        CLK_FEEDBACK    : string  := "1X";
        DESKEW_ADJUST   : string  := "SYSTEM_SYNCHRONOUS";
        DFS_FREQUENCY_MODE: string  := "LOW";
        DLL_FREQUENCY_MODE: string  := "LOW";
        DSS_MODE        : string  := "NONE";
        DUTY_CYCLE_CORRECTION: string  := "TRUE";
        FACTORY_JF      : vl_logic_vector(0 to 15) := (Hi1, Hi1, Hi0, Hi0, Hi0, Hi0, Hi0, Hi0, Hi1, Hi0, Hi0, Hi0, Hi0, Hi0, Hi0, Hi0);
        PHASE_SHIFT     : integer := 0;
        STARTUP_WAIT    : string  := "FALSE"
    );
    port(
        CLK0            : out    vl_logic;
        CLK180          : out    vl_logic;
        CLK270          : out    vl_logic;
        CLK2X           : out    vl_logic;
        CLK2X180        : out    vl_logic;
        CLK90           : out    vl_logic;
        CLKDV           : out    vl_logic;
        CLKFX           : out    vl_logic;
        CLKFX180        : out    vl_logic;
        LOCKED          : out    vl_logic;
        PSDONE          : out    vl_logic;
        STATUS          : out    vl_logic_vector(7 downto 0);
        CLKFB           : in     vl_logic;
        CLKIN           : in     vl_logic;
        DSSEN           : in     vl_logic;
        PSCLK           : in     vl_logic;
        PSEN            : in     vl_logic;
        PSINCDEC        : in     vl_logic;
        RST             : in     vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of CLKDV_DIVIDE : constant is 2;
    attribute mti_svvh_generic_type of CLKFX_DIVIDE : constant is 2;
    attribute mti_svvh_generic_type of CLKFX_MULTIPLY : constant is 2;
    attribute mti_svvh_generic_type of CLKIN_DIVIDE_BY_2 : constant is 1;
    attribute mti_svvh_generic_type of CLKIN_PERIOD : constant is 2;
    attribute mti_svvh_generic_type of CLKOUT_PHASE_SHIFT : constant is 1;
    attribute mti_svvh_generic_type of CLK_FEEDBACK : constant is 1;
    attribute mti_svvh_generic_type of DESKEW_ADJUST : constant is 1;
    attribute mti_svvh_generic_type of DFS_FREQUENCY_MODE : constant is 1;
    attribute mti_svvh_generic_type of DLL_FREQUENCY_MODE : constant is 1;
    attribute mti_svvh_generic_type of DSS_MODE : constant is 1;
    attribute mti_svvh_generic_type of DUTY_CYCLE_CORRECTION : constant is 1;
    attribute mti_svvh_generic_type of FACTORY_JF : constant is 1;
    attribute mti_svvh_generic_type of PHASE_SHIFT : constant is 2;
    attribute mti_svvh_generic_type of STARTUP_WAIT : constant is 1;
end DCM_SP;
