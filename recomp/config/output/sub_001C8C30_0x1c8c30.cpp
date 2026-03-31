#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8C30
// Address: 0x1c8c30 - 0x1c8d60
void sub_001C8C30_0x1c8c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8c30u;

label_1c8c30:
    // 0x1c8c30: 0x27bdfff0
    ctx->pc = 0x1c8c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c8c34:
    // 0x1c8c34: 0x3c010034
    ctx->pc = 0x1c8c34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8c38:
    // 0x1c8c38: 0xffbf0000
    ctx->pc = 0x1c8c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8c3c:
    // 0x1c8c3c: 0x8022b650
    ctx->pc = 0x1c8c3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948432)));
label_1c8c40:
    // 0x1c8c40: 0x2c410006
    ctx->pc = 0x1c8c40u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 6));
label_1c8c44:
    // 0x1c8c44: 0x1020003a
label_1c8c48:
    if (ctx->pc == 0x1C8C48u) {
        ctx->pc = 0x1C8C4Cu;
        goto label_1c8c4c;
    }
    ctx->pc = 0x1C8C44u;
    {
        const bool branch_taken_0x1c8c44 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8c44) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8C4Cu;
label_1c8c4c:
    // 0x1c8c4c: 0x3c030025
    ctx->pc = 0x1c8c4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
label_1c8c50:
    // 0x1c8c50: 0x21080
    ctx->pc = 0x1c8c50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1c8c54:
    // 0x1c8c54: 0x24632de0
    ctx->pc = 0x1c8c54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11744));
label_1c8c58:
    // 0x1c8c58: 0x431021
    ctx->pc = 0x1c8c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8c5c:
    // 0x1c8c5c: 0x8c420000
    ctx->pc = 0x1c8c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8c60:
    // 0x1c8c60: 0x400008
label_1c8c64:
    if (ctx->pc == 0x1C8C64u) {
        ctx->pc = 0x1C8C68u;
        goto label_1c8c68;
    }
    ctx->pc = 0x1C8C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8C30u: goto label_1c8c30;
            case 0x1C8C34u: goto label_1c8c34;
            case 0x1C8C38u: goto label_1c8c38;
            case 0x1C8C3Cu: goto label_1c8c3c;
            case 0x1C8C40u: goto label_1c8c40;
            case 0x1C8C44u: goto label_1c8c44;
            case 0x1C8C48u: goto label_1c8c48;
            case 0x1C8C4Cu: goto label_1c8c4c;
            case 0x1C8C50u: goto label_1c8c50;
            case 0x1C8C54u: goto label_1c8c54;
            case 0x1C8C58u: goto label_1c8c58;
            case 0x1C8C5Cu: goto label_1c8c5c;
            case 0x1C8C60u: goto label_1c8c60;
            case 0x1C8C64u: goto label_1c8c64;
            case 0x1C8C68u: goto label_1c8c68;
            case 0x1C8C6Cu: goto label_1c8c6c;
            case 0x1C8C70u: goto label_1c8c70;
            case 0x1C8C74u: goto label_1c8c74;
            case 0x1C8C78u: goto label_1c8c78;
            case 0x1C8C7Cu: goto label_1c8c7c;
            case 0x1C8C80u: goto label_1c8c80;
            case 0x1C8C84u: goto label_1c8c84;
            case 0x1C8C88u: goto label_1c8c88;
            case 0x1C8C8Cu: goto label_1c8c8c;
            case 0x1C8C90u: goto label_1c8c90;
            case 0x1C8C94u: goto label_1c8c94;
            case 0x1C8C98u: goto label_1c8c98;
            case 0x1C8C9Cu: goto label_1c8c9c;
            case 0x1C8CA0u: goto label_1c8ca0;
            case 0x1C8CA4u: goto label_1c8ca4;
            case 0x1C8CA8u: goto label_1c8ca8;
            case 0x1C8CACu: goto label_1c8cac;
            case 0x1C8CB0u: goto label_1c8cb0;
            case 0x1C8CB4u: goto label_1c8cb4;
            case 0x1C8CB8u: goto label_1c8cb8;
            case 0x1C8CBCu: goto label_1c8cbc;
            case 0x1C8CC0u: goto label_1c8cc0;
            case 0x1C8CC4u: goto label_1c8cc4;
            case 0x1C8CC8u: goto label_1c8cc8;
            case 0x1C8CCCu: goto label_1c8ccc;
            case 0x1C8CD0u: goto label_1c8cd0;
            case 0x1C8CD4u: goto label_1c8cd4;
            case 0x1C8CD8u: goto label_1c8cd8;
            case 0x1C8CDCu: goto label_1c8cdc;
            case 0x1C8CE0u: goto label_1c8ce0;
            case 0x1C8CE4u: goto label_1c8ce4;
            case 0x1C8CE8u: goto label_1c8ce8;
            case 0x1C8CECu: goto label_1c8cec;
            case 0x1C8CF0u: goto label_1c8cf0;
            case 0x1C8CF4u: goto label_1c8cf4;
            case 0x1C8CF8u: goto label_1c8cf8;
            case 0x1C8CFCu: goto label_1c8cfc;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            case 0x1C8D08u: goto label_1c8d08;
            case 0x1C8D0Cu: goto label_1c8d0c;
            case 0x1C8D10u: goto label_1c8d10;
            case 0x1C8D14u: goto label_1c8d14;
            case 0x1C8D18u: goto label_1c8d18;
            case 0x1C8D1Cu: goto label_1c8d1c;
            case 0x1C8D20u: goto label_1c8d20;
            case 0x1C8D24u: goto label_1c8d24;
            case 0x1C8D28u: goto label_1c8d28;
            case 0x1C8D2Cu: goto label_1c8d2c;
            case 0x1C8D30u: goto label_1c8d30;
            case 0x1C8D34u: goto label_1c8d34;
            case 0x1C8D38u: goto label_1c8d38;
            case 0x1C8D3Cu: goto label_1c8d3c;
            case 0x1C8D40u: goto label_1c8d40;
            case 0x1C8D44u: goto label_1c8d44;
            case 0x1C8D48u: goto label_1c8d48;
            case 0x1C8D4Cu: goto label_1c8d4c;
            case 0x1C8D50u: goto label_1c8d50;
            case 0x1C8D54u: goto label_1c8d54;
            case 0x1C8D58u: goto label_1c8d58;
            case 0x1C8D5Cu: goto label_1c8d5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8C68u;
