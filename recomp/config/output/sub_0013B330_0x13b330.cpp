#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013B330
// Address: 0x13b330 - 0x13b528
void sub_0013B330_0x13b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13b330u;

    // 0x13b330: 0x27bdffd0
    ctx->pc = 0x13b330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b334: 0xffb00010
    ctx->pc = 0x13b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13b338: 0x80802d
    ctx->pc = 0x13b338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b33c: 0xffb10018
    ctx->pc = 0x13b33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13b340: 0x16000005
    ctx->pc = 0x13B340u;
    {
        const bool branch_taken_0x13b340 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B344u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x13b340) {
            ctx->pc = 0x13B358u;
            goto label_13b358;
        }
    }
    ctx->pc = 0x13B348u;
    // 0x13b348: 0x3c050024
    ctx->pc = 0x13b348u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b34c: 0x1000006c
    ctx->pc = 0x13B34Cu;
    {
        const bool branch_taken_0x13b34c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B350u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954584));
        if (branch_taken_0x13b34c) {
            ctx->pc = 0x13B500u;
            goto label_13b500;
        }
    }
    ctx->pc = 0x13B354u;
    // 0x13b354: 0x0
    ctx->pc = 0x13b354u;
    // NOP
label_13b358:
    // 0x13b358: 0xc04f1fa
    ctx->pc = 0x13B358u;
    SET_GPR_U32(ctx, 31, 0x13B360u);
    ctx->pc = 0x13B35Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C7E8_0x13c7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B360u; }
    }
    if (ctx->pc != 0x13B360u) { return; }
    ctx->pc = 0x13B360u;
    // 0x13b360: 0x8fa20004
    ctx->pc = 0x13b360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13b364: 0x1440006a
    ctx->pc = 0x13B364u;
    {
        const bool branch_taken_0x13b364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B368u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x13b364) {
            ctx->pc = 0x13B510u;
            goto label_13b510;
        }
    }
    ctx->pc = 0x13B36Cu;
    // 0x13b36c: 0x3c020022
    ctx->pc = 0x13b36cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b370: 0x200202d
    ctx->pc = 0x13b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b374: 0x2451dd60
    ctx->pc = 0x13b374u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x13b378: 0xc04efa0
    ctx->pc = 0x13B378u;
    SET_GPR_U32(ctx, 31, 0x13B380u);
    ctx->pc = 0x13B37Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE80_0x13be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B380u; }
    }
    if (ctx->pc != 0x13B380u) { return; }
    ctx->pc = 0x13B380u;
    // 0x13b380: 0xc04e082
    ctx->pc = 0x13B380u;
    SET_GPR_U32(ctx, 31, 0x13B388u);
    ctx->pc = 0x13B384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17408));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B388u; }
    }
    if (ctx->pc != 0x13B388u) { return; }
    ctx->pc = 0x13B388u;
    // 0x13b388: 0x220202d
    ctx->pc = 0x13b388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b38c: 0xc04e146
    ctx->pc = 0x13B38Cu;
    SET_GPR_U32(ctx, 31, 0x13B394u);
    ctx->pc = 0x13B390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x138518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138518_0x138518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B394u; }
    }
    if (ctx->pc != 0x13B394u) { return; }
    ctx->pc = 0x13B394u;
    // 0x13b394: 0x24044401
    ctx->pc = 0x13b394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17409));
    // 0x13b398: 0xc04e082
    ctx->pc = 0x13B398u;
    SET_GPR_U32(ctx, 31, 0x13B3A0u);
    ctx->pc = 0x13B39Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B3A0u; }
    }
    if (ctx->pc != 0x13B3A0u) { return; }
    ctx->pc = 0x13B3A0u;
    // 0x13b3a0: 0x601000f
    ctx->pc = 0x13B3A0u;
    {
        const bool branch_taken_0x13b3a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13B3A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x13b3a0) {
            ctx->pc = 0x13B3E0u;
            goto label_13b3e0;
        }
    }
    ctx->pc = 0x13B3A8u;
    // 0x13b3a8: 0x3c020022
    ctx->pc = 0x13b3a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b3ac: 0x24040002
    ctx->pc = 0x13b3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b3b0: 0x8c43dea4
    ctx->pc = 0x13b3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13b3b4: 0x10640006
    ctx->pc = 0x13B3B4u;
    {
        const bool branch_taken_0x13b3b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x13B3B8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b3b4) {
            ctx->pc = 0x13B3D0u;
            goto label_13b3d0;
        }
    }
    ctx->pc = 0x13B3BCu;
    // 0x13b3bc: 0x3c040024
    ctx->pc = 0x13b3bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13b3c0: 0x220282d
    ctx->pc = 0x13b3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b3c4: 0xc045a12
    ctx->pc = 0x13B3C4u;
    SET_GPR_U32(ctx, 31, 0x13B3CCu);
    ctx->pc = 0x13B3C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954632));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B3CCu; }
    }
    if (ctx->pc != 0x13B3CCu) { return; }
    ctx->pc = 0x13B3CCu;
    // 0x13b3cc: 0x3c050024
    ctx->pc = 0x13b3ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_13b3d0:
    // 0x13b3d0: 0x202d
    ctx->pc = 0x13b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b3d4: 0x1000004a
    ctx->pc = 0x13B3D4u;
    {
        const bool branch_taken_0x13b3d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B3D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954664));
        if (branch_taken_0x13b3d4) {
            ctx->pc = 0x13B500u;
            goto label_13b500;
        }
    }
    ctx->pc = 0x13B3DCu;
    // 0x13b3dc: 0x0
    ctx->pc = 0x13b3dcu;
    // NOP
