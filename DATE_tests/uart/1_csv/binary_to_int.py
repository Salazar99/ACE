import pandas as pd
import numpy as np
import sys
import os
import re

# 1. uart_reg2hw_t Mappings
REG2HW_MAP = {
    'intr_state': (131, 123), 'intr_enable': (122, 114), 'intr_test': (113, 96),
    'alert_test': (95, 94),   'ctrl': (93, 69),           'status': (68, 57),
    'rdata': (56, 48),        'wdata': (47, 39),          'fifo_ctrl': (38, 27),
    'ovrd': (26, 25),         'timeout_ctrl': (24, 0),
}

# 2. uart_hw2reg_t Mappings
HW2REG_MAP = {
    'intr_state': (71, 54),   'status': (53, 48),         'rdata': (47, 40),
    'fifo_ctrl': (39, 32),    'fifo_status': (31, 16),    'val': (15, 0),
}

def get_cpp_type(width):
    """Returns the standard C++ type based on bit-width."""
    if width == 1: return "bool"
    if width <= 8: return "int8_t"
    if width <= 16: return "int16_t"
    if width <= 32: return "int32_t"
    return "int64_t"

def convert_twos_complement(value, width):
    """Applies 2's complement logic based on MSB location."""
    if pd.isna(value): return 0
    
    # Clean string: remove 'b' prefix and whitespace
    b_str = str(value).strip().lower().replace('b', '')
    
    # Handle unknowns (x, z)
    if not all(c in '01' for c in b_str) or not b_str:
        return 0 

    val = int(b_str, 2)
    
    if width > 1:
        # If MSB is 1, it's a negative number
        if val & (1 << (width - 1)):
            val = val - (1 << width)
    else:
        # 1-bit boolean normalization (0 or 1)
        val = 1 if val == 1 else 0
        
    return val

def main():
    if len(sys.argv) < 2:
        print("Usage: python parse_trace.py <input.csv>")
        sys.exit(1)

    input_file = sys.argv[1]
    
    try:
        # Load with ';' delimiter as per your sample
        df = pd.read_csv(input_file, sep=';', low_memory=False, dtype=str)
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)

    new_column_names = {}

    for col in df.columns:
        # Clean the original header (removes 'uint_64t', 'binary', etc.)
        clean_col = col.replace('uint_64t', '').replace('binary', '').strip()
        
        width = 1  # Default for all other signals
        
        # Check mapping for bit-width
        if 'reg2hw_' in clean_col:
            key = next((k for k in REG2HW_MAP if k in clean_col), None)
            if key:
                start, end = REG2HW_MAP[key]
                width = start - end + 1
        elif 'hw2reg_' in clean_col:
            key = next((k for k in HW2REG_MAP if k in clean_col), None)
            if key:
                start, end = HW2REG_MAP[key]
                width = start - end + 1

        # Perform conversion
        df[col] = df[col].apply(lambda x: convert_twos_complement(x, width))

        # Select C++ type
        cpp_type = get_cpp_type(width)
        
        # Apply numerical casting for the dataframe
        if cpp_type == "bool":
            df[col] = df[col].astype(int) 
        elif cpp_type == "int8_t":
            df[col] = df[col].astype(np.int8)
        elif cpp_type == "int16_t":
            df[col] = df[col].astype(np.int16)
        elif cpp_type == "int32_t":
            df[col] = df[col].astype(np.int32)
        else:
            df[col] = df[col].astype(np.int64)

        # Set header format: "type signalname"
        new_column_names[col] = f"{cpp_type} {clean_col}"
        print(f"Header: {new_column_names[col]:30} | Bits: {width}")

    df.rename(columns=new_column_names, inplace=True)
    output_path = f"processed_{os.path.basename(input_file)}"
    df.to_csv(output_path, index=False)
    print(f"\nSaved processed trace to: {output_path}")

if __name__ == "__main__":
    main()