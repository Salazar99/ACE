// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_alu.h for the primary calling header

#include "Vibex_alu__pch.h"
#include "Vibex_alu___024root.h"

void Vibex_alu___024root___ico_sequent__TOP__0(Vibex_alu___024root* vlSelf);

void Vibex_alu___024root___eval_ico(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vibex_alu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vibex_alu__ConstPool__TABLE_h174edf3f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_alu__ConstPool__TABLE_had5a947d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_alu__ConstPool__TABLE_hb0896d1c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_alu__ConstPool__TABLE_h06a033e3_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vibex_alu__ConstPool__TABLE_h9adffb8d_0;

VL_INLINE_OPT void Vibex_alu___024root___ico_sequent__TOP__0(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.ibex_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelfRef.imd_val_q_i[0U];
    vlSelfRef.ibex_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelfRef.imd_val_q_i[1U];
    vlSelfRef.ibex_alu__DOT__bwlogic_result = (((3U 
                                                 == (IData)(vlSelfRef.operator_i)) 
                                                | (6U 
                                                   == (IData)(vlSelfRef.operator_i)))
                                                ? (vlSelfRef.operand_a_i 
                                                   | vlSelfRef.operand_b_i)
                                                : (
                                                   ((4U 
                                                     == (IData)(vlSelfRef.operator_i)) 
                                                    | (7U 
                                                       == (IData)(vlSelfRef.operator_i)))
                                                    ? 
                                                   (vlSelfRef.operand_a_i 
                                                    & vlSelfRef.operand_b_i)
                                                    : 
                                                   (vlSelfRef.operand_a_i 
                                                    ^ vlSelfRef.operand_b_i)));
    __Vtableidx2 = vlSelfRef.operator_i;
    vlSelfRef.ibex_alu__DOT__cmp_signed = Vibex_alu__ConstPool__TABLE_h174edf3f_0
        [__Vtableidx2];
    vlSelfRef.ibex_alu__DOT__operand_a_rev = ((((((vlSelfRef.operand_a_i 
                                                   << 0x1fU) 
                                                  | (0x40000000U 
                                                     & (vlSelfRef.operand_a_i 
                                                        << 0x1dU))) 
                                                 | ((0x20000000U 
                                                     & (vlSelfRef.operand_a_i 
                                                        << 0x1bU)) 
                                                    | (0x10000000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          << 0x19U)))) 
                                                | (((0x8000000U 
                                                     & (vlSelfRef.operand_a_i 
                                                        << 0x17U)) 
                                                    | (0x4000000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          << 0x15U))) 
                                                   | ((0x2000000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          << 0x13U)) 
                                                      | (0x1000000U 
                                                         & (vlSelfRef.operand_a_i 
                                                            << 0x11U))))) 
                                               | ((((0x800000U 
                                                     & (vlSelfRef.operand_a_i 
                                                        << 0xfU)) 
                                                    | (0x400000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          << 0xdU))) 
                                                   | ((0x200000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          << 0xbU)) 
                                                      | (0x100000U 
                                                         & (vlSelfRef.operand_a_i 
                                                            << 9U)))) 
                                                  | (((0x80000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          << 7U)) 
                                                      | (0x40000U 
                                                         & (vlSelfRef.operand_a_i 
                                                            << 5U))) 
                                                     | ((0x20000U 
                                                         & (vlSelfRef.operand_a_i 
                                                            << 3U)) 
                                                        | (0x10000U 
                                                           & (vlSelfRef.operand_a_i 
                                                              << 1U)))))) 
                                              | (((((0x8000U 
                                                     & (vlSelfRef.operand_a_i 
                                                        >> 1U)) 
                                                    | (0x4000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          >> 3U))) 
                                                   | ((0x2000U 
                                                       & (vlSelfRef.operand_a_i 
                                                          >> 5U)) 
                                                      | (0x1000U 
                                                         & (vlSelfRef.operand_a_i 
                                                            >> 7U)))) 
                                                  | (((0x800U 
                                                       & (vlSelfRef.operand_a_i 
                                                          >> 9U)) 
                                                      | (0x400U 
                                                         & (vlSelfRef.operand_a_i 
                                                            >> 0xbU))) 
                                                     | ((0x200U 
                                                         & (vlSelfRef.operand_a_i 
                                                            >> 0xdU)) 
                                                        | (0x100U 
                                                           & (vlSelfRef.operand_a_i 
                                                              >> 0xfU))))) 
                                                 | ((((0x80U 
                                                       & (vlSelfRef.operand_a_i 
                                                          >> 0x11U)) 
                                                      | (0x40U 
                                                         & (vlSelfRef.operand_a_i 
                                                            >> 0x13U))) 
                                                     | ((0x20U 
                                                         & (vlSelfRef.operand_a_i 
                                                            >> 0x15U)) 
                                                        | (0x10U 
                                                           & (vlSelfRef.operand_a_i 
                                                              >> 0x17U)))) 
                                                    | (((8U 
                                                         & (vlSelfRef.operand_a_i 
                                                            >> 0x19U)) 
                                                        | (4U 
                                                           & (vlSelfRef.operand_a_i 
                                                              >> 0x1bU))) 
                                                       | ((2U 
                                                           & (vlSelfRef.operand_a_i 
                                                              >> 0x1dU)) 
                                                          | (vlSelfRef.operand_a_i 
                                                             >> 0x1fU))))));
    __Vtableidx4 = vlSelfRef.operator_i;
    vlSelfRef.ibex_alu__DOT__shift_left = Vibex_alu__ConstPool__TABLE_had5a947d_0
        [__Vtableidx4];
    __Vtableidx1 = vlSelfRef.operator_i;
    vlSelfRef.ibex_alu__DOT__adder_op_a_shift1 = Vibex_alu__ConstPool__TABLE_hb0896d1c_0
        [__Vtableidx1];
    vlSelfRef.ibex_alu__DOT__adder_op_a_shift2 = Vibex_alu__ConstPool__TABLE_hb0896d1c_0
        [__Vtableidx1];
    vlSelfRef.ibex_alu__DOT__adder_op_a_shift3 = Vibex_alu__ConstPool__TABLE_hb0896d1c_0
        [__Vtableidx1];
    vlSelfRef.ibex_alu__DOT__adder_op_b_negate = Vibex_alu__ConstPool__TABLE_h06a033e3_0
        [__Vtableidx1];
    vlSelfRef.ibex_alu__DOT__shift_operand = ((IData)(vlSelfRef.ibex_alu__DOT__shift_left)
                                               ? vlSelfRef.ibex_alu__DOT__operand_a_rev
                                               : vlSelfRef.operand_a_i);
    vlSelfRef.ibex_alu__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlSelfRef.operator_i)) 
                                                              & (vlSelfRef.ibex_alu__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.ibex_alu__DOT__shift_operand))), 
                                           (0x1fU & 
                                            ((IData)(vlSelfRef.instr_first_cycle_i)
                                              ? vlSelfRef.operand_b_i
                                              : (- vlSelfRef.operand_b_i)))));
    vlSelfRef.ibex_alu__DOT__shift_result_ext = vlSelfRef.ibex_alu__DOT__shift_result_ext_signed;
    vlSelfRef.ibex_alu__DOT__shift_result = (IData)(vlSelfRef.ibex_alu__DOT__shift_result_ext);
    vlSelfRef.ibex_alu__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelfRef.ibex_alu__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xfffffff8U 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((4U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        >> 0x1bU)) 
                                                    | ((2U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           >> 0x1dU)) 
                                                       | (vlSelfRef.ibex_alu__DOT__shift_result 
                                                          >> 0x1fU))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xffffffc7U 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x20U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        >> 0x15U)) 
                                                    | ((0x10U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           >> 0x17U)) 
                                                       | (8U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             >> 0x19U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xfffffe3fU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x100U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        >> 0xfU)) 
                                                    | ((0x80U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           >> 0x11U)) 
                                                       | (0x40U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             >> 0x13U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xfffff1ffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        >> 9U)) 
                                                    | ((0x400U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           >> 0xbU)) 
                                                       | (0x200U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             >> 0xdU)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xffff8fffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x4000U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        >> 3U)) 
                                                    | ((0x2000U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           >> 5U)) 
                                                       | (0x1000U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             >> 7U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xfffc7fffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x20000U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        << 3U)) 
                                                    | ((0x10000U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           << 1U)) 
                                                       | (0x8000U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             >> 1U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xffe3ffffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x100000U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        << 9U)) 
                                                    | ((0x80000U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           << 7U)) 
                                                       | (0x40000U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             << 5U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xff1fffffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x800000U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        << 0xfU)) 
                                                    | ((0x400000U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           << 0xdU)) 
                                                       | (0x200000U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             << 0xbU)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xf8ffffffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x4000000U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        << 0x15U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           << 0x13U)) 
                                                       | (0x1000000U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             << 0x11U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0xc7ffffffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((0x20000000U 
                                                     & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                        << 0x1bU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                           << 0x19U)) 
                                                       | (0x8000000U 
                                                          & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                             << 0x17U)))));
    vlSelfRef.ibex_alu__DOT__shift_result_rev = ((0x3fffffffU 
                                                  & vlSelfRef.ibex_alu__DOT__shift_result_rev) 
                                                 | ((vlSelfRef.ibex_alu__DOT__shift_result 
                                                     << 0x1fU) 
                                                    | (0x40000000U 
                                                       & (vlSelfRef.ibex_alu__DOT__shift_result 
                                                          << 0x1dU))));
    vlSelfRef.ibex_alu__DOT__shift_result = ((IData)(vlSelfRef.ibex_alu__DOT__shift_left)
                                              ? vlSelfRef.ibex_alu__DOT__shift_result_rev
                                              : vlSelfRef.ibex_alu__DOT__shift_result);
    vlSelfRef.adder_result_ext_o = (0x3ffffffffULL 
                                    & (((IData)(vlSelfRef.multdiv_sel_i)
                                         ? vlSelfRef.multdiv_operand_a_i
                                         : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_a_shift1)
                                             ? (1ULL 
                                                | ((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & vlSelfRef.operand_a_i))) 
                                                   << 2U))
                                             : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_a_shift2)
                                                 ? 
                                                (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x3fffffffU 
                                                                     & vlSelfRef.operand_a_i))) 
                                                    << 3U))
                                                 : 
                                                ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_a_shift3)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSelfRef.operand_a_i))) 
                                                     << 4U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(vlSelfRef.operand_a_i)) 
                                                     << 1U)))))) 
                                       + (0x1ffffffffULL 
                                          & ((IData)(vlSelfRef.multdiv_sel_i)
                                              ? vlSelfRef.multdiv_operand_b_i
                                              : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_b_negate)
                                                  ? 
                                                 (~ 
                                                  ((QData)((IData)(vlSelfRef.operand_b_i)) 
                                                   << 1U))
                                                  : 
                                                 ((QData)((IData)(vlSelfRef.operand_b_i)) 
                                                  << 1U))))));
    vlSelfRef.adder_result_o = (IData)((vlSelfRef.adder_result_ext_o 
                                        >> 1U));
    vlSelfRef.is_equal_result_o = (0U == vlSelfRef.adder_result_o);
    __Vtableidx3 = ((0x200U & ((~ (IData)(vlSelfRef.is_equal_result_o)) 
                               << 9U)) | ((0x100U & 
                                           ((((vlSelfRef.operand_a_i 
                                               ^ vlSelfRef.operand_b_i) 
                                              >> 0x1fU)
                                              ? ((vlSelfRef.operand_a_i 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSelfRef.ibex_alu__DOT__cmp_signed))
                                              : (~ (IData)(
                                                           (vlSelfRef.adder_result_ext_o 
                                                            >> 0x20U)))) 
                                            << 8U)) 
                                          | (((IData)(vlSelfRef.is_equal_result_o) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.operator_i))));
    vlSelfRef.ibex_alu__DOT__cmp_result = Vibex_alu__ConstPool__TABLE_h9adffb8d_0
        [__Vtableidx3];
    vlSelfRef.comparison_result_o = vlSelfRef.ibex_alu__DOT__cmp_result;
    vlSelfRef.result_o = 0U;
    if ((0x40U & (IData)(vlSelfRef.operator_i))) {
        if ((1U & (~ ((IData)(vlSelfRef.operator_i) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.operator_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.operator_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.operator_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.operator_i)))) {
                                vlSelfRef.result_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.result_o = ((0x20U & (IData)(vlSelfRef.operator_i))
                               ? ((0x10U & (IData)(vlSelfRef.operator_i))
                                   ? 0U : ((8U & (IData)(vlSelfRef.operator_i))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.operator_i))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.operator_i))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.operator_i))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.ibex_alu__DOT__cmp_result)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.operator_i))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.operator_i))
                                                     ? (IData)(vlSelfRef.ibex_alu__DOT__cmp_result)
                                                     : 0U)
                                                    : 0U))
                                            : 0U)) : 
                              ((0x10U & (IData)(vlSelfRef.operator_i))
                                ? ((8U & (IData)(vlSelfRef.operator_i))
                                    ? ((4U & (IData)(vlSelfRef.operator_i))
                                        ? ((2U & (IData)(vlSelfRef.operator_i))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.operator_i))
                                                ? 0U
                                                : (IData)(vlSelfRef.ibex_alu__DOT__cmp_result))
                                            : (IData)(vlSelfRef.ibex_alu__DOT__cmp_result))
                                        : ((2U & (IData)(vlSelfRef.operator_i))
                                            ? (IData)(vlSelfRef.ibex_alu__DOT__cmp_result)
                                            : ((1U 
                                                & (IData)(vlSelfRef.operator_i))
                                                ? (IData)(vlSelfRef.ibex_alu__DOT__cmp_result)
                                                : vlSelfRef.adder_result_o)))
                                    : ((4U & (IData)(vlSelfRef.operator_i))
                                        ? ((2U & (IData)(vlSelfRef.operator_i))
                                            ? vlSelfRef.adder_result_o
                                            : 0U) : 0U))
                                : ((8U & (IData)(vlSelfRef.operator_i))
                                    ? ((4U & (IData)(vlSelfRef.operator_i))
                                        ? ((2U & (IData)(vlSelfRef.operator_i))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.operator_i))
                                             ? 0U : vlSelfRef.ibex_alu__DOT__shift_result))
                                        : vlSelfRef.ibex_alu__DOT__shift_result)
                                    : ((4U & (IData)(vlSelfRef.operator_i))
                                        ? vlSelfRef.ibex_alu__DOT__bwlogic_result
                                        : ((2U & (IData)(vlSelfRef.operator_i))
                                            ? vlSelfRef.ibex_alu__DOT__bwlogic_result
                                            : vlSelfRef.adder_result_o)))));
    }
}

