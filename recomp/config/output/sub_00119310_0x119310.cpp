#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00119310
// Address: 0x119310 - 0x1195d0
void sub_00119310_0x119310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119310u;

    // 0x119310: 0x27bdff20
    ctx->pc = 0x119310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x119314: 0xffb50090
    ctx->pc = 0x119314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x119318: 0xffb10050
    ctx->pc = 0x119318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11931c: 0xc0a82d
    ctx->pc = 0x11931cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119320: 0xffb700b0
    ctx->pc = 0x119320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x119324: 0xa0882d
    ctx->pc = 0x119324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119328: 0xffb20060
    ctx->pc = 0x119328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11932c: 0x3c170026
    ctx->pc = 0x11932cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)38 << 16));
    // 0x119330: 0xffb00040
    ctx->pc = 0x119330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x119334: 0x26f2ca40
    ctx->pc = 0x119334u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 23), 4294953536));
    // 0x119338: 0xffbf00d0
    ctx->pc = 0x119338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11933c: 0xffbe00c0
    ctx->pc = 0x11933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x119340: 0xffb600a0
    ctx->pc = 0x119340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x119344: 0xffb40080
    ctx->pc = 0x119344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x119348: 0xc04607e
    ctx->pc = 0x119348u;
    SET_GPR_U32(ctx, 31, 0x119350u);
    ctx->pc = 0x11934Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119350u; }
    }
    if (ctx->pc != 0x119350u) { return; }
    ctx->pc = 0x119350u;
    // 0x119350: 0x40802d
    ctx->pc = 0x119350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119354: 0xc04619c
    ctx->pc = 0x119354u;
    SET_GPR_U32(ctx, 31, 0x11935Cu);
    ctx->pc = 0x119358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11935Cu; }
    }
    if (ctx->pc != 0x11935Cu) { return; }
    ctx->pc = 0x11935Cu;
    // 0x11935c: 0x3c030021
    ctx->pc = 0x11935cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x119360: 0x8c629ddc
    ctx->pc = 0x119360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x119364: 0x14400005
    ctx->pc = 0x119364u;
    {
        const bool branch_taken_0x119364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x119364) {
            ctx->pc = 0x11937Cu;
            goto label_11937c;
        }
    }
    ctx->pc = 0x11936Cu;
    // 0x11936c: 0xc0461a8
    ctx->pc = 0x11936Cu;
    SET_GPR_U32(ctx, 31, 0x119374u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119374u; }
    }
    if (ctx->pc != 0x119374u) { return; }
    ctx->pc = 0x119374u;
    // 0x119374: 0x1000008a
    ctx->pc = 0x119374u;
    {
        const bool branch_taken_0x119374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119378u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x119374) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x11937Cu;
label_11937c:
    // 0x11937c: 0x12000004
    ctx->pc = 0x11937Cu;
    {
        const bool branch_taken_0x11937c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11937c) {
            ctx->pc = 0x119390u;
            goto label_119390;
        }
    }
    ctx->pc = 0x119384u;
    // 0x119384: 0x8e160004
    ctx->pc = 0x119384u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119388: 0x56c00005
    ctx->pc = 0x119388u;
    {
        const bool branch_taken_0x119388 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x119388) {
            ctx->pc = 0x11938Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1193A0u;
            goto label_1193a0;
        }
    }
    ctx->pc = 0x119390u;
label_119390:
    // 0x119390: 0xc0461a8
    ctx->pc = 0x119390u;
    SET_GPR_U32(ctx, 31, 0x119398u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119398u; }
    }
    if (ctx->pc != 0x119398u) { return; }
    ctx->pc = 0x119398u;
    // 0x119398: 0x10000081
    ctx->pc = 0x119398u;
    {
        const bool branch_taken_0x119398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11939Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x119398) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x1193A0u;
