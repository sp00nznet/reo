#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037E310
// Address: 0x37e310 - 0x37e920
void sub_0037E310_0x37e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37e310u;

    // 0x37e310: 0x27bdfeb0
    ctx->pc = 0x37e310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x37e314: 0x3c040057
    ctx->pc = 0x37e314u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37e318: 0xffbf0090
    ctx->pc = 0x37e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x37e31c: 0x2484bb10
    ctx->pc = 0x37e31cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x37e320: 0x7fbe0080
    ctx->pc = 0x37e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37e324: 0x282d
    ctx->pc = 0x37e324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e328: 0x7fb70070
    ctx->pc = 0x37e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37e32c: 0x24060074
    ctx->pc = 0x37e32cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 116));
    // 0x37e330: 0x7fb60060
    ctx->pc = 0x37e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37e334: 0x7fb50050
    ctx->pc = 0x37e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37e338: 0x7fb40040
    ctx->pc = 0x37e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37e33c: 0x7fb30030
    ctx->pc = 0x37e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37e340: 0x7fb20020
    ctx->pc = 0x37e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37e344: 0x7fb10010
    ctx->pc = 0x37e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37e348: 0xc041f1a
    ctx->pc = 0x37E348u;
    SET_GPR_U32(ctx, 31, 0x37E350u);
    ctx->pc = 0x37E34Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E350u; }
        if (ctx->pc != 0x37E350u) { return; }
    }
    ctx->pc = 0x37E350u;
    // 0x37e350: 0x3c010032
    ctx->pc = 0x37e350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37e354: 0x24090001
    ctx->pc = 0x37e354u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e358: 0x9023fb7d
    ctx->pc = 0x37e358u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966141)));
    // 0x37e35c: 0x582d
    ctx->pc = 0x37e35cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e360: 0x3c010057
    ctx->pc = 0x37e360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e364: 0xa029bb10
    ctx->pc = 0x37e364u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949648), (uint8_t)GPR_U32(ctx, 9));
    // 0x37e368: 0x3c010032
    ctx->pc = 0x37e368u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37e36c: 0x9022fb7e
    ctx->pc = 0x37e36cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966142)));
    // 0x37e370: 0x3c010057
    ctx->pc = 0x37e370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e374: 0xa023bb11
    ctx->pc = 0x37e374u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949649), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e378: 0x3c010057
    ctx->pc = 0x37e378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e37c: 0xa022bb12
    ctx->pc = 0x37e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949650), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e380: 0x3c030057
    ctx->pc = 0x37e380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
    // 0x37e384: 0x3c080039
    ctx->pc = 0x37e384u;
    SET_GPR_U32(ctx, 8, ((uint32_t)57 << 16));
    // 0x37e388: 0x3c070032
    ctx->pc = 0x37e388u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x37e38c: 0x2463bb10
    ctx->pc = 0x37e38cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949648));
    // 0x37e390: 0x2508a880
    ctx->pc = 0x37e390u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294944896));
    // 0x37e394: 0x24e7fb60
    ctx->pc = 0x37e394u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966112));
    // 0x37e398: 0x3404ffff
    ctx->pc = 0x37e398u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x37e39c: 0xb1080
    ctx->pc = 0x37e39cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 2));
label_37e3a0:
    // 0x37e3a0: 0x1021021
    ctx->pc = 0x37e3a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x37e3a4: 0x8c4d0000
    ctx->pc = 0x37e3a4u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37e3a8: 0x10000011
    ctx->pc = 0x37E3A8u;
    {
        const bool branch_taken_0x37e3a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E3ACu;
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
        if (branch_taken_0x37e3a8) {
            ctx->pc = 0x37E3F0u;
            goto label_37e3f0;
        }
    }
    ctx->pc = 0x37E3B0u;
label_37e3b0:
    // 0x37e3b0: 0x3142001f
    ctx->pc = 0x37e3b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 31));
    // 0x37e3b4: 0x52942
    ctx->pc = 0x37e3b4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 5));
    // 0x37e3b8: 0x52880
    ctx->pc = 0x37e3b8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37e3bc: 0x5410004
    ctx->pc = 0x37E3BCu;
    {
        const bool branch_taken_0x37e3bc = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x37E3C0u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x37e3bc) {
            ctx->pc = 0x37E3D0u;
            goto label_37e3d0;
        }
    }
    ctx->pc = 0x37E3C4u;
    // 0x37e3c4: 0x10400003
    ctx->pc = 0x37E3C4u;
    {
        const bool branch_taken_0x37e3c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E3C8u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x37e3c4) {
            ctx->pc = 0x37E3D4u;
            goto label_37e3d4;
        }
    }
    ctx->pc = 0x37E3CCu;
    // 0x37e3cc: 0x2442ffe0
    ctx->pc = 0x37e3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_37e3d0:
    // 0x37e3d0: 0x492804
    ctx->pc = 0x37e3d0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_37e3d4:
    // 0x37e3d4: 0x8cc20024
    ctx->pc = 0x37e3d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x37e3d8: 0x451024
    ctx->pc = 0x37e3d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37e3dc: 0x14400003
    ctx->pc = 0x37E3DCu;
    {
        const bool branch_taken_0x37e3dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37e3dc) {
            ctx->pc = 0x37E3ECu;
            goto label_37e3ec;
        }
    }
    ctx->pc = 0x37E3E4u;
    // 0x37e3e4: 0x10000005
    ctx->pc = 0x37E3E4u;
    {
        const bool branch_taken_0x37e3e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E3E8u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37e3e4) {
            ctx->pc = 0x37E3FCu;
            goto label_37e3fc;
        }
    }
    ctx->pc = 0x37E3ECu;
