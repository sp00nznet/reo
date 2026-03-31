#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ADA20
// Address: 0x1ada20 - 0x1adc00
void sub_001ADA20_0x1ada20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ada20u;

    // 0x1ada20: 0x27bdffb0
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ada24: 0xffbf0040
    ctx->pc = 0x1ada24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ada28: 0x7fb30030
    ctx->pc = 0x1ada28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ada2c: 0x7fb20020
    ctx->pc = 0x1ada2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ada30: 0x80982d
    ctx->pc = 0x1ada30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada34: 0x7fb10010
    ctx->pc = 0x1ada34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ada38: 0xa0902d
    ctx->pc = 0x1ada38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada3c: 0xc0882d
    ctx->pc = 0x1ada3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada40: 0x2404000e
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ada44: 0xc06e0a8
    ctx->pc = 0x1ADA44u;
    SET_GPR_U32(ctx, 31, 0x1ADA4Cu);
    ctx->pc = 0x1ADA48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA4Cu; }
    }
    if (ctx->pc != 0x1ADA4Cu) { return; }
    ctx->pc = 0x1ADA4Cu;
    // 0x1ada4c: 0x10400003
    ctx->pc = 0x1ADA4Cu;
    {
        const bool branch_taken_0x1ada4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1ada4c) {
            ctx->pc = 0x1ADA5Cu;
            goto label_1ada5c;
        }
    }
    ctx->pc = 0x1ADA54u;
    // 0x1ada54: 0x1000002c
    ctx->pc = 0x1ADA54u;
    {
        const bool branch_taken_0x1ada54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ada54) {
            ctx->pc = 0x1ADB08u;
            goto label_1adb08;
        }
    }
    ctx->pc = 0x1ADA5Cu;
label_1ada5c:
    // 0x1ada5c: 0xc06e0a8
    ctx->pc = 0x1ADA5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA64u);
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA64u; }
    }
    if (ctx->pc != 0x1ADA64u) { return; }
    ctx->pc = 0x1ADA64u;
    // 0x1ada64: 0x10400005
    ctx->pc = 0x1ADA64u;
    {
        const bool branch_taken_0x1ada64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA68u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1ada64) {
            ctx->pc = 0x1ADA7Cu;
            goto label_1ada7c;
        }
    }
    ctx->pc = 0x1ADA6Cu;
    // 0x1ada6c: 0x16600003
    ctx->pc = 0x1ADA6Cu;
    {
        const bool branch_taken_0x1ada6c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ada6c) {
            ctx->pc = 0x1ADA7Cu;
            goto label_1ada7c;
        }
    }
    ctx->pc = 0x1ADA74u;
    // 0x1ada74: 0x10000024
    ctx->pc = 0x1ADA74u;
    {
        const bool branch_taken_0x1ada74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ada74) {
            ctx->pc = 0x1ADB08u;
            goto label_1adb08;
        }
    }
    ctx->pc = 0x1ADA7Cu;
label_1ada7c:
    // 0x1ada7c: 0x3c02002c
    ctx->pc = 0x1ada7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ada80: 0x731821
    ctx->pc = 0x1ada80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ada84: 0x24428d78
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937976));
    // 0x1ada88: 0x380c0
    ctx->pc = 0x1ada88u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ada8c: 0x501021
    ctx->pc = 0x1ada8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ada90: 0x8c450000
    ctx->pc = 0x1ada90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ada94: 0xc06b7f4
    ctx->pc = 0x1ADA94u;
    SET_GPR_U32(ctx, 31, 0x1ADA9Cu);
    ctx->pc = 0x1ADA98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA9Cu; }
    }
    if (ctx->pc != 0x1ADA9Cu) { return; }
    ctx->pc = 0x1ADA9Cu;
    // 0x1ada9c: 0x621000b
    ctx->pc = 0x1ADA9Cu;
    {
        const bool branch_taken_0x1ada9c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1ADAA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x1ada9c) {
            ctx->pc = 0x1ADACCu;
            goto label_1adacc;
        }
    }
    ctx->pc = 0x1ADAA4u;
    // 0x1adaa4: 0x3c02002c
    ctx->pc = 0x1adaa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adaa8: 0x131880
    ctx->pc = 0x1adaa8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1adaac: 0x24428dc8
    ctx->pc = 0x1adaacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1adab0: 0x240302d
    ctx->pc = 0x1adab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adab4: 0x438821
    ctx->pc = 0x1adab4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adab8: 0x8e240000
    ctx->pc = 0x1adab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1adabc: 0xc04cd24
    ctx->pc = 0x1ADABCu;
    SET_GPR_U32(ctx, 31, 0x1ADAC4u);
    ctx->pc = 0x1ADAC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133490_0x133490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAC4u; }
    }
    if (ctx->pc != 0x1ADAC4u) { return; }
    ctx->pc = 0x1ADAC4u;
    // 0x1adac4: 0x10000009
    ctx->pc = 0x1ADAC4u;
    {
        const bool branch_taken_0x1adac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADAC8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1adac4) {
            ctx->pc = 0x1ADAECu;
            goto label_1adaec;
        }
    }
    ctx->pc = 0x1ADACCu;
