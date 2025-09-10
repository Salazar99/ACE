
# Automatic generation of autogen.xml
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./Detection_traces/accu_fault_data_out0_DU.csv --conf ./conf/accu_fault_data_out0.xml --dump-to ./harm_results
harm --csv ./Detection_traces/accu_fault_data_out1_DU.csv --conf ./conf/accu_fault_data_out1.xml --dump-to ./harm_results
harm --csv ./Detection_traces/accu_fault_valid_out0_DU.csv --conf ./conf/accu_fault_valid_out0.xml --dump-to ./harm_results
harm --csv ./Detection_traces/accu_fault_valid_out1_DU.csv --conf ./conf/accu_fault_valid_out1.xml --dump-to ./harm_results
echo "Done running harm"