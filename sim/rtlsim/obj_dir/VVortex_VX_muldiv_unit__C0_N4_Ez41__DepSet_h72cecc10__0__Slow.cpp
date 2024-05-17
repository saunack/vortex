// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_muldiv_unit__C0_N4_Ez41.h"

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h34a6c038__0;
    // Body
    VL_RAND_RESET_W(177, __Vtemp_h34a6c038__0);
    vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[0U] 
        = __Vtemp_h34a6c038__0[0U];
    vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[1U] 
        = __Vtemp_h34a6c038__0[1U];
    vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[2U] 
        = __Vtemp_h34a6c038__0[2U];
    vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[3U] 
        = __Vtemp_h34a6c038__0[3U];
    vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[4U] 
        = __Vtemp_h34a6c038__0[4U];
    vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[5U] 
        = (0x1ffffU & __Vtemp_h34a6c038__0[5U]);
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__0 
        = (1U & VL_RAND_RESET_I(1));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___ctor_var_reset(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_valid_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_ready_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__mul_result_tmp);
    vlSelf->__PVT__mul_fire_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_valid_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_ready_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__div_in1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__div_in2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__div_result_in);
    vlSelf->__PVT__div_fire_in = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__rsp_buf__ready_in = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__rsp_buf__valid_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__1 = VL_RAND_RESET_I(1);
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(712, vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries);
    vlSelf->mul_shift_reg__DOT____Vlvbound_h4b21a7eb__0 = VL_RAND_RESET_I(1);
    vlSelf->mul_shift_reg__DOT____Vlvbound_h84acf69f__0 = VL_RAND_RESET_I(1);
    vlSelf->mul_shift_reg__DOT____Vlvbound_hc252f383__0 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__1 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(712, vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries);
    vlSelf->div_shift_reg__DOT____Vlvbound_h4b21a7eb__0 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vlvbound_h84acf69f__0 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vlvbound_hc252f383__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(177, vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0);
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(179, vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out);
    VL_RAND_RESET_W(179, vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in);
    VL_RAND_RESET_W(178, vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d);
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_dpi_imul__0__resultl = 0;
    vlSelf->__Vtask_dpi_imul__0__resulth = 0;
    vlSelf->__Vtask_dpi_imul__1__resultl = 0;
    vlSelf->__Vtask_dpi_imul__1__resulth = 0;
    vlSelf->__Vtask_dpi_imul__2__resultl = 0;
    vlSelf->__Vtask_dpi_imul__2__resulth = 0;
    vlSelf->__Vtask_dpi_imul__3__resultl = 0;
    vlSelf->__Vtask_dpi_imul__3__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__4__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__4__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__5__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__5__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__6__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__6__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__7__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__7__remainder = 0;
    vlSelf->__Vtask_dpi_imul__8__resultl = 0;
    vlSelf->__Vtask_dpi_imul__8__resulth = 0;
    vlSelf->__Vtask_dpi_imul__9__resultl = 0;
    vlSelf->__Vtask_dpi_imul__9__resulth = 0;
    vlSelf->__Vtask_dpi_imul__10__resultl = 0;
    vlSelf->__Vtask_dpi_imul__10__resulth = 0;
    vlSelf->__Vtask_dpi_imul__11__resultl = 0;
    vlSelf->__Vtask_dpi_imul__11__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__12__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__12__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__13__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__13__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__14__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__14__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__15__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__15__remainder = 0;
    vlSelf->__Vtask_dpi_imul__16__resultl = 0;
    vlSelf->__Vtask_dpi_imul__16__resulth = 0;
    vlSelf->__Vtask_dpi_imul__17__resultl = 0;
    vlSelf->__Vtask_dpi_imul__17__resulth = 0;
    vlSelf->__Vtask_dpi_imul__18__resultl = 0;
    vlSelf->__Vtask_dpi_imul__18__resulth = 0;
    vlSelf->__Vtask_dpi_imul__19__resultl = 0;
    vlSelf->__Vtask_dpi_imul__19__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__20__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__20__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__21__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__21__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__22__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__22__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__23__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__23__remainder = 0;
    vlSelf->__Vtask_dpi_imul__24__resultl = 0;
    vlSelf->__Vtask_dpi_imul__24__resulth = 0;
    vlSelf->__Vtask_dpi_imul__25__resultl = 0;
    vlSelf->__Vtask_dpi_imul__25__resulth = 0;
    vlSelf->__Vtask_dpi_imul__26__resultl = 0;
    vlSelf->__Vtask_dpi_imul__26__resulth = 0;
    vlSelf->__Vtask_dpi_imul__27__resultl = 0;
    vlSelf->__Vtask_dpi_imul__27__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__28__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__28__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__29__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__29__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__30__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__30__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__31__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__31__remainder = 0;
}