label_1193a0:
    // 0x1193a0: 0x3c020026
    ctx->pc = 0x1193a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1193a4: 0x2442df40
    ctx->pc = 0x1193a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x1193a8: 0x24040001
    ctx->pc = 0x1193a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1193ac: 0xae43000c
    ctx->pc = 0x1193acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1193b0: 0x2021023
    ctx->pc = 0x1193b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1193b4: 0xafa40014
    ctx->pc = 0x1193b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1193b8: 0x21103
    ctx->pc = 0x1193b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1193bc: 0xae42002c
    ctx->pc = 0x1193bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1193c0: 0x27a40010
    ctx->pc = 0x1193c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1193c4: 0xae550014
    ctx->pc = 0x1193c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x1193c8: 0xae510010
    ctx->pc = 0x1193c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1193cc: 0xafa00018
    ctx->pc = 0x1193ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1193d0: 0xc045188
    ctx->pc = 0x1193D0u;
    SET_GPR_U32(ctx, 31, 0x1193D8u);
    ctx->pc = 0x1193D4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193D8u; }
    }
    if (ctx->pc != 0x1193D8u) { return; }
    ctx->pc = 0x1193D8u;
    // 0x1193d8: 0x40a02d
    ctx->pc = 0x1193d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193dc: 0x24030004
    ctx->pc = 0x1193dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1193e0: 0x27a20030
    ctx->pc = 0x1193e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1193e4: 0xae430008
    ctx->pc = 0x1193e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1193e8: 0xae420004
    ctx->pc = 0x1193e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1193ec: 0x32c28000
    ctx->pc = 0x1193ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 32768));
    // 0x1193f0: 0x10400024
    ctx->pc = 0x1193F0u;
    {
        const bool branch_taken_0x1193f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1193F4u;
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294953536), GPR_U32(ctx, 20));
        if (branch_taken_0x1193f0) {
            ctx->pc = 0x119484u;
            goto label_119484;
        }
    }
    ctx->pc = 0x1193F8u;
    // 0x1193f8: 0x3c130021
    ctx->pc = 0x1193f8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)33 << 16));
    // 0x1193fc: 0xc045198
    ctx->pc = 0x1193FCu;
    SET_GPR_U32(ctx, 31, 0x119404u);
    ctx->pc = 0x119400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294942188)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119404u; }
    }
    if (ctx->pc != 0x119404u) { return; }
    ctx->pc = 0x119404u;
    // 0x119404: 0x3c070021
    ctx->pc = 0x119404u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x119408: 0x302d
    ctx->pc = 0x119408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11940c: 0x8ce39d58
    ctx->pc = 0x11940cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294942040)));
    // 0x119410: 0x2402ffff
    ctx->pc = 0x119410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119414: 0x14620008
    ctx->pc = 0x119414u;
    {
        const bool branch_taken_0x119414 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x119418u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), 15));
        if (branch_taken_0x119414) {
            ctx->pc = 0x119438u;
            goto label_119438;
        }
    }
    ctx->pc = 0x11941Cu;
    // 0x11941c: 0x8ee3ca40
    ctx->pc = 0x11941cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294953536)));
    // 0x119420: 0x3c1e0026
    ctx->pc = 0x119420u;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
    // 0x119424: 0x31023
    ctx->pc = 0x119424u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x119428: 0xace39d58
    ctx->pc = 0x119428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294942040), GPR_U32(ctx, 3));
    // 0x11942c: 0x10000011
    ctx->pc = 0x11942Cu;
    {
        const bool branch_taken_0x11942c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119430u;
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294953536), GPR_U32(ctx, 2));
        if (branch_taken_0x11942c) {
            ctx->pc = 0x119474u;
            goto label_119474;
        }
    }
    ctx->pc = 0x119434u;
    // 0x119434: 0x0
    ctx->pc = 0x119434u;
    // NOP
