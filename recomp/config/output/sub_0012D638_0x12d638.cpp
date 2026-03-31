#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D638
// Address: 0x12d638 - 0x12d678
void sub_0012D638_0x12d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d638u;

    // 0x12d638: 0x27bdfff0
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d63c: 0x24020002
    ctx->pc = 0x12d63cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d640: 0xffbf0000
    ctx->pc = 0x12d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d644: 0x80830001
    ctx->pc = 0x12d644u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x12d648: 0x14620005
    ctx->pc = 0x12D648u;
    {
        const bool branch_taken_0x12d648 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D64Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12d648) {
            ctx->pc = 0x12D660u;
            goto label_12d660;
        }
    }
    ctx->pc = 0x12D650u;
    // 0x12d650: 0xdfbf0000
    ctx->pc = 0x12d650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d654: 0x804b564
    ctx->pc = 0x12D654u;
    ctx->pc = 0x12D658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12D590u;
    entry_12d590_0x12d638(rdram, ctx, runtime); return;
    ctx->pc = 0x12D65Cu;
    // 0x12d65c: 0x0
    ctx->pc = 0x12d65cu;
    // NOP
label_12d660:
    // 0x12d660: 0x14620003
    ctx->pc = 0x12D660u;
    {
        const bool branch_taken_0x12d660 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12d660) {
            ctx->pc = 0x12D670u;
            goto label_12d670;
        }
    }
    ctx->pc = 0x12D668u;
    // 0x12d668: 0x804b338
    ctx->pc = 0x12D668u;
    ctx->pc = 0x12D66Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12CCE0u;
    entry_12cce0_0x12cfd8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D670u;
label_12d670:
    // 0x12d670: 0x3e00008
    ctx->pc = 0x12D670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D674u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D660u: goto label_12d660;
            case 0x12D670u: goto label_12d670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D678u;
}
