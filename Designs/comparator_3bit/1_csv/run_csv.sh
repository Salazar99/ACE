export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/comparator_3bit/comparator_3bit.vcd --clk clk --vcd-ss testbench::uut --dump-to ./comparator_3bit.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./comparator_3bit.csv

