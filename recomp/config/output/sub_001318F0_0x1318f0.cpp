#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001318F0
// Address: 0x1318f0 - 0x131918
void sub_001318F0_0x1318f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1318f0u;

label_1318f0:
    // 0x1318f0: 0x3c020022
    ctx->pc = 0x1318f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1318f4:
    // 0x1318f4: 0x27bdfff0
    ctx->pc = 0x1318f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1318f8:
    // 0x1318f8: 0x8c42b794
    ctx->pc = 0x1318f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948756)));
label_1318fc:
    // 0x1318fc: 0x10400003
label_131900:
    if (ctx->pc == 0x131900u) {
        ctx->pc = 0x131900u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x131904u;
        goto label_131904;
    }
    ctx->pc = 0x1318FCu;
    {
        const bool branch_taken_0x1318fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x131900u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1318fc) {
            ctx->pc = 0x13190Cu;
            goto label_13190c;
        }
    }
    ctx->pc = 0x131904u;
label_131904:
    // 0x131904: 0x40f809
label_131908:
    if (ctx->pc == 0x131908u) {
        ctx->pc = 0x13190Cu;
        goto label_13190c;
    }
    ctx->pc = 0x131904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13190Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1318F0u: goto label_1318f0;
            case 0x1318F4u: goto label_1318f4;
            case 0x1318F8u: goto label_1318f8;
            case 0x1318FCu: goto label_1318fc;
            case 0x131900u: goto label_131900;
            case 0x131904u: goto label_131904;
            case 0x131908u: goto label_131908;
            case 0x13190Cu: goto label_13190c;
            case 0x131910u: goto label_131910;
            case 0x131914u: goto label_131914;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13190Cu; }
            if (ctx->pc != 0x13190Cu) { return; }
        }
    }
    ctx->pc = 0x13190Cu;
label_13190c:
    // 0x13190c: 0xdfbf0000
    ctx->pc = 0x13190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131910:
    // 0x131910: 0x3e00008
label_131914:
    if (ctx->pc == 0x131914u) {
        ctx->pc = 0x131914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x131918u;
        goto label_fallthrough_0x131910;
    }
    ctx->pc = 0x131910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1318F0u: goto label_1318f0;
            case 0x1318F4u: goto label_1318f4;
            case 0x1318F8u: goto label_1318f8;
            case 0x1318FCu: goto label_1318fc;
            case 0x131900u: goto label_131900;
            case 0x131904u: goto label_131904;
            case 0x131908u: goto label_131908;
            case 0x13190Cu: goto label_13190c;
            case 0x131910u: goto label_131910;
            case 0x131914u: goto label_131914;
            default: break;
        }
        return;
    }
label_fallthrough_0x131910:
    ctx->pc = 0x131918u;
}
