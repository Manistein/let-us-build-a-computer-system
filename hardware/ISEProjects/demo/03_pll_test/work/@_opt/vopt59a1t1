library verilog;
use verilog.vl_types.all;
entity IBUFG is
    generic(
        CAPACITANCE     : string  := "DONT_CARE";
        IBUF_DELAY_VALUE: string  := "0";
        IBUF_LOW_PWR    : string  := "TRUE";
        IOSTANDARD      : string  := "DEFAULT"
    );
    port(
        O               : out    vl_logic;
        I               : in     vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of CAPACITANCE : constant is 1;
    attribute mti_svvh_generic_type of IBUF_DELAY_VALUE : constant is 1;
    attribute mti_svvh_generic_type of IBUF_LOW_PWR : constant is 1;
    attribute mti_svvh_generic_type of IOSTANDARD : constant is 1;
end IBUFG;
