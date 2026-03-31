#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E708
// Address: 0x12e708 - 0x12e968
void sub_0012E708_0x12e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e708u;

    // 0x12e708: 0x27bdffa0
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12e70c: 0xffb40030
    ctx->pc = 0x12e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12e710: 0xa0a02d
    ctx->pc = 0x12e710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e714: 0xffb20020
    ctx->pc = 0x12e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12e718: 0x902d
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e71c: 0xffb30028
    ctx->pc = 0x12e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12e720: 0x80982d
    ctx->pc = 0x12e720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e724: 0xffb60040
    ctx->pc = 0x12e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12e728: 0x2676000c
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 12));
    // 0x12e72c: 0xffb70048
    ctx->pc = 0x12e72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12e730: 0x26770008
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 8));
    // 0x12e734: 0xffbe0050
    ctx->pc = 0x12e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12e738: 0x14f040
    ctx->pc = 0x12e738u;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 20), 1));
    // 0x12e73c: 0xffb00010
    ctx->pc = 0x12e73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12e740: 0x141880
    ctx->pc = 0x12e740u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x12e744: 0xffb10018
    ctx->pc = 0x12e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12e748: 0x731821
    ctx->pc = 0x12e748u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12e74c: 0xffb50038
    ctx->pc = 0x12e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12e750: 0x27c20080
    ctx->pc = 0x12e750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 128));
    // 0x12e754: 0xffbf0058
    ctx->pc = 0x12e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12e758: 0x2c22021
    ctx->pc = 0x12e758u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x12e75c: 0x2e21021
    ctx->pc = 0x12e75cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x12e760: 0x8c710080
    ctx->pc = 0x12e760u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x12e764: 0x84860000
    ctx->pc = 0x12e764u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e768: 0x84450000
    ctx->pc = 0x12e768u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e76c: 0x220202d
    ctx->pc = 0x12e76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e770: 0x8e220088
    ctx->pc = 0x12e770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x12e774: 0xc04b8f0
    ctx->pc = 0x12E774u;
    SET_GPR_U32(ctx, 31, 0x12E77Cu);
    ctx->pc = 0x12E778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x12E3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E3C0_0x12e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E77Cu; }
    }
    if (ctx->pc != 0x12E77Cu) { return; }
    ctx->pc = 0x12E77Cu;
    // 0x12e77c: 0x8e620044
    ctx->pc = 0x12e77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x12e780: 0x1840000f
    ctx->pc = 0x12E780u;
    {
        const bool branch_taken_0x12e780 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12E784u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e780) {
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E788u;
    // 0x12e788: 0x14a980
    ctx->pc = 0x12e788u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 6));
    // 0x12e78c: 0x2b31021
    ctx->pc = 0x12e78cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x12e790: 0x24500090
    ctx->pc = 0x12e790u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 144));
    // 0x12e794: 0x86060000
    ctx->pc = 0x12e794u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_12e798:
    // 0x12e798: 0x26100002
    ctx->pc = 0x12e798u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    // 0x12e79c: 0x240282d
    ctx->pc = 0x12e79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7a0: 0x26520001
    ctx->pc = 0x12e7a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x12e7a4: 0xc04b8f4
    ctx->pc = 0x12E7A4u;
    SET_GPR_U32(ctx, 31, 0x12E7ACu);
    ctx->pc = 0x12E7A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12E3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E3D0_0x12e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7ACu; }
    }
    if (ctx->pc != 0x12E7ACu) { return; }
    ctx->pc = 0x12E7ACu;
    // 0x12e7ac: 0x8e620044
    ctx->pc = 0x12e7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x12e7b0: 0x242102a
    ctx->pc = 0x12e7b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x12e7b4: 0x5440fff8
    ctx->pc = 0x12E7B4u;
    {
        const bool branch_taken_0x12e7b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e7b4) {
            ctx->pc = 0x12E7B8u;
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x12E798u;
            goto label_12e798;
        }
    }
    ctx->pc = 0x12E7BCu;
    // 0x12e7bc: 0x220202d
    ctx->pc = 0x12e7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e7c0:
    // 0x12e7c0: 0xc04b92e
    ctx->pc = 0x12E7C0u;
    SET_GPR_U32(ctx, 31, 0x12E7C8u);
    ctx->pc = 0x12E7C4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12E4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E4B8_0x12e4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7C8u; }
    }
    if (ctx->pc != 0x12E7C8u) { return; }
    ctx->pc = 0x12E7C8u;
    // 0x12e7c8: 0x27c20080
    ctx->pc = 0x12e7c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 128));
    // 0x12e7cc: 0x2c21821
    ctx->pc = 0x12e7ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x12e7d0: 0x2e21021
    ctx->pc = 0x12e7d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x12e7d4: 0x84450000
    ctx->pc = 0x12e7d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e7d8: 0x84660000
    ctx->pc = 0x12e7d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e7dc: 0xc04b878
    ctx->pc = 0x12E7DCu;
    SET_GPR_U32(ctx, 31, 0x12E7E4u);
    ctx->pc = 0x12E7E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->pc = 0x12E1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E1E0_0x12e1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7E4u; }
    }
    if (ctx->pc != 0x12E7E4u) { return; }
    ctx->pc = 0x12E7E4u;
    // 0x12e7e4: 0x8e620044
    ctx->pc = 0x12e7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x12e7e8: 0x18400053
    ctx->pc = 0x12E7E8u;
    {
        const bool branch_taken_0x12e7e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12E7ECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x12e7e8) {
            ctx->pc = 0x12E938u;
            goto label_12e938;
        }
    }
    ctx->pc = 0x12E7F0u;
    // 0x12e7f0: 0x14a980
    ctx->pc = 0x12e7f0u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 6));
    // 0x12e7f4: 0x24141249
    ctx->pc = 0x12e7f4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4681));
    // 0x12e7f8: 0x27be0002
    ctx->pc = 0x12e7f8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 2));
    // 0x12e7fc: 0x24177fff
    ctx->pc = 0x12e7fcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12e800: 0x24168000
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x12e804: 0x8fa40004
    ctx->pc = 0x12e804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12e808:
    // 0x12e808: 0x2b31021
    ctx->pc = 0x12e808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x12e80c: 0x121840
    ctx->pc = 0x12e80cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 1));
    // 0x12e810: 0x3a0282d
    ctx->pc = 0x12e810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e814: 0x621821
    ctx->pc = 0x12e814u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e818: 0x3c0302d
    ctx->pc = 0x12e818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e81c: 0xc04b87c
    ctx->pc = 0x12E81Cu;
    SET_GPR_U32(ctx, 31, 0x12E824u);
    ctx->pc = 0x12E820u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    ctx->pc = 0x12E1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E1F0_0x12e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E824u; }
    }
    if (ctx->pc != 0x12E824u) { return; }
    ctx->pc = 0x12E824u;
    // 0x12e824: 0x87a50000
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e828: 0x220202d
    ctx->pc = 0x12e828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e82c: 0xc04b8f0
    ctx->pc = 0x12E82Cu;
    SET_GPR_U32(ctx, 31, 0x12E834u);
    ctx->pc = 0x12E830u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    ctx->pc = 0x12E3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E3C0_0x12e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E834u; }
    }
    if (ctx->pc != 0x12E834u) { return; }
    ctx->pc = 0x12E834u;
    // 0x12e834: 0x220202d
    ctx->pc = 0x12e834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e838: 0x200302d
    ctx->pc = 0x12e838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e83c: 0xc04b8f4
    ctx->pc = 0x12E83Cu;
    SET_GPR_U32(ctx, 31, 0x12E844u);
    ctx->pc = 0x12E840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12E3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E3D0_0x12e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E844u; }
    }
    if (ctx->pc != 0x12E844u) { return; }
    ctx->pc = 0x12E844u;
    // 0x12e844: 0x220202d
    ctx->pc = 0x12e844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e848: 0xc04b954
    ctx->pc = 0x12E848u;
    SET_GPR_U32(ctx, 31, 0x12E850u);
    ctx->pc = 0x12E84Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12E550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E550_0x12e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E850u; }
    }
    if (ctx->pc != 0x12E850u) { return; }
    ctx->pc = 0x12E850u;
    // 0x12e850: 0xc0448ba
    ctx->pc = 0x12E850u;
    SET_GPR_U32(ctx, 31, 0x12E858u);
    ctx->pc = 0x12E854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E858u; }
    }
    if (ctx->pc != 0x12E858u) { return; }
    ctx->pc = 0x12E858u;
    // 0x12e858: 0xde250080
    ctx->pc = 0x12e858u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x12e85c: 0xc04476c
    ctx->pc = 0x12E85Cu;
    SET_GPR_U32(ctx, 31, 0x12E864u);
    ctx->pc = 0x12E860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E864u; }
    }
    if (ctx->pc != 0x12E864u) { return; }
    ctx->pc = 0x12E864u;
    // 0x12e864: 0xc0448e8
    ctx->pc = 0x12E864u;
    SET_GPR_U32(ctx, 31, 0x12E86Cu);
    ctx->pc = 0x12E868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E86Cu; }
    }
    if (ctx->pc != 0x12E86Cu) { return; }
    ctx->pc = 0x12E86Cu;
    // 0x12e86c: 0x40802d
    ctx->pc = 0x12e86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e870: 0x2f0102a
    ctx->pc = 0x12e870u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 16)));
    // 0x12e874: 0x54400006
    ctx->pc = 0x12E874u;
    {
        const bool branch_taken_0x12e874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e874) {
            ctx->pc = 0x12E878u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
            ctx->pc = 0x12E890u;
            goto label_12e890;
        }
    }
    ctx->pc = 0x12E87Cu;
    // 0x12e87c: 0x2a038000
    ctx->pc = 0x12e87cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4294934528));
    // 0x12e880: 0x2c0102d
    ctx->pc = 0x12e880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e884: 0x203100a
    ctx->pc = 0x12e884u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x12e888: 0x21400
    ctx->pc = 0x12e888u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x12e88c: 0x21403
    ctx->pc = 0x12e88cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_12e890:
    // 0x12e890: 0x40802d
    ctx->pc = 0x12e890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e894: 0x6030002
    ctx->pc = 0x12E894u;
    {
        const bool branch_taken_0x12e894 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x12e894) {
            ctx->pc = 0x12E898u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2340));
            ctx->pc = 0x12E8A0u;
            goto label_12e8a0;
        }
    }
    ctx->pc = 0x12E89Cu;
    // 0x12e89c: 0x2602f6dc
    ctx->pc = 0x12e89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294964956));
