 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../tb_ibex_csr.sv ../ibex_csr.sv

# faulty option
vsim -voptargs=+acc -c work.tb_ibex_csr -do "force tb_ibex_csr::dut::rd_data_o 0; run -all; exit"

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave ibex_csr.vcd ../sf.gtkw
