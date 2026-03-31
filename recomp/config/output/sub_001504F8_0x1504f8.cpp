#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001504F8
// Address: 0x1504f8 - 0x150520
void sub_001504F8_0x1504f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1504f8u;

label_1504f8:
    // 0x1504f8: 0x3c020023
    ctx->pc = 0x1504f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1504fc:
    // 0x1504fc: 0x27bdfff0
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150500:
    // 0x150500: 0x8c42d850
    ctx->pc = 0x150500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957136)));
label_150504:
    // 0x150504: 0x10400003
label_150508:
    if (ctx->pc == 0x150508u) {
        ctx->pc = 0x150508u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x15050Cu;
        goto label_15050c;
    }
    ctx->pc = 0x150504u;
    {
        const bool branch_taken_0x150504 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150508u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x150504) {
            ctx->pc = 0x150514u;
            goto label_150514;
        }
    }
    ctx->pc = 0x15050Cu;
label_15050c:
    // 0x15050c: 0x40f809
label_150510:
    if (ctx->pc == 0x150510u) {
        ctx->pc = 0x150514u;
        goto label_150514;
    }
    ctx->pc = 0x15050Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150514u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1504F8u: goto label_1504f8;
            case 0x1504FCu: goto label_1504fc;
            case 0x150500u: goto label_150500;
            case 0x150504u: goto label_150504;
            case 0x150508u: goto label_150508;
            case 0x15050Cu: goto label_15050c;
            case 0x150510u: goto label_150510;
            case 0x150514u: goto label_150514;
            case 0x150518u: goto label_150518;
            case 0x15051Cu: goto label_15051c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150514u; }
            if (ctx->pc != 0x150514u) { return; }
        }
    }
    ctx->pc = 0x150514u;
label_150514:
    // 0x150514: 0xdfbf0000
    ctx->pc = 0x150514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150518:
    // 0x150518: 0x3e00008
label_15051c:
    if (ctx->pc == 0x15051Cu) {
        ctx->pc = 0x15051Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150520u;
        goto label_fallthrough_0x150518;
    }
    ctx->pc = 0x150518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15051Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1504F8u: goto label_1504f8;
            case 0x1504FCu: goto label_1504fc;
            case 0x150500u: goto label_150500;
            case 0x150504u: goto label_150504;
            case 0x150508u: goto label_150508;
            case 0x15050Cu: goto label_15050c;
            case 0x150510u: goto label_150510;
            case 0x150514u: goto label_150514;
            case 0x150518u: goto label_150518;
            case 0x15051Cu: goto label_15051c;
            default: break;
        }
        return;
    }
label_fallthrough_0x150518:
    ctx->pc = 0x150520u;
}
