#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E9B8
// Address: 0x16e9b8 - 0x16eb30
void sub_0016E9B8_0x16e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e9b8u;

label_16e9b8:
    // 0x16e9b8: 0x27bdffb0
    ctx->pc = 0x16e9b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_16e9bc:
    // 0x16e9bc: 0xffb00010
    ctx->pc = 0x16e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16e9c0:
    // 0x16e9c0: 0x80802d
    ctx->pc = 0x16e9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e9c4:
    // 0x16e9c4: 0xffb10018
    ctx->pc = 0x16e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16e9c8:
    // 0x16e9c8: 0x26110cc0
    ctx->pc = 0x16e9c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 3264));
label_16e9cc:
    // 0x16e9cc: 0xffb20020
    ctx->pc = 0x16e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16e9d0:
    // 0x16e9d0: 0xa0902d
    ctx->pc = 0x16e9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e9d4:
    // 0x16e9d4: 0xffb40030
    ctx->pc = 0x16e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_16e9d8:
    // 0x16e9d8: 0xa02d
    ctx->pc = 0x16e9d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e9dc:
    // 0x16e9dc: 0xffb30028
    ctx->pc = 0x16e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16e9e0:
    // 0x16e9e0: 0x26030da4
    ctx->pc = 0x16e9e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3492));
label_16e9e4:
    // 0x16e9e4: 0xffb50038
    ctx->pc = 0x16e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_16e9e8:
    // 0x16e9e8: 0x26060d54
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 3412));
label_16e9ec:
    // 0x16e9ec: 0xffbf0040
    ctx->pc = 0x16e9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16e9f0:
    // 0x16e9f0: 0x8c620000
    ctx->pc = 0x16e9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e9f4:
    // 0x16e9f4: 0x10400006
label_16e9f8:
    if (ctx->pc == 0x16E9F8u) {
        ctx->pc = 0x16E9F8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
        ctx->pc = 0x16E9FCu;
        goto label_16e9fc;
    }
    ctx->pc = 0x16E9F4u;
    {
        const bool branch_taken_0x16e9f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E9F8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
        if (branch_taken_0x16e9f4) {
            ctx->pc = 0x16EA10u;
            goto label_16ea10;
        }
    }
    ctx->pc = 0x16E9FCu;
label_16e9fc:
    // 0x16e9fc: 0x8c620020
    ctx->pc = 0x16e9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16ea00:
    // 0x16ea00: 0x8cc30020
    ctx->pc = 0x16ea00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_16ea04:
    // 0x16ea04: 0x8e240120
    ctx->pc = 0x16ea04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_16ea08:
    // 0x16ea08: 0x621823
    ctx->pc = 0x16ea08u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ea0c:
    // 0x16ea0c: 0x64a021
    ctx->pc = 0x16ea0cu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16ea10:
    // 0x16ea10: 0x8e220018
    ctx->pc = 0x16ea10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_16ea14:
    // 0x16ea14: 0x10400008
label_16ea18:
    if (ctx->pc == 0x16EA18u) {
        ctx->pc = 0x16EA18u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->pc = 0x16EA1Cu;
        goto label_16ea1c;
    }
    ctx->pc = 0x16EA14u;
    {
        const bool branch_taken_0x16ea14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA18u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 36)));
        if (branch_taken_0x16ea14) {
            ctx->pc = 0x16EA38u;
            goto label_16ea38;
        }
    }
    ctx->pc = 0x16EA1Cu;
label_16ea1c:
    // 0x16ea1c: 0x200202d
    ctx->pc = 0x16ea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ea20:
    // 0x16ea20: 0x240282d
    ctx->pc = 0x16ea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ea24:
    // 0x16ea24: 0x280302d
    ctx->pc = 0x16ea24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ea28:
    // 0x16ea28: 0x40f809
