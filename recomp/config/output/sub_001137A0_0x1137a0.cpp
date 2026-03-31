#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001137A0
// Address: 0x1137a0 - 0x113988
void sub_001137A0_0x1137a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1137a0u;

label_1137a0:
    // 0x1137a0: 0x73c00
    ctx->pc = 0x1137a0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_1137a4:
    // 0x1137a4: 0x63400
    ctx->pc = 0x1137a4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
label_1137a8:
    // 0x1137a8: 0x84400
    ctx->pc = 0x1137a8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
label_1137ac:
    // 0x1137ac: 0x76c03
    ctx->pc = 0x1137acu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 7), 16));
label_1137b0:
    // 0x1137b0: 0x27bdfff0
    ctx->pc = 0x1137b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1137b4:
    // 0x1137b4: 0x52c00
    ctx->pc = 0x1137b4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
label_1137b8:
    // 0x1137b8: 0x94c00
    ctx->pc = 0x1137b8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
label_1137bc:
    // 0x1137bc: 0xa5400
    ctx->pc = 0x1137bcu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
label_1137c0:
    // 0x1137c0: 0xb5c00
    ctx->pc = 0x1137c0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
label_1137c4:
    // 0x1137c4: 0x66403
    ctx->pc = 0x1137c4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 16));
label_1137c8:
    // 0x1137c8: 0x87c03
    ctx->pc = 0x1137c8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 8), 16));
label_1137cc:
    // 0x1137cc: 0xffbf0000
    ctx->pc = 0x1137ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1137d0:
    // 0x1137d0: 0x53c03
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
label_1137d4:
    // 0x1137d4: 0x9c403
    ctx->pc = 0x1137d4u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
label_1137d8:
    // 0x1137d8: 0xa5403
    ctx->pc = 0x1137d8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_1137dc:
    // 0x1137dc: 0xb4403
    ctx->pc = 0x1137dcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
label_1137e0:
    // 0x1137e0: 0x80702d
    ctx->pc = 0x1137e0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1137e4:
    // 0x1137e4: 0x2da2003b
    ctx->pc = 0x1137e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 13), 59));
label_1137e8:
    // 0x1137e8: 0x10400018
label_1137ec:
    if (ctx->pc == 0x1137ECu) {
        ctx->pc = 0x1137ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1137F0u;
        goto label_1137f0;
    }
    ctx->pc = 0x1137E8u;
    {
        const bool branch_taken_0x1137e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1137ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1137e8) {
            ctx->pc = 0x11384Cu;
            goto label_11384c;
        }
    }
    ctx->pc = 0x1137F0u;
label_1137f0:
    // 0x1137f0: 0x3c020024
    ctx->pc = 0x1137f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_1137f4:
    // 0x1137f4: 0xd1880
    ctx->pc = 0x1137f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 2));
label_1137f8:
    // 0x1137f8: 0x244287f0
    ctx->pc = 0x1137f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936560));
label_1137fc:
    // 0x1137fc: 0x621821
    ctx->pc = 0x1137fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_113800:
    // 0x113800: 0x8c640000
    ctx->pc = 0x113800u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_113804:
    // 0x113804: 0x800008
