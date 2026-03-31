#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163B30
// Address: 0x163b30 - 0x163bf0
void sub_00163B30_0x163b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163b30u;

label_163b30:
    // 0x163b30: 0x27bdfff0
    ctx->pc = 0x163b30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_163b34:
    // 0x163b34: 0xffb00000
    ctx->pc = 0x163b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163b38:
    // 0x163b38: 0x80802d
    ctx->pc = 0x163b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163b3c:
    // 0x163b3c: 0xffbf0008
    ctx->pc = 0x163b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_163b40:
    // 0x163b40: 0xc0591ca
label_163b44:
    if (ctx->pc == 0x163B44u) {
        ctx->pc = 0x163B44u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x163B48u;
        goto label_163b48;
    }
    ctx->pc = 0x163B40u;
    SET_GPR_U32(ctx, 31, 0x163B48u);
    ctx->pc = 0x163B44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x164728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164728_0x164728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B48u; }
    }
    if (ctx->pc != 0x163B48u) { return; }
    ctx->pc = 0x163B48u;
label_163b48:
    // 0x163b48: 0x24030002
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_163b4c:
    // 0x163b4c: 0x54430004
label_163b50:
    if (ctx->pc == 0x163B50u) {
        ctx->pc = 0x163B50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->pc = 0x163B54u;
        goto label_163b54;
    }
    ctx->pc = 0x163B4Cu;
    {
        const bool branch_taken_0x163b4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x163b4c) {
            ctx->pc = 0x163B50u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->pc = 0x163B60u;
            goto label_163b60;
        }
    }
    ctx->pc = 0x163B54u;
label_163b54:
    // 0x163b54: 0x10000021
label_163b58:
    if (ctx->pc == 0x163B58u) {
        ctx->pc = 0x163B58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x163B5Cu;
        goto label_163b5c;
    }
    ctx->pc = 0x163B54u;
    {
        const bool branch_taken_0x163b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163B58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x163b54) {
            ctx->pc = 0x163BDCu;
            goto label_163bdc;
        }
    }
    ctx->pc = 0x163B5Cu;
label_163b5c:
    // 0x163b5c: 0x0
    ctx->pc = 0x163b5cu;
    // NOP
label_163b60:
    // 0x163b60: 0x50800006
label_163b64:
    if (ctx->pc == 0x163B64u) {
        ctx->pc = 0x163B64u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->pc = 0x163B68u;
        goto label_163b68;
    }
    ctx->pc = 0x163B60u;
    {
        const bool branch_taken_0x163b60 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x163b60) {
            ctx->pc = 0x163B64u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->pc = 0x163B7Cu;
            goto label_163b7c;
        }
    }
    ctx->pc = 0x163B68u;
label_163b68:
    // 0x163b68: 0x8c830000
    ctx->pc = 0x163b68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_163b6c:
    // 0x163b6c: 0x8c620014
    ctx->pc = 0x163b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_163b70:
    // 0x163b70: 0x40f809
label_163b74:
    if (ctx->pc == 0x163B74u) {
        ctx->pc = 0x163B78u;
        goto label_163b78;
    }
    ctx->pc = 0x163B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163B78u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163B30u: goto label_163b30;
            case 0x163B34u: goto label_163b34;
            case 0x163B38u: goto label_163b38;
            case 0x163B3Cu: goto label_163b3c;
            case 0x163B40u: goto label_163b40;
            case 0x163B44u: goto label_163b44;
            case 0x163B48u: goto label_163b48;
            case 0x163B4Cu: goto label_163b4c;
            case 0x163B50u: goto label_163b50;
            case 0x163B54u: goto label_163b54;
            case 0x163B58u: goto label_163b58;
            case 0x163B5Cu: goto label_163b5c;
            case 0x163B60u: goto label_163b60;
            case 0x163B64u: goto label_163b64;
            case 0x163B68u: goto label_163b68;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B70u: goto label_163b70;
            case 0x163B74u: goto label_163b74;
            case 0x163B78u: goto label_163b78;
            case 0x163B7Cu: goto label_163b7c;
            case 0x163B80u: goto label_163b80;
            case 0x163B84u: goto label_163b84;
            case 0x163B88u: goto label_163b88;
            case 0x163B8Cu: goto label_163b8c;
            case 0x163B90u: goto label_163b90;
            case 0x163B94u: goto label_163b94;
            case 0x163B98u: goto label_163b98;
            case 0x163B9Cu: goto label_163b9c;
            case 0x163BA0u: goto label_163ba0;
            case 0x163BA4u: goto label_163ba4;
            case 0x163BA8u: goto label_163ba8;
            case 0x163BACu: goto label_163bac;
            case 0x163BB0u: goto label_163bb0;
            case 0x163BB4u: goto label_163bb4;
            case 0x163BB8u: goto label_163bb8;
            case 0x163BBCu: goto label_163bbc;
            case 0x163BC0u: goto label_163bc0;
            case 0x163BC4u: goto label_163bc4;
            case 0x163BC8u: goto label_163bc8;
            case 0x163BCCu: goto label_163bcc;
            case 0x163BD0u: goto label_163bd0;
            case 0x163BD4u: goto label_163bd4;
            case 0x163BD8u: goto label_163bd8;
            case 0x163BDCu: goto label_163bdc;
            case 0x163BE0u: goto label_163be0;
            case 0x163BE4u: goto label_163be4;
            case 0x163BE8u: goto label_163be8;
            case 0x163BECu: goto label_163bec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163B78u; }
            if (ctx->pc != 0x163B78u) { return; }
        }
    }
    ctx->pc = 0x163B78u;
