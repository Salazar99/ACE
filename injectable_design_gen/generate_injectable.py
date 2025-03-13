import re
import subprocess
import os
import random
import copy 
import sys
import argparse
import hif_utils
import globals

def parse_inputs():

    #input parameters
    parser = argparse.ArgumentParser(description='Generate injectable design from a verilog implementation')
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument('--svdir', type=str, help='RTL implementation directory')
    group.add_argument('--svfile', type=str, help='Single RTL implementation file')
    #optional clock name 
    parser.add_argument('--clk', type=str, default='clock', help='Clock signal name')
    #inputs
    parser.add_argument('--ins', type=str, help='Input ports')
    #outputs
    parser.add_argument('--outs', type=str, help='Output ports')    
    #top module name
    parser.add_argument('--top_module', type=str, help='Top module name')
    #debug flag
    parser.add_argument('--debug', type=int, choices=[0, 1],default=0, help='Enable debug mode (1 for true, 0 for false)')
    #output directory
    parser.add_argument('--outdir', type=str, default='./synthetic_gen_output', help='Output directory')
    #trace lenght
    parser.add_argument('--tracelenght', type=int, default=1000, help='Trace lenght')

    if len(sys.argv) == 1:
        parser.print_help(sys.stderr)
        sys.exit(1)

    args = parser.parse_args()

    if args.svdir:
        v_files = args.svdir
    else:
        v_files = os.path.dirname(args.svfile) + '/*'
    
    globals.debug = args.debug == 1
    globals.clk_name = args.clk
    #Maybe in next iteration we can get these dyrectly from the design
    ports = {}
    ports['ins'] = args.ins.split(',')
    ports['outs'] = args.outs.split(',')
    top_module_name = args.top_module
    globals.top_module_name = args.top_module
    outdirpath = args.outdir
    globals.tracelenght = args.tracelenght

    return ports, v_files, outdirpath


def main():
    
    print(globals.CSTP + "1." + globals.CEND + " Parsing inputs" + " \n")
    ports, v_files, outdirpath = parse_inputs()
    print(globals.CSTP + "1." + globals.CEND + " Done" + " \n")

    print(globals.CSTP + "2." + globals.CEND + " Generating injectable design" + " \n")    
    hif_utils.run_hifsuite(ports,v_files)
    print(globals.CSTP + "2." + globals.CEND + " Done" + " \n")

