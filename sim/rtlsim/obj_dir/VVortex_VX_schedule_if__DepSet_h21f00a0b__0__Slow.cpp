// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_schedule_if.h"

VL_ATTR_COLD void VVortex_VX_schedule_if___ctor_var_reset(VVortex_VX_schedule_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_schedule_if___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__data = VL_RAND_RESET_Q(39);
}
