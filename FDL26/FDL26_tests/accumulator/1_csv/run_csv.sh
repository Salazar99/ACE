#export ACEROOT="~/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/accumulator/accu.vcd --clk clk --vcd-ss tbench_top::intf --dump-to ./accu.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./accu.csv

