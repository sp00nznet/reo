#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00199920
// Address: 0x199920 - 0x199a90
void sub_00199920_0x199920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x199920u;

    // 0x199920: 0x3c030029
    ctx->pc = 0x199920u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x199924: 0x27bdffa0
    ctx->pc = 0x199924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x199928: 0x24634204
    ctx->pc = 0x199928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16900));
    // 0x19992c: 0x3c0d0029
    ctx->pc = 0x19992cu;
    SET_GPR_U32(ctx, 13, ((uint32_t)41 << 16));
    // 0x199930: 0xc4630000
    ctx->pc = 0x199930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199934: 0x3c0b0029
    ctx->pc = 0x199934u;
    SET_GPR_U32(ctx, 11, ((uint32_t)41 << 16));
    // 0x199938: 0xc4620004
    ctx->pc = 0x199938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19993c: 0x3c090029
    ctx->pc = 0x19993cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)41 << 16));
    // 0x199940: 0xc4610008
    ctx->pc = 0x199940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199944: 0x3c070029
    ctx->pc = 0x199944u;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x199948: 0xc460000c
    ctx->pc = 0x199948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19994c: 0x27ae0000
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 29), 0));
    // 0x199950: 0x3c050029
    ctx->pc = 0x199950u;
    SET_GPR_U32(ctx, 5, ((uint32_t)41 << 16));
    // 0x199954: 0x25ad4224
    ctx->pc = 0x199954u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 16932));
    // 0x199958: 0x27ac0010
    ctx->pc = 0x199958u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 29), 16));
    // 0x19995c: 0x256b426c
    ctx->pc = 0x19995cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 17004));
    // 0x199960: 0x27aa0020
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 32));
    // 0x199964: 0x2529428c
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 17036));
    // 0x199968: 0x27a80030
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 48));
    // 0x19996c: 0x24e742d4
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 17108));
    // 0x199970: 0x27a60040
    ctx->pc = 0x199970u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x199974: 0x24a542f4
    ctx->pc = 0x199974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17140));
    // 0x199978: 0xe5c30000
    ctx->pc = 0x199978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x19997c: 0x27a30050
    ctx->pc = 0x19997cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
    // 0x199980: 0xe5c20004
    ctx->pc = 0x199980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x199984: 0xe5c10008
    ctx->pc = 0x199984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x199988: 0xe5c0000c
    ctx->pc = 0x199988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x19998c: 0xc5a30000
    ctx->pc = 0x19998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199990: 0xc5a20004
    ctx->pc = 0x199990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199994: 0xc5a10008
    ctx->pc = 0x199994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199998: 0xc5a0000c
    ctx->pc = 0x199998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19999c: 0xe5830000
    ctx->pc = 0x19999cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1999a0: 0xe5820004
    ctx->pc = 0x1999a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x1999a4: 0xe5810008
    ctx->pc = 0x1999a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x1999a8: 0xe580000c
    ctx->pc = 0x1999a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x1999ac: 0xc5630000
    ctx->pc = 0x1999acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1999b0: 0xc5620004
    ctx->pc = 0x1999b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1999b4: 0xc5610008
    ctx->pc = 0x1999b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1999b8: 0xc560000c
    ctx->pc = 0x1999b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1999bc: 0xe5430000
    ctx->pc = 0x1999bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1999c0: 0xe5420004
    ctx->pc = 0x1999c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1999c4: 0xe5410008
    ctx->pc = 0x1999c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1999c8: 0xe540000c
    ctx->pc = 0x1999c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1999cc: 0xc5230000
    ctx->pc = 0x1999ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1999d0: 0xc5220004
    ctx->pc = 0x1999d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1999d4: 0xc5210008
    ctx->pc = 0x1999d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1999d8: 0xc520000c
    ctx->pc = 0x1999d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1999dc: 0xe5030000
    ctx->pc = 0x1999dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1999e0: 0xe5020004
    ctx->pc = 0x1999e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1999e4: 0xe5010008
    ctx->pc = 0x1999e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1999e8: 0xe500000c
    ctx->pc = 0x1999e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1999ec: 0xc4e30000
    ctx->pc = 0x1999ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1999f0: 0xc4e20004
    ctx->pc = 0x1999f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1999f4: 0xc4e10008
    ctx->pc = 0x1999f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1999f8: 0xc4e0000c
    ctx->pc = 0x1999f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1999fc: 0xe4c30000
    ctx->pc = 0x1999fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x199a00: 0xe4c20004
    ctx->pc = 0x199a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x199a04: 0xe4c10008
    ctx->pc = 0x199a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x199a08: 0xe4c0000c
    ctx->pc = 0x199a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x199a0c: 0xc4a30000
    ctx->pc = 0x199a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199a10: 0xc4a20004
    ctx->pc = 0x199a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199a14: 0xc4a10008
    ctx->pc = 0x199a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a18: 0xc4a0000c
    ctx->pc = 0x199a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a1c: 0xe4630000
    ctx->pc = 0x199a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x199a20: 0xe4620004
    ctx->pc = 0x199a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x199a24: 0xe4610008
    ctx->pc = 0x199a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x199a28: 0xe460000c
    ctx->pc = 0x199a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x199a2c: 0xd9c40000
    ctx->pc = 0x199a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x199a30: 0xd9c50020
    ctx->pc = 0x199a30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x199a34: 0xd9c60040
    ctx->pc = 0x199a34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x199a38: 0xd9c70010
    ctx->pc = 0x199a38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x199a3c: 0xd9c80030
    ctx->pc = 0x199a3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x199a40: 0xd9c90050
    ctx->pc = 0x199a40u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x199a44: 0x4a20012c
    ctx->pc = 0x199a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x199a48: 0x4a20016c
    ctx->pc = 0x199a48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x199a4c: 0x4a2001ac
    ctx->pc = 0x199a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x199a50: 0x44086000
    ctx->pc = 0x199a50u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x199a54: 0x48c8a800
    ctx->pc = 0x199a54u;
    ctx->vu0_info = GPR_U32(ctx, 8);
    // 0x199a58: 0x4bc742bc
    ctx->pc = 0x199a58u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[7]);
    // 0x199a5c: 0x4bc04a8b
    ctx->pc = 0x199a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199a60: 0xf8840000
    ctx->pc = 0x199a60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199a64: 0xf8850010
    ctx->pc = 0x199a64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x199a68: 0xf8860020
    ctx->pc = 0x199a68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x199a6c: 0x4bc0529e
    ctx->pc = 0x199a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x199a70: 0x4bc0529f
    ctx->pc = 0x199a70u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x199a74: 0xf88a0030
    ctx->pc = 0x199a74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x199a78: 0x3c034300
    ctx->pc = 0x199a78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17152 << 16));
    // 0x199a7c: 0xac83003c
    ctx->pc = 0x199a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x199a80: 0x3e00008
    ctx->pc = 0x199A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199A88u;
    // 0x199a88: 0x0
    ctx->pc = 0x199a88u;
    // NOP
    // 0x199a8c: 0x0
    ctx->pc = 0x199a8cu;
    // NOP
}
