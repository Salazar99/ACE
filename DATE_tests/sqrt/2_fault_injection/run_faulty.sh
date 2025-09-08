 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv testbench.v verified_adder_8bit.v

# faulty option
vsim -voptargs=+acc -c work.testbench -do "force tbench_top::sqrt_intf::out 0; run -all; exit"
mv sqrt_calculator_fault.vcd sqrt_calculator_fault_out0.vcd
vsim -voptargs=+acc -c work.testbench -do "force tbench_top::sqrt_intf::out 1; run -all; exit"
mv sqrt_calculator_fault.vcd sqrt_calculator_fault_out1.vcd

vsim -voptargs=+acc -c work.testbench -do "force tbench_top::sqrt_intf::error 0; run -all; exit"
mv sqrt_calculator_fault.vcd sqrt_calculator_fault_error0.vcd

vsim -voptargs=+acc -c work.testbench -do "force tbench_top::sqrt_intf::error 1; run -all; exit"
mv sqrt_calculator_fault.vcd sqrt_calculator_fault_error1.vcd

vsim -voptargs=+acc -c work.testbench -do "force tbench_top::sqrt_intf::done 0; run -all; exit"
mv sqrt_calculator_fault.vcd sqrt_calculator_fault_done0.vcd

vsim -voptargs=+acc -c work.testbench -do "force tbench_top::sqrt_intf::done 1; run -all; exit"
mv sqrt_calculator_fault.vcd sqrt_calculator_fault_done1.vcd

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave adder_8bit_fault.vcd