label_13b3e0:
    // 0x13b3e0: 0x34420004
    ctx->pc = 0x13b3e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x13b3e4: 0x1602000e
    ctx->pc = 0x13B3E4u;
    {
        const bool branch_taken_0x13b3e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x13B3E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x13b3e4) {
            ctx->pc = 0x13B420u;
            goto label_13b420;
        }
    }
    ctx->pc = 0x13B3ECu;
    // 0x13b3ec: 0x3c020022
    ctx->pc = 0x13b3ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b3f0: 0x24040002
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b3f4: 0x8c43dea4
    ctx->pc = 0x13b3f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13b3f8: 0x10640005
    ctx->pc = 0x13B3F8u;
    {
        const bool branch_taken_0x13b3f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x13B3FCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b3f8) {
            ctx->pc = 0x13B410u;
            goto label_13b410;
        }
    }
    ctx->pc = 0x13B400u;
    // 0x13b400: 0x3c040024
    ctx->pc = 0x13b400u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13b404: 0xc045a12
    ctx->pc = 0x13B404u;
    SET_GPR_U32(ctx, 31, 0x13B40Cu);
    ctx->pc = 0x13B408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954704));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B40Cu; }
    }
    if (ctx->pc != 0x13B40Cu) { return; }
    ctx->pc = 0x13B40Cu;
    // 0x13b40c: 0x3c050024
    ctx->pc = 0x13b40cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_13b410:
    // 0x13b410: 0x202d
    ctx->pc = 0x13b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b414: 0x1000003a
    ctx->pc = 0x13B414u;
    {
        const bool branch_taken_0x13b414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954760));
        if (branch_taken_0x13b414) {
            ctx->pc = 0x13B500u;
            goto label_13b500;
        }
    }
    ctx->pc = 0x13B41Cu;
    // 0x13b41c: 0x0
    ctx->pc = 0x13b41cu;
    // NOP
label_13b420:
    // 0x13b420: 0x1602000d
    ctx->pc = 0x13B420u;
    {
        const bool branch_taken_0x13b420 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x13B424u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x13b420) {
            ctx->pc = 0x13B458u;
            goto label_13b458;
        }
    }
    ctx->pc = 0x13B428u;
    // 0x13b428: 0x24040002
    ctx->pc = 0x13b428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b42c: 0x8c43dea4
    ctx->pc = 0x13b42cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13b430: 0x10640005
    ctx->pc = 0x13B430u;
    {
        const bool branch_taken_0x13b430 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x13B434u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b430) {
            ctx->pc = 0x13B448u;
            goto label_13b448;
        }
    }
    ctx->pc = 0x13B438u;
    // 0x13b438: 0x3c040024
    ctx->pc = 0x13b438u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13b43c: 0xc045a12
    ctx->pc = 0x13B43Cu;
    SET_GPR_U32(ctx, 31, 0x13B444u);
    ctx->pc = 0x13B440u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954800));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B444u; }
    }
    if (ctx->pc != 0x13B444u) { return; }
    ctx->pc = 0x13B444u;
    // 0x13b444: 0x3c050024
    ctx->pc = 0x13b444u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_13b448:
    // 0x13b448: 0x202d
    ctx->pc = 0x13b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b44c: 0x1000002c
    ctx->pc = 0x13B44Cu;
    {
        const bool branch_taken_0x13b44c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B450u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954760));
        if (branch_taken_0x13b44c) {
            ctx->pc = 0x13B500u;
            goto label_13b500;
        }
    }
    ctx->pc = 0x13B454u;
    // 0x13b454: 0x0
    ctx->pc = 0x13b454u;
    // NOP
