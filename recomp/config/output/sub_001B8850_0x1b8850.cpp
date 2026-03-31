#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8850
// Address: 0x1b8850 - 0x1b8870
void sub_001B8850_0x1b8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8850u;

    // 0x1b8850: 0x80282d
    ctx->pc = 0x1b8850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8854: 0x302d
    ctx->pc = 0x1b8854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8858: 0x806e4ec
    ctx->pc = 0x1B8858u;
    ctx->pc = 0x1B885Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8860u;
    // 0x1b8860: 0x80282d
    ctx->pc = 0x1b8860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8864: 0x302d
    ctx->pc = 0x1b8864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8868: 0x806e4ec
    ctx->pc = 0x1B8868u;
    ctx->pc = 0x1B886Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8870u;
}
