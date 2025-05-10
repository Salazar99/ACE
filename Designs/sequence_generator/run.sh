 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv tb/testbench.sv rtl/sequence_generator.sv
vsim -voptargs=+acc -c work.tbench_top -do "run -all; exit" 
gtkwave sequence_generator.vcd
