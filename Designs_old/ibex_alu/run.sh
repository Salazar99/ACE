 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv rtl/ibex_pkg.sv rtl/ibex_alu.sv tb/*.sv
vsim -voptargs=+acc -c work.ibex_alu_tb -do "run -all; exit" 

# faulty option
#vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::out 0; force tbench_top::intf::error 0; run -all; exit"

gtkwave ibex_alu.vcd
