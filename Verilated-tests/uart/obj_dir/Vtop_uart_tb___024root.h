// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_uart_tb.h for the primary calling header

#ifndef VERILATED_VTOP_UART_TB___024ROOT_H_
#define VERILATED_VTOP_UART_TB___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_uart_tb_prim_sha2_pkg;
class Vtop_uart_tb_uart_reg_pkg;


class Vtop_uart_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_uart_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_uart_tb_uart_reg_pkg* __PVT__uart_reg_pkg;
    Vtop_uart_tb_prim_sha2_pkg* __PVT__prim_sha2_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(tl_i_a_valid,0,0);
        VL_IN8(tl_i_a_opcode,2,0);
        VL_IN8(tl_i_a_size,1,0);
        VL_IN8(tl_i_a_mask,3,0);
        VL_IN8(tl_i_a_source,7,0);
        VL_IN8(tl_i_a_param,2,0);
        VL_IN8(tl_i_d_ready,0,0);
        VL_OUT8(tl_o_a_ready,0,0);
        VL_OUT8(tl_o_d_valid,0,0);
        VL_OUT8(tl_o_d_opcode,2,0);
        VL_OUT8(tl_o_d_source,7,0);
        VL_OUT8(tl_o_d_error,0,0);
        VL_OUT8(cio_tx_o,0,0);
        VL_OUT8(cio_tx_en_o,0,0);
        VL_IN8(cio_rx_i,0,0);
        CData/*3:0*/ top_uart_tb__DOT__alert_rx_i;
        CData/*0:0*/ top_uart_tb__DOT__intr_tx_watermark_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_tx_empty_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_rx_watermark_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_tx_done_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_rx_overflow_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_rx_frame_err_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_rx_break_err_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_rx_timeout_o;
        CData/*0:0*/ top_uart_tb__DOT__intr_rx_parity_err_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__lsio_trigger_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__wr_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q;
    };
    struct {
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe;
        CData/*7:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error;
        CData/*7:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data;
    };
    struct {
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en;
        CData/*7:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q;
        CData/*7:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in;
        CData/*4:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d;
        CData/*4:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst;
        VlWide<8>/*255:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*7:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q;
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__sync_rx__DOT__intq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q;
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
    };
    struct {
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        CData/*3:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst;
        VlWide<16>/*511:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__status;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__status;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__status;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        CData/*2:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d;
    };
    struct {
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        CData/*1:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq;
        CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__3__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__3__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__5__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__5__val;
        CData/*5:0*/ __Vdly__top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*6:0*/ __Vdly__top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check;
        SData/*15:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q;
        SData/*12:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit;
        SData/*12:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read;
        SData/*12:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write;
        SData/*15:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data;
        SData/*15:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q;
        SData/*10:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        SData/*10:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d;
        SData/*10:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        SData/*10:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d;
        VL_IN(tl_i_a_address,31,0);
        VL_IN(tl_i_a_data,31,0);
        VL_OUT(tl_o_d_data,31,0);
        IData/*31:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next;
        IData/*23:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
        IData/*31:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o;
        IData/*30:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
        IData/*30:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
        IData/*30:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
        IData/*31:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q;
        IData/*23:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data;
        IData/*23:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_d;
        IData/*23:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q;
        IData/*16:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__0;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2;
        IData/*30:0*/ __Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__2;
        IData/*31:0*/ __VactIterCount;
        VlWide<4>/*106:0*/ top_uart_tb__DOT__tl_i_raw;
        VlWide<4>/*106:0*/ top_uart_tb__DOT__tl_i;
        VlWide<3>/*65:0*/ top_uart_tb__DOT__tl_o;
        QData/*42:0*/ top_uart_tb__DOT__u_tl_intg__DOT__cmd;
        QData/*63:0*/ top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o;
    };
    struct {
        QData/*38:0*/ top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o;
        VlWide<5>/*131:0*/ top_uart_tb__DOT__dut__DOT__reg2hw;
        VlWide<3>/*65:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h;
        QData/*42:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd;
        QData/*63:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i;
        QData/*38:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i;
        QData/*56:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o;
        QData/*63:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o;
        QData/*38:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__0__payload;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__1__payload;
        VlUnpacked<CData/*2:0*/, 16> top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlTriggerVec<4> __VstlTriggered;
    VlTriggerVec<3> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_uart_tb__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*0:0*/, 13> top_uart_tb__DOT__dut__DOT__RaclPolicySelVec = {{
        0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U,
        0x00U, 0x00U, 0x00U, 0x00U, 0x00U
    }};
    static constexpr VlUnpacked<CData/*0:0*/, 13> top_uart_tb__DOT__dut__DOT__u_reg__DOT__RaclPolicySelVec = {{
        0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U,
        0x00U, 0x00U, 0x00U, 0x00U, 0x00U
    }};

    // CONSTRUCTORS
    Vtop_uart_tb___024root(Vtop_uart_tb__Syms* symsp, const char* v__name);
    ~Vtop_uart_tb___024root();
    VL_UNCOPYABLE(Vtop_uart_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
