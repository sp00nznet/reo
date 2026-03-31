#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001504A8
// Address: 0x1504a8 - 0x1504d0
void sub_001504A8_0x1504a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1504a8u;

label_1504a8:
    // 0x1504a8: 0x3c020023
    ctx->pc = 0x1504a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1504ac:
    // 0x1504ac: 0x27bdfff0
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1504b0:
    // 0x1504b0: 0x8c42d848
    ctx->pc = 0x1504b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957128)));
label_1504b4:
    // 0x1504b4: 0x10400003
label_1504b8:
    if (ctx->pc == 0x1504B8u) {
        ctx->pc = 0x1504B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1504BCu;
        goto label_1504bc;
    }
    ctx->pc = 0x1504B4u;
    {
        const bool branch_taken_0x1504b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1504B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1504b4) {
            ctx->pc = 0x1504C4u;
            goto label_1504c4;
        }
    }
    ctx->pc = 0x1504BCu;
label_1504bc:
    // 0x1504bc: 0x40f809
label_1504c0:
    if (ctx->pc == 0x1504C0u) {
        ctx->pc = 0x1504C4u;
        goto label_1504c4;
    }
    ctx->pc = 0x1504BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1504C4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1504A8u: goto label_1504a8;
            case 0x1504ACu: goto label_1504ac;
            case 0x1504B0u: goto label_1504b0;
            case 0x1504B4u: goto label_1504b4;
            case 0x1504B8u: goto label_1504b8;
            case 0x1504BCu: goto label_1504bc;
            case 0x1504C0u: goto label_1504c0;
            case 0x1504C4u: goto label_1504c4;
            case 0x1504C8u: goto label_1504c8;
            case 0x1504CCu: goto label_1504cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1504C4u; }
            if (ctx->pc != 0x1504C4u) { return; }
        }
    }
    ctx->pc = 0x1504C4u;
label_1504c4:
    // 0x1504c4: 0xdfbf0000
    ctx->pc = 0x1504c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1504c8:
    // 0x1504c8: 0x3e00008
label_1504cc:
    if (ctx->pc == 0x1504CCu) {
        ctx->pc = 0x1504CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1504D0u;
        goto label_fallthrough_0x1504c8;
    }
    ctx->pc = 0x1504C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1504CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1504A8u: goto label_1504a8;
            case 0x1504ACu: goto label_1504ac;
            case 0x1504B0u: goto label_1504b0;
            case 0x1504B4u: goto label_1504b4;
            case 0x1504B8u: goto label_1504b8;
            case 0x1504BCu: goto label_1504bc;
            case 0x1504C0u: goto label_1504c0;
            case 0x1504C4u: goto label_1504c4;
            case 0x1504C8u: goto label_1504c8;
            case 0x1504CCu: goto label_1504cc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1504c8:
    ctx->pc = 0x1504D0u;
}
