#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D75D0
// Address: 0x1d75d0 - 0x1d7600
void sub_001D75D0_0x1d75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d75d0u;

    // 0x1d75d0: 0x27bdfff0
    ctx->pc = 0x1d75d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d75d4: 0xffbf0000
    ctx->pc = 0x1d75d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d75d8: 0xc0763dc
    ctx->pc = 0x1D75D8u;
    SET_GPR_U32(ctx, 31, 0x1D75E0u);
    ctx->pc = 0x1D8F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8F70_0x1d8f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75E0u; }
    }
    if (ctx->pc != 0x1D75E0u) { return; }
    ctx->pc = 0x1D75E0u;
    // 0x1d75e0: 0xdfbf0000
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d75e4: 0x2143c
    ctx->pc = 0x1d75e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d75e8: 0x2143f
    ctx->pc = 0x1d75e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d75ec: 0x3e00008
    ctx->pc = 0x1D75ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D75F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D75F4u;
    // 0x1d75f4: 0x0
    ctx->pc = 0x1d75f4u;
    // NOP
    // 0x1d75f8: 0x0
    ctx->pc = 0x1d75f8u;
    // NOP
    // 0x1d75fc: 0x0
    ctx->pc = 0x1d75fcu;
    // NOP
}
