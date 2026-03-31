#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F1A0
// Address: 0x13f1a0 - 0x13f1c8
void sub_0013F1A0_0x13f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f1a0u;

    // 0x13f1a0: 0x3c040024
    ctx->pc = 0x13f1a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f1a4: 0x27bdfff0
    ctx->pc = 0x13f1a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f1a8: 0xffbf0000
    ctx->pc = 0x13f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f1ac: 0xc045a12
    ctx->pc = 0x13F1ACu;
    SET_GPR_U32(ctx, 31, 0x13F1B4u);
    ctx->pc = 0x13F1B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957536));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1B4u; }
    }
    if (ctx->pc != 0x13F1B4u) { return; }
    ctx->pc = 0x13F1B4u;
    // 0x13f1b4: 0x102d
    ctx->pc = 0x13f1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1b8: 0xdfbf0000
    ctx->pc = 0x13f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f1bc: 0x3e00008
    ctx->pc = 0x13F1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F1C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F1C4u;
    // 0x13f1c4: 0x0
    ctx->pc = 0x13f1c4u;
    // NOP
}
