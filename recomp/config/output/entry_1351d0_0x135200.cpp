#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1351d0
// Address: 0x1351d0 - 0x135200
void entry_1351d0_0x135200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1351d0u;

label_1351d0:
    // 0x1351d0: 0x3c020022
    ctx->pc = 0x1351d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1351d4:
    // 0x1351d4: 0x27bdfff0
    ctx->pc = 0x1351d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1351d8:
    // 0x1351d8: 0x8c43bb7c
    ctx->pc = 0x1351d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949756)));
label_1351dc:
    // 0x1351dc: 0x10600004
label_1351e0:
    if (ctx->pc == 0x1351E0u) {
        ctx->pc = 0x1351E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1351E4u;
        goto label_1351e4;
    }
    ctx->pc = 0x1351DCu;
    {
        const bool branch_taken_0x1351dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1351E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1351dc) {
            ctx->pc = 0x1351F0u;
            goto label_1351f0;
        }
    }
    ctx->pc = 0x1351E4u;
label_1351e4:
    // 0x1351e4: 0x3c020022
    ctx->pc = 0x1351e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1351e8:
    // 0x1351e8: 0x60f809
label_1351ec:
    if (ctx->pc == 0x1351ECu) {
        ctx->pc = 0x1351ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949760)));
        ctx->pc = 0x1351F0u;
        goto label_1351f0;
    }
    ctx->pc = 0x1351E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1351F0u);
        ctx->pc = 0x1351ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949760)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1351D0u: goto label_1351d0;
            case 0x1351D4u: goto label_1351d4;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351E0u: goto label_1351e0;
            case 0x1351E4u: goto label_1351e4;
            case 0x1351E8u: goto label_1351e8;
            case 0x1351ECu: goto label_1351ec;
            case 0x1351F0u: goto label_1351f0;
            case 0x1351F4u: goto label_1351f4;
            case 0x1351F8u: goto label_1351f8;
            case 0x1351FCu: goto label_1351fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1351F0u; }
            if (ctx->pc != 0x1351F0u) { return; }
        }
    }
    ctx->pc = 0x1351F0u;
label_1351f0:
    // 0x1351f0: 0xdfbf0000
    ctx->pc = 0x1351f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1351f4:
    // 0x1351f4: 0x3e00008
label_1351f8:
    if (ctx->pc == 0x1351F8u) {
        ctx->pc = 0x1351F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1351FCu;
        goto label_1351fc;
    }
    ctx->pc = 0x1351F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1351F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1351D0u: goto label_1351d0;
            case 0x1351D4u: goto label_1351d4;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351E0u: goto label_1351e0;
            case 0x1351E4u: goto label_1351e4;
            case 0x1351E8u: goto label_1351e8;
            case 0x1351ECu: goto label_1351ec;
            case 0x1351F0u: goto label_1351f0;
            case 0x1351F4u: goto label_1351f4;
            case 0x1351F8u: goto label_1351f8;
            case 0x1351FCu: goto label_1351fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1351FCu;
label_1351fc:
    // 0x1351fc: 0x0
    ctx->pc = 0x1351fcu;
    // NOP
}