label_163b78:
    // 0x163b78: 0x8e050110
    ctx->pc = 0x163b78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_163b7c:
    // 0x163b7c: 0x8e040044
    ctx->pc = 0x163b7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_163b80:
    // 0x163b80: 0x8e06011c
    ctx->pc = 0x163b80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_163b84:
    // 0x163b84: 0x8e070120
    ctx->pc = 0x163b84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_163b88:
    // 0x163b88: 0xc059192
label_163b8c:
    if (ctx->pc == 0x163B8Cu) {
        ctx->pc = 0x163B8Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->pc = 0x163B90u;
        goto label_163b90;
    }
    ctx->pc = 0x163B88u;
    SET_GPR_U32(ctx, 31, 0x163B90u);
    ctx->pc = 0x163B8Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->pc = 0x164648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164648_0x164648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B90u; }
    }
    if (ctx->pc != 0x163B90u) { return; }
    ctx->pc = 0x163B90u;
label_163b90:
    // 0x163b90: 0xc0591b0
label_163b94:
    if (ctx->pc == 0x163B94u) {
        ctx->pc = 0x163B94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x163B98u;
        goto label_163b98;
    }
    ctx->pc = 0x163B90u;
    SET_GPR_U32(ctx, 31, 0x163B98u);
    ctx->pc = 0x163B94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x1646C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001646C0_0x1646c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B98u; }
    }
    if (ctx->pc != 0x163B98u) { return; }
    ctx->pc = 0x163B98u;
label_163b98:
    // 0x163b98: 0x2403ffff
    ctx->pc = 0x163b98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_163b9c:
    // 0x163b9c: 0x1443000c
label_163ba0:
    if (ctx->pc == 0x163BA0u) {
        ctx->pc = 0x163BA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163BA4u;
        goto label_163ba4;
    }
    ctx->pc = 0x163B9Cu;
    {
        const bool branch_taken_0x163b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x163BA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163b9c) {
            ctx->pc = 0x163BD0u;
            goto label_163bd0;
        }
    }
    ctx->pc = 0x163BA4u;
label_163ba4:
    // 0x163ba4: 0x24020004
    ctx->pc = 0x163ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_163ba8:
    // 0x163ba8: 0x2404ff9a
    ctx->pc = 0x163ba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967194));
label_163bac:
    // 0x163bac: 0xc057abc
label_163bb0:
    if (ctx->pc == 0x163BB0u) {
        ctx->pc = 0x163BB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x163BB4u;
        goto label_163bb4;
    }
    ctx->pc = 0x163BACu;
    SET_GPR_U32(ctx, 31, 0x163BB4u);
    ctx->pc = 0x163BB0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BB4u; }
    }
    if (ctx->pc != 0x163BB4u) { return; }
    ctx->pc = 0x163BB4u;
label_163bb4:
    // 0x163bb4: 0x3c040024
    ctx->pc = 0x163bb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_163bb8:
    // 0x163bb8: 0x8e050110
    ctx->pc = 0x163bb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_163bbc:
    // 0x163bbc: 0xc058dd4
