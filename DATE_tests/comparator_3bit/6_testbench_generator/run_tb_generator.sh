
#flag for tb generation
#! /bin/bash
tb = 0

if [ $tb -eq 1 ]; then
    python3 "$ACEROOT/tb_generator/tb_generator.py" \
        --input ../4_filtering/filtered_A_eq_0.csv \
        --design "../verified_comparator_3bit.v" \
        --input-signals "A, B" \
        --group-delay 10 \
        --output "testbench_A_eq_0.sv"

    python3 "$ACEROOT/tb_generator/tb_generator.py" \
        --input ../4_filtering/filtered_A_eq_0.csv \
        --design "../verified_comparator_3bit.v" \
        --input-signals "A, B" \
        --group-delay 10 \
        --output "testbench_A_eq_1.sv"

    python3 "$ACEROOT/tb_generator/tb_generator.py" \
        --input ../4_filtering/filtered_A_gt_0.csv \
        --design "../verified_comparator_3bit.v" \
        --input-signals "A, B" \
        --group-delay 10 \
        --output "testbench_A_gt_0.sv"

    python3 "$ACEROOT/tb_generator/tb_generator.py" \
        --input ../4_filtering/filtered_A_gt_1.csv \
        --design "../verified_comparator_3bit.v" \
        --input-signals "A, B" \
        --group-delay 10 \
        --output "testbench_A_gt_1.sv"

    python3 "$ACEROOT/tb_generator/tb_generator.py" \
        --input ../4_filtering/filtered_A_lt_0.csv \
        --design "../verified_comparator_3bit.v" \
        --input-signals "A, B" \
        --group-delay 10 \
        --output "testbench_A_lt_0.sv"

    python3 "$ACEROOT/tb_generator/tb_generator.py" \
        --input ../4_filtering/filtered_A_lt_1.csv \
        --design "../verified_comparator_3bit.v" \
        --input-signals "A, B" \
        --group-delay 10 \
        --output "testbench_A_lt_1.sv"
fi

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


#rm -rf work && vlib work && vlog -sv testbench.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv testbench_A_eq_0.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
mv comparator_3bit.vcd comparator_3bit_A_eq_0.vcd

rm -rf work && vlib work && vlog -sv testbench_A_eq_1.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
mv comparator_3bit.vcd comparator_3bit_A_eq_1.vcd

rm -rf work && vlib work && vlog -sv testbench_A_gt_0.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
mv comparator_3bit.vcd comparator_3bit_A_gt_0.vcd

rm -rf work && vlib work && vlog -sv testbench_A_gt_1.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
mv comparator_3bit.vcd comparator_3bit_A_gt_1.vcd

rm -rf work && vlib work && vlog -sv testbench_A_lt_0.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
mv comparator_3bit.vcd comparator_3bit_A_lt_0.vcd

rm -rf work && vlib work && vlog -sv testbench_A_lt_1.sv ../verified_comparator_3bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
mv comparator_3bit.vcd comparator_3bit_A_lt_1.vcd