
# Automatic generation of autogen.xml
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./adder_8bit_fault_sum0_DU.csv --conf ./conf/adder_8bit_DU.xml --dump-to ./harm_res.txt
harm --csv ./adder_8bit_fault_sum1_DU.csv --conf ./conf/adder_8bit_DU.xml --dump-to ./harm_res.txt
harm --csv ./adder_8bit_fault_cout0_DU.csv --conf ./conf/adder_8bit_DU.xml --dump-to ./harm_res.txt
harm --csv ./adder_8bit_fault_cout1_DU.csv --conf ./conf/adder_8bit_DU.xml --dump-to ./harm_res.txt