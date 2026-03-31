#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F2C0
// Address: 0x13f2c0 - 0x13f310
void sub_0013F2C0_0x13f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f2c0u;

    // 0x13f2c0: 0x27bdfff0
    ctx->pc = 0x13f2c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f2c4: 0x3c020022
    ctx->pc = 0x13f2c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13f2c8: 0xffb00000
    ctx->pc = 0x13f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f2cc: 0x24504798
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 18328));
    // 0x13f2d0: 0x8e020000
    ctx->pc = 0x13f2d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f2d4: 0x14400007
    ctx->pc = 0x13F2D4u;
    {
        const bool branch_taken_0x13f2d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13F2D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13f2d4) {
            ctx->pc = 0x13F2F4u;
            goto label_13f2f4;
        }
    }
    ctx->pc = 0x13F2DCu;
    // 0x13f2dc: 0x3c040022
    ctx->pc = 0x13f2dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13f2e0: 0x282d
    ctx->pc = 0x13f2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2e4: 0x248447a0
    ctx->pc = 0x13f2e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18336));
    // 0x13f2e8: 0xc041f1a
    ctx->pc = 0x13F2E8u;
    SET_GPR_U32(ctx, 31, 0x13F2F0u);
    ctx->pc = 0x13F2ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1152));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F2F0u; }
    }
    if (ctx->pc != 0x13F2F0u) { return; }
    ctx->pc = 0x13F2F0u;
    // 0x13f2f0: 0x8e020000
    ctx->pc = 0x13f2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13f2f4:
    // 0x13f2f4: 0x24420001
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f2f8: 0xdfbf0008
    ctx->pc = 0x13f2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f2fc: 0xae020000
    ctx->pc = 0x13f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13f300: 0xdfb00000
    ctx->pc = 0x13f300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f304: 0x3e00008
    ctx->pc = 0x13F304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F2F4u: goto label_13f2f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F30Cu;
    // 0x13f30c: 0x0
    ctx->pc = 0x13f30cu;
    // NOP
}