label_16ea2c:
    if (ctx->pc == 0x16EA2Cu) {
        ctx->pc = 0x16EA2Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA30u;
        goto label_16ea30;
    }
    ctx->pc = 0x16EA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16EA30u);
        ctx->pc = 0x16EA2Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E9B8u: goto label_16e9b8;
            case 0x16E9BCu: goto label_16e9bc;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9C4u: goto label_16e9c4;
            case 0x16E9C8u: goto label_16e9c8;
            case 0x16E9CCu: goto label_16e9cc;
            case 0x16E9D0u: goto label_16e9d0;
            case 0x16E9D4u: goto label_16e9d4;
            case 0x16E9D8u: goto label_16e9d8;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16E9E0u: goto label_16e9e0;
            case 0x16E9E4u: goto label_16e9e4;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16E9ECu: goto label_16e9ec;
            case 0x16E9F0u: goto label_16e9f0;
            case 0x16E9F4u: goto label_16e9f4;
            case 0x16E9F8u: goto label_16e9f8;
            case 0x16E9FCu: goto label_16e9fc;
            case 0x16EA00u: goto label_16ea00;
            case 0x16EA04u: goto label_16ea04;
            case 0x16EA08u: goto label_16ea08;
            case 0x16EA0Cu: goto label_16ea0c;
            case 0x16EA10u: goto label_16ea10;
            case 0x16EA14u: goto label_16ea14;
            case 0x16EA18u: goto label_16ea18;
            case 0x16EA1Cu: goto label_16ea1c;
            case 0x16EA20u: goto label_16ea20;
            case 0x16EA24u: goto label_16ea24;
            case 0x16EA28u: goto label_16ea28;
            case 0x16EA2Cu: goto label_16ea2c;
            case 0x16EA30u: goto label_16ea30;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA38u: goto label_16ea38;
            case 0x16EA3Cu: goto label_16ea3c;
            case 0x16EA40u: goto label_16ea40;
            case 0x16EA44u: goto label_16ea44;
            case 0x16EA48u: goto label_16ea48;
            case 0x16EA4Cu: goto label_16ea4c;
            case 0x16EA50u: goto label_16ea50;
            case 0x16EA54u: goto label_16ea54;
            case 0x16EA58u: goto label_16ea58;
            case 0x16EA5Cu: goto label_16ea5c;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EA64u: goto label_16ea64;
            case 0x16EA68u: goto label_16ea68;
            case 0x16EA6Cu: goto label_16ea6c;
            case 0x16EA70u: goto label_16ea70;
            case 0x16EA74u: goto label_16ea74;
            case 0x16EA78u: goto label_16ea78;
            case 0x16EA7Cu: goto label_16ea7c;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EA84u: goto label_16ea84;
            case 0x16EA88u: goto label_16ea88;
            case 0x16EA8Cu: goto label_16ea8c;
            case 0x16EA90u: goto label_16ea90;
            case 0x16EA94u: goto label_16ea94;
            case 0x16EA98u: goto label_16ea98;
            case 0x16EA9Cu: goto label_16ea9c;
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA4u: goto label_16eaa4;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAACu: goto label_16eaac;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EAB4u: goto label_16eab4;
            case 0x16EAB8u: goto label_16eab8;
            case 0x16EABCu: goto label_16eabc;
            case 0x16EAC0u: goto label_16eac0;
            case 0x16EAC4u: goto label_16eac4;
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EAD4u: goto label_16ead4;
            case 0x16EAD8u: goto label_16ead8;
            case 0x16EADCu: goto label_16eadc;
            case 0x16EAE0u: goto label_16eae0;
            case 0x16EAE4u: goto label_16eae4;
            case 0x16EAE8u: goto label_16eae8;
            case 0x16EAECu: goto label_16eaec;
            case 0x16EAF0u: goto label_16eaf0;
            case 0x16EAF4u: goto label_16eaf4;
            case 0x16EAF8u: goto label_16eaf8;
            case 0x16EAFCu: goto label_16eafc;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB04u: goto label_16eb04;
            case 0x16EB08u: goto label_16eb08;
            case 0x16EB0Cu: goto label_16eb0c;
            case 0x16EB10u: goto label_16eb10;
            case 0x16EB14u: goto label_16eb14;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB1Cu: goto label_16eb1c;
            case 0x16EB20u: goto label_16eb20;
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB28u: goto label_16eb28;
            case 0x16EB2Cu: goto label_16eb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EA30u; }
            if (ctx->pc != 0x16EA30u) { return; }
        }
    }
    ctx->pc = 0x16EA30u;
