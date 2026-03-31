#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112820
// Address: 0x112820 - 0x112b98
void sub_00112820_0x112820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112820u;

    // 0x112820: 0x27bdff70
    ctx->pc = 0x112820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x112824: 0x52c00
    ctx->pc = 0x112824u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x112828: 0xffb60070
    ctx->pc = 0x112828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11282c: 0x63400
    ctx->pc = 0x11282cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x112830: 0xffb50060
    ctx->pc = 0x112830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x112834: 0x73c00
    ctx->pc = 0x112834u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x112838: 0xffb40050
    ctx->pc = 0x112838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11283c: 0x84400
    ctx->pc = 0x11283cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x112840: 0xffb30040
    ctx->pc = 0x112840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x112844: 0x94c00
    ctx->pc = 0x112844u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x112848: 0xffb20030
    ctx->pc = 0x112848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11284c: 0x5b403
    ctx->pc = 0x11284cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x112850: 0xffb00010
    ctx->pc = 0x112850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112854: 0x79403
    ctx->pc = 0x112854u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x112858: 0xffb10020
    ctx->pc = 0x112858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11285c: 0x68403
    ctx->pc = 0x11285cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x112860: 0xffbf0080
    ctx->pc = 0x112860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x112864: 0x8ac03
    ctx->pc = 0x112864u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x112868: 0x9a403
    ctx->pc = 0x112868u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 16));
    // 0x11286c: 0xc0449be
    ctx->pc = 0x11286Cu;
    SET_GPR_U32(ctx, 31, 0x112874u);
    ctx->pc = 0x112870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1126F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001126F8_0x1126f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112874u; }
    }
    if (ctx->pc != 0x112874u) { return; }
    ctx->pc = 0x112874u;
    // 0x112874: 0x40882d
    ctx->pc = 0x112874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112878: 0x96240002
    ctx->pc = 0x112878u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x11287c: 0x2482fffe
    ctx->pc = 0x11287cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x112880: 0x2c420002
    ctx->pc = 0x112880u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x112884: 0x5440000e
    ctx->pc = 0x112884u;
    {
        const bool branch_taken_0x112884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x112884) {
            ctx->pc = 0x112888u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x1128C0u;
            goto label_1128c0;
        }
    }
    ctx->pc = 0x11288Cu;
    // 0x11288c: 0xc0449dc
    ctx->pc = 0x11288Cu;
    SET_GPR_U32(ctx, 31, 0x112894u);
    ctx->pc = 0x112770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112770_0x112770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112894u; }
    }
    if (ctx->pc != 0x112894u) { return; }
    ctx->pc = 0x112894u;
    // 0x112894: 0x10400008
    ctx->pc = 0x112894u;
    {
        const bool branch_taken_0x112894 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x112898u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x112894) {
            ctx->pc = 0x1128B8u;
            goto label_1128b8;
        }
    }
    ctx->pc = 0x11289Cu;
    // 0x11289c: 0x86240002
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1128a0: 0x37a60004
    ctx->pc = 0x1128a0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    // 0x1128a4: 0x37a70008
    ctx->pc = 0x1128a4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 8));
    // 0x1128a8: 0xc044a04
    ctx->pc = 0x1128A8u;
    SET_GPR_U32(ctx, 31, 0x1128B0u);
    ctx->pc = 0x1128ACu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x112810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112810_0x112810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1128B0u; }
    }
    if (ctx->pc != 0x1128B0u) { return; }
    ctx->pc = 0x1128B0u;
    // 0x1128b0: 0x10000006
    ctx->pc = 0x1128B0u;
    {
        const bool branch_taken_0x1128b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1128B4u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        if (branch_taken_0x1128b0) {
            ctx->pc = 0x1128CCu;
            goto label_1128cc;
        }
    }
    ctx->pc = 0x1128B8u;
