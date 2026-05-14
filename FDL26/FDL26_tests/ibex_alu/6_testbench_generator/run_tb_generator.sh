
export ACEROOT="/home/fabio/Desktop/ACE"


# DON'T REMOVE COMMENTS

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_operator_0.csv \
#    --design "../rtl/ibex_alu.sv" \
#    --input-signals "operand_a_i, operand_b_i" \
#    --group-delay 10 \
#    --output "testbench_operator_0.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_operator_1.csv \
#    --design "../rtl/ibex_alu.sv" \
#    --input-signals "operand_a_i, operand_b_i" \
#    --group-delay 10 \
#    --output "testbench_operator_1.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_operator_3.csv \
#    --design "../rtl/ibex_alu.sv" \
#    --input-signals "operand_a_i, operand_b_i" \
#    --group-delay 10 \
#    --output "testbench_operator_3.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_operator_4.csv \
#    --design "../rtl/ibex_alu.sv" \
#    --input-signals "operand_a_i, operand_b_i" \
#    --group-delay 10 \
#    --output "testbench_operator_4.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_operator_29.csv \
#    --design "../rtl/ibex_alu.sv" \
#    --input-signals "operand_a_i, operand_b_i" \
#    --group-delay 10 \
#    --output "testbench_operator_29.sv"




#rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_0.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave ibex_alu_0.vcd sf.gtkw

rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_0.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

#rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_1.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave ibex_alu_1.vcd sf.gtkw

rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_1.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

#rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_3.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave ibex_alu_3.vcd sf.gtkw

rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_3.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

#rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_4.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave ibex_alu_4.vcd sf.gtkw

rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_4.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

#rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_29.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave ibex_alu_29.vcd sf.gtkw

rm -rf work && vlib work && vlog -sv ../rtl/ibex_pkg.sv ../rtl/ibex_alu.sv testbench_operator_29.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
