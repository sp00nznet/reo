#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010B5F8
// Address: 0x10b5f8 - 0x10b7b8
void sub_0010B5F8_0x10b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b5f8u;

    // 0x10b5f8: 0x80402d
    ctx->pc = 0x10b5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5fc: 0xa43825
    ctx->pc = 0x10b5fcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10b600: 0x240a0010
    ctx->pc = 0x10b600u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    // 0x10b604: 0x30e20007
    ctx->pc = 0x10b604u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 7));
    // 0x10b608: 0x24090008
    ctx->pc = 0x10b608u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8));
    // 0x10b60c: 0x14400054
    ctx->pc = 0x10B60Cu;
    {
        const bool branch_taken_0x10b60c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B610u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 15));
        if (branch_taken_0x10b60c) {
            ctx->pc = 0x10B760u;
            goto label_10b760;
        }
    }
    ctx->pc = 0x10B614u;
    // 0x10b614: 0x142480a
    ctx->pc = 0x10b614u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 10));
    // 0x10b618: 0x1440002c
    ctx->pc = 0x10B618u;
    {
        const bool branch_taken_0x10b618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B61Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        if (branch_taken_0x10b618) {
            ctx->pc = 0x10B6CCu;
            goto label_10b6cc;
        }
    }
    ctx->pc = 0x10B620u;
    // 0x10b620: 0x1440004f
    ctx->pc = 0x10B620u;
    {
        const bool branch_taken_0x10b620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b620) {
            ctx->pc = 0x10B760u;
            goto label_10b760;
        }
    }
    ctx->pc = 0x10B628u;
    // 0x10b628: 0x3c070101
    ctx->pc = 0x10b628u;
    SET_GPR_U32(ctx, 7, ((uint32_t)257 << 16));
    // 0x10b62c: 0x34e70101
    ctx->pc = 0x10b62cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 257));
    // 0x10b630: 0x73c38
    ctx->pc = 0x10b630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x10b634: 0x34e70101
    ctx->pc = 0x10b634u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 257));
    // 0x10b638: 0x73c38
    ctx->pc = 0x10b638u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x10b63c: 0x34e70101
    ctx->pc = 0x10b63cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 257));
    // 0x10b640: 0x78a30000
    ctx->pc = 0x10b640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b644: 0x70e74b89
    ctx->pc = 0x10b644u;
    SET_GPR_VEC(ctx, 9, _mm_unpacklo_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x10b648: 0x70031ce9
    ctx->pc = 0x10b648u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x10b64c: 0x3c078080
    ctx->pc = 0x10b64cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)32896 << 16));
    // 0x10b650: 0x34e78080
    ctx->pc = 0x10b650u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32896));
    // 0x10b654: 0x73c38
    ctx->pc = 0x10b654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x10b658: 0x34e78080
    ctx->pc = 0x10b658u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32896));
    // 0x10b65c: 0x73c38
    ctx->pc = 0x10b65cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x10b660: 0x34e78080
    ctx->pc = 0x10b660u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32896));
    // 0x10b664: 0x70691248
    ctx->pc = 0x10b664u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x10b668: 0x70e75389
    ctx->pc = 0x10b668u;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x10b66c: 0x70431489
    ctx->pc = 0x10b66cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b670: 0x704a1489
    ctx->pc = 0x10b670u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x10b674: 0x70441ba9
    ctx->pc = 0x10b674u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x10b678: 0x431825
    ctx->pc = 0x10b678u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b67c: 0x14600037
    ctx->pc = 0x10B67Cu;
    {
        const bool branch_taken_0x10b67c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B680u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b67c) {
            ctx->pc = 0x10B75Cu;
            goto label_10b75c;
        }
    }
    ctx->pc = 0x10B684u;
    // 0x10b684: 0x78a30000
    ctx->pc = 0x10b684u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b688: 0x24c6fff0
    ctx->pc = 0x10b688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x10b68c: 0x24a50010
    ctx->pc = 0x10b68cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x10b690: 0x2cc20010
    ctx->pc = 0x10b690u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x10b694: 0x7ce30000
    ctx->pc = 0x10b694u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x10b698: 0x14400030
    ctx->pc = 0x10B698u;
    {
        const bool branch_taken_0x10b698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B69Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x10b698) {
            ctx->pc = 0x10B75Cu;
            goto label_10b75c;
        }
    }
    ctx->pc = 0x10B6A0u;
    // 0x10b6a0: 0x78a20000
    ctx->pc = 0x10b6a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b6a4: 0x70021ce9
    ctx->pc = 0x10b6a4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10b6a8: 0x70491248
    ctx->pc = 0x10b6a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x10b6ac: 0x70431489
    ctx->pc = 0x10b6acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b6b0: 0x704a1489
    ctx->pc = 0x10b6b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x10b6b4: 0x70441ba9
    ctx->pc = 0x10b6b4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x10b6b8: 0x431025
    ctx->pc = 0x10b6b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b6bc: 0x5040001a
    ctx->pc = 0x10B6BCu;
    {
        const bool branch_taken_0x10b6bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b6bc) {
            ctx->pc = 0x10B6C0u;
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x10B728u;
            goto label_10b728;
        }
    }
    ctx->pc = 0x10B6C4u;
    // 0x10b6c4: 0x10000026
    ctx->pc = 0x10B6C4u;
    {
        const bool branch_taken_0x10b6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B6C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b6c4) {
            ctx->pc = 0x10B760u;
            goto label_10b760;
        }
    }
    ctx->pc = 0x10B6CCu;
