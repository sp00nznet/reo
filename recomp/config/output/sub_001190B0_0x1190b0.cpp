#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001190B0
// Address: 0x1190b0 - 0x119310
void sub_001190B0_0x1190b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1190b0u;

    // 0x1190b0: 0x27bdff20
    ctx->pc = 0x1190b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1190b4: 0xffb700b0
    ctx->pc = 0x1190b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1190b8: 0xffb600a0
    ctx->pc = 0x1190b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1190bc: 0xc0b82d
    ctx->pc = 0x1190bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190c0: 0xffb40080
    ctx->pc = 0x1190c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1190c4: 0xa0b02d
    ctx->pc = 0x1190c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190c8: 0xffb10050
    ctx->pc = 0x1190c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1190cc: 0x3c140026
    ctx->pc = 0x1190ccu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x1190d0: 0xffb00040
    ctx->pc = 0x1190d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1190d4: 0x2691ca40
    ctx->pc = 0x1190d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 4294953536));
    // 0x1190d8: 0xffbf00d0
    ctx->pc = 0x1190d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1190dc: 0xffbe00c0
    ctx->pc = 0x1190dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1190e0: 0xffb50090
    ctx->pc = 0x1190e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1190e4: 0xffb30070
    ctx->pc = 0x1190e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1190e8: 0xc04607e
    ctx->pc = 0x1190E8u;
    SET_GPR_U32(ctx, 31, 0x1190F0u);
    ctx->pc = 0x1190ECu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190F0u; }
    }
    if (ctx->pc != 0x1190F0u) { return; }
    ctx->pc = 0x1190F0u;
    // 0x1190f0: 0x40802d
    ctx->pc = 0x1190f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190f4: 0xc04619c
    ctx->pc = 0x1190F4u;
    SET_GPR_U32(ctx, 31, 0x1190FCu);
    ctx->pc = 0x1190F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1190FCu; }
    }
    if (ctx->pc != 0x1190FCu) { return; }
    ctx->pc = 0x1190FCu;
    // 0x1190fc: 0x3c030021
    ctx->pc = 0x1190fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x119100: 0x8c629ddc
    ctx->pc = 0x119100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x119104: 0x14400005
    ctx->pc = 0x119104u;
    {
        const bool branch_taken_0x119104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x119104) {
            ctx->pc = 0x11911Cu;
            goto label_11911c;
        }
    }
    ctx->pc = 0x11910Cu;
    // 0x11910c: 0xc0461a8
    ctx->pc = 0x11910Cu;
    SET_GPR_U32(ctx, 31, 0x119114u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119114u; }
    }
    if (ctx->pc != 0x119114u) { return; }
    ctx->pc = 0x119114u;
    // 0x119114: 0x10000072
    ctx->pc = 0x119114u;
    {
        const bool branch_taken_0x119114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119118u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x119114) {
            ctx->pc = 0x1192E0u;
            goto label_1192e0;
        }
    }
    ctx->pc = 0x11911Cu;
label_11911c:
    // 0x11911c: 0x12000004
    ctx->pc = 0x11911Cu;
    {
        const bool branch_taken_0x11911c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11911c) {
            ctx->pc = 0x119130u;
            goto label_119130;
        }
    }
    ctx->pc = 0x119124u;
    // 0x119124: 0x8e130004
    ctx->pc = 0x119124u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119128: 0x56600005
    ctx->pc = 0x119128u;
    {
        const bool branch_taken_0x119128 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x119128) {
            ctx->pc = 0x11912Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x119140u;
            goto label_119140;
        }
    }
    ctx->pc = 0x119130u;
label_119130:
    // 0x119130: 0xc0461a8
    ctx->pc = 0x119130u;
    SET_GPR_U32(ctx, 31, 0x119138u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119138u; }
    }
    if (ctx->pc != 0x119138u) { return; }
    ctx->pc = 0x119138u;
    // 0x119138: 0x10000069
    ctx->pc = 0x119138u;
    {
        const bool branch_taken_0x119138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11913Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x119138) {
            ctx->pc = 0x1192E0u;
            goto label_1192e0;
        }
    }
    ctx->pc = 0x119140u;
