#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379420
// Address: 0x379420 - 0x3795e0
void sub_00379420_0x379420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379420u;

    // 0x379420: 0x3c010057
    ctx->pc = 0x379420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379424: 0x8c22bac8
    ctx->pc = 0x379424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x379428: 0x4410003
    ctx->pc = 0x379428u;
    {
        const bool branch_taken_0x379428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37942Cu;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 6));
        if (branch_taken_0x379428) {
            ctx->pc = 0x379438u;
            goto label_379438;
        }
    }
    ctx->pc = 0x379430u;
    // 0x379430: 0x2442003f
    ctx->pc = 0x379430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x379434: 0x25183
    ctx->pc = 0x379434u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 6));
label_379438:
    // 0x379438: 0x6183c
    ctx->pc = 0x379438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37943c: 0xa103c
    ctx->pc = 0x37943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x379440: 0x3183f
    ctx->pc = 0x379440u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x379444: 0x2103f
    ctx->pc = 0x379444u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379448: 0x3183c
    ctx->pc = 0x379448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37944c: 0x2143c
    ctx->pc = 0x37944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x379450: 0x621825
    ctx->pc = 0x379450u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379454: 0x3c061000
    ctx->pc = 0x379454u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x379458: 0x7103c
    ctx->pc = 0x379458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x37945c: 0x3c010057
    ctx->pc = 0x37945cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379460: 0x2103f
    ctx->pc = 0x379460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379464: 0x2163c
    ctx->pc = 0x379464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x379468: 0x433825
    ctx->pc = 0x379468u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37946c: 0x34c20004
    ctx->pc = 0x37946cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), 4));
    // 0x379470: 0x6183c
    ctx->pc = 0x379470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x379474: 0xac820000
    ctx->pc = 0x379474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x379478: 0x24060050
    ctx->pc = 0x379478u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 80));
    // 0x37947c: 0xac800004
    ctx->pc = 0x37947cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x379480: 0x34028003
    ctx->pc = 0x379480u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
    // 0x379484: 0xac800008
    ctx->pc = 0x379484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x379488: 0x431025
    ctx->pc = 0x379488u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37948c: 0xac80000c
    ctx->pc = 0x37948cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x379490: 0x2403000e
    ctx->pc = 0x379490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x379494: 0xfc820010
    ctx->pc = 0x379494u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x379498: 0xfc830018
    ctx->pc = 0x379498u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x37949c: 0x2402003f
    ctx->pc = 0x37949cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x3794a0: 0xfc800020
    ctx->pc = 0x3794a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x3794a4: 0x24030010
    ctx->pc = 0x3794a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x3794a8: 0xfc820028
    ctx->pc = 0x3794a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x3794ac: 0xfc870030
    ctx->pc = 0x3794acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 7));
    // 0x3794b0: 0x3103c
    ctx->pc = 0x3794b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3794b4: 0x621825
    ctx->pc = 0x3794b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3794b8: 0xfc860038
    ctx->pc = 0x3794b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
    // 0x3794bc: 0x24020052
    ctx->pc = 0x3794bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 82));
    // 0x3794c0: 0xfc830040
    ctx->pc = 0x3794c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 3));
    // 0x3794c4: 0xfc820048
    ctx->pc = 0x3794c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 2));
    // 0x3794c8: 0x382d
    ctx->pc = 0x3794c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3794cc: 0x8c22bae8
    ctx->pc = 0x3794ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x3794d0: 0x24840050
    ctx->pc = 0x3794d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    // 0x3794d4: 0x93103
    ctx->pc = 0x3794d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 4));
    // 0x3794d8: 0x5210003
    ctx->pc = 0x3794D8u;
    {
        const bool branch_taken_0x3794d8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x3794DCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
        if (branch_taken_0x3794d8) {
            ctx->pc = 0x3794E8u;
            goto label_3794e8;
        }
    }
    ctx->pc = 0x3794E0u;
    // 0x3794e0: 0x2522000f
    ctx->pc = 0x3794e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 15));
    // 0x3794e4: 0x23103
    ctx->pc = 0x3794e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_3794e8:
    // 0x3794e8: 0x5010003
    ctx->pc = 0x3794E8u;
    {
        const bool branch_taken_0x3794e8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x3794ECu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 4));
        if (branch_taken_0x3794e8) {
            ctx->pc = 0x3794F8u;
            goto label_3794f8;
        }
    }
    ctx->pc = 0x3794F0u;
    // 0x3794f0: 0x2502000f
    ctx->pc = 0x3794f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 15));
    // 0x3794f4: 0x21903
    ctx->pc = 0x3794f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_3794f8:
    // 0x3794f8: 0x3c091000
    ctx->pc = 0x3794f8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)4096 << 16));
    // 0x3794fc: 0x24080002
    ctx->pc = 0x3794fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379500: 0x35220004
    ctx->pc = 0x379500u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 9), 4));
    // 0x379504: 0x240e000e
    ctx->pc = 0x379504u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 14));
    // 0x379508: 0x9483c
    ctx->pc = 0x379508u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x37950c: 0x240d0051
    ctx->pc = 0x37950cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 81));
    // 0x379510: 0x1097825
    ctx->pc = 0x379510u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x379514: 0x240c0053
    ctx->pc = 0x379514u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 83));
    // 0x379518: 0x3c080800
    ctx->pc = 0x379518u;
    SET_GPR_U32(ctx, 8, ((uint32_t)2048 << 16));
    // 0x37951c: 0x34098040
    ctx->pc = 0x37951cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 0), 32832));
    // 0x379520: 0x8503c
    ctx->pc = 0x379520u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x379524: 0x3c083000
    ctx->pc = 0x379524u;
    SET_GPR_U32(ctx, 8, ((uint32_t)12288 << 16));
    // 0x379528: 0x12a5825
    ctx->pc = 0x379528u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x37952c: 0x350a0040
    ctx->pc = 0x37952cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 8), 64));
    // 0x379530: 0x3c085100
    ctx->pc = 0x379530u;
    SET_GPR_U32(ctx, 8, ((uint32_t)20736 << 16));
    // 0x379534: 0x1000001d
    ctx->pc = 0x379534u;
    {
        const bool branch_taken_0x379534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379538u;
        SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 8), 64));
        if (branch_taken_0x379534) {
            ctx->pc = 0x3795ACu;
            goto label_3795ac;
        }
    }
    ctx->pc = 0x37953Cu;
