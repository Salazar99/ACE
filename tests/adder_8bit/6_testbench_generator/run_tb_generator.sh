
#export ACEROOT="/home/fabio/Desktop/ACE"

# commented below because removed first case 0, 0 and changed testbench name

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_a_+_b_+_cin_eq_256.csv \
#    --design "../verified_adder_8bit.v" \
#    --input-signals "a, b, cin" \
#    --group-delay 10 \
#    --output "testbench_a_+_b_+_cin_eq_256.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_a_+_b_+_cin_eq_0.csv \
#    --design "../verified_adder_8bit.v" \
#    --input-signals "a, b, cin" \
#    --group-delay 10 \
#    --output "testbench_a_+_b_+_cin_eq_0.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input "../4_filtering/filtered_a_+_b_+_cin_gt_255.csv" \
#    --design "../verified_adder_8bit.v" \
#    --input-signals "a, b, cin" \
#    --group-delay 10 \
#    --output "testbench_a_+_b_+_cin_gt_255.sv"

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input "../4_filtering/filtered_a_+_b_+_cin_le_255.csv" \
#    --design "../verified_adder_8bit.v" \
#    --input-signals "a, b, cin" \
#    --group-delay 10 \
#    --output "testbench_a_+_b_+_cin_le_255.sv"


#rm -rf work && vlib work && vlog -sv testbench_a_+_b_+_cin_eq_256.sv ../verified_adder_8bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave verified_adder_8bit.vcd

rm -rf work && vlib work && vlog -sv testbench_a_+_b_+_cin_eq_256.sv ../verified_adder_8bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv testbench_a_+_b_+_cin_eq_0.sv ../verified_adder_8bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv "testbench_a_+_b_+_cin_gt_255.sv" ../verified_adder_8bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

rm -rf work && vlib work && vlog -sv "testbench_a_+_b_+_cin_le_255.sv" ../verified_adder_8bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"
