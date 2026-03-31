#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001395F8
// Address: 0x1395f8 - 0x139628
void sub_001395F8_0x1395f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1395f8u;

label_1395f8:
    // 0x1395f8: 0x3c020022
    ctx->pc = 0x1395f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1395fc:
    // 0x1395fc: 0x27bdfff0
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_139600:
    // 0x139600: 0x8c43cbe4
    ctx->pc = 0x139600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294953956)));
label_139604:
    // 0x139604: 0x80302d
    ctx->pc = 0x139604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139608:
    // 0x139608: 0x10600004
label_13960c:
    if (ctx->pc == 0x13960Cu) {
        ctx->pc = 0x13960Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x139610u;
        goto label_139610;
    }
    ctx->pc = 0x139608u;
    {
        const bool branch_taken_0x139608 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13960Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x139608) {
            ctx->pc = 0x13961Cu;
            goto label_13961c;
        }
    }
    ctx->pc = 0x139610u;
label_139610:
    // 0x139610: 0x3c020022
    ctx->pc = 0x139610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_139614:
    // 0x139614: 0x60f809
label_139618:
    if (ctx->pc == 0x139618u) {
        ctx->pc = 0x139618u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953960)));
        ctx->pc = 0x13961Cu;
        goto label_13961c;
    }
    ctx->pc = 0x139614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13961Cu);
        ctx->pc = 0x139618u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953960)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1395F8u: goto label_1395f8;
            case 0x1395FCu: goto label_1395fc;
            case 0x139600u: goto label_139600;
            case 0x139604u: goto label_139604;
            case 0x139608u: goto label_139608;
            case 0x13960Cu: goto label_13960c;
            case 0x139610u: goto label_139610;
            case 0x139614u: goto label_139614;
            case 0x139618u: goto label_139618;
            case 0x13961Cu: goto label_13961c;
            case 0x139620u: goto label_139620;
            case 0x139624u: goto label_139624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13961Cu; }
            if (ctx->pc != 0x13961Cu) { return; }
        }
    }
    ctx->pc = 0x13961Cu;
label_13961c:
    // 0x13961c: 0xdfbf0000
    ctx->pc = 0x13961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139620:
    // 0x139620: 0x3e00008
label_139624:
    if (ctx->pc == 0x139624u) {
        ctx->pc = 0x139624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x139628u;
        goto label_fallthrough_0x139620;
    }
    ctx->pc = 0x139620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1395F8u: goto label_1395f8;
            case 0x1395FCu: goto label_1395fc;
            case 0x139600u: goto label_139600;
            case 0x139604u: goto label_139604;
            case 0x139608u: goto label_139608;
            case 0x13960Cu: goto label_13960c;
            case 0x139610u: goto label_139610;
            case 0x139614u: goto label_139614;
            case 0x139618u: goto label_139618;
            case 0x13961Cu: goto label_13961c;
            case 0x139620u: goto label_139620;
            case 0x139624u: goto label_139624;
            default: break;
        }
        return;
    }
label_fallthrough_0x139620:
    ctx->pc = 0x139628u;
}