label_119140:
    // 0x119140: 0x3c020026
    ctx->pc = 0x119140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x119144: 0x2442df40
    ctx->pc = 0x119144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x119148: 0x24040001
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11914c: 0xae23000c
    ctx->pc = 0x11914cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x119150: 0x2021023
    ctx->pc = 0x119150u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119154: 0xafa40014
    ctx->pc = 0x119154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x119158: 0x21103
    ctx->pc = 0x119158u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x11915c: 0xae22001c
    ctx->pc = 0x11915cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x119160: 0x27a40010
    ctx->pc = 0x119160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x119164: 0xae360010
    ctx->pc = 0x119164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x119168: 0xae370014
    ctx->pc = 0x119168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x11916c: 0xafa00018
    ctx->pc = 0x11916cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x119170: 0xc045188
    ctx->pc = 0x119170u;
    SET_GPR_U32(ctx, 31, 0x119178u);
    ctx->pc = 0x119174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119178u; }
    }
    if (ctx->pc != 0x119178u) { return; }
    ctx->pc = 0x119178u;
    // 0x119178: 0x40902d
    ctx->pc = 0x119178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11917c: 0x24030004
    ctx->pc = 0x11917cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119180: 0x27a20030
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
    // 0x119184: 0xae230008
    ctx->pc = 0x119184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x119188: 0xae220004
    ctx->pc = 0x119188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11918c: 0x32628000
    ctx->pc = 0x11918cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
    // 0x119190: 0x10400021
    ctx->pc = 0x119190u;
    {
        const bool branch_taken_0x119190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x119194u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294953536), GPR_U32(ctx, 18));
        if (branch_taken_0x119190) {
            ctx->pc = 0x119218u;
            goto label_119218;
        }
    }
    ctx->pc = 0x119198u;
    // 0x119198: 0x3c100021
    ctx->pc = 0x119198u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x11919c: 0xc045198
    ctx->pc = 0x11919Cu;
    SET_GPR_U32(ctx, 31, 0x1191A4u);
    ctx->pc = 0x1191A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942188)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191A4u; }
    }
    if (ctx->pc != 0x1191A4u) { return; }
    ctx->pc = 0x1191A4u;
    // 0x1191a4: 0x3c070021
    ctx->pc = 0x1191a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x1191a8: 0x302d
    ctx->pc = 0x1191a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191ac: 0x8ce39d58
    ctx->pc = 0x1191acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294942040)));
    // 0x1191b0: 0x2402ffff
    ctx->pc = 0x1191b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1191b4: 0x14620006
    ctx->pc = 0x1191B4u;
    {
        const bool branch_taken_0x1191b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1191B8u;
        SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
        if (branch_taken_0x1191b4) {
            ctx->pc = 0x1191D0u;
            goto label_1191d0;
        }
    }
    ctx->pc = 0x1191BCu;
    // 0x1191bc: 0x8e83ca40
    ctx->pc = 0x1191bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294953536)));
    // 0x1191c0: 0x31023
    ctx->pc = 0x1191c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1191c4: 0xace39d58
    ctx->pc = 0x1191c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294942040), GPR_U32(ctx, 3));
    // 0x1191c8: 0x1000000f
    ctx->pc = 0x1191C8u;
    {
        const bool branch_taken_0x1191c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1191CCu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294953536), GPR_U32(ctx, 2));
        if (branch_taken_0x1191c8) {
            ctx->pc = 0x119208u;
            goto label_119208;
        }
    }
    ctx->pc = 0x1191D0u;
label_1191d0:
    // 0x1191d0: 0x24c60001
    ctx->pc = 0x1191d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1191d4:
    // 0x1191d4: 0x28c20020
    ctx->pc = 0x1191d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x1191d8: 0x1040000b
    ctx->pc = 0x1191D8u;
    {
        const bool branch_taken_0x1191d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1191DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1191d8) {
            ctx->pc = 0x119208u;
            goto label_119208;
        }
    }
    ctx->pc = 0x1191E0u;
    // 0x1191e0: 0x24e39d58
    ctx->pc = 0x1191e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294942040));
    // 0x1191e4: 0x432821
    ctx->pc = 0x1191e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1191e8: 0x2404ffff
    ctx->pc = 0x1191e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1191ec: 0x8ca20000
    ctx->pc = 0x1191ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1191f0: 0x1444fff8
    ctx->pc = 0x1191F0u;
    {
        const bool branch_taken_0x1191f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1191F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1191f0) {
            ctx->pc = 0x1191D4u;
            goto label_1191d4;
        }
    }
    ctx->pc = 0x1191F8u;
    // 0x1191f8: 0x8e220000
    ctx->pc = 0x1191f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1191fc: 0x21823
    ctx->pc = 0x1191fcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x119200: 0xaca20000
    ctx->pc = 0x119200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x119204: 0xae230000
    ctx->pc = 0x119204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_119208:
    // 0x119208: 0xc045190
    ctx->pc = 0x119208u;
    SET_GPR_U32(ctx, 31, 0x119210u);
    ctx->pc = 0x11920Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942188)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119210u; }
    }
    if (ctx->pc != 0x119210u) { return; }
    ctx->pc = 0x119210u;
    // 0x119210: 0x10000003
    ctx->pc = 0x119210u;
    {
        const bool branch_taken_0x119210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119214u;
        SET_GPR_U32(ctx, 21, ((uint32_t)8192 << 16));
        if (branch_taken_0x119210) {
            ctx->pc = 0x119220u;
            goto label_119220;
        }
    }
    ctx->pc = 0x119218u;