label_113808:
    if (ctx->pc == 0x113808u) {
        ctx->pc = 0x11380Cu;
        goto label_11380c;
    }
    ctx->pc = 0x113804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1137A0u: goto label_1137a0;
            case 0x1137A4u: goto label_1137a4;
            case 0x1137A8u: goto label_1137a8;
            case 0x1137ACu: goto label_1137ac;
            case 0x1137B0u: goto label_1137b0;
            case 0x1137B4u: goto label_1137b4;
            case 0x1137B8u: goto label_1137b8;
            case 0x1137BCu: goto label_1137bc;
            case 0x1137C0u: goto label_1137c0;
            case 0x1137C4u: goto label_1137c4;
            case 0x1137C8u: goto label_1137c8;
            case 0x1137CCu: goto label_1137cc;
            case 0x1137D0u: goto label_1137d0;
            case 0x1137D4u: goto label_1137d4;
            case 0x1137D8u: goto label_1137d8;
            case 0x1137DCu: goto label_1137dc;
            case 0x1137E0u: goto label_1137e0;
            case 0x1137E4u: goto label_1137e4;
            case 0x1137E8u: goto label_1137e8;
            case 0x1137ECu: goto label_1137ec;
            case 0x1137F0u: goto label_1137f0;
            case 0x1137F4u: goto label_1137f4;
            case 0x1137F8u: goto label_1137f8;
            case 0x1137FCu: goto label_1137fc;
            case 0x113800u: goto label_113800;
            case 0x113804u: goto label_113804;
            case 0x113808u: goto label_113808;
            case 0x11380Cu: goto label_11380c;
            case 0x113810u: goto label_113810;
            case 0x113814u: goto label_113814;
            case 0x113818u: goto label_113818;
            case 0x11381Cu: goto label_11381c;
            case 0x113820u: goto label_113820;
            case 0x113824u: goto label_113824;
            case 0x113828u: goto label_113828;
            case 0x11382Cu: goto label_11382c;
            case 0x113830u: goto label_113830;
            case 0x113834u: goto label_113834;
            case 0x113838u: goto label_113838;
            case 0x11383Cu: goto label_11383c;
            case 0x113840u: goto label_113840;
            case 0x113844u: goto label_113844;
            case 0x113848u: goto label_113848;
            case 0x11384Cu: goto label_11384c;
            case 0x113850u: goto label_113850;
            case 0x113854u: goto label_113854;
            case 0x113858u: goto label_113858;
            case 0x11385Cu: goto label_11385c;
            case 0x113860u: goto label_113860;
            case 0x113864u: goto label_113864;
            case 0x113868u: goto label_113868;
            case 0x11386Cu: goto label_11386c;
            case 0x113870u: goto label_113870;
            case 0x113874u: goto label_113874;
            case 0x113878u: goto label_113878;
            case 0x11387Cu: goto label_11387c;
            case 0x113880u: goto label_113880;
            case 0x113884u: goto label_113884;
            case 0x113888u: goto label_113888;
            case 0x11388Cu: goto label_11388c;
            case 0x113890u: goto label_113890;
            case 0x113894u: goto label_113894;
            case 0x113898u: goto label_113898;
            case 0x11389Cu: goto label_11389c;
            case 0x1138A0u: goto label_1138a0;
            case 0x1138A4u: goto label_1138a4;
            case 0x1138A8u: goto label_1138a8;
            case 0x1138ACu: goto label_1138ac;
            case 0x1138B0u: goto label_1138b0;
            case 0x1138B4u: goto label_1138b4;
            case 0x1138B8u: goto label_1138b8;
            case 0x1138BCu: goto label_1138bc;
            case 0x1138C0u: goto label_1138c0;
            case 0x1138C4u: goto label_1138c4;
            case 0x1138C8u: goto label_1138c8;
            case 0x1138CCu: goto label_1138cc;
            case 0x1138D0u: goto label_1138d0;
            case 0x1138D4u: goto label_1138d4;
            case 0x1138D8u: goto label_1138d8;
            case 0x1138DCu: goto label_1138dc;
            case 0x1138E0u: goto label_1138e0;
            case 0x1138E4u: goto label_1138e4;
            case 0x1138E8u: goto label_1138e8;
            case 0x1138ECu: goto label_1138ec;
            case 0x1138F0u: goto label_1138f0;
            case 0x1138F4u: goto label_1138f4;
            case 0x1138F8u: goto label_1138f8;
            case 0x1138FCu: goto label_1138fc;
            case 0x113900u: goto label_113900;
            case 0x113904u: goto label_113904;
            case 0x113908u: goto label_113908;
            case 0x11390Cu: goto label_11390c;
            case 0x113910u: goto label_113910;
            case 0x113914u: goto label_113914;
            case 0x113918u: goto label_113918;
            case 0x11391Cu: goto label_11391c;
            case 0x113920u: goto label_113920;
            case 0x113924u: goto label_113924;
            case 0x113928u: goto label_113928;
            case 0x11392Cu: goto label_11392c;
            case 0x113930u: goto label_113930;
            case 0x113934u: goto label_113934;
            case 0x113938u: goto label_113938;
            case 0x11393Cu: goto label_11393c;
            case 0x113940u: goto label_113940;
            case 0x113944u: goto label_113944;
            case 0x113948u: goto label_113948;
            case 0x11394Cu: goto label_11394c;
            case 0x113950u: goto label_113950;
            case 0x113954u: goto label_113954;
            case 0x113958u: goto label_113958;
            case 0x11395Cu: goto label_11395c;
            case 0x113960u: goto label_113960;
            case 0x113964u: goto label_113964;
            case 0x113968u: goto label_113968;
            case 0x11396Cu: goto label_11396c;
            case 0x113970u: goto label_113970;
            case 0x113974u: goto label_113974;
            case 0x113978u: goto label_113978;
            case 0x11397Cu: goto label_11397c;
            case 0x113980u: goto label_113980;
            case 0x113984u: goto label_113984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11380Cu;
