 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_adder_8bit.v
vsim -voptargs=+acc -c work.testbench -do "run -all; exit" 
gtkwave adder_8bit.vcd
