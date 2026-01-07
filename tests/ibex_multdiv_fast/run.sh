 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ibex_pkg.sv ibex_multdiv_fast.sv tb_ibex_multdiv_fast.sv
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "run -all; exit" 

# faulty option
#vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::out 0; force tbench_top::intf::error 0; run -all; exit"

gtkwave ibex_multdiv_fast.vcd sf.gtkw
