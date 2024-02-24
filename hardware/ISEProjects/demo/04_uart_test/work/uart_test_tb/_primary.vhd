library verilog;
use verilog.vl_types.all;
entity uart_test_tb is
    generic(
        BPS_115200      : integer := 8680;
        SEND_DATA       : vl_logic_vector(0 to 7) := (Hi1, Hi0, Hi1, Hi0, Hi0, Hi0, Hi1, Hi1)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of BPS_115200 : constant is 1;
    attribute mti_svvh_generic_type of SEND_DATA : constant is 1;
end uart_test_tb;
