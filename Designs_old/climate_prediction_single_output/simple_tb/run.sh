 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv tb/tb_old.sv rtl/climate_prediction.sv
vsim -voptargs=+acc -c work.tb_climate_prediction -do "run -all; exit" 
gtkwave climate_prediction.vcd