label_37e3ec:
    // 0x37e3ec: 0x25ad0002
    ctx->pc = 0x37e3ecu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
label_37e3f0:
    // 0x37e3f0: 0x95aa0000
    ctx->pc = 0x37e3f0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x37e3f4: 0x1544ffee
    ctx->pc = 0x37E3F4u;
    {
        const bool branch_taken_0x37e3f4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 4));
        ctx->pc = 0x37E3F8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 10), 65535));
        if (branch_taken_0x37e3f4) {
            ctx->pc = 0x37E3B0u;
            goto label_37e3b0;
        }
    }
    ctx->pc = 0x37E3FCu;
label_37e3fc:
    // 0x37e3fc: 0x6b1021
    ctx->pc = 0x37e3fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x37e400: 0xa04c0003
    ctx->pc = 0x37e400u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x37e404: 0x256b0001
    ctx->pc = 0x37e404u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x37e408: 0x2962000b
    ctx->pc = 0x37e408u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), 11));
    // 0x37e40c: 0x1440ffe4
    ctx->pc = 0x37E40Cu;
    {
        const bool branch_taken_0x37e40c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E410u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 2));
        if (branch_taken_0x37e40c) {
            ctx->pc = 0x37E3A0u;
            goto label_37e3a0;
        }
    }
    ctx->pc = 0x37E414u;
    // 0x37e414: 0x640d0001
    ctx->pc = 0x37e414u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
    // 0x37e418: 0x482d
    ctx->pc = 0x37e418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e41c: 0x3c030057
    ctx->pc = 0x37e41cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
    // 0x37e420: 0x3c060032
    ctx->pc = 0x37e420u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x37e424: 0x2463bb10
    ctx->pc = 0x37e424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949648));
    // 0x37e428: 0x24070001
    ctx->pc = 0x37e428u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e42c: 0x24c6fb60
    ctx->pc = 0x37e42cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966112));
label_37e430:
    // 0x37e430: 0x91080
    ctx->pc = 0x37e430u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x37e434: 0x64080001
    ctx->pc = 0x37e434u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
    // 0x37e438: 0x491021
    ctx->pc = 0x37e438u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x37e43c: 0xe0602d
    ctx->pc = 0x37e43cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e440: 0x10000016
    ctx->pc = 0x37E440u;
    {
        const bool branch_taken_0x37e440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E444u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x37e440) {
            ctx->pc = 0x37E49Cu;
            goto label_37e49c;
        }
    }
    ctx->pc = 0x37E448u;
label_37e448:
    // 0x37e448: 0x244affff
    ctx->pc = 0x37e448u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e44c: 0x5410003
    ctx->pc = 0x37E44Cu;
    {
        const bool branch_taken_0x37e44c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x37E450u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 5));
        if (branch_taken_0x37e44c) {
            ctx->pc = 0x37E45Cu;
            goto label_37e45c;
        }
    }
    ctx->pc = 0x37E454u;
    // 0x37e454: 0x2542001f
    ctx->pc = 0x37e454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 31));
    // 0x37e458: 0x21143
    ctx->pc = 0x37e458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_37e45c:
    // 0x37e45c: 0x22080
    ctx->pc = 0x37e45cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37e460: 0x3142001f
    ctx->pc = 0x37e460u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 31));
    // 0x37e464: 0x5410004
    ctx->pc = 0x37E464u;
    {
        const bool branch_taken_0x37e464 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x37E468u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x37e464) {
            ctx->pc = 0x37E478u;
            goto label_37e478;
        }
    }
    ctx->pc = 0x37E46Cu;
    // 0x37e46c: 0x10400003
    ctx->pc = 0x37E46Cu;
    {
        const bool branch_taken_0x37e46c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E470u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x37e46c) {
            ctx->pc = 0x37E47Cu;
            goto label_37e47c;
        }
    }
    ctx->pc = 0x37E474u;
    // 0x37e474: 0x2442ffe0
    ctx->pc = 0x37e474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_37e478:
    // 0x37e478: 0x472004
    ctx->pc = 0x37e478u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_37e47c:
    // 0x37e47c: 0x8ca20024
    ctx->pc = 0x37e47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x37e480: 0x441024
    ctx->pc = 0x37e480u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37e484: 0x14400004
    ctx->pc = 0x37E484u;
    {
        const bool branch_taken_0x37e484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37e484) {
            ctx->pc = 0x37E498u;
            goto label_37e498;
        }
    }
    ctx->pc = 0x37E48Cu;
    // 0x37e48c: 0x402d
    ctx->pc = 0x37e48cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e490: 0x10000005
    ctx->pc = 0x37E490u;
    {
        const bool branch_taken_0x37e490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E494u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37e490) {
            ctx->pc = 0x37E4A8u;
            goto label_37e4a8;
        }
    }
    ctx->pc = 0x37E498u;
