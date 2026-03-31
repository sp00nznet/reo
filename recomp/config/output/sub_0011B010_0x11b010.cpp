#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011B010
// Address: 0x11b010 - 0x11b248
void sub_0011B010_0x11b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b010u;

    // 0x11b010: 0x27bdff40
    ctx->pc = 0x11b010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11b014: 0xffb40080
    ctx->pc = 0x11b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11b018: 0xffb20060
    ctx->pc = 0x11b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11b01c: 0xc0a02d
    ctx->pc = 0x11b01cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b020: 0xffb50090
    ctx->pc = 0x11b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11b024: 0xa0902d
    ctx->pc = 0x11b024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b028: 0xffb10050
    ctx->pc = 0x11b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11b02c: 0x3c150026
    ctx->pc = 0x11b02cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11b030: 0xffb00040
    ctx->pc = 0x11b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11b034: 0x26b1ca40
    ctx->pc = 0x11b034u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 4294953536));
    // 0x11b038: 0xffbf00b0
    ctx->pc = 0x11b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11b03c: 0xffb600a0
    ctx->pc = 0x11b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11b040: 0xc04607e
    ctx->pc = 0x11B040u;
    SET_GPR_U32(ctx, 31, 0x11B048u);
    ctx->pc = 0x11B044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B048u; }
    }
    if (ctx->pc != 0x11B048u) { return; }
    ctx->pc = 0x11B048u;
    // 0x11b048: 0x40802d
    ctx->pc = 0x11b048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b04c: 0xc04619c
    ctx->pc = 0x11B04Cu;
    SET_GPR_U32(ctx, 31, 0x11B054u);
    ctx->pc = 0x11B050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B054u; }
    }
    if (ctx->pc != 0x11B054u) { return; }
    ctx->pc = 0x11B054u;
    // 0x11b054: 0x3c030021
    ctx->pc = 0x11b054u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11b058: 0x8c629ddc
    ctx->pc = 0x11b058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x11b05c: 0x14400005
    ctx->pc = 0x11B05Cu;
    {
        const bool branch_taken_0x11b05c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11b05c) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B064u;
    // 0x11b064: 0xc0461a8
    ctx->pc = 0x11B064u;
    SET_GPR_U32(ctx, 31, 0x11B06Cu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B06Cu; }
    }
    if (ctx->pc != 0x11B06Cu) { return; }
    ctx->pc = 0x11B06Cu;
    // 0x11b06c: 0x1000006c
    ctx->pc = 0x11B06Cu;
    {
        const bool branch_taken_0x11b06c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11b06c) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B074u;
label_11b074:
    // 0x11b074: 0x12000004
    ctx->pc = 0x11B074u;
    {
        const bool branch_taken_0x11b074 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11b074) {
            ctx->pc = 0x11B088u;
            goto label_11b088;
        }
    }
    ctx->pc = 0x11B07Cu;
    // 0x11b07c: 0x8e130004
    ctx->pc = 0x11b07cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b080: 0x16600005
    ctx->pc = 0x11B080u;
    {
        const bool branch_taken_0x11b080 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x11B084u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x11b080) {
            ctx->pc = 0x11B098u;
            goto label_11b098;
        }
    }
    ctx->pc = 0x11B088u;
label_11b088:
    // 0x11b088: 0xc0461a8
    ctx->pc = 0x11B088u;
    SET_GPR_U32(ctx, 31, 0x11B090u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B090u; }
    }
    if (ctx->pc != 0x11B090u) { return; }
    ctx->pc = 0x11B090u;
    // 0x11b090: 0x10000063
    ctx->pc = 0x11B090u;
    {
        const bool branch_taken_0x11b090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B094u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x11b090) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B098u;