label_12e8a0:
    // 0x12e8a0: 0x52800001
    ctx->pc = 0x12E8A0u;
    {
        const bool branch_taken_0x12e8a0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e8a0) {
            ctx->pc = 0x12E8A4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12E8A8u;
            goto label_12e8a8;
        }
    }
    ctx->pc = 0x12E8A8u;
label_12e8a8:
    // 0x12e8a8: 0x54001a
    ctx->pc = 0x12e8a8u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12e8ac: 0x1012
    ctx->pc = 0x12e8acu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x12e8b0: 0x40802d
    ctx->pc = 0x12e8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8b4: 0x2a020007
    ctx->pc = 0x12e8b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x12e8b8: 0x10400007
    ctx->pc = 0x12E8B8u;
    {
        const bool branch_taken_0x12e8b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E8BCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x12e8b8) {
            ctx->pc = 0x12E8D8u;
            goto label_12e8d8;
        }
    }
    ctx->pc = 0x12E8C0u;
    // 0x12e8c0: 0x200182d
    ctx->pc = 0x12e8c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8c4: 0x2862fff8
    ctx->pc = 0x12e8c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967288));
    // 0x12e8c8: 0x54400003
    ctx->pc = 0x12E8C8u;
    {
        const bool branch_taken_0x12e8c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e8c8) {
            ctx->pc = 0x12E8CCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967288));
            ctx->pc = 0x12E8D8u;
            goto label_12e8d8;
        }
    }
    ctx->pc = 0x12E8D0u;
    // 0x12e8d0: 0x10000002
    ctx->pc = 0x12E8D0u;
    {
        const bool branch_taken_0x12e8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E8D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e8d0) {
            ctx->pc = 0x12E8DCu;
            goto label_12e8dc;
        }
    }
    ctx->pc = 0x12E8D8u;