label_37e498:
    // 0x37e498: 0x258c0001
    ctx->pc = 0x37e498u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
label_37e49c:
    // 0x37e49c: 0x29810015
    ctx->pc = 0x37e49cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 12), 21));
    // 0x37e4a0: 0x1420ffe9
    ctx->pc = 0x37E4A0u;
    {
        const bool branch_taken_0x37e4a0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E4A4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        if (branch_taken_0x37e4a0) {
            ctx->pc = 0x37E448u;
            goto label_37e448;
        }
    }
    ctx->pc = 0x37E4A8u;
label_37e4a8:
    // 0x37e4a8: 0x691021
    ctx->pc = 0x37e4a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x37e4ac: 0x25290001
    ctx->pc = 0x37e4acu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x37e4b0: 0x2921000d
    ctx->pc = 0x37e4b0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 9), 13));
    // 0x37e4b4: 0x1420ffde
    ctx->pc = 0x37E4B4u;
    {
        const bool branch_taken_0x37e4b4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E4B8u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 8));
        if (branch_taken_0x37e4b4) {
            ctx->pc = 0x37E430u;
            goto label_37e430;
        }
    }
    ctx->pc = 0x37E4BCu;
    // 0x37e4bc: 0x3c010057
    ctx->pc = 0x37e4bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e4c0: 0x3011ffff
    ctx->pc = 0x37e4c0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 0), 65535));
    // 0x37e4c4: 0xa02dbb83
    ctx->pc = 0x37e4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949763), (uint8_t)GPR_U32(ctx, 13));
    // 0x37e4c8: 0x27a40130
    ctx->pc = 0x37e4c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 304));
    // 0x37e4cc: 0x282d
    ctx->pc = 0x37e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4d0: 0x24060010
    ctx->pc = 0x37e4d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x37e4d4: 0x802d
    ctx->pc = 0x37e4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4d8: 0x220902d
    ctx->pc = 0x37e4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4dc: 0x220982d
    ctx->pc = 0x37e4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4e0: 0xc041f1a
    ctx->pc = 0x37E4E0u;
    SET_GPR_U32(ctx, 31, 0x37E4E8u);
    ctx->pc = 0x37E4E4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E4E8u; }
        if (ctx->pc != 0x37E4E8u) { return; }
    }
    ctx->pc = 0x37E4E8u;
    // 0x37e4e8: 0x702d
    ctx->pc = 0x37e4e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4ec: 0x402d
    ctx->pc = 0x37e4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e4f0: 0x3c040032
    ctx->pc = 0x37e4f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x37e4f4: 0x3c020057
    ctx->pc = 0x37e4f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x37e4f8: 0x2484fb60
    ctx->pc = 0x37e4f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x37e4fc: 0x24030001
    ctx->pc = 0x37e4fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e500: 0x2442bb10
    ctx->pc = 0x37e500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949648));
    // 0x37e504: 0x7fa400c0
    ctx->pc = 0x37e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
    // 0x37e508: 0x220382d
    ctx->pc = 0x37e508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e50c: 0x820c0
    ctx->pc = 0x37e50cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 3));
