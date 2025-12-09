`timescale 1ns/1ps

module top_uart_tb (
  input  logic clk,
  input  logic rst_n,

  // -----------------------------
  // TL‑UL Host→Device (A channel)
  // -----------------------------
  input  logic        tl_i_a_valid,
  input  logic [2:0]  tl_i_a_opcode,   // PutFullData=0, Get=4
  input  logic [1:0]  tl_i_a_size,     // 2'b10 for 4-byte accesses on 32-bit bus
  input  logic [3:0]  tl_i_a_mask,     // 4'hF for 32-bit word
  input  logic [31:0] tl_i_a_address,  // 4-byte aligned
  input  logic [31:0] tl_i_a_data,
  input  logic [7:0]  tl_i_a_source,   // width should match TL_AIW
  input  logic [2:0]  tl_i_a_param,    // must be 3'b000

  // Host ready for D channel
  input  logic        tl_i_d_ready,

  // -----------------------------
  // TL‑UL Device→Host (A ready + D)
  // -----------------------------
  output logic        tl_o_a_ready,
  output logic        tl_o_d_valid,
  output logic [2:0]  tl_o_d_opcode,   // AccessAck=0, AccessAckData=1
  output logic [31:0] tl_o_d_data,
  output logic [7:0]  tl_o_d_source,   // matches TL_AIW
  output logic        tl_o_d_error,

  // UART external pins
  output logic cio_tx_o,
  output logic cio_tx_en_o,
  input  logic cio_rx_i
);

  import tlul_pkg::*;        // TL-UL structs/enums/helpers (incl. cmd/data integrity)
  import prim_mubi_pkg::*;   // MuBi4 types (MuBi4False)
  import prim_alert_pkg::*;  // Alert RX/TX structs
  import top_racl_pkg::*;    // RACL vector types
  import uart_reg_pkg::*;    // NumAlerts, reg types

  // TL structs
  tl_h2d_t tl_i_raw;  // RAW request from C++
  tl_h2d_t tl_i;      // FINAL request to DUT (with integrity)
  tl_d2h_t tl_o;      // DUT response

  // ---------------------------
  // Flat → RAW TL-UL struct
  // ---------------------------
  always_comb begin
    tl_i_raw                 = tlul_pkg::TL_H2D_DEFAULT; // avoid Xs

    tl_i_raw.a_valid         = tl_i_a_valid;
    tl_i_raw.a_opcode        = tlul_pkg::tl_a_op_e'(tl_i_a_opcode);
    tl_i_raw.a_size          = tl_i_a_size;       // 2 for 4B
    tl_i_raw.a_mask          = tl_i_a_mask;       // 4'hF
    tl_i_raw.a_address       = tl_i_a_address;    // aligned
    tl_i_raw.a_data          = tl_i_a_data;
    tl_i_raw.a_source        = tl_i_a_source;     // TL_AIW (commonly 8)
    tl_i_raw.a_param         = tl_i_a_param;      // 0
    tl_i_raw.d_ready         = tl_i_d_ready;

    // a_user.instr_type participates in ECC; set before integrity generation
    tl_i_raw.a_user          = tlul_pkg::TL_A_USER_DEFAULT;
    tl_i_raw.a_user.rsvd     = '0;
    tl_i_raw.a_user.instr_type = prim_mubi_pkg::MuBi4False; // data access
  end

  // ---------------------------
  // Integrity generator (fills a_user ECC correctly)
  // ---------------------------
  tlul_cmd_intg_gen u_tl_intg (
    .tl_i (tl_i_raw),
    .tl_o (tl_i)
  );

  // ---------------------------
  // Struct → flat back to C++
  // ---------------------------
  assign tl_o_a_ready   = tl_o.a_ready;
  assign tl_o_d_valid   = tl_o.d_valid;
  assign tl_o_d_opcode  = 3'(tl_o.d_opcode); // enum → 3b logic
  assign tl_o_d_data    = tl_o.d_data;
  assign tl_o_d_source  = tl_o.d_source;
  assign tl_o_d_error   = tl_o.d_error;

  // ---------------------------
  // Alerts tie-off (RX)
  // ---------------------------
  prim_alert_pkg::alert_rx_t [NumAlerts-1:0] alert_rx_i;
  prim_alert_pkg::alert_tx_t [NumAlerts-1:0] alert_tx_o;
  generate
    for (genvar i = 0; i < NumAlerts; i++) begin : g_alerts
      assign alert_rx_i[i].ping_p = 1'b0;
      assign alert_rx_i[i].ping_n = 1'b0;
    end
  endgenerate

  // ---------------------------
  // RACL tie-off (unpacked array)
  // ---------------------------
  // top_racl_pkg::racl_policy_vec_t racl_policies_i;
  // generate
  //   for (genvar i = 0; i < top_racl_pkg::RACL_NUM_POLICIES; i++) begin : g_racl_tieoff
  //     assign racl_policies_i[i] = '0; // expand fields explicitly if needed
  //   end
  // endgenerate

  // top_racl_pkg::racl_error_log_t  racl_error_o;

  // Interrupts (observe in waveform if desired)
  logic intr_tx_watermark_o;
  logic intr_tx_empty_o;
  logic intr_rx_watermark_o;
  logic intr_tx_done_o;
  logic intr_rx_overflow_o;
  logic intr_rx_frame_err_o;
  logic intr_rx_break_err_o;
  logic intr_rx_timeout_o;
  logic intr_rx_parity_err_o;

  // Active-low reset to DUT
  wire rst_ni = rst_n;

  // ---------------------------
  // DUT instantiation (your UART)
  // ---------------------------
  uart dut (
    .clk_i      (clk),
    .rst_ni     (rst_ni),
    .tl_i       (tl_i),
    .tl_o       (tl_o),
    .alert_rx_i (alert_rx_i),
    .alert_tx_o (alert_tx_o),
    // .racl_policies_i      (),
     .racl_error_o         (),
    .lsio_trigger_o  (),
    .cio_rx_i   (cio_rx_i),
    .cio_tx_o   (cio_tx_o),
    .cio_tx_en_o(cio_tx_en_o),

    .intr_tx_watermark_o(intr_tx_watermark_o),
    .intr_tx_empty_o    (intr_tx_empty_o),
    .intr_rx_watermark_o(intr_rx_watermark_o),
    .intr_tx_done_o     (intr_tx_done_o),
    .intr_rx_overflow_o (intr_rx_overflow_o),
    .intr_rx_frame_err_o(intr_rx_frame_err_o),
    .intr_rx_break_err_o(intr_rx_break_err_o),
    .intr_rx_timeout_o  (intr_rx_timeout_o),
    .intr_rx_parity_err_o(intr_rx_parity_err_o)
  );

endmodule
