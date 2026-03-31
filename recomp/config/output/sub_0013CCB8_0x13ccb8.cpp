#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CCB8
// Address: 0x13ccb8 - 0x13cd08
void sub_0013CCB8_0x13ccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ccb8u;

    // 0x13ccb8: 0x27bdfff0
    ctx->pc = 0x13ccb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ccbc: 0xffb00000
    ctx->pc = 0x13ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ccc0: 0x80802d
    ctx->pc = 0x13ccc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ccc4: 0x1200000c
    ctx->pc = 0x13CCC4u;
    {
        const bool branch_taken_0x13ccc4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CCC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13ccc4) {
            ctx->pc = 0x13CCF8u;
            goto label_13ccf8;
        }
    }
    ctx->pc = 0x13CCCCu;
    // 0x13cccc: 0xc04f3de
    ctx->pc = 0x13CCCCu;
    SET_GPR_U32(ctx, 31, 0x13CCD4u);
    ctx->pc = 0x13CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF78_0x13cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCD4u; }
    }
    if (ctx->pc != 0x13CCD4u) { return; }
    ctx->pc = 0x13CCD4u;
    // 0x13ccd4: 0x282d
    ctx->pc = 0x13ccd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ccd8: 0xa2000000
    ctx->pc = 0x13ccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ccdc: 0x200202d
    ctx->pc = 0x13ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cce0: 0xdfbf0008
    ctx->pc = 0x13cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cce4: 0x24060238
    ctx->pc = 0x13cce4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 568));
    // 0x13cce8: 0xdfb00000
    ctx->pc = 0x13cce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ccec: 0x8041f1a
    ctx->pc = 0x13CCECu;
    ctx->pc = 0x13CCF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x13CCF4u;
    // 0x13ccf4: 0x0
    ctx->pc = 0x13ccf4u;
    // NOP
label_13ccf8:
    // 0x13ccf8: 0xdfb00000
    ctx->pc = 0x13ccf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ccfc: 0xdfbf0008
    ctx->pc = 0x13ccfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cd00: 0x3e00008
    ctx->pc = 0x13CD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CCF8u: goto label_13ccf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CD08u;
}
