import pandas as pd
import numpy as np
import sys

def uint_to_signed(value, bit_size):
    """Convert an unsigned integer to signed integer using two's complement."""
    if value >= 2**(bit_size - 1):
        return value - 2**bit_size
    return value

def process_csv(file_path):
    """
    Processes the input CSV file:
    - Automatically detects columns with uint32_t or uint64_t in the name.
    - Converts these columns to signed integers.
    - Updates column names to replace "uint32_t" or "uint64_t" with "int".
    - Overwrites the original CSV file with the updated data.
    """
    df = pd.read_csv(file_path)

    uint_columns = []
    for column in df.columns:
        if "uint32_t" in column:
            uint_columns.append((column, 32))
        elif "uint64_t" in column:
            uint_columns.append((column, 64))
        # change bool in int because harm can't compare bool
        elif "bool" in column:
            new_column_name = column.replace("bool", "int")
            df.rename(columns={column: new_column_name}, inplace=True)

    for column, bit_size in uint_columns:
        if bit_size == 64:
            # Tronca ai 32 bit bassi e interpreta come int32_t (gestione strana gtkwave)
            df[column] = df[column].apply(lambda x: uint_to_signed(int(x) & 0xFFFFFFFF, 32)).astype(np.int32)
        else:
            df[column] = df[column].apply(lambda x: uint_to_signed(int(x), bit_size)).astype(np.int32)

        new_column_name = column.replace("uint32_t", "int").replace("uint64_t", "int")
        df.rename(columns={column: new_column_name}, inplace=True)

    df.to_csv(file_path, index=False)
    print(f"Updated file saved: {file_path}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 convert_csv.py <file_path>")
        sys.exit(1)

    file_path = sys.argv[1]
    process_csv(file_path)
