# file: simcmds.tcl

# create the simulation script
vcd dumpfile isim.vcd
vcd dumpvars -m /vga_pll_tb -l 0
wave add /
run 50000ns
quit

