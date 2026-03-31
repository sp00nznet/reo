#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C760
// Address: 0x16c760 - 0x16c780
void sub_0016C760_0x16c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c760u;

    // 0x16c760: 0x27bdfff0
    ctx->pc = 0x16c760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c764: 0xa0302d
    ctx->pc = 0x16c764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c768: 0xffbf0000
    ctx->pc = 0x16c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c76c: 0x8c851b3c
    ctx->pc = 0x16c76cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6972)));
    // 0x16c770: 0xdfbf0000
    ctx->pc = 0x16c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c774: 0x8059f38
    ctx->pc = 0x16C774u;
    ctx->pc = 0x16C778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167CE0u;
    sub_00167CE0_0x167ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x16C77Cu;
    // 0x16c77c: 0x0
    ctx->pc = 0x16c77cu;
    // NOP
}
