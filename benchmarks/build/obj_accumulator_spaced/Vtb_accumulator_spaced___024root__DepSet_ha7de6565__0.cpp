// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_accumulator_spaced.h for the primary calling header

#include "Vtb_accumulator_spaced__pch.h"
#include "Vtb_accumulator_spaced__Syms.h"
#include "Vtb_accumulator_spaced___024root.h"

VlCoroutine Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__0(Vtb_accumulator_spaced___024root* vlSelf);
VlCoroutine Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__1(Vtb_accumulator_spaced___024root* vlSelf);
VlCoroutine Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__2(Vtb_accumulator_spaced___024root* vlSelf);

void Vtb_accumulator_spaced___024root___eval_initial(Vtb_accumulator_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_accumulator_spaced___024root___eval_initial\n"); );
    // Body
    Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__intf__rst_n__0 
        = vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__clk__0 
        = vlSelf->tb_accumulator_spaced__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__0(Vtb_accumulator_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_accumulator_spaced__DOT__lfsr;
    tb_accumulator_spaced__DOT__lfsr = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__0__n;
    __Vtask_tb_accumulator_spaced__DOT__quiet__0__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__0__unnamedblk2__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__quiet__0__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__1__value;
    __Vtask_tb_accumulator_spaced__DOT__burst__1__value = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__1__samples;
    __Vtask_tb_accumulator_spaced__DOT__burst__1__samples = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__1__gap;
    __Vtask_tb_accumulator_spaced__DOT__burst__1__gap = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__2__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__2__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__2__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__2__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__3__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__3__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__3__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__3__data = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__4__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__4__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__4__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__4__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__5__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__5__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__5__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__5__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__6__n;
    __Vtask_tb_accumulator_spaced__DOT__quiet__6__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__6__unnamedblk2__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__quiet__6__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__7__value;
    __Vtask_tb_accumulator_spaced__DOT__burst__7__value = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__7__samples;
    __Vtask_tb_accumulator_spaced__DOT__burst__7__samples = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__7__gap;
    __Vtask_tb_accumulator_spaced__DOT__burst__7__gap = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__8__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__8__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__8__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__8__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__9__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__9__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__9__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__9__data = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__10__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__10__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__10__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__10__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__11__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__11__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__11__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__11__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__12__n;
    __Vtask_tb_accumulator_spaced__DOT__quiet__12__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__12__unnamedblk2__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__quiet__12__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__13__value;
    __Vtask_tb_accumulator_spaced__DOT__burst__13__value = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__13__samples;
    __Vtask_tb_accumulator_spaced__DOT__burst__13__samples = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__13__gap;
    __Vtask_tb_accumulator_spaced__DOT__burst__13__gap = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__14__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__14__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__14__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__14__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__15__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__15__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__15__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__15__data = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__16__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__16__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__16__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__16__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__17__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__17__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__17__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__17__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__18__n;
    __Vtask_tb_accumulator_spaced__DOT__quiet__18__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__18__unnamedblk2__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__quiet__18__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__19__value;
    __Vtask_tb_accumulator_spaced__DOT__burst__19__value = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__19__samples;
    __Vtask_tb_accumulator_spaced__DOT__burst__19__samples = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__19__gap;
    __Vtask_tb_accumulator_spaced__DOT__burst__19__gap = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__20__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__20__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__20__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__20__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__21__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__21__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__21__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__21__data = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__22__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__22__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__22__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__22__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__23__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__23__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__23__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__23__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__24__n;
    __Vtask_tb_accumulator_spaced__DOT__quiet__24__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__24__unnamedblk2__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__quiet__24__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__25__value;
    __Vtask_tb_accumulator_spaced__DOT__burst__25__value = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__25__samples;
    __Vtask_tb_accumulator_spaced__DOT__burst__25__samples = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__burst__25__gap;
    __Vtask_tb_accumulator_spaced__DOT__burst__25__gap = 0;
    IData/*31:0*/ __Vfunc_tb_accumulator_spaced__DOT__rnd__26__Vfuncout;
    __Vfunc_tb_accumulator_spaced__DOT__rnd__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_accumulator_spaced__DOT__rnd__27__Vfuncout;
    __Vfunc_tb_accumulator_spaced__DOT__rnd__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_accumulator_spaced__DOT__rnd__28__Vfuncout;
    __Vfunc_tb_accumulator_spaced__DOT__rnd__28__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__29__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__29__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__29__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__29__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__29__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__29__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__29__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__29__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__30__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__30__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__30__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__30__data = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__31__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__31__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__31__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__31__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__31__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__31__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__31__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__31__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__32__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__32__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__32__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__32__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__33__n;
    __Vtask_tb_accumulator_spaced__DOT__quiet__33__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__quiet__33__unnamedblk2__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__quiet__33__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__34__valid;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__34__data;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__data = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__34__n;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__n = 0;
    IData/*31:0*/ __Vtask_tb_accumulator_spaced__DOT__hold__34__unnamedblk1__DOT__i;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__35__valid;
    __Vtask_tb_accumulator_spaced__DOT__drive__35__valid = 0;
    CData/*7:0*/ __Vtask_tb_accumulator_spaced__DOT__drive__35__data;
    __Vtask_tb_accumulator_spaced__DOT__drive__35__data = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if ((! VL_VALUEPLUSARGS_INI(32, std::string{"seed=%d"}, 
                                vlSelf->tb_accumulator_spaced__DOT__seed))) {
        vlSelf->tb_accumulator_spaced__DOT__seed = 1U;
    }
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x63U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->tb_accumulator_spaced__DOT__cycles))) {
        vlSelf->tb_accumulator_spaced__DOT__cycles = 0xbb8U;
    }
    if ((! VL_VALUEPLUSARGS_INN(64, std::string{"out=%s"}, 
                                vlSelf->tb_accumulator_spaced__DOT__out))) {
        vlSelf->tb_accumulator_spaced__DOT__out = std::string{"trace.csv"};
    }
    tb_accumulator_spaced__DOT__lfsr = ((IData)(1U) 
                                        + ((IData)(0x9e3779b1U) 
                                           * vlSelf->tb_accumulator_spaced__DOT__seed));
    vlSelf->tb_accumulator_spaced__DOT__fd = VL_FOPEN_NN(
                                                         VL_CVT_PACK_STR_NN(vlSelf->tb_accumulator_spaced__DOT__out)
                                                         , 
                                                         std::string{"w"});
    ;
    VL_FWRITEF(vlSelf->tb_accumulator_spaced__DOT__fd,"bool rst_n,bool valid_in,int data_in,bool valid_out,int data_out\n");
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in = 0U;
    __Vtask_tb_accumulator_spaced__DOT__quiet__0__n = 3U;
    __Vtask_tb_accumulator_spaced__DOT__quiet__0__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__quiet__0__unnamedblk2__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__quiet__0__n)) {
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           55);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           56);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
        __Vtask_tb_accumulator_spaced__DOT__quiet__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__quiet__0__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_accumulator_spaced.clk)", 
                                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                       60);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                       61);
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__burst__1__gap = 0x28U;
    __Vtask_tb_accumulator_spaced__DOT__burst__1__samples = 4U;
    __Vtask_tb_accumulator_spaced__DOT__burst__1__value = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__1__samples;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__1__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__valid = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__2__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__2__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__2__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__3__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__2__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__3__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__2__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__3__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__3__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__2__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__2__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__hold__4__n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__1__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__valid = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__4__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__4__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__4__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__5__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__4__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__5__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__4__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__5__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__5__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__4__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__4__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__quiet__6__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__1__gap;
    __Vtask_tb_accumulator_spaced__DOT__quiet__6__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__quiet__6__unnamedblk2__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__quiet__6__n)) {
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           55);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           56);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
        __Vtask_tb_accumulator_spaced__DOT__quiet__6__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__quiet__6__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_accumulator_spaced.clk)", 
                                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                       60);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                       61);
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__burst__7__gap = 0x2dU;
    __Vtask_tb_accumulator_spaced__DOT__burst__7__samples = 4U;
    __Vtask_tb_accumulator_spaced__DOT__burst__7__value = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__7__samples;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__7__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__valid = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__8__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__8__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__8__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__9__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__8__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__9__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__8__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__9__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__9__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__8__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__8__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__hold__10__n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__7__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__valid = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__10__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__10__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__10__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__11__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__10__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__11__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__10__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__11__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__11__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__10__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__10__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__quiet__12__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__7__gap;
    __Vtask_tb_accumulator_spaced__DOT__quiet__12__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__quiet__12__unnamedblk2__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__quiet__12__n)) {
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           55);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           56);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
        __Vtask_tb_accumulator_spaced__DOT__quiet__12__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__quiet__12__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_accumulator_spaced.clk)", 
                                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                       60);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                       61);
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__burst__13__gap = 0x32U;
    __Vtask_tb_accumulator_spaced__DOT__burst__13__samples = 4U;
    __Vtask_tb_accumulator_spaced__DOT__burst__13__value = 0xffU;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__13__samples;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__13__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__valid = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__14__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__14__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__14__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__15__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__14__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__15__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__14__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__15__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__15__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__14__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__14__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__hold__16__n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__13__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__valid = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__16__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__16__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__16__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__17__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__16__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__17__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__16__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__17__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__17__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__16__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__16__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__quiet__18__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__13__gap;
    __Vtask_tb_accumulator_spaced__DOT__quiet__18__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__quiet__18__unnamedblk2__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__quiet__18__n)) {
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           55);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           56);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
        __Vtask_tb_accumulator_spaced__DOT__quiet__18__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__quiet__18__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_accumulator_spaced.clk)", 
                                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                       60);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                       61);
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__burst__19__gap = 0x28U;
    __Vtask_tb_accumulator_spaced__DOT__burst__19__samples = 4U;
    __Vtask_tb_accumulator_spaced__DOT__burst__19__value = 7U;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__19__samples;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__19__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__valid = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__20__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__20__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__20__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__21__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__20__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__21__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__20__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__21__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__21__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__20__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__20__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__hold__22__n = 1U;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__data 
        = __Vtask_tb_accumulator_spaced__DOT__burst__19__value;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__valid = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__22__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__22__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__22__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__23__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__22__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__23__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__22__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__23__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__23__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__22__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__22__unnamedblk1__DOT__i);
    }
    __Vtask_tb_accumulator_spaced__DOT__quiet__24__n 
        = __Vtask_tb_accumulator_spaced__DOT__burst__19__gap;
    __Vtask_tb_accumulator_spaced__DOT__quiet__24__unnamedblk2__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__quiet__24__unnamedblk2__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__quiet__24__n)) {
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           55);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           56);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
        __Vtask_tb_accumulator_spaced__DOT__quiet__24__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__quiet__24__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_accumulator_spaced.clk)", 
                                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                       60);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                       61);
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 1U;
    while ((vlSelf->tb_accumulator_spaced__DOT__sampled 
            < vlSelf->tb_accumulator_spaced__DOT__cycles)) {
        __Vtask_tb_accumulator_spaced__DOT__burst__25__gap 
            = ((IData)(0x28U) + VL_MODDIV_III(32, ([&]() {
                        tb_accumulator_spaced__DOT__lfsr 
                            = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                                   * tb_accumulator_spaced__DOT__lfsr));
                        __Vfunc_tb_accumulator_spaced__DOT__rnd__26__Vfuncout 
                            = VL_SHIFTR_III(32,32,32, tb_accumulator_spaced__DOT__lfsr, 0x10U);
                    }(), __Vfunc_tb_accumulator_spaced__DOT__rnd__26__Vfuncout), (IData)(0x28U)));
        __Vtask_tb_accumulator_spaced__DOT__burst__25__samples 
            = ((IData)(4U) + (3U & ([&]() {
                        tb_accumulator_spaced__DOT__lfsr 
                            = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                                   * tb_accumulator_spaced__DOT__lfsr));
                        __Vfunc_tb_accumulator_spaced__DOT__rnd__27__Vfuncout 
                            = VL_SHIFTR_III(32,32,32, tb_accumulator_spaced__DOT__lfsr, 0x10U);
                    }(), __Vfunc_tb_accumulator_spaced__DOT__rnd__27__Vfuncout)));
        __Vtask_tb_accumulator_spaced__DOT__burst__25__value 
            = (0xffU & ([&]() {
                    tb_accumulator_spaced__DOT__lfsr 
                        = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                               * tb_accumulator_spaced__DOT__lfsr));
                    __Vfunc_tb_accumulator_spaced__DOT__rnd__28__Vfuncout 
                        = VL_SHIFTR_III(32,32,32, tb_accumulator_spaced__DOT__lfsr, 0x10U);
                }(), __Vfunc_tb_accumulator_spaced__DOT__rnd__28__Vfuncout));
        __Vtask_tb_accumulator_spaced__DOT__hold__29__n 
            = __Vtask_tb_accumulator_spaced__DOT__burst__25__samples;
        __Vtask_tb_accumulator_spaced__DOT__hold__29__data 
            = __Vtask_tb_accumulator_spaced__DOT__burst__25__value;
        __Vtask_tb_accumulator_spaced__DOT__hold__29__valid = 1U;
        __Vtask_tb_accumulator_spaced__DOT__hold__29__unnamedblk1__DOT__i = 0U;
        while ((__Vtask_tb_accumulator_spaced__DOT__hold__29__unnamedblk1__DOT__i 
                < __Vtask_tb_accumulator_spaced__DOT__hold__29__n)) {
            __Vtask_tb_accumulator_spaced__DOT__drive__30__data 
                = __Vtask_tb_accumulator_spaced__DOT__hold__29__data;
            __Vtask_tb_accumulator_spaced__DOT__drive__30__valid 
                = __Vtask_tb_accumulator_spaced__DOT__hold__29__valid;
            co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_accumulator_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                               42);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                               43);
            vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
                = __Vtask_tb_accumulator_spaced__DOT__drive__30__valid;
            vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
                = __Vtask_tb_accumulator_spaced__DOT__drive__30__data;
            __Vtask_tb_accumulator_spaced__DOT__hold__29__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__29__unnamedblk1__DOT__i);
        }
        __Vtask_tb_accumulator_spaced__DOT__hold__31__n = 1U;
        __Vtask_tb_accumulator_spaced__DOT__hold__31__data 
            = __Vtask_tb_accumulator_spaced__DOT__burst__25__value;
        __Vtask_tb_accumulator_spaced__DOT__hold__31__valid = 0U;
        __Vtask_tb_accumulator_spaced__DOT__hold__31__unnamedblk1__DOT__i = 0U;
        while ((__Vtask_tb_accumulator_spaced__DOT__hold__31__unnamedblk1__DOT__i 
                < __Vtask_tb_accumulator_spaced__DOT__hold__31__n)) {
            __Vtask_tb_accumulator_spaced__DOT__drive__32__data 
                = __Vtask_tb_accumulator_spaced__DOT__hold__31__data;
            __Vtask_tb_accumulator_spaced__DOT__drive__32__valid 
                = __Vtask_tb_accumulator_spaced__DOT__hold__31__valid;
            co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_accumulator_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                               42);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                               43);
            vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
                = __Vtask_tb_accumulator_spaced__DOT__drive__32__valid;
            vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
                = __Vtask_tb_accumulator_spaced__DOT__drive__32__data;
            __Vtask_tb_accumulator_spaced__DOT__hold__31__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__31__unnamedblk1__DOT__i);
        }
        __Vtask_tb_accumulator_spaced__DOT__quiet__33__n 
            = __Vtask_tb_accumulator_spaced__DOT__burst__25__gap;
        __Vtask_tb_accumulator_spaced__DOT__quiet__33__unnamedblk2__DOT__i = 0U;
        while ((__Vtask_tb_accumulator_spaced__DOT__quiet__33__unnamedblk2__DOT__i 
                < __Vtask_tb_accumulator_spaced__DOT__quiet__33__n)) {
            co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_accumulator_spaced.clk)", 
                                                               "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                               55);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                               56);
            vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 0U;
            vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in = 0U;
            __Vtask_tb_accumulator_spaced__DOT__quiet__33__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__quiet__33__unnamedblk2__DOT__i);
        }
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           60);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           61);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n = 1U;
    }
    __Vtask_tb_accumulator_spaced__DOT__hold__34__n = 2U;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__data = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__valid = 0U;
    __Vtask_tb_accumulator_spaced__DOT__hold__34__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_accumulator_spaced__DOT__hold__34__unnamedblk1__DOT__i 
            < __Vtask_tb_accumulator_spaced__DOT__hold__34__n)) {
        __Vtask_tb_accumulator_spaced__DOT__drive__35__data 
            = __Vtask_tb_accumulator_spaced__DOT__hold__34__data;
        __Vtask_tb_accumulator_spaced__DOT__drive__35__valid 
            = __Vtask_tb_accumulator_spaced__DOT__hold__34__valid;
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           42);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           43);
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__35__valid;
        vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in 
            = __Vtask_tb_accumulator_spaced__DOT__drive__35__data;
        __Vtask_tb_accumulator_spaced__DOT__hold__34__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_accumulator_spaced__DOT__hold__34__unnamedblk1__DOT__i);
    }
    VL_FCLOSE_I(vlSelf->tb_accumulator_spaced__DOT__fd); VL_FINISH_MT("/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 102, "");
}

