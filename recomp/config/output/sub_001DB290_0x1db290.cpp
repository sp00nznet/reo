#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DB290
// Address: 0x1db290 - 0x1db4b8
void sub_001DB290_0x1db290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1db290u;

    // 0x1db290: 0x27bdffc0
    ctx->pc = 0x1db290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db294: 0xffb00020
    ctx->pc = 0x1db294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1db298: 0xffb10028
    ctx->pc = 0x1db298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1db29c: 0xffbe0030
    ctx->pc = 0x1db29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x1db2a0: 0xffbf0038
    ctx->pc = 0x1db2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1db2a4: 0x3a0f02d
    ctx->pc = 0x1db2a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a8: 0xafc40000
    ctx->pc = 0x1db2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1db2ac: 0xafc50004
    ctx->pc = 0x1db2acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1db2b0: 0x8fc20000
    ctx->pc = 0x1db2b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db2b4: 0x8c420058
    ctx->pc = 0x1db2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1db2b8: 0x24420008
    ctx->pc = 0x1db2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db2bc: 0x40202d
    ctx->pc = 0x1db2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c0: 0xc07c441
    ctx->pc = 0x1DB2C0u;
    SET_GPR_U32(ctx, 31, 0x1DB2C8u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2C8u; }
    }
    if (ctx->pc != 0x1DB2C8u) { return; }
    ctx->pc = 0x1DB2C8u;
    // 0x1db2c8: 0x14400004
    ctx->pc = 0x1DB2C8u;
    {
        const bool branch_taken_0x1db2c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1db2c8) {
            ctx->pc = 0x1DB2DCu;
            goto label_1db2dc;
        }
    }
    ctx->pc = 0x1DB2D0u;
    // 0x1db2d0: 0x102d
    ctx->pc = 0x1db2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2d4: 0x10000070
    ctx->pc = 0x1DB2D4u;
    {
        const bool branch_taken_0x1db2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db2d4) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB2DCu;
label_1db2dc:
    // 0x1db2dc: 0x8fc20000
    ctx->pc = 0x1db2dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db2e0: 0x8c420058
    ctx->pc = 0x1db2e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1db2e4: 0x24420008
    ctx->pc = 0x1db2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db2e8: 0x40202d
    ctx->pc = 0x1db2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ec: 0xc07c6e1
    ctx->pc = 0x1DB2ECu;
    SET_GPR_U32(ctx, 31, 0x1DB2F4u);
    ctx->pc = 0x1F1B84u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B84_0x1f1b84(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2F4u; }
    }
    if (ctx->pc != 0x1DB2F4u) { return; }
    ctx->pc = 0x1DB2F4u;
    // 0x1db2f4: 0xafc20008
    ctx->pc = 0x1db2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_1db2f8:
    // 0x1db2f8: 0x8fc20000
    ctx->pc = 0x1db2f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db2fc: 0x8c420058
    ctx->pc = 0x1db2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1db300: 0x24430008
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db304: 0x8fc20008
    ctx->pc = 0x1db304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db308: 0x14620003
    ctx->pc = 0x1DB308u;
    {
        const bool branch_taken_0x1db308 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1db308) {
            ctx->pc = 0x1DB318u;
            goto label_1db318;
        }
    }
    ctx->pc = 0x1DB310u;
    // 0x1db310: 0x10000060
    ctx->pc = 0x1DB310u;
    {
        const bool branch_taken_0x1db310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db310) {
            ctx->pc = 0x1DB494u;
            goto label_1db494;
        }
    }
    ctx->pc = 0x1DB318u;
