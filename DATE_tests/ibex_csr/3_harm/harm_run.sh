
# Automatic generation of autogen.xml
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./ibex_csr_fault_rd_data_o_0_DU.csv --conf ./conf/ibex_csr_DU.xml
harm --csv ./ibex_csr_fault_rd_data_o_1_DU.csv --conf ./conf/ibex_csr_DU.xml
harm --csv ./ibex_csr_fault_rd_error_o_0_DU.csv --conf ./conf/ibex_csr_DU.xml
harm --csv ./ibex_csr_fault_rd_error_o_1_DU.csv --conf ./conf/ibex_csr_DU.xml