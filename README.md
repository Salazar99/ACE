# ACE
Assume-guarantee Contract Extractor

## Description

This tool allows for the extraction of A/G contracts starting from a IP.

## Getting Started
The repository presents the following folders:
```bash
Main/                                 
├── Copilot_mined_contracts/            # Copilot generated contracts
├── DeepSeek_mined_contracts/           # DeepSeek generated contracts
├── Gemini_mined_contracts/             # Gemini generated contracts
├── LLM_prompts/                        # LLM prompts
├── mined_contracts/                    # ACE generated contracts
├── tests/                              # Case studies folder
├── third_party/                        # Third party tools folder
├── Verilated-tests/                    # Case studies simulation folder
├── src                                     #Source folder 
|   ├── assume_gen                          #Invariant generation source code 
|   ├── DT_gen                              #Detection trace source code
|   ├── Filtering_ass                       #Filtering assertion source code
|   ├── Guarantee_gen                       #Guarantees generation source code
|   ├── Testbench_gen                       #Testbench generation source code
|   ├── Trace_filtering                     #Trace filtering source code
|   ├── Trace_gen                           #Simulation source code
|   └── utils                               #utils folder
├── LICENSE.md
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

Remeber to set the $ACEROOT ambient variable by executing:
```bash
export ACEROOT = /path_to_repo/ACE
```