label_37e510:
    // 0x37e510: 0x782d
    ctx->pc = 0x37e510u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e514: 0x882021
    ctx->pc = 0x37e514u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x37e518: 0xe0c02d
    ctx->pc = 0x37e518u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e51c: 0x42040
    ctx->pc = 0x37e51cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x37e520: 0xe0c82d
    ctx->pc = 0x37e520u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e524: 0x882021
    ctx->pc = 0x37e524u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x37e528: 0xe0a82d
    ctx->pc = 0x37e528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e52c: 0x428c0
    ctx->pc = 0x37e52cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37e530: 0xe0482d
    ctx->pc = 0x37e530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e534: 0x7ba400c0
    ctx->pc = 0x37e534u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37e538: 0x502d
    ctx->pc = 0x37e538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e53c: 0x852021
    ctx->pc = 0x37e53cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37e540: 0x248d06d4
    ctx->pc = 0x37e540u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 4), 1748));
    // 0x37e544: 0x248423b8
    ctx->pc = 0x37e544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9144));
    // 0x37e548: 0xafa40120
    ctx->pc = 0x37e548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_37e54c:
    // 0x37e54c: 0x8fa40120
    ctx->pc = 0x37e54cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x37e550: 0xa28c0
    ctx->pc = 0x37e550u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), 3));
    // 0x37e554: 0x1a5b021
    ctx->pc = 0x37e554u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x37e558: 0x856021
    ctx->pc = 0x37e558u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37e55c: 0x26c40046
    ctx->pc = 0x37e55cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 70));
    // 0x37e560: 0xafa400d0
    ctx->pc = 0x37e560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x37e564: 0x26c40048
    ctx->pc = 0x37e564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 72));
    // 0x37e568: 0xafa40110
    ctx->pc = 0x37e568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x37e56c: 0x26c4004a
    ctx->pc = 0x37e56cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 74));
    // 0x37e570: 0xafa400f0
    ctx->pc = 0x37e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x37e574: 0x25840046
    ctx->pc = 0x37e574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 12), 70));
    // 0x37e578: 0xafa400e0
    ctx->pc = 0x37e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x37e57c: 0x2584004a
    ctx->pc = 0x37e57cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 12), 74));
    // 0x37e580: 0xafa40100
    ctx->pc = 0x37e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x37e584: 0x96c60044
    ctx->pc = 0x37e584u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x37e588: 0x96c50046
    ctx->pc = 0x37e588u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x37e58c: 0x96c40048
    ctx->pc = 0x37e58cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x37e590: 0x96d7004a
    ctx->pc = 0x37e590u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 74)));
    // 0x37e594: 0x959e0044
    ctx->pc = 0x37e594u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x37e598: 0xc52825
    ctx->pc = 0x37e598u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x37e59c: 0x852025
    ctx->pc = 0x37e59cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37e5a0: 0x95960046
    ctx->pc = 0x37e5a0u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 70)));
    // 0x37e5a4: 0x2e42025
    ctx->pc = 0x37e5a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x37e5a8: 0x3c42825
    ctx->pc = 0x37e5a8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x37e5ac: 0x7fb600a0
    ctx->pc = 0x37e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x37e5b0: 0x95960048
    ctx->pc = 0x37e5b0u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x37e5b4: 0x7ba400a0
    ctx->pc = 0x37e5b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37e5b8: 0x7fb600b0
    ctx->pc = 0x37e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x37e5bc: 0x852825
    ctx->pc = 0x37e5bcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37e5c0: 0x9586004a
    ctx->pc = 0x37e5c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 74)));
    // 0x37e5c4: 0x72c02628
    ctx->pc = 0x37e5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x37e5c8: 0x852025
    ctx->pc = 0x37e5c8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37e5cc: 0xc42025
    ctx->pc = 0x37e5ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x37e5d0: 0x3084ffff
    ctx->pc = 0x37e5d0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x37e5d4: 0x1080000d
    ctx->pc = 0x37E5D4u;
    {
        const bool branch_taken_0x37e5d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E5D8u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 12), 72));
        if (branch_taken_0x37e5d4) {
            ctx->pc = 0x37E60Cu;
            goto label_37e60c;
        }
    }
    ctx->pc = 0x37E5DCu;
    // 0x37e5dc: 0x29410008
    ctx->pc = 0x37e5dcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 10), 8));
    // 0x37e5e0: 0x1020000b
    ctx->pc = 0x37E5E0u;
    {
        const bool branch_taken_0x37e5e0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E5E4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        if (branch_taken_0x37e5e0) {
            ctx->pc = 0x37E610u;
            goto label_37e610;
        }
    }
    ctx->pc = 0x37E5E8u;
    // 0x37e5e8: 0x27050001
    ctx->pc = 0x37e5e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 24), 1));
    // 0x37e5ec: 0x4e3021
    ctx->pc = 0x37e5ecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x37e5f0: 0x30b8ffff
    ctx->pc = 0x37e5f0u;
    SET_GPR_U32(ctx, 24, AND32(GPR_U32(ctx, 5), 65535));
    // 0x37e5f4: 0xa0c3001b
    ctx->pc = 0x37e5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e5f8: 0xa2840
    ctx->pc = 0x37e5f8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), 1));
    // 0x37e5fc: 0xbd3021
    ctx->pc = 0x37e5fcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x37e600: 0x94c50130
    ctx->pc = 0x37e600u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x37e604: 0x24a50001
    ctx->pc = 0x37e604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37e608: 0xa4c50130
    ctx->pc = 0x37e608u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 304), (uint16_t)GPR_U32(ctx, 5));
label_37e60c:
    // 0x37e60c: 0x1242825
    ctx->pc = 0x37e60cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_37e610:
    // 0x37e610: 0x8fb600e0
    ctx->pc = 0x37e610u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x37e614: 0x8fa40110
    ctx->pc = 0x37e614u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x37e618: 0x30a9ffff
    ctx->pc = 0x37e618u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), 65535));
    // 0x37e61c: 0x956b0000
    ctx->pc = 0x37e61cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x37e620: 0x29410008
    ctx->pc = 0x37e620u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 10), 8));
    // 0x37e624: 0x96d60000
    ctx->pc = 0x37e624u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37e628: 0x948c0000
    ctx->pc = 0x37e628u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37e62c: 0x8fa400f0
    ctx->pc = 0x37e62cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x37e630: 0x18b5825
    ctx->pc = 0x37e630u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x37e634: 0x316bffff
    ctx->pc = 0x37e634u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65535));
    // 0x37e638: 0x94860000
    ctx->pc = 0x37e638u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37e63c: 0x8fa40100
    ctx->pc = 0x37e63cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x37e640: 0x94850000
    ctx->pc = 0x37e640u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37e644: 0x8fa400d0
    ctx->pc = 0x37e644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x37e648: 0xc52825
    ctx->pc = 0x37e648u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x37e64c: 0x30a5ffff
    ctx->pc = 0x37e64cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x37e650: 0x2ab3025
    ctx->pc = 0x37e650u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
    // 0x37e654: 0x3252825
    ctx->pc = 0x37e654u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x37e658: 0x30d5ffff
    ctx->pc = 0x37e658u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 6), 65535));
    // 0x37e65c: 0x30b9ffff
    ctx->pc = 0x37e65cu;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 5), 65535));
    // 0x37e660: 0x94840000
    ctx->pc = 0x37e660u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37e664: 0x962025
    ctx->pc = 0x37e664u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x37e668: 0x3084ffff
    ctx->pc = 0x37e668u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x37e66c: 0x1e42025
    ctx->pc = 0x37e66cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x37e670: 0x10200002
    ctx->pc = 0x37E670u;
    {
        const bool branch_taken_0x37e670 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E674u;
        SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x37e670) {
            ctx->pc = 0x37E67Cu;
            goto label_37e67c;
        }
    }
    ctx->pc = 0x37E678u;
    // 0x37e678: 0x25ce0001
    ctx->pc = 0x37e678u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
