export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/adder_8bit/adder_8bit.vcd --clk clk --vcd-ss testbench::uut --dump-to ./adder_8bit.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./adder_8bit.csv