label_1128b8:
    // 0x1128b8: 0x96240002
    ctx->pc = 0x1128b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1128bc: 0xafa0000c
    ctx->pc = 0x1128bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1128c0:
    // 0x1128c0: 0xafa00008
    ctx->pc = 0x1128c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1128c4: 0xafa00004
    ctx->pc = 0x1128c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1128c8: 0xafa00000
    ctx->pc = 0x1128c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1128cc:
    // 0x1128cc: 0x24030066
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1128d0: 0x96260000
    ctx->pc = 0x1128d0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1128d4: 0xfe630000
    ctx->pc = 0x1128d4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1128d8: 0x86220000
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1128dc: 0x10400005
    ctx->pc = 0x1128DCu;
    {
        const bool branch_taken_0x1128dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1128E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1128dc) {
            ctx->pc = 0x1128F4u;
            goto label_1128f4;
        }
    }
    ctx->pc = 0x1128E4u;
    // 0x1128e4: 0x86220004
    ctx->pc = 0x1128e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1128e8: 0x14400002
    ctx->pc = 0x1128E8u;
    {
        const bool branch_taken_0x1128e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1128ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1128e8) {
            ctx->pc = 0x1128F4u;
            goto label_1128f4;
        }
    }
    ctx->pc = 0x1128F0u;
    // 0x1128f0: 0x24020001
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1128f4:
    // 0x1128f4: 0xfe620008
    ctx->pc = 0x1128f4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1128f8: 0x2602003f
    ctx->pc = 0x1128f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 63));
    // 0x1128fc: 0x32c3000f
    ctx->pc = 0x1128fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 22), 15));
    // 0x112900: 0x21183
    ctx->pc = 0x112900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x112904: 0x42400
    ctx->pc = 0x112904u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x112908: 0x3042003f
    ctx->pc = 0x112908u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x11290c: 0x31bf8
    ctx->pc = 0x11290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x112910: 0x21278
    ctx->pc = 0x112910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x112914: 0x42c03
    ctx->pc = 0x112914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x112918: 0x621825
    ctx->pc = 0x112918u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11291c: 0x24040002
    ctx->pc = 0x11291cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x112920: 0x14a4002b
    ctx->pc = 0x112920u;
    {
        const bool branch_taken_0x112920 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x112924u;
        WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
        if (branch_taken_0x112920) {
            ctx->pc = 0x1129D0u;
            goto label_1129d0;
        }
    }
    ctx->pc = 0x112928u;
    // 0x112928: 0x61400
    ctx->pc = 0x112928u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x11292c: 0x24030001
    ctx->pc = 0x11292cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x112930: 0x21403
    ctx->pc = 0x112930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x112934: 0x1443001b
    ctx->pc = 0x112934u;
    {
        const bool branch_taken_0x112934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x112938u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2559));
        if (branch_taken_0x112934) {
            ctx->pc = 0x1129A4u;
            goto label_1129a4;
        }
    }
    ctx->pc = 0x11293Cu;
    // 0x11293c: 0x260309ff
    ctx->pc = 0x11293cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2559));
    // 0x112940: 0x52000001
    ctx->pc = 0x112940u;
    {
        const bool branch_taken_0x112940 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x112940) {
            ctx->pc = 0x112944u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x112948u;
            goto label_112948;
        }
    }
    ctx->pc = 0x112948u;
label_112948:
    // 0x112948: 0x70001a
    ctx->pc = 0x112948u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11294c: 0x8fa20004
    ctx->pc = 0x11294cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x112950: 0x8fa50000
    ctx->pc = 0x112950u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112954: 0x2821021
    ctx->pc = 0x112954u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x112958: 0x86260004
    ctx->pc = 0x112958u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11295c: 0x24420032
    ctx->pc = 0x11295cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 50));
    // 0x112960: 0x64a5027c
    ctx->pc = 0x112960u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)636);
    // 0x112964: 0x30420fff
    ctx->pc = 0x112964u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x112968: 0x23b38
    ctx->pc = 0x112968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x11296c: 0x1812
    ctx->pc = 0x11296cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x112970: 0x702018
    ctx->pc = 0x112970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x112974: 0x72a31018
    ctx->pc = 0x112974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x112978: 0x2463ffff
    ctx->pc = 0x112978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11297c: 0x355f8
    ctx->pc = 0x11297cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x112980: 0x2484ffff
    ctx->pc = 0x112980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x112984: 0x4183c
    ctx->pc = 0x112984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x112988: 0x45282d
    ctx->pc = 0x112988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x11298c: 0x10c00032
    ctx->pc = 0x11298Cu;
    {
        const bool branch_taken_0x11298c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x112990u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
        if (branch_taken_0x11298c) {
            ctx->pc = 0x112A58u;
            goto label_112a58;
        }
    }
    ctx->pc = 0x112994u;
    // 0x112994: 0x121040
    ctx->pc = 0x112994u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x112998: 0x1431825
    ctx->pc = 0x112998u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x11299c: 0x10000030
    ctx->pc = 0x11299Cu;
    {
        const bool branch_taken_0x11299c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1129A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x11299c) {
            ctx->pc = 0x112A60u;
            goto label_112a60;
        }
    }
    ctx->pc = 0x1129A4u;
