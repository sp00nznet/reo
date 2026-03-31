#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010B158
// Address: 0x10b158 - 0x10b290
void sub_0010B158_0x10b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b158u;

    // 0x10b158: 0x30820007
    ctx->pc = 0x10b158u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 7));
    // 0x10b15c: 0x14400043
    ctx->pc = 0x10B15Cu;
    {
        const bool branch_taken_0x10b15c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B160u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b15c) {
            ctx->pc = 0x10B26Cu;
            goto label_10b26c;
        }
    }
    ctx->pc = 0x10B164u;
    // 0x10b164: 0x3083000f
    ctx->pc = 0x10b164u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 15));
    // 0x10b168: 0x3c020101
    ctx->pc = 0x10b168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)257 << 16));
    // 0x10b16c: 0x34420101
    ctx->pc = 0x10b16cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x10b170: 0x21438
    ctx->pc = 0x10b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x10b174: 0x34420101
    ctx->pc = 0x10b174u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x10b178: 0x21438
    ctx->pc = 0x10b178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x10b17c: 0x34420101
    ctx->pc = 0x10b17cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x10b180: 0x1460001e
    ctx->pc = 0x10B180u;
    {
        const bool branch_taken_0x10b180 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B184u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b180) {
            ctx->pc = 0x10B1FCu;
            goto label_10b1fc;
        }
    }
    ctx->pc = 0x10B188u;
    // 0x10b188: 0x78a30000
    ctx->pc = 0x10b188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b18c: 0x70424389
    ctx->pc = 0x10b18cu;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x10b190: 0x3c048080
    ctx->pc = 0x10b190u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32896 << 16));
    // 0x10b194: 0x34848080
    ctx->pc = 0x10b194u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b198: 0x42438
    ctx->pc = 0x10b198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x10b19c: 0x34848080
    ctx->pc = 0x10b19cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b1a0: 0x42438
    ctx->pc = 0x10b1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x10b1a4: 0x34848080
    ctx->pc = 0x10b1a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b1a8: 0x70681248
    ctx->pc = 0x10b1a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x10b1ac: 0x70031ce9
    ctx->pc = 0x10b1acu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x10b1b0: 0x70844b89
    ctx->pc = 0x10b1b0u;
    SET_GPR_VEC(ctx, 9, _mm_unpacklo_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x10b1b4: 0x70431489
    ctx->pc = 0x10b1b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b1b8: 0x70491489
    ctx->pc = 0x10b1b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x10b1bc: 0x70481ba9
    ctx->pc = 0x10b1bcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x10b1c0: 0x623025
    ctx->pc = 0x10b1c0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b1c4: 0x54c00029
    ctx->pc = 0x10B1C4u;
    {
        const bool branch_taken_0x10b1c4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b1c4) {
            ctx->pc = 0x10B1C8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10B26Cu;
            goto label_10b26c;
        }
    }
    ctx->pc = 0x10B1CCu;
    // 0x10b1cc: 0x24a50010
    ctx->pc = 0x10b1ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
label_10b1d0:
    // 0x10b1d0: 0x78a20000
    ctx->pc = 0x10b1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b1d4: 0x70021ce9
    ctx->pc = 0x10b1d4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10b1d8: 0x70481248
    ctx->pc = 0x10b1d8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x10b1dc: 0x70431489
    ctx->pc = 0x10b1dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10b1e0: 0x70492489
    ctx->pc = 0x10b1e0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x10b1e4: 0x70861ba9
    ctx->pc = 0x10b1e4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x10b1e8: 0x641825
    ctx->pc = 0x10b1e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10b1ec: 0x5060fff8
    ctx->pc = 0x10B1ECu;
    {
        const bool branch_taken_0x10b1ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b1ec) {
            ctx->pc = 0x10B1F0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
            ctx->pc = 0x10B1D0u;
            goto label_10b1d0;
        }
    }
    ctx->pc = 0x10B1F4u;
    // 0x10b1f4: 0x1000001d
    ctx->pc = 0x10B1F4u;
    {
        const bool branch_taken_0x10b1f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B1F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b1f4) {
            ctx->pc = 0x10B26Cu;
            goto label_10b26c;
        }
    }
    ctx->pc = 0x10B1FCu;