label_1adacc:
    // 0x1adacc: 0x131880
    ctx->pc = 0x1adaccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1adad0: 0x220282d
    ctx->pc = 0x1adad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adad4: 0x24428dc8
    ctx->pc = 0x1adad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1adad8: 0x438821
    ctx->pc = 0x1adad8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adadc: 0x8e240000
    ctx->pc = 0x1adadcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1adae0: 0xc04cd24
    ctx->pc = 0x1ADAE0u;
    SET_GPR_U32(ctx, 31, 0x1ADAE8u);
    ctx->pc = 0x1ADAE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133490_0x133490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAE8u; }
    }
    if (ctx->pc != 0x1ADAE8u) { return; }
    ctx->pc = 0x1ADAE8u;
    // 0x1adae8: 0x8e240000
    ctx->pc = 0x1adae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1adaec:
    // 0x1adaec: 0xc04cb94
    ctx->pc = 0x1ADAECu;
    SET_GPR_U32(ctx, 31, 0x1ADAF4u);
    ctx->pc = 0x1ADAF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E50_0x132e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF4u; }
    }
    if (ctx->pc != 0x1ADAF4u) { return; }
    ctx->pc = 0x1ADAF4u;
    // 0x1adaf4: 0x3c03002c
    ctx->pc = 0x1adaf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1adaf8: 0x102d
    ctx->pc = 0x1adaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adafc: 0x24638d70
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937968));
    // 0x1adb00: 0x701821
    ctx->pc = 0x1adb00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1adb04: 0xa0600000
    ctx->pc = 0x1adb04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1adb08:
    // 0x1adb08: 0xdfbf0040
    ctx->pc = 0x1adb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb0c: 0x7bb30030
    ctx->pc = 0x1adb0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adb10: 0x7bb20020
    ctx->pc = 0x1adb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adb14: 0x7bb10010
    ctx->pc = 0x1adb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb18: 0x7bb00000
    ctx->pc = 0x1adb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb1c: 0x3e00008
    ctx->pc = 0x1ADB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADA5Cu: goto label_1ada5c;
            case 0x1ADA7Cu: goto label_1ada7c;
            case 0x1ADACCu: goto label_1adacc;
            case 0x1ADAECu: goto label_1adaec;
            case 0x1ADB08u: goto label_1adb08;
            case 0x1ADB60u: goto label_1adb60;
            case 0x1ADB78u: goto label_1adb78;
            case 0x1ADB98u: goto label_1adb98;
            case 0x1ADBE8u: goto label_1adbe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADB24u;
    // 0x1adb24: 0x0
    ctx->pc = 0x1adb24u;
    // NOP
    // 0x1adb28: 0x0
    ctx->pc = 0x1adb28u;
    // NOP
    // 0x1adb2c: 0x0
    ctx->pc = 0x1adb2cu;
    // NOP
    // 0x1adb30: 0x27bdffd0
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1adb34: 0xffbf0020
    ctx->pc = 0x1adb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adb38: 0x7fb10010
    ctx->pc = 0x1adb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adb3c: 0x80882d
    ctx->pc = 0x1adb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb40: 0x7fb00000
    ctx->pc = 0x1adb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adb44: 0xc06acbc
    ctx->pc = 0x1ADB44u;
    SET_GPR_U32(ctx, 31, 0x1ADB4Cu);
    ctx->pc = 0x1ADB48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AB2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB2F0_0x1ab2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB4Cu; }
    }
    if (ctx->pc != 0x1ADB4Cu) { return; }
    ctx->pc = 0x1ADB4Cu;
    // 0x1adb4c: 0x40802d
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb50: 0x6010003
    ctx->pc = 0x1ADB50u;
    {
        const bool branch_taken_0x1adb50 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1ADB54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x1adb50) {
            ctx->pc = 0x1ADB60u;
            goto label_1adb60;
        }
    }
    ctx->pc = 0x1ADB58u;
    // 0x1adb58: 0x10000023
    ctx->pc = 0x1ADB58u;
    {
        const bool branch_taken_0x1adb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADB5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1adb58) {
            ctx->pc = 0x1ADBE8u;
            goto label_1adbe8;
        }
    }
    ctx->pc = 0x1ADB60u;