label_119438:
    // 0x119438: 0x3c1e0026
    ctx->pc = 0x119438u;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
    // 0x11943c: 0x24c60001
    ctx->pc = 0x11943cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_119440:
    // 0x119440: 0x28c20020
    ctx->pc = 0x119440u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x119444: 0x1040000b
    ctx->pc = 0x119444u;
    {
        const bool branch_taken_0x119444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x119448u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x119444) {
            ctx->pc = 0x119474u;
            goto label_119474;
        }
    }
    ctx->pc = 0x11944Cu;
    // 0x11944c: 0x24e39d58
    ctx->pc = 0x11944cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294942040));
    // 0x119450: 0x432821
    ctx->pc = 0x119450u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119454: 0x2404ffff
    ctx->pc = 0x119454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119458: 0x8ca20000
    ctx->pc = 0x119458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11945c: 0x1444fff8
    ctx->pc = 0x11945Cu;
    {
        const bool branch_taken_0x11945c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x119460u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x11945c) {
            ctx->pc = 0x119440u;
            goto label_119440;
        }
    }
    ctx->pc = 0x119464u;
    // 0x119464: 0x8e420000
    ctx->pc = 0x119464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119468: 0x21823
    ctx->pc = 0x119468u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11946c: 0xaca20000
    ctx->pc = 0x11946cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x119470: 0xae430000
    ctx->pc = 0x119470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_119474:
    // 0x119474: 0xc045190
    ctx->pc = 0x119474u;
    SET_GPR_U32(ctx, 31, 0x11947Cu);
    ctx->pc = 0x119478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294942188)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11947Cu; }
    }
    if (ctx->pc != 0x11947Cu) { return; }
    ctx->pc = 0x11947Cu;
    // 0x11947c: 0x10000003
    ctx->pc = 0x11947Cu;
    {
        const bool branch_taken_0x11947c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11947c) {
            ctx->pc = 0x11948Cu;
            goto label_11948c;
        }
    }
    ctx->pc = 0x119484u;
label_119484:
    // 0x119484: 0x3230000f
    ctx->pc = 0x119484u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), 15));
    // 0x119488: 0x3c1e0026
    ctx->pc = 0x119488u;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
label_11948c:
    // 0x11948c: 0x16000003
    ctx->pc = 0x11948Cu;
    {
        const bool branch_taken_0x11948c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x119490u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x11948c) {
            ctx->pc = 0x11949Cu;
            goto label_11949c;
        }
    }
    ctx->pc = 0x119494u;
    // 0x119494: 0x10000004
    ctx->pc = 0x119494u;
    {
        const bool branch_taken_0x119494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119498u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119494) {
            ctx->pc = 0x1194A8u;
            goto label_1194a8;
        }
    }
    ctx->pc = 0x11949Cu;
label_11949c:
    // 0x11949c: 0x2623fff0
    ctx->pc = 0x11949cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1194a0: 0x21100
    ctx->pc = 0x1194a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1194a4: 0x438023
    ctx->pc = 0x1194a4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1194a8:
    // 0x1194a8: 0x2b0182a
    ctx->pc = 0x1194a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 16)));
    // 0x1194ac: 0x3c132000
    ctx->pc = 0x1194acu;
    SET_GPR_U32(ctx, 19, ((uint32_t)8192 << 16));
    // 0x1194b0: 0x2d31024
    ctx->pc = 0x1194b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1194b4: 0x14400004
    ctx->pc = 0x1194B4u;
    {
        const bool branch_taken_0x1194b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1194B8u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 21));
        if (branch_taken_0x1194b4) {
            ctx->pc = 0x1194C8u;
            goto label_1194c8;
        }
    }
    ctx->pc = 0x1194BCu;
    // 0x1194bc: 0x2a0282d
    ctx->pc = 0x1194bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194c0: 0xc045bf4
    ctx->pc = 0x1194C0u;
    SET_GPR_U32(ctx, 31, 0x1194C8u);
    ctx->pc = 0x1194C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194C8u; }
    }
    if (ctx->pc != 0x1194C8u) { return; }
    ctx->pc = 0x1194C8u;
