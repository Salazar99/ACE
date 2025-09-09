
# Generate csv file in third_party
../../../../../third_party/vcd2csv --vcd ../../vcd/sim.vcd --clk sysClk --vcd-ss ::sim1::p --vcd-r --dump-to ./sim.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./sim.csv

# Automatic generation of autogen.xml
#harm --csv ./sim.csv --conf autogen.xml --generate-config
#harm --csv ./sim.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of sim.xml
harm --csv ./sim.csv --conf sim.xml