#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001504D0
// Address: 0x1504d0 - 0x1504f8
void sub_001504D0_0x1504d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1504d0u;

label_1504d0:
    // 0x1504d0: 0x3c020023
    ctx->pc = 0x1504d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1504d4:
    // 0x1504d4: 0x27bdfff0
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1504d8:
    // 0x1504d8: 0x8c42d84c
    ctx->pc = 0x1504d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957132)));
label_1504dc:
    // 0x1504dc: 0x10400003
label_1504e0:
    if (ctx->pc == 0x1504E0u) {
        ctx->pc = 0x1504E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1504E4u;
        goto label_1504e4;
    }
    ctx->pc = 0x1504DCu;
    {
        const bool branch_taken_0x1504dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1504E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1504dc) {
            ctx->pc = 0x1504ECu;
            goto label_1504ec;
        }
    }
    ctx->pc = 0x1504E4u;
label_1504e4:
    // 0x1504e4: 0x40f809
label_1504e8:
    if (ctx->pc == 0x1504E8u) {
        ctx->pc = 0x1504ECu;
        goto label_1504ec;
    }
    ctx->pc = 0x1504E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1504ECu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1504D0u: goto label_1504d0;
            case 0x1504D4u: goto label_1504d4;
            case 0x1504D8u: goto label_1504d8;
            case 0x1504DCu: goto label_1504dc;
            case 0x1504E0u: goto label_1504e0;
            case 0x1504E4u: goto label_1504e4;
            case 0x1504E8u: goto label_1504e8;
            case 0x1504ECu: goto label_1504ec;
            case 0x1504F0u: goto label_1504f0;
            case 0x1504F4u: goto label_1504f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1504ECu; }
            if (ctx->pc != 0x1504ECu) { return; }
        }
    }
    ctx->pc = 0x1504ECu;
label_1504ec:
    // 0x1504ec: 0xdfbf0000
    ctx->pc = 0x1504ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1504f0:
    // 0x1504f0: 0x3e00008
label_1504f4:
    if (ctx->pc == 0x1504F4u) {
        ctx->pc = 0x1504F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1504F8u;
        goto label_fallthrough_0x1504f0;
    }
    ctx->pc = 0x1504F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1504F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1504D0u: goto label_1504d0;
            case 0x1504D4u: goto label_1504d4;
            case 0x1504D8u: goto label_1504d8;
            case 0x1504DCu: goto label_1504dc;
            case 0x1504E0u: goto label_1504e0;
            case 0x1504E4u: goto label_1504e4;
            case 0x1504E8u: goto label_1504e8;
            case 0x1504ECu: goto label_1504ec;
            case 0x1504F0u: goto label_1504f0;
            case 0x1504F4u: goto label_1504f4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1504f0:
    ctx->pc = 0x1504F8u;
}
