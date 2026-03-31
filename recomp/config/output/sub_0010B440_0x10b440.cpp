#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010B440
// Address: 0x10b440 - 0x10b5f8
void sub_0010B440_0x10b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b440u;

    // 0x10b440: 0x14c00003
    ctx->pc = 0x10B440u;
    {
        const bool branch_taken_0x10b440 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B444u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x10b440) {
            ctx->pc = 0x10B450u;
            goto label_10b450;
        }
    }
    ctx->pc = 0x10B448u;
label_10b448:
    // 0x10b448: 0x3e00008
    ctx->pc = 0x10B448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B44Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B448u: goto label_10b448;
            case 0x10B450u: goto label_10b450;
            case 0x10B4CCu: goto label_10b4cc;
            case 0x10B528u: goto label_10b528;
            case 0x10B560u: goto label_10b560;
            case 0x10B5A0u: goto label_10b5a0;
            case 0x10B5A4u: goto label_10b5a4;
            case 0x10B5ACu: goto label_10b5ac;
            case 0x10B5C0u: goto label_10b5c0;
            case 0x10B5DCu: goto label_10b5dc;
            case 0x10B5E8u: goto label_10b5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B450u;
label_10b450:
    // 0x10b450: 0x30620007
    ctx->pc = 0x10b450u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
    // 0x10b454: 0x14400055
    ctx->pc = 0x10B454u;
    {
        const bool branch_taken_0x10b454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B458u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b454) {
            ctx->pc = 0x10B5ACu;
            goto label_10b5ac;
        }
    }
    ctx->pc = 0x10B45Cu;
    // 0x10b45c: 0x3062000f
    ctx->pc = 0x10b45cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x10b460: 0x2cc70010
    ctx->pc = 0x10b460u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x10b464: 0x3c090101
    ctx->pc = 0x10b464u;
    SET_GPR_U32(ctx, 9, ((uint32_t)257 << 16));
    // 0x10b468: 0x35290101
    ctx->pc = 0x10b468u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10b46c: 0x94c38
    ctx->pc = 0x10b46cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x10b470: 0x35290101
    ctx->pc = 0x10b470u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10b474: 0x94c38
    ctx->pc = 0x10b474u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x10b478: 0x35290101
    ctx->pc = 0x10b478u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10b47c: 0x471025
    ctx->pc = 0x10b47cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10b480: 0x14400029
    ctx->pc = 0x10B480u;
    {
        const bool branch_taken_0x10b480 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B484u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b480) {
            ctx->pc = 0x10B528u;
            goto label_10b528;
        }
    }
    ctx->pc = 0x10B488u;
    // 0x10b488: 0x78830000
    ctx->pc = 0x10b488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b48c: 0x71295389
    ctx->pc = 0x10b48cu;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x10b490: 0x78a20000
    ctx->pc = 0x10b490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b494: 0x3c088080
    ctx->pc = 0x10b494u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32896 << 16));
    // 0x10b498: 0x35088080
    ctx->pc = 0x10b498u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10b49c: 0x84438
    ctx->pc = 0x10b49cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x10b4a0: 0x35088080
    ctx->pc = 0x10b4a0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10b4a4: 0x84438
    ctx->pc = 0x10b4a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x10b4a8: 0x35088080
    ctx->pc = 0x10b4a8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    // 0x10b4ac: 0x70621848
    ctx->pc = 0x10b4acu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b4b0: 0x71084b89
    ctx->pc = 0x10b4b0u;
    SET_GPR_VEC(ctx, 9, _mm_unpacklo_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x10b4b4: 0x706413a9
    ctx->pc = 0x10b4b4u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x10b4b8: 0xa0402d
    ctx->pc = 0x10b4b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4bc: 0x431825
    ctx->pc = 0x10b4bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b4c0: 0x1460003a
    ctx->pc = 0x10B4C0u;
    {
        const bool branch_taken_0x10b4c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B4C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b4c0) {
            ctx->pc = 0x10B5ACu;
            goto label_10b5ac;
        }
    }
    ctx->pc = 0x10B4C8u;
    // 0x10b4c8: 0x24c6fff0
    ctx->pc = 0x10b4c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967280));