label_119218:
    // 0x119218: 0x3c1e0026
    ctx->pc = 0x119218u;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
    // 0x11921c: 0x3c152000
    ctx->pc = 0x11921cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)8192 << 16));
label_119220:
    // 0x119220: 0x2751024
    ctx->pc = 0x119220u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x119224: 0x14400005
    ctx->pc = 0x119224u;
    {
        const bool branch_taken_0x119224 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x119228u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119224) {
            ctx->pc = 0x11923Cu;
            goto label_11923c;
        }
    }
    ctx->pc = 0x11922Cu;
    // 0x11922c: 0x2c0202d
    ctx->pc = 0x11922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119230: 0xc045bf4
    ctx->pc = 0x119230u;
    SET_GPR_U32(ctx, 31, 0x119238u);
    ctx->pc = 0x119234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119238u; }
    }
    if (ctx->pc != 0x119238u) { return; }
    ctx->pc = 0x119238u;
    // 0x119238: 0x220202d
    ctx->pc = 0x119238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11923c:
    // 0x11923c: 0xc045bf4
    ctx->pc = 0x11923Cu;
    SET_GPR_U32(ctx, 31, 0x119244u);
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119244u; }
    }
    if (ctx->pc != 0x119244u) { return; }
    ctx->pc = 0x119244u;
    // 0x119244: 0x27d0d680
    ctx->pc = 0x119244u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x119248: 0x3c020026
    ctx->pc = 0x119248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x11924c: 0x2687ca40
    ctx->pc = 0x11924cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 20), 4294953536));
    // 0x119250: 0x2444e140
    ctx->pc = 0x119250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959424));
    // 0x119254: 0xafa00000
    ctx->pc = 0x119254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119258: 0x24050002
    ctx->pc = 0x119258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11925c: 0x302d
    ctx->pc = 0x11925cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119260: 0x24080020
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x119264: 0x200482d
    ctx->pc = 0x119264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119268: 0x240a0004
    ctx->pc = 0x119268u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11926c: 0xc045e7a
    ctx->pc = 0x11926Cu;
    SET_GPR_U32(ctx, 31, 0x119274u);
    ctx->pc = 0x119270u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119274u; }
    }
    if (ctx->pc != 0x119274u) { return; }
    ctx->pc = 0x119274u;
    // 0x119274: 0x4410007
    ctx->pc = 0x119274u;
    {
        const bool branch_taken_0x119274 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119278u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        if (branch_taken_0x119274) {
            ctx->pc = 0x119294u;
            goto label_119294;
        }
    }
    ctx->pc = 0x11927Cu;
    // 0x11927c: 0xc04518c
    ctx->pc = 0x11927Cu;
    SET_GPR_U32(ctx, 31, 0x119284u);
    ctx->pc = 0x119280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119284u; }
    }
    if (ctx->pc != 0x119284u) { return; }
    ctx->pc = 0x119284u;
    // 0x119284: 0xc0461a8
    ctx->pc = 0x119284u;
    SET_GPR_U32(ctx, 31, 0x11928Cu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11928Cu; }
    }
    if (ctx->pc != 0x11928Cu) { return; }
    ctx->pc = 0x11928Cu;
    // 0x11928c: 0x10000014
    ctx->pc = 0x11928Cu;
    {
        const bool branch_taken_0x11928c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119290u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11928c) {
            ctx->pc = 0x1192E0u;
            goto label_1192e0;
        }
    }
    ctx->pc = 0x119294u;
