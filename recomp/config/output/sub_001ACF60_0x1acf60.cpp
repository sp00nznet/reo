#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ACF60
// Address: 0x1acf60 - 0x1acf70
void sub_001ACF60_0x1acf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1acf60u;

    // 0x1acf60: 0x8069f14
    ctx->pc = 0x1ACF60u;
    ctx->pc = 0x1ACF64u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1A7C50u;
    entry_1a7c50_0x1a7cf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1ACF68u;
    // 0x1acf68: 0x0
    ctx->pc = 0x1acf68u;
    // NOP
    // 0x1acf6c: 0x0
    ctx->pc = 0x1acf6cu;
    // NOP
}
