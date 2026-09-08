 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../rtl/ibex_pkg.sv ../rtl/ibex_multdiv_fast.sv ../tb/tb_ibex_multdiv_fast.sv

# faulty option
#vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::valid_o 0; run -all; exit"
#mv ibex_multdiv_fast.vcd multdiv_valid_o_fault0.vcd
#vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::valid_o 1; run -all; exit"
#mv ibex_multdiv_fast.vcd multdiv_valid_o_fault1.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::multdiv_result_o 0; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_result_o_fault0.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::multdiv_result_o 1; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_result_o_fault1.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::imd_val_we_o 0; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_imd_val_we_o_fault0.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::imd_val_we_o 1; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_imd_val_we_o_fault1.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::imd_val_d_o 0; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_imd_val_d_o_fault0.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::imd_val_d_o 1; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_imd_val_d_o_fault1.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::alu_operand_b_o 0; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_alu_operand_b_o_fault0.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::alu_operand_b_o 1; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_alu_operand_b_o_fault1.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::alu_operand_a_o 0; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_alu_operand_a_o_fault0.vcd
vsim -voptargs=+acc -c work.tb_ibex_multdiv_fast -do "force tb_ibex_multdiv_fast::dut::alu_operand_a_o 1; run -all; exit"
mv ibex_multdiv_fast.vcd multdiv_alu_operand_a_o_fault1.vcd
# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave ibex_multdiv_fast.vcd ../sf.gtkw