label_1db318:
    // 0x1db318: 0x8fc40008
    ctx->pc = 0x1db318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db31c: 0xc07c6eb
    ctx->pc = 0x1DB31Cu;
    SET_GPR_U32(ctx, 31, 0x1DB324u);
    ctx->pc = 0x1F1BACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BAC_0x1f1bac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB324u; }
    }
    if (ctx->pc != 0x1DB324u) { return; }
    ctx->pc = 0x1DB324u;
    // 0x1db324: 0xafc2000c
    ctx->pc = 0x1db324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1db328: 0x8fc40008
    ctx->pc = 0x1db328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db32c: 0xc07ccb5
    ctx->pc = 0x1DB32Cu;
    SET_GPR_U32(ctx, 31, 0x1DB334u);
    ctx->pc = 0x1F32D4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F32D4_0x1f32d4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB334u; }
    }
    if (ctx->pc != 0x1DB334u) { return; }
    ctx->pc = 0x1DB334u;
    // 0x1db334: 0x40882d
    ctx->pc = 0x1db334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db338: 0x8fc40008
    ctx->pc = 0x1db338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db33c: 0xc07cc9f
    ctx->pc = 0x1DB33Cu;
    SET_GPR_U32(ctx, 31, 0x1DB344u);
    ctx->pc = 0x1F327Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F327C_0x1f327c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB344u; }
    }
    if (ctx->pc != 0x1DB344u) { return; }
    ctx->pc = 0x1DB344u;
    // 0x1db344: 0x40802d
    ctx->pc = 0x1db344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db348: 0x8fc40008
    ctx->pc = 0x1db348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db34c: 0xc07cccb
    ctx->pc = 0x1DB34Cu;
    SET_GPR_U32(ctx, 31, 0x1DB354u);
    ctx->pc = 0x1F332Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F332C_0x1f332c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB354u; }
    }
    if (ctx->pc != 0x1DB354u) { return; }
    ctx->pc = 0x1DB354u;
    // 0x1db354: 0x40182d
    ctx->pc = 0x1db354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db358: 0x2301021
    ctx->pc = 0x1db358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1db35c: 0x431821
    ctx->pc = 0x1db35cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db360: 0x8fc20004
    ctx->pc = 0x1db360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1db364: 0x43102b
    ctx->pc = 0x1db364u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db368: 0x14400046
    ctx->pc = 0x1DB368u;
    {
        const bool branch_taken_0x1db368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1db368) {
            ctx->pc = 0x1DB484u;
            goto label_1db484;
        }
    }
    ctx->pc = 0x1DB370u;
    // 0x1db370: 0x8fc40008
    ctx->pc = 0x1db370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db374: 0xc07cd03
    ctx->pc = 0x1DB374u;
    SET_GPR_U32(ctx, 31, 0x1DB37Cu);
    ctx->pc = 0x1F340Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F340C_0x1f340c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB37Cu; }
    }
    if (ctx->pc != 0x1DB37Cu) { return; }
    ctx->pc = 0x1DB37Cu;
    // 0x1db37c: 0x40182d
    ctx->pc = 0x1db37cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db380: 0x8fc20000
    ctx->pc = 0x1db380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db384: 0x8c420518
    ctx->pc = 0x1db384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1304)));
    // 0x1db388: 0x43102a
    ctx->pc = 0x1db388u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1db38c: 0x10400007
    ctx->pc = 0x1DB38Cu;
    {
        const bool branch_taken_0x1db38c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db38c) {
            ctx->pc = 0x1DB3ACu;
            goto label_1db3ac;
        }
    }
    ctx->pc = 0x1DB394u;
    // 0x1db394: 0x8fc30000
    ctx->pc = 0x1db394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db398: 0x2402012c
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
    // 0x1db39c: 0xac62050c
    ctx->pc = 0x1db39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1292), GPR_U32(ctx, 2));
    // 0x1db3a0: 0x2402ffff
    ctx->pc = 0x1db3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3a4: 0x1000003c
    ctx->pc = 0x1DB3A4u;
    {
        const bool branch_taken_0x1db3a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db3a4) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB3ACu;
label_1db3ac:
    // 0x1db3ac: 0x8fc20000
    ctx->pc = 0x1db3acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db3b0: 0x8c420058
    ctx->pc = 0x1db3b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1db3b4: 0x24420008
    ctx->pc = 0x1db3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db3b8: 0x40202d
    ctx->pc = 0x1db3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3bc: 0x8fc50008
    ctx->pc = 0x1db3bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db3c0: 0xc07c4c3
    ctx->pc = 0x1DB3C0u;
    SET_GPR_U32(ctx, 31, 0x1DB3C8u);
    ctx->pc = 0x1F130Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F130C_0x1f130c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3C8u; }
    }
    if (ctx->pc != 0x1DB3C8u) { return; }
    ctx->pc = 0x1DB3C8u;
    // 0x1db3c8: 0xafc20010
    ctx->pc = 0x1db3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1db3cc: 0x8fc20010
    ctx->pc = 0x1db3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1db3d0: 0x10400007
    ctx->pc = 0x1DB3D0u;
    {
        const bool branch_taken_0x1db3d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db3d0) {
            ctx->pc = 0x1DB3F0u;
            goto label_1db3f0;
        }
    }
    ctx->pc = 0x1DB3D8u;
    // 0x1db3d8: 0x8fc30000
    ctx->pc = 0x1db3d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db3dc: 0x240200c8
    ctx->pc = 0x1db3dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
    // 0x1db3e0: 0xac62050c
    ctx->pc = 0x1db3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1292), GPR_U32(ctx, 2));
    // 0x1db3e4: 0x2402ffff
    ctx->pc = 0x1db3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3e8: 0x1000002b
    ctx->pc = 0x1DB3E8u;
    {
        const bool branch_taken_0x1db3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db3e8) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB3F0u;
