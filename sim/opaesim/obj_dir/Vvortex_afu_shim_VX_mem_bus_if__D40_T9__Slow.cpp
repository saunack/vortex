// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim_VX_mem_bus_if__D40_T9.h"
#include "Vvortex_afu_shim__Syms.h"

void Vvortex_afu_shim_VX_mem_bus_if__D40_T9___ctor_var_reset(Vvortex_afu_shim_VX_mem_bus_if__D40_T9* vlSelf);

Vvortex_afu_shim_VX_mem_bus_if__D40_T9::Vvortex_afu_shim_VX_mem_bus_if__D40_T9(Vvortex_afu_shim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvortex_afu_shim_VX_mem_bus_if__D40_T9___ctor_var_reset(this);
}

void Vvortex_afu_shim_VX_mem_bus_if__D40_T9::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvortex_afu_shim_VX_mem_bus_if__D40_T9::~Vvortex_afu_shim_VX_mem_bus_if__D40_T9() {
}