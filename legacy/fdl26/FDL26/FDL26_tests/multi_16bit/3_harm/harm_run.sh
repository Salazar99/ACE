
# Automatic generation of autogen.xml
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./Detection_traces/verified_multi_16bit_faulty_yout_0_DU.csv --conf ./conf/verified_multi_16bit_faulty_yout_0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt  ./harm_res/verified_multi_16bit_faulty_yout_0.txt
harm --csv ./Detection_traces/verified_multi_16bit_faulty_yout_1_DU.csv --conf ./conf/verified_multi_16bit_faulty_yout_1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt  ./harm_res/verified_multi_16bit_faulty_yout_1.txt
harm --csv ./Detection_traces/verified_multi_16bit_faulty_done_0_DU.csv --conf ./conf/verified_multi_16bit_faulty_done_0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt  ./harm_res/verified_multi_16bit_faulty_done_0.txt
harm --csv ./Detection_traces/verified_multi_16bit_faulty_done_1_DU.csv --conf ./conf/verified_multi_16bit_faulty_done_1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt  ./harm_res/verified_multi_16bit_faulty_done_1.txt
