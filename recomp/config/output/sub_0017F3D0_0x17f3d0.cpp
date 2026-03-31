#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017F3D0
// Address: 0x17f3d0 - 0x17f428
void sub_0017F3D0_0x17f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f3d0u;

    // 0x17f3d0: 0x27bdffe0
    ctx->pc = 0x17f3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f3d4: 0xffb00000
    ctx->pc = 0x17f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f3d8: 0xffbf0010
    ctx->pc = 0x17f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f3dc: 0xc047598
    ctx->pc = 0x17F3DCu;
    SET_GPR_U32(ctx, 31, 0x17F3E4u);
    ctx->pc = 0x17F3E0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3E4u; }
    }
    if (ctx->pc != 0x17F3E4u) { return; }
    ctx->pc = 0x17F3E4u;
    // 0x17f3e4: 0x4be0012c
    ctx->pc = 0x17f3e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f3e8: 0x4a202128
    ctx->pc = 0x17f3e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f3ec: 0x4be5233d
    ctx->pc = 0x17f3ecu;
    ctx->vu0_vf[5] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x17f3f0: 0x4be62b3d
    ctx->pc = 0x17f3f0u;
    ctx->vu0_vf[6] = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,1));
    // 0x17f3f4: 0x4be7333d
    ctx->pc = 0x17f3f4u;
    ctx->vu0_vf[7] = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,1));
    // 0x17f3f8: 0xfa040030
    ctx->pc = 0x17f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17f3fc: 0xfa050020
    ctx->pc = 0x17f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17f400: 0xfa060010
    ctx->pc = 0x17f400u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17f404: 0xfa070000
    ctx->pc = 0x17f404u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x17f408: 0x10400004
    ctx->pc = 0x17F408u;
    {
        const bool branch_taken_0x17f408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F40Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x17f408) {
            ctx->pc = 0x17F41Cu;
            goto label_17f41c;
        }
    }
    ctx->pc = 0x17F410u;
    // 0x17f410: 0xdfb00000
    ctx->pc = 0x17f410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f414: 0x80475ae
    ctx->pc = 0x17F414u;
    ctx->pc = 0x17F418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F41Cu;
label_17f41c:
    // 0x17f41c: 0xdfb00000
    ctx->pc = 0x17f41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f420: 0x3e00008
    ctx->pc = 0x17F420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F41Cu: goto label_17f41c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F428u;
}
