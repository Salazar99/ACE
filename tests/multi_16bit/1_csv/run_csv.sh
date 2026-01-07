export ACEROOT="/home/fabio/Desktop/ACE"

# Generate csv file in third_party
$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/multi_16bit/verified_multi_16bit.vcd --clk clk --vcd-ss tb_multi_16bit::uut --dump-to ./multi_16bit.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./multi_16bit.csv

