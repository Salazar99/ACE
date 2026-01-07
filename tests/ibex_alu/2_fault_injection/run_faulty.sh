 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv ../tb/ibex_alu_tb.sv

# faulty option
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::result_o 0; run -all; exit"
mv ibex_alu.vcd alu_result_o_fault_0.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::imd_val_d_o 0; run -all; exit"
mv ibex_alu.vcd imd_val_d_o_fault_0.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::imd_val_we_o 0; run -all; exit"
mv ibex_alu.vcd imd_val_we_o_fault_0.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::adder_result_o 0; run -all; exit"
mv ibex_alu.vcd adder_result_o_fault_0.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::adder_result_ext_o 0; run -all; exit"
mv ibex_alu.vcd adder_result_ext_o_fault_0.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::comparison_result_o 0; run -all; exit"
mv ibex_alu.vcd comparison_result_o_fault_0.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::is_equal_result_o 0; run -all; exit"
mv ibex_alu.vcd is_equal_result_o_fault_0.vcd

vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::result_o 0; run -all; exit"
mv ibex_alu.vcd alu_result_o_fault_1.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::imd_val_d_o 0; run -all; exit"
mv ibex_alu.vcd imd_val_d_o_fault_1.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::imd_val_we_o 0; run -all; exit"
mv ibex_alu.vcd imd_val_we_o_fault_1.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::adder_result_o 0; run -all; exit"
mv ibex_alu.vcd adder_result_o_fault_1.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::adder_result_ext_o 0; run -all; exit"
mv ibex_alu.vcd adder_result_ext_o_fault_1.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::comparison_result_o 0; run -all; exit"
mv ibex_alu.vcd comparison_result_o_fault_1.vcd
vsim -voptargs=+acc -c work.ibex_alu_tb -do "force ibex_alu_tb::i_ibex_alu::is_equal_result_o 0; run -all; exit"
mv ibex_alu.vcd is_equal_result_o_fault_1.vcd


# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave ibex_alu.vcd ../sf.gtkw
