
# Generate csv file in third_party
../../../../third_party/vcd2csv --vcd ../../climate_prediction.vcd --clk clk --vcd-ss ::tbench_top --vcd-r --dump-to ./climate_prediction.csv


# convert all the big values (signed value) in the correct negative value
python3 convert_csv.py ./climate_prediction.csv

# Automatic generation of autogen.xml
#harm --csv ./climate_prediction.csv --conf autogen.xml --generate-config
#harm --csv ./climate_prediction.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of climate_prediction.xml
harm --csv ./climate_prediction.csv --conf climate_prediction.xml