label_1129a4:
    // 0x1129a4: 0x52000001
    ctx->pc = 0x1129A4u;
    {
        const bool branch_taken_0x1129a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1129a4) {
            ctx->pc = 0x1129A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1129ACu;
            goto label_1129ac;
        }
    }
    ctx->pc = 0x1129ACu;
label_1129ac:
    // 0x1129ac: 0x50001a
    ctx->pc = 0x1129acu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1129b0: 0x2647ffff
    ctx->pc = 0x1129b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1129b4: 0x8fa50000
    ctx->pc = 0x1129b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129b8: 0x73b3c
    ctx->pc = 0x1129b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x1129bc: 0x8fa30004
    ctx->pc = 0x1129bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1129c0: 0x64a5027c
    ctx->pc = 0x1129c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)636);
    // 0x1129c4: 0x2831821
    ctx->pc = 0x1129c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1129c8: 0x10000035
    ctx->pc = 0x1129C8u;
    {
        const bool branch_taken_0x1129c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1129CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 25));
        if (branch_taken_0x1129c8) {
            ctx->pc = 0x112AA0u;
            goto label_112aa0;
        }
    }
    ctx->pc = 0x1129D0u;
label_1129d0:
    // 0x1129d0: 0x24020003
    ctx->pc = 0x1129d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1129d4: 0x14a20043
    ctx->pc = 0x1129D4u;
    {
        const bool branch_taken_0x1129d4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1129D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x1129d4) {
            ctx->pc = 0x112AE4u;
            goto label_112ae4;
        }
    }
    ctx->pc = 0x1129DCu;
    // 0x1129dc: 0x61400
    ctx->pc = 0x1129dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x1129e0: 0x24030001
    ctx->pc = 0x1129e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1129e4: 0x21403
    ctx->pc = 0x1129e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1129e8: 0x14430023
    ctx->pc = 0x1129E8u;
    {
        const bool branch_taken_0x1129e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1129ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2559));
        if (branch_taken_0x1129e8) {
            ctx->pc = 0x112A78u;
            goto label_112a78;
        }
    }
    ctx->pc = 0x1129F0u;
    // 0x1129f0: 0x260309ff
    ctx->pc = 0x1129f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2559));
    // 0x1129f4: 0x52000001
    ctx->pc = 0x1129F4u;
    {
        const bool branch_taken_0x1129f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1129f4) {
            ctx->pc = 0x1129F8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1129FCu;
            goto label_1129fc;
        }
    }
    ctx->pc = 0x1129FCu;
label_1129fc:
    // 0x1129fc: 0x70001a
    ctx->pc = 0x1129fcu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x112a00: 0x8fa20004
    ctx->pc = 0x112a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x112a04: 0x8fa50000
    ctx->pc = 0x112a04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112a08: 0x2821021
    ctx->pc = 0x112a08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x112a0c: 0x86260004
    ctx->pc = 0x112a0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112a10: 0x24420048
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 72));
    // 0x112a14: 0x64a50290
    ctx->pc = 0x112a14u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)656);
    // 0x112a18: 0x30420fff
    ctx->pc = 0x112a18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x112a1c: 0x23b38
    ctx->pc = 0x112a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x112a20: 0x1812
    ctx->pc = 0x112a20u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x112a24: 0x702018
    ctx->pc = 0x112a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x112a28: 0x72a31018
    ctx->pc = 0x112a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x112a2c: 0x2463ffff
    ctx->pc = 0x112a2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x112a30: 0x355f8
    ctx->pc = 0x112a30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x112a34: 0x2484ffff
    ctx->pc = 0x112a34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x112a38: 0x4183c
    ctx->pc = 0x112a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x112a3c: 0x45282d
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x112a40: 0x10c00005
    ctx->pc = 0x112A40u;
    {
        const bool branch_taken_0x112a40 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x112A44u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
        if (branch_taken_0x112a40) {
            ctx->pc = 0x112A58u;
            goto label_112a58;
        }
    }
    ctx->pc = 0x112A48u;
    // 0x112a48: 0x121040
    ctx->pc = 0x112a48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x112a4c: 0x1431825
    ctx->pc = 0x112a4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x112a50: 0x10000003
    ctx->pc = 0x112A50u;
    {
        const bool branch_taken_0x112a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112A54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x112a50) {
            ctx->pc = 0x112A60u;
            goto label_112a60;
        }
    }
    ctx->pc = 0x112A58u;
