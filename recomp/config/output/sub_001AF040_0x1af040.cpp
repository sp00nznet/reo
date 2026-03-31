#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF040
// Address: 0x1af040 - 0x1af080
void sub_001AF040_0x1af040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af040u;

    // 0x1af040: 0x27bdfff0
    ctx->pc = 0x1af040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af044: 0x3c010032
    ctx->pc = 0x1af044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af048: 0xffbf0000
    ctx->pc = 0x1af048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af04c: 0x8c234190
    ctx->pc = 0x1af04cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16784)));
    // 0x1af050: 0x14600008
    ctx->pc = 0x1AF050u;
    {
        const bool branch_taken_0x1af050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af050) {
            ctx->pc = 0x1AF074u;
            goto label_1af074;
        }
    }
    ctx->pc = 0x1AF058u;
    // 0x1af058: 0xc065788
    ctx->pc = 0x1AF058u;
    SET_GPR_U32(ctx, 31, 0x1AF060u);
    ctx->pc = 0x195E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00195E20_0x195e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF060u; }
    }
    if (ctx->pc != 0x1AF060u) { return; }
    ctx->pc = 0x1AF060u;
    // 0x1af060: 0x3c010032
    ctx->pc = 0x1af060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af064: 0x8c234190
    ctx->pc = 0x1af064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16784)));
    // 0x1af068: 0x24630001
    ctx->pc = 0x1af068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1af06c: 0x3c010032
    ctx->pc = 0x1af06cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af070: 0xac234190
    ctx->pc = 0x1af070u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16784), GPR_U32(ctx, 3));
label_1af074:
    // 0x1af074: 0xdfbf0000
    ctx->pc = 0x1af074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af078: 0x3e00008
    ctx->pc = 0x1AF078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF07Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF074u: goto label_1af074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF080u;
}
