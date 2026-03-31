#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C12C0
// Address: 0x1c12c0 - 0x1c13c0
void sub_001C12C0_0x1c12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c12c0u;

    // 0x1c12c0: 0x3c010032
    ctx->pc = 0x1c12c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c12c4: 0x3c020023
    ctx->pc = 0x1c12c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c12c8: 0x8c236cf0
    ctx->pc = 0x1c12c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27888)));
    // 0x1c12cc: 0x24425160
    ctx->pc = 0x1c12ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20832));
    // 0x1c12d0: 0x31880
    ctx->pc = 0x1c12d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c12d4: 0x431021
    ctx->pc = 0x1c12d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c12d8: 0x10800019
    ctx->pc = 0x1C12D8u;
    {
        const bool branch_taken_0x1c12d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C12DCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1c12d8) {
            ctx->pc = 0x1C1340u;
            goto label_1c1340;
        }
    }
    ctx->pc = 0x1C12E0u;
    // 0x1c12e0: 0x8c850004
    ctx->pc = 0x1c12e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c12e4: 0x80402d
    ctx->pc = 0x1c12e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e8: 0x24070001
    ctx->pc = 0x1c12e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c12ec: 0x10000011
    ctx->pc = 0x1C12ECu;
    {
        const bool branch_taken_0x1c12ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C12F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x1c12ec) {
            ctx->pc = 0x1C1334u;
            goto label_1c1334;
        }
    }
    ctx->pc = 0x1C12F4u;
label_1c12f4:
    // 0x1c12f4: 0x18a00012
    ctx->pc = 0x1C12F4u;
    {
        const bool branch_taken_0x1c12f4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1C12F8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1c12f4) {
            ctx->pc = 0x1C1340u;
            goto label_1c1340;
        }
    }
    ctx->pc = 0x1C12FCu;
    // 0x1c12fc: 0xc21821
    ctx->pc = 0x1c12fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c1300: 0x8c62000c
    ctx->pc = 0x1c1300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c1304: 0x1040000a
    ctx->pc = 0x1C1304u;
    {
        const bool branch_taken_0x1c1304 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c1304) {
            ctx->pc = 0x1C1330u;
            goto label_1c1330;
        }
    }
    ctx->pc = 0x1C130Cu;
    // 0x1c130c: 0x8c820000
    ctx->pc = 0x1c130cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1310: 0x24a5ffff
    ctx->pc = 0x1c1310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c1314: 0xac620014
    ctx->pc = 0x1c1314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1c1318: 0x8c620014
    ctx->pc = 0x1c1318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c131c: 0x481021
    ctx->pc = 0x1c131cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c1320: 0xac620014
    ctx->pc = 0x1c1320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1c1324: 0x8c820004
    ctx->pc = 0x1c1324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c1328: 0xac620018
    ctx->pc = 0x1c1328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x1c132c: 0x24840008
    ctx->pc = 0x1c132cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_1c1330:
    // 0x1c1330: 0x24e70001
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1c1334:
    // 0x1c1334: 0x28e10005
    ctx->pc = 0x1c1334u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 5));
    // 0x1c1338: 0x1420ffee
    ctx->pc = 0x1C1338u;
    {
        const bool branch_taken_0x1c1338 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c1338) {
            ctx->pc = 0x1C12F4u;
            goto label_1c12f4;
        }
    }
    ctx->pc = 0x1C1340u;
label_1c1340:
    // 0x1c1340: 0x282d
    ctx->pc = 0x1c1340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1344: 0x382d
    ctx->pc = 0x1c1344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1348: 0x202d
    ctx->pc = 0x1c1348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c134c: 0x41100
    ctx->pc = 0x1c134cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
label_1c1350:
    // 0x1c1350: 0xc21821
    ctx->pc = 0x1c1350u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c1354: 0x8c62000c
    ctx->pc = 0x1c1354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c1358: 0x10400009
    ctx->pc = 0x1C1358u;
    {
        const bool branch_taken_0x1c1358 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c1358) {
            ctx->pc = 0x1C1380u;
            goto label_1c1380;
        }
    }
    ctx->pc = 0x1C1360u;
    // 0x1c1360: 0x8c620018
    ctx->pc = 0x1c1360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1c1364: 0x244303ff
    ctx->pc = 0x1c1364u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1c1368: 0x4610003
    ctx->pc = 0x1C1368u;
    {
        const bool branch_taken_0x1c1368 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C136Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        if (branch_taken_0x1c1368) {
            ctx->pc = 0x1C1378u;
            goto label_1c1378;
        }
    }
    ctx->pc = 0x1C1370u;
    // 0x1c1370: 0x246203ff
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c1374: 0x21283
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_1c1378:
    // 0x1c1378: 0xe23821
    ctx->pc = 0x1c1378u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1c137c: 0x24a50001
    ctx->pc = 0x1c137cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1c1380:
    // 0x1c1380: 0x24840001
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c1384: 0x28820005
    ctx->pc = 0x1c1384u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 5));
    // 0x1c1388: 0x1440fff1
    ctx->pc = 0x1C1388u;
    {
        const bool branch_taken_0x1c1388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C138Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1c1388) {
            ctx->pc = 0x1C1350u;
            goto label_1c1350;
        }
    }
    ctx->pc = 0x1C1390u;
    // 0x1c1390: 0x24a30001
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c1394: 0x4610003
    ctx->pc = 0x1C1394u;
    {
        const bool branch_taken_0x1c1394 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1398u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1c1394) {
            ctx->pc = 0x1C13A4u;
            goto label_1c13a4;
        }
    }
    ctx->pc = 0x1C139Cu;
    // 0x1c139c: 0x24620001
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c13a0: 0x21043
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c13a4:
    // 0x1c13a4: 0xe23821
    ctx->pc = 0x1c13a4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1c13a8: 0x24e20002
    ctx->pc = 0x1c13a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 2));
    // 0x1c13ac: 0x3e00008
    ctx->pc = 0x1C13ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13B0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C12F4u: goto label_1c12f4;
            case 0x1C1330u: goto label_1c1330;
            case 0x1C1334u: goto label_1c1334;
            case 0x1C1340u: goto label_1c1340;
            case 0x1C1350u: goto label_1c1350;
            case 0x1C1378u: goto label_1c1378;
            case 0x1C1380u: goto label_1c1380;
            case 0x1C13A4u: goto label_1c13a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C13B4u;
    // 0x1c13b4: 0x0
    ctx->pc = 0x1c13b4u;
    // NOP
    // 0x1c13b8: 0x0
    ctx->pc = 0x1c13b8u;
    // NOP
    // 0x1c13bc: 0x0
    ctx->pc = 0x1c13bcu;
    // NOP
}
