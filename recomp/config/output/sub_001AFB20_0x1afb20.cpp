#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AFB20
// Address: 0x1afb20 - 0x1afce0
void sub_001AFB20_0x1afb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1afb20u;

label_1afb20:
    // 0x1afb20: 0x27bdffd0
    ctx->pc = 0x1afb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1afb24:
    // 0x1afb24: 0xffbf0020
    ctx->pc = 0x1afb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1afb28:
    // 0x1afb28: 0x7fb10010
    ctx->pc = 0x1afb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1afb2c:
    // 0x1afb2c: 0xc06c8b0
label_1afb30:
    if (ctx->pc == 0x1AFB30u) {
        ctx->pc = 0x1AFB30u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1AFB34u;
        goto label_1afb34;
    }
    ctx->pc = 0x1AFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB34u);
    ctx->pc = 0x1AFB30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B22C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B22C0_0x1b22c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB34u; }
    }
    if (ctx->pc != 0x1AFB34u) { return; }
    ctx->pc = 0x1AFB34u;
label_1afb34:
    // 0x1afb34: 0x3c01002c
    ctx->pc = 0x1afb34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
label_1afb38:
    // 0x1afb38: 0x3c11002c
    ctx->pc = 0x1afb38u;
    SET_GPR_U32(ctx, 17, ((uint32_t)44 << 16));
label_1afb3c:
    // 0x1afb3c: 0x8c308e10
    ctx->pc = 0x1afb3cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294938128)));
label_1afb40:
    // 0x1afb40: 0x10000006
label_1afb44:
    if (ctx->pc == 0x1AFB44u) {
        ctx->pc = 0x1AFB44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294938144));
        ctx->pc = 0x1AFB48u;
        goto label_1afb48;
    }
    ctx->pc = 0x1AFB40u;
    {
        const bool branch_taken_0x1afb40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFB44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294938144));
        if (branch_taken_0x1afb40) {
            ctx->pc = 0x1AFB5Cu;
            goto label_1afb5c;
        }
    }
    ctx->pc = 0x1AFB48u;
label_1afb48:
    // 0x1afb48: 0x8e220000
    ctx->pc = 0x1afb48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1afb4c:
    // 0x1afb4c: 0x40f809
label_1afb50:
    if (ctx->pc == 0x1AFB50u) {
        ctx->pc = 0x1AFB54u;
        goto label_1afb54;
    }
    ctx->pc = 0x1AFB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AFB54u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB54u; }
            if (ctx->pc != 0x1AFB54u) { return; }
        }
    }
    ctx->pc = 0x1AFB54u;
label_1afb54:
    // 0x1afb54: 0x2610ffff
    ctx->pc = 0x1afb54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_1afb58:
    // 0x1afb58: 0x26310004
    ctx->pc = 0x1afb58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1afb5c:
    // 0x1afb5c: 0x0
    ctx->pc = 0x1afb5cu;
    // NOP
label_1afb60:
    // 0x1afb60: 0x1600fff9
label_1afb64:
    if (ctx->pc == 0x1AFB64u) {
        ctx->pc = 0x1AFB68u;
        goto label_1afb68;
    }
    ctx->pc = 0x1AFB60u;
    {
        const bool branch_taken_0x1afb60 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1afb60) {
            ctx->pc = 0x1AFB48u;
            goto label_1afb48;
        }
    }
    ctx->pc = 0x1AFB68u;
label_1afb68:
    // 0x1afb68: 0xdfbf0020
    ctx->pc = 0x1afb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1afb6c:
    // 0x1afb6c: 0x7bb10010
    ctx->pc = 0x1afb6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1afb70:
    // 0x1afb70: 0x7bb00000
    ctx->pc = 0x1afb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1afb74:
    // 0x1afb74: 0x3e00008
label_1afb78:
    if (ctx->pc == 0x1AFB78u) {
        ctx->pc = 0x1AFB78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AFB7Cu;
        goto label_1afb7c;
    }
    ctx->pc = 0x1AFB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFB7Cu;
label_1afb7c:
    // 0x1afb7c: 0x0
    ctx->pc = 0x1afb7cu;
    // NOP
label_1afb80:
    // 0x1afb80: 0x27bdffe0
    ctx->pc = 0x1afb80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1afb84:
    // 0x1afb84: 0xffbf0010
    ctx->pc = 0x1afb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1afb88:
    // 0x1afb88: 0x7fb00000
    ctx->pc = 0x1afb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1afb8c:
    // 0x1afb8c: 0xc06c0c0
