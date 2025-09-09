
# Generate csv file in third_party
#../../../../../third_party/vcd2csv --vcd ../../vcd/camellia.vcd --clk slave_interface::wb_clk --vcd-ss ::sim1::p::slave_0 --vcd-r --dump-to ./camellia.csv

# convert all the big values (signed value) in the correct negative value
#python3 convert_csv.py ./camellia.csv

# Automatic generation of autogen.xml
#harm --csv ./camellia.csv --conf autogen.xml --generate-config
#harm --csv ./camellia.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./camellia.csv --conf camellia.xml