
# Generate csv file in third_party
../../../../../third_party/vcd2csv --vcd ../../vcd/bl_master.vcd --clk wb_clk --vcd-ss ::sim1::p::core::master_interface --vcd-r --dump-to ./bl_master.csv

# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./bl_master.csv

# Automatic generation of autogen.xml
#harm --csv ./bl_master.csv --conf autogen.xml --generate-config
#harm --csv ./bl_master.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of bl_master.xml
#harm --csv ./bl_master.csv --conf bl_master.xml