label_119294:
    // 0x119294: 0xc0461a8
    ctx->pc = 0x119294u;
    SET_GPR_U32(ctx, 31, 0x11929Cu);
    ctx->pc = 0x119298u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11929Cu; }
    }
    if (ctx->pc != 0x11929Cu) { return; }
    ctx->pc = 0x11929Cu;
    // 0x11929c: 0x16000005
    ctx->pc = 0x11929Cu;
    {
        const bool branch_taken_0x11929c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1192A0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
        if (branch_taken_0x11929c) {
            ctx->pc = 0x1192B4u;
            goto label_1192b4;
        }
    }
    ctx->pc = 0x1192A4u;
    // 0x1192a4: 0xc04518c
    ctx->pc = 0x1192A4u;
    SET_GPR_U32(ctx, 31, 0x1192ACu);
    ctx->pc = 0x1192A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192ACu; }
    }
    if (ctx->pc != 0x1192ACu) { return; }
    ctx->pc = 0x1192ACu;
    // 0x1192ac: 0x1000000c
    ctx->pc = 0x1192ACu;
    {
        const bool branch_taken_0x1192ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1192B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x1192ac) {
            ctx->pc = 0x1192E0u;
            goto label_1192e0;
        }
    }
    ctx->pc = 0x1192B4u;
label_1192b4:
    // 0x1192b4: 0x10400005
    ctx->pc = 0x1192B4u;
    {
        const bool branch_taken_0x1192b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1192b4) {
            ctx->pc = 0x1192CCu;
            goto label_1192cc;
        }
    }
    ctx->pc = 0x1192BCu;
    // 0x1192bc: 0xc04518c
    ctx->pc = 0x1192BCu;
    SET_GPR_U32(ctx, 31, 0x1192C4u);
    ctx->pc = 0x1192C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192C4u; }
    }
    if (ctx->pc != 0x1192C4u) { return; }
    ctx->pc = 0x1192C4u;
    // 0x1192c4: 0x10000006
    ctx->pc = 0x1192C4u;
    {
        const bool branch_taken_0x1192c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1192C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1192c4) {
            ctx->pc = 0x1192E0u;
            goto label_1192e0;
        }
    }
    ctx->pc = 0x1192CCu;
label_1192cc:
    // 0x1192cc: 0xc045198
    ctx->pc = 0x1192CCu;
    SET_GPR_U32(ctx, 31, 0x1192D4u);
    ctx->pc = 0x1192D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192D4u; }
    }
    if (ctx->pc != 0x1192D4u) { return; }
    ctx->pc = 0x1192D4u;
    // 0x1192d4: 0xc04518c
    ctx->pc = 0x1192D4u;
    SET_GPR_U32(ctx, 31, 0x1192DCu);
    ctx->pc = 0x1192D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192DCu; }
    }
    if (ctx->pc != 0x1192DCu) { return; }
    ctx->pc = 0x1192DCu;
    // 0x1192dc: 0x8fa20030
    ctx->pc = 0x1192dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1192e0:
    // 0x1192e0: 0xdfbf00d0
    ctx->pc = 0x1192e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1192e4: 0xdfbe00c0
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1192e8: 0xdfb700b0
    ctx->pc = 0x1192e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1192ec: 0xdfb600a0
    ctx->pc = 0x1192ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1192f0: 0xdfb50090
    ctx->pc = 0x1192f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1192f4: 0xdfb40080
    ctx->pc = 0x1192f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1192f8: 0xdfb30070
    ctx->pc = 0x1192f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1192fc: 0xdfb20060
    ctx->pc = 0x1192fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119300: 0xdfb10050
    ctx->pc = 0x119300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119304: 0xdfb00040
    ctx->pc = 0x119304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119308: 0x3e00008
    ctx->pc = 0x119308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11930Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11911Cu: goto label_11911c;
            case 0x119130u: goto label_119130;
            case 0x119140u: goto label_119140;
            case 0x1191D0u: goto label_1191d0;
            case 0x1191D4u: goto label_1191d4;
            case 0x119208u: goto label_119208;
            case 0x119218u: goto label_119218;
            case 0x119220u: goto label_119220;
            case 0x11923Cu: goto label_11923c;
            case 0x119294u: goto label_119294;
            case 0x1192B4u: goto label_1192b4;
            case 0x1192CCu: goto label_1192cc;
            case 0x1192E0u: goto label_1192e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119310u;
}
