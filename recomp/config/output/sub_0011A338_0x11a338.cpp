#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011A338
// Address: 0x11a338 - 0x11a4a0
void sub_0011A338_0x11a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a338u;

    // 0x11a338: 0x27bdff60
    ctx->pc = 0x11a338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11a33c: 0xffb40080
    ctx->pc = 0x11a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11a340: 0xffb20060
    ctx->pc = 0x11a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11a344: 0x3c140026
    ctx->pc = 0x11a344u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x11a348: 0xffb00040
    ctx->pc = 0x11a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11a34c: 0x2692ca40
    ctx->pc = 0x11a34cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4294953536));
    // 0x11a350: 0xffbf0090
    ctx->pc = 0x11a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11a354: 0xffb30070
    ctx->pc = 0x11a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11a358: 0xc04607e
    ctx->pc = 0x11A358u;
    SET_GPR_U32(ctx, 31, 0x11A360u);
    ctx->pc = 0x11A35Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A360u; }
    }
    if (ctx->pc != 0x11A360u) { return; }
    ctx->pc = 0x11A360u;
    // 0x11a360: 0x40802d
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a364: 0xc04619c
    ctx->pc = 0x11A364u;
    SET_GPR_U32(ctx, 31, 0x11A36Cu);
    ctx->pc = 0x11A368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A36Cu; }
    }
    if (ctx->pc != 0x11A36Cu) { return; }
    ctx->pc = 0x11A36Cu;
    // 0x11a36c: 0x3c030021
    ctx->pc = 0x11a36cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11a370: 0x8c629ddc
    ctx->pc = 0x11a370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x11a374: 0x14400005
    ctx->pc = 0x11A374u;
    {
        const bool branch_taken_0x11a374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a374) {
            ctx->pc = 0x11A38Cu;
            goto label_11a38c;
        }
    }
    ctx->pc = 0x11A37Cu;
    // 0x11a37c: 0xc0461a8
    ctx->pc = 0x11A37Cu;
    SET_GPR_U32(ctx, 31, 0x11A384u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A384u; }
    }
    if (ctx->pc != 0x11A384u) { return; }
    ctx->pc = 0x11A384u;
    // 0x11a384: 0x1000003e
    ctx->pc = 0x11A384u;
    {
        const bool branch_taken_0x11a384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A388u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11a384) {
            ctx->pc = 0x11A480u;
            goto label_11a480;
        }
    }
    ctx->pc = 0x11A38Cu;
label_11a38c:
    // 0x11a38c: 0x12000004
    ctx->pc = 0x11A38Cu;
    {
        const bool branch_taken_0x11a38c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11a38c) {
            ctx->pc = 0x11A3A0u;
            goto label_11a3a0;
        }
    }
    ctx->pc = 0x11A394u;
    // 0x11a394: 0x8e020004
    ctx->pc = 0x11a394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a398: 0x54400005
    ctx->pc = 0x11A398u;
    {
        const bool branch_taken_0x11a398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a398) {
            ctx->pc = 0x11A39Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x11A3A0u;
label_11a3a0:
    // 0x11a3a0: 0xc0461a8
    ctx->pc = 0x11A3A0u;
    SET_GPR_U32(ctx, 31, 0x11A3A8u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3A8u; }
    }
    if (ctx->pc != 0x11A3A8u) { return; }
    ctx->pc = 0x11A3A8u;
    // 0x11a3a8: 0x10000035
    ctx->pc = 0x11A3A8u;
    {
        const bool branch_taken_0x11a3a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A3ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x11a3a8) {
            ctx->pc = 0x11A480u;
            goto label_11a480;
        }
    }
    ctx->pc = 0x11A3B0u;
