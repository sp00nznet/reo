#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1360
// Address: 0x1b1360 - 0x1b14a0
void sub_001B1360_0x1b1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1360u;

    // 0x1b1360: 0x3c04004f
    ctx->pc = 0x1b1360u;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b1364: 0x102d
    ctx->pc = 0x1b1364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1368: 0x10000009
    ctx->pc = 0x1B1368u;
    {
        const bool branch_taken_0x1b1368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B136Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953232));
        if (branch_taken_0x1b1368) {
            ctx->pc = 0x1B1390u;
            goto label_1b1390;
        }
    }
    ctx->pc = 0x1B1370u;
label_1b1370:
    // 0x1b1370: 0x832821
    ctx->pc = 0x1b1370u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b1374: 0x90a30000
    ctx->pc = 0x1b1374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1378: 0x14600003
    ctx->pc = 0x1B1378u;
    {
        const bool branch_taken_0x1b1378 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B137Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b1378) {
            ctx->pc = 0x1B1388u;
            goto label_1b1388;
        }
    }
    ctx->pc = 0x1B1380u;
    // 0x1b1380: 0x10000008
    ctx->pc = 0x1B1380u;
    {
        const bool branch_taken_0x1b1380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1384u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b1380) {
            ctx->pc = 0x1B13A4u;
            goto label_1b13a4;
        }
    }
    ctx->pc = 0x1B1388u;
label_1b1388:
    // 0x1b1388: 0x24420001
    ctx->pc = 0x1b1388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b138c: 0x3042ffff
    ctx->pc = 0x1b138cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1b1390:
    // 0x1b1390: 0x3043ffff
    ctx->pc = 0x1b1390u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b1394: 0x28630258
    ctx->pc = 0x1b1394u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 600));
    // 0x1b1398: 0x1460fff5
    ctx->pc = 0x1B1398u;
    {
        const bool branch_taken_0x1b1398 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B139Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b1398) {
            ctx->pc = 0x1B1370u;
            goto label_1b1370;
        }
    }
    ctx->pc = 0x1B13A0u;
    // 0x1b13a0: 0x102d
    ctx->pc = 0x1b13a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b13a4:
    // 0x1b13a4: 0x3e00008
    ctx->pc = 0x1B13A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1370u: goto label_1b1370;
            case 0x1B1388u: goto label_1b1388;
            case 0x1B1390u: goto label_1b1390;
            case 0x1B13A4u: goto label_1b13a4;
            case 0x1B13D8u: goto label_1b13d8;
            case 0x1B1430u: goto label_1b1430;
            case 0x1B1434u: goto label_1b1434;
            case 0x1B1474u: goto label_1b1474;
            case 0x1B1484u: goto label_1b1484;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B13ACu;
    // 0x1b13ac: 0x0
    ctx->pc = 0x1b13acu;
    // NOP
    // 0x1b13b0: 0x27bdffc0
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b13b4: 0xffbf0030
    ctx->pc = 0x1b13b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b13b8: 0x7fb20020
    ctx->pc = 0x1b13b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b13bc: 0x7fb10010
    ctx->pc = 0x1b13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b13c0: 0x7fb00000
    ctx->pc = 0x1b13c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b13c4: 0x8c830808
    ctx->pc = 0x1b13c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x1b13c8: 0x1060002e
    ctx->pc = 0x1B13C8u;
    {
        const bool branch_taken_0x1b13c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B13CCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b13c8) {
            ctx->pc = 0x1B1484u;
            goto label_1b1484;
        }
    }
    ctx->pc = 0x1B13D0u;
    // 0x1b13d0: 0x10000018
    ctx->pc = 0x1B13D0u;
    {
        const bool branch_taken_0x1b13d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B13D4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b13d0) {
            ctx->pc = 0x1B1434u;
            goto label_1b1434;
        }
    }
    ctx->pc = 0x1B13D8u;
