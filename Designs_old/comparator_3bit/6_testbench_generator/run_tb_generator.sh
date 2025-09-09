
export ACEROOT="/home/fabio/Desktop/ACE"

# commented below because removed first case 0, 0 and changed testbench name

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_A_gt_B.csv \
#    --design "../verified_comparator_3bit.v" \
#    --input-signals "A, B" \
#    --group-delay 10 \
#    --output "testbench_A_gt_B.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_A_lt_B.csv \
#    --design "../verified_comparator_3bit.v" \
#    --input-signals "A, B" \
#    --group-delay 10 \
#    --output "testbench_A_lt_B.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_A_eq_B.csv \
#    --design "../verified_comparator_3bit.v" \
#    --input-signals "A, B" \
#    --group-delay 10 \
#    --output "testbench_A_eq_B.sv"


#rm -rf work && vlib work && vlog -sv testbench.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave comparator_3bit.vcd

rm -rf work && vlib work && vlog -sv testbench_A_gt_B.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv testbench_A_lt_B.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv testbench_A_eq_B.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
