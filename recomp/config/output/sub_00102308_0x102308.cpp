#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00102308
// Address: 0x102308 - 0x102350
void sub_00102308_0x102308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102308u;

    // 0x102308: 0x27bdfff0
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10230c: 0x30a5ffff
    ctx->pc = 0x10230cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x102310: 0x48460800
    ctx->pc = 0x102310u;
    SET_GPR_U32(ctx, 6, ctx->vu0_mac_flags);
    // 0x102314: 0x48230800
    ctx->pc = 0x102314u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102318: 0x48c50800
    ctx->pc = 0x102318u;
    ctx->vu0_mac_flags = GPR_U32(ctx, 5);
    // 0x10231c: 0x4be10b7c
    ctx->pc = 0x10231cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x102320: 0x48220800
    ctx->pc = 0x102320u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102324: 0x48c60800
    ctx->pc = 0x102324u;
    ctx->vu0_mac_flags = GPR_U32(ctx, 6);
    // 0x102328: 0x48a30800
    ctx->pc = 0x102328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10232c: 0x7fa20000
    ctx->pc = 0x10232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x102330: 0x80102d
    ctx->pc = 0x102330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102334: 0xdfa30000
    ctx->pc = 0x102334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102338: 0xdfa50008
    ctx->pc = 0x102338u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10233c: 0xfc830000
    ctx->pc = 0x10233cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x102340: 0xfc850008
    ctx->pc = 0x102340u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x102344: 0x3e00008
    ctx->pc = 0x102344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10234Cu;
    // 0x10234c: 0x0
    ctx->pc = 0x10234cu;
    // NOP
}