label_37e67c:
    // 0x37e67c: 0x254a0001
    ctx->pc = 0x37e67cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x37e680: 0x29440009
    ctx->pc = 0x37e680u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 10), 9));
    // 0x37e684: 0x1480ffb1
    ctx->pc = 0x37E684u;
    {
        const bool branch_taken_0x37e684 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E688u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 24), 65535));
        if (branch_taken_0x37e684) {
            ctx->pc = 0x37E54Cu;
            goto label_37e54c;
        }
    }
    ctx->pc = 0x37E68Cu;
    // 0x37e68c: 0x28840008
    ctx->pc = 0x37e68cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), 8));
    // 0x37e690: 0x14800003
    ctx->pc = 0x37E690u;
    {
        const bool branch_taken_0x37e690 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x37e690) {
            ctx->pc = 0x37E6A0u;
            goto label_37e6a0;
        }
    }
    ctx->pc = 0x37E698u;
    // 0x37e698: 0x26440001
    ctx->pc = 0x37e698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 1));
    // 0x37e69c: 0x3092ffff
    ctx->pc = 0x37e69cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 4), 65535));
label_37e6a0:
    // 0x37e6a0: 0x11200004
    ctx->pc = 0x37E6A0u;
    {
        const bool branch_taken_0x37e6a0 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E6A4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x37e6a0) {
            ctx->pc = 0x37E6B4u;
            goto label_37e6b4;
        }
    }
    ctx->pc = 0x37E6A8u;
    // 0x37e6a8: 0x26840001
    ctx->pc = 0x37e6a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 1));
    // 0x37e6ac: 0xa0a30043
    ctx->pc = 0x37e6acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e6b0: 0x3094ffff
    ctx->pc = 0x37e6b0u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 4), 65535));
label_37e6b4:
    // 0x37e6b4: 0x12a00004
    ctx->pc = 0x37E6B4u;
    {
        const bool branch_taken_0x37e6b4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E6B8u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x37e6b4) {
            ctx->pc = 0x37E6C8u;
            goto label_37e6c8;
        }
    }
    ctx->pc = 0x37E6BCu;
    // 0x37e6bc: 0x26640001
    ctx->pc = 0x37e6bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1));
    // 0x37e6c0: 0xa0a30048
    ctx->pc = 0x37e6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e6c4: 0x3093ffff
    ctx->pc = 0x37e6c4u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), 65535));
label_37e6c8:
    // 0x37e6c8: 0x13200004
    ctx->pc = 0x37E6C8u;
    {
        const bool branch_taken_0x37e6c8 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E6CCu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x37e6c8) {
            ctx->pc = 0x37E6DCu;
            goto label_37e6dc;
        }
    }
    ctx->pc = 0x37E6D0u;
    // 0x37e6d0: 0x26040001
    ctx->pc = 0x37e6d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1));
    // 0x37e6d4: 0xa0a3004d
    ctx->pc = 0x37e6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e6d8: 0x3090ffff
    ctx->pc = 0x37e6d8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 65535));
label_37e6dc:
    // 0x37e6dc: 0x11e00002
    ctx->pc = 0x37E6DCu;
    {
        const bool branch_taken_0x37e6dc = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E6E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x37e6dc) {
            ctx->pc = 0x37E6E8u;
            goto label_37e6e8;
        }
    }
    ctx->pc = 0x37E6E4u;
    // 0x37e6e4: 0x3091ffff
    ctx->pc = 0x37e6e4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 4), 65535));
label_37e6e8:
    // 0x37e6e8: 0x25080001
    ctx->pc = 0x37e6e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x37e6ec: 0x29040005
    ctx->pc = 0x37e6ecu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 5));
    // 0x37e6f0: 0x1480ff87
    ctx->pc = 0x37E6F0u;
    {
        const bool branch_taken_0x37e6f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E6F4u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 3));
        if (branch_taken_0x37e6f0) {
            ctx->pc = 0x37E510u;
            goto label_37e510;
        }
    }
    ctx->pc = 0x37E6F8u;
    // 0x37e6f8: 0x3282ffff
    ctx->pc = 0x37e6f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 65535));
    // 0x37e6fc: 0x28420005
    ctx->pc = 0x37e6fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x37e700: 0x14400005
    ctx->pc = 0x37E700u;
    {
        const bool branch_taken_0x37e700 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E704u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 65535));
        if (branch_taken_0x37e700) {
            ctx->pc = 0x37E718u;
            goto label_37e718;
        }
    }
    ctx->pc = 0x37E708u;
    // 0x37e708: 0x24020001
    ctx->pc = 0x37e708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e70c: 0x3c010057
    ctx->pc = 0x37e70cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e710: 0xa022bb62
    ctx->pc = 0x37e710u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949730), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e714: 0x3262ffff
    ctx->pc = 0x37e714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 65535));
