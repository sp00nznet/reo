#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017F0F0
// Address: 0x17f0f0 - 0x17f158
void sub_0017F0F0_0x17f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f0f0u;

    // 0x17f0f0: 0x27bdffc0
    ctx->pc = 0x17f0f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f0f4: 0xffb10010
    ctx->pc = 0x17f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f0f8: 0xffb00000
    ctx->pc = 0x17f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f0fc: 0x80882d
    ctx->pc = 0x17f0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f100: 0xe7b40030
    ctx->pc = 0x17f100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f104: 0xa0802d
    ctx->pc = 0x17f104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f108: 0xffbf0020
    ctx->pc = 0x17f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f10c: 0xc047598
    ctx->pc = 0x17F10Cu;
    SET_GPR_U32(ctx, 31, 0x17F114u);
    ctx->pc = 0x17F110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F114u; }
    }
    if (ctx->pc != 0x17F114u) { return; }
    ctx->pc = 0x17F114u;
    // 0x17f114: 0xda040000
    ctx->pc = 0x17f114u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f118: 0x4408a000
    ctx->pc = 0x17f118u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[20]);
    // 0x17f11c: 0x48a82800
    ctx->pc = 0x17f11cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17f120: 0x4be52198
    ctx->pc = 0x17f120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f124: 0xfa260000
    ctx->pc = 0x17f124u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17f128: 0x10400006
    ctx->pc = 0x17F128u;
    {
        const bool branch_taken_0x17f128 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F12Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17f128) {
            ctx->pc = 0x17F144u;
            goto label_17f144;
        }
    }
    ctx->pc = 0x17F130u;
    // 0x17f130: 0xdfb10010
    ctx->pc = 0x17f130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f134: 0xdfb00000
    ctx->pc = 0x17f134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f138: 0xc7b40030
    ctx->pc = 0x17f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f13c: 0x80475ae
    ctx->pc = 0x17F13Cu;
    ctx->pc = 0x17F140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F144u;
label_17f144:
    // 0x17f144: 0xdfb10010
    ctx->pc = 0x17f144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f148: 0xdfb00000
    ctx->pc = 0x17f148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f14c: 0xc7b40030
    ctx->pc = 0x17f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f150: 0x3e00008
    ctx->pc = 0x17F150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F144u: goto label_17f144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F158u;
}
