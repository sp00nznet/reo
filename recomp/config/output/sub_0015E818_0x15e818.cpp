#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E818
// Address: 0x15e818 - 0x15e860
void sub_0015E818_0x15e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e818u;

    // 0x15e818: 0x3c050016
    ctx->pc = 0x15e818u;
    SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
    // 0x15e81c: 0x27bdfff0
    ctx->pc = 0x15e81cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e820: 0x302d
    ctx->pc = 0x15e820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e824: 0x24040002
    ctx->pc = 0x15e824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e828: 0xffbf0000
    ctx->pc = 0x15e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e82c: 0xc058d56
    ctx->pc = 0x15E82Cu;
    SET_GPR_U32(ctx, 31, 0x15E834u);
    ctx->pc = 0x15E830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15704));
    ctx->pc = 0x163558u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163558_0x163558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E834u; }
    }
    if (ctx->pc != 0x15E834u) { return; }
    ctx->pc = 0x15E834u;
    // 0x15e834: 0x3c040016
    ctx->pc = 0x15e834u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22 << 16));
    // 0x15e838: 0x24843da0
    ctx->pc = 0x15e838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15776));
    // 0x15e83c: 0xc058d82
    ctx->pc = 0x15E83Cu;
    SET_GPR_U32(ctx, 31, 0x15E844u);
    ctx->pc = 0x15E840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163608_0x163608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E844u; }
    }
    if (ctx->pc != 0x15E844u) { return; }
    ctx->pc = 0x15E844u;
    // 0x15e844: 0x3c040016
    ctx->pc = 0x15e844u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22 << 16));
    // 0x15e848: 0xdfbf0000
    ctx->pc = 0x15e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e84c: 0x24843e20
    ctx->pc = 0x15e84cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15904));
    // 0x15e850: 0x282d
    ctx->pc = 0x15e850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e854: 0x8058d6e
    ctx->pc = 0x15E854u;
    ctx->pc = 0x15E858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1635B8u;
    entry_1635b8_0x1635e8(rdram, ctx, runtime); return;
    ctx->pc = 0x15E85Cu;
    // 0x15e85c: 0x0
    ctx->pc = 0x15e85cu;
    // NOP
}
