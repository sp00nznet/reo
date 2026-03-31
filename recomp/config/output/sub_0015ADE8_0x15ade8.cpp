#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015ADE8
// Address: 0x15ade8 - 0x15af40
void sub_0015ADE8_0x15ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ade8u;

label_15ade8:
    // 0x15ade8: 0x27bdffb0
    ctx->pc = 0x15ade8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_15adec:
    // 0x15adec: 0xffb00020
    ctx->pc = 0x15adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15adf0:
    // 0x15adf0: 0x80802d
    ctx->pc = 0x15adf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15adf4:
    // 0x15adf4: 0xffb30038
    ctx->pc = 0x15adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15adf8:
    // 0x15adf8: 0x27b30010
    ctx->pc = 0x15adf8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
label_15adfc:
    // 0x15adfc: 0xffb10028
    ctx->pc = 0x15adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15ae00:
    // 0x15ae00: 0xffb20030
    ctx->pc = 0x15ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15ae04:
    // 0x15ae04: 0x10000032
label_15ae08:
    if (ctx->pc == 0x15AE08u) {
        ctx->pc = 0x15AE08u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x15AE0Cu;
        goto label_15ae0c;
    }
    ctx->pc = 0x15AE04u;
    {
        const bool branch_taken_0x15ae04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AE08u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x15ae04) {
            ctx->pc = 0x15AED0u;
            goto label_15aed0;
        }
    }
    ctx->pc = 0x15AE0Cu;
label_15ae0c:
    // 0x15ae0c: 0x0
    ctx->pc = 0x15ae0cu;
    // NOP
label_15ae10:
    // 0x15ae10: 0xc0561d4
label_15ae14:
    if (ctx->pc == 0x15AE14u) {
        ctx->pc = 0x15AE14u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x15AE18u;
        goto label_15ae18;
    }
    ctx->pc = 0x15AE10u;
    SET_GPR_U32(ctx, 31, 0x15AE18u);
    ctx->pc = 0x15AE14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE18u; }
    }
    if (ctx->pc != 0x15AE18u) { return; }
    ctx->pc = 0x15AE18u;
label_15ae18:
    // 0x15ae18: 0x260382d
    ctx->pc = 0x15ae18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ae1c:
    // 0x15ae1c: 0x40882d
    ctx->pc = 0x15ae1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ae20:
    // 0x15ae20: 0x3a0202d
    ctx->pc = 0x15ae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ae24:
    // 0x15ae24: 0x16200012
label_15ae28:
    if (ctx->pc == 0x15AE28u) {
        ctx->pc = 0x15AE28u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AE2Cu;
        goto label_15ae2c;
    }
    ctx->pc = 0x15AE24u;
    {
        const bool branch_taken_0x15ae24 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x15AE28u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ae24) {
            ctx->pc = 0x15AE70u;
            goto label_15ae70;
        }
    }
    ctx->pc = 0x15AE2Cu;
label_15ae2c:
    // 0x15ae2c: 0x8fa50004
    ctx->pc = 0x15ae2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15ae30:
    // 0x15ae30: 0xc0501f8
label_15ae34:
    if (ctx->pc == 0x15AE34u) {
        ctx->pc = 0x15AE34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->pc = 0x15AE38u;
        goto label_15ae38;
    }
    ctx->pc = 0x15AE30u;
    SET_GPR_U32(ctx, 31, 0x15AE38u);
    ctx->pc = 0x15AE34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967293));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE38u; }
    }
    if (ctx->pc != 0x15AE38u) { return; }
    ctx->pc = 0x15AE38u;
label_15ae38:
    // 0x15ae38: 0x8e030000
    ctx->pc = 0x15ae38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ae3c:
    // 0x15ae3c: 0x200202d
    ctx->pc = 0x15ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ae40:
    // 0x15ae40: 0x282d
    ctx->pc = 0x15ae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ae44:
    // 0x15ae44: 0x8c620020
    ctx->pc = 0x15ae44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15ae48:
    // 0x15ae48: 0x40f809
label_15ae4c:
    if (ctx->pc == 0x15AE4Cu) {
        ctx->pc = 0x15AE4Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AE50u;
        goto label_15ae50;
    }
    ctx->pc = 0x15AE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AE50u);
        ctx->pc = 0x15AE4Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AE50u; }
            if (ctx->pc != 0x15AE50u) { return; }
        }
    }
    ctx->pc = 0x15AE50u;
