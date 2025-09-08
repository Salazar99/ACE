 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_comparator_3bit.v
vsim -voptargs=+acc -c work.testbench -do "run -all; exit" 
gtkwave comparator_3bit.vcd
