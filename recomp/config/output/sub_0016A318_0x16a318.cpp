#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A318
// Address: 0x16a318 - 0x16a4b8
void sub_0016A318_0x16a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a318u;

    // 0x16a318: 0x27bdffa0
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16a31c: 0xffb40040
    ctx->pc = 0x16a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16a320: 0xe0a02d
    ctx->pc = 0x16a320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a324: 0xffb00020
    ctx->pc = 0x16a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16a328: 0x80802d
    ctx->pc = 0x16a328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a32c: 0xffb20030
    ctx->pc = 0x16a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16a330: 0xc0902d
    ctx->pc = 0x16a330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a334: 0xffb30038
    ctx->pc = 0x16a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16a338: 0xa0982d
    ctx->pc = 0x16a338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a33c: 0xffb50048
    ctx->pc = 0x16a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x16a340: 0xa82d
    ctx->pc = 0x16a340u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a344: 0xffb10028
    ctx->pc = 0x16a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16a348: 0x100382d
    ctx->pc = 0x16a348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a34c: 0xffbf0050
    ctx->pc = 0x16a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16a350: 0xae800000
    ctx->pc = 0x16a350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x16a354: 0x8e021aec
    ctx->pc = 0x16a354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6892)));
    // 0x16a358: 0xc05ac32
    ctx->pc = 0x16A358u;
    SET_GPR_U32(ctx, 31, 0x16A360u);
    ctx->pc = 0x16A35Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x16B0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B0C8_0x16b0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A360u; }
    }
    if (ctx->pc != 0x16A360u) { return; }
    ctx->pc = 0x16A360u;
    // 0x16a360: 0x1040004b
    ctx->pc = 0x16A360u;
    {
        const bool branch_taken_0x16a360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A364u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a360) {
            ctx->pc = 0x16A490u;
            goto label_16a490;
        }
    }
    ctx->pc = 0x16A368u;
    // 0x16a368: 0x260282d
    ctx->pc = 0x16a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a36c: 0x240302d
    ctx->pc = 0x16a36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a370: 0x3a0382d
    ctx->pc = 0x16a370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a374: 0xc055900
    ctx->pc = 0x16A374u;
    SET_GPR_U32(ctx, 31, 0x16A37Cu);
    ctx->pc = 0x16A378u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x156400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00156400_0x156400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A37Cu; }
    }
    if (ctx->pc != 0x16A37Cu) { return; }
    ctx->pc = 0x16A37Cu;
    // 0x16a37c: 0x10400005
    ctx->pc = 0x16A37Cu;
    {
        const bool branch_taken_0x16a37c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A380u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a37c) {
            ctx->pc = 0x16A394u;
            goto label_16a394;
        }
    }
    ctx->pc = 0x16A384u;
    // 0x16a384: 0x3c05ff00
    ctx->pc = 0x16a384u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16a388: 0xc05a704
    ctx->pc = 0x16A388u;
    SET_GPR_U32(ctx, 31, 0x16A390u);
    ctx->pc = 0x16A38Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3331));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A390u; }
    }
    if (ctx->pc != 0x16A390u) { return; }
    ctx->pc = 0x16A390u;
    // 0x16a390: 0x40a82d
    ctx->pc = 0x16a390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a394:
    // 0x16a394: 0x8fa30004
    ctx->pc = 0x16a394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a398: 0x3c020002
    ctx->pc = 0x16a398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x16a39c: 0x621024
    ctx->pc = 0x16a39cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a3a0: 0x10400006
    ctx->pc = 0x16A3A0u;
    {
        const bool branch_taken_0x16a3a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A3A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a3a0) {
            ctx->pc = 0x16A3BCu;
            goto label_16a3bc;
        }
    }
    ctx->pc = 0x16A3A8u;
    // 0x16a3a8: 0x200202d
    ctx->pc = 0x16a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3ac: 0x260302d
    ctx->pc = 0x16a3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b0: 0xc05adce
    ctx->pc = 0x16A3B0u;
    SET_GPR_U32(ctx, 31, 0x16A3B8u);
    ctx->pc = 0x16A3B4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B738_0x16b738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3B8u; }
    }
    if (ctx->pc != 0x16A3B8u) { return; }
    ctx->pc = 0x16A3B8u;
    // 0x16a3b8: 0x8fa30004
    ctx->pc = 0x16a3b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16a3bc:
    // 0x16a3bc: 0x3c020008
    ctx->pc = 0x16a3bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x16a3c0: 0x14620010
    ctx->pc = 0x16A3C0u;
    {
        const bool branch_taken_0x16a3c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16A3C4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a3c0) {
            ctx->pc = 0x16A404u;
            goto label_16a404;
        }
    }
    ctx->pc = 0x16A3C8u;
    // 0x16a3c8: 0xc059f74
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16A3CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DD0_0x167dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3D0u; }
    }
    if (ctx->pc != 0x16A3D0u) { return; }
    ctx->pc = 0x16A3D0u;
    // 0x16a3d0: 0x10400005
    ctx->pc = 0x16A3D0u;
    {
        const bool branch_taken_0x16a3d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A3D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x16a3d0) {
            ctx->pc = 0x16A3E8u;
            goto label_16a3e8;
        }
    }
    ctx->pc = 0x16A3D8u;
    // 0x16a3d8: 0xc05ac2c
    ctx->pc = 0x16A3D8u;
    SET_GPR_U32(ctx, 31, 0x16A3E0u);
    ctx->pc = 0x16A3DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B0B0_0x16b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3E0u; }
    }
    if (ctx->pc != 0x16A3E0u) { return; }
    ctx->pc = 0x16A3E0u;
    // 0x16a3e0: 0x10000029
    ctx->pc = 0x16A3E0u;
    {
        const bool branch_taken_0x16a3e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x16a3e0) {
            ctx->pc = 0x16A488u;
            goto label_16a488;
        }
    }
    ctx->pc = 0x16A3E8u;
