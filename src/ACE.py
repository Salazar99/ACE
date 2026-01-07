import argparse
import globals
import Trace_gen.trace_gen
import DU_gen.DT_gen
import Filtering_ass.filtering_ass
import Trace_filtering.filter
import Testbench_gen.tb_generator
import assume_gen.InvGen
import Guarantee_gen.guarantee_gen

if __name__ == "__main__":
    print("Running the ACE toolchain")
    parser = argparse.ArgumentParser(description="ACE Toolchain")
    parser.add_argument("design_folder", type=str, help="Path to the design folder")
    parser.add_argument("output_folder", type=str, help="Path to the output folder")
    args = parser.parse_args()

    #print(f"Design folder: {args.design_folder}")
    #print(f"Output folder: {args.output_folder}")

    #Simulate design and extract the execution traces
    globals.step_print("1. Starting Trace generation")
    
    globals.step_print("1. Successful Trace generation")
    
    #Fault injection and detection trace generation
    globals.step_print("2. Starting Detection trace generation")
    
    globals.step_print("2. Successful Detection trace generation")
    
    #Filtering assertion generation from the detection traces
    globals.step_print("3. Starting Filtering assertion generation")
    
    globals.step_print("3. Successful Filtering assertion generation")

    #Trace filtering based on the filtering assertions
    globals.step_print("4. Starting Trace filtering")
    
    globals.step_print("4. Successful Trace filtering")
    
    #Testbench generation based on the filtered traces
    globals.step_print("5. Starting Testbench generation")
    
    globals.step_print("5. Successful Testbench generation")
    
    #Final contracts composition
    #Assumptions extraction from the filtered traces
    globals.step_print("6. Starting Assumptions extraction")
    
    globals.step_print("6. Successful Assumptions extraction")
    
    #Guarantees extraction from the filtered traces
    globals.step_print("7. Starting Guarantees extraction")
    
    globals.step_print("7. Successful Guarantees extraction")

    #Output final contracts
    globals.step_print("Mined contracts:")
    
    
    
    globals.step_print("ACE toolchain completed successfully")