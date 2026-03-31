#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_122e90
// Address: 0x122e90 - 0x122ec0
void entry_122e90_0x122ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122e90u;

label_122e90:
    // 0x122e90: 0x27bdfff0
    ctx->pc = 0x122e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122e94:
    // 0x122e94: 0xffbf0000
    ctx->pc = 0x122e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122e98:
    // 0x122e98: 0x8c8200bc
    ctx->pc = 0x122e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_122e9c:
    // 0x122e9c: 0x10400005
label_122ea0:
    if (ctx->pc == 0x122EA0u) {
        ctx->pc = 0x122EA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122EA4u;
        goto label_122ea4;
    }
    ctx->pc = 0x122E9Cu;
    {
        const bool branch_taken_0x122e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122EA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122e9c) {
            ctx->pc = 0x122EB4u;
            goto label_122eb4;
        }
    }
    ctx->pc = 0x122EA4u;
label_122ea4:
    // 0x122ea4: 0x3c020021
    ctx->pc = 0x122ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_122ea8:
    // 0x122ea8: 0x8c43b71c
    ctx->pc = 0x122ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948636)));
label_122eac:
    // 0x122eac: 0x60f809
label_122eb0:
    if (ctx->pc == 0x122EB0u) {
        ctx->pc = 0x122EB4u;
        goto label_122eb4;
    }
    ctx->pc = 0x122EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122EB4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122EB4u; }
            if (ctx->pc != 0x122EB4u) { return; }
        }
    }
    ctx->pc = 0x122EB4u;
label_122eb4:
    // 0x122eb4: 0xdfbf0000
    ctx->pc = 0x122eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122eb8:
    // 0x122eb8: 0x3e00008
label_122ebc:
    if (ctx->pc == 0x122EBCu) {
        ctx->pc = 0x122EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122EC0u;
        goto label_fallthrough_0x122eb8;
    }
    ctx->pc = 0x122EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            default: break;
        }
        return;
    }
label_fallthrough_0x122eb8:
    ctx->pc = 0x122EC0u;
}
