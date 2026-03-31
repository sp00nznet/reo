#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013AFC8
// Address: 0x13afc8 - 0x13aff8
void sub_0013AFC8_0x13afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13afc8u;

label_13afc8:
    // 0x13afc8: 0x3c020022
    ctx->pc = 0x13afc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13afcc:
    // 0x13afcc: 0x27bdfff0
    ctx->pc = 0x13afccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13afd0:
    // 0x13afd0: 0x8c43da7c
    ctx->pc = 0x13afd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957692)));
label_13afd4:
    // 0x13afd4: 0x80302d
    ctx->pc = 0x13afd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13afd8:
    // 0x13afd8: 0x10600004
label_13afdc:
    if (ctx->pc == 0x13AFDCu) {
        ctx->pc = 0x13AFDCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x13AFE0u;
        goto label_13afe0;
    }
    ctx->pc = 0x13AFD8u;
    {
        const bool branch_taken_0x13afd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AFDCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13afd8) {
            ctx->pc = 0x13AFECu;
            goto label_13afec;
        }
    }
    ctx->pc = 0x13AFE0u;
label_13afe0:
    // 0x13afe0: 0x3c020022
    ctx->pc = 0x13afe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13afe4:
    // 0x13afe4: 0x60f809
label_13afe8:
    if (ctx->pc == 0x13AFE8u) {
        ctx->pc = 0x13AFE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957696)));
        ctx->pc = 0x13AFECu;
        goto label_13afec;
    }
    ctx->pc = 0x13AFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13AFECu);
        ctx->pc = 0x13AFE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957696)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AFC8u: goto label_13afc8;
            case 0x13AFCCu: goto label_13afcc;
            case 0x13AFD0u: goto label_13afd0;
            case 0x13AFD4u: goto label_13afd4;
            case 0x13AFD8u: goto label_13afd8;
            case 0x13AFDCu: goto label_13afdc;
            case 0x13AFE0u: goto label_13afe0;
            case 0x13AFE4u: goto label_13afe4;
            case 0x13AFE8u: goto label_13afe8;
            case 0x13AFECu: goto label_13afec;
            case 0x13AFF0u: goto label_13aff0;
            case 0x13AFF4u: goto label_13aff4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13AFECu; }
            if (ctx->pc != 0x13AFECu) { return; }
        }
    }
    ctx->pc = 0x13AFECu;
label_13afec:
    // 0x13afec: 0xdfbf0000
    ctx->pc = 0x13afecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13aff0:
    // 0x13aff0: 0x3e00008
label_13aff4:
    if (ctx->pc == 0x13AFF4u) {
        ctx->pc = 0x13AFF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13AFF8u;
        goto label_fallthrough_0x13aff0;
    }
    ctx->pc = 0x13AFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AFF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AFC8u: goto label_13afc8;
            case 0x13AFCCu: goto label_13afcc;
            case 0x13AFD0u: goto label_13afd0;
            case 0x13AFD4u: goto label_13afd4;
            case 0x13AFD8u: goto label_13afd8;
            case 0x13AFDCu: goto label_13afdc;
            case 0x13AFE0u: goto label_13afe0;
            case 0x13AFE4u: goto label_13afe4;
            case 0x13AFE8u: goto label_13afe8;
            case 0x13AFECu: goto label_13afec;
            case 0x13AFF0u: goto label_13aff0;
            case 0x13AFF4u: goto label_13aff4;
            default: break;
        }
        return;
    }
label_fallthrough_0x13aff0:
    ctx->pc = 0x13AFF8u;
}
