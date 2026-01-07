
# Automatic generation of autogen.xml
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
#harm --csv ./Detection_traces/comparator_3bit_DU.csv --conf ./conf/comparator_3bit_DU.xml --dump-to ./harm_res
harm --csv ./Detection_traces/comparator_A_equal0_DU.csv --conf ./conf/comparator_A_equal0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/A_eq_0.txt
harm --csv ./Detection_traces/comparator_A_equal1_DU.csv --conf ./conf/comparator_A_equal1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/A_eq_1.txt
harm --csv ./Detection_traces/comparator_A_greater0_DU.csv --conf ./conf/comparator_A_greater0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/A_gt_0.txt
harm --csv ./Detection_traces/comparator_A_greater1_DU.csv --conf ./conf/comparator_A_greater1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/A_gt_1.txt
harm --csv ./Detection_traces/comparator_A_less0_DU.csv --conf ./conf/comparator_A_less0.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/A_l_0.txt
harm --csv ./Detection_traces/comparator_A_less1_DU.csv --conf ./conf/comparator_A_less1.xml --dump-to ./harm_res
mv ./harm_res/default_ass.txt ./harm_res/A_l_1.txt