label_11380c:
    // 0x11380c: 0x1481018
    ctx->pc = 0x11380cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_113810:
    // 0x113810: 0x1000000e
label_113814:
    if (ctx->pc == 0x113814u) {
        ctx->pc = 0x113814u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x113818u;
        goto label_113818;
    }
    ctx->pc = 0x113810u;
    {
        const bool branch_taken_0x113810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x113814u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        if (branch_taken_0x113810) {
            ctx->pc = 0x11384Cu;
            goto label_11384c;
        }
    }
    ctx->pc = 0x113818u;
label_113818:
    // 0x113818: 0x1481818
    ctx->pc = 0x113818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_11381c:
    // 0x11381c: 0x31040
    ctx->pc = 0x11381cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_113820:
    // 0x113820: 0x431021
    ctx->pc = 0x113820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113824:
    // 0x113824: 0x10000009
label_113828:
    if (ctx->pc == 0x113828u) {
        ctx->pc = 0x113828u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x11382Cu;
        goto label_11382c;
    }
    ctx->pc = 0x113824u;
    {
        const bool branch_taken_0x113824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x113828u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x113824) {
            ctx->pc = 0x11384Cu;
            goto label_11384c;
        }
    }
    ctx->pc = 0x11382Cu;
label_11382c:
    // 0x11382c: 0x1481018
    ctx->pc = 0x11382cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_113830:
    // 0x113830: 0x10000006
label_113834:
    if (ctx->pc == 0x113834u) {
        ctx->pc = 0x113834u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->pc = 0x113838u;
        goto label_113838;
    }
    ctx->pc = 0x113830u;
    {
        const bool branch_taken_0x113830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x113834u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        if (branch_taken_0x113830) {
            ctx->pc = 0x11384Cu;
            goto label_11384c;
        }
    }
    ctx->pc = 0x113838u;
label_113838:
    // 0x113838: 0x1481018
    ctx->pc = 0x113838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_11383c:
    // 0x11383c: 0x10000003
label_113840:
    if (ctx->pc == 0x113840u) {
        ctx->pc = 0x113840u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x113844u;
        goto label_113844;
    }
    ctx->pc = 0x11383Cu;
    {
        const bool branch_taken_0x11383c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x113840u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x11383c) {
            ctx->pc = 0x11384Cu;
            goto label_11384c;
        }
    }
    ctx->pc = 0x113844u;
label_113844:
    // 0x113844: 0x1481018
    ctx->pc = 0x113844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_113848:
    // 0x113848: 0x23143
    ctx->pc = 0x113848u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_11384c:
    // 0x11384c: 0x24027fff
    ctx->pc = 0x11384cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
label_113850:
    // 0x113850: 0x46102a
    ctx->pc = 0x113850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
label_113854:
    // 0x113854: 0x10400005
label_113858:
    if (ctx->pc == 0x113858u) {
        ctx->pc = 0x113858u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x11385Cu;
        goto label_11385c;
    }
    ctx->pc = 0x113854u;
    {
        const bool branch_taken_0x113854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x113858u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x113854) {
            ctx->pc = 0x11386Cu;
            goto label_11386c;
        }
    }
    ctx->pc = 0x11385Cu;
label_11385c:
    // 0x11385c: 0xc045a12
label_113860:
    if (ctx->pc == 0x113860u) {
        ctx->pc = 0x113860u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936512));
        ctx->pc = 0x113864u;
        goto label_113864;
    }
    ctx->pc = 0x11385Cu;
    SET_GPR_U32(ctx, 31, 0x113864u);
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113864u; }
    }
    if (ctx->pc != 0x113864u) { return; }
    ctx->pc = 0x113864u;
label_113864:
    // 0x113864: 0x10000044
