#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150480
// Address: 0x150480 - 0x1504a8
void sub_00150480_0x150480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150480u;

label_150480:
    // 0x150480: 0x3c020023
    ctx->pc = 0x150480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_150484:
    // 0x150484: 0x27bdfff0
    ctx->pc = 0x150484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150488:
    // 0x150488: 0x8c42d844
    ctx->pc = 0x150488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957124)));
label_15048c:
    // 0x15048c: 0x10400003
label_150490:
    if (ctx->pc == 0x150490u) {
        ctx->pc = 0x150490u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x150494u;
        goto label_150494;
    }
    ctx->pc = 0x15048Cu;
    {
        const bool branch_taken_0x15048c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150490u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15048c) {
            ctx->pc = 0x15049Cu;
            goto label_15049c;
        }
    }
    ctx->pc = 0x150494u;
label_150494:
    // 0x150494: 0x40f809
label_150498:
    if (ctx->pc == 0x150498u) {
        ctx->pc = 0x15049Cu;
        goto label_15049c;
    }
    ctx->pc = 0x150494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15049Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150480u: goto label_150480;
            case 0x150484u: goto label_150484;
            case 0x150488u: goto label_150488;
            case 0x15048Cu: goto label_15048c;
            case 0x150490u: goto label_150490;
            case 0x150494u: goto label_150494;
            case 0x150498u: goto label_150498;
            case 0x15049Cu: goto label_15049c;
            case 0x1504A0u: goto label_1504a0;
            case 0x1504A4u: goto label_1504a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15049Cu; }
            if (ctx->pc != 0x15049Cu) { return; }
        }
    }
    ctx->pc = 0x15049Cu;
label_15049c:
    // 0x15049c: 0xdfbf0000
    ctx->pc = 0x15049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1504a0:
    // 0x1504a0: 0x3e00008
label_1504a4:
    if (ctx->pc == 0x1504A4u) {
        ctx->pc = 0x1504A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1504A8u;
        goto label_fallthrough_0x1504a0;
    }
    ctx->pc = 0x1504A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1504A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150480u: goto label_150480;
            case 0x150484u: goto label_150484;
            case 0x150488u: goto label_150488;
            case 0x15048Cu: goto label_15048c;
            case 0x150490u: goto label_150490;
            case 0x150494u: goto label_150494;
            case 0x150498u: goto label_150498;
            case 0x15049Cu: goto label_15049c;
            case 0x1504A0u: goto label_1504a0;
            case 0x1504A4u: goto label_1504a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1504a0:
    ctx->pc = 0x1504A8u;
}
