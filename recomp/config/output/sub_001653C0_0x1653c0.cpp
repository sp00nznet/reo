#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001653C0
// Address: 0x1653c0 - 0x1653e8
void sub_001653C0_0x1653c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1653c0u;

    // 0x1653c0: 0x27bdfff0
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1653c4: 0xffbf0000
    ctx->pc = 0x1653c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1653c8: 0x8c821b74
    ctx->pc = 0x1653c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x1653cc: 0xc04c7be
    ctx->pc = 0x1653CCu;
    SET_GPR_U32(ctx, 31, 0x1653D4u);
    ctx->pc = 0x1653D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653D4u; }
    }
    if (ctx->pc != 0x1653D4u) { return; }
    ctx->pc = 0x1653D4u;
    // 0x1653d4: 0x38420003
    ctx->pc = 0x1653d4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x1653d8: 0xdfbf0000
    ctx->pc = 0x1653d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1653dc: 0x2c420001
    ctx->pc = 0x1653dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1653e0: 0x3e00008
    ctx->pc = 0x1653E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1653E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1653E8u;
}