label_11a3b0:
    // 0x11a3b0: 0x24020001
    ctx->pc = 0x11a3b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a3b4: 0xafa20014
    ctx->pc = 0x11a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11a3b8: 0x27a40010
    ctx->pc = 0x11a3b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a3bc: 0xae43000c
    ctx->pc = 0x11a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x11a3c0: 0xafa00018
    ctx->pc = 0x11a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11a3c4: 0xc045188
    ctx->pc = 0x11A3C4u;
    SET_GPR_U32(ctx, 31, 0x11A3CCu);
    ctx->pc = 0x11A3C8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3CCu; }
    }
    if (ctx->pc != 0x11A3CCu) { return; }
    ctx->pc = 0x11A3CCu;
    // 0x11a3cc: 0x40882d
    ctx->pc = 0x11a3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3d0: 0x27a30030
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a3d4: 0x3c020026
    ctx->pc = 0x11a3d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x11a3d8: 0xae91ca40
    ctx->pc = 0x11a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953536), GPR_U32(ctx, 17));
    // 0x11a3dc: 0x2453d680
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x11a3e0: 0x3c040026
    ctx->pc = 0x11a3e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11a3e4: 0x24020004
    ctx->pc = 0x11a3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a3e8: 0xae430004
    ctx->pc = 0x11a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x11a3ec: 0xae420008
    ctx->pc = 0x11a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11a3f0: 0x2484e140
    ctx->pc = 0x11a3f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959424));
    // 0x11a3f4: 0x240382d
    ctx->pc = 0x11a3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3f8: 0x2405000a
    ctx->pc = 0x11a3f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x11a3fc: 0xafa00000
    ctx->pc = 0x11a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11a400: 0x302d
    ctx->pc = 0x11a400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a404: 0x24080014
    ctx->pc = 0x11a404u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x11a408: 0x260482d
    ctx->pc = 0x11a408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a40c: 0x240a0004
    ctx->pc = 0x11a40cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a410: 0xc045e7a
    ctx->pc = 0x11A410u;
    SET_GPR_U32(ctx, 31, 0x11A418u);
    ctx->pc = 0x11A414u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A418u; }
    }
    if (ctx->pc != 0x11A418u) { return; }
    ctx->pc = 0x11A418u;
    // 0x11a418: 0x4430007
    ctx->pc = 0x11A418u;
    {
        const bool branch_taken_0x11a418 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11a418) {
            ctx->pc = 0x11A41Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x11A438u;
            goto label_11a438;
        }
    }
    ctx->pc = 0x11A420u;
    // 0x11a420: 0xc04518c
    ctx->pc = 0x11A420u;
    SET_GPR_U32(ctx, 31, 0x11A428u);
    ctx->pc = 0x11A424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A428u; }
    }
    if (ctx->pc != 0x11A428u) { return; }
    ctx->pc = 0x11A428u;
    // 0x11a428: 0xc0461a8
    ctx->pc = 0x11A428u;
    SET_GPR_U32(ctx, 31, 0x11A430u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A430u; }
    }
    if (ctx->pc != 0x11A430u) { return; }
    ctx->pc = 0x11A430u;
    // 0x11a430: 0x10000013
    ctx->pc = 0x11A430u;
    {
        const bool branch_taken_0x11a430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a430) {
            ctx->pc = 0x11A480u;
            goto label_11a480;
        }
    }
    ctx->pc = 0x11A438u;
label_11a438:
    // 0x11a438: 0x3c022000
    ctx->pc = 0x11a438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x11a43c: 0x2621025
    ctx->pc = 0x11a43cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11a440: 0xc0461a8
    ctx->pc = 0x11A440u;
    SET_GPR_U32(ctx, 31, 0x11A448u);
    ctx->pc = 0x11A444u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A448u; }
    }
    if (ctx->pc != 0x11A448u) { return; }
    ctx->pc = 0x11A448u;
    // 0x11a448: 0x16000005
    ctx->pc = 0x11A448u;
    {
        const bool branch_taken_0x11a448 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a448) {
            ctx->pc = 0x11A460u;
            goto label_11a460;
        }
    }
    ctx->pc = 0x11A450u;
    // 0x11a450: 0xc04518c
    ctx->pc = 0x11A450u;
    SET_GPR_U32(ctx, 31, 0x11A458u);
    ctx->pc = 0x11A454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A458u; }
    }
    if (ctx->pc != 0x11A458u) { return; }
    ctx->pc = 0x11A458u;
    // 0x11a458: 0x10000009
    ctx->pc = 0x11A458u;
    {
        const bool branch_taken_0x11a458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A45Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11a458) {
            ctx->pc = 0x11A480u;
            goto label_11a480;
        }
    }
    ctx->pc = 0x11A460u;
label_11a460:
    // 0x11a460: 0xc045198
    ctx->pc = 0x11A460u;
    SET_GPR_U32(ctx, 31, 0x11A468u);
    ctx->pc = 0x11A464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A468u; }
    }
    if (ctx->pc != 0x11A468u) { return; }
    ctx->pc = 0x11A468u;
    // 0x11a468: 0xc04518c
    ctx->pc = 0x11A468u;
    SET_GPR_U32(ctx, 31, 0x11A470u);
    ctx->pc = 0x11A46Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A470u; }
    }
    if (ctx->pc != 0x11A470u) { return; }
    ctx->pc = 0x11A470u;
    // 0x11a470: 0x8fa20030
    ctx->pc = 0x11a470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a474: 0x2403ffff
    ctx->pc = 0x11a474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a478: 0x62182a
    ctx->pc = 0x11a478u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x11a47c: 0x3100b
    ctx->pc = 0x11a47cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_11a480:
    // 0x11a480: 0xdfbf0090
    ctx->pc = 0x11a480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a484: 0xdfb40080
    ctx->pc = 0x11a484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a488: 0xdfb30070
    ctx->pc = 0x11a488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a48c: 0xdfb20060
    ctx->pc = 0x11a48cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a490: 0xdfb10050
    ctx->pc = 0x11a490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a494: 0xdfb00040
    ctx->pc = 0x11a494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a498: 0x3e00008
    ctx->pc = 0x11A498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A49Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A38Cu: goto label_11a38c;
            case 0x11A3A0u: goto label_11a3a0;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A438u: goto label_11a438;
            case 0x11A460u: goto label_11a460;
            case 0x11A480u: goto label_11a480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A4A0u;
}