label_15ae50:
    // 0x15ae50: 0x8e030000
    ctx->pc = 0x15ae50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ae54:
    // 0x15ae54: 0x200202d
    ctx->pc = 0x15ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ae58:
    // 0x15ae58: 0x24050001
    ctx->pc = 0x15ae58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15ae5c:
    // 0x15ae5c: 0x8c62001c
    ctx->pc = 0x15ae5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15ae60:
    // 0x15ae60: 0x40f809
label_15ae64:
    if (ctx->pc == 0x15AE64u) {
        ctx->pc = 0x15AE64u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AE68u;
        goto label_15ae68;
    }
    ctx->pc = 0x15AE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AE68u);
        ctx->pc = 0x15AE64u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AE68u; }
            if (ctx->pc != 0x15AE68u) { return; }
        }
    }
    ctx->pc = 0x15AE68u;
label_15ae68:
    // 0x15ae68: 0x1000001a
label_15ae6c:
    if (ctx->pc == 0x15AE6Cu) {
        ctx->pc = 0x15AE6Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x15AE70u;
        goto label_15ae70;
    }
    ctx->pc = 0x15AE68u;
    {
        const bool branch_taken_0x15ae68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AE6Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x15ae68) {
            ctx->pc = 0x15AED4u;
            goto label_15aed4;
        }
    }
    ctx->pc = 0x15AE70u;
label_15ae70:
    // 0x15ae70: 0xc05616e
label_15ae74:
    if (ctx->pc == 0x15AE74u) {
        ctx->pc = 0x15AE74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AE78u;
        goto label_15ae78;
    }
    ctx->pc = 0x15AE70u;
    SET_GPR_U32(ctx, 31, 0x15AE78u);
    ctx->pc = 0x15AE74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE78u; }
    }
    if (ctx->pc != 0x15AE78u) { return; }
    ctx->pc = 0x15AE78u;
label_15ae78:
    // 0x15ae78: 0x260382d
    ctx->pc = 0x15ae78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ae7c:
    // 0x15ae7c: 0x8fa50000
    ctx->pc = 0x15ae7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15ae80:
    // 0x15ae80: 0x3a0202d
    ctx->pc = 0x15ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ae84:
    // 0x15ae84: 0x3a0302d
    ctx->pc = 0x15ae84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ae88:
    // 0x15ae88: 0x40902d
    ctx->pc = 0x15ae88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ae8c:
    // 0x15ae8c: 0xc0501f8
label_15ae90:
    if (ctx->pc == 0x15AE90u) {
        ctx->pc = 0x15AE90u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->pc = 0x15AE94u;
        goto label_15ae94;
    }
    ctx->pc = 0x15AE8Cu;
    SET_GPR_U32(ctx, 31, 0x15AE94u);
    ctx->pc = 0x15AE90u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE94u; }
    }
    if (ctx->pc != 0x15AE94u) { return; }
    ctx->pc = 0x15AE94u;
label_15ae94:
    // 0x15ae94: 0x8e030000
    ctx->pc = 0x15ae94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ae98:
    // 0x15ae98: 0x200202d
    ctx->pc = 0x15ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ae9c:
    // 0x15ae9c: 0x282d
    ctx->pc = 0x15ae9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aea0:
    // 0x15aea0: 0x8c620020
    ctx->pc = 0x15aea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15aea4:
    // 0x15aea4: 0x40f809
label_15aea8:
    if (ctx->pc == 0x15AEA8u) {
        ctx->pc = 0x15AEA8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AEACu;
        goto label_15aeac;
    }
    ctx->pc = 0x15AEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AEACu);
        ctx->pc = 0x15AEA8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AEACu; }
            if (ctx->pc != 0x15AEACu) { return; }
        }
    }
    ctx->pc = 0x15AEACu;
label_15aeac:
    // 0x15aeac: 0x8e030000
    ctx->pc = 0x15aeacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15aeb0:
    // 0x15aeb0: 0x200202d
    ctx->pc = 0x15aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15aeb4:
    // 0x15aeb4: 0x260302d
    ctx->pc = 0x15aeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15aeb8:
    // 0x15aeb8: 0x8c62001c
    ctx->pc = 0x15aeb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15aebc:
    // 0x15aebc: 0x40f809
