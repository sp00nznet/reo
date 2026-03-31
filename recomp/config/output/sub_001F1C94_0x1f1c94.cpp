#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F1C94
// Address: 0x1f1c94 - 0x1f1d00
void sub_001F1C94_0x1f1c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f1c94u;

label_1f1c94:
    // 0x1f1c94: 0x27bdffe0
    ctx->pc = 0x1f1c94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f1c98:
    // 0x1f1c98: 0xffbe0010
    ctx->pc = 0x1f1c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_1f1c9c:
    // 0x1f1c9c: 0xffbf0018
    ctx->pc = 0x1f1c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f1ca0:
    // 0x1f1ca0: 0x3a0f02d
    ctx->pc = 0x1f1ca0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ca4:
    // 0x1f1ca4: 0xafc40004
    ctx->pc = 0x1f1ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
label_1f1ca8:
    // 0x1f1ca8: 0xafc00000
    ctx->pc = 0x1f1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_1f1cac:
    // 0x1f1cac: 0x8fc30004
    ctx->pc = 0x1f1cacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f1cb0:
    // 0x1f1cb0: 0x8c620008
    ctx->pc = 0x1f1cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f1cb4:
    // 0x1f1cb4: 0x1040000a
label_1f1cb8:
    if (ctx->pc == 0x1F1CB8u) {
        ctx->pc = 0x1F1CBCu;
        goto label_1f1cbc;
    }
    ctx->pc = 0x1F1CB4u;
    {
        const bool branch_taken_0x1f1cb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1cb4) {
            ctx->pc = 0x1F1CE0u;
            goto label_1f1ce0;
        }
    }
    ctx->pc = 0x1F1CBCu;
label_1f1cbc:
    // 0x1f1cbc: 0x8fc40004
    ctx->pc = 0x1f1cbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f1cc0:
    // 0x1f1cc0: 0x24820010
    ctx->pc = 0x1f1cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
label_1f1cc4:
    // 0x1f1cc4: 0x8fc40004
    ctx->pc = 0x1f1cc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f1cc8:
    // 0x1f1cc8: 0x8c830008
    ctx->pc = 0x1f1cc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f1ccc:
    // 0x1f1ccc: 0x40202d
    ctx->pc = 0x1f1cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1cd0:
    // 0x1f1cd0: 0x24050001
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1f1cd4:
    // 0x1f1cd4: 0x60f809
label_1f1cd8:
    if (ctx->pc == 0x1F1CD8u) {
        ctx->pc = 0x1F1CDCu;
        goto label_1f1cdc;
    }
    ctx->pc = 0x1F1CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F1CDCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1C94u: goto label_1f1c94;
            case 0x1F1C98u: goto label_1f1c98;
            case 0x1F1C9Cu: goto label_1f1c9c;
            case 0x1F1CA0u: goto label_1f1ca0;
            case 0x1F1CA4u: goto label_1f1ca4;
            case 0x1F1CA8u: goto label_1f1ca8;
            case 0x1F1CACu: goto label_1f1cac;
            case 0x1F1CB0u: goto label_1f1cb0;
            case 0x1F1CB4u: goto label_1f1cb4;
            case 0x1F1CB8u: goto label_1f1cb8;
            case 0x1F1CBCu: goto label_1f1cbc;
            case 0x1F1CC0u: goto label_1f1cc0;
            case 0x1F1CC4u: goto label_1f1cc4;
            case 0x1F1CC8u: goto label_1f1cc8;
            case 0x1F1CCCu: goto label_1f1ccc;
            case 0x1F1CD0u: goto label_1f1cd0;
            case 0x1F1CD4u: goto label_1f1cd4;
            case 0x1F1CD8u: goto label_1f1cd8;
            case 0x1F1CDCu: goto label_1f1cdc;
            case 0x1F1CE0u: goto label_1f1ce0;
            case 0x1F1CE4u: goto label_1f1ce4;
            case 0x1F1CE8u: goto label_1f1ce8;
            case 0x1F1CECu: goto label_1f1cec;
            case 0x1F1CF0u: goto label_1f1cf0;
            case 0x1F1CF4u: goto label_1f1cf4;
            case 0x1F1CF8u: goto label_1f1cf8;
            case 0x1F1CFCu: goto label_1f1cfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CDCu; }
            if (ctx->pc != 0x1F1CDCu) { return; }
        }
    }
    ctx->pc = 0x1F1CDCu;
label_1f1cdc:
    // 0x1f1cdc: 0xafc20000
    ctx->pc = 0x1f1cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_1f1ce0:
    // 0x1f1ce0: 0x8fc20000
    ctx->pc = 0x1f1ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1ce4:
    // 0x1f1ce4: 0x3c0e82d
    ctx->pc = 0x1f1ce4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ce8:
    // 0x1f1ce8: 0xdfbe0010
    ctx->pc = 0x1f1ce8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1cec:
    // 0x1f1cec: 0xdfbf0018
    ctx->pc = 0x1f1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f1cf0:
    // 0x1f1cf0: 0x27bd0020
    ctx->pc = 0x1f1cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
label_1f1cf4:
    // 0x1f1cf4: 0x3e00008
label_1f1cf8:
    if (ctx->pc == 0x1F1CF8u) {
        ctx->pc = 0x1F1CFCu;
        goto label_1f1cfc;
    }
    ctx->pc = 0x1F1CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1C94u: goto label_1f1c94;
            case 0x1F1C98u: goto label_1f1c98;
            case 0x1F1C9Cu: goto label_1f1c9c;
            case 0x1F1CA0u: goto label_1f1ca0;
            case 0x1F1CA4u: goto label_1f1ca4;
            case 0x1F1CA8u: goto label_1f1ca8;
            case 0x1F1CACu: goto label_1f1cac;
            case 0x1F1CB0u: goto label_1f1cb0;
            case 0x1F1CB4u: goto label_1f1cb4;
            case 0x1F1CB8u: goto label_1f1cb8;
            case 0x1F1CBCu: goto label_1f1cbc;
            case 0x1F1CC0u: goto label_1f1cc0;
            case 0x1F1CC4u: goto label_1f1cc4;
            case 0x1F1CC8u: goto label_1f1cc8;
            case 0x1F1CCCu: goto label_1f1ccc;
            case 0x1F1CD0u: goto label_1f1cd0;
            case 0x1F1CD4u: goto label_1f1cd4;
            case 0x1F1CD8u: goto label_1f1cd8;
            case 0x1F1CDCu: goto label_1f1cdc;
            case 0x1F1CE0u: goto label_1f1ce0;
            case 0x1F1CE4u: goto label_1f1ce4;
            case 0x1F1CE8u: goto label_1f1ce8;
            case 0x1F1CECu: goto label_1f1cec;
            case 0x1F1CF0u: goto label_1f1cf0;
            case 0x1F1CF4u: goto label_1f1cf4;
            case 0x1F1CF8u: goto label_1f1cf8;
            case 0x1F1CFCu: goto label_1f1cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1CFCu;
label_1f1cfc:
    // 0x1f1cfc: 0x0
    ctx->pc = 0x1f1cfcu;
    // NOP
}