label_163bc0:
    if (ctx->pc == 0x163BC0u) {
        ctx->pc = 0x163BC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1232));
        ctx->pc = 0x163BC4u;
        goto label_163bc4;
    }
    ctx->pc = 0x163BBCu;
    SET_GPR_U32(ctx, 31, 0x163BC4u);
    ctx->pc = 0x163BC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1232));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BC4u; }
    }
    if (ctx->pc != 0x163BC4u) { return; }
    ctx->pc = 0x163BC4u;
label_163bc4:
    // 0x163bc4: 0xae000118
    ctx->pc = 0x163bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_163bc8:
    // 0x163bc8: 0x10000004
label_163bcc:
    if (ctx->pc == 0x163BCCu) {
        ctx->pc = 0x163BCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x163BD0u;
        goto label_163bd0;
    }
    ctx->pc = 0x163BC8u;
    {
        const bool branch_taken_0x163bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163BCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x163bc8) {
            ctx->pc = 0x163BDCu;
            goto label_163bdc;
        }
    }
    ctx->pc = 0x163BD0u;
label_163bd0:
    // 0x163bd0: 0xc056fea
label_163bd4:
    if (ctx->pc == 0x163BD4u) {
        ctx->pc = 0x163BD8u;
        goto label_163bd8;
    }
    ctx->pc = 0x163BD0u;
    SET_GPR_U32(ctx, 31, 0x163BD8u);
    ctx->pc = 0x15BFA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BFA8_0x15bfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD8u; }
    }
    if (ctx->pc != 0x163BD8u) { return; }
    ctx->pc = 0x163BD8u;
label_163bd8:
    // 0x163bd8: 0x24020001
    ctx->pc = 0x163bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_163bdc:
    // 0x163bdc: 0xdfb00000
    ctx->pc = 0x163bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163be0:
    // 0x163be0: 0xdfbf0008
    ctx->pc = 0x163be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163be4:
    // 0x163be4: 0x3e00008
label_163be8:
    if (ctx->pc == 0x163BE8u) {
        ctx->pc = 0x163BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x163BECu;
        goto label_163bec;
    }
    ctx->pc = 0x163BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163B30u: goto label_163b30;
            case 0x163B34u: goto label_163b34;
            case 0x163B38u: goto label_163b38;
            case 0x163B3Cu: goto label_163b3c;
            case 0x163B40u: goto label_163b40;
            case 0x163B44u: goto label_163b44;
            case 0x163B48u: goto label_163b48;
            case 0x163B4Cu: goto label_163b4c;
            case 0x163B50u: goto label_163b50;
            case 0x163B54u: goto label_163b54;
            case 0x163B58u: goto label_163b58;
            case 0x163B5Cu: goto label_163b5c;
            case 0x163B60u: goto label_163b60;
            case 0x163B64u: goto label_163b64;
            case 0x163B68u: goto label_163b68;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B70u: goto label_163b70;
            case 0x163B74u: goto label_163b74;
            case 0x163B78u: goto label_163b78;
            case 0x163B7Cu: goto label_163b7c;
            case 0x163B80u: goto label_163b80;
            case 0x163B84u: goto label_163b84;
            case 0x163B88u: goto label_163b88;
            case 0x163B8Cu: goto label_163b8c;
            case 0x163B90u: goto label_163b90;
            case 0x163B94u: goto label_163b94;
            case 0x163B98u: goto label_163b98;
            case 0x163B9Cu: goto label_163b9c;
            case 0x163BA0u: goto label_163ba0;
            case 0x163BA4u: goto label_163ba4;
            case 0x163BA8u: goto label_163ba8;
            case 0x163BACu: goto label_163bac;
            case 0x163BB0u: goto label_163bb0;
            case 0x163BB4u: goto label_163bb4;
            case 0x163BB8u: goto label_163bb8;
            case 0x163BBCu: goto label_163bbc;
            case 0x163BC0u: goto label_163bc0;
            case 0x163BC4u: goto label_163bc4;
            case 0x163BC8u: goto label_163bc8;
            case 0x163BCCu: goto label_163bcc;
            case 0x163BD0u: goto label_163bd0;
            case 0x163BD4u: goto label_163bd4;
            case 0x163BD8u: goto label_163bd8;
            case 0x163BDCu: goto label_163bdc;
            case 0x163BE0u: goto label_163be0;
            case 0x163BE4u: goto label_163be4;
            case 0x163BE8u: goto label_163be8;
            case 0x163BECu: goto label_163bec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163BECu;
label_163bec:
    // 0x163bec: 0x0
    ctx->pc = 0x163becu;
    // NOP
}