label_15aec0:
    if (ctx->pc == 0x15AEC0u) {
        ctx->pc = 0x15AEC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15AEC4u;
        goto label_15aec4;
    }
    ctx->pc = 0x15AEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AEC4u);
        ctx->pc = 0x15AEC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AEC4u; }
            if (ctx->pc != 0x15AEC4u) { return; }
        }
    }
    ctx->pc = 0x15AEC4u;
label_15aec4:
    // 0x15aec4: 0x10000017
label_15aec8:
    if (ctx->pc == 0x15AEC8u) {
        ctx->pc = 0x15AEC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AECCu;
        goto label_15aecc;
    }
    ctx->pc = 0x15AEC4u;
    {
        const bool branch_taken_0x15aec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AEC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15aec4) {
            ctx->pc = 0x15AF24u;
            goto label_15af24;
        }
    }
    ctx->pc = 0x15AECCu;
label_15aecc:
    // 0x15aecc: 0x0
    ctx->pc = 0x15aeccu;
    // NOP
label_15aed0:
    // 0x15aed0: 0x8e030000
    ctx->pc = 0x15aed0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15aed4:
    // 0x15aed4: 0x3c067fff
    ctx->pc = 0x15aed4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_15aed8:
    // 0x15aed8: 0x24050001
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15aedc:
    // 0x15aedc: 0x34c6ffff
    ctx->pc = 0x15aedcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_15aee0:
    // 0x15aee0: 0x8c620018
    ctx->pc = 0x15aee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_15aee4:
    // 0x15aee4: 0x200202d
    ctx->pc = 0x15aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15aee8:
    // 0x15aee8: 0x40f809
label_15aeec:
    if (ctx->pc == 0x15AEECu) {
        ctx->pc = 0x15AEECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AEF0u;
        goto label_15aef0;
    }
    ctx->pc = 0x15AEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AEF0u);
        ctx->pc = 0x15AEECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AEF0u; }
            if (ctx->pc != 0x15AEF0u) { return; }
        }
    }
    ctx->pc = 0x15AEF0u;
label_15aef0:
    // 0x15aef0: 0x8fa20004
    ctx->pc = 0x15aef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15aef4:
    // 0x15aef4: 0x40282d
    ctx->pc = 0x15aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15aef8:
    // 0x15aef8: 0x28420004
    ctx->pc = 0x15aef8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_15aefc:
    // 0x15aefc: 0x1040ffc4
label_15af00:
    if (ctx->pc == 0x15AF00u) {
        ctx->pc = 0x15AF00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15AF04u;
        goto label_15af04;
    }
    ctx->pc = 0x15AEFCu;
    {
        const bool branch_taken_0x15aefc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AF00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15aefc) {
            ctx->pc = 0x15AE10u;
            goto label_15ae10;
        }
    }
    ctx->pc = 0x15AF04u;
label_15af04:
    // 0x15af04: 0x8e030000
    ctx->pc = 0x15af04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15af08:
    // 0x15af08: 0x200202d
    ctx->pc = 0x15af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15af0c:
    // 0x15af0c: 0x24050001
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15af10:
    // 0x15af10: 0x3a0302d
    ctx->pc = 0x15af10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15af14:
    // 0x15af14: 0x8c62001c
    ctx->pc = 0x15af14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15af18:
    // 0x15af18: 0x40f809
label_15af1c:
    if (ctx->pc == 0x15AF1Cu) {
        ctx->pc = 0x15AF1Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AF20u;
        goto label_15af20;
    }
    ctx->pc = 0x15AF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AF20u);
        ctx->pc = 0x15AF1Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AF20u; }
            if (ctx->pc != 0x15AF20u) { return; }
        }
    }
    ctx->pc = 0x15AF20u;
label_15af20:
    // 0x15af20: 0x240102d
    ctx->pc = 0x15af20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15af24:
    // 0x15af24: 0xdfb00020
    ctx->pc = 0x15af24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15af28:
    // 0x15af28: 0xdfb10028
    ctx->pc = 0x15af28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15af2c:
    // 0x15af2c: 0xdfb20030
    ctx->pc = 0x15af2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15af30:
    // 0x15af30: 0xdfb30038
    ctx->pc = 0x15af30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15af34:
    // 0x15af34: 0xdfbf0040
    ctx->pc = 0x15af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15af38:
    // 0x15af38: 0x3e00008