label_37e718:
    // 0x37e718: 0x28420005
    ctx->pc = 0x37e718u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x37e71c: 0x14400005
    ctx->pc = 0x37E71Cu;
    {
        const bool branch_taken_0x37e71c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E720u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
        if (branch_taken_0x37e71c) {
            ctx->pc = 0x37E734u;
            goto label_37e734;
        }
    }
    ctx->pc = 0x37E724u;
    // 0x37e724: 0x24020001
    ctx->pc = 0x37e724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e728: 0x3c010057
    ctx->pc = 0x37e728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e72c: 0xa022bb63
    ctx->pc = 0x37e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949731), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e730: 0x3222ffff
    ctx->pc = 0x37e730u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
label_37e734:
    // 0x37e734: 0x28420005
    ctx->pc = 0x37e734u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x37e738: 0x14400005
    ctx->pc = 0x37E738u;
    {
        const bool branch_taken_0x37e738 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E73Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 65535));
        if (branch_taken_0x37e738) {
            ctx->pc = 0x37E750u;
            goto label_37e750;
        }
    }
    ctx->pc = 0x37E740u;
    // 0x37e740: 0x24020001
    ctx->pc = 0x37e740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e744: 0x3c010057
    ctx->pc = 0x37e744u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e748: 0xa022bb6e
    ctx->pc = 0x37e748u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949742), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e74c: 0x3202ffff
    ctx->pc = 0x37e74cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 65535));
label_37e750:
    // 0x37e750: 0x28420005
    ctx->pc = 0x37e750u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x37e754: 0x14400003
    ctx->pc = 0x37E754u;
    {
        const bool branch_taken_0x37e754 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E758u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37e754) {
            ctx->pc = 0x37E764u;
            goto label_37e764;
        }
    }
    ctx->pc = 0x37E75Cu;
    // 0x37e75c: 0x3c010057
    ctx->pc = 0x37e75cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e760: 0xa022bb82
    ctx->pc = 0x37e760u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949762), (uint8_t)GPR_U32(ctx, 2));
label_37e764:
    // 0x37e764: 0x1240000c
    ctx->pc = 0x37E764u;
    {
        const bool branch_taken_0x37e764 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E768u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37e764) {
            ctx->pc = 0x37E798u;
            goto label_37e798;
        }
    }
    ctx->pc = 0x37E76Cu;
    // 0x37e76c: 0x3242ffff
    ctx->pc = 0x37e76cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 65535));
    // 0x37e770: 0x28420005
    ctx->pc = 0x37e770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x37e774: 0x14400005
    ctx->pc = 0x37E774u;
    {
        const bool branch_taken_0x37e774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E778u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37e774) {
            ctx->pc = 0x37E78Cu;
            goto label_37e78c;
        }
    }
    ctx->pc = 0x37E77Cu;
    // 0x37e77c: 0x24020001
    ctx->pc = 0x37e77cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e780: 0x3c010057
    ctx->pc = 0x37e780u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e784: 0x10000003
    ctx->pc = 0x37E784u;
    {
        const bool branch_taken_0x37e784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E788u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294949733), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37e784) {
            ctx->pc = 0x37E794u;
            goto label_37e794;
        }
    }
    ctx->pc = 0x37E78Cu;
label_37e78c:
    // 0x37e78c: 0x3c010057
    ctx->pc = 0x37e78cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e790: 0xa022bb64
    ctx->pc = 0x37e790u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949732), (uint8_t)GPR_U32(ctx, 2));
label_37e794:
    // 0x37e794: 0x282d
    ctx->pc = 0x37e794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e798:
    // 0x37e798: 0x3c030057
    ctx->pc = 0x37e798u;
    SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
    // 0x37e79c: 0x24040001
    ctx->pc = 0x37e79cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e7a0: 0x2463bb10
    ctx->pc = 0x37e7a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949648));
    // 0x37e7a4: 0x51040
    ctx->pc = 0x37e7a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
label_37e7a8:
    // 0x37e7a8: 0x5d1021
    ctx->pc = 0x37e7a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x37e7ac: 0x94420130
    ctx->pc = 0x37e7acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37e7b0: 0x28420003
    ctx->pc = 0x37e7b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x37e7b4: 0x14400002
    ctx->pc = 0x37E7B4u;
    {
        const bool branch_taken_0x37e7b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E7B8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x37e7b4) {
            ctx->pc = 0x37E7C0u;
            goto label_37e7c0;
        }
    }
    ctx->pc = 0x37E7BCu;
    // 0x37e7bc: 0xa0440056
    ctx->pc = 0x37e7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 86), (uint8_t)GPR_U32(ctx, 4));
