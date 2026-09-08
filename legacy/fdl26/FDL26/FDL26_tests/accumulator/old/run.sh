 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_accu.v
vsim -voptargs=+acc -c work.tb_valid_ready -do "run -all; exit" 
gtkwave accu.vcd
