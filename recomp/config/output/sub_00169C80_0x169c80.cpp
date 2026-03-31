#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169C80
// Address: 0x169c80 - 0x169cc0
void sub_00169C80_0x169c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169c80u;

label_169c80:
    // 0x169c80: 0x27bdfff0
    ctx->pc = 0x169c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_169c84:
    // 0x169c84: 0xffbf0000
    ctx->pc = 0x169c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169c88:
    // 0x169c88: 0x8c820008
    ctx->pc = 0x169c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_169c8c:
    // 0x169c8c: 0x14400002
label_169c90:
    if (ctx->pc == 0x169C90u) {
        ctx->pc = 0x169C90u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169C94u;
        goto label_169c94;
    }
    ctx->pc = 0x169C8Cu;
    {
        const bool branch_taken_0x169c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x169C90u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169c8c) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C94u;
label_169c94:
    // 0x169c94: 0xac830008
    ctx->pc = 0x169c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_169c98:
    // 0x169c98: 0x10600007
label_169c9c:
    if (ctx->pc == 0x169C9Cu) {
        ctx->pc = 0x169C9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x169CA0u;
        goto label_169ca0;
    }
    ctx->pc = 0x169C98u;
    {
        const bool branch_taken_0x169c98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x169C9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x169c98) {
            ctx->pc = 0x169CB8u;
            goto label_169cb8;
        }
    }
    ctx->pc = 0x169CA0u;
label_169ca0:
    // 0x169ca0: 0x8c820000
    ctx->pc = 0x169ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169ca4:
    // 0x169ca4: 0x10400004
label_169ca8:
    if (ctx->pc == 0x169CA8u) {
        ctx->pc = 0x169CACu;
        goto label_169cac;
    }
    ctx->pc = 0x169CA4u;
    {
        const bool branch_taken_0x169ca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x169ca4) {
            ctx->pc = 0x169CB8u;
            goto label_169cb8;
        }
    }
    ctx->pc = 0x169CACu;
label_169cac:
    // 0x169cac: 0x40f809
label_169cb0:
    if (ctx->pc == 0x169CB0u) {
        ctx->pc = 0x169CB0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x169CB4u;
        goto label_169cb4;
    }
    ctx->pc = 0x169CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x169CB4u);
        ctx->pc = 0x169CB0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169C80u: goto label_169c80;
            case 0x169C84u: goto label_169c84;
            case 0x169C88u: goto label_169c88;
            case 0x169C8Cu: goto label_169c8c;
            case 0x169C90u: goto label_169c90;
            case 0x169C94u: goto label_169c94;
            case 0x169C98u: goto label_169c98;
            case 0x169C9Cu: goto label_169c9c;
            case 0x169CA0u: goto label_169ca0;
            case 0x169CA4u: goto label_169ca4;
            case 0x169CA8u: goto label_169ca8;
            case 0x169CACu: goto label_169cac;
            case 0x169CB0u: goto label_169cb0;
            case 0x169CB4u: goto label_169cb4;
            case 0x169CB8u: goto label_169cb8;
            case 0x169CBCu: goto label_169cbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169CB4u; }
            if (ctx->pc != 0x169CB4u) { return; }
        }
    }
    ctx->pc = 0x169CB4u;
label_169cb4:
    // 0x169cb4: 0xdfbf0000
    ctx->pc = 0x169cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169cb8:
    // 0x169cb8: 0x3e00008
label_169cbc:
    if (ctx->pc == 0x169CBCu) {
        ctx->pc = 0x169CBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x169CC0u;
        goto label_fallthrough_0x169cb8;
    }
    ctx->pc = 0x169CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169CBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169C80u: goto label_169c80;
            case 0x169C84u: goto label_169c84;
            case 0x169C88u: goto label_169c88;
            case 0x169C8Cu: goto label_169c8c;
            case 0x169C90u: goto label_169c90;
            case 0x169C94u: goto label_169c94;
            case 0x169C98u: goto label_169c98;
            case 0x169C9Cu: goto label_169c9c;
            case 0x169CA0u: goto label_169ca0;
            case 0x169CA4u: goto label_169ca4;
            case 0x169CA8u: goto label_169ca8;
            case 0x169CACu: goto label_169cac;
            case 0x169CB0u: goto label_169cb0;
            case 0x169CB4u: goto label_169cb4;
            case 0x169CB8u: goto label_169cb8;
            case 0x169CBCu: goto label_169cbc;
            default: break;
        }
        return;
    }
label_fallthrough_0x169cb8:
    ctx->pc = 0x169CC0u;
}