label_11b098:
    // 0x11b098: 0x8e030000
    ctx->pc = 0x11b098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b09c: 0x2442df40
    ctx->pc = 0x11b09cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x11b0a0: 0xfe320010
    ctx->pc = 0x11b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
    // 0x11b0a4: 0x2021023
    ctx->pc = 0x11b0a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11b0a8: 0xae23000c
    ctx->pc = 0x11b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x11b0ac: 0x21103
    ctx->pc = 0x11b0acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x11b0b0: 0xae340018
    ctx->pc = 0x11b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x11b0b4: 0xae22001c
    ctx->pc = 0x11b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x11b0b8: 0x24050001
    ctx->pc = 0x11b0b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b0bc: 0x27a40010
    ctx->pc = 0x11b0bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11b0c0: 0xafa50014
    ctx->pc = 0x11b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x11b0c4: 0xafa00018
    ctx->pc = 0x11b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11b0c8: 0xc045188
    ctx->pc = 0x11B0C8u;
    SET_GPR_U32(ctx, 31, 0x11B0D0u);
    ctx->pc = 0x11B0CCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0D0u; }
    }
    if (ctx->pc != 0x11B0D0u) { return; }
    ctx->pc = 0x11B0D0u;
    // 0x11b0d0: 0x40902d
    ctx->pc = 0x11b0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0d4: 0x24030008
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x11b0d8: 0x27a20030
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11b0dc: 0xae230008
    ctx->pc = 0x11b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x11b0e0: 0xae220004
    ctx->pc = 0x11b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11b0e4: 0x32628000
    ctx->pc = 0x11b0e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
    // 0x11b0e8: 0x10400024
    ctx->pc = 0x11B0E8u;
    {
        const bool branch_taken_0x11b0e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B0ECu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953536), GPR_U32(ctx, 18));
        if (branch_taken_0x11b0e8) {
            ctx->pc = 0x11B17Cu;
            goto label_11b17c;
        }
    }
    ctx->pc = 0x11B0F0u;
    // 0x11b0f0: 0x3c140021
    ctx->pc = 0x11b0f0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x11b0f4: 0xc045198
    ctx->pc = 0x11B0F4u;
    SET_GPR_U32(ctx, 31, 0x11B0FCu);
    ctx->pc = 0x11B0F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294942188)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0FCu; }
    }
    if (ctx->pc != 0x11B0FCu) { return; }
    ctx->pc = 0x11B0FCu;
    // 0x11b0fc: 0x3c070021
    ctx->pc = 0x11b0fcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x11b100: 0x302d
    ctx->pc = 0x11b100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b104: 0x8ce39d58
    ctx->pc = 0x11b104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294942040)));
    // 0x11b108: 0x2402ffff
    ctx->pc = 0x11b108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b10c: 0x14620008
    ctx->pc = 0x11B10Cu;
    {
        const bool branch_taken_0x11b10c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x11B110u;
        SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
        if (branch_taken_0x11b10c) {
            ctx->pc = 0x11B130u;
            goto label_11b130;
        }
    }
    ctx->pc = 0x11B114u;
    // 0x11b114: 0x8ea3ca40
    ctx->pc = 0x11b114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294953536)));
    // 0x11b118: 0x3c100026
    ctx->pc = 0x11b118u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x11b11c: 0x31023
    ctx->pc = 0x11b11cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11b120: 0xace39d58
    ctx->pc = 0x11b120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294942040), GPR_U32(ctx, 3));
    // 0x11b124: 0x10000011
    ctx->pc = 0x11B124u;
    {
        const bool branch_taken_0x11b124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B128u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294953536), GPR_U32(ctx, 2));
        if (branch_taken_0x11b124) {
            ctx->pc = 0x11B16Cu;
            goto label_11b16c;
        }
    }
    ctx->pc = 0x11B12Cu;
    // 0x11b12c: 0x0
    ctx->pc = 0x11b12cu;
    // NOP