label_113868:
    if (ctx->pc == 0x113868u) {
        ctx->pc = 0x113868u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11386Cu;
        goto label_11386c;
    }
    ctx->pc = 0x113864u;
    {
        const bool branch_taken_0x113864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x113868u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x113864) {
            ctx->pc = 0x113978u;
            goto label_113978;
        }
    }
    ctx->pc = 0x11386Cu;
label_11386c:
    // 0x11386c: 0x700014a9
    ctx->pc = 0x11386cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_113870:
    // 0x113870: 0x30c37fff
    ctx->pc = 0x113870u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 32767));
label_113874:
    // 0x113874: 0x7dc20050
    ctx->pc = 0x113874u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
label_113878:
    // 0x113878: 0x7343c
    ctx->pc = 0x113878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
label_11387c:
    // 0x11387c: 0x7dc20000
    ctx->pc = 0x11387cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_113880:
    // 0x113880: 0x3c07f3ff
    ctx->pc = 0x113880u;
    SET_GPR_U32(ctx, 7, ((uint32_t)62463 << 16));
label_113884:
    // 0x113884: 0x34e7ffff
    ctx->pc = 0x113884u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_113888:
    // 0x113888: 0x73c38
    ctx->pc = 0x113888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_11388c:
    // 0x11388c: 0x34e7ffff
    ctx->pc = 0x11388cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_113890:
    // 0x113890: 0x73c38
    ctx->pc = 0x113890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_113894:
    // 0x113894: 0x34e7ffff
    ctx->pc = 0x113894u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_113898:
    // 0x113898: 0xddc40050
    ctx->pc = 0x113898u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
label_11389c:
    // 0x11389c: 0x24028000
    ctx->pc = 0x11389cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
label_1138a0:
    // 0x1138a0: 0xddc50000
    ctx->pc = 0x1138a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
label_1138a4:
    // 0x1138a4: 0xc643c
    ctx->pc = 0x1138a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
label_1138a8:
    // 0x1138a8: 0x822024
    ctx->pc = 0x1138a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1138ac:
    // 0x1138ac: 0xddcb0008
    ctx->pc = 0x1138acu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
label_1138b0:
    // 0x1138b0: 0xa22824
    ctx->pc = 0x1138b0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1138b4:
    // 0x1138b4: 0x832025
    ctx->pc = 0x1138b4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1138b8:
    // 0x1138b8: 0x24020004
    ctx->pc = 0x1138b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1138bc:
    // 0x1138bc: 0x34038000
    ctx->pc = 0x1138bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_1138c0:
    // 0x1138c0: 0xa22825
    ctx->pc = 0x1138c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1138c4:
    // 0x1138c4: 0x832025
    ctx->pc = 0x1138c4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1138c8:
    // 0x1138c8: 0x2402ffff
    ctx->pc = 0x1138c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1138cc:
    // 0x1138cc: 0x2113a
    ctx->pc = 0x1138ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_1138d0:
    // 0x1138d0: 0x2403fff0
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
label_1138d4:
    // 0x1138d4: 0xa22824
    ctx->pc = 0x1138d4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1138d8:
    // 0x1138d8: 0x1635824
    ctx->pc = 0x1138d8u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1138dc:
    // 0x1138dc: 0x872024
    ctx->pc = 0x1138dcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1138e0:
    // 0x1138e0: 0x6343b
    ctx->pc = 0x1138e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
label_1138e4:
    // 0x1138e4: 0xa543c
    ctx->pc = 0x1138e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
label_1138e8:
    // 0x1138e8: 0x8443c
    ctx->pc = 0x1138e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
label_1138ec:
    // 0x1138ec: 0xcc3025
    ctx->pc = 0x1138ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_1138f0:
    // 0x1138f0: 0x8443b
    ctx->pc = 0x1138f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
label_1138f4:
    // 0x1138f4: 0x34028000
    ctx->pc = 0x1138f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_1138f8:
    // 0x1138f8: 0x2137c
    ctx->pc = 0x1138f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_1138fc:
    // 0x1138fc: 0x2403000e
    ctx->pc = 0x1138fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
label_113900:
    // 0x113900: 0x34078000
    ctx->pc = 0x113900u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 32768));
label_113904:
    // 0x113904: 0x73b3c
    ctx->pc = 0x113904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
label_113908:
    // 0x113908: 0xf4c3c
    ctx->pc = 0x113908u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