label_13b458:
    // 0x13b458: 0xc04e082
    ctx->pc = 0x13B458u;
    SET_GPR_U32(ctx, 31, 0x13B460u);
    ctx->pc = 0x13B45Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17920));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B460u; }
    }
    if (ctx->pc != 0x13B460u) { return; }
    ctx->pc = 0x13B460u;
    // 0x13b460: 0x200202d
    ctx->pc = 0x13b460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b464: 0x282d
    ctx->pc = 0x13b464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b468: 0xc04e0fa
    ctx->pc = 0x13B468u;
    SET_GPR_U32(ctx, 31, 0x13B470u);
    ctx->pc = 0x13B46Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1383E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001383E8_0x1383e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B470u; }
    }
    if (ctx->pc != 0x13B470u) { return; }
    ctx->pc = 0x13B470u;
    // 0x13b470: 0xc04e082
    ctx->pc = 0x13B470u;
    SET_GPR_U32(ctx, 31, 0x13B478u);
    ctx->pc = 0x13B474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17921));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B478u; }
    }
    if (ctx->pc != 0x13B478u) { return; }
    ctx->pc = 0x13B478u;
    // 0x13b478: 0xc04e082
    ctx->pc = 0x13B478u;
    SET_GPR_U32(ctx, 31, 0x13B480u);
    ctx->pc = 0x13B47Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17920));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B480u; }
    }
    if (ctx->pc != 0x13B480u) { return; }
    ctx->pc = 0x13B480u;
    // 0x13b480: 0x200202d
    ctx->pc = 0x13b480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b484: 0x282d
    ctx->pc = 0x13b484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b488: 0xc04e0fa
    ctx->pc = 0x13B488u;
    SET_GPR_U32(ctx, 31, 0x13B490u);
    ctx->pc = 0x13B48Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1383E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001383E8_0x1383e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B490u; }
    }
    if (ctx->pc != 0x13B490u) { return; }
    ctx->pc = 0x13B490u;
    // 0x13b490: 0x24044601
    ctx->pc = 0x13b490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17921));
    // 0x13b494: 0xc04e082
    ctx->pc = 0x13B494u;
    SET_GPR_U32(ctx, 31, 0x13B49Cu);
    ctx->pc = 0x13B498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B49Cu; }
    }
    if (ctx->pc != 0x13B49Cu) { return; }
    ctx->pc = 0x13B49Cu;
    // 0x13b49c: 0x621000c
    ctx->pc = 0x13B49Cu;
    {
        const bool branch_taken_0x13b49c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x13B4A0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b49c) {
            ctx->pc = 0x13B4D0u;
            goto label_13b4d0;
        }
    }
    ctx->pc = 0x13B4A4u;
    // 0x13b4a4: 0x202d
    ctx->pc = 0x13b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4a8: 0xc04ebf2
    ctx->pc = 0x13B4A8u;
    SET_GPR_U32(ctx, 31, 0x13B4B0u);
    ctx->pc = 0x13B4ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954856));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4B0u; }
    }
    if (ctx->pc != 0x13B4B0u) { return; }
    ctx->pc = 0x13B4B0u;
    // 0x13b4b0: 0xc04e082
    ctx->pc = 0x13B4B0u;
    SET_GPR_U32(ctx, 31, 0x13B4B8u);
    ctx->pc = 0x13B4B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17664));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4B8u; }
    }
    if (ctx->pc != 0x13B4B8u) { return; }
    ctx->pc = 0x13B4B8u;
    // 0x13b4b8: 0xc04e160
    ctx->pc = 0x13B4B8u;
    SET_GPR_U32(ctx, 31, 0x13B4C0u);
    ctx->pc = 0x13B4BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4C0u; }
    }
    if (ctx->pc != 0x13B4C0u) { return; }
    ctx->pc = 0x13B4C0u;
    // 0x13b4c0: 0xc04e082
    ctx->pc = 0x13B4C0u;
    SET_GPR_U32(ctx, 31, 0x13B4C8u);
    ctx->pc = 0x13B4C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17665));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4C8u; }
    }
    if (ctx->pc != 0x13B4C8u) { return; }
    ctx->pc = 0x13B4C8u;
    // 0x13b4c8: 0x10000012
    ctx->pc = 0x13B4C8u;
    {
        const bool branch_taken_0x13b4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B4CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b4c8) {
            ctx->pc = 0x13B514u;
            goto label_13b514;
        }
    }
    ctx->pc = 0x13B4D0u;