label_16a3e8:
    // 0x16a3e8: 0x14710006
    ctx->pc = 0x16A3E8u;
    {
        const bool branch_taken_0x16a3e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        if (branch_taken_0x16a3e8) {
            ctx->pc = 0x16A404u;
            goto label_16a404;
        }
    }
    ctx->pc = 0x16A3F0u;
    // 0x16a3f0: 0xc059f7c
    ctx->pc = 0x16A3F0u;
    SET_GPR_U32(ctx, 31, 0x16A3F8u);
    ctx->pc = 0x16A3F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DF0_0x167df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3F8u; }
    }
    if (ctx->pc != 0x16A3F8u) { return; }
    ctx->pc = 0x16A3F8u;
    // 0x16a3f8: 0x14400023
    ctx->pc = 0x16A3F8u;
    {
        const bool branch_taken_0x16a3f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A3FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x16a3f8) {
            ctx->pc = 0x16A488u;
            goto label_16a488;
        }
    }
    ctx->pc = 0x16A400u;
    // 0x16a400: 0x8fa30004
    ctx->pc = 0x16a400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16a404:
    // 0x16a404: 0x14600008
    ctx->pc = 0x16A404u;
    {
        const bool branch_taken_0x16a404 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A408u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x16a404) {
            ctx->pc = 0x16A428u;
            goto label_16a428;
        }
    }
    ctx->pc = 0x16A40Cu;
    // 0x16a40c: 0x200202d
    ctx->pc = 0x16a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a410: 0x260282d
    ctx->pc = 0x16a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a414: 0x240302d
    ctx->pc = 0x16a414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a418: 0xc05a92e
    ctx->pc = 0x16A418u;
    SET_GPR_U32(ctx, 31, 0x16A420u);
    ctx->pc = 0x16A41Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x16A4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A4B8_0x16a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A420u; }
    }
    if (ctx->pc != 0x16A420u) { return; }
    ctx->pc = 0x16A420u;
    // 0x16a420: 0x10000019
    ctx->pc = 0x16A420u;
    {
        const bool branch_taken_0x16a420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A424u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x16a420) {
            ctx->pc = 0x16A488u;
            goto label_16a488;
        }
    }
    ctx->pc = 0x16A428u;
