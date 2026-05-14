 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../tb/testbench.v ../rtl/verified_adder_8bit.v
vsim -voptargs=+acc -c work.testbench -do "run -all; exit" 
gtkwave adder_8bit.vcd