label_1194c8:
    // 0x1194c8: 0x2338825
    ctx->pc = 0x1194c8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1194cc: 0xae500018
    ctx->pc = 0x1194ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x1194d0: 0x1a00000b
    ctx->pc = 0x1194D0u;
    {
        const bool branch_taken_0x1194d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1194D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1194d0) {
            ctx->pc = 0x119500u;
            goto label_119500;
        }
    }
    ctx->pc = 0x1194D8u;
    // 0x1194d8: 0x2646001c
    ctx->pc = 0x1194d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 28));
    // 0x1194dc: 0x0
    ctx->pc = 0x1194dcu;
    // NOP
label_1194e0:
    // 0x1194e0: 0x2251021
    ctx->pc = 0x1194e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1194e4: 0xc52021
    ctx->pc = 0x1194e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1194e8: 0x90430000
    ctx->pc = 0x1194e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1194ec: 0x24a50001
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1194f0: 0xb0102a
    ctx->pc = 0x1194f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 16)));
    // 0x1194f4: 0xa0830000
    ctx->pc = 0x1194f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1194f8: 0x1440fff9
    ctx->pc = 0x1194F8u;
    {
        const bool branch_taken_0x1194f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1194f8) {
            ctx->pc = 0x1194E0u;
            goto label_1194e0;
        }
    }
    ctx->pc = 0x119500u;
label_119500:
    // 0x119500: 0x27d0d680
    ctx->pc = 0x119500u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x119504: 0x3c020026
    ctx->pc = 0x119504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x119508: 0x2444e140
    ctx->pc = 0x119508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959424));
    // 0x11950c: 0x26e7ca40
    ctx->pc = 0x11950cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 4294953536));
    // 0x119510: 0xafa00000
    ctx->pc = 0x119510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119514: 0x24050003
    ctx->pc = 0x119514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x119518: 0x302d
    ctx->pc = 0x119518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11951c: 0x24080030
    ctx->pc = 0x11951cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 48));
    // 0x119520: 0x200482d
    ctx->pc = 0x119520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119524: 0x240a0004
    ctx->pc = 0x119524u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119528: 0xc045e7a
    ctx->pc = 0x119528u;
    SET_GPR_U32(ctx, 31, 0x119530u);
    ctx->pc = 0x11952Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119530u; }
    }
    if (ctx->pc != 0x119530u) { return; }
    ctx->pc = 0x119530u;
    // 0x119530: 0x4410007
    ctx->pc = 0x119530u;
    {
        const bool branch_taken_0x119530 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119534u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x119530) {
            ctx->pc = 0x119550u;
            goto label_119550;
        }
    }
    ctx->pc = 0x119538u;
    // 0x119538: 0xc04518c
    ctx->pc = 0x119538u;
    SET_GPR_U32(ctx, 31, 0x119540u);
    ctx->pc = 0x11953Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119540u; }
    }
    if (ctx->pc != 0x119540u) { return; }
    ctx->pc = 0x119540u;
    // 0x119540: 0xc0461a8
    ctx->pc = 0x119540u;
    SET_GPR_U32(ctx, 31, 0x119548u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119548u; }
    }
    if (ctx->pc != 0x119548u) { return; }
    ctx->pc = 0x119548u;
    // 0x119548: 0x10000015
    ctx->pc = 0x119548u;
    {
        const bool branch_taken_0x119548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11954Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119548) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x119550u;
