#export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/tests/uart/uart.vcd --clk clk_i --vcd-ss TOP::top_uart_tb::dut::uart_core --dump-to ./uart.csv

# decompose the csv high bit signals into multiple columns
#python3 decompose_high_bit_signals.py

#mv ./out.csv ./decomposed_uart.csv

#remove useless columns
#python3 rm_signals.py 

#Manually change types from "logic" to "binary"

#Convert binary values to signed integers
#python3 binary_to_int.py ./uart_filtered.csv

#Should be fine for DU generation