label_10b4cc:
    // 0x10b4cc: 0x10c0ffde
    ctx->pc = 0x10B4CCu;
    {
        const bool branch_taken_0x10b4cc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b4cc) {
            ctx->pc = 0x10B448u;
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B4D4u;
    // 0x10b4d4: 0x78e20000
    ctx->pc = 0x10b4d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b4d8: 0x70021ce9
    ctx->pc = 0x10b4d8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10b4dc: 0x704a1248
    ctx->pc = 0x10b4dcu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x10b4e0: 0x70431489
    ctx->pc = 0x10b4e0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b4e4: 0x70491c89
    ctx->pc = 0x10b4e4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x10b4e8: 0x706413a9
    ctx->pc = 0x10b4e8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x10b4ec: 0x431025
    ctx->pc = 0x10b4ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b4f0: 0x1440ffd5
    ctx->pc = 0x10B4F0u;
    {
        const bool branch_taken_0x10b4f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B4F4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x10b4f0) {
            ctx->pc = 0x10B448u;
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B4F8u;
    // 0x10b4f8: 0x2cc20010
    ctx->pc = 0x10b4f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x10b4fc: 0x78e30000
    ctx->pc = 0x10b4fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b500: 0x14400027
    ctx->pc = 0x10B500u;
    {
        const bool branch_taken_0x10b500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B504u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
        if (branch_taken_0x10b500) {
            ctx->pc = 0x10B5A0u;
            goto label_10b5a0;
        }
    }
    ctx->pc = 0x10B508u;
    // 0x10b508: 0x79020000
    ctx->pc = 0x10b508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10b50c: 0x70621848
    ctx->pc = 0x10b50cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b510: 0x706413a9
    ctx->pc = 0x10b510u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x10b514: 0x431025
    ctx->pc = 0x10b514u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b518: 0x5040ffec
    ctx->pc = 0x10B518u;
    {
        const bool branch_taken_0x10b518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b518) {
            ctx->pc = 0x10B51Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->pc = 0x10B4CCu;
            goto label_10b4cc;
        }
    }
    ctx->pc = 0x10B520u;
    // 0x10b520: 0x10000020
    ctx->pc = 0x10B520u;
    {
        const bool branch_taken_0x10b520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B524u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b520) {
            ctx->pc = 0x10B5A4u;
            goto label_10b5a4;
        }
    }
    ctx->pc = 0x10B528u;
label_10b528:
    // 0x10b528: 0x2cc20008
    ctx->pc = 0x10b528u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x10b52c: 0x1440001c
    ctx->pc = 0x10B52Cu;
    {
        const bool branch_taken_0x10b52c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B530u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b52c) {
            ctx->pc = 0x10B5A0u;
            goto label_10b5a0;
        }
    }
    ctx->pc = 0x10B534u;
    // 0x10b534: 0xdc830000
    ctx->pc = 0x10b534u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b538: 0xdca20000
    ctx->pc = 0x10b538u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b53c: 0x1462001b
    ctx->pc = 0x10B53Cu;
    {
        const bool branch_taken_0x10b53c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B540u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b53c) {
            ctx->pc = 0x10B5ACu;
            goto label_10b5ac;
        }
    }
    ctx->pc = 0x10B544u;
    // 0x10b544: 0x24c6fff8
    ctx->pc = 0x10b544u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x10b548: 0x3c0a8080
    ctx->pc = 0x10b548u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32896 << 16));
    // 0x10b54c: 0x354a8080
    ctx->pc = 0x10b54cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32896));
    // 0x10b550: 0xa5438
    ctx->pc = 0x10b550u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x10b554: 0x354a8080
    ctx->pc = 0x10b554u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32896));
    // 0x10b558: 0xa5438
    ctx->pc = 0x10b558u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x10b55c: 0x354a8080
    ctx->pc = 0x10b55cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32896));