label_119550:
    // 0x119550: 0x2021025
    ctx->pc = 0x119550u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119554: 0xc0461a8
    ctx->pc = 0x119554u;
    SET_GPR_U32(ctx, 31, 0x11955Cu);
    ctx->pc = 0x119558u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11955Cu; }
    }
    if (ctx->pc != 0x11955Cu) { return; }
    ctx->pc = 0x11955Cu;
    // 0x11955c: 0x16000005
    ctx->pc = 0x11955Cu;
    {
        const bool branch_taken_0x11955c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x119560u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 32768));
        if (branch_taken_0x11955c) {
            ctx->pc = 0x119574u;
            goto label_119574;
        }
    }
    ctx->pc = 0x119564u;
    // 0x119564: 0xc04518c
    ctx->pc = 0x119564u;
    SET_GPR_U32(ctx, 31, 0x11956Cu);
    ctx->pc = 0x119568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11956Cu; }
    }
    if (ctx->pc != 0x11956Cu) { return; }
    ctx->pc = 0x11956Cu;
    // 0x11956c: 0x1000000c
    ctx->pc = 0x11956Cu;
    {
        const bool branch_taken_0x11956c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11956c) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x119574u;
label_119574:
    // 0x119574: 0x10400005
    ctx->pc = 0x119574u;
    {
        const bool branch_taken_0x119574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x119574) {
            ctx->pc = 0x11958Cu;
            goto label_11958c;
        }
    }
    ctx->pc = 0x11957Cu;
    // 0x11957c: 0xc04518c
    ctx->pc = 0x11957Cu;
    SET_GPR_U32(ctx, 31, 0x119584u);
    ctx->pc = 0x119580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119584u; }
    }
    if (ctx->pc != 0x119584u) { return; }
    ctx->pc = 0x119584u;
    // 0x119584: 0x10000006
    ctx->pc = 0x119584u;
    {
        const bool branch_taken_0x119584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119588u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119584) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x11958Cu;
label_11958c:
    // 0x11958c: 0xc045198
    ctx->pc = 0x11958Cu;
    SET_GPR_U32(ctx, 31, 0x119594u);
    ctx->pc = 0x119590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119594u; }
    }
    if (ctx->pc != 0x119594u) { return; }
    ctx->pc = 0x119594u;
    // 0x119594: 0xc04518c
    ctx->pc = 0x119594u;
    SET_GPR_U32(ctx, 31, 0x11959Cu);
    ctx->pc = 0x119598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11959Cu; }
    }
    if (ctx->pc != 0x11959Cu) { return; }
    ctx->pc = 0x11959Cu;
    // 0x11959c: 0x8fa20030
    ctx->pc = 0x11959cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1195a0:
    // 0x1195a0: 0xdfbf00d0
    ctx->pc = 0x1195a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1195a4: 0xdfbe00c0
    ctx->pc = 0x1195a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1195a8: 0xdfb700b0
    ctx->pc = 0x1195a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1195ac: 0xdfb600a0
    ctx->pc = 0x1195acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1195b0: 0xdfb50090
    ctx->pc = 0x1195b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1195b4: 0xdfb40080
    ctx->pc = 0x1195b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1195b8: 0xdfb30070
    ctx->pc = 0x1195b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1195bc: 0xdfb20060
    ctx->pc = 0x1195bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1195c0: 0xdfb10050
    ctx->pc = 0x1195c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1195c4: 0xdfb00040
    ctx->pc = 0x1195c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1195c8: 0x3e00008
    ctx->pc = 0x1195C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11937Cu: goto label_11937c;
            case 0x119390u: goto label_119390;
            case 0x1193A0u: goto label_1193a0;
            case 0x119438u: goto label_119438;
            case 0x119440u: goto label_119440;
            case 0x119474u: goto label_119474;
            case 0x119484u: goto label_119484;
            case 0x11948Cu: goto label_11948c;
            case 0x11949Cu: goto label_11949c;
            case 0x1194A8u: goto label_1194a8;
            case 0x1194C8u: goto label_1194c8;
            case 0x1194E0u: goto label_1194e0;
            case 0x119500u: goto label_119500;
            case 0x119550u: goto label_119550;
            case 0x119574u: goto label_119574;
            case 0x11958Cu: goto label_11958c;
            case 0x1195A0u: goto label_1195a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1195D0u;
}