label_37e7c0:
    // 0x37e7c0: 0x24a50001
    ctx->pc = 0x37e7c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x37e7c4: 0x28a20008
    ctx->pc = 0x37e7c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x37e7c8: 0x1440fff7
    ctx->pc = 0x37E7C8u;
    {
        const bool branch_taken_0x37e7c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E7CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x37e7c8) {
            ctx->pc = 0x37E7A8u;
            goto label_37e7a8;
        }
    }
    ctx->pc = 0x37E7D0u;
    // 0x37e7d0: 0xc0df808
    ctx->pc = 0x37E7D0u;
    SET_GPR_U32(ctx, 31, 0x37E7D8u);
    ctx->pc = 0x37E020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E020_0x37e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E7D8u; }
    }
    if (ctx->pc != 0x37E7D8u) { return; }
    ctx->pc = 0x37E7D8u;
    // 0x37e7d8: 0x3c010057
    ctx->pc = 0x37e7d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e7dc: 0xa022bb70
    ctx->pc = 0x37e7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949744), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e7e0: 0x3c010057
    ctx->pc = 0x37e7e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e7e4: 0xa020bb6f
    ctx->pc = 0x37e7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949743), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e7e8: 0x3c01003c
    ctx->pc = 0x37e7e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37e7ec: 0x8c2384b4
    ctx->pc = 0x37e7ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294935732)));
    // 0x37e7f0: 0x2c620bb8
    ctx->pc = 0x37e7f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3000));
    // 0x37e7f4: 0x14400004
    ctx->pc = 0x37E7F4u;
    {
        const bool branch_taken_0x37e7f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37e7f4) {
            ctx->pc = 0x37E808u;
            goto label_37e808;
        }
    }
    ctx->pc = 0x37E7FCu;
    // 0x37e7fc: 0x24020001
    ctx->pc = 0x37e7fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e800: 0x3c010057
    ctx->pc = 0x37e800u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e804: 0xa022bb71
    ctx->pc = 0x37e804u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949745), (uint8_t)GPR_U32(ctx, 2));
label_37e808:
    // 0x37e808: 0x2c6201f4
    ctx->pc = 0x37e808u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 500));
    // 0x37e80c: 0x14400004
    ctx->pc = 0x37E80Cu;
    {
        const bool branch_taken_0x37e80c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37E810u;
        SET_GPR_U32(ctx, 10, ((uint32_t)57 << 16));
        if (branch_taken_0x37e80c) {
            ctx->pc = 0x37E820u;
            goto label_37e820;
        }
    }
    ctx->pc = 0x37E814u;
    // 0x37e814: 0x24020001
    ctx->pc = 0x37e814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e818: 0x3c010057
    ctx->pc = 0x37e818u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e81c: 0xa022bb72
    ctx->pc = 0x37e81cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949746), (uint8_t)GPR_U32(ctx, 2));
label_37e820:
    // 0x37e820: 0x3c040057
    ctx->pc = 0x37e820u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37e824: 0x3c090032
    ctx->pc = 0x37e824u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x37e828: 0x254aa8b0
    ctx->pc = 0x37e828u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294944944));
    // 0x37e82c: 0x2484bb10
    ctx->pc = 0x37e82cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x37e830: 0x2529fb60
    ctx->pc = 0x37e830u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294966112));
    // 0x37e834: 0x24060001
    ctx->pc = 0x37e834u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e838: 0x10000011
    ctx->pc = 0x37E838u;
    {
        const bool branch_taken_0x37e838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E83Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x37e838) {
            ctx->pc = 0x37E880u;
            goto label_37e880;
        }
    }
    ctx->pc = 0x37E840u;
label_37e840:
    // 0x37e840: 0x95430004
    ctx->pc = 0x37e840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x37e844: 0x95470002
    ctx->pc = 0x37e844u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x37e848: 0x32943
    ctx->pc = 0x37e848u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
    // 0x37e84c: 0x740c0
    ctx->pc = 0x37e84cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 7), 3));
    // 0x37e850: 0x3063001f
    ctx->pc = 0x37e850u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
    // 0x37e854: 0x53880
    ctx->pc = 0x37e854u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37e858: 0x1284021
    ctx->pc = 0x37e858u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x37e85c: 0x662804
    ctx->pc = 0x37e85cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x37e860: 0xe81821
    ctx->pc = 0x37e860u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x37e864: 0x8c63051c
    ctx->pc = 0x37e864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 1308)));
    // 0x37e868: 0x651824
    ctx->pc = 0x37e868u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37e86c: 0x10600003
    ctx->pc = 0x37E86Cu;
    {
        const bool branch_taken_0x37e86c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E870u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 11), 65535));
        if (branch_taken_0x37e86c) {
            ctx->pc = 0x37E87Cu;
            goto label_37e87c;
        }
    }
    ctx->pc = 0x37E874u;
    // 0x37e874: 0x831821
    ctx->pc = 0x37e874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37e878: 0xa0660000
    ctx->pc = 0x37e878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_37e87c:
    // 0x37e87c: 0x254a0006
    ctx->pc = 0x37e87cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 6));