label_112a58:
    // 0x112a58: 0x2642ffff
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x112a5c: 0x1431825
    ctx->pc = 0x112a5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_112a60:
    // 0x112a60: 0x2133c
    ctx->pc = 0x112a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x112a64: 0xa21025
    ctx->pc = 0x112a64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x112a68: 0x621825
    ctx->pc = 0x112a68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112a6c: 0x671025
    ctx->pc = 0x112a6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x112a70: 0x1000003d
    ctx->pc = 0x112A70u;
    {
        const bool branch_taken_0x112a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112A74u;
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x112a70) {
            ctx->pc = 0x112B68u;
            goto label_112b68;
        }
    }
    ctx->pc = 0x112A78u;
label_112a78:
    // 0x112a78: 0x52000001
    ctx->pc = 0x112A78u;
    {
        const bool branch_taken_0x112a78 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x112a78) {
            ctx->pc = 0x112A7Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x112A80u;
            goto label_112a80;
        }
    }
    ctx->pc = 0x112A80u;
label_112a80:
    // 0x112a80: 0x50001a
    ctx->pc = 0x112a80u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x112a84: 0x2647ffff
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x112a88: 0x8fa50000
    ctx->pc = 0x112a88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112a8c: 0x73b3c
    ctx->pc = 0x112a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x112a90: 0x8fa30004
    ctx->pc = 0x112a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x112a94: 0x64a50290
    ctx->pc = 0x112a94u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)656);
    // 0x112a98: 0x2831821
    ctx->pc = 0x112a98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x112a9c: 0x24630024
    ctx->pc = 0x112a9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
label_112aa0:
    // 0x112aa0: 0x30630fff
    ctx->pc = 0x112aa0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x112aa4: 0x31b38
    ctx->pc = 0x112aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x112aa8: 0x1012
    ctx->pc = 0x112aa8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x112aac: 0x2a23018
    ctx->pc = 0x112aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x112ab0: 0x70502018
    ctx->pc = 0x112ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x112ab4: 0x2442ffff
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x112ab8: 0xc5282d
    ctx->pc = 0x112ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x112abc: 0x215f8
    ctx->pc = 0x112abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x112ac0: 0x30a50fff
    ctx->pc = 0x112ac0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x112ac4: 0x2484ffff
    ctx->pc = 0x112ac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x112ac8: 0xa72825
    ctx->pc = 0x112ac8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x112acc: 0x4203c
    ctx->pc = 0x112accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x112ad0: 0x441025
    ctx->pc = 0x112ad0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112ad4: 0x451025
    ctx->pc = 0x112ad4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112ad8: 0x431025
    ctx->pc = 0x112ad8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112adc: 0x10000022
    ctx->pc = 0x112ADCu;
    {
        const bool branch_taken_0x112adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112AE0u;
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x112adc) {
            ctx->pc = 0x112B68u;
            goto label_112b68;
        }
    }
    ctx->pc = 0x112AE4u;