label_11b130:
    // 0x11b130: 0x3c100026
    ctx->pc = 0x11b130u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x11b134: 0x24c60001
    ctx->pc = 0x11b134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_11b138:
    // 0x11b138: 0x28c20020
    ctx->pc = 0x11b138u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x11b13c: 0x1040000b
    ctx->pc = 0x11B13Cu;
    {
        const bool branch_taken_0x11b13c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B140u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x11b13c) {
            ctx->pc = 0x11B16Cu;
            goto label_11b16c;
        }
    }
    ctx->pc = 0x11B144u;
    // 0x11b144: 0x24e39d58
    ctx->pc = 0x11b144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294942040));
    // 0x11b148: 0x432821
    ctx->pc = 0x11b148u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b14c: 0x2404ffff
    ctx->pc = 0x11b14cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b150: 0x8ca20000
    ctx->pc = 0x11b150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b154: 0x1444fff8
    ctx->pc = 0x11B154u;
    {
        const bool branch_taken_0x11b154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x11B158u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x11b154) {
            ctx->pc = 0x11B138u;
            goto label_11b138;
        }
    }
    ctx->pc = 0x11B15Cu;
    // 0x11b15c: 0x8e220000
    ctx->pc = 0x11b15cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b160: 0x21823
    ctx->pc = 0x11b160u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11b164: 0xaca20000
    ctx->pc = 0x11b164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11b168: 0xae230000
    ctx->pc = 0x11b168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_11b16c:
    // 0x11b16c: 0xc045190
    ctx->pc = 0x11B16Cu;
    SET_GPR_U32(ctx, 31, 0x11B174u);
    ctx->pc = 0x11B170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294942188)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B174u; }
    }
    if (ctx->pc != 0x11B174u) { return; }
    ctx->pc = 0x11B174u;
    // 0x11b174: 0x10000004
    ctx->pc = 0x11B174u;
    {
        const bool branch_taken_0x11b174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B178u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294956672));
        if (branch_taken_0x11b174) {
            ctx->pc = 0x11B188u;
            goto label_11b188;
        }
    }
    ctx->pc = 0x11B17Cu;
label_11b17c:
    // 0x11b17c: 0x3c160026
    ctx->pc = 0x11b17cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x11b180: 0x3c100026
    ctx->pc = 0x11b180u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x11b184: 0x2610d680
    ctx->pc = 0x11b184u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294956672));
label_11b188:
    // 0x11b188: 0x26c4e140
    ctx->pc = 0x11b188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294959424));
    // 0x11b18c: 0x26a7ca40
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 4294953536));
    // 0x11b190: 0xafa00000
    ctx->pc = 0x11b190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b194: 0x24050016
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 22));
    // 0x11b198: 0x302d
    ctx->pc = 0x11b198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b19c: 0x24080020
    ctx->pc = 0x11b19cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b1a0: 0x200482d
    ctx->pc = 0x11b1a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1a4: 0x240a0004
    ctx->pc = 0x11b1a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b1a8: 0xc045e7a
    ctx->pc = 0x11B1A8u;
    SET_GPR_U32(ctx, 31, 0x11B1B0u);
    ctx->pc = 0x11B1ACu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1B0u; }
    }
    if (ctx->pc != 0x11B1B0u) { return; }
    ctx->pc = 0x11B1B0u;
    // 0x11b1b0: 0x4410007
    ctx->pc = 0x11B1B0u;
    {
        const bool branch_taken_0x11b1b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B1B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11b1b0) {
            ctx->pc = 0x11B1D0u;
            goto label_11b1d0;
        }
    }
    ctx->pc = 0x11B1B8u;
    // 0x11b1b8: 0xc04518c
    ctx->pc = 0x11B1B8u;
    SET_GPR_U32(ctx, 31, 0x11B1C0u);
    ctx->pc = 0x11B1BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1C0u; }
    }
    if (ctx->pc != 0x11B1C0u) { return; }
    ctx->pc = 0x11B1C0u;
    // 0x11b1c0: 0xc0461a8
    ctx->pc = 0x11B1C0u;
    SET_GPR_U32(ctx, 31, 0x11B1C8u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1C8u; }
    }
    if (ctx->pc != 0x11B1C8u) { return; }
    ctx->pc = 0x11B1C8u;
    // 0x11b1c8: 0x10000015
    ctx->pc = 0x11B1C8u;
    {
        const bool branch_taken_0x11b1c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B1CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11b1c8) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B1D0u;