label_11390c:
    // 0x11390c: 0xa543f
    ctx->pc = 0x11390cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_113910:
    // 0x113910: 0xa22825
    ctx->pc = 0x113910u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_113914:
    // 0x113914: 0x1485025
    ctx->pc = 0x113914u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_113918:
    // 0x113918: 0x1635825
    ctx->pc = 0x113918u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_11391c:
    // 0x11391c: 0x872025
    ctx->pc = 0x11391cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_113920:
    // 0x113920: 0xd6e3c
    ctx->pc = 0x113920u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
label_113924:
    // 0x113924: 0x94c3b
    ctx->pc = 0x113924u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
label_113928:
    // 0x113928: 0x18643c
    ctx->pc = 0x113928u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
label_11392c:
    // 0x11392c: 0xcd3025
    ctx->pc = 0x11392cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_113930:
    // 0x113930: 0x12c4825
    ctx->pc = 0x113930u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_113934:
    // 0x113934: 0x24020050
    ctx->pc = 0x113934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_113938:
    // 0x113938: 0x24030051
    ctx->pc = 0x113938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 81));
label_11393c:
    // 0x11393c: 0x24070052
    ctx->pc = 0x11393cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 82));
label_113940:
    // 0x113940: 0x24080053
    ctx->pc = 0x113940u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 83));
label_113944:
    // 0x113944: 0xfdc40050
    ctx->pc = 0x113944u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
label_113948:
    // 0x113948: 0xfdc50000
    ctx->pc = 0x113948u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
label_11394c:
    // 0x11394c: 0xfdcb0008
    ctx->pc = 0x11394cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
label_113950:
    // 0x113950: 0xfdc60010
    ctx->pc = 0x113950u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
label_113954:
    // 0x113954: 0xfdc20018
    ctx->pc = 0x113954u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
label_113958:
    // 0x113958: 0xfdc90020
    ctx->pc = 0x113958u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
label_11395c:
    // 0x11395c: 0xfdc30028
    ctx->pc = 0x11395cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
label_113960:
    // 0x113960: 0xfdca0030
    ctx->pc = 0x113960u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
label_113964:
    // 0x113964: 0xfdc70038
    ctx->pc = 0x113964u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
label_113968:
    // 0x113968: 0xfdc80048
    ctx->pc = 0x113968u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
label_11396c:
    // 0x11396c: 0xfdc00040
    ctx->pc = 0x11396cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
label_113970:
    // 0x113970: 0xf
    ctx->pc = 0x113970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_113974:
    // 0x113974: 0x24020006
    ctx->pc = 0x113974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_113978:
    // 0x113978: 0xdfbf0000
    ctx->pc = 0x113978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11397c:
    // 0x11397c: 0x3e00008
