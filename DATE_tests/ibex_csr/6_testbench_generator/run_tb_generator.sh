
export ACEROOT="/home/fabio/Desktop/ACE"

# commented below because removed first case 0, 0 and changed testbench name

#python3 "$ACEROOT/tb_generator/tb_generator.py" \
#    --input ../4_filtering/filtered_wr_en_i.csv \
#    --initial-signals "wr_data_i=0#0, rst_ni=1#10" \
#    --optional-signals "wr_en_i=0#10, wr_data_i=0#0, rst_ni=0#5" \
#    --design "../ibex_csr.sv" \
#    --input-signals "wr_en_i, rst_ni, wr_data_i" \
#    --group-delay 5 \
#    --output "testbench_wr_en_i.sv"




rm -rf work && vlib work && vlog -sv testbench_wr_en_i.sv ../ibex_csr.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit" && gtkwave ibex_csr.vcd sf.gtkw

#rm -rf work && vlib work && vlog -sv testbench_wr_en_i.sv ../ibex_csr.sv && vsim -c -assertdebug -voptargs=+acc work.test -do "run -all; exit"

