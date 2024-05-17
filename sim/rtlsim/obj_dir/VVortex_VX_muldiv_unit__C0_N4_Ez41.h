// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_MULDIV_UNIT__C0_N4_EZ41_H_
#define VERILATED_VVORTEX_VX_MULDIV_UNIT__C0_N4_EZ41_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_muldiv_unit__C0_N4_Ez41 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*0:0*/ __PVT__mul_valid_in;
        CData/*0:0*/ __PVT__mul_ready_in;
        CData/*0:0*/ __PVT__mul_fire_in;
        CData/*0:0*/ __PVT__div_valid_in;
        CData/*0:0*/ __PVT__div_ready_in;
        CData/*0:0*/ __PVT__div_fire_in;
        CData/*1:0*/ __Vcellout__rsp_buf__ready_in;
        CData/*1:0*/ __Vcellinp__rsp_buf__valid_in;
        CData/*0:0*/ mul_shift_reg__DOT____Vxrand_h9b58951b__1;
        CData/*0:0*/ mul_shift_reg__DOT____Vxrand_h9b58951b__0;
        CData/*0:0*/ mul_shift_reg__DOT____Vlvbound_h4b21a7eb__0;
        CData/*0:0*/ mul_shift_reg__DOT____Vlvbound_h84acf69f__0;
        CData/*0:0*/ mul_shift_reg__DOT____Vlvbound_hc252f383__0;
        CData/*0:0*/ div_shift_reg__DOT____Vxrand_h9b58951b__1;
        CData/*0:0*/ div_shift_reg__DOT____Vxrand_h9b58951b__0;
        CData/*0:0*/ div_shift_reg__DOT____Vlvbound_h4b21a7eb__0;
        CData/*0:0*/ div_shift_reg__DOT____Vlvbound_h84acf69f__0;
        CData/*0:0*/ div_shift_reg__DOT____Vlvbound_hc252f383__0;
        CData/*0:0*/ __PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall;
        CData/*0:0*/ __PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r;
        VlWide<4>/*127:0*/ __PVT__mul_result_tmp;
        VlWide<4>/*127:0*/ __PVT__div_in1;
        VlWide<4>/*127:0*/ __PVT__div_in2;
        VlWide<4>/*127:0*/ __PVT__div_result_in;
        IData/*31:0*/ __PVT__genblk2__BRA__0__KET____DOT__mul_resultl;
        IData/*31:0*/ __PVT__genblk2__BRA__0__KET____DOT__mul_resulth;
        IData/*31:0*/ __PVT__genblk2__BRA__1__KET____DOT__mul_resultl;
        IData/*31:0*/ __PVT__genblk2__BRA__1__KET____DOT__mul_resulth;
        IData/*31:0*/ __PVT__genblk2__BRA__2__KET____DOT__mul_resultl;
        IData/*31:0*/ __PVT__genblk2__BRA__2__KET____DOT__mul_resulth;
        IData/*31:0*/ __PVT__genblk2__BRA__3__KET____DOT__mul_resultl;
        IData/*31:0*/ __PVT__genblk2__BRA__3__KET____DOT__mul_resulth;
        IData/*31:0*/ __PVT__genblk4__BRA__0__KET____DOT__div_quotient;
        IData/*31:0*/ __PVT__genblk4__BRA__0__KET____DOT__div_remainder;
        IData/*31:0*/ __PVT__genblk4__BRA__1__KET____DOT__div_quotient;
        IData/*31:0*/ __PVT__genblk4__BRA__1__KET____DOT__div_remainder;
        IData/*31:0*/ __PVT__genblk4__BRA__2__KET____DOT__div_quotient;
        IData/*31:0*/ __PVT__genblk4__BRA__2__KET____DOT__div_remainder;
        IData/*31:0*/ __PVT__genblk4__BRA__3__KET____DOT__div_quotient;
        IData/*31:0*/ __PVT__genblk4__BRA__3__KET____DOT__div_remainder;
        VlWide<23>/*711:0*/ __PVT__mul_shift_reg__DOT__genblk1__DOT__entries;
        VlWide<23>/*711:0*/ __PVT__div_shift_reg__DOT__genblk1__DOT__entries;
        VlWide<6>/*176:0*/ rsp_buf__DOT____Vxrand_h3f38f95a__0;
        VlWide<6>/*178:0*/ rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out;
        VlWide<6>/*178:0*/ rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in;
        VlWide<6>/*177:0*/ __PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d;
        IData/*31:0*/ __Vtask_dpi_imul__0__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__0__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__1__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__1__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__2__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__2__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__3__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__3__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__4__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__4__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__5__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__5__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__6__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__6__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__7__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__7__remainder;
    };
    struct {
        IData/*31:0*/ __Vtask_dpi_imul__8__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__8__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__9__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__9__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__10__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__10__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__11__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__11__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__12__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__12__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__13__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__13__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__14__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__14__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__15__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__15__remainder;
        IData/*31:0*/ __Vtask_dpi_imul__16__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__16__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__17__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__17__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__18__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__18__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__19__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__19__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__20__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__20__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__21__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__21__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__22__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__22__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__23__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__23__remainder;
        IData/*31:0*/ __Vtask_dpi_imul__24__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__24__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__25__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__25__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__26__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__26__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__27__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__27__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__28__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__28__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__29__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__29__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__30__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__30__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__31__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__31__remainder;
    };

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_muldiv_unit__C0_N4_Ez41(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_muldiv_unit__C0_N4_Ez41();
    VL_UNCOPYABLE(VVortex_VX_muldiv_unit__C0_N4_Ez41);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
