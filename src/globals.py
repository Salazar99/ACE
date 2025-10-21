import os

root = os.environ["USMT_ROOT"]
#out_folder = root + '/tool/synthetic_gen/temp/'
debug = False
top_module_name = ""

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

# Debug print function
def debug_print(msg):
    if debug:
        print(f"{CDBG}[DEBUG]{CEND} {msg}")
        
# Error print function
def error_print(msg):
    print(f"{CERR}[ERROR]{CEND} {msg}")
    
# Warning print function
def warning_print(msg):
    print(f"{CWRN}[WARNING]{CEND} {msg}")
    
# Step print function    
def step_print(msg):
    print(f"{CSTP}[STEP]{CEND} {msg}")