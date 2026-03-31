#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135C80
// Address: 0x135c80 - 0x135cf8
void sub_00135C80_0x135c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135c80u;

label_135c80:
    // 0x135c80: 0x27bdfff0
    ctx->pc = 0x135c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135c84:
    // 0x135c84: 0xffb00000
    ctx->pc = 0x135c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135c88:
    // 0x135c88: 0x80802d
    ctx->pc = 0x135c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135c8c:
    // 0x135c8c: 0x16000008
label_135c90:
    if (ctx->pc == 0x135C90u) {
        ctx->pc = 0x135C90u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x135C94u;
        goto label_135c94;
    }
    ctx->pc = 0x135C8Cu;
    {
        const bool branch_taken_0x135c8c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x135C90u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x135c8c) {
            ctx->pc = 0x135CB0u;
            goto label_135cb0;
        }
    }
    ctx->pc = 0x135C94u;
label_135c94:
    // 0x135c94: 0x3c040024
    ctx->pc = 0x135c94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135c98:
    // 0x135c98: 0xdfb00000
    ctx->pc = 0x135c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135c9c:
    // 0x135c9c: 0xdfbf0008
    ctx->pc = 0x135c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135ca0:
    // 0x135ca0: 0x2484b958
    ctx->pc = 0x135ca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949208));
label_135ca4:
    // 0x135ca4: 0x804d480
label_135ca8:
    if (ctx->pc == 0x135CA8u) {
        ctx->pc = 0x135CA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135CACu;
        goto label_135cac;
    }
    ctx->pc = 0x135CA4u;
    ctx->pc = 0x135CA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135CACu;
label_135cac:
    // 0x135cac: 0x0
    ctx->pc = 0x135cacu;
    // NOP
label_135cb0:
    // 0x135cb0: 0x8e020000
    ctx->pc = 0x135cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_135cb4:
    // 0x135cb4: 0x8c420014
    ctx->pc = 0x135cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_135cb8:
    // 0x135cb8: 0x50400009
label_135cbc:
    if (ctx->pc == 0x135CBCu) {
        ctx->pc = 0x135CBCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135CC0u;
        goto label_135cc0;
    }
    ctx->pc = 0x135CB8u;
    {
        const bool branch_taken_0x135cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135cb8) {
            ctx->pc = 0x135CBCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135CE0u;
            goto label_135ce0;
        }
    }
    ctx->pc = 0x135CC0u;
label_135cc0:
    // 0x135cc0: 0x40f809
label_135cc4:
    if (ctx->pc == 0x135CC4u) {
        ctx->pc = 0x135CC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x135CC8u;
        goto label_135cc8;
    }
    ctx->pc = 0x135CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135CC8u);
        ctx->pc = 0x135CC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135C80u: goto label_135c80;
            case 0x135C84u: goto label_135c84;
            case 0x135C88u: goto label_135c88;
            case 0x135C8Cu: goto label_135c8c;
            case 0x135C90u: goto label_135c90;
            case 0x135C94u: goto label_135c94;
            case 0x135C98u: goto label_135c98;
            case 0x135C9Cu: goto label_135c9c;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA4u: goto label_135ca4;
            case 0x135CA8u: goto label_135ca8;
            case 0x135CACu: goto label_135cac;
            case 0x135CB0u: goto label_135cb0;
            case 0x135CB4u: goto label_135cb4;
            case 0x135CB8u: goto label_135cb8;
            case 0x135CBCu: goto label_135cbc;
            case 0x135CC0u: goto label_135cc0;
            case 0x135CC4u: goto label_135cc4;
            case 0x135CC8u: goto label_135cc8;
            case 0x135CCCu: goto label_135ccc;
            case 0x135CD0u: goto label_135cd0;
            case 0x135CD4u: goto label_135cd4;
            case 0x135CD8u: goto label_135cd8;
            case 0x135CDCu: goto label_135cdc;
            case 0x135CE0u: goto label_135ce0;
            case 0x135CE4u: goto label_135ce4;
            case 0x135CE8u: goto label_135ce8;
            case 0x135CECu: goto label_135cec;
            case 0x135CF0u: goto label_135cf0;
            case 0x135CF4u: goto label_135cf4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135CC8u; }
            if (ctx->pc != 0x135CC8u) { return; }
        }
    }
    ctx->pc = 0x135CC8u;
label_135cc8:
    // 0x135cc8: 0x200202d
    ctx->pc = 0x135cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135ccc:
    // 0x135ccc: 0xdfbf0008
    ctx->pc = 0x135cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135cd0:
    // 0x135cd0: 0xdfb00000
    ctx->pc = 0x135cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135cd4:
    // 0x135cd4: 0x804d6b0
label_135cd8:
    if (ctx->pc == 0x135CD8u) {
        ctx->pc = 0x135CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135CDCu;
        goto label_135cdc;
    }
    ctx->pc = 0x135CD4u;
    ctx->pc = 0x135CD8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135AC0u;
    sub_00135AC0_0x135ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x135CDCu;
label_135cdc:
    // 0x135cdc: 0x0
    ctx->pc = 0x135cdcu;
    // NOP
label_135ce0:
    // 0x135ce0: 0xdfb00000
    ctx->pc = 0x135ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135ce4:
    // 0x135ce4: 0xdfbf0008
    ctx->pc = 0x135ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135ce8:
    // 0x135ce8: 0x2484b978
    ctx->pc = 0x135ce8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949240));
label_135cec:
    // 0x135cec: 0x804d480
label_135cf0:
    if (ctx->pc == 0x135CF0u) {
        ctx->pc = 0x135CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135CF4u;
        goto label_135cf4;
    }
    ctx->pc = 0x135CECu;
    ctx->pc = 0x135CF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135CF4u;
label_135cf4:
    // 0x135cf4: 0x0
    ctx->pc = 0x135cf4u;
    // NOP
}
