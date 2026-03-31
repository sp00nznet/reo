#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001230B0
// Address: 0x1230b0 - 0x1230e0
void sub_001230B0_0x1230b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1230b0u;

label_1230b0:
    // 0x1230b0: 0x27bdfff0
    ctx->pc = 0x1230b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1230b4:
    // 0x1230b4: 0xffbf0000
    ctx->pc = 0x1230b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1230b8:
    // 0x1230b8: 0x8c8200b0
    ctx->pc = 0x1230b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_1230bc:
    // 0x1230bc: 0x10400005
label_1230c0:
    if (ctx->pc == 0x1230C0u) {
        ctx->pc = 0x1230C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1230C4u;
        goto label_1230c4;
    }
    ctx->pc = 0x1230BCu;
    {
        const bool branch_taken_0x1230bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1230C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1230bc) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x1230C4u;
label_1230c4:
    // 0x1230c4: 0x3c020021
    ctx->pc = 0x1230c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1230c8:
    // 0x1230c8: 0x8c43b730
    ctx->pc = 0x1230c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948656)));
label_1230cc:
    // 0x1230cc: 0x60f809
label_1230d0:
    if (ctx->pc == 0x1230D0u) {
        ctx->pc = 0x1230D4u;
        goto label_1230d4;
    }
    ctx->pc = 0x1230CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1230D4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1230B0u: goto label_1230b0;
            case 0x1230B4u: goto label_1230b4;
            case 0x1230B8u: goto label_1230b8;
            case 0x1230BCu: goto label_1230bc;
            case 0x1230C0u: goto label_1230c0;
            case 0x1230C4u: goto label_1230c4;
            case 0x1230C8u: goto label_1230c8;
            case 0x1230CCu: goto label_1230cc;
            case 0x1230D0u: goto label_1230d0;
            case 0x1230D4u: goto label_1230d4;
            case 0x1230D8u: goto label_1230d8;
            case 0x1230DCu: goto label_1230dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1230D4u; }
            if (ctx->pc != 0x1230D4u) { return; }
        }
    }
    ctx->pc = 0x1230D4u;
label_1230d4:
    // 0x1230d4: 0xdfbf0000
    ctx->pc = 0x1230d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1230d8:
    // 0x1230d8: 0x3e00008
label_1230dc:
    if (ctx->pc == 0x1230DCu) {
        ctx->pc = 0x1230DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1230E0u;
        goto label_fallthrough_0x1230d8;
    }
    ctx->pc = 0x1230D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1230B0u: goto label_1230b0;
            case 0x1230B4u: goto label_1230b4;
            case 0x1230B8u: goto label_1230b8;
            case 0x1230BCu: goto label_1230bc;
            case 0x1230C0u: goto label_1230c0;
            case 0x1230C4u: goto label_1230c4;
            case 0x1230C8u: goto label_1230c8;
            case 0x1230CCu: goto label_1230cc;
            case 0x1230D0u: goto label_1230d0;
            case 0x1230D4u: goto label_1230d4;
            case 0x1230D8u: goto label_1230d8;
            case 0x1230DCu: goto label_1230dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1230d8:
    ctx->pc = 0x1230E0u;
}
