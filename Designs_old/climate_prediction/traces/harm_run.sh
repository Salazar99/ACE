
# Automatic generation of autogen.xml
harm --vcd ../climate_prediction.vcd --clk clk --conf autogen.xml --generate-config --vcd-ss ::tbench_top --vcd-r
harm --vcd ../climate_prediction.vcd --clk clk --conf autogen.xml --vcd-ss ::tbench_top --vcd-r

# Manual generation of climate_prediction.xml
#harm --vcd ../climate_prediction.vcd --clk clk --conf climate_prediction.xml --vcd-ss ::tbench_top --vcd-r