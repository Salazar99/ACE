
export ACEROOT="/home/fabio/Desktop/ACE"

# commented below because removed first case 0, 0 and changed testbench name

python3 "$ACEROOT/tb_generator/tb_generator.py" \
    --input ../4_filtering/filtered_start_done.csv \
    --design "../verified_multi_16bit.v" \
    --input-signals "rst_n, start, ain, bin" \
    --initial-delay 15 \
    --group-delay 45 \
    --group-size 2 \
    --group-offset 5 \
    --optional-signals "rst_n=0#200, start=0#0" \
    --output "testbench_start_done.sv"


#rm -rf work && vlib work && vlog -sv testbench_start_done.sv ../verified_multi_16bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave verified_multi_16bit.vcd

rm -rf work && vlib work && vlog -sv testbench_start_done.sv ../verified_multi_16bit.v && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

