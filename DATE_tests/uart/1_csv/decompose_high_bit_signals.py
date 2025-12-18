import pandas as pd
import sys
import os

# --- Configuration ---
INPUT_CSV_FILE = './uart.csv'
OUTPUT_CSV_FILE = './out.csv'
# VCD_SEPARATOR is no longer used for naming, but kept for clarity if needed elsewhere.
COLUMN_NAME_SEPARATOR = '_' # New separator between original column name and field name

# --- Signal Split Definitions (Unchanged) ---
# 1. uart_reg2hw_t (132 bits: [131:0])
REG2HW_MAP = {
    'intr_state':     (131, 123), 'intr_enable':    (122, 114), 'intr_test':      (113, 96),
    'alert_test':     (95, 94),  'ctrl':           (93, 69),  'status':         (68, 57),
    'rdata':          (56, 48),  'wdata':          (47, 39),  'fifo_ctrl':      (38, 27),
    'ovrd':           (26, 25),  'timeout_ctrl':   (24, 0),
}

# 2. uart_hw2reg_t (72 bits: [71:0])
HW2REG_MAP = {
    'intr_state':     (71, 54),  'status':         (53, 48),  'rdata':          (47, 40),
    'fifo_ctrl':      (39, 32),  'fifo_status':    (31, 16),  'val':            (15, 0),
}

# Map of top-level bus names and their expected width for matching
BUS_MAPS = {
    'reg2hw': (REG2HW_MAP, 132),
    'hw2reg': (HW2REG_MAP, 72),
}


# --- Utility Function for Slicing the Bus (Unchanged) ---

def get_sub_value(bus_value, msb, lsb):
    """Slices a VCD bus value string to extract the value of a sub-field."""
    # Ensure bus_value is treated as string, handle NaN/None
    if pd.isna(bus_value) or not isinstance(bus_value, str):
        width = msb - lsb + 1
        return 'x' * width

    if bus_value.startswith(('b', 'B')):
        bus_value = bus_value[1:]
    
    if bus_value in ('x', 'z'):
        width = msb - lsb + 1
        return bus_value * width
    
    # Calculate indices based on MSB/LSB relative to the binary string length
    bus_len = len(bus_value)
    
    if bus_len > msb:
        start_index = bus_len - 1 - msb
        end_index = bus_len - lsb
        
        if start_index >= bus_len or end_index > bus_len or start_index > end_index:
             width = msb - lsb + 1
             return 'x' * width

        sub_value = bus_value[start_index:end_index]
        return 'b' + sub_value 
    
    return 'x'


# --- Main Processing Function (Updated Naming) ---

def split_register_columns(input_filepath, output_filepath, bus_maps, separator):
    """Reads a CSV, splits packed register columns, and names the new columns as {original}_{field}."""
    print(f"Reading input CSV: {input_filepath}")
    
    try:
        df = pd.read_csv(input_filepath)
    except FileNotFoundError:
        print(f"Error: Input file '{input_filepath}' not found.")
        return
    except Exception as e:
        print(f"Error reading CSV: {e}")
        return

    new_columns_data = {}
    columns_to_drop = []
    
    print("Searching for packed register columns based on local name and width...")

    # Iterate through all columns in the DataFrame
    for col_name in df.columns:
        
        # Check against the two known buses: 'reg2hw' and 'hw2reg'
        for bus_local_name, (field_map, expected_width) in bus_maps.items():
            
            # Match the column name using the local bus name AND the expected bit width tag
            expected_width_tag = f"[{expected_width-1}:0]"
            
            if bus_local_name in col_name and expected_width_tag in col_name:
                
                print(f"Found bus column: {col_name} (Splitting {bus_local_name})")
                columns_to_drop.append(col_name)
                
                # Apply splitting logic for this bus
                for field_name, (msb, lsb) in field_map.items():
                    
                    # --- CORE CHANGE HERE ---
                    # New column name format: {Original_Column_Name}_{Field_Name}
                    new_col_name = f"{col_name}{separator}{field_name}"
                    # --- END CORE CHANGE ---
                    
                    # Apply the get_sub_value function row-wise
                    new_columns_data[new_col_name] = df[col_name].apply(
                        lambda x: get_sub_value(x, msb, lsb)
                    )
                
                # Break the inner loop since we found the match for this column
                break 

    if not columns_to_drop:
        print("No packed register columns were found to split. Outputting original data.")
        df.to_csv(output_filepath, index=False)
        return

    # Add the new split columns to the DataFrame
    df = pd.concat([df, pd.DataFrame(new_columns_data)], axis=1)
    
    # Drop the original packed bus columns
    df = df.drop(columns=columns_to_drop)

    # Save the resulting DataFrame to the output CSV
    df.to_csv(output_filepath, index=False)
    
    print(f"Successfully split columns and saved data to: {output_filepath}")
    print(f"Original columns dropped: {columns_to_drop}")

# --- Execution Block ---

if __name__ == "__main__":
    if not os.path.exists(INPUT_CSV_FILE):
        print(f"Input file '{INPUT_CSV_FILE}' not found. Creating and processing a dummy CSV to demonstrate.")
        
        # Create dummy data
        dummy_data = {
            'Time': [0, 10],
            'TOP.uart_core.reg2hw[131:0]': [
                'b' + '0' * 110 + '1' * 22,
                'b' + '1' * 110 + '0' * 22
            ],
            'hw2reg[71:0]': [
                'b' + '1' * 72, 
                'b' + '0' * 72
            ],
            'clk_i': ['1', '0'] 
        }
        dummy_df = pd.DataFrame(dummy_data)
        dummy_df.to_csv(INPUT_CSV_FILE, index=False)
        print(f"Dummy file '{INPUT_CSV_FILE}' created.")
        
        # Run the processing logic on the dummy file
        split_register_columns(INPUT_CSV_FILE, OUTPUT_CSV_FILE, BUS_MAPS, COLUMN_NAME_SEPARATOR)
        print(f"\nSaved resulting CSV as: {OUTPUT_CSV_FILE}")
        print("---")
        print("Example of new column names:")
        output_df = pd.read_csv(OUTPUT_CSV_FILE)
        print(output_df.filter(regex='reg2hw|hw2reg', axis=1).columns.tolist())

    else:
        # Run on the actual file
        split_register_columns(INPUT_CSV_FILE, OUTPUT_CSV_FILE, BUS_MAPS, COLUMN_NAME_SEPARATOR)