label_12e8d8:
    // 0x12e8d8: 0x60802d
    ctx->pc = 0x12e8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12e8dc:
    // 0x12e8dc: 0x220202d
    ctx->pc = 0x12e8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8e0: 0x103600
    ctx->pc = 0x12e8e0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 24));
    // 0x12e8e4: 0x240282d
    ctx->pc = 0x12e8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8e8: 0xc04b962
    ctx->pc = 0x12E8E8u;
    SET_GPR_U32(ctx, 31, 0x12E8F0u);
    ctx->pc = 0x12E8ECu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    ctx->pc = 0x12E588u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E588_0x12e588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8F0u; }
    }
    if (ctx->pc != 0x12E8F0u) { return; }
    ctx->pc = 0x12E8F0u;
    // 0x12e8f0: 0x8622007c
    ctx->pc = 0x12e8f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x12e8f4: 0x2028018
    ctx->pc = 0x12e8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x12e8f8: 0x2f0182a
    ctx->pc = 0x12e8f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 16)));
    // 0x12e8fc: 0x54600006
    ctx->pc = 0x12E8FCu;
    {
        const bool branch_taken_0x12e8fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x12e8fc) {
            ctx->pc = 0x12E900u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32767));
            ctx->pc = 0x12E918u;
            goto label_12e918;
        }
    }
    ctx->pc = 0x12E904u;
    // 0x12e904: 0x2a038000
    ctx->pc = 0x12e904u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4294934528));
    // 0x12e908: 0x2c0102d
    ctx->pc = 0x12e908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e90c: 0x203100a
    ctx->pc = 0x12e90cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x12e910: 0x21400
    ctx->pc = 0x12e910u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x12e914: 0x22c03
    ctx->pc = 0x12e914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_12e918:
    // 0x12e918: 0x8e240088
    ctx->pc = 0x12e918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x12e91c: 0xc04b882
    ctx->pc = 0x12E91Cu;
    SET_GPR_U32(ctx, 31, 0x12E924u);
    ctx->pc = 0x12E920u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x12E208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E208_0x12e208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E924u; }
    }
    if (ctx->pc != 0x12E924u) { return; }
    ctx->pc = 0x12E924u;
    // 0x12e924: 0x8e630044
    ctx->pc = 0x12e924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x12e928: 0x243182a
    ctx->pc = 0x12e928u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x12e92c: 0x1460ffb6
    ctx->pc = 0x12E92Cu;
    {
        const bool branch_taken_0x12e92c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E930u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x12e92c) {
            ctx->pc = 0x12E808u;
            goto label_12e808;
        }
    }
    ctx->pc = 0x12E934u;
    // 0x12e934: 0xdfb00010
    ctx->pc = 0x12e934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e938:
    // 0x12e938: 0x102d
    ctx->pc = 0x12e938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e93c: 0xdfb10018
    ctx->pc = 0x12e93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e940: 0xdfb20020
    ctx->pc = 0x12e940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e944: 0xdfb30028
    ctx->pc = 0x12e944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e948: 0xdfb40030
    ctx->pc = 0x12e948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e94c: 0xdfb50038
    ctx->pc = 0x12e94cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12e950: 0xdfb60040
    ctx->pc = 0x12e950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e954: 0xdfb70048
    ctx->pc = 0x12e954u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e958: 0xdfbe0050
    ctx->pc = 0x12e958u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e95c: 0xdfbf0058
    ctx->pc = 0x12e95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12e960: 0x3e00008
    ctx->pc = 0x12E960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E964u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E798u: goto label_12e798;
            case 0x12E7C0u: goto label_12e7c0;
            case 0x12E808u: goto label_12e808;
            case 0x12E890u: goto label_12e890;
            case 0x12E8A0u: goto label_12e8a0;
            case 0x12E8A8u: goto label_12e8a8;
            case 0x12E8D8u: goto label_12e8d8;
            case 0x12E8DCu: goto label_12e8dc;
            case 0x12E918u: goto label_12e918;
            case 0x12E938u: goto label_12e938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E968u;
}
