#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001318C8
// Address: 0x1318c8 - 0x1318f0
void sub_001318C8_0x1318c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1318c8u;

label_1318c8:
    // 0x1318c8: 0x3c020022
    ctx->pc = 0x1318c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1318cc:
    // 0x1318cc: 0x27bdfff0
    ctx->pc = 0x1318ccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1318d0:
    // 0x1318d0: 0x8c42b790
    ctx->pc = 0x1318d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948752)));
label_1318d4:
    // 0x1318d4: 0x10400003
label_1318d8:
    if (ctx->pc == 0x1318D8u) {
        ctx->pc = 0x1318D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1318DCu;
        goto label_1318dc;
    }
    ctx->pc = 0x1318D4u;
    {
        const bool branch_taken_0x1318d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1318D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1318d4) {
            ctx->pc = 0x1318E4u;
            goto label_1318e4;
        }
    }
    ctx->pc = 0x1318DCu;
label_1318dc:
    // 0x1318dc: 0x40f809
label_1318e0:
    if (ctx->pc == 0x1318E0u) {
        ctx->pc = 0x1318E4u;
        goto label_1318e4;
    }
    ctx->pc = 0x1318DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1318E4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1318C8u: goto label_1318c8;
            case 0x1318CCu: goto label_1318cc;
            case 0x1318D0u: goto label_1318d0;
            case 0x1318D4u: goto label_1318d4;
            case 0x1318D8u: goto label_1318d8;
            case 0x1318DCu: goto label_1318dc;
            case 0x1318E0u: goto label_1318e0;
            case 0x1318E4u: goto label_1318e4;
            case 0x1318E8u: goto label_1318e8;
            case 0x1318ECu: goto label_1318ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1318E4u; }
            if (ctx->pc != 0x1318E4u) { return; }
        }
    }
    ctx->pc = 0x1318E4u;
label_1318e4:
    // 0x1318e4: 0xdfbf0000
    ctx->pc = 0x1318e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1318e8:
    // 0x1318e8: 0x3e00008
label_1318ec:
    if (ctx->pc == 0x1318ECu) {
        ctx->pc = 0x1318ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1318F0u;
        goto label_fallthrough_0x1318e8;
    }
    ctx->pc = 0x1318E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1318ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1318C8u: goto label_1318c8;
            case 0x1318CCu: goto label_1318cc;
            case 0x1318D0u: goto label_1318d0;
            case 0x1318D4u: goto label_1318d4;
            case 0x1318D8u: goto label_1318d8;
            case 0x1318DCu: goto label_1318dc;
            case 0x1318E0u: goto label_1318e0;
            case 0x1318E4u: goto label_1318e4;
            case 0x1318E8u: goto label_1318e8;
            case 0x1318ECu: goto label_1318ec;
            default: break;
        }
        return;
    }
label_fallthrough_0x1318e8:
    ctx->pc = 0x1318F0u;
}