label_113980:
    if (ctx->pc == 0x113980u) {
        ctx->pc = 0x113980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x113984u;
        goto label_113984;
    }
    ctx->pc = 0x11397Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1137A0u: goto label_1137a0;
            case 0x1137A4u: goto label_1137a4;
            case 0x1137A8u: goto label_1137a8;
            case 0x1137ACu: goto label_1137ac;
            case 0x1137B0u: goto label_1137b0;
            case 0x1137B4u: goto label_1137b4;
            case 0x1137B8u: goto label_1137b8;
            case 0x1137BCu: goto label_1137bc;
            case 0x1137C0u: goto label_1137c0;
            case 0x1137C4u: goto label_1137c4;
            case 0x1137C8u: goto label_1137c8;
            case 0x1137CCu: goto label_1137cc;
            case 0x1137D0u: goto label_1137d0;
            case 0x1137D4u: goto label_1137d4;
            case 0x1137D8u: goto label_1137d8;
            case 0x1137DCu: goto label_1137dc;
            case 0x1137E0u: goto label_1137e0;
            case 0x1137E4u: goto label_1137e4;
            case 0x1137E8u: goto label_1137e8;
            case 0x1137ECu: goto label_1137ec;
            case 0x1137F0u: goto label_1137f0;
            case 0x1137F4u: goto label_1137f4;
            case 0x1137F8u: goto label_1137f8;
            case 0x1137FCu: goto label_1137fc;
            case 0x113800u: goto label_113800;
            case 0x113804u: goto label_113804;
            case 0x113808u: goto label_113808;
            case 0x11380Cu: goto label_11380c;
            case 0x113810u: goto label_113810;
            case 0x113814u: goto label_113814;
            case 0x113818u: goto label_113818;
            case 0x11381Cu: goto label_11381c;
            case 0x113820u: goto label_113820;
            case 0x113824u: goto label_113824;
            case 0x113828u: goto label_113828;
            case 0x11382Cu: goto label_11382c;
            case 0x113830u: goto label_113830;
            case 0x113834u: goto label_113834;
            case 0x113838u: goto label_113838;
            case 0x11383Cu: goto label_11383c;
            case 0x113840u: goto label_113840;
            case 0x113844u: goto label_113844;
            case 0x113848u: goto label_113848;
            case 0x11384Cu: goto label_11384c;
            case 0x113850u: goto label_113850;
            case 0x113854u: goto label_113854;
            case 0x113858u: goto label_113858;
            case 0x11385Cu: goto label_11385c;
            case 0x113860u: goto label_113860;
            case 0x113864u: goto label_113864;
            case 0x113868u: goto label_113868;
            case 0x11386Cu: goto label_11386c;
            case 0x113870u: goto label_113870;
            case 0x113874u: goto label_113874;
            case 0x113878u: goto label_113878;
            case 0x11387Cu: goto label_11387c;
            case 0x113880u: goto label_113880;
            case 0x113884u: goto label_113884;
            case 0x113888u: goto label_113888;
            case 0x11388Cu: goto label_11388c;
            case 0x113890u: goto label_113890;
            case 0x113894u: goto label_113894;
            case 0x113898u: goto label_113898;
            case 0x11389Cu: goto label_11389c;
            case 0x1138A0u: goto label_1138a0;
            case 0x1138A4u: goto label_1138a4;
            case 0x1138A8u: goto label_1138a8;
            case 0x1138ACu: goto label_1138ac;
            case 0x1138B0u: goto label_1138b0;
            case 0x1138B4u: goto label_1138b4;
            case 0x1138B8u: goto label_1138b8;
            case 0x1138BCu: goto label_1138bc;
            case 0x1138C0u: goto label_1138c0;
            case 0x1138C4u: goto label_1138c4;
            case 0x1138C8u: goto label_1138c8;
            case 0x1138CCu: goto label_1138cc;
            case 0x1138D0u: goto label_1138d0;
            case 0x1138D4u: goto label_1138d4;
            case 0x1138D8u: goto label_1138d8;
            case 0x1138DCu: goto label_1138dc;
            case 0x1138E0u: goto label_1138e0;
            case 0x1138E4u: goto label_1138e4;
            case 0x1138E8u: goto label_1138e8;
            case 0x1138ECu: goto label_1138ec;
            case 0x1138F0u: goto label_1138f0;
            case 0x1138F4u: goto label_1138f4;
            case 0x1138F8u: goto label_1138f8;
            case 0x1138FCu: goto label_1138fc;
            case 0x113900u: goto label_113900;
            case 0x113904u: goto label_113904;
            case 0x113908u: goto label_113908;
            case 0x11390Cu: goto label_11390c;
            case 0x113910u: goto label_113910;
            case 0x113914u: goto label_113914;
            case 0x113918u: goto label_113918;
            case 0x11391Cu: goto label_11391c;
            case 0x113920u: goto label_113920;
            case 0x113924u: goto label_113924;
            case 0x113928u: goto label_113928;
            case 0x11392Cu: goto label_11392c;
            case 0x113930u: goto label_113930;
            case 0x113934u: goto label_113934;
            case 0x113938u: goto label_113938;
            case 0x11393Cu: goto label_11393c;
            case 0x113940u: goto label_113940;
            case 0x113944u: goto label_113944;
            case 0x113948u: goto label_113948;
            case 0x11394Cu: goto label_11394c;
            case 0x113950u: goto label_113950;
            case 0x113954u: goto label_113954;
            case 0x113958u: goto label_113958;
            case 0x11395Cu: goto label_11395c;
            case 0x113960u: goto label_113960;
            case 0x113964u: goto label_113964;
            case 0x113968u: goto label_113968;
            case 0x11396Cu: goto label_11396c;
            case 0x113970u: goto label_113970;
            case 0x113974u: goto label_113974;
            case 0x113978u: goto label_113978;
            case 0x11397Cu: goto label_11397c;
            case 0x113980u: goto label_113980;
            case 0x113984u: goto label_113984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x113984u;
label_113984:
    // 0x113984: 0x0
    ctx->pc = 0x113984u;
    // NOP
}