label_16a428:
    // 0x16a428: 0x621024
    ctx->pc = 0x16a428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a42c: 0x54400008
    ctx->pc = 0x16A42Cu;
    {
        const bool branch_taken_0x16a42c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a42c) {
            ctx->pc = 0x16A430u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16A450u;
            goto label_16a450;
        }
    }
    ctx->pc = 0x16A434u;
    // 0x16a434: 0x3c05ff00
    ctx->pc = 0x16a434u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16a438: 0x200202d
    ctx->pc = 0x16a438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a43c: 0xc05a704
    ctx->pc = 0x16A43Cu;
    SET_GPR_U32(ctx, 31, 0x16A444u);
    ctx->pc = 0x16A440u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3333));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A444u; }
    }
    if (ctx->pc != 0x16A444u) { return; }
    ctx->pc = 0x16A444u;
    // 0x16a444: 0x10000011
    ctx->pc = 0x16A444u;
    {
        const bool branch_taken_0x16a444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A448u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a444) {
            ctx->pc = 0x16A48Cu;
            goto label_16a48c;
        }
    }
    ctx->pc = 0x16A44Cu;
    // 0x16a44c: 0x0
    ctx->pc = 0x16a44cu;
    // NOP
label_16a450:
    // 0x16a450: 0x200202d
    ctx->pc = 0x16a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a454: 0x27a7000c
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
    // 0x16a458: 0x27a80010
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    // 0x16a45c: 0x2453023
    ctx->pc = 0x16a45cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x16a460: 0xc05a998
    ctx->pc = 0x16A460u;
    SET_GPR_U32(ctx, 31, 0x16A468u);
    ctx->pc = 0x16A464u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->pc = 0x16A660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A660_0x16a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A468u; }
    }
    if (ctx->pc != 0x16A468u) { return; }
    ctx->pc = 0x16A468u;
    // 0x16a468: 0x24030001
    ctx->pc = 0x16a468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a46c: 0x40a82d
    ctx->pc = 0x16a46cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a470: 0x8fa20010
    ctx->pc = 0x16a470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a474: 0x14430006
    ctx->pc = 0x16A474u;
    {
        const bool branch_taken_0x16a474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16A478u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a474) {
            ctx->pc = 0x16A490u;
            goto label_16a490;
        }
    }
    ctx->pc = 0x16A47Cu;
    // 0x16a47c: 0x8fa20000
    ctx->pc = 0x16a47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a480: 0x8fa3000c
    ctx->pc = 0x16a480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a484: 0x431021
    ctx->pc = 0x16a484u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16a488:
    // 0x16a488: 0xae820000
    ctx->pc = 0x16a488u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_16a48c:
    // 0x16a48c: 0x2a0102d
    ctx->pc = 0x16a48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16a490:
    // 0x16a490: 0xdfb00020
    ctx->pc = 0x16a490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a494: 0xdfb10028
    ctx->pc = 0x16a494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a498: 0xdfb20030
    ctx->pc = 0x16a498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a49c: 0xdfb30038
    ctx->pc = 0x16a49cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a4a0: 0xdfb40040
    ctx->pc = 0x16a4a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a4a4: 0xdfb50048
    ctx->pc = 0x16a4a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16a4a8: 0xdfbf0050
    ctx->pc = 0x16a4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a4ac: 0x3e00008
    ctx->pc = 0x16A4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A4B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A394u: goto label_16a394;
            case 0x16A3BCu: goto label_16a3bc;
            case 0x16A3E8u: goto label_16a3e8;
            case 0x16A404u: goto label_16a404;
            case 0x16A428u: goto label_16a428;
            case 0x16A450u: goto label_16a450;
            case 0x16A488u: goto label_16a488;
            case 0x16A48Cu: goto label_16a48c;
            case 0x16A490u: goto label_16a490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A4B4u;
    // 0x16a4b4: 0x0
    ctx->pc = 0x16a4b4u;
    // NOP
}
