 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../ibex_pkg.sv ../ibex_multdiv_fast.sv ../tb_ibex_multdiv_fast.sv

# faulty option
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::valid_o 0; run -all; exit"

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
gtkwave ibex_multdiv_fast.vcd ../sf.gtkw