label_10b6cc:
    // 0x10b6cc: 0x14400024
    ctx->pc = 0x10B6CCu;
    {
        const bool branch_taken_0x10b6cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b6cc) {
            ctx->pc = 0x10B760u;
            goto label_10b760;
        }
    }
    ctx->pc = 0x10B6D4u;
    // 0x10b6d4: 0xdca30000
    ctx->pc = 0x10b6d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b6d8: 0x3c090101
    ctx->pc = 0x10b6d8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)257 << 16));
    // 0x10b6dc: 0x35290101
    ctx->pc = 0x10b6dcu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10b6e0: 0x94c38
    ctx->pc = 0x10b6e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x10b6e4: 0x35290101
    ctx->pc = 0x10b6e4u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10b6e8: 0x94c38
    ctx->pc = 0x10b6e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x10b6ec: 0x35290101
    ctx->pc = 0x10b6ecu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 257));
    // 0x10b6f0: 0x3c0a8080
    ctx->pc = 0x10b6f0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32896 << 16));
    // 0x10b6f4: 0x354a8080
    ctx->pc = 0x10b6f4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32896));
    // 0x10b6f8: 0xa5438
    ctx->pc = 0x10b6f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x10b6fc: 0x354a8080
    ctx->pc = 0x10b6fcu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32896));
    // 0x10b700: 0xa5438
    ctx->pc = 0x10b700u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x10b704: 0x354a8080
    ctx->pc = 0x10b704u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32896));
    // 0x10b708: 0x69102f
    ctx->pc = 0x10b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x10b70c: 0x31827
    ctx->pc = 0x10b70cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x10b710: 0x431024
    ctx->pc = 0x10b710u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b714: 0x4a1024
    ctx->pc = 0x10b714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x10b718: 0x14400010
    ctx->pc = 0x10B718u;
    {
        const bool branch_taken_0x10b718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B71Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b718) {
            ctx->pc = 0x10B75Cu;
            goto label_10b75c;
        }
    }
    ctx->pc = 0x10B720u;
    // 0x10b720: 0xdca30000
    ctx->pc = 0x10b720u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b724: 0x0
    ctx->pc = 0x10b724u;
    // NOP
