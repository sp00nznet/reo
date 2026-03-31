#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163C78
// Address: 0x163c78 - 0x163cf0
void sub_00163C78_0x163c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163c78u;

label_163c78:
    // 0x163c78: 0x27bdfff0
    ctx->pc = 0x163c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_163c7c:
    // 0x163c7c: 0xffb00000
    ctx->pc = 0x163c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163c80:
    // 0x163c80: 0x80802d
    ctx->pc = 0x163c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163c84:
    // 0x163c84: 0xffbf0008
    ctx->pc = 0x163c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_163c88:
    // 0x163c88: 0x8e030008
    ctx->pc = 0x163c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163c8c:
    // 0x163c8c: 0x2c620005
    ctx->pc = 0x163c8cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_163c90:
    // 0x163c90: 0x1040000d
label_163c94:
    if (ctx->pc == 0x163C94u) {
        ctx->pc = 0x163C94u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x163C98u;
        goto label_163c98;
    }
    ctx->pc = 0x163C90u;
    {
        const bool branch_taken_0x163c90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163C94u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x163c90) {
            ctx->pc = 0x163CC8u;
            goto label_163cc8;
        }
    }
    ctx->pc = 0x163C98u;
label_163c98:
    // 0x163c98: 0x3c030024
    ctx->pc = 0x163c98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_163c9c:
    // 0x163c9c: 0x621821
    ctx->pc = 0x163c9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163ca0:
    // 0x163ca0: 0x8c630530
    ctx->pc = 0x163ca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 1328)));
label_163ca4:
    // 0x163ca4: 0x600008
label_163ca8:
    if (ctx->pc == 0x163CA8u) {
        ctx->pc = 0x163CACu;
        goto label_163cac;
    }
    ctx->pc = 0x163CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163C78u: goto label_163c78;
            case 0x163C7Cu: goto label_163c7c;
            case 0x163C80u: goto label_163c80;
            case 0x163C84u: goto label_163c84;
            case 0x163C88u: goto label_163c88;
            case 0x163C8Cu: goto label_163c8c;
            case 0x163C90u: goto label_163c90;
            case 0x163C94u: goto label_163c94;
            case 0x163C98u: goto label_163c98;
            case 0x163C9Cu: goto label_163c9c;
            case 0x163CA0u: goto label_163ca0;
            case 0x163CA4u: goto label_163ca4;
            case 0x163CA8u: goto label_163ca8;
            case 0x163CACu: goto label_163cac;
            case 0x163CB0u: goto label_163cb0;
            case 0x163CB4u: goto label_163cb4;
            case 0x163CB8u: goto label_163cb8;
            case 0x163CBCu: goto label_163cbc;
            case 0x163CC0u: goto label_163cc0;
            case 0x163CC4u: goto label_163cc4;
            case 0x163CC8u: goto label_163cc8;
            case 0x163CCCu: goto label_163ccc;
            case 0x163CD0u: goto label_163cd0;
            case 0x163CD4u: goto label_163cd4;
            case 0x163CD8u: goto label_163cd8;
            case 0x163CDCu: goto label_163cdc;
            case 0x163CE0u: goto label_163ce0;
            case 0x163CE4u: goto label_163ce4;
            case 0x163CE8u: goto label_163ce8;
            case 0x163CECu: goto label_163cec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163CACu;
label_163cac:
    // 0x163cac: 0x0
    ctx->pc = 0x163cacu;
    // NOP
label_163cb0:
    // 0x163cb0: 0xc058e3a
label_163cb4:
    if (ctx->pc == 0x163CB4u) {
        ctx->pc = 0x163CB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163CB8u;
        goto label_163cb8;
    }
    ctx->pc = 0x163CB0u;
    SET_GPR_U32(ctx, 31, 0x163CB8u);
    ctx->pc = 0x163CB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1638E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001638E8_0x1638e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CB8u; }
    }
    if (ctx->pc != 0x163CB8u) { return; }
    ctx->pc = 0x163CB8u;
label_163cb8:
    // 0x163cb8: 0x10000003