label_13b4d0:
    // 0x13b4d0: 0xc04e082
    ctx->pc = 0x13B4D0u;
    SET_GPR_U32(ctx, 31, 0x13B4D8u);
    ctx->pc = 0x13B4D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20480));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4D8u; }
    }
    if (ctx->pc != 0x13B4D8u) { return; }
    ctx->pc = 0x13B4D8u;
    // 0x13b4d8: 0xc04e160
    ctx->pc = 0x13B4D8u;
    SET_GPR_U32(ctx, 31, 0x13B4E0u);
    ctx->pc = 0x13B4DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4E0u; }
    }
    if (ctx->pc != 0x13B4E0u) { return; }
    ctx->pc = 0x13B4E0u;
    // 0x13b4e0: 0x24045001
    ctx->pc = 0x13b4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20481));
    // 0x13b4e4: 0xc04e082
    ctx->pc = 0x13B4E4u;
    SET_GPR_U32(ctx, 31, 0x13B4ECu);
    ctx->pc = 0x13B4E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B4ECu; }
    }
    if (ctx->pc != 0x13B4ECu) { return; }
    ctx->pc = 0x13B4ECu;
    // 0x13b4ec: 0x6030009
    ctx->pc = 0x13B4ECu;
    {
        const bool branch_taken_0x13b4ec = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x13b4ec) {
            ctx->pc = 0x13B4F0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13B514u;
            goto label_13b514;
        }
    }
    ctx->pc = 0x13B4F4u;
    // 0x13b4f4: 0x3c050024
    ctx->pc = 0x13b4f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b4f8: 0x202d
    ctx->pc = 0x13b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4fc: 0x24a5cf98
    ctx->pc = 0x13b4fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954904));
label_13b500:
    // 0x13b500: 0xc04ebf2
    ctx->pc = 0x13B500u;
    SET_GPR_U32(ctx, 31, 0x13B508u);
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B508u; }
    }
    if (ctx->pc != 0x13B508u) { return; }
    ctx->pc = 0x13B508u;
    // 0x13b508: 0x10000002
    ctx->pc = 0x13B508u;
    {
        const bool branch_taken_0x13b508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B50Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b508) {
            ctx->pc = 0x13B514u;
            goto label_13b514;
        }
    }
    ctx->pc = 0x13B510u;
label_13b510:
    // 0x13b510: 0x220102d
    ctx->pc = 0x13b510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b514:
    // 0x13b514: 0xdfb00010
    ctx->pc = 0x13b514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b518: 0xdfb10018
    ctx->pc = 0x13b518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b51c: 0xdfbf0020
    ctx->pc = 0x13b51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b520: 0x3e00008
    ctx->pc = 0x13B520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B524u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B358u: goto label_13b358;
            case 0x13B3D0u: goto label_13b3d0;
            case 0x13B3E0u: goto label_13b3e0;
            case 0x13B410u: goto label_13b410;
            case 0x13B420u: goto label_13b420;
            case 0x13B448u: goto label_13b448;
            case 0x13B458u: goto label_13b458;
            case 0x13B4D0u: goto label_13b4d0;
            case 0x13B500u: goto label_13b500;
            case 0x13B510u: goto label_13b510;
            case 0x13B514u: goto label_13b514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B528u;
}