label_1afb90:
    if (ctx->pc == 0x1AFB90u) {
        ctx->pc = 0x1AFB90u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB94u;
        goto label_1afb94;
    }
    ctx->pc = 0x1AFB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB94u);
    ctx->pc = 0x1AFB90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB94u; }
    }
    if (ctx->pc != 0x1AFB94u) { return; }
    ctx->pc = 0x1AFB94u;
label_1afb94:
    // 0x1afb94: 0x24030003
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1afb98:
    // 0x1afb98: 0x10430010
label_1afb9c:
    if (ctx->pc == 0x1AFB9Cu) {
        ctx->pc = 0x1AFB9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AFBA0u;
        goto label_1afba0;
    }
    ctx->pc = 0x1AFB98u;
    {
        const bool branch_taken_0x1afb98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AFB9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1afb98) {
            ctx->pc = 0x1AFBDCu;
            goto label_1afbdc;
        }
    }
    ctx->pc = 0x1AFBA0u;
label_1afba0:
    // 0x1afba0: 0x1043000e
label_1afba4:
    if (ctx->pc == 0x1AFBA4u) {
        ctx->pc = 0x1AFBA8u;
        goto label_1afba8;
    }
    ctx->pc = 0x1AFBA0u;
    {
        const bool branch_taken_0x1afba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1afba0) {
            ctx->pc = 0x1AFBDCu;
            goto label_1afbdc;
        }
    }
    ctx->pc = 0x1AFBA8u;
label_1afba8:
    // 0x1afba8: 0x24030001
    ctx->pc = 0x1afba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1afbac:
    // 0x1afbac: 0x10430009
label_1afbb0:
    if (ctx->pc == 0x1AFBB0u) {
        ctx->pc = 0x1AFBB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBB4u;
        goto label_1afbb4;
    }
    ctx->pc = 0x1AFBACu;
    {
        const bool branch_taken_0x1afbac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AFBB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1afbac) {
            ctx->pc = 0x1AFBD4u;
            goto label_1afbd4;
        }
    }
    ctx->pc = 0x1AFBB4u;
label_1afbb4:
    // 0x1afbb4: 0x10400003
label_1afbb8:
    if (ctx->pc == 0x1AFBB8u) {
        ctx->pc = 0x1AFBB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBBCu;
        goto label_1afbbc;
    }
    ctx->pc = 0x1AFBB4u;
    {
        const bool branch_taken_0x1afbb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFBB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1afbb4) {
            ctx->pc = 0x1AFBC4u;
            goto label_1afbc4;
        }
    }
    ctx->pc = 0x1AFBBCu;
label_1afbbc:
    // 0x1afbbc: 0x10000008
label_1afbc0:
    if (ctx->pc == 0x1AFBC0u) {
        ctx->pc = 0x1AFBC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1AFBC4u;
        goto label_1afbc4;
    }
    ctx->pc = 0x1AFBBCu;
    {
        const bool branch_taken_0x1afbbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFBC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1afbbc) {
            ctx->pc = 0x1AFBE0u;
            goto label_1afbe0;
        }
    }
    ctx->pc = 0x1AFBC4u;
label_1afbc4:
    // 0x1afbc4: 0xc204074
label_1afbc8:
    if (ctx->pc == 0x1AFBC8u) {
        ctx->pc = 0x1AFBCCu;
        goto label_1afbcc;
    }
    ctx->pc = 0x1AFBC4u;
    SET_GPR_U32(ctx, 31, 0x1AFBCCu);
    ctx->pc = 0x8101D0u;
    {
        auto targetFn = runtime->lookupFunction(0x8101D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBCCu; }
        if (ctx->pc != 0x1AFBCCu) { return; }
    }
    ctx->pc = 0x1AFBCCu;
label_1afbcc:
    // 0x1afbcc: 0x10000003
label_1afbd0:
    if (ctx->pc == 0x1AFBD0u) {
        ctx->pc = 0x1AFBD4u;
        goto label_1afbd4;
    }
    ctx->pc = 0x1AFBCCu;
    {
        const bool branch_taken_0x1afbcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1afbcc) {
            ctx->pc = 0x1AFBDCu;
            goto label_1afbdc;
        }
    }
    ctx->pc = 0x1AFBD4u;
label_1afbd4:
    // 0x1afbd4: 0xc2046ec
label_1afbd8:
    if (ctx->pc == 0x1AFBD8u) {
        ctx->pc = 0x1AFBDCu;
        goto label_1afbdc;
    }
    ctx->pc = 0x1AFBD4u;
    SET_GPR_U32(ctx, 31, 0x1AFBDCu);
    ctx->pc = 0x811BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x811BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBDCu; }
        if (ctx->pc != 0x1AFBDCu) { return; }
    }
    ctx->pc = 0x1AFBDCu;