label_10b728:
    // 0x10b728: 0x24c6fff8
    ctx->pc = 0x10b728u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x10b72c: 0x24a50008
    ctx->pc = 0x10b72cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x10b730: 0x2cc20008
    ctx->pc = 0x10b730u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x10b734: 0xfce30000
    ctx->pc = 0x10b734u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x10b738: 0x14400008
    ctx->pc = 0x10B738u;
    {
        const bool branch_taken_0x10b738 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B73Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x10b738) {
            ctx->pc = 0x10B75Cu;
            goto label_10b75c;
        }
    }
    ctx->pc = 0x10B740u;
    // 0x10b740: 0xdca20000
    ctx->pc = 0x10b740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b744: 0x21827
    ctx->pc = 0x10b744u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10b748: 0x49102f
    ctx->pc = 0x10b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x10b74c: 0x431024
    ctx->pc = 0x10b74cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b750: 0x4a1024
    ctx->pc = 0x10b750u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x10b754: 0x5040fff4
    ctx->pc = 0x10B754u;
    {
        const bool branch_taken_0x10b754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b754) {
            ctx->pc = 0x10B758u;
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x10B728u;
            goto label_10b728;
        }
    }
    ctx->pc = 0x10B75Cu;
label_10b75c:
    // 0x10b75c: 0xe0202d
    ctx->pc = 0x10b75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10b760:
    // 0x10b760: 0x10c00012
    ctx->pc = 0x10B760u;
    {
        const bool branch_taken_0x10b760 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B764u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b760) {
            ctx->pc = 0x10B7ACu;
            goto label_10b7ac;
        }
    }
    ctx->pc = 0x10B768u;
    // 0x10b768: 0x90a20000
    ctx->pc = 0x10b768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b76c: 0x24c6ffff
    ctx->pc = 0x10b76cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10b770: 0x24a50001
    ctx->pc = 0x10b770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10b774: 0xa0820000
    ctx->pc = 0x10b774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10b778: 0x21600
    ctx->pc = 0x10b778u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x10b77c: 0x1440fff8
    ctx->pc = 0x10B77Cu;
    {
        const bool branch_taken_0x10b77c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B780u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x10b77c) {
            ctx->pc = 0x10B760u;
            goto label_10b760;
        }
    }
    ctx->pc = 0x10B784u;
    // 0x10b784: 0xc0102d
    ctx->pc = 0x10b784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b788: 0x10400008
    ctx->pc = 0x10B788u;
    {
        const bool branch_taken_0x10b788 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B78Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x10b788) {
            ctx->pc = 0x10B7ACu;
            goto label_10b7ac;
        }
    }
    ctx->pc = 0x10B790u;
label_10b790:
    // 0x10b790: 0xa0800000
    ctx->pc = 0x10b790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b794: 0xc0102d
    ctx->pc = 0x10b794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b798: 0x24840001
    ctx->pc = 0x10b798u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10b79c: 0x24c6ffff
    ctx->pc = 0x10b79cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10b7a0: 0x0
    ctx->pc = 0x10b7a0u;
    // NOP
    // 0x10b7a4: 0x1440fffa
    ctx->pc = 0x10B7A4u;
    {
        const bool branch_taken_0x10b7a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b7a4) {
            ctx->pc = 0x10B790u;
            goto label_10b790;
        }
    }
    ctx->pc = 0x10B7ACu;
label_10b7ac:
    // 0x10b7ac: 0x3e00008
    ctx->pc = 0x10B7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B7B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B6CCu: goto label_10b6cc;
            case 0x10B728u: goto label_10b728;
            case 0x10B75Cu: goto label_10b75c;
            case 0x10B760u: goto label_10b760;
            case 0x10B790u: goto label_10b790;
            case 0x10B7ACu: goto label_10b7ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B7B4u;
    // 0x10b7b4: 0x0
    ctx->pc = 0x10b7b4u;
    // NOP
}
