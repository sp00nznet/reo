#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C03A0
// Address: 0x1c03a0 - 0x1c03f0
void sub_001C03A0_0x1c03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c03a0u;

label_1c03a0:
    // 0x1c03a0: 0x27bdfff0
    ctx->pc = 0x1c03a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c03a4:
    // 0x1c03a4: 0xffbf0000
    ctx->pc = 0x1c03a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c03a8:
    // 0x1c03a8: 0xc06ade4
label_1c03ac:
    if (ctx->pc == 0x1C03ACu) {
        ctx->pc = 0x1C03B0u;
        goto label_1c03b0;
    }
    ctx->pc = 0x1C03A8u;
    SET_GPR_U32(ctx, 31, 0x1C03B0u);
    ctx->pc = 0x1AB790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB790_0x1ab790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03B0u; }
    }
    if (ctx->pc != 0x1C03B0u) { return; }
    ctx->pc = 0x1C03B0u;
label_1c03b0:
    // 0x1c03b0: 0x3c010032
    ctx->pc = 0x1c03b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c03b4:
    // 0x1c03b4: 0x3c020023
    ctx->pc = 0x1c03b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1c03b8:
    // 0x1c03b8: 0x8c236ce8
    ctx->pc = 0x1c03b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27880)));
label_1c03bc:
    // 0x1c03bc: 0x3c040032
    ctx->pc = 0x1c03bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_1c03c0:
    // 0x1c03c0: 0x24425170
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20848));
label_1c03c4:
    // 0x1c03c4: 0x31880
    ctx->pc = 0x1c03c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1c03c8:
    // 0x1c03c8: 0x431021
    ctx->pc = 0x1c03c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c03cc:
    // 0x1c03cc: 0x8c420000
    ctx->pc = 0x1c03ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c03d0:
    // 0x1c03d0: 0x40f809
label_1c03d4:
    if (ctx->pc == 0x1C03D4u) {
        ctx->pc = 0x1C03D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27728));
        ctx->pc = 0x1C03D8u;
        goto label_1c03d8;
    }
    ctx->pc = 0x1C03D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C03D8u);
        ctx->pc = 0x1C03D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27728));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C03A0u: goto label_1c03a0;
            case 0x1C03A4u: goto label_1c03a4;
            case 0x1C03A8u: goto label_1c03a8;
            case 0x1C03ACu: goto label_1c03ac;
            case 0x1C03B0u: goto label_1c03b0;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03B8u: goto label_1c03b8;
            case 0x1C03BCu: goto label_1c03bc;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03C4u: goto label_1c03c4;
            case 0x1C03C8u: goto label_1c03c8;
            case 0x1C03CCu: goto label_1c03cc;
            case 0x1C03D0u: goto label_1c03d0;
            case 0x1C03D4u: goto label_1c03d4;
            case 0x1C03D8u: goto label_1c03d8;
            case 0x1C03DCu: goto label_1c03dc;
            case 0x1C03E0u: goto label_1c03e0;
            case 0x1C03E4u: goto label_1c03e4;
            case 0x1C03E8u: goto label_1c03e8;
            case 0x1C03ECu: goto label_1c03ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C03D8u; }
            if (ctx->pc != 0x1C03D8u) { return; }
        }
    }
    ctx->pc = 0x1C03D8u;
label_1c03d8:
    // 0x1c03d8: 0xc06adfc
label_1c03dc:
    if (ctx->pc == 0x1C03DCu) {
        ctx->pc = 0x1C03E0u;
        goto label_1c03e0;
    }
    ctx->pc = 0x1C03D8u;
    SET_GPR_U32(ctx, 31, 0x1C03E0u);
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB7F0_0x1ab7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03E0u; }
    }
    if (ctx->pc != 0x1C03E0u) { return; }
    ctx->pc = 0x1C03E0u;
label_1c03e0:
    // 0x1c03e0: 0xdfbf0000
    ctx->pc = 0x1c03e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c03e4:
    // 0x1c03e4: 0x3e00008
label_1c03e8:
    if (ctx->pc == 0x1C03E8u) {
        ctx->pc = 0x1C03E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C03ECu;
        goto label_1c03ec;
    }
    ctx->pc = 0x1C03E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C03E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C03A0u: goto label_1c03a0;
            case 0x1C03A4u: goto label_1c03a4;
            case 0x1C03A8u: goto label_1c03a8;
            case 0x1C03ACu: goto label_1c03ac;
            case 0x1C03B0u: goto label_1c03b0;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03B8u: goto label_1c03b8;
            case 0x1C03BCu: goto label_1c03bc;
            case 0x1C03C0u: goto label_1c03c0;
            case 0x1C03C4u: goto label_1c03c4;
            case 0x1C03C8u: goto label_1c03c8;
            case 0x1C03CCu: goto label_1c03cc;
            case 0x1C03D0u: goto label_1c03d0;
            case 0x1C03D4u: goto label_1c03d4;
            case 0x1C03D8u: goto label_1c03d8;
            case 0x1C03DCu: goto label_1c03dc;
            case 0x1C03E0u: goto label_1c03e0;
            case 0x1C03E4u: goto label_1c03e4;
            case 0x1C03E8u: goto label_1c03e8;
            case 0x1C03ECu: goto label_1c03ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C03ECu;
label_1c03ec:
    // 0x1c03ec: 0x0
    ctx->pc = 0x1c03ecu;
    // NOP
}