label_37e880:
    // 0x37e880: 0x954b0000
    ctx->pc = 0x37e880u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x37e884: 0x1562ffee
    ctx->pc = 0x37E884u;
    {
        const bool branch_taken_0x37e884 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 2));
        ctx->pc = 0x37E888u;
        SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
        if (branch_taken_0x37e884) {
            ctx->pc = 0x37E840u;
            goto label_37e840;
        }
    }
    ctx->pc = 0x37E88Cu;
    // 0x37e88c: 0x8c2284fc
    ctx->pc = 0x37e88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935804)));
    // 0x37e890: 0x30420800
    ctx->pc = 0x37e890u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x37e894: 0x10400011
    ctx->pc = 0x37E894u;
    {
        const bool branch_taken_0x37e894 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37e894) {
            ctx->pc = 0x37E8DCu;
            goto label_37e8dc;
        }
    }
    ctx->pc = 0x37E89Cu;
    // 0x37e89c: 0x3c01004c
    ctx->pc = 0x37e89cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37e8a0: 0x3c03004a
    ctx->pc = 0x37e8a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x37e8a4: 0x9025aded
    ctx->pc = 0x37e8a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x37e8a8: 0x3c020057
    ctx->pc = 0x37e8a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x37e8ac: 0x246367c8
    ctx->pc = 0x37e8acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26568));
    // 0x37e8b0: 0x2442bb7a
    ctx->pc = 0x37e8b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949754));
    // 0x37e8b4: 0x24060001
    ctx->pc = 0x37e8b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e8b8: 0x52100
    ctx->pc = 0x37e8b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x37e8bc: 0x852823
    ctx->pc = 0x37e8bcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37e8c0: 0x520c0
    ctx->pc = 0x37e8c0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37e8c4: 0xa42021
    ctx->pc = 0x37e8c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x37e8c8: 0x42140
    ctx->pc = 0x37e8c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x37e8cc: 0x641821
    ctx->pc = 0x37e8ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37e8d0: 0x90630000
    ctx->pc = 0x37e8d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e8d4: 0x431021
    ctx->pc = 0x37e8d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37e8d8: 0xa0460000
    ctx->pc = 0x37e8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_37e8dc:
    // 0x37e8dc: 0xc0dfa48
    ctx->pc = 0x37E8DCu;
    SET_GPR_U32(ctx, 31, 0x37E8E4u);
    ctx->pc = 0x37E920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E920_0x37e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E8E4u; }
    }
    if (ctx->pc != 0x37E8E4u) { return; }
    ctx->pc = 0x37E8E4u;
    // 0x37e8e4: 0xdfbf0090
    ctx->pc = 0x37e8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37e8e8: 0x7bbe0080
    ctx->pc = 0x37e8e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37e8ec: 0x7bb70070
    ctx->pc = 0x37e8ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37e8f0: 0x7bb60060
    ctx->pc = 0x37e8f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37e8f4: 0x7bb50050
    ctx->pc = 0x37e8f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37e8f8: 0x7bb40040
    ctx->pc = 0x37e8f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37e8fc: 0x7bb30030
    ctx->pc = 0x37e8fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37e900: 0x7bb20020
    ctx->pc = 0x37e900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e904: 0x7bb10010
    ctx->pc = 0x37e904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e908: 0x7bb00000
    ctx->pc = 0x37e908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e90c: 0x3e00008
    ctx->pc = 0x37E90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E3A0u: goto label_37e3a0;
            case 0x37E3B0u: goto label_37e3b0;
            case 0x37E3D0u: goto label_37e3d0;
            case 0x37E3D4u: goto label_37e3d4;
            case 0x37E3ECu: goto label_37e3ec;
            case 0x37E3F0u: goto label_37e3f0;
            case 0x37E3FCu: goto label_37e3fc;
            case 0x37E430u: goto label_37e430;
            case 0x37E448u: goto label_37e448;
            case 0x37E45Cu: goto label_37e45c;
            case 0x37E478u: goto label_37e478;
            case 0x37E47Cu: goto label_37e47c;
            case 0x37E498u: goto label_37e498;
            case 0x37E49Cu: goto label_37e49c;
            case 0x37E4A8u: goto label_37e4a8;
            case 0x37E510u: goto label_37e510;
            case 0x37E54Cu: goto label_37e54c;
            case 0x37E60Cu: goto label_37e60c;
            case 0x37E610u: goto label_37e610;
            case 0x37E67Cu: goto label_37e67c;
            case 0x37E6A0u: goto label_37e6a0;
            case 0x37E6B4u: goto label_37e6b4;
            case 0x37E6C8u: goto label_37e6c8;
            case 0x37E6DCu: goto label_37e6dc;
            case 0x37E6E8u: goto label_37e6e8;
            case 0x37E718u: goto label_37e718;
            case 0x37E734u: goto label_37e734;
            case 0x37E750u: goto label_37e750;
            case 0x37E764u: goto label_37e764;
            case 0x37E78Cu: goto label_37e78c;
            case 0x37E794u: goto label_37e794;
            case 0x37E798u: goto label_37e798;
            case 0x37E7A8u: goto label_37e7a8;
            case 0x37E7C0u: goto label_37e7c0;
            case 0x37E808u: goto label_37e808;
            case 0x37E820u: goto label_37e820;
            case 0x37E840u: goto label_37e840;
            case 0x37E87Cu: goto label_37e87c;
            case 0x37E880u: goto label_37e880;
            case 0x37E8DCu: goto label_37e8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37E914u;
    // 0x37e914: 0x0
    ctx->pc = 0x37e914u;
    // NOP
    // 0x37e918: 0x0
    ctx->pc = 0x37e918u;
    // NOP
    // 0x37e91c: 0x0
    ctx->pc = 0x37e91cu;
    // NOP
}
