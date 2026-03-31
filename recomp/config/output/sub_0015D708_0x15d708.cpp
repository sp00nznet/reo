#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D708
// Address: 0x15d708 - 0x15d740
void sub_0015D708_0x15d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d708u;

label_15d708:
    // 0x15d708: 0x27bdfff0
    ctx->pc = 0x15d708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_15d70c:
    // 0x15d70c: 0xffb00000
    ctx->pc = 0x15d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15d710:
    // 0x15d710: 0xffbf0008
    ctx->pc = 0x15d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_15d714:
    // 0x15d714: 0xc05799e
label_15d718:
    if (ctx->pc == 0x15D718u) {
        ctx->pc = 0x15D718u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D71Cu;
        goto label_15d71c;
    }
    ctx->pc = 0x15D714u;
    SET_GPR_U32(ctx, 31, 0x15D71Cu);
    ctx->pc = 0x15D718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D71Cu; }
    }
    if (ctx->pc != 0x15D71Cu) { return; }
    ctx->pc = 0x15D71Cu;
label_15d71c:
    // 0x15d71c: 0x8c440030
    ctx->pc = 0x15d71cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_15d720:
    // 0x15d720: 0x8c43002c
    ctx->pc = 0x15d720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_15d724:
    // 0x15d724: 0x60f809
label_15d728:
    if (ctx->pc == 0x15D728u) {
        ctx->pc = 0x15D728u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D72Cu;
        goto label_15d72c;
    }
    ctx->pc = 0x15D724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D72Cu);
        ctx->pc = 0x15D728u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D708u: goto label_15d708;
            case 0x15D70Cu: goto label_15d70c;
            case 0x15D710u: goto label_15d710;
            case 0x15D714u: goto label_15d714;
            case 0x15D718u: goto label_15d718;
            case 0x15D71Cu: goto label_15d71c;
            case 0x15D720u: goto label_15d720;
            case 0x15D724u: goto label_15d724;
            case 0x15D728u: goto label_15d728;
            case 0x15D72Cu: goto label_15d72c;
            case 0x15D730u: goto label_15d730;
            case 0x15D734u: goto label_15d734;
            case 0x15D738u: goto label_15d738;
            case 0x15D73Cu: goto label_15d73c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D72Cu; }
            if (ctx->pc != 0x15D72Cu) { return; }
        }
    }
    ctx->pc = 0x15D72Cu;
label_15d72c:
    // 0x15d72c: 0xdfb00000
    ctx->pc = 0x15d72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d730:
    // 0x15d730: 0xdfbf0008
    ctx->pc = 0x15d730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15d734:
    // 0x15d734: 0x3e00008
label_15d738:
    if (ctx->pc == 0x15D738u) {
        ctx->pc = 0x15D738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x15D73Cu;
        goto label_15d73c;
    }
    ctx->pc = 0x15D734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D708u: goto label_15d708;
            case 0x15D70Cu: goto label_15d70c;
            case 0x15D710u: goto label_15d710;
            case 0x15D714u: goto label_15d714;
            case 0x15D718u: goto label_15d718;
            case 0x15D71Cu: goto label_15d71c;
            case 0x15D720u: goto label_15d720;
            case 0x15D724u: goto label_15d724;
            case 0x15D728u: goto label_15d728;
            case 0x15D72Cu: goto label_15d72c;
            case 0x15D730u: goto label_15d730;
            case 0x15D734u: goto label_15d734;
            case 0x15D738u: goto label_15d738;
            case 0x15D73Cu: goto label_15d73c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D73Cu;
label_15d73c:
    // 0x15d73c: 0x0
    ctx->pc = 0x15d73cu;
    // NOP
}