label_16ea30:
    // 0x16ea30: 0x10000037
label_16ea34:
    if (ctx->pc == 0x16EA34u) {
        ctx->pc = 0x16EA34u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x16EA38u;
        goto label_16ea38;
    }
    ctx->pc = 0x16EA30u;
    {
        const bool branch_taken_0x16ea30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA34u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16ea30) {
            ctx->pc = 0x16EB10u;
            goto label_16eb10;
        }
    }
    ctx->pc = 0x16EA38u;
label_16ea38:
    // 0x16ea38: 0x24020001
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16ea3c:
    // 0x16ea3c: 0x56420005
label_16ea40:
    if (ctx->pc == 0x16EA40u) {
        ctx->pc = 0x16EA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x16EA44u;
        goto label_16ea44;
    }
    ctx->pc = 0x16EA3Cu;
    {
        const bool branch_taken_0x16ea3c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x16ea3c) {
            ctx->pc = 0x16EA40u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x16EA54u;
            goto label_16ea54;
        }
    }
    ctx->pc = 0x16EA44u;
label_16ea44:
    // 0x16ea44: 0x220202d
    ctx->pc = 0x16ea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ea48:
    // 0x16ea48: 0xc05d72e
label_16ea4c:
    if (ctx->pc == 0x16EA4Cu) {
        ctx->pc = 0x16EA4Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA50u;
        goto label_16ea50;
    }
    ctx->pc = 0x16EA48u;
    SET_GPR_U32(ctx, 31, 0x16EA50u);
    ctx->pc = 0x16EA4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175CB8_0x175cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA50u; }
    }
    if (ctx->pc != 0x16EA50u) { return; }
    ctx->pc = 0x16EA50u;
label_16ea50:
    // 0x16ea50: 0x2642ffff
    ctx->pc = 0x16ea50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
label_16ea54:
    // 0x16ea54: 0x2c420002
    ctx->pc = 0x16ea54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_16ea58:
    // 0x16ea58: 0x10400004
label_16ea5c:
    if (ctx->pc == 0x16EA5Cu) {
        ctx->pc = 0x16EA5Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA60u;
        goto label_16ea60;
    }
    ctx->pc = 0x16EA58u;
    {
        const bool branch_taken_0x16ea58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA5Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ea58) {
            ctx->pc = 0x16EA6Cu;
            goto label_16ea6c;
        }
    }
    ctx->pc = 0x16EA60u;
label_16ea60:
    // 0x16ea60: 0xc05d756
label_16ea64:
    if (ctx->pc == 0x16EA64u) {
        ctx->pc = 0x16EA64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA68u;
        goto label_16ea68;
    }
    ctx->pc = 0x16EA60u;
    SET_GPR_U32(ctx, 31, 0x16EA68u);
    ctx->pc = 0x16EA64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D58_0x175d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA68u; }
    }
    if (ctx->pc != 0x16EA68u) { return; }
    ctx->pc = 0x16EA68u;
label_16ea68:
    // 0x16ea68: 0x40a02d
    ctx->pc = 0x16ea68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ea6c:
    // 0x16ea6c: 0xc05dd12
label_16ea70:
    if (ctx->pc == 0x16EA70u) {
        ctx->pc = 0x16EA70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA74u;
        goto label_16ea74;
    }
    ctx->pc = 0x16EA6Cu;
    SET_GPR_U32(ctx, 31, 0x16EA74u);
    ctx->pc = 0x16EA70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177448_0x177448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA74u; }
    }
    if (ctx->pc != 0x16EA74u) { return; }
    ctx->pc = 0x16EA74u;
