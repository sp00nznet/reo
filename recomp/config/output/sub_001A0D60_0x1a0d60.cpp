#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0D60
// Address: 0x1a0d60 - 0x1a0d90
void sub_001A0D60_0x1a0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0d60u;

    // 0x1a0d60: 0x80282d
    ctx->pc = 0x1a0d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d64: 0x3c04002b
    ctx->pc = 0x1a0d64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d68: 0x806849c
    ctx->pc = 0x1A0D68u;
    ctx->pc = 0x1A0D6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1A1270u;
    entry_1a1270_0x1a1330(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D70u;
    // 0x1a0d70: 0x80282d
    ctx->pc = 0x1a0d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d74: 0x3c04002b
    ctx->pc = 0x1a0d74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d78: 0x80684cc
    ctx->pc = 0x1A0D78u;
    ctx->pc = 0x1A0D7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1A1330u;
    entry_1a1330_0x1a1370(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D80u;
    // 0x1a0d80: 0x80282d
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d84: 0x3c04002b
    ctx->pc = 0x1a0d84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d88: 0x80684dc
    ctx->pc = 0x1A0D88u;
    ctx->pc = 0x1A0D8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1A1370u;
    entry_1a1370_0x1a13f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D90u;
}
