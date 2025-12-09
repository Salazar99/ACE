#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vibex_alu.h"
#include <random> // For C++ random number generation
#include <iostream>
// Define the ALU operations used in the SystemVerilog testbench
// These must correspond to the enum values used in the Verilog module
// Vverified_accu (which corresponds to ibex_alu)
enum alu_op_e {
    ALU_ADD = 0,
    ALU_SUB = 1,
    ALU_OR  = 2,
    ALU_AND = 3,
    ALU_EQ  = 4
    // Assuming the Verilog module's parameter for ALU operations follows this pattern
};

// --- Verilator/Simulation setup functions ---
static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 100 MHz (10 ns period)


static inline void eval_and_dump(Vibex_alu * top, VerilatedVcdC* tfp) {
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vibex_alu * top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk = !top->clk;
}

static inline void step_full_cycle(Vibex_alu * top, VerilatedVcdC* tfp) {
    step_half_cycle(top, tfp); // low->high
    step_half_cycle(top, tfp); // high->low
}


int main(int argc, char **argv)
{
    // C++ random number generator setup
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib_val(1, 20); // $urandom_range(1, 20)
    std::uniform_int_distribution<> distrib_op(0, 4); // $urandom_range(0, 4)

    // Verilator setup
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vibex_alu;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump_global.vcd"); // Corresponds to $dumpfile

    // Initialization (from ibex_alu_tb.sv)
    top->clk = 0;
    top->operand_a_i         = 0; // operand_a_i = 32'h0 [cite: 13]
    top->operand_b_i         = 0; // operand_b_i = 32'h0 [cite: 14]
    top->instr_first_cycle_i = 0; // instr_first_cycle_i = 1'b0 [cite: 14]
    top->multdiv_sel_i       = 0; // multdiv_sel_i = 1'b0 [cite: 15]
    top->multdiv_operand_a_i = 0; // multdiv_operand_a_i = 33'h0 [cite: 15]
    top->multdiv_operand_b_i = 0; // multdiv_operand_b_i = 33'h0 [cite: 15]
    // Note: The ibex_alu_tb uses an array 'imd_val_q_i', which is likely
    // represented as separate inputs in the generated C++ top class (e.g., imd_val_q_i__0, imd_val_q_i__1)
    // Assuming Vverified_accu exposes these inputs, or they are simplified for this example.
    // For simplicity, we initialize the top-level 'operator_i' and skip the array inputs.
    top->operator_i          = ALU_ADD; // operator_i = ALU_ADD [cite: 17]

    std::cout << "Testbench starting..." << std::endl; // $display

    // Reset sequence (repeat (2) @(posedge clk); rst_n = 1'b1;) [cite: 18]
    step_full_cycle(top, tfp);
    step_full_cycle(top, tfp);
    step_half_cycle(top, tfp); // Apply rst_n change

    std::cout << "Testbench is out of reset." << std::endl; // $display

    // Test sequence setup
    int test_count = 0;
    const int MAX_TESTS = 10000;
    std::cout << "Starting randomized testbench with " << MAX_TESTS << " tests..." << std::endl; // $display [cite: 19, 20]

    // Local variables for test generation
    uint32_t temp_a;
    uint32_t temp_b;
    int op_sel;
    int temp_op;
    uint32_t temp_result = 0;
    bool temp_eq = false;

    // Main test loop
    while (test_count < MAX_TESTS) // while (test_count < 10000) [cite: 20]
    {
        // Randomize inputs (ibex_alu_tb.sv )
        temp_a = distrib_val(gen);
        temp_b = distrib_val(gen);
        op_sel = distrib_op(gen);

        // Calculate expected result (case (op_sel))
        switch (op_sel) {
            case 0:
                temp_op = ALU_ADD;
                temp_result = temp_a + temp_b; // [cite: 22]
                break;
            case 1:
                temp_op = ALU_SUB;
                temp_result = temp_a - temp_b; // [cite: 23]
                break;
            case 2:
                temp_op = ALU_OR;
                temp_result = temp_a | temp_b; // [cite: 24]
                break;
            case 3:
                temp_op = ALU_AND;
                temp_result = temp_a & temp_b; // [cite: 25]
                break;
            case 4:
                temp_op = ALU_EQ;
                temp_eq = (temp_a == temp_b); // [cite: 26]
                break;
            default:
                // Should not happen
                continue;
        }

        // Filter: skip if result is zero (ibex_alu_tb.sv [cite: 27])
        if ((temp_op == ALU_EQ && temp_eq == false) ||
            (temp_op != ALU_EQ && temp_result == 0)) {
            continue;
        }

        // Assign inputs (ibex_alu_tb.sv [cite: 28])
        top->operand_a_i = temp_a;
        top->operand_b_i = temp_b;
        top->operator_i  = temp_op;

        // Advance one full cycle (@(posedge clk); #2;) [cite: 29]
        step_full_cycle(top, tfp);
        // Note: The "#2" delay in SystemVerilog is simplified here by evaluating
        // after the posedge clk step, but before the next one.
        // Verilator's eval() handles combinational logic delays.

        // Print result (ibex_alu_tb.sv [cite: 29])
        uint32_t output_result = (temp_op == ALU_EQ) ? top->is_equal_result_o : top->result_o;
        // The operator_i.name() is not directly available in C++, printing the value instead.
        std::cout << "Test " << test_count << ": op=" << temp_op
                  << ", a=" << temp_a << ", b=" << temp_b
                  << " => result=" << output_result << std::endl;

        test_count++; // [cite: 30]
    }

    std::cout << "Randomized testbench completed." << std::endl; // $display
    // No $finish equivalent is strictly needed, but we exit gracefully.
    // Remember to close the trace object to save data in the file
    tfp->close();
    // Free memory
    delete top;
    delete tfp;
    return 0;
}