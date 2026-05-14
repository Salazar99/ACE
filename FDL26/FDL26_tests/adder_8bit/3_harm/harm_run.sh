
# Automatic generation of autogen.xml
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./Detection_traces/adder_8bit_fault_sum0_DU.csv --conf ./conf/adder_8bit_fault_sum0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/adder_8bit_fault_sum0.txt
harm --csv ./Detection_traces/adder_8bit_fault_sum1_DU.csv --conf ./conf/adder_8bit_fault_sum1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/adder_8bit_fault_sum1.txt
harm --csv ./Detection_traces/adder_8bit_fault_cout0_DU.csv --conf ./conf/adder_8bit_fault_cout0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/adder_8bit_fault_cout0.txt
harm --csv ./Detection_traces/adder_8bit_fault_cout1_DU.csv --conf ./conf/adder_8bit_fault_cout1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/adder_8bit_fault_cout1.txt