label_1afbdc:
    // 0x1afbdc: 0xdfbf0010
    ctx->pc = 0x1afbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afbe0:
    // 0x1afbe0: 0x7bb00000
    ctx->pc = 0x1afbe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1afbe4:
    // 0x1afbe4: 0x3e00008
label_1afbe8:
    if (ctx->pc == 0x1AFBE8u) {
        ctx->pc = 0x1AFBE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1AFBECu;
        goto label_1afbec;
    }
    ctx->pc = 0x1AFBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFBE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFBECu;
label_1afbec:
    // 0x1afbec: 0x0
    ctx->pc = 0x1afbecu;
    // NOP
label_1afbf0:
    // 0x1afbf0: 0x27bdfff0
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1afbf4:
    // 0x1afbf4: 0xffbf0000
    ctx->pc = 0x1afbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1afbf8:
    // 0x1afbf8: 0xc06c0c0
label_1afbfc:
    if (ctx->pc == 0x1AFBFCu) {
        ctx->pc = 0x1AFC00u;
        goto label_1afc00;
    }
    ctx->pc = 0x1AFBF8u;
    SET_GPR_U32(ctx, 31, 0x1AFC00u);
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC00u; }
    }
    if (ctx->pc != 0x1AFC00u) { return; }
    ctx->pc = 0x1AFC00u;
label_1afc00:
    // 0x1afc00: 0x24030003
    ctx->pc = 0x1afc00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1afc04:
    // 0x1afc04: 0x10430010
label_1afc08:
    if (ctx->pc == 0x1AFC08u) {
        ctx->pc = 0x1AFC08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AFC0Cu;
        goto label_1afc0c;
    }
    ctx->pc = 0x1AFC04u;
    {
        const bool branch_taken_0x1afc04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AFC08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1afc04) {
            ctx->pc = 0x1AFC48u;
            goto label_1afc48;
        }
    }
    ctx->pc = 0x1AFC0Cu;
label_1afc0c:
    // 0x1afc0c: 0x1043000e
label_1afc10:
    if (ctx->pc == 0x1AFC10u) {
        ctx->pc = 0x1AFC14u;
        goto label_1afc14;
    }
    ctx->pc = 0x1AFC0Cu;
    {
        const bool branch_taken_0x1afc0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1afc0c) {
            ctx->pc = 0x1AFC48u;
            goto label_1afc48;
        }
    }
    ctx->pc = 0x1AFC14u;
label_1afc14:
    // 0x1afc14: 0x24030001
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1afc18:
    // 0x1afc18: 0x10430009
label_1afc1c:
    if (ctx->pc == 0x1AFC1Cu) {
        ctx->pc = 0x1AFC20u;
        goto label_1afc20;
    }
    ctx->pc = 0x1AFC18u;
    {
        const bool branch_taken_0x1afc18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1afc18) {
            ctx->pc = 0x1AFC40u;
            goto label_1afc40;
        }
    }
    ctx->pc = 0x1AFC20u;
label_1afc20:
    // 0x1afc20: 0x10400003
label_1afc24:
    if (ctx->pc == 0x1AFC24u) {
        ctx->pc = 0x1AFC28u;
        goto label_1afc28;
    }
    ctx->pc = 0x1AFC20u;
    {
        const bool branch_taken_0x1afc20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1afc20) {
            ctx->pc = 0x1AFC30u;
            goto label_1afc30;
        }
    }
    ctx->pc = 0x1AFC28u;
label_1afc28:
    // 0x1afc28: 0x10000008
label_1afc2c:
    if (ctx->pc == 0x1AFC2Cu) {
        ctx->pc = 0x1AFC2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1AFC30u;
        goto label_1afc30;
    }
    ctx->pc = 0x1AFC28u;
    {
        const bool branch_taken_0x1afc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFC2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1afc28) {
            ctx->pc = 0x1AFC4Cu;
            goto label_1afc4c;
        }
    }
    ctx->pc = 0x1AFC30u;
label_1afc30:
    // 0x1afc30: 0xc2042b0
label_1afc34:
    if (ctx->pc == 0x1AFC34u) {
        ctx->pc = 0x1AFC38u;
        goto label_1afc38;
    }
    ctx->pc = 0x1AFC30u;
    SET_GPR_U32(ctx, 31, 0x1AFC38u);
    ctx->pc = 0x810AC0u;
    {
        auto targetFn = runtime->lookupFunction(0x810AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC38u; }
        if (ctx->pc != 0x1AFC38u) { return; }
    }
    ctx->pc = 0x1AFC38u;