label_16ea74:
    // 0x16ea74: 0x284203e9
    ctx->pc = 0x16ea74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1001));
label_16ea78:
    // 0x16ea78: 0x10400007
label_16ea7c:
    if (ctx->pc == 0x16EA7Cu) {
        ctx->pc = 0x16EA7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA80u;
        goto label_16ea80;
    }
    ctx->pc = 0x16EA78u;
    {
        const bool branch_taken_0x16ea78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ea78) {
            ctx->pc = 0x16EA98u;
            goto label_16ea98;
        }
    }
    ctx->pc = 0x16EA80u;
label_16ea80:
    // 0x16ea80: 0x8ea30084
    ctx->pc = 0x16ea80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_16ea84:
    // 0x16ea84: 0x8e040a38
    ctx->pc = 0x16ea84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2616)));
label_16ea88:
    // 0x16ea88: 0x64182a
    ctx->pc = 0x16ea88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_16ea8c:
    // 0x16ea8c: 0x1060001f
label_16ea90:
    if (ctx->pc == 0x16EA90u) {
        ctx->pc = 0x16EA90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA94u;
        goto label_16ea94;
    }
    ctx->pc = 0x16EA8Cu;
    {
        const bool branch_taken_0x16ea8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ea8c) {
            ctx->pc = 0x16EB0Cu;
            goto label_16eb0c;
        }
    }
    ctx->pc = 0x16EA94u;
label_16ea94:
    // 0x16ea94: 0x200202d
    ctx->pc = 0x16ea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ea98:
    // 0x16ea98: 0x3a0282d
    ctx->pc = 0x16ea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16ea9c:
    // 0x16ea9c: 0xc05d8d4
label_16eaa0:
    if (ctx->pc == 0x16EAA0u) {
        ctx->pc = 0x16EAA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x16EAA4u;
        goto label_16eaa4;
    }
    ctx->pc = 0x16EA9Cu;
    SET_GPR_U32(ctx, 31, 0x16EAA4u);
    ctx->pc = 0x16EAA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x176350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176350_0x176350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EAA4u; }
    }
    if (ctx->pc != 0x16EAA4u) { return; }
    ctx->pc = 0x16EAA4u;
label_16eaa4:
    // 0x16eaa4: 0x8fa30000
    ctx->pc = 0x16eaa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16eaa8:
    // 0x16eaa8: 0x4600018
label_16eaac:
    if (ctx->pc == 0x16EAACu) {
        ctx->pc = 0x16EAACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EAB0u;
        goto label_16eab0;
    }
    ctx->pc = 0x16EAA8u;
    {
        const bool branch_taken_0x16eaa8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x16EAACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16eaa8) {
            ctx->pc = 0x16EB0Cu;
            goto label_16eb0c;
        }
    }
    ctx->pc = 0x16EAB0u;
label_16eab0:
    // 0x16eab0: 0x200202d
    ctx->pc = 0x16eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16eab4:
    // 0x16eab4: 0x240282d
    ctx->pc = 0x16eab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16eab8:
    // 0x16eab8: 0x27a60008
    ctx->pc = 0x16eab8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
label_16eabc:
    // 0x16eabc: 0xc05bacc
label_16eac0:
    if (ctx->pc == 0x16EAC0u) {
        ctx->pc = 0x16EAC0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
        ctx->pc = 0x16EAC4u;
        goto label_16eac4;
    }
    ctx->pc = 0x16EABCu;
    SET_GPR_U32(ctx, 31, 0x16EAC4u);
    ctx->pc = 0x16EAC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x16EB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EB30_0x16eb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EAC4u; }
    }
    if (ctx->pc != 0x16EAC4u) { return; }
    ctx->pc = 0x16EAC4u;
label_16eac4:
    // 0x16eac4: 0x260382d
    ctx->pc = 0x16eac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16eac8:
    // 0x16eac8: 0x8fa60008
    ctx->pc = 0x16eac8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16eacc:
    // 0x16eacc: 0x8fa2000c
    ctx->pc = 0x16eaccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_16ead0:
    // 0x16ead0: 0x2663018
    ctx->pc = 0x16ead0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