label_10b560:
    // 0x10b560: 0x10c0ffb9
    ctx->pc = 0x10B560u;
    {
        const bool branch_taken_0x10b560 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b560) {
            ctx->pc = 0x10B448u;
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B568u;
    // 0x10b568: 0xdce20000
    ctx->pc = 0x10b568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b56c: 0x21827
    ctx->pc = 0x10b56cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10b570: 0x49102f
    ctx->pc = 0x10b570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x10b574: 0x431024
    ctx->pc = 0x10b574u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b578: 0x4a1024
    ctx->pc = 0x10b578u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x10b57c: 0x1440ffb2
    ctx->pc = 0x10B57Cu;
    {
        const bool branch_taken_0x10b57c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B580u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x10b57c) {
            ctx->pc = 0x10B448u;
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B584u;
    // 0x10b584: 0x2cc20008
    ctx->pc = 0x10b584u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x10b588: 0x14400005
    ctx->pc = 0x10B588u;
    {
        const bool branch_taken_0x10b588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B58Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x10b588) {
            ctx->pc = 0x10B5A0u;
            goto label_10b5a0;
        }
    }
    ctx->pc = 0x10B590u;
    // 0x10b590: 0xdce30000
    ctx->pc = 0x10b590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b594: 0xdd020000
    ctx->pc = 0x10b594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10b598: 0x5062fff1
    ctx->pc = 0x10B598u;
    {
        const bool branch_taken_0x10b598 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x10b598) {
            ctx->pc = 0x10B59Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->pc = 0x10B560u;
            goto label_10b560;
        }
    }
    ctx->pc = 0x10B5A0u;
label_10b5a0:
    // 0x10b5a0: 0xe0202d
    ctx->pc = 0x10b5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10b5a4:
    // 0x10b5a4: 0x100282d
    ctx->pc = 0x10b5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5a8: 0xc0102d
    ctx->pc = 0x10b5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10b5ac:
    // 0x10b5ac: 0x1040000e
    ctx->pc = 0x10B5ACu;
    {
        const bool branch_taken_0x10b5ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B5B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x10b5ac) {
            ctx->pc = 0x10B5E8u;
            goto label_10b5e8;
        }
    }
    ctx->pc = 0x10B5B4u;
    // 0x10b5b4: 0x10000009
    ctx->pc = 0x10B5B4u;
    {
        const bool branch_taken_0x10b5b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B5B8u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10b5b4) {
            ctx->pc = 0x10B5DCu;
            goto label_10b5dc;
        }
    }
    ctx->pc = 0x10B5BCu;
    // 0x10b5bc: 0x0
    ctx->pc = 0x10b5bcu;
    // NOP
label_10b5c0:
    // 0x10b5c0: 0x10c0ffa1
    ctx->pc = 0x10B5C0u;
    {
        const bool branch_taken_0x10b5c0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b5c0) {
            ctx->pc = 0x10B448u;
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B5C8u;
    // 0x10b5c8: 0x10e0ff9f
    ctx->pc = 0x10B5C8u;
    {
        const bool branch_taken_0x10b5c8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B5CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x10b5c8) {
            ctx->pc = 0x10B448u;
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B5D0u;
    // 0x10b5d0: 0x24a50001
    ctx->pc = 0x10b5d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10b5d4: 0x80830000
    ctx->pc = 0x10b5d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b5d8: 0x24c6ffff
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_10b5dc:
    // 0x10b5dc: 0x80a20000
    ctx->pc = 0x10b5dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b5e0: 0x1062fff7
    ctx->pc = 0x10B5E0u;
    {
        const bool branch_taken_0x10b5e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10B5E4u;
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10b5e0) {
            ctx->pc = 0x10B5C0u;
            goto label_10b5c0;
        }
    }
    ctx->pc = 0x10B5E8u;
label_10b5e8:
    // 0x10b5e8: 0x90a20000
    ctx->pc = 0x10b5e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b5ec: 0x90830000
    ctx->pc = 0x10b5ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b5f0: 0x3e00008
    ctx->pc = 0x10B5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5F4u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B448u: goto label_10b448;
            case 0x10B450u: goto label_10b450;
            case 0x10B4CCu: goto label_10b4cc;
            case 0x10B528u: goto label_10b528;
            case 0x10B560u: goto label_10b560;
            case 0x10B5A0u: goto label_10b5a0;
            case 0x10B5A4u: goto label_10b5a4;
            case 0x10B5ACu: goto label_10b5ac;
            case 0x10B5C0u: goto label_10b5c0;
            case 0x10B5DCu: goto label_10b5dc;
            case 0x10B5E8u: goto label_10b5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B5F8u;
}
