#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166A20
// Address: 0x166a20 - 0x166a88
void sub_00166A20_0x166a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166a20u;

label_166a20:
    // 0x166a20: 0x510c0
    ctx->pc = 0x166a20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_166a24:
    // 0x166a24: 0x27bdfff0
    ctx->pc = 0x166a24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_166a28:
    // 0x166a28: 0x451023
    ctx->pc = 0x166a28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_166a2c:
    // 0x166a2c: 0xffb00000
    ctx->pc = 0x166a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166a30:
    // 0x166a30: 0x21080
    ctx->pc = 0x166a30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_166a34:
    // 0x166a34: 0xffbf0008
    ctx->pc = 0x166a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_166a38:
    // 0x166a38: 0x451021
    ctx->pc = 0x166a38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_166a3c:
    // 0x166a3c: 0x24841140
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4416));
label_166a40:
    // 0x166a40: 0x21080
    ctx->pc = 0x166a40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_166a44:
    // 0x166a44: 0x24060005
    ctx->pc = 0x166a44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
label_166a48:
    // 0x166a48: 0x822021
    ctx->pc = 0x166a48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_166a4c:
    // 0x166a4c: 0x8c830000
    ctx->pc = 0x166a4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166a50:
    // 0x166a50: 0x14660009
label_166a54:
    if (ctx->pc == 0x166A54u) {
        ctx->pc = 0x166A54u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x166A58u;
        goto label_166a58;
    }
    ctx->pc = 0x166A50u;
    {
        const bool branch_taken_0x166a50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x166A54u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x166a50) {
            ctx->pc = 0x166A78u;
            goto label_166a78;
        }
    }
    ctx->pc = 0x166A58u;
label_166a58:
    // 0x166a58: 0x8e020004
    ctx->pc = 0x166a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_166a5c:
    // 0x166a5c: 0x10400006
label_166a60:
    if (ctx->pc == 0x166A60u) {
        ctx->pc = 0x166A60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166A64u;
        goto label_166a64;
    }
    ctx->pc = 0x166A5Cu;
    {
        const bool branch_taken_0x166a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166A60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166a5c) {
            ctx->pc = 0x166A78u;
            goto label_166a78;
        }
    }
    ctx->pc = 0x166A64u;
label_166a64:
    // 0x166a64: 0x8c420000
    ctx->pc = 0x166a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166a68:
    // 0x166a68: 0x8c43000c
    ctx->pc = 0x166a68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_166a6c:
    // 0x166a6c: 0x60f809
label_166a70:
    if (ctx->pc == 0x166A70u) {
        ctx->pc = 0x166A74u;
        goto label_166a74;
    }
    ctx->pc = 0x166A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166A74u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166A20u: goto label_166a20;
            case 0x166A24u: goto label_166a24;
            case 0x166A28u: goto label_166a28;
            case 0x166A2Cu: goto label_166a2c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A3Cu: goto label_166a3c;
            case 0x166A40u: goto label_166a40;
            case 0x166A44u: goto label_166a44;
            case 0x166A48u: goto label_166a48;
            case 0x166A4Cu: goto label_166a4c;
            case 0x166A50u: goto label_166a50;
            case 0x166A54u: goto label_166a54;
            case 0x166A58u: goto label_166a58;
            case 0x166A5Cu: goto label_166a5c;
            case 0x166A60u: goto label_166a60;
            case 0x166A64u: goto label_166a64;
            case 0x166A68u: goto label_166a68;
            case 0x166A6Cu: goto label_166a6c;
            case 0x166A70u: goto label_166a70;
            case 0x166A74u: goto label_166a74;
            case 0x166A78u: goto label_166a78;
            case 0x166A7Cu: goto label_166a7c;
            case 0x166A80u: goto label_166a80;
            case 0x166A84u: goto label_166a84;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166A74u; }
            if (ctx->pc != 0x166A74u) { return; }
        }
    }
    ctx->pc = 0x166A74u;
label_166a74:
    // 0x166a74: 0xae000004
    ctx->pc = 0x166a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_166a78:
    // 0x166a78: 0xdfb00000
    ctx->pc = 0x166a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166a7c:
    // 0x166a7c: 0xdfbf0008
    ctx->pc = 0x166a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166a80:
    // 0x166a80: 0x3e00008
label_166a84:
    if (ctx->pc == 0x166A84u) {
        ctx->pc = 0x166A84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x166A88u;
        goto label_fallthrough_0x166a80;
    }
    ctx->pc = 0x166A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166A84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166A20u: goto label_166a20;
            case 0x166A24u: goto label_166a24;
            case 0x166A28u: goto label_166a28;
            case 0x166A2Cu: goto label_166a2c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A3Cu: goto label_166a3c;
            case 0x166A40u: goto label_166a40;
            case 0x166A44u: goto label_166a44;
            case 0x166A48u: goto label_166a48;
            case 0x166A4Cu: goto label_166a4c;
            case 0x166A50u: goto label_166a50;
            case 0x166A54u: goto label_166a54;
            case 0x166A58u: goto label_166a58;
            case 0x166A5Cu: goto label_166a5c;
            case 0x166A60u: goto label_166a60;
            case 0x166A64u: goto label_166a64;
            case 0x166A68u: goto label_166a68;
            case 0x166A6Cu: goto label_166a6c;
            case 0x166A70u: goto label_166a70;
            case 0x166A74u: goto label_166a74;
            case 0x166A78u: goto label_166a78;
            case 0x166A7Cu: goto label_166a7c;
            case 0x166A80u: goto label_166a80;
            case 0x166A84u: goto label_166a84;
            default: break;
        }
        return;
    }
label_fallthrough_0x166a80:
    ctx->pc = 0x166A88u;
}