label_1b13d8:
    // 0x1b13d8: 0x8e430808
    ctx->pc = 0x1b13d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x1b13dc: 0x1110c0
    ctx->pc = 0x1b13dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
    // 0x1b13e0: 0x512021
    ctx->pc = 0x1b13e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b13e4: 0x42040
    ctx->pc = 0x1b13e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b13e8: 0x2402ffff
    ctx->pc = 0x1b13e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b13ec: 0x912021
    ctx->pc = 0x1b13ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b13f0: 0x480c0
    ctx->pc = 0x1b13f0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b13f4: 0x701821
    ctx->pc = 0x1b13f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b13f8: 0x8c640000
    ctx->pc = 0x1b13f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b13fc: 0x1082000c
    ctx->pc = 0x1B13FCu;
    {
        const bool branch_taken_0x1b13fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b13fc) {
            ctx->pc = 0x1B1430u;
            goto label_1b1430;
        }
    }
    ctx->pc = 0x1B1404u;
    // 0x1b1404: 0x1080000a
    ctx->pc = 0x1B1404u;
    {
        const bool branch_taken_0x1b1404 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1404) {
            ctx->pc = 0x1B1430u;
            goto label_1b1430;
        }
    }
    ctx->pc = 0x1B140Cu;
    // 0x1b140c: 0xc063128
    ctx->pc = 0x1B140Cu;
    SET_GPR_U32(ctx, 31, 0x1B1414u);
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C4A0_0x18c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1414u; }
    }
    if (ctx->pc != 0x1B1414u) { return; }
    ctx->pc = 0x1B1414u;
    // 0x1b1414: 0x8e420808
    ctx->pc = 0x1b1414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x1b1418: 0x501021
    ctx->pc = 0x1b1418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b141c: 0xc06c410
    ctx->pc = 0x1B141Cu;
    SET_GPR_U32(ctx, 31, 0x1B1424u);
    ctx->pc = 0x1B1420u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B1040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1040_0x1b1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1424u; }
    }
    if (ctx->pc != 0x1B1424u) { return; }
    ctx->pc = 0x1B1424u;
    // 0x1b1424: 0x8e420808
    ctx->pc = 0x1b1424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x1b1428: 0x501021
    ctx->pc = 0x1b1428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b142c: 0xac400000
    ctx->pc = 0x1b142cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1b1430:
    // 0x1b1430: 0x26310001
    ctx->pc = 0x1b1430u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b1434:
    // 0x1b1434: 0x96420812
    ctx->pc = 0x1b1434u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2066)));
    // 0x1b1438: 0x222102a
    ctx->pc = 0x1b1438u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1b143c: 0x1440ffe6
    ctx->pc = 0x1B143Cu;
    {
        const bool branch_taken_0x1b143c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1440u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b143c) {
            ctx->pc = 0x1B13D8u;
            goto label_1b13d8;
        }
    }
    ctx->pc = 0x1B1444u;
    // 0x1b1444: 0xc06c6a4
    ctx->pc = 0x1B1444u;
    SET_GPR_U32(ctx, 31, 0x1B144Cu);
    ctx->pc = 0x1B1A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A90_0x1b1a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B144Cu; }
    }
    if (ctx->pc != 0x1B144Cu) { return; }
    ctx->pc = 0x1B144Cu;
    // 0x1b144c: 0xc06c674
    ctx->pc = 0x1B144Cu;
    SET_GPR_U32(ctx, 31, 0x1B1454u);
    ctx->pc = 0x1B1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B19D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19D0_0x1b19d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1454u; }
    }
    if (ctx->pc != 0x1B1454u) { return; }
    ctx->pc = 0x1B1454u;
    // 0x1b1454: 0x8e44080c
    ctx->pc = 0x1b1454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x1b1458: 0x10800006
    ctx->pc = 0x1B1458u;
    {
        const bool branch_taken_0x1b1458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1458) {
            ctx->pc = 0x1B1474u;
            goto label_1b1474;
        }
    }
    ctx->pc = 0x1B1460u;
    // 0x1b1460: 0xc064960
    ctx->pc = 0x1B1460u;
    SET_GPR_U32(ctx, 31, 0x1B1468u);
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1468u; }
    }
    if (ctx->pc != 0x1B1468u) { return; }
    ctx->pc = 0x1B1468u;
    // 0x1b1468: 0xc06c444
    ctx->pc = 0x1B1468u;
    SET_GPR_U32(ctx, 31, 0x1B1470u);
    ctx->pc = 0x1B146Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1110_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1470u; }
    }
    if (ctx->pc != 0x1B1470u) { return; }
    ctx->pc = 0x1B1470u;
    // 0x1b1470: 0xae40080c
    ctx->pc = 0x1b1470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 0));
label_1b1474:
    // 0x1b1474: 0xc06cae4
    ctx->pc = 0x1B1474u;
    SET_GPR_U32(ctx, 31, 0x1B147Cu);
    ctx->pc = 0x1B1478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    ctx->pc = 0x1B2B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2B90_0x1b2b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B147Cu; }
    }
    if (ctx->pc != 0x1B147Cu) { return; }
    ctx->pc = 0x1B147Cu;
    // 0x1b147c: 0xae400808
    ctx->pc = 0x1b147cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2056), GPR_U32(ctx, 0));
    // 0x1b1480: 0xa6400812
    ctx->pc = 0x1b1480u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2066), (uint16_t)GPR_U32(ctx, 0));
label_1b1484:
    // 0x1b1484: 0xdfbf0030
    ctx->pc = 0x1b1484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1488: 0x7bb20020
    ctx->pc = 0x1b1488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b148c: 0x7bb10010
    ctx->pc = 0x1b148cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1490: 0x7bb00000
    ctx->pc = 0x1b1490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1494: 0x3e00008
    ctx->pc = 0x1B1494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1370u: goto label_1b1370;
            case 0x1B1388u: goto label_1b1388;
            case 0x1B1390u: goto label_1b1390;
            case 0x1B13A4u: goto label_1b13a4;
            case 0x1B13D8u: goto label_1b13d8;
            case 0x1B1430u: goto label_1b1430;
            case 0x1B1434u: goto label_1b1434;
            case 0x1B1474u: goto label_1b1474;
            case 0x1B1484u: goto label_1b1484;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B149Cu;
    // 0x1b149c: 0x0
    ctx->pc = 0x1b149cu;
    // NOP
}