label_1db3f0:
    // 0x1db3f0: 0x8fc40008
    ctx->pc = 0x1db3f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db3f4: 0x24050400
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1db3f8: 0xc07c680
    ctx->pc = 0x1DB3F8u;
    SET_GPR_U32(ctx, 31, 0x1DB400u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB400u; }
    }
    if (ctx->pc != 0x1DB400u) { return; }
    ctx->pc = 0x1DB400u;
    // 0x1db400: 0x8fc40008
    ctx->pc = 0x1db400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db404: 0xc07cccb
    ctx->pc = 0x1DB404u;
    SET_GPR_U32(ctx, 31, 0x1DB40Cu);
    ctx->pc = 0x1F332Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F332C_0x1f332c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB40Cu; }
    }
    if (ctx->pc != 0x1DB40Cu) { return; }
    ctx->pc = 0x1DB40Cu;
    // 0x1db40c: 0x244200c8
    ctx->pc = 0x1db40cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 200));
    // 0x1db410: 0x8fc40008
    ctx->pc = 0x1db410u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db414: 0x40282d
    ctx->pc = 0x1db414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db418: 0xc07ccd5
    ctx->pc = 0x1DB418u;
    SET_GPR_U32(ctx, 31, 0x1DB420u);
    ctx->pc = 0x1F3354u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3354_0x1f3354(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB420u; }
    }
    if (ctx->pc != 0x1DB420u) { return; }
    ctx->pc = 0x1DB420u;
    // 0x1db420: 0x8fc40008
    ctx->pc = 0x1db420u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db424: 0x24051000
    ctx->pc = 0x1db424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1db428: 0xc07c690
    ctx->pc = 0x1DB428u;
    SET_GPR_U32(ctx, 31, 0x1DB430u);
    ctx->pc = 0x1F1A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A40_0x1f1a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB430u; }
    }
    if (ctx->pc != 0x1DB430u) { return; }
    ctx->pc = 0x1DB430u;
    // 0x1db430: 0x8fc40008
    ctx->pc = 0x1db430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db434: 0x282d
    ctx->pc = 0x1db434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db438: 0xc07cd19
    ctx->pc = 0x1DB438u;
    SET_GPR_U32(ctx, 31, 0x1DB440u);
    ctx->pc = 0x1F3464u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3464_0x1f3464(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB440u; }
    }
    if (ctx->pc != 0x1DB440u) { return; }
    ctx->pc = 0x1DB440u;
    // 0x1db440: 0x8fc20000
    ctx->pc = 0x1db440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db444: 0x8c420060
    ctx->pc = 0x1db444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1db448: 0x24420008
    ctx->pc = 0x1db448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db44c: 0x40202d
    ctx->pc = 0x1db44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db450: 0x8fc50008
    ctx->pc = 0x1db450u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db454: 0xc07c47a
    ctx->pc = 0x1DB454u;
    SET_GPR_U32(ctx, 31, 0x1DB45Cu);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB45Cu; }
    }
    if (ctx->pc != 0x1DB45Cu) { return; }
    ctx->pc = 0x1DB45Cu;
    // 0x1db45c: 0xafc20010
    ctx->pc = 0x1db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1db460: 0x8fc20010
    ctx->pc = 0x1db460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1db464: 0x10400007
    ctx->pc = 0x1DB464u;
    {
        const bool branch_taken_0x1db464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db464) {
            ctx->pc = 0x1DB484u;
            goto label_1db484;
        }
    }
    ctx->pc = 0x1DB46Cu;
    // 0x1db46c: 0x8fc30000
    ctx->pc = 0x1db46cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db470: 0x240200c8
    ctx->pc = 0x1db470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
    // 0x1db474: 0xac62050c
    ctx->pc = 0x1db474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1292), GPR_U32(ctx, 2));
    // 0x1db478: 0x2402ffff
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db47c: 0x10000006
    ctx->pc = 0x1DB47Cu;
    {
        const bool branch_taken_0x1db47c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db47c) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB484u;
label_1db484:
    // 0x1db484: 0x8fc2000c
    ctx->pc = 0x1db484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1db488: 0xafc20008
    ctx->pc = 0x1db488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1db48c: 0x1000ff9a
    ctx->pc = 0x1DB48Cu;
    {
        const bool branch_taken_0x1db48c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db48c) {
            ctx->pc = 0x1DB2F8u;
            goto label_1db2f8;
        }
    }
    ctx->pc = 0x1DB494u;
label_1db494:
    // 0x1db494: 0x102d
    ctx->pc = 0x1db494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db498:
    // 0x1db498: 0x3c0e82d
    ctx->pc = 0x1db498u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db49c: 0xdfb00020
    ctx->pc = 0x1db49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db4a0: 0xdfb10028
    ctx->pc = 0x1db4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1db4a4: 0xdfbe0030
    ctx->pc = 0x1db4a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db4a8: 0xdfbf0038
    ctx->pc = 0x1db4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1db4ac: 0x27bd0040
    ctx->pc = 0x1db4acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1db4b0: 0x3e00008
    ctx->pc = 0x1DB4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB2DCu: goto label_1db2dc;
            case 0x1DB2F8u: goto label_1db2f8;
            case 0x1DB318u: goto label_1db318;
            case 0x1DB3ACu: goto label_1db3ac;
            case 0x1DB3F0u: goto label_1db3f0;
            case 0x1DB484u: goto label_1db484;
            case 0x1DB494u: goto label_1db494;
            case 0x1DB498u: goto label_1db498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB4B8u;
}