label_11b1d0:
    // 0x11b1d0: 0x2021025
    ctx->pc = 0x11b1d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11b1d4: 0xc0461a8
    ctx->pc = 0x11B1D4u;
    SET_GPR_U32(ctx, 31, 0x11B1DCu);
    ctx->pc = 0x11B1D8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1DCu; }
    }
    if (ctx->pc != 0x11B1DCu) { return; }
    ctx->pc = 0x11B1DCu;
    // 0x11b1dc: 0x16000005
    ctx->pc = 0x11B1DCu;
    {
        const bool branch_taken_0x11b1dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x11B1E0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
        if (branch_taken_0x11b1dc) {
            ctx->pc = 0x11B1F4u;
            goto label_11b1f4;
        }
    }
    ctx->pc = 0x11B1E4u;
    // 0x11b1e4: 0xc04518c
    ctx->pc = 0x11B1E4u;
    SET_GPR_U32(ctx, 31, 0x11B1ECu);
    ctx->pc = 0x11B1E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B1ECu; }
    }
    if (ctx->pc != 0x11B1ECu) { return; }
    ctx->pc = 0x11B1ECu;
    // 0x11b1ec: 0x1000000c
    ctx->pc = 0x11B1ECu;
    {
        const bool branch_taken_0x11b1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B1F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11b1ec) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B1F4u;
label_11b1f4:
    // 0x11b1f4: 0x10400005
    ctx->pc = 0x11B1F4u;
    {
        const bool branch_taken_0x11b1f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11b1f4) {
            ctx->pc = 0x11B20Cu;
            goto label_11b20c;
        }
    }
    ctx->pc = 0x11B1FCu;
    // 0x11b1fc: 0xc04518c
    ctx->pc = 0x11B1FCu;
    SET_GPR_U32(ctx, 31, 0x11B204u);
    ctx->pc = 0x11B200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B204u; }
    }
    if (ctx->pc != 0x11B204u) { return; }
    ctx->pc = 0x11B204u;
    // 0x11b204: 0x10000006
    ctx->pc = 0x11B204u;
    {
        const bool branch_taken_0x11b204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11b204) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B20Cu;
label_11b20c:
    // 0x11b20c: 0xc045198
    ctx->pc = 0x11B20Cu;
    SET_GPR_U32(ctx, 31, 0x11B214u);
    ctx->pc = 0x11B210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B214u; }
    }
    if (ctx->pc != 0x11B214u) { return; }
    ctx->pc = 0x11B214u;
    // 0x11b214: 0xc04518c
    ctx->pc = 0x11B214u;
    SET_GPR_U32(ctx, 31, 0x11B21Cu);
    ctx->pc = 0x11B218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B21Cu; }
    }
    if (ctx->pc != 0x11B21Cu) { return; }
    ctx->pc = 0x11B21Cu;
    // 0x11b21c: 0xdfa20030
    ctx->pc = 0x11b21cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11b220:
    // 0x11b220: 0xdfbf00b0
    ctx->pc = 0x11b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11b224: 0xdfb600a0
    ctx->pc = 0x11b224u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11b228: 0xdfb50090
    ctx->pc = 0x11b228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11b22c: 0xdfb40080
    ctx->pc = 0x11b22cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11b230: 0xdfb30070
    ctx->pc = 0x11b230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b234: 0xdfb20060
    ctx->pc = 0x11b234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11b238: 0xdfb10050
    ctx->pc = 0x11b238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b23c: 0xdfb00040
    ctx->pc = 0x11b23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b240: 0x3e00008
    ctx->pc = 0x11B240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B244u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B074u: goto label_11b074;
            case 0x11B088u: goto label_11b088;
            case 0x11B098u: goto label_11b098;
            case 0x11B130u: goto label_11b130;
            case 0x11B138u: goto label_11b138;
            case 0x11B16Cu: goto label_11b16c;
            case 0x11B17Cu: goto label_11b17c;
            case 0x11B188u: goto label_11b188;
            case 0x11B1D0u: goto label_11b1d0;
            case 0x11B1F4u: goto label_11b1f4;
            case 0x11B20Cu: goto label_11b20c;
            case 0x11B220u: goto label_11b220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B248u;
}
