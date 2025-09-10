
# Automatic generation of autogen.xml
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5


#$ACEROOT/third_party/vcd2csv --vcd $ACEROOT/Designs/ibex_alu/ibex_alu.vcd --clk clk --vcd-ss ibex_alu_tb --dump-to ./ibex_alu.csv
for file in ./Detection_traces/*.csv; do
    base_name=$(basename "$file" .csv)
    harm --csv ./Detection_traces/$base_name.csv --conf ./conf/ibex_alu_DU.xml --dont-normalize --dump-to ./harm_res
    mv ./harm_res/default_ass.txt ./harm_res/$base_name.txt
done
    #--check-dump-eval temporal_instants