label_1c8c68:
    // 0x1c8c68: 0xc0723ac
label_1c8c6c:
    if (ctx->pc == 0x1C8C6Cu) {
        ctx->pc = 0x1C8C70u;
        goto label_1c8c70;
    }
    ctx->pc = 0x1C8C68u;
    SET_GPR_U32(ctx, 31, 0x1C8C70u);
    ctx->pc = 0x1C8EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8EB0_0x1c8eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C70u; }
    }
    if (ctx->pc != 0x1C8C70u) { return; }
    ctx->pc = 0x1C8C70u;
label_1c8c70:
    // 0x1c8c70: 0x3c010034
    ctx->pc = 0x1c8c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8c74:
    // 0x1c8c74: 0x8022b650
    ctx->pc = 0x1c8c74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948432)));
label_1c8c78:
    // 0x1c8c78: 0x24420001
    ctx->pc = 0x1c8c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c8c7c:
    // 0x1c8c7c: 0x3c010034
    ctx->pc = 0x1c8c7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8c80:
    // 0x1c8c80: 0x1000002b
label_1c8c84:
    if (ctx->pc == 0x1C8C84u) {
        ctx->pc = 0x1C8C84u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C8C88u;
        goto label_1c8c88;
    }
    ctx->pc = 0x1C8C80u;
    {
        const bool branch_taken_0x1c8c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8C84u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c8c80) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8C88u;
label_1c8c88:
    // 0x1c8c88: 0xc072410
label_1c8c8c:
    if (ctx->pc == 0x1C8C8Cu) {
        ctx->pc = 0x1C8C90u;
        goto label_1c8c90;
    }
    ctx->pc = 0x1C8C88u;
    SET_GPR_U32(ctx, 31, 0x1C8C90u);
    ctx->pc = 0x1C9040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9040_0x1c9040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C90u; }
    }
    if (ctx->pc != 0x1C8C90u) { return; }
    ctx->pc = 0x1C8C90u;
label_1c8c90:
    // 0x1c8c90: 0x10400027
label_1c8c94:
    if (ctx->pc == 0x1C8C94u) {
        ctx->pc = 0x1C8C98u;
        goto label_1c8c98;
    }
    ctx->pc = 0x1C8C90u;
    {
        const bool branch_taken_0x1c8c90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8c90) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8C98u;
label_1c8c98:
    // 0x1c8c98: 0x24030004
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c8c9c:
    // 0x1c8c9c: 0x1043000e