label_37953c:
    // 0x37953c: 0xc82d
    ctx->pc = 0x37953cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379540: 0x10000016
    ctx->pc = 0x379540u;
    {
        const bool branch_taken_0x379540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379544u;
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 8) << (32 + 0));
        if (branch_taken_0x379540) {
            ctx->pc = 0x37959Cu;
            goto label_37959c;
        }
    }
    ctx->pc = 0x379548u;
label_379548:
    // 0x379548: 0xac820000
    ctx->pc = 0x379548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37954c: 0x194100
    ctx->pc = 0x37954cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 25), 4));
    // 0x379550: 0xac800004
    ctx->pc = 0x379550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x379554: 0x8443c
    ctx->pc = 0x379554u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x379558: 0xac800008
    ctx->pc = 0x379558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x37955c: 0x3084025
    ctx->pc = 0x37955cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
    // 0x379560: 0xac80000c
    ctx->pc = 0x379560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x379564: 0x27390001
    ctx->pc = 0x379564u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
    // 0x379568: 0xfc8f0010
    ctx->pc = 0x379568u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 15));
    // 0x37956c: 0xfc8e0018
    ctx->pc = 0x37956cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x379570: 0xfc880020
    ctx->pc = 0x379570u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
    // 0x379574: 0xfc8d0028
    ctx->pc = 0x379574u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 13));
    // 0x379578: 0xfc800030
    ctx->pc = 0x379578u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x37957c: 0xfc8c0038
    ctx->pc = 0x37957cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 12));
    // 0x379580: 0xfc8b0040
    ctx->pc = 0x379580u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 11));
    // 0x379584: 0xfc800048
    ctx->pc = 0x379584u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 0));
    // 0x379588: 0xac8a0050
    ctx->pc = 0x379588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 10));
    // 0x37958c: 0xac850054
    ctx->pc = 0x37958cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x379590: 0xac800058
    ctx->pc = 0x379590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x379594: 0xac89005c
    ctx->pc = 0x379594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 9));
    // 0x379598: 0x24840060
    ctx->pc = 0x379598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
label_37959c:
    // 0x37959c: 0x326402a
    ctx->pc = 0x37959cu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 6)));
    // 0x3795a0: 0x1500ffe9
    ctx->pc = 0x3795A0u;
    {
        const bool branch_taken_0x3795a0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x3795a0) {
            ctx->pc = 0x379548u;
            goto label_379548;
        }
    }
    ctx->pc = 0x3795A8u;
    // 0x3795a8: 0x24e70001
    ctx->pc = 0x3795a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_3795ac:
    // 0x3795ac: 0xe3402a
    ctx->pc = 0x3795acu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x3795b0: 0x1500ffe2
    ctx->pc = 0x3795B0u;
    {
        const bool branch_taken_0x3795b0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x3795B4u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x3795b0) {
            ctx->pc = 0x37953Cu;
            goto label_37953c;
        }
    }
    ctx->pc = 0x3795B8u;
    // 0x3795b8: 0x3c037000
    ctx->pc = 0x3795b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x3795bc: 0x24820010
    ctx->pc = 0x3795bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x3795c0: 0xac830000
    ctx->pc = 0x3795c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3795c4: 0xac800004
    ctx->pc = 0x3795c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3795c8: 0xac800008
    ctx->pc = 0x3795c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3795cc: 0x3e00008
    ctx->pc = 0x3795CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3795D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379438u: goto label_379438;
            case 0x3794E8u: goto label_3794e8;
            case 0x3794F8u: goto label_3794f8;
            case 0x37953Cu: goto label_37953c;
            case 0x379548u: goto label_379548;
            case 0x37959Cu: goto label_37959c;
            case 0x3795ACu: goto label_3795ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3795D4u;
    // 0x3795d4: 0x0
    ctx->pc = 0x3795d4u;
    // NOP
    // 0x3795d8: 0x0
    ctx->pc = 0x3795d8u;
    // NOP
    // 0x3795dc: 0x0
    ctx->pc = 0x3795dcu;
    // NOP
}
