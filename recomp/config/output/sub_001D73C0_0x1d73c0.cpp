#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D73C0
// Address: 0x1d73c0 - 0x1d7400
void sub_001D73C0_0x1d73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d73c0u;

    // 0x1d73c0: 0x27bdfff0
    ctx->pc = 0x1d73c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d73c4: 0xffbf0000
    ctx->pc = 0x1d73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d73c8: 0xc075eac
    ctx->pc = 0x1D73C8u;
    SET_GPR_U32(ctx, 31, 0x1D73D0u);
    ctx->pc = 0x1D7AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AB0_0x1d7ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73D0u; }
    }
    if (ctx->pc != 0x1D73D0u) { return; }
    ctx->pc = 0x1D73D0u;
    // 0x1d73d0: 0x3c010034
    ctx->pc = 0x1d73d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d73d4: 0x24020004
    ctx->pc = 0x1d73d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d73d8: 0xa0204603
    ctx->pc = 0x1d73d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17923), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d73dc: 0x3c010034
    ctx->pc = 0x1d73dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d73e0: 0xac2245e8
    ctx->pc = 0x1d73e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 2));
    // 0x1d73e4: 0xdfbf0000
    ctx->pc = 0x1d73e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d73e8: 0x102d
    ctx->pc = 0x1d73e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73ec: 0x3e00008
    ctx->pc = 0x1D73ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D73F4u;
    // 0x1d73f4: 0x0
    ctx->pc = 0x1d73f4u;
    // NOP
    // 0x1d73f8: 0x0
    ctx->pc = 0x1d73f8u;
    // NOP
    // 0x1d73fc: 0x0
    ctx->pc = 0x1d73fcu;
    // NOP
}