label_1c8ca0:
    if (ctx->pc == 0x1C8CA0u) {
        ctx->pc = 0x1C8CA0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        ctx->pc = 0x1C8CA4u;
        goto label_1c8ca4;
    }
    ctx->pc = 0x1C8C9Cu;
    {
        const bool branch_taken_0x1c8c9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8CA0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c8c9c) {
            ctx->pc = 0x1C8CD8u;
            goto label_1c8cd8;
        }
    }
    ctx->pc = 0x1C8CA4u;
label_1c8ca4:
    // 0x1c8ca4: 0x24030002
    ctx->pc = 0x1c8ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1c8ca8:
    // 0x1c8ca8: 0x10430003
label_1c8cac:
    if (ctx->pc == 0x1C8CACu) {
        ctx->pc = 0x1C8CACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        ctx->pc = 0x1C8CB0u;
        goto label_1c8cb0;
    }
    ctx->pc = 0x1C8CA8u;
    {
        const bool branch_taken_0x1c8ca8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8CACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c8ca8) {
            ctx->pc = 0x1C8CB8u;
            goto label_1c8cb8;
        }
    }
    ctx->pc = 0x1C8CB0u;
label_1c8cb0:
    // 0x1c8cb0: 0x1000001f
label_1c8cb4:
    if (ctx->pc == 0x1C8CB4u) {
        ctx->pc = 0x1C8CB8u;
        goto label_1c8cb8;
    }
    ctx->pc = 0x1C8CB0u;
    {
        const bool branch_taken_0x1c8cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8cb0) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8CB8u;
label_1c8cb8:
    // 0x1c8cb8: 0xc072304
label_1c8cbc:
    if (ctx->pc == 0x1C8CBCu) {
        ctx->pc = 0x1C8CBCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952976)));
        ctx->pc = 0x1C8CC0u;
        goto label_1c8cc0;
    }
    ctx->pc = 0x1C8CB8u;
    SET_GPR_U32(ctx, 31, 0x1C8CC0u);
    ctx->pc = 0x1C8CBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952976)));
    ctx->pc = 0x1C8C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8C10_0x1c8c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8CC0u; }
    }
    if (ctx->pc != 0x1C8CC0u) { return; }
    ctx->pc = 0x1C8CC0u;
label_1c8cc0:
    // 0x1c8cc0: 0x3c010034
    ctx->pc = 0x1c8cc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8cc4:
    // 0x1c8cc4: 0x8022b650
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948432)));
label_1c8cc8:
    // 0x1c8cc8: 0x24420001
    ctx->pc = 0x1c8cc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c8ccc:
    // 0x1c8ccc: 0x3c010034
    ctx->pc = 0x1c8cccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8cd0:
    // 0x1c8cd0: 0x10000017
label_1c8cd4:
    if (ctx->pc == 0x1C8CD4u) {
        ctx->pc = 0x1C8CD4u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C8CD8u;
        goto label_1c8cd8;
    }
    ctx->pc = 0x1C8CD0u;
    {
        const bool branch_taken_0x1c8cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8CD4u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c8cd0) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8CD8u;
label_1c8cd8:
    // 0x1c8cd8: 0x10000015
label_1c8cdc:
    if (ctx->pc == 0x1C8CDCu) {
        ctx->pc = 0x1C8CDCu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1C8CE0u;
        goto label_1c8ce0;
    }
    ctx->pc = 0x1C8CD8u;
    {
        const bool branch_taken_0x1c8cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8CDCu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c8cd8) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8CE0u;
label_1c8ce0:
    // 0x1c8ce0: 0xc075a28
label_1c8ce4:
    if (ctx->pc == 0x1C8CE4u) {
        ctx->pc = 0x1C8CE8u;
        goto label_1c8ce8;
    }
    ctx->pc = 0x1C8CE0u;
    SET_GPR_U32(ctx, 31, 0x1C8CE8u);
    ctx->pc = 0x1D68A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D68A0_0x1d68a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8CE8u; }
    }
    if (ctx->pc != 0x1C8CE8u) { return; }
    ctx->pc = 0x1C8CE8u;
label_1c8ce8:
    // 0x1c8ce8: 0x10400011
label_1c8cec:
    if (ctx->pc == 0x1C8CECu) {
        ctx->pc = 0x1C8CF0u;
        goto label_1c8cf0;
    }
    ctx->pc = 0x1C8CE8u;
    {
        const bool branch_taken_0x1c8ce8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8ce8) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8CF0u;
