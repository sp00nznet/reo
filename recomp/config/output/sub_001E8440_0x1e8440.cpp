#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E8440
// Address: 0x1e8440 - 0x1e8484
void sub_001E8440_0x1e8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e8440u;

    // 0x1e8440: 0x27bdffe0
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8444: 0xffbe0010
    ctx->pc = 0x1e8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e8448: 0xffbf0018
    ctx->pc = 0x1e8448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e844c: 0x3a0f02d
    ctx->pc = 0x1e844cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8450: 0xafc40000
    ctx->pc = 0x1e8450u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8454: 0xafc50004
    ctx->pc = 0x1e8454u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e8458: 0x8fc40004
    ctx->pc = 0x1e8458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e845c: 0xc07a095
    ctx->pc = 0x1E845Cu;
    SET_GPR_U32(ctx, 31, 0x1E8464u);
    ctx->pc = 0x1E8254u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8254_0x1e8254(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8464u; }
    }
    if (ctx->pc != 0x1E8464u) { return; }
    ctx->pc = 0x1E8464u;
    // 0x1e8464: 0x8fc20000
    ctx->pc = 0x1e8464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8468: 0xaf82802c
    ctx->pc = 0x1e8468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 2));
    // 0x1e846c: 0x3c0e82d
    ctx->pc = 0x1e846cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8470: 0xdfbe0010
    ctx->pc = 0x1e8470u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8474: 0xdfbf0018
    ctx->pc = 0x1e8474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8478: 0x27bd0020
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e847c: 0x3e00008
    ctx->pc = 0x1E847Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8484u;
}