VL_INLINE_OPT VlCoroutine Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__1(Vtb_accumulator_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_accumulator_spaced___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3d251462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_accumulator_spaced.clk)", 
                                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                                           110);
        co_await vlSelf->__VdlySched.delay(0x1f40ULL, 
                                           nullptr, 
                                           "/home/magister/ACE/benchmarks/accumulator/tb_accumulator_spaced.sv", 
                                           111);
        if (VL_UNLIKELY((vlSelf->tb_accumulator_spaced__DOT__sampled 
                         < vlSelf->tb_accumulator_spaced__DOT__cycles))) {
            VL_FWRITEF(vlSelf->tb_accumulator_spaced__DOT__fd,"%0#,%0#,%0#,%0#,%0#\n",
                       1,vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n,
                       1,(IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in),
                       8,vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in,
                       1,(IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_out),
                       10,vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_out);
            vlSelf->tb_accumulator_spaced__DOT__sampled 
                = ((IData)(1U) + vlSelf->tb_accumulator_spaced__DOT__sampled);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_accumulator_spaced___024root___dump_triggers__act(Vtb_accumulator_spaced___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_accumulator_spaced___024root___eval_triggers__act(Vtb_accumulator_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_accumulator_spaced___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((~ (IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__intf__rst_n__0)) 
                                     | ((IData)(vlSelf->tb_accumulator_spaced__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_accumulator_spaced__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__intf__rst_n__0 
        = vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__clk__0 
        = vlSelf->tb_accumulator_spaced__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_accumulator_spaced___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_accumulator_spaced___024root___act_comb__TOP__0(Vtb_accumulator_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_accumulator_spaced___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_accumulator_spaced__DOT__dut__DOT__ready_add 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_out)) 
                 | (IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_in)));
    vlSelf->tb_accumulator_spaced__DOT__dut__DOT__end_cnt 
        = ((IData)(vlSelf->tb_accumulator_spaced__DOT__dut__DOT__ready_add) 
           & (3U == (IData)(vlSelf->tb_accumulator_spaced__DOT__dut__DOT__count)));
}

VL_INLINE_OPT void Vtb_accumulator_spaced___024root___nba_sequent__TOP__0(Vtb_accumulator_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_accumulator_spaced___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count;
    __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count = 0;
    SData/*9:0*/ TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out;
    TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out = 0;
    // Body
    TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out 
        = vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_out;
    __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count 
        = vlSelf->tb_accumulator_spaced__DOT__dut__DOT__count;
    if (vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n) {
        if (((IData)(vlSelf->tb_accumulator_spaced__DOT__dut__DOT__ready_add) 
             & (0U == (IData)(vlSelf->tb_accumulator_spaced__DOT__dut__DOT__count)))) {
            TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out 
                = vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in;
        } else if (vlSelf->tb_accumulator_spaced__DOT__dut__DOT__ready_add) {
            TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out 
                = (0x3ffU & ((IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_out) 
                             + (IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_in)));
        }
        if (vlSelf->tb_accumulator_spaced__DOT__dut__DOT__end_cnt) {
            __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count = 0U;
        } else if (vlSelf->tb_accumulator_spaced__DOT__dut__DOT__ready_add) {
            __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tb_accumulator_spaced__DOT__dut__DOT__count)));
        }
    } else {
        TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out = 0U;
        __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count = 0U;
    }
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.valid_out 
        = ((IData)(vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.rst_n) 
           && (IData)(vlSelf->tb_accumulator_spaced__DOT__dut__DOT__end_cnt));
    vlSymsp->TOP__tb_accumulator_spaced__DOT__intf.data_out 
        = TOP__tb_accumulator_spaced__DOT__intf__DOT____Vdly__data_out;
    vlSelf->tb_accumulator_spaced__DOT__dut__DOT__count 
        = __Vdly__tb_accumulator_spaced__DOT__dut__DOT__count;
}
