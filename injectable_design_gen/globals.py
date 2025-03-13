import os

root = os.environ["ACEROOT"]
hif_tb_prefix = root + '/hif_sim/'
debug = False
clk_name = "clock"
top_module_name = ""
tracelenght = 1000

#debug color
CDBG = '\033[43m'
#error color
CERR = '\033[41m'
#warning color
CWRN = '\033[208m'
#procedure step color
CSTP = '\033[42m'
#terminal color reset
CEND = '\033[0m'