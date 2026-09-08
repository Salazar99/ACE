 #!/bin/sh
rm -rf work
vlib work
vlog +incdir+tb/ -sv ../tb/testbench.sv ../rtl/sqrt_calculator.sv

# faulty option
# vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::out 0; run -all; exit"
# mv sqrt_calculator.vcd sqrt_calculator_fault_out0.vcd
# vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::out 1; run -all; exit"
# mv sqrt_calculator.vcd sqrt_calculator_fault_out1.vcd

# vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::error 0; run -all; exit"
# mv sqrt_calculator.vcd sqrt_calculator_fault_error0.vcd

# vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::error 1; run -all; exit"
# mv sqrt_calculator.vcd sqrt_calculator_fault_error1.vcd

vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::done 0; run -all; exit"
mv sqrt_calculator.vcd sqrt_calculator_fault_done0.vcd

vsim -voptargs=+acc -c work.tbench_top -do "force tbench_top::intf::done 1; run -all; exit"
mv sqrt_calculator.vcd sqrt_calculator_fault_done1.vcd

# remember to copy verilog files and change $dumpfile("xxx_fault.vcd");
#gtkwave sqrt_calculator_fault.vcd
