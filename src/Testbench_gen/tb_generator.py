import argparse
import csv
import re

def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", required=True, help="CSV file with stimulus data")
    parser.add_argument("--design", required=True, help="Verilog design file")
    parser.add_argument("--input-signals", required=True, help="List of signal names to use as inputs. E.g.: 'signals1, signals2'")
    parser.add_argument("--output", default="testbench.sv", help="Output testbench filename")
    parser.add_argument("--group-size", type=int, default=1, help="How many rows to group together as a stimulus sequence")
    parser.add_argument("--group-offset", type=int, default=1, help="Clock cycles between signals within a group")
    parser.add_argument("--group-delay", type=int, default=10, help="Clock cycles between groups")
    parser.add_argument("--extra-delay", type=int, default=50, help="Extra delay before $finish after last group")
    parser.add_argument("--optional-signals", default="", help="List of optional signals with value and delays at the end of each group, e.g. 'var1=1#20, var2=0#10'")
    parser.add_argument("--initial-signals", default="", help="Initial signal settings with delay, e.g. 'rst=1#0, rst=0#10'")
    return parser.parse_args()

def parse_optional_signals(opt_str):
    if not opt_str.strip():
        return []

    result = []
    for item in opt_str.split(","):
        item = item.strip()
        match = re.match(r"(\w+)\s*=\s*(\d+)\s*#\s*(\d+)", item)
        if not match:
            print(f"[!] Warning: malformed optional signal '{item}', expected format 'name=value#delay'")
            continue
        name, value, delay = match.groups()
        result.append((name.strip(), int(value), int(delay)))
    return result

def extract_module_and_ports(verilog_file):
    with open(verilog_file) as f:
        content = f.read()

    # Match module name and port list
    mod_match = re.search(r"module\s+(\w+)\s*\((.*?)\);\s*", content, re.S)
    if not mod_match:
        raise ValueError("Could not find module declaration in design file.")
    module_name = mod_match.group(1)
    ports_raw = mod_match.group(2)
    
    # extract name and width
    # e.g.: [('clk', ''), ('in_data', '[31:0]'), ('done', ''), ('out_data', '[31:0]')]
    ports = []
    for line in ports_raw.split('\n'):
        line = line.strip().rstrip(',')
        if not line:
            continue
        
        # Togli la keyword 'input/output/inout' e il tipo solo una volta
        match = re.match(r"(?:input|output|inout)?\s*(?:wire|logic|reg|bit)?\s*(\[[^\]]+\])?\s*(.*)", line)
        if match:
            width = match.group(1) or ""
            names_str = match.group(2)
            
            # Ora dividi sui nomi separati da virgola
            for name in names_str.split(','):
                name = name.strip().rstrip(',')
                if name:
                    ports.append((name, width.strip()))
        else:
            print(f"[!] Warning: couldn't parse port line: '{line}'")

    return module_name, ports

def parse_csv(csv_path, input_signals):
    with open(csv_path) as f:
        lines = [line.strip() for line in f if line.strip()]
    
    headers = lines[0].split(",")
    rows = [list(map(int, l.split(","))) for l in lines[1:]]
    
    clean_headers = [h.strip().split()[-1] for h in headers]
    input_signal_set = set(s.strip() for s in input_signals.split(","))
    
    # idx = indice colonna nel CSV, name = nome segnale
    signal_indices = {
        idx: name.split("::")[-1]
        for idx, name in enumerate(clean_headers)
        if name in input_signal_set
    }
    
    # Warning if missing some signal
    found_signals = set(signal_indices.values())
    missing_signals = set(s.split("::")[-1].strip() for s in input_signal_set) - found_signals
    if missing_signals:
        print(f"[!] Warning: the following signals were not found in the CSV and will be ignored: {', '.join(missing_signals)}")

    if not signal_indices:
        raise ValueError("No input signal from --input-signals matched any CSV column.")

    result = []
    for row in rows:
        current_stim = []
        for idx, signal in signal_indices.items():
            value = row[idx]
            current_stim.append((signal, value))
        result.append(current_stim)  # una riga è una lista di (sig, val)
    
    return result


def group_rows(rows, size):
    if len(rows) % size != 0:
        print("[!] Warning: total number of rows is not divisible by group-size")
    return [rows[i:i+size] for i in range(0, len(rows), size)]

def generate_testbench(module, ports, groups, args, initial_signals, optional_signals):
    # Collect all signals used in CSV
    signals = {sig for row in groups for stim in row for sig, _ in stim}

    tb = []
    tb.append("`timescale 1ns/1ns\n")
    tb.append("module test;\n")

    # Declare clock and all other signals as logic
    tb.append("  logic clk;\n")
    
    port_dict = dict(ports)
    for name, width in ports:
        if name != "clk":
            tb.append(f"  logic {width + ' ' if width else ''}{name};\n")

    for s in signals:
        if s not in port_dict:
            tb.append(f"  logic {s};\n")

    # Instantiate the DUT
    tb.append("\n  // Device Under Test (DUT)\n")
    port_map = ",\n".join([f"    .{name}({name})" for name, _ in ports])
    tb.append(f"  {module} dut(\n{port_map}\n  );\n")

    # Clock generation
    tb.append("\n  always #5 clk = ~clk;\n")

    # Initial block for waveform and stimulus
    tb.append("\n  initial begin\n")
    tb.append(f"    $dumpfile(\"{module}.vcd\");\n")
    tb.append("    $dumpvars(0, test);\n")
    tb.append("    clk = 0;\n")

    
    # Initialize all signals to 0
    for name, _ in ports:
        if name != "clk" and name in signals:
            tb.append(f"    {name} = 0;\n")

    # Initialize inizial_signals
    for name, value, delay in initial_signals:
        tb.append(f"    #{delay} {name} = {value};\n")
    
    #for s in signals:
    #    if s not in port_dict:
    #        tb.append(f"    {s} = 0;\n")

    tb.append("    #10;\n")  # Initial delay

    for group in groups:
        for i, stim_row in enumerate(group):
            if i > 0:
                tb.append(f"    #{args.group_offset};\n")
            for sig, val in stim_row:
                tb.append(f"    {sig} = {val};\n")
        
        # Optional-signals after signals, before group-delay
        for name, value, delay in optional_signals:
            tb.append(f"    #{delay} {name} = {value};\n")
        
        tb.append(f"    #{args.group_delay};\n")


    # Final delay before simulation ends
    tb.append(f"    #{args.extra_delay};\n")
    tb.append("    $finish;\n  end\nendmodule\n")
    return "\n".join(tb)

def main():
    args = parse_args()
    module_name, ports = extract_module_and_ports(args.design)
    #print(module_name, ports)
    #print(args.input_signals)
    rows = parse_csv(args.input, args.input_signals)
    groups = group_rows(rows, args.group_size)
    initial_signals = parse_optional_signals(args.initial_signals)
    optional_signals = parse_optional_signals(args.optional_signals)
    tb_code = generate_testbench(module_name, ports, groups, args, initial_signals, optional_signals)

    with open(args.output, "w") as f:
        f.write(tb_code)
    print(f"[✔] Testbench written to: {args.output}")

if __name__ == "__main__":
    main()
