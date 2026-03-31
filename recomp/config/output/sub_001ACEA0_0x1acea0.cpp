#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ACEA0
// Address: 0x1acea0 - 0x1aceb0
void sub_001ACEA0_0x1acea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1acea0u;

    // 0x1acea0: 0x8069ec4
    ctx->pc = 0x1ACEA0u;
    ctx->pc = 0x1ACEA4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x1A7B10u;
    entry_1a7b10_0x1a7bb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1ACEA8u;
    // 0x1acea8: 0x0
    ctx->pc = 0x1acea8u;
    // NOP
    // 0x1aceac: 0x0
    ctx->pc = 0x1aceacu;
    // NOP
}
