# ACE
Assume-guarantee Contract Extractor

## Description

This tool allows for the extraction of A/G contracts starting from a IP.

## Getting Started
The repository presents the following folders:
```bash
├──DATE26/                              #DATE26 results and tests folder
|  ├── DATE26_Copilot_mined_contracts/  # LLM generated contracts
|  ├── DATE26_mined_contracts/          # ACE generated contracts
|  ├── DATE26_golden_specs/             # Golden specifications of the tested IPs 
|  └── DATE26_tests/                    # Test cases of the methodology
|
├── Detection_trace_gen                 #Detection trace source code
├── InvGen                              #Invariant generation source code 
├── tb_generator                        #Testbench generation source code
├── third_party                         #Third party install folder
├── trace_filtering                     #Trace filtering source code
└── README.md 
```
### Dependencies

* third_parties tools (see Installing section)
* python3
* QuestaSim (for the IP simulation)

### Installing
1. Clone the repository

2. Enter third_party directory
    ```bash
    cd ACE/third_party
    ```

3. Install dependencies by executing
    ```bash
    bash install_all.sh
    ```

4. Install QuestaSim

5. Install python 3

### Executing program
Set the $ACEROOT ambient variable by executing:
```bash
export ACEROOT = /path_to_repo/ACE
```

Navigate to DATE26/DATE26_tests to find all the designs and associated scripts for each step