label_1c8cf0:
    // 0x1c8cf0: 0x24020004
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1c8cf4:
    // 0x1c8cf4: 0x3c010034
    ctx->pc = 0x1c8cf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8cf8:
    // 0x1c8cf8: 0x1000000f
label_1c8cfc:
    if (ctx->pc == 0x1C8CFCu) {
        ctx->pc = 0x1C8CFCu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C8D00u;
        goto label_1c8d00;
    }
    ctx->pc = 0x1C8CF8u;
    {
        const bool branch_taken_0x1c8cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8CFCu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c8cf8) {
            ctx->pc = 0x1C8D38u;
            goto label_1c8d38;
        }
    }
    ctx->pc = 0x1C8D00u;
label_1c8d00:
    // 0x1c8d00: 0x3c040034
    ctx->pc = 0x1c8d00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_1c8d04:
    // 0x1c8d04: 0x3c050034
    ctx->pc = 0x1c8d04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
label_1c8d08:
    // 0x1c8d08: 0x2484b653
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948435));
label_1c8d0c:
    // 0x1c8d0c: 0xc072c60
label_1c8d10:
    if (ctx->pc == 0x1C8D10u) {
        ctx->pc = 0x1C8D10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948436));
        ctx->pc = 0x1C8D14u;
        goto label_1c8d14;
    }
    ctx->pc = 0x1C8D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C8D14u);
    ctx->pc = 0x1C8D10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948436));
    ctx->pc = 0x1CB180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB180_0x1cb180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8D14u; }
    }
    if (ctx->pc != 0x1C8D14u) { return; }
    ctx->pc = 0x1C8D14u;
label_1c8d14:
    // 0x1c8d14: 0x10400006
label_1c8d18:
    if (ctx->pc == 0x1C8D18u) {
        ctx->pc = 0x1C8D1Cu;
        goto label_1c8d1c;
    }
    ctx->pc = 0x1C8D14u;
    {
        const bool branch_taken_0x1c8d14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8d14) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8D1Cu;
label_1c8d1c:
    // 0x1c8d1c: 0xc072034
label_1c8d20:
    if (ctx->pc == 0x1C8D20u) {
        ctx->pc = 0x1C8D24u;
        goto label_1c8d24;
    }
    ctx->pc = 0x1C8D1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8D24u);
    ctx->pc = 0x1C80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C80D0_0x1c80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8D24u; }
    }
    if (ctx->pc != 0x1C8D24u) { return; }
    ctx->pc = 0x1C8D24u;
label_1c8d24:
    // 0x1c8d24: 0x24020005
    ctx->pc = 0x1c8d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c8d28:
    // 0x1c8d28: 0x3c010034
    ctx->pc = 0x1c8d28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8d2c:
    // 0x1c8d2c: 0xa022b650
    ctx->pc = 0x1c8d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 2));
label_1c8d30:
    // 0x1c8d30: 0x3c010034
    ctx->pc = 0x1c8d30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_1c8d34:
    // 0x1c8d34: 0x8022b650
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948432)));
label_1c8d38:
    // 0x1c8d38: 0xdfbf0000
    ctx->pc = 0x1c8d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8d3c:
    // 0x1c8d3c: 0x3e00008