label_1afc38:
    // 0x1afc38: 0x10000003
label_1afc3c:
    if (ctx->pc == 0x1AFC3Cu) {
        ctx->pc = 0x1AFC40u;
        goto label_1afc40;
    }
    ctx->pc = 0x1AFC38u;
    {
        const bool branch_taken_0x1afc38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1afc38) {
            ctx->pc = 0x1AFC48u;
            goto label_1afc48;
        }
    }
    ctx->pc = 0x1AFC40u;
label_1afc40:
    // 0x1afc40: 0xc204ae0
label_1afc44:
    if (ctx->pc == 0x1AFC44u) {
        ctx->pc = 0x1AFC48u;
        goto label_1afc48;
    }
    ctx->pc = 0x1AFC40u;
    SET_GPR_U32(ctx, 31, 0x1AFC48u);
    ctx->pc = 0x812B80u;
    {
        auto targetFn = runtime->lookupFunction(0x812B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC48u; }
        if (ctx->pc != 0x1AFC48u) { return; }
    }
    ctx->pc = 0x1AFC48u;
label_1afc48:
    // 0x1afc48: 0xdfbf0000
    ctx->pc = 0x1afc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afc4c:
    // 0x1afc4c: 0x3e00008
label_1afc50:
    if (ctx->pc == 0x1AFC50u) {
        ctx->pc = 0x1AFC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1AFC54u;
        goto label_1afc54;
    }
    ctx->pc = 0x1AFC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFC54u;
label_1afc54:
    // 0x1afc54: 0x0
    ctx->pc = 0x1afc54u;
    // NOP
label_1afc58:
    // 0x1afc58: 0x0
    ctx->pc = 0x1afc58u;
    // NOP
label_1afc5c:
    // 0x1afc5c: 0x0
    ctx->pc = 0x1afc5cu;
    // NOP
label_1afc60:
    // 0x1afc60: 0x27bdfff0
    ctx->pc = 0x1afc60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1afc64:
    // 0x1afc64: 0x3c010032
    ctx->pc = 0x1afc64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1afc68:
    // 0x1afc68: 0xffbf0000
    ctx->pc = 0x1afc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1afc6c:
    // 0x1afc6c: 0x902343fa
    ctx->pc = 0x1afc6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17402)));
label_1afc70:
    // 0x1afc70: 0x10600018
label_1afc74:
    if (ctx->pc == 0x1AFC74u) {
        ctx->pc = 0x1AFC78u;
        goto label_1afc78;
    }
    ctx->pc = 0x1AFC70u;
    {
        const bool branch_taken_0x1afc70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1afc70) {
            ctx->pc = 0x1AFCD4u;
            goto label_1afcd4;
        }
    }
    ctx->pc = 0x1AFC78u;
label_1afc78:
    // 0x1afc78: 0xc06c0c0
label_1afc7c:
    if (ctx->pc == 0x1AFC7Cu) {
        ctx->pc = 0x1AFC80u;
        goto label_1afc80;
    }
    ctx->pc = 0x1AFC78u;
    SET_GPR_U32(ctx, 31, 0x1AFC80u);
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC80u; }
    }
    if (ctx->pc != 0x1AFC80u) { return; }
    ctx->pc = 0x1AFC80u;
label_1afc80:
    // 0x1afc80: 0x24030003
    ctx->pc = 0x1afc80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1afc84:
    // 0x1afc84: 0x10430013
label_1afc88:
    if (ctx->pc == 0x1AFC88u) {
        ctx->pc = 0x1AFC88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AFC8Cu;
        goto label_1afc8c;
    }
    ctx->pc = 0x1AFC84u;
    {
        const bool branch_taken_0x1afc84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AFC88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1afc84) {
            ctx->pc = 0x1AFCD4u;
            goto label_1afcd4;
        }
    }
    ctx->pc = 0x1AFC8Cu;
label_1afc8c:
    // 0x1afc8c: 0x10430011
label_1afc90:
    if (ctx->pc == 0x1AFC90u) {
        ctx->pc = 0x1AFC94u;
        goto label_1afc94;
    }
    ctx->pc = 0x1AFC8Cu;
    {
        const bool branch_taken_0x1afc8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1afc8c) {
            ctx->pc = 0x1AFCD4u;
            goto label_1afcd4;
        }
    }
    ctx->pc = 0x1AFC94u;
