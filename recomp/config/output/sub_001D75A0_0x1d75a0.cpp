#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D75A0
// Address: 0x1d75a0 - 0x1d75d0
void sub_001D75A0_0x1d75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d75a0u;

    // 0x1d75a0: 0x27bdfff0
    ctx->pc = 0x1d75a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d75a4: 0xffbf0000
    ctx->pc = 0x1d75a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d75a8: 0xc07639c
    ctx->pc = 0x1D75A8u;
    SET_GPR_U32(ctx, 31, 0x1D75B0u);
    ctx->pc = 0x1D8E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8E70_0x1d8e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75B0u; }
    }
    if (ctx->pc != 0x1D75B0u) { return; }
    ctx->pc = 0x1D75B0u;
    // 0x1d75b0: 0xdfbf0000
    ctx->pc = 0x1d75b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d75b4: 0x2143c
    ctx->pc = 0x1d75b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d75b8: 0x2143f
    ctx->pc = 0x1d75b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d75bc: 0x3e00008
    ctx->pc = 0x1D75BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D75C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D75C4u;
    // 0x1d75c4: 0x0
    ctx->pc = 0x1d75c4u;
    // NOP
    // 0x1d75c8: 0x0
    ctx->pc = 0x1d75c8u;
    // NOP
    // 0x1d75cc: 0x0
    ctx->pc = 0x1d75ccu;
    // NOP
}
