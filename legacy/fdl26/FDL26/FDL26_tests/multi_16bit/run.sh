 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_multi_16bit.v
vsim -voptargs=+acc -c work.tb_multi_16bit -do "run -all; exit" 
gtkwave verified_multi_16bit.vcd
