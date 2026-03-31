#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C830
// Address: 0x12c830 - 0x12c890
void sub_0012C830_0x12c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c830u;

    // 0x12c830: 0x27bdfff0
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c834: 0xffbf0000
    ctx->pc = 0x12c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c838: 0xdfbf0000
    ctx->pc = 0x12c838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c83c: 0x804fc20
    ctx->pc = 0x12C83Cu;
    ctx->pc = 0x12C840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F080u;
    entry_13f080_0x13f0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x12C844u;
    // 0x12c844: 0x0
    ctx->pc = 0x12c844u;
    // NOP
    // 0x12c848: 0x27bdfff0
    ctx->pc = 0x12c848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c84c: 0xffbf0000
    ctx->pc = 0x12c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c850: 0xdfbf0000
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c854: 0x804fc38
    ctx->pc = 0x12C854u;
    ctx->pc = 0x12C858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F0E0u;
    entry_13f0e0_0x13f0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x12C85Cu;
    // 0x12c85c: 0x0
    ctx->pc = 0x12c85cu;
    // NOP
    // 0x12c860: 0x27bdfff0
    ctx->pc = 0x12c860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c864: 0xffbf0000
    ctx->pc = 0x12c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c868: 0xdfbf0000
    ctx->pc = 0x12c868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c86c: 0x804fc3a
    ctx->pc = 0x12C86Cu;
    ctx->pc = 0x12C870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F0E8u;
    entry_13f0e8_0x13f0f0(rdram, ctx, runtime); return;
    ctx->pc = 0x12C874u;
    // 0x12c874: 0x0
    ctx->pc = 0x12c874u;
    // NOP
    // 0x12c878: 0x27bdfff0
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c87c: 0xffbf0000
    ctx->pc = 0x12c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c880: 0xdfbf0000
    ctx->pc = 0x12c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c884: 0x804fc3c
    ctx->pc = 0x12C884u;
    ctx->pc = 0x12C888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F0F0u;
    entry_13f0f0_0x13f100(rdram, ctx, runtime); return;
    ctx->pc = 0x12C88Cu;
    // 0x12c88c: 0x0
    ctx->pc = 0x12c88cu;
    // NOP
}
