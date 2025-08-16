#First iteration script that takes a vcd trace and extract an invariant
!#/bin/bash
if [ -z "$1" ]; then
    echo "Usage: $0 <input_file>"
    exit 1
fi

input_file="$1"

if [ ! -f "$input_file.csv" ]; then
    echo "File not found: $input_file"
    exit 1
fi

#echo "Running vcd2csv..."
#vcd2csv --vcd-dir faulty_traces/vcd --clk  --vcd-ss \"tbench_top::DUT_\" --dump-to faulty_traces/csv
#vcd2csv --vcd $input_file --clk clk --vcd-ss "tbench_top::intf" --dump-to ./$input_file.csv

echo "Running dtrace converter..."
perl -I $ACEROOT/third_party/ $ACEROOT/third_party/daikon-5.8.20/scripts/convertcsv.pl $input_file.csv

echo "Running Daikon..."s
java -cp $ACEROOT/third_party/daikon-5.8.20/daikon.jar daikon.Daikon $input_file.dtrace $input_file.decls