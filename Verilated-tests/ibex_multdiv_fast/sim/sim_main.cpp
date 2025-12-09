#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vibex_multdiv_fast.h"

#include <iostream>
#include <random>
#include <chrono>

// Global simulation time and constants
static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 10ns period (5ns high, 5ns low)
static const int NUM_TESTS = 1000;

// Random Number Generation Setup
static std::mt19937 generator(std::chrono::high_resolution_clock::now().time_since_epoch().count());
// Range for operands: -100 to 100 (signed)
static std::uniform_int_distribution<int32_t> distrib_ab(-100, 100);

// --- CLOCK AND EVALUATION FUNCTIONS ---

// Logic for the IMD registers (modeled outside the DUT, updated on posedge clk)
static inline void update_imd_registers(Vibex_multdiv_fast* top) {
    // imd_val_we_o is logic [1:0]. Access bits using bitwise operations.
    // Index 0: bit 0 of imd_val_we_o
    if (top->imd_val_we_o & 0x1) {
        top->imd_val_q_i[0] = top->imd_val_d_o[0];
    }
    // Index 1: bit 1 of imd_val_we_o
    if (top->imd_val_we_o & 0x2) {
        top->imd_val_q_i[1] = top->imd_val_d_o[1];
    }
}

static inline void eval_and_dump(Vibex_multdiv_fast * top, VerilatedVcdC* tfp) {
    // 1. Emulate the combinational logic from the SV testbench

    // equal_to_zero_i = (op_b_i == 32'd0)
    top->equal_to_zero_i = (top->op_b_i == 0);

    // adder_sum = {1'b0, alu_operand_a_o} + {1'b0, alu_operand_b_o}
    // Since alu_operand_a_o/b_o are 33 bits [32:0], we use uint64_t for the 34-bit sum.
    uint64_t operand_a_ext = (uint64_t)top->alu_operand_a_o;
    uint64_t operand_b_ext = (uint64_t)top->alu_operand_b_o;
    
    // Calculate the 34-bit sum
    uint64_t adder_sum = operand_a_ext + operand_b_ext;

    // alu_adder_i = adder_sum[32:1] (32 bits)
    top->alu_adder_i = (uint32_t)((adder_sum >> 1) & 0xFFFFFFFFULL);

    // alu_adder_ext_i = {adder_sum[33], adder_sum[32:1], adder_sum[0]} (34 bits)
    uint64_t alu_adder_ext_val = 0;
    // Set bit 0 (adder_sum[0])
    alu_adder_ext_val |= (adder_sum & 0x1);
    // Set bits 1 to 32 (adder_sum[32:1]), shifted by 1
    alu_adder_ext_val |= ((adder_sum >> 1) & 0xFFFFFFFFULL) << 1;
    // Set bit 33 (adder_sum[33])
    alu_adder_ext_val |= (adder_sum >> 33) << 33;
    
    top->alu_adder_ext_i = alu_adder_ext_val;
    
    // 2. Evaluate and dump
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vibex_multdiv_fast * top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk_i = !top->clk_i;
}

static inline void step_full_cycle(Vibex_multdiv_fast * top, VerilatedVcdC* tfp) {
    // Clock low -> high (posedge)
    step_half_cycle(top, tfp);

    // Update IMD registers *after* the positive edge evaluation, before the next negative edge
    if (top->clk_i == 1) { // We just transitioned to high (posedge)
        update_imd_registers(top);
    }

    // Clock high -> low (negedge)
    step_half_cycle(top, tfp);
}


// --- TESTBENCH TASKS ---