label_1afc94:
    // 0x1afc94: 0x24030001
    ctx->pc = 0x1afc94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1afc98:
    // 0x1afc98: 0x1043000c
label_1afc9c:
    if (ctx->pc == 0x1AFC9Cu) {
        ctx->pc = 0x1AFCA0u;
        goto label_1afca0;
    }
    ctx->pc = 0x1AFC98u;
    {
        const bool branch_taken_0x1afc98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1afc98) {
            ctx->pc = 0x1AFCCCu;
            goto label_1afccc;
        }
    }
    ctx->pc = 0x1AFCA0u;
label_1afca0:
    // 0x1afca0: 0x10400003
label_1afca4:
    if (ctx->pc == 0x1AFCA4u) {
        ctx->pc = 0x1AFCA4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        ctx->pc = 0x1AFCA8u;
        goto label_1afca8;
    }
    ctx->pc = 0x1AFCA0u;
    {
        const bool branch_taken_0x1afca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFCA4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x1afca0) {
            ctx->pc = 0x1AFCB0u;
            goto label_1afcb0;
        }
    }
    ctx->pc = 0x1AFCA8u;
label_1afca8:
    // 0x1afca8: 0x1000000b
label_1afcac:
    if (ctx->pc == 0x1AFCACu) {
        ctx->pc = 0x1AFCACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1AFCB0u;
        goto label_1afcb0;
    }
    ctx->pc = 0x1AFCA8u;
    {
        const bool branch_taken_0x1afca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFCACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1afca8) {
            ctx->pc = 0x1AFCD8u;
            goto label_1afcd8;
        }
    }
    ctx->pc = 0x1AFCB0u;
label_1afcb0:
    // 0x1afcb0: 0x9023ae94
    ctx->pc = 0x1afcb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946452)));
label_1afcb4:
    // 0x1afcb4: 0x14600007
label_1afcb8:
    if (ctx->pc == 0x1AFCB8u) {
        ctx->pc = 0x1AFCBCu;
        goto label_1afcbc;
    }
    ctx->pc = 0x1AFCB4u;
    {
        const bool branch_taken_0x1afcb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1afcb4) {
            ctx->pc = 0x1AFCD4u;
            goto label_1afcd4;
        }
    }
    ctx->pc = 0x1AFCBCu;
label_1afcbc:
    // 0x1afcbc: 0xc204080
label_1afcc0:
    if (ctx->pc == 0x1AFCC0u) {
        ctx->pc = 0x1AFCC4u;
        goto label_1afcc4;
    }
    ctx->pc = 0x1AFCBCu;
    SET_GPR_U32(ctx, 31, 0x1AFCC4u);
    ctx->pc = 0x810200u;
    {
        auto targetFn = runtime->lookupFunction(0x810200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCC4u; }
        if (ctx->pc != 0x1AFCC4u) { return; }
    }
    ctx->pc = 0x1AFCC4u;
label_1afcc4:
    // 0x1afcc4: 0x10000003
label_1afcc8:
    if (ctx->pc == 0x1AFCC8u) {
        ctx->pc = 0x1AFCCCu;
        goto label_1afccc;
    }
    ctx->pc = 0x1AFCC4u;
    {
        const bool branch_taken_0x1afcc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1afcc4) {
            ctx->pc = 0x1AFCD4u;
            goto label_1afcd4;
        }
    }
    ctx->pc = 0x1AFCCCu;
label_1afccc:
    // 0x1afccc: 0xc204778
label_1afcd0:
    if (ctx->pc == 0x1AFCD0u) {
        ctx->pc = 0x1AFCD4u;
        goto label_1afcd4;
    }
    ctx->pc = 0x1AFCCCu;
    SET_GPR_U32(ctx, 31, 0x1AFCD4u);
    ctx->pc = 0x811DE0u;
    {
        auto targetFn = runtime->lookupFunction(0x811DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCD4u; }
        if (ctx->pc != 0x1AFCD4u) { return; }
    }
    ctx->pc = 0x1AFCD4u;
label_1afcd4:
    // 0x1afcd4: 0xdfbf0000
    ctx->pc = 0x1afcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afcd8:
    // 0x1afcd8: 0x3e00008
label_1afcdc:
    if (ctx->pc == 0x1AFCDCu) {
        ctx->pc = 0x1AFCDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1AFCE0u;
        goto label_fallthrough_0x1afcd8;
    }
    ctx->pc = 0x1AFCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFCDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1afcd8:
    ctx->pc = 0x1AFCE0u;
}