label_1adb60:
    // 0x1adb60: 0xc06e0a8
    ctx->pc = 0x1ADB60u;
    SET_GPR_U32(ctx, 31, 0x1ADB68u);
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB68u; }
    }
    if (ctx->pc != 0x1ADB68u) { return; }
    ctx->pc = 0x1ADB68u;
    // 0x1adb68: 0x10400003
    ctx->pc = 0x1ADB68u;
    {
        const bool branch_taken_0x1adb68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADB6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1adb68) {
            ctx->pc = 0x1ADB78u;
            goto label_1adb78;
        }
    }
    ctx->pc = 0x1ADB70u;
    // 0x1adb70: 0x1000001d
    ctx->pc = 0x1ADB70u;
    {
        const bool branch_taken_0x1adb70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADB74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1adb70) {
            ctx->pc = 0x1ADBE8u;
            goto label_1adbe8;
        }
    }
    ctx->pc = 0x1ADB78u;
label_1adb78:
    // 0x1adb78: 0xc06e0a8
    ctx->pc = 0x1ADB78u;
    SET_GPR_U32(ctx, 31, 0x1ADB80u);
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB80u; }
    }
    if (ctx->pc != 0x1ADB80u) { return; }
    ctx->pc = 0x1ADB80u;
    // 0x1adb80: 0x10400005
    ctx->pc = 0x1ADB80u;
    {
        const bool branch_taken_0x1adb80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADB84u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1adb80) {
            ctx->pc = 0x1ADB98u;
            goto label_1adb98;
        }
    }
    ctx->pc = 0x1ADB88u;
    // 0x1adb88: 0x16200003
    ctx->pc = 0x1ADB88u;
    {
        const bool branch_taken_0x1adb88 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1adb88) {
            ctx->pc = 0x1ADB98u;
            goto label_1adb98;
        }
    }
    ctx->pc = 0x1ADB90u;
    // 0x1adb90: 0x10000015
    ctx->pc = 0x1ADB90u;
    {
        const bool branch_taken_0x1adb90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADB94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1adb90) {
            ctx->pc = 0x1ADBE8u;
            goto label_1adbe8;
        }
    }
    ctx->pc = 0x1ADB98u;
label_1adb98:
    // 0x1adb98: 0x3c02002c
    ctx->pc = 0x1adb98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adb9c: 0x711821
    ctx->pc = 0x1adb9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adba0: 0x24428d78
    ctx->pc = 0x1adba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937976));
    // 0x1adba4: 0x318c0
    ctx->pc = 0x1adba4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1adba8: 0x431021
    ctx->pc = 0x1adba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adbac: 0x8c450000
    ctx->pc = 0x1adbacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adbb0: 0xc06b7f4
    ctx->pc = 0x1ADBB0u;
    SET_GPR_U32(ctx, 31, 0x1ADBB8u);
    ctx->pc = 0x1ADBB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBB8u; }
    }
    if (ctx->pc != 0x1ADBB8u) { return; }
    ctx->pc = 0x1ADBB8u;
    // 0x1adbb8: 0x3c02002c
    ctx->pc = 0x1adbb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adbbc: 0x111880
    ctx->pc = 0x1adbbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1adbc0: 0x200302d
    ctx->pc = 0x1adbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbc4: 0x24428dc8
    ctx->pc = 0x1adbc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1adbc8: 0x438021
    ctx->pc = 0x1adbc8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adbcc: 0x8e040000
    ctx->pc = 0x1adbccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1adbd0: 0xc04cd24
    ctx->pc = 0x1ADBD0u;
    SET_GPR_U32(ctx, 31, 0x1ADBD8u);
    ctx->pc = 0x1ADBD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x133490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133490_0x133490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBD8u; }
    }
    if (ctx->pc != 0x1ADBD8u) { return; }
    ctx->pc = 0x1ADBD8u;
    // 0x1adbd8: 0x8e040000
    ctx->pc = 0x1adbd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1adbdc: 0xc04cb94
    ctx->pc = 0x1ADBDCu;
    SET_GPR_U32(ctx, 31, 0x1ADBE4u);
    ctx->pc = 0x1ADBE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E50_0x132e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBE4u; }
    }
    if (ctx->pc != 0x1ADBE4u) { return; }
    ctx->pc = 0x1ADBE4u;
    // 0x1adbe4: 0x102d
    ctx->pc = 0x1adbe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adbe8:
    // 0x1adbe8: 0xdfbf0020
    ctx->pc = 0x1adbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adbec: 0x7bb10010
    ctx->pc = 0x1adbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbf0: 0x7bb00000
    ctx->pc = 0x1adbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adbf4: 0x3e00008
    ctx->pc = 0x1ADBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADBF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADA5Cu: goto label_1ada5c;
            case 0x1ADA7Cu: goto label_1ada7c;
            case 0x1ADACCu: goto label_1adacc;
            case 0x1ADAECu: goto label_1adaec;
            case 0x1ADB08u: goto label_1adb08;
            case 0x1ADB60u: goto label_1adb60;
            case 0x1ADB78u: goto label_1adb78;
            case 0x1ADB98u: goto label_1adb98;
            case 0x1ADBE8u: goto label_1adbe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADBFCu;
    // 0x1adbfc: 0x0
    ctx->pc = 0x1adbfcu;
    // NOP
}
