
export ACEROOT="/home/fabio/Desktop/ACE"

# commented below because changed testbench name

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_in_eq_0.csv \
#    --design "$ACEROOT/Designs/sqrt/old/old_rtl/sqrt_calculator_old.v" \
#    --input-signals "in, start" \
#    --group-delay 110 \
#    --optional-signals "start=0#10, in=0#0" \
#    --output "testbench_in_eq_0.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_in_gt_0.csv \
#    --design "$ACEROOT/Designs/sqrt/old/old_rtl/sqrt_calculator_old.v" \
#    --input-signals "in, start" \
#    --group-delay 110 \
#    --optional-signals "start=0#10, in=0#0" \
#    --output "testbench_in_gt_0.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_in_lt_0.csv \
#    --design "$ACEROOT/Designs/sqrt/old/old_rtl/sqrt_calculator_old.v" \
#    --input-signals "in, start" \
#    --group-delay 110 \
#    --optional-signals "start=0#10, in=0#0" \
#    --output "testbench_in_lt_0.sv"


#rm -rf work && vlib work && vlog -sv testbench.sv ../old/old_rtl/sqrt_calculator_old.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave sqrt_calculator.vcd

rm -rf work && vlib work && vlog -sv testbench_in_eq_0.sv ../old/old_rtl/sqrt_calculator_old.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv testbench_in_gt_0.sv ../old/old_rtl/sqrt_calculator_old.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv testbench_in_lt_0.sv ../old/old_rtl/sqrt_calculator_old.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
