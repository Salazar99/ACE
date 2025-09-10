 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../tb/tb_ibex_csr.sv ../rtl/ibex_csr.sv

# faulty option
vsim -voptargs=+acc -c work.tb_ibex_csr -do "force tb_ibex_csr::dut::rd_data_o 0; run -all; exit"
mv ibex_csr.vcd ibex_csr_fault_rd_data_o_0.vcd
vsim -voptargs=+acc -c work.tb_ibex_csr -do "force tb_ibex_csr::dut::rd_data_o 1; run -all; exit"
mv ibex_csr.vcd ibex_csr_fault_rd_data_o_1.vcd
vsim -voptargs=+acc -c work.tb_ibex_csr -do "force tb_ibex_csr::dut::rd_error_o 0; run -all; exit"
mv ibex_csr.vcd ibex_csr_fault_rd_error_o_0.vcd
vsim -voptargs=+acc -c work.tb_ibex_csr -do "force tb_ibex_csr::dut::rd_error_o 1; run -all; exit"
mv ibex_csr.vcd ibex_csr_fault_rd_error_o_1.vcd
# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave ibex_csr.vcd ../sf.gtkw