label_16ead4:
    // 0x16ead4: 0x50400001
label_16ead8:
    if (ctx->pc == 0x16EAD8u) {
        ctx->pc = 0x16EAD8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x16EADCu;
        goto label_16eadc;
    }
    ctx->pc = 0x16EAD4u;
    {
        const bool branch_taken_0x16ead4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ead4) {
            ctx->pc = 0x16EAD8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16EADCu;
            goto label_16eadc;
        }
    }
    ctx->pc = 0x16EADCu;
label_16eadc:
    // 0x16eadc: 0x8fa40000
    ctx->pc = 0x16eadcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16eae0:
    // 0x16eae0: 0x8fa50004
    ctx->pc = 0x16eae0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16eae4:
    // 0x16eae4: 0xc2001a
    ctx->pc = 0x16eae4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_16eae8:
    // 0x16eae8: 0x3012
    ctx->pc = 0x16eae8u;
    SET_GPR_U32(ctx, 6, ctx->lo);
label_16eaec:
    // 0x16eaec: 0xc05407a
label_16eaf0:
    if (ctx->pc == 0x16EAF0u) {
        ctx->pc = 0x16EAF0u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->pc = 0x16EAF4u;
        goto label_16eaf4;
    }
    ctx->pc = 0x16EAECu;
    SET_GPR_U32(ctx, 31, 0x16EAF4u);
    ctx->pc = 0x16EAF0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->pc = 0x1501E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001501E8_0x1501e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EAF4u; }
    }
    if (ctx->pc != 0x16EAF4u) { return; }
    ctx->pc = 0x16EAF4u;
label_16eaf4:
    // 0x16eaf4: 0x14400005
label_16eaf8:
    if (ctx->pc == 0x16EAF8u) {
        ctx->pc = 0x16EAF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EAFCu;
        goto label_16eafc;
    }
    ctx->pc = 0x16EAF4u;
    {
        const bool branch_taken_0x16eaf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EAF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16eaf4) {
            ctx->pc = 0x16EB0Cu;
            goto label_16eb0c;
        }
    }
    ctx->pc = 0x16EAFCu;
label_16eafc:
    // 0x16eafc: 0x8ea30084
    ctx->pc = 0x16eafcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_16eb00:
    // 0x16eb00: 0x24020001
    ctx->pc = 0x16eb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16eb04:
    // 0x16eb04: 0x24630001
    ctx->pc = 0x16eb04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_16eb08:
    // 0x16eb08: 0xaea30084
    ctx->pc = 0x16eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_16eb0c:
    // 0x16eb0c: 0xdfb00010
    ctx->pc = 0x16eb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16eb10:
    // 0x16eb10: 0xdfb10018
    ctx->pc = 0x16eb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16eb14:
    // 0x16eb14: 0xdfb20020
    ctx->pc = 0x16eb14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16eb18:
    // 0x16eb18: 0xdfb30028
    ctx->pc = 0x16eb18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16eb1c:
    // 0x16eb1c: 0xdfb40030
    ctx->pc = 0x16eb1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16eb20:
    // 0x16eb20: 0xdfb50038
    ctx->pc = 0x16eb20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16eb24:
    // 0x16eb24: 0xdfbf0040
    ctx->pc = 0x16eb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16eb28:
    // 0x16eb28: 0x3e00008
