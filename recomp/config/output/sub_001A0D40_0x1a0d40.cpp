#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0D40
// Address: 0x1a0d40 - 0x1a0d50
void sub_001A0D40_0x1a0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0d40u;

    // 0x1a0d40: 0x80282d
    ctx->pc = 0x1a0d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d44: 0x3c04002b
    ctx->pc = 0x1a0d44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d48: 0x80683dc
    ctx->pc = 0x1A0D48u;
    ctx->pc = 0x1A0D4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1A0F70u;
    entry_1a0f70_0x1a1270(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D50u;
}