label_10b1fc:
    // 0x10b1fc: 0xdca30000
    ctx->pc = 0x10b1fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b200: 0x3c048080
    ctx->pc = 0x10b200u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32896 << 16));
    // 0x10b204: 0x34848080
    ctx->pc = 0x10b204u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b208: 0x42438
    ctx->pc = 0x10b208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x10b20c: 0x34848080
    ctx->pc = 0x10b20cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b210: 0x42438
    ctx->pc = 0x10b210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x10b214: 0x34848080
    ctx->pc = 0x10b214u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32896));
    // 0x10b218: 0x62102f
    ctx->pc = 0x10b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x10b21c: 0x31827
    ctx->pc = 0x10b21cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x10b220: 0x431024
    ctx->pc = 0x10b220u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b224: 0x441024
    ctx->pc = 0x10b224u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b228: 0x54400010
    ctx->pc = 0x10B228u;
    {
        const bool branch_taken_0x10b228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b228) {
            ctx->pc = 0x10B22Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10B26Cu;
            goto label_10b26c;
        }
    }
    ctx->pc = 0x10B230u;
    // 0x10b230: 0x3c060101
    ctx->pc = 0x10b230u;
    SET_GPR_U32(ctx, 6, ((uint32_t)257 << 16));
    // 0x10b234: 0x34c60101
    ctx->pc = 0x10b234u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10b238: 0x63438
    ctx->pc = 0x10b238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10b23c: 0x34c60101
    ctx->pc = 0x10b23cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10b240: 0x63438
    ctx->pc = 0x10b240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x10b244: 0x34c60101
    ctx->pc = 0x10b244u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 257));
    // 0x10b248: 0x24a50008
    ctx->pc = 0x10b248u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
label_10b24c:
    // 0x10b24c: 0xdca20000
    ctx->pc = 0x10b24cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b250: 0x21827
    ctx->pc = 0x10b250u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10b254: 0x46102f
    ctx->pc = 0x10b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x10b258: 0x431024
    ctx->pc = 0x10b258u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b25c: 0x441024
    ctx->pc = 0x10b25cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b260: 0x5040fffa
    ctx->pc = 0x10B260u;
    {
        const bool branch_taken_0x10b260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b260) {
            ctx->pc = 0x10B264u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
            ctx->pc = 0x10B24Cu;
            goto label_10b24c;
        }
    }
    ctx->pc = 0x10B268u;
    // 0x10b268: 0xa0202d
    ctx->pc = 0x10b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10b26c:
    // 0x10b26c: 0x80820000
    ctx->pc = 0x10b26cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b270: 0x0
    ctx->pc = 0x10b270u;
    // NOP
    // 0x10b274: 0x0
    ctx->pc = 0x10b274u;
    // NOP
    // 0x10b278: 0x0
    ctx->pc = 0x10b278u;
    // NOP
    // 0x10b27c: 0x0
    ctx->pc = 0x10b27cu;
    // NOP
    // 0x10b280: 0x5440fffa
    ctx->pc = 0x10B280u;
    {
        const bool branch_taken_0x10b280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10b280) {
            ctx->pc = 0x10B284u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x10B26Cu;
            goto label_10b26c;
        }
    }
    ctx->pc = 0x10B288u;
    // 0x10b288: 0x3e00008
    ctx->pc = 0x10B288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B28Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B1D0u: goto label_10b1d0;
            case 0x10B1FCu: goto label_10b1fc;
            case 0x10B24Cu: goto label_10b24c;
            case 0x10B26Cu: goto label_10b26c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B290u;
}