label_163cbc:
    if (ctx->pc == 0x163CBCu) {
        ctx->pc = 0x163CC0u;
        goto label_163cc0;
    }
    ctx->pc = 0x163CB8u;
    {
        const bool branch_taken_0x163cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x163cb8) {
            ctx->pc = 0x163CC8u;
            goto label_163cc8;
        }
    }
    ctx->pc = 0x163CC0u;
label_163cc0:
    // 0x163cc0: 0xc058efc
label_163cc4:
    if (ctx->pc == 0x163CC4u) {
        ctx->pc = 0x163CC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163CC8u;
        goto label_163cc8;
    }
    ctx->pc = 0x163CC0u;
    SET_GPR_U32(ctx, 31, 0x163CC8u);
    ctx->pc = 0x163CC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163BF0_0x163bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CC8u; }
    }
    if (ctx->pc != 0x163CC8u) { return; }
    ctx->pc = 0x163CC8u;
label_163cc8:
    // 0x163cc8: 0xc058f3c
label_163ccc:
    if (ctx->pc == 0x163CCCu) {
        ctx->pc = 0x163CCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163CD0u;
        goto label_163cd0;
    }
    ctx->pc = 0x163CC8u;
    SET_GPR_U32(ctx, 31, 0x163CD0u);
    ctx->pc = 0x163CCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163CF0_0x163cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CD0u; }
    }
    if (ctx->pc != 0x163CD0u) { return; }
    ctx->pc = 0x163CD0u;
label_163cd0:
    // 0x163cd0: 0xc057eae
label_163cd4:
    if (ctx->pc == 0x163CD4u) {
        ctx->pc = 0x163CD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163CD8u;
        goto label_163cd8;
    }
    ctx->pc = 0x163CD0u;
    SET_GPR_U32(ctx, 31, 0x163CD8u);
    ctx->pc = 0x163CD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FAB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FAB8_0x15fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CD8u; }
    }
    if (ctx->pc != 0x163CD8u) { return; }
    ctx->pc = 0x163CD8u;
label_163cd8:
    // 0x163cd8: 0x102d
    ctx->pc = 0x163cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163cdc:
    // 0x163cdc: 0xdfb00000
    ctx->pc = 0x163cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163ce0:
    // 0x163ce0: 0xdfbf0008
    ctx->pc = 0x163ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163ce4:
    // 0x163ce4: 0x3e00008
label_163ce8:
    if (ctx->pc == 0x163CE8u) {
        ctx->pc = 0x163CE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x163CECu;
        goto label_163cec;
    }
    ctx->pc = 0x163CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163CE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163C78u: goto label_163c78;
            case 0x163C7Cu: goto label_163c7c;
            case 0x163C80u: goto label_163c80;
            case 0x163C84u: goto label_163c84;
            case 0x163C88u: goto label_163c88;
            case 0x163C8Cu: goto label_163c8c;
            case 0x163C90u: goto label_163c90;
            case 0x163C94u: goto label_163c94;
            case 0x163C98u: goto label_163c98;
            case 0x163C9Cu: goto label_163c9c;
            case 0x163CA0u: goto label_163ca0;
            case 0x163CA4u: goto label_163ca4;
            case 0x163CA8u: goto label_163ca8;
            case 0x163CACu: goto label_163cac;
            case 0x163CB0u: goto label_163cb0;
            case 0x163CB4u: goto label_163cb4;
            case 0x163CB8u: goto label_163cb8;
            case 0x163CBCu: goto label_163cbc;
            case 0x163CC0u: goto label_163cc0;
            case 0x163CC4u: goto label_163cc4;
            case 0x163CC8u: goto label_163cc8;
            case 0x163CCCu: goto label_163ccc;
            case 0x163CD0u: goto label_163cd0;
            case 0x163CD4u: goto label_163cd4;
            case 0x163CD8u: goto label_163cd8;
            case 0x163CDCu: goto label_163cdc;
            case 0x163CE0u: goto label_163ce0;
            case 0x163CE4u: goto label_163ce4;
            case 0x163CE8u: goto label_163ce8;
            case 0x163CECu: goto label_163cec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163CECu;
label_163cec:
    // 0x163cec: 0x0
    ctx->pc = 0x163cecu;
    // NOP
}