label_16eb2c:
    if (ctx->pc == 0x16EB2Cu) {
        ctx->pc = 0x16EB2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16EB30u;
        goto label_fallthrough_0x16eb28;
    }
    ctx->pc = 0x16EB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E9B8u: goto label_16e9b8;
            case 0x16E9BCu: goto label_16e9bc;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9C4u: goto label_16e9c4;
            case 0x16E9C8u: goto label_16e9c8;
            case 0x16E9CCu: goto label_16e9cc;
            case 0x16E9D0u: goto label_16e9d0;
            case 0x16E9D4u: goto label_16e9d4;
            case 0x16E9D8u: goto label_16e9d8;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16E9E0u: goto label_16e9e0;
            case 0x16E9E4u: goto label_16e9e4;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16E9ECu: goto label_16e9ec;
            case 0x16E9F0u: goto label_16e9f0;
            case 0x16E9F4u: goto label_16e9f4;
            case 0x16E9F8u: goto label_16e9f8;
            case 0x16E9FCu: goto label_16e9fc;
            case 0x16EA00u: goto label_16ea00;
            case 0x16EA04u: goto label_16ea04;
            case 0x16EA08u: goto label_16ea08;
            case 0x16EA0Cu: goto label_16ea0c;
            case 0x16EA10u: goto label_16ea10;
            case 0x16EA14u: goto label_16ea14;
            case 0x16EA18u: goto label_16ea18;
            case 0x16EA1Cu: goto label_16ea1c;
            case 0x16EA20u: goto label_16ea20;
            case 0x16EA24u: goto label_16ea24;
            case 0x16EA28u: goto label_16ea28;
            case 0x16EA2Cu: goto label_16ea2c;
            case 0x16EA30u: goto label_16ea30;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA38u: goto label_16ea38;
            case 0x16EA3Cu: goto label_16ea3c;
            case 0x16EA40u: goto label_16ea40;
            case 0x16EA44u: goto label_16ea44;
            case 0x16EA48u: goto label_16ea48;
            case 0x16EA4Cu: goto label_16ea4c;
            case 0x16EA50u: goto label_16ea50;
            case 0x16EA54u: goto label_16ea54;
            case 0x16EA58u: goto label_16ea58;
            case 0x16EA5Cu: goto label_16ea5c;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EA64u: goto label_16ea64;
            case 0x16EA68u: goto label_16ea68;
            case 0x16EA6Cu: goto label_16ea6c;
            case 0x16EA70u: goto label_16ea70;
            case 0x16EA74u: goto label_16ea74;
            case 0x16EA78u: goto label_16ea78;
            case 0x16EA7Cu: goto label_16ea7c;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EA84u: goto label_16ea84;
            case 0x16EA88u: goto label_16ea88;
            case 0x16EA8Cu: goto label_16ea8c;
            case 0x16EA90u: goto label_16ea90;
            case 0x16EA94u: goto label_16ea94;
            case 0x16EA98u: goto label_16ea98;
            case 0x16EA9Cu: goto label_16ea9c;
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA4u: goto label_16eaa4;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAACu: goto label_16eaac;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EAB4u: goto label_16eab4;
            case 0x16EAB8u: goto label_16eab8;
            case 0x16EABCu: goto label_16eabc;
            case 0x16EAC0u: goto label_16eac0;
            case 0x16EAC4u: goto label_16eac4;
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EAD4u: goto label_16ead4;
            case 0x16EAD8u: goto label_16ead8;
            case 0x16EADCu: goto label_16eadc;
            case 0x16EAE0u: goto label_16eae0;
            case 0x16EAE4u: goto label_16eae4;
            case 0x16EAE8u: goto label_16eae8;
            case 0x16EAECu: goto label_16eaec;
            case 0x16EAF0u: goto label_16eaf0;
            case 0x16EAF4u: goto label_16eaf4;
            case 0x16EAF8u: goto label_16eaf8;
            case 0x16EAFCu: goto label_16eafc;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB04u: goto label_16eb04;
            case 0x16EB08u: goto label_16eb08;
            case 0x16EB0Cu: goto label_16eb0c;
            case 0x16EB10u: goto label_16eb10;
            case 0x16EB14u: goto label_16eb14;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB1Cu: goto label_16eb1c;
            case 0x16EB20u: goto label_16eb20;
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB28u: goto label_16eb28;
            case 0x16EB2Cu: goto label_16eb2c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16eb28:
    ctx->pc = 0x16EB30u;
}
