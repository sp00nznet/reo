#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD1E0
// Address: 0x1cd1e0 - 0x1cd250
void sub_001CD1E0_0x1cd1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd1e0u;

    // 0x1cd1e0: 0x27bdfff0
    ctx->pc = 0x1cd1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd1e4: 0x80302d
    ctx->pc = 0x1cd1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1e8: 0xffbf0000
    ctx->pc = 0x1cd1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd1ec: 0x3c010023
    ctx->pc = 0x1cd1ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cd1f0: 0xc07340c
    ctx->pc = 0x1CD1F0u;
    SET_GPR_U32(ctx, 31, 0x1CD1F8u);
    ctx->pc = 0x1CD1F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    ctx->pc = 0x1CD030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD030_0x1cd030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1F8u; }
    }
    if (ctx->pc != 0x1CD1F8u) { return; }
    ctx->pc = 0x1CD1F8u;
    // 0x1cd1f8: 0xc22021
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cd1fc: 0x282d
    ctx->pc = 0x1cd1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd200: 0x3c060034
    ctx->pc = 0x1cd200u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x1cd204: 0x1000000b
    ctx->pc = 0x1CD204u;
    {
        const bool branch_taken_0x1cd204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD208u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5696));
        if (branch_taken_0x1cd204) {
            ctx->pc = 0x1CD234u;
            goto label_1cd234;
        }
    }
    ctx->pc = 0x1CD20Cu;
label_1cd20c:
    // 0x1cd20c: 0x8cc20000
    ctx->pc = 0x1cd20cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cd210: 0x10400006
    ctx->pc = 0x1CD210u;
    {
        const bool branch_taken_0x1cd210 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd210) {
            ctx->pc = 0x1CD22Cu;
            goto label_1cd22c;
        }
    }
    ctx->pc = 0x1CD218u;
    // 0x1cd218: 0x8cc30004
    ctx->pc = 0x1cd218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cd21c: 0x14640003
    ctx->pc = 0x1CD21Cu;
    {
        const bool branch_taken_0x1cd21c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1cd21c) {
            ctx->pc = 0x1CD22Cu;
            goto label_1cd22c;
        }
    }
    ctx->pc = 0x1CD224u;
    // 0x1cd224: 0x10000007
    ctx->pc = 0x1CD224u;
    {
        const bool branch_taken_0x1cd224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD228u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1cd224) {
            ctx->pc = 0x1CD244u;
            goto label_1cd244;
        }
    }
    ctx->pc = 0x1CD22Cu;
label_1cd22c:
    // 0x1cd22c: 0x24a50001
    ctx->pc = 0x1cd22cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd230: 0x24c60010
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_1cd234:
    // 0x1cd234: 0x28a20100
    ctx->pc = 0x1cd234u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x1cd238: 0x1440fff4
    ctx->pc = 0x1CD238u;
    {
        const bool branch_taken_0x1cd238 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD23Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd238) {
            ctx->pc = 0x1CD20Cu;
            goto label_1cd20c;
        }
    }
    ctx->pc = 0x1CD240u;
    // 0x1cd240: 0xdfbf0000
    ctx->pc = 0x1cd240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd244:
    // 0x1cd244: 0x3e00008
    ctx->pc = 0x1CD244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD20Cu: goto label_1cd20c;
            case 0x1CD22Cu: goto label_1cd22c;
            case 0x1CD234u: goto label_1cd234;
            case 0x1CD244u: goto label_1cd244;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD24Cu;
    // 0x1cd24c: 0x0
    ctx->pc = 0x1cd24cu;
    // NOP
}