label_1c8d40:
    if (ctx->pc == 0x1C8D40u) {
        ctx->pc = 0x1C8D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C8D44u;
        goto label_1c8d44;
    }
    ctx->pc = 0x1C8D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8C30u: goto label_1c8c30;
            case 0x1C8C34u: goto label_1c8c34;
            case 0x1C8C38u: goto label_1c8c38;
            case 0x1C8C3Cu: goto label_1c8c3c;
            case 0x1C8C40u: goto label_1c8c40;
            case 0x1C8C44u: goto label_1c8c44;
            case 0x1C8C48u: goto label_1c8c48;
            case 0x1C8C4Cu: goto label_1c8c4c;
            case 0x1C8C50u: goto label_1c8c50;
            case 0x1C8C54u: goto label_1c8c54;
            case 0x1C8C58u: goto label_1c8c58;
            case 0x1C8C5Cu: goto label_1c8c5c;
            case 0x1C8C60u: goto label_1c8c60;
            case 0x1C8C64u: goto label_1c8c64;
            case 0x1C8C68u: goto label_1c8c68;
            case 0x1C8C6Cu: goto label_1c8c6c;
            case 0x1C8C70u: goto label_1c8c70;
            case 0x1C8C74u: goto label_1c8c74;
            case 0x1C8C78u: goto label_1c8c78;
            case 0x1C8C7Cu: goto label_1c8c7c;
            case 0x1C8C80u: goto label_1c8c80;
            case 0x1C8C84u: goto label_1c8c84;
            case 0x1C8C88u: goto label_1c8c88;
            case 0x1C8C8Cu: goto label_1c8c8c;
            case 0x1C8C90u: goto label_1c8c90;
            case 0x1C8C94u: goto label_1c8c94;
            case 0x1C8C98u: goto label_1c8c98;
            case 0x1C8C9Cu: goto label_1c8c9c;
            case 0x1C8CA0u: goto label_1c8ca0;
            case 0x1C8CA4u: goto label_1c8ca4;
            case 0x1C8CA8u: goto label_1c8ca8;
            case 0x1C8CACu: goto label_1c8cac;
            case 0x1C8CB0u: goto label_1c8cb0;
            case 0x1C8CB4u: goto label_1c8cb4;
            case 0x1C8CB8u: goto label_1c8cb8;
            case 0x1C8CBCu: goto label_1c8cbc;
            case 0x1C8CC0u: goto label_1c8cc0;
            case 0x1C8CC4u: goto label_1c8cc4;
            case 0x1C8CC8u: goto label_1c8cc8;
            case 0x1C8CCCu: goto label_1c8ccc;
            case 0x1C8CD0u: goto label_1c8cd0;
            case 0x1C8CD4u: goto label_1c8cd4;
            case 0x1C8CD8u: goto label_1c8cd8;
            case 0x1C8CDCu: goto label_1c8cdc;
            case 0x1C8CE0u: goto label_1c8ce0;
            case 0x1C8CE4u: goto label_1c8ce4;
            case 0x1C8CE8u: goto label_1c8ce8;
            case 0x1C8CECu: goto label_1c8cec;
            case 0x1C8CF0u: goto label_1c8cf0;
            case 0x1C8CF4u: goto label_1c8cf4;
            case 0x1C8CF8u: goto label_1c8cf8;
            case 0x1C8CFCu: goto label_1c8cfc;
            case 0x1C8D00u: goto label_1c8d00;
            case 0x1C8D04u: goto label_1c8d04;
            case 0x1C8D08u: goto label_1c8d08;
            case 0x1C8D0Cu: goto label_1c8d0c;
            case 0x1C8D10u: goto label_1c8d10;
            case 0x1C8D14u: goto label_1c8d14;
            case 0x1C8D18u: goto label_1c8d18;
            case 0x1C8D1Cu: goto label_1c8d1c;
            case 0x1C8D20u: goto label_1c8d20;
            case 0x1C8D24u: goto label_1c8d24;
            case 0x1C8D28u: goto label_1c8d28;
            case 0x1C8D2Cu: goto label_1c8d2c;
            case 0x1C8D30u: goto label_1c8d30;
            case 0x1C8D34u: goto label_1c8d34;
            case 0x1C8D38u: goto label_1c8d38;
            case 0x1C8D3Cu: goto label_1c8d3c;
            case 0x1C8D40u: goto label_1c8d40;
            case 0x1C8D44u: goto label_1c8d44;
            case 0x1C8D48u: goto label_1c8d48;
            case 0x1C8D4Cu: goto label_1c8d4c;
            case 0x1C8D50u: goto label_1c8d50;
            case 0x1C8D54u: goto label_1c8d54;
            case 0x1C8D58u: goto label_1c8d58;
            case 0x1C8D5Cu: goto label_1c8d5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8D44u;
label_1c8d44:
    // 0x1c8d44: 0x0
    ctx->pc = 0x1c8d44u;
    // NOP
label_1c8d48:
    // 0x1c8d48: 0x0
    ctx->pc = 0x1c8d48u;
    // NOP
label_1c8d4c:
    // 0x1c8d4c: 0x0
    ctx->pc = 0x1c8d4cu;
    // NOP
label_1c8d50:
    // 0x1c8d50: 0x807204c
label_1c8d54:
    if (ctx->pc == 0x1C8D54u) {
        ctx->pc = 0x1C8D58u;
        goto label_1c8d58;
    }
    ctx->pc = 0x1C8D50u;
    ctx->pc = 0x1C8130u;
    entry_1c8130_0x1c82d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8D58u;
label_1c8d58:
    // 0x1c8d58: 0x0
    ctx->pc = 0x1c8d58u;
    // NOP
label_1c8d5c:
    // 0x1c8d5c: 0x0
    ctx->pc = 0x1c8d5cu;
    // NOP
}
