#export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
#$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/DATE_tests/uart/uart.vcd --clk clk_i --vcd-ss TOP::top_uart_tb::dut::uart_core --dump-to ./uart.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./uart_filtered.csv

