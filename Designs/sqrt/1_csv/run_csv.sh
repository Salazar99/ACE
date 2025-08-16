export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/sqrt/sqrt_calculator.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./sqrt_calculator.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./sqrt_calculator.csv

