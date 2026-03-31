#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D77B0
// Address: 0x1d77b0 - 0x1d77e0
void sub_001D77B0_0x1d77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d77b0u;

    // 0x1d77b0: 0x27bdfff0
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d77b4: 0xffbf0000
    ctx->pc = 0x1d77b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d77b8: 0xc0764e8
    ctx->pc = 0x1D77B8u;
    SET_GPR_U32(ctx, 31, 0x1D77C0u);
    ctx->pc = 0x1D93A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D93A0_0x1d93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77C0u; }
    }
    if (ctx->pc != 0x1D77C0u) { return; }
    ctx->pc = 0x1D77C0u;
    // 0x1d77c0: 0xdfbf0000
    ctx->pc = 0x1d77c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d77c4: 0x2143c
    ctx->pc = 0x1d77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d77c8: 0x2143f
    ctx->pc = 0x1d77c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d77cc: 0x3e00008
    ctx->pc = 0x1D77CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D77D4u;
    // 0x1d77d4: 0x0
    ctx->pc = 0x1d77d4u;
    // NOP
    // 0x1d77d8: 0x0
    ctx->pc = 0x1d77d8u;
    // NOP
    // 0x1d77dc: 0x0
    ctx->pc = 0x1d77dcu;
    // NOP
}