label_112ae4:
    // 0x112ae4: 0x14a2001e
    ctx->pc = 0x112AE4u;
    {
        const bool branch_taken_0x112ae4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x112AE8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x112ae4) {
            ctx->pc = 0x112B60u;
            goto label_112b60;
        }
    }
    ctx->pc = 0x112AECu;
    // 0x112aec: 0x240202d0
    ctx->pc = 0x112aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 720));
    // 0x112af0: 0x8fa50000
    ctx->pc = 0x112af0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112af4: 0x501023
    ctx->pc = 0x112af4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112af8: 0x153040
    ctx->pc = 0x112af8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 21), 1));
    // 0x112afc: 0x21fc2
    ctx->pc = 0x112afcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x112b00: 0x8fa40004
    ctx->pc = 0x112b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x112b04: 0x431021
    ctx->pc = 0x112b04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112b08: 0x64c700e8
    ctx->pc = 0x112b08u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 6) + (int64_t)232);
    // 0x112b0c: 0x21043
    ctx->pc = 0x112b0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x112b10: 0x103040
    ctx->pc = 0x112b10u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 1));
    // 0x112b14: 0x21040
    ctx->pc = 0x112b14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x112b18: 0x2842021
    ctx->pc = 0x112b18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x112b1c: 0x45282d
    ctx->pc = 0x112b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x112b20: 0x2643ffff
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x112b24: 0xa7282d
    ctx->pc = 0x112b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
    // 0x112b28: 0x24c6ffff
    ctx->pc = 0x112b28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x112b2c: 0x31b3c
    ctx->pc = 0x112b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x112b30: 0x6303c
    ctx->pc = 0x112b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x112b34: 0x30a50fff
    ctx->pc = 0x112b34u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x112b38: 0x24840023
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 35));
    // 0x112b3c: 0x3c020080
    ctx->pc = 0x112b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x112b40: 0x661825
    ctx->pc = 0x112b40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x112b44: 0xa22825
    ctx->pc = 0x112b44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x112b48: 0x30840fff
    ctx->pc = 0x112b48u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 4095));
    // 0x112b4c: 0x651825
    ctx->pc = 0x112b4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112b50: 0x42338
    ctx->pc = 0x112b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x112b54: 0x641825
    ctx->pc = 0x112b54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112b58: 0x10000003
    ctx->pc = 0x112B58u;
    {
        const bool branch_taken_0x112b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112B5Cu;
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
        if (branch_taken_0x112b58) {
            ctx->pc = 0x112B68u;
            goto label_112b68;
        }
    }
    ctx->pc = 0x112B60u;
label_112b60:
    // 0x112b60: 0xc045a12
    ctx->pc = 0x112B60u;
    SET_GPR_U32(ctx, 31, 0x112B68u);
    ctx->pc = 0x112B64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936008));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B68u; }
    }
    if (ctx->pc != 0x112B68u) { return; }
    ctx->pc = 0x112B68u;
label_112b68:
    // 0x112b68: 0xfe600020
    ctx->pc = 0x112b68u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x112b6c: 0xdfbf0080
    ctx->pc = 0x112b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112b70: 0xdfb60070
    ctx->pc = 0x112b70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112b74: 0xdfb50060
    ctx->pc = 0x112b74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112b78: 0xdfb40050
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112b7c: 0xdfb30040
    ctx->pc = 0x112b7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112b80: 0xdfb20030
    ctx->pc = 0x112b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112b84: 0xdfb10020
    ctx->pc = 0x112b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112b88: 0xdfb00010
    ctx->pc = 0x112b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112b8c: 0x3e00008
    ctx->pc = 0x112B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1128B8u: goto label_1128b8;
            case 0x1128C0u: goto label_1128c0;
            case 0x1128CCu: goto label_1128cc;
            case 0x1128F4u: goto label_1128f4;
            case 0x112948u: goto label_112948;
            case 0x1129A4u: goto label_1129a4;
            case 0x1129ACu: goto label_1129ac;
            case 0x1129D0u: goto label_1129d0;
            case 0x1129FCu: goto label_1129fc;
            case 0x112A58u: goto label_112a58;
            case 0x112A60u: goto label_112a60;
            case 0x112A78u: goto label_112a78;
            case 0x112A80u: goto label_112a80;
            case 0x112AA0u: goto label_112aa0;
            case 0x112AE4u: goto label_112ae4;
            case 0x112B60u: goto label_112b60;
            case 0x112B68u: goto label_112b68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112B94u;
    // 0x112b94: 0x0
    ctx->pc = 0x112b94u;
    // NOP
}
