 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv tb/testbench.sv rtl/sqrt_calculator.sv
vsim -voptargs=+acc -c work.tbench_top -do "run -all; exit" 

# faulty option
#vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::out 0; force tbench_top::intf::error 0; run -all; exit"

gtkwave sqrt_calculator.vcd