label_15af3c:
    if (ctx->pc == 0x15AF3Cu) {
        ctx->pc = 0x15AF3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15AF40u;
        goto label_fallthrough_0x15af38;
    }
    ctx->pc = 0x15AF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AF3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADE8u: goto label_15ade8;
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF0u: goto label_15adf0;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADF8u: goto label_15adf8;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE00u: goto label_15ae00;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE08u: goto label_15ae08;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE10u: goto label_15ae10;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE18u: goto label_15ae18;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE20u: goto label_15ae20;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE28u: goto label_15ae28;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AE30u: goto label_15ae30;
            case 0x15AE34u: goto label_15ae34;
            case 0x15AE38u: goto label_15ae38;
            case 0x15AE3Cu: goto label_15ae3c;
            case 0x15AE40u: goto label_15ae40;
            case 0x15AE44u: goto label_15ae44;
            case 0x15AE48u: goto label_15ae48;
            case 0x15AE4Cu: goto label_15ae4c;
            case 0x15AE50u: goto label_15ae50;
            case 0x15AE54u: goto label_15ae54;
            case 0x15AE58u: goto label_15ae58;
            case 0x15AE5Cu: goto label_15ae5c;
            case 0x15AE60u: goto label_15ae60;
            case 0x15AE64u: goto label_15ae64;
            case 0x15AE68u: goto label_15ae68;
            case 0x15AE6Cu: goto label_15ae6c;
            case 0x15AE70u: goto label_15ae70;
            case 0x15AE74u: goto label_15ae74;
            case 0x15AE78u: goto label_15ae78;
            case 0x15AE7Cu: goto label_15ae7c;
            case 0x15AE80u: goto label_15ae80;
            case 0x15AE84u: goto label_15ae84;
            case 0x15AE88u: goto label_15ae88;
            case 0x15AE8Cu: goto label_15ae8c;
            case 0x15AE90u: goto label_15ae90;
            case 0x15AE94u: goto label_15ae94;
            case 0x15AE98u: goto label_15ae98;
            case 0x15AE9Cu: goto label_15ae9c;
            case 0x15AEA0u: goto label_15aea0;
            case 0x15AEA4u: goto label_15aea4;
            case 0x15AEA8u: goto label_15aea8;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB0u: goto label_15aeb0;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEB8u: goto label_15aeb8;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AEC0u: goto label_15aec0;
            case 0x15AEC4u: goto label_15aec4;
            case 0x15AEC8u: goto label_15aec8;
            case 0x15AECCu: goto label_15aecc;
            case 0x15AED0u: goto label_15aed0;
            case 0x15AED4u: goto label_15aed4;
            case 0x15AED8u: goto label_15aed8;
            case 0x15AEDCu: goto label_15aedc;
            case 0x15AEE0u: goto label_15aee0;
            case 0x15AEE4u: goto label_15aee4;
            case 0x15AEE8u: goto label_15aee8;
            case 0x15AEECu: goto label_15aeec;
            case 0x15AEF0u: goto label_15aef0;
            case 0x15AEF4u: goto label_15aef4;
            case 0x15AEF8u: goto label_15aef8;
            case 0x15AEFCu: goto label_15aefc;
            case 0x15AF00u: goto label_15af00;
            case 0x15AF04u: goto label_15af04;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF0Cu: goto label_15af0c;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF14u: goto label_15af14;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF1Cu: goto label_15af1c;
            case 0x15AF20u: goto label_15af20;
            case 0x15AF24u: goto label_15af24;
            case 0x15AF28u: goto label_15af28;
            case 0x15AF2Cu: goto label_15af2c;
            case 0x15AF30u: goto label_15af30;
            case 0x15AF34u: goto label_15af34;
            case 0x15AF38u: goto label_15af38;
            case 0x15AF3Cu: goto label_15af3c;
            default: break;
        }
        return;
    }
label_fallthrough_0x15af38:
    ctx->pc = 0x15AF40u;
}
