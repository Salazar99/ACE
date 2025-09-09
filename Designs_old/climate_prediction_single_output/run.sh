 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv tb/testbench.sv rtl/climate_prediction.sv
vsim -voptargs=+acc -c work.tbench_top -do "run -all; exit" 
gtkwave climate_prediction.vcd
