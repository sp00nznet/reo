#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0D50
// Address: 0x1a0d50 - 0x1a0d60
void sub_001A0D50_0x1a0d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0d50u;

    // 0x1a0d50: 0x80282d
    ctx->pc = 0x1a0d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d54: 0x3c04002b
    ctx->pc = 0x1a0d54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d58: 0x8068384
    ctx->pc = 0x1A0D58u;
    ctx->pc = 0x1A0D5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1A0E10u;
    sub_001A0E10_0x1a0e10(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D60u;
}