// Equivalent of do_mult task
void do_mult(Vibex_multdiv_fast* top, VerilatedVcdC* tfp, uint32_t a, uint32_t b, uint8_t signed_mode) {
    step_full_cycle(top, tfp); // posedge clk

    top->op_a_i = a;
    top->op_b_i = b;
    top->signed_mode_i = signed_mode;
    top->operator_i = 0; // MD_OP_MULL (Assuming 0 is the enum value)
    top->mult_sel_i = 1;
    top->mult_en_i = 1;

    // Wait for valid_o (wait(valid_o) in SV)
    while (!top->valid_o && sim_time < 1000000) { // Safety break
        step_full_cycle(top, tfp);
    }

    step_full_cycle(top, tfp); // posedge clk

    // Deassert control signals
    top->mult_en_i = 0;
    top->mult_sel_i = 0;

    // Display result 
    std::cout << "MULT " << (int32_t)a << " * " << (int32_t)b
              << " = " << (int32_t)top->multdiv_result_o << std::endl;
}

// Equivalent of do_div task
void do_div(Vibex_multdiv_fast* top, VerilatedVcdC* tfp, uint32_t a, uint32_t b, uint8_t signed_mode) {
    step_full_cycle(top, tfp); // posedge clk

    top->op_a_i = a;
    top->op_b_i = b;
    top->signed_mode_i = signed_mode;
    top->operator_i = 1; // MD_OP_DIV (Assuming 1 is the enum value)
    top->div_sel_i = 1;
    top->div_en_i = 1;

    // Wait for valid_o
    while (!top->valid_o && sim_time < 1000000) { // Safety break
        step_full_cycle(top, tfp);
    }

    step_full_cycle(top, tfp); // posedge clk
    
    // Deassert control signals
    top->div_en_i = 0;
    top->div_sel_i = 0;

    // Display result
    std::cout << "DIV " << (int32_t)a << " / " << (int32_t)b
              << " = " << (int32_t)top->multdiv_result_o << std::endl;
}

// --- MAIN SIMULATION LOOP ---

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vibex_multdiv_fast;
    auto* tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("ibex_multdiv_fast.vcd");
    
    // 1. INITIALIZATION AND RESET
    top->clk_i   = 0;
    top->rst_ni = 0;
    top->mult_en_i = 0;
    top->div_en_i = 0;
    top->mult_sel_i = 0;
    top->div_sel_i = 0;
    top->operator_i = 0; // MD_OP_MULL
    top->signed_mode_i = 0; // unsigned
    top->op_a_i = 0;
    top->op_b_i = 0;
    top->data_ind_timing_i = 1;
    top->multdiv_ready_id_i = 1;

    // Reset low for 2 cycles (#20 in SV, 2 * 10ns cycles)
    for (int i = 0; i < 2; ++i) step_full_cycle(top, tfp);

    // Release reset
    top->rst_ni = 1;

    // Wait for one posedge rst_n
    step_full_cycle(top, tfp);

    // 2. CORE TESTING LOOP (Randomized Operations)
    for (int i = 0; i < NUM_TESTS; ++i) {
        
        // 2.1 Operand Generation
        int32_t a_signed = distrib_ab(generator); // -100 to 100
        int32_t b_signed;
        do {
            b_signed = distrib_ab(generator); // -100 to 100
        // Constraint: b must be <= a + 1 OR b must be non-zero
        } while ((b_signed > (a_signed + 1)) && b_signed == 0); 

        uint32_t a = (uint32_t)a_signed;
        uint32_t b = (uint32_t)b_signed;

        uint8_t signed_mode = 0; // signed mode
        if (a_signed < 0) signed_mode |= 0x1; // sm[0] (A is signed)
        if (b_signed < 0) signed_mode |= 0x2; // sm[1] (B is signed)

        // 2.2 Operation Selection (50/50 split)
        if (generator() % 2 == 0) {
            do_mult(top, tfp, a, b, signed_mode);
        } else {
            do_div(top, tfp, a, b, signed_mode);
        }
    }

    // 3. TERMINATION
    // #10 in SV
    step_half_cycle(top, tfp);
    
    // Remember to close the trace object to save data in the file
    tfp->close();
    
    // Free memory
    delete top;
    delete tfp;
    
    return 0;
}