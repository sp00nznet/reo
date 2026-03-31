#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00191E50
// Address: 0x191e50 - 0x191ef0
void sub_00191E50_0x191e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x191e50u;

    // 0x191e50: 0xc4a20000
    ctx->pc = 0x191e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191e54: 0x27bdffe0
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191e58: 0xc4a10004
    ctx->pc = 0x191e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e5c: 0x27a70010
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x191e60: 0xc4a00008
    ctx->pc = 0x191e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e64: 0x27a30000
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x191e68: 0xe4e20000
    ctx->pc = 0x191e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x191e6c: 0xe4e10004
    ctx->pc = 0x191e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x191e70: 0xe4e00008
    ctx->pc = 0x191e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x191e74: 0xc4c20000
    ctx->pc = 0x191e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191e78: 0xc4c10004
    ctx->pc = 0x191e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e7c: 0xc4c00008
    ctx->pc = 0x191e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e80: 0xe4620000
    ctx->pc = 0x191e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x191e84: 0xe4610004
    ctx->pc = 0x191e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x191e88: 0xe4600008
    ctx->pc = 0x191e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x191e8c: 0xd8e40000
    ctx->pc = 0x191e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x191e90: 0xd8650000
    ctx->pc = 0x191e90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191e94: 0x4bc522fe
    ctx->pc = 0x191e94u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x191e98: 0x4bc429ae
    ctx->pc = 0x191e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x191e9c: 0xf8e60000
    ctx->pc = 0x191e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x191ea0: 0x27a30010
    ctx->pc = 0x191ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
    // 0x191ea4: 0xc4620000
    ctx->pc = 0x191ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191ea8: 0xc4610004
    ctx->pc = 0x191ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191eac: 0xc4600008
    ctx->pc = 0x191eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191eb0: 0xe4820000
    ctx->pc = 0x191eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x191eb4: 0xe4810004
    ctx->pc = 0x191eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x191eb8: 0xe4800008
    ctx->pc = 0x191eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x191ebc: 0x3e00008
    ctx->pc = 0x191EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191EC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191EC4u;
    // 0x191ec4: 0x0
    ctx->pc = 0x191ec4u;
    // NOP
    // 0x191ec8: 0x0
    ctx->pc = 0x191ec8u;
    // NOP
    // 0x191ecc: 0x0
    ctx->pc = 0x191eccu;
    // NOP
    // 0x191ed0: 0xc4a20000
    ctx->pc = 0x191ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191ed4: 0xc4a10004
    ctx->pc = 0x191ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ed8: 0xc4a00008
    ctx->pc = 0x191ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191edc: 0xe4820000
    ctx->pc = 0x191edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x191ee0: 0xe4810004
    ctx->pc = 0x191ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x191ee4: 0x3e00008
    ctx->pc = 0x191EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191EE8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191EECu;
    // 0x191eec: 0x0
    ctx->pc = 0x191eecu;
    // NOP
}
