#include <cstdint>
#include <cstdio>
#include <iostream>
#include "Vtop_uart_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 100 MHz (10 ns period)

// -----------------------
// Eval + trace helpers
// -----------------------
static inline void eval_and_dump(Vtop_uart_tb* top, VerilatedVcdC* tfp) {
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vtop_uart_tb* top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk = !top->clk;
}

static inline void step_full_cycle(Vtop_uart_tb* top, VerilatedVcdC* tfp) {
    step_half_cycle(top, tfp); // low->high
    step_half_cycle(top, tfp); // high->low
}

// -----------------------
// TL‑UL wait helpers
// -----------------------
static bool wait_a_ready(Vtop_uart_tb* top, VerilatedVcdC* tfp, int max = 2000) {
    for (int i = 0; i < max; ++i) {
        if (top->tl_o_a_ready) return true;
        step_full_cycle(top, tfp);
    }
    fprintf(stderr, "Timeout: tl_o_a_ready stayed low\n");
    return false;
}

static bool wait_d_valid(Vtop_uart_tb* top, VerilatedVcdC* tfp, int max = 2000) {
    for (int i = 0; i < max; ++i) {
        if (top->tl_o_d_valid) return true;
        step_full_cycle(top, tfp);
    }
    fprintf(stderr, "Timeout: tl_o_d_valid never asserted\n");
    return false;
}

void print_binary32(uint32_t x) { 
    for (int i = 31; i >= 0; --i) 
        std::cout << ((x >> i) & 1); 
    std::cout << '\n'; 
} 

// -----------------------
// TL‑UL write/read (32b)
// -----------------------
static bool tl_write32(Vtop_uart_tb* top, VerilatedVcdC* tfp, uint32_t addr, uint32_t data) {
    // PutFullData (0), 4B write: size=2, mask=0xF, param=0, source=0
    top->tl_i_a_opcode  = 0;
    top->tl_i_a_address = addr;
    top->tl_i_a_mask    = 0xF;
    top->tl_i_a_size    = 2;
    top->tl_i_a_param   = 0;
    top->tl_i_a_source  = 0;
    top->tl_i_a_data    = data;

    // Assert a_valid, wait for a_ready
    top->tl_i_a_valid = 1;
    if (!wait_a_ready(top, tfp)) return false;

    // One extra cycle to complete acceptance
    step_full_cycle(top, tfp);
    top->tl_i_a_valid = 0;

    // Host ready for D channel
    top->tl_i_d_ready = 1;
    if (!wait_d_valid(top, tfp)) return false;

    if (top->tl_o_d_error) {
        fprintf(stderr, "TL-UL WRITE ERROR @0x%08x (d_error=1)\n", addr);
        return false;
    }
    // Consume response
    step_full_cycle(top, tfp);
    return true;
}

// -----------------------
// UART register addresses
// -----------------------
constexpr uint32_t UART_INTR_ENABLE = 0x04;
constexpr uint32_t UART_CTRL        = 0x10; // NCO[31:16], RX[1], TX[0]
constexpr uint32_t UART_STATUS      = 0x14;
constexpr uint32_t UART_RDATA       = 0x18;
constexpr uint32_t UART_WDATA       = 0x1C;
constexpr uint32_t UART_FIFO_CTRL   = 0x20;

// NCO = (2^20 * baud) / f_clk (spec)
static bool uart_init(Vtop_uart_tb* top, VerilatedVcdC* tfp, uint32_t baud, uint32_t fclk_hz) {
    uint32_t nco = (uint64_t(baud) << 20) / fclk_hz;
    uint32_t ctrl =
        ((nco & 0xFFFFu) << 16) |
        (1u << 0) |  // TX enable
        (1u << 1);   // RX enable

    if (!tl_write32(top, tfp, UART_CTRL, ctrl)) return false;

    // Reset both FIFOs
    if (!tl_write32(top, tfp, UART_FIFO_CTRL, (1u << 0) | (1u << 1))) return false;

    // Enable useful interrupts (optional)
    uint32_t intr_en =
        (1u << 0) | // tx_watermark
        (1u << 1) | // rx_watermark
        (1u << 2) | // tx_done
        (1u << 3) | // rx_overflow
        (1u << 4) | // rx_frame_err
        (1u << 5) | // rx_break_err
        (1u << 6) | // rx_timeout
        (1u << 7);  // rx_parity_err
    if (!tl_write32(top, tfp, UART_INTR_ENABLE, intr_en)) return false;

    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vtop_uart_tb;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump_tx.vcd");

    // Init
    top->clk   = 0;
    top->rst_n = 0;

    // Initialize TL‑UL host inputs
    top->tl_i_a_valid  = 0;
    top->tl_i_a_opcode = 0;
    top->tl_i_a_param  = 0;
    top->tl_i_a_size   = 2;
    top->tl_i_a_source = 0;
    top->tl_i_a_address= 0;
    top->tl_i_a_mask   = 0xF;
    top->tl_i_a_data   = 0;
    top->tl_i_d_ready  = 1; // host always ready for responses

    // Reset low for a few cycles
    for (int i = 0; i < 4; ++i) step_full_cycle(top, tfp);

    // Deassert reset
    top->rst_n = 1;

    // Let things settle
    for (int i = 0; i < 10; ++i) step_full_cycle(top, tfp);

    // UART init: 115200 baud @ 100 MHz
    const uint32_t FCLK_HZ    = 100000000;  // 100 MHz
    const uint32_t BAUD       = 115200;
    const int      BAUD_TICKS = int(FCLK_HZ / BAUD); // ~868 cycles per bit

    if (!uart_init(top, tfp, BAUD, FCLK_HZ)) {
        fprintf(stderr, "uart_init failed (integrity/handshake error)\n");
        tfp->close(); top->final(); delete tfp; delete top; return 1;
    }
    std::cout << "UART initialized for " << BAUD << " baud\n";
    top->cio_rx_i = 1; // idle

    // Run to separate init trace
    for (int i = 0; i < 100; ++i) {
        step_full_cycle(top, tfp);
        if (Verilated::gotFinish()) break;
    }

    // Quick TX test: write 'A' to WDATA
    if (!tl_write32(top, tfp, UART_WDATA, 0xFF)) {
        fprintf(stderr, "WDATA write failed\n");
        tfp->close(); top->final(); delete tfp; delete top; return 1;
    }

    // Run to serialize TX
    for (int i = 0; i < 2000; ++i) {
        step_full_cycle(top, tfp);
        if (Verilated::gotFinish()) break;
    }

    // Finish
    for (int i = 0; i < 5000; ++i) {
        step_full_cycle(top, tfp);
        if (Verilated::gotFinish()) break;
    }

    tfp->close();
    top->final();
    delete tfp;
    delete top;
    return 0;
}