void Vibex_alu___024root___eval_triggers__ico(Vibex_alu___024root* vlSelf);

bool Vibex_alu___024root___eval_phase__ico(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vibex_alu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vibex_alu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vibex_alu___024root___eval_act(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vibex_alu___024root___eval_nba(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vibex_alu___024root___eval_triggers__act(Vibex_alu___024root* vlSelf);

bool Vibex_alu___024root___eval_phase__act(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vibex_alu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vibex_alu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vibex_alu___024root___eval_phase__nba(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vibex_alu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__ico(Vibex_alu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__nba(Vibex_alu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__act(Vibex_alu___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_alu___024root___eval(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vibex_alu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_alu.sv", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vibex_alu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vibex_alu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_alu.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vibex_alu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ibex_alu.sv", 9, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vibex_alu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vibex_alu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vibex_alu___024root___eval_debug_assertions(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.operator_i & 0x80U))) {
        Verilated::overWidthError("operator_i");}
    if (VL_UNLIKELY((vlSelfRef.instr_first_cycle_i 
                     & 0xfeU))) {
        Verilated::overWidthError("instr_first_cycle_i");}
    if (VL_UNLIKELY((vlSelfRef.multdiv_operand_a_i 
                     & 0ULL))) {
        Verilated::overWidthError("multdiv_operand_a_i");}
    if (VL_UNLIKELY((vlSelfRef.multdiv_operand_b_i 
                     & 0ULL))) {
        Verilated::overWidthError("multdiv_operand_b_i");}
    if (VL_UNLIKELY((vlSelfRef.multdiv_sel_i & 0xfeU))) {
        Verilated::overWidthError("multdiv_sel_i");}
}
#endif  // VL_DEBUG
