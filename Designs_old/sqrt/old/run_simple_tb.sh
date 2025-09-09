# old one, verilog file with reg and wire
rm -rf work && vlib work && vlog -sv simple_tb/tb.v old_rtl/sqrt_calculator_old.v && vsim -c -assertdebug -voptargs=+acc work.sqrt_calculator_tb -do "run -all; exit" && gtkwave sqrt_simple_tb.vcd

# new one, systemverilog with logic
#rm -rf work && vlib work && vlog -sv simple_tb/testbench.sv old_rtl/sqrt_calculator.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave sqrt_calculator.vcd