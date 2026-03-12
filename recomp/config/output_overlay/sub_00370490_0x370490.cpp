#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370490
// Address: 0x370490 - 0x370760
void sub_00370490_0x370490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370490u;

    // 0x370490: 0xc4c20000
    ctx->pc = 0x370490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370494: 0x27bdffe0
    ctx->pc = 0x370494u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370498: 0xc4c10004
    ctx->pc = 0x370498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37049c: 0x27a70010
    ctx->pc = 0x37049cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x3704a0: 0xc4c00008
    ctx->pc = 0x3704a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704a4: 0x27a30000
    ctx->pc = 0x3704a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x3704a8: 0xe4e20000
    ctx->pc = 0x3704a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3704ac: 0xe4e10004
    ctx->pc = 0x3704acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3704b0: 0xe4e00008
    ctx->pc = 0x3704b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x3704b4: 0xc4a20000
    ctx->pc = 0x3704b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3704b8: 0xc4a10004
    ctx->pc = 0x3704b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3704bc: 0xc4a00008
    ctx->pc = 0x3704bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704c0: 0xe4620000
    ctx->pc = 0x3704c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3704c4: 0xe4610004
    ctx->pc = 0x3704c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3704c8: 0xe4600008
    ctx->pc = 0x3704c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3704cc: 0xd8e40000
    ctx->pc = 0x3704ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3704d0: 0xd8650000
    ctx->pc = 0x3704d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3704d4: 0x4b8429ac
    ctx->pc = 0x3704d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3704d8: 0xf8e60000
    ctx->pc = 0x3704d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3704dc: 0xc7a00010
    ctx->pc = 0x3704dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704e0: 0xe4800000
    ctx->pc = 0x3704e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3704e4: 0xc7a00014
    ctx->pc = 0x3704e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3704e8: 0xe4800004
    ctx->pc = 0x3704e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3704ec: 0x3e00008
    ctx->pc = 0x3704ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3704F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3706B8u: goto label_3706b8;
            case 0x370744u: goto label_370744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3704F4u;
    // 0x3704f4: 0x0
    ctx->pc = 0x3704f4u;
    // NOP
    // 0x3704f8: 0x0
    ctx->pc = 0x3704f8u;
    // NOP
    // 0x3704fc: 0x0
    ctx->pc = 0x3704fcu;
    // NOP
    // 0x370500: 0xc4a20000
    ctx->pc = 0x370500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370504: 0x27bdffe0
    ctx->pc = 0x370504u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370508: 0xc4a10004
    ctx->pc = 0x370508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37050c: 0x27a70010
    ctx->pc = 0x37050cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x370510: 0xc4a00008
    ctx->pc = 0x370510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370514: 0x27a30000
    ctx->pc = 0x370514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x370518: 0xe4e20000
    ctx->pc = 0x370518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x37051c: 0xe4e10004
    ctx->pc = 0x37051cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x370520: 0xe4e00008
    ctx->pc = 0x370520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x370524: 0xc4c20000
    ctx->pc = 0x370524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370528: 0xc4c10004
    ctx->pc = 0x370528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37052c: 0xc4c00008
    ctx->pc = 0x37052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370530: 0xe4620000
    ctx->pc = 0x370530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x370534: 0xe4610004
    ctx->pc = 0x370534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x370538: 0xe4600008
    ctx->pc = 0x370538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x37053c: 0xd8e40000
    ctx->pc = 0x37053cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x370540: 0xd8650000
    ctx->pc = 0x370540u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370544: 0x4bc521a8
    ctx->pc = 0x370544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x370548: 0xf8e60000
    ctx->pc = 0x370548u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x37054c: 0x27a30010
    ctx->pc = 0x37054cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
    // 0x370550: 0xc4620000
    ctx->pc = 0x370550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370554: 0xc4610004
    ctx->pc = 0x370554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370558: 0xc4600008
    ctx->pc = 0x370558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37055c: 0xe4820000
    ctx->pc = 0x37055cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370560: 0xe4810004
    ctx->pc = 0x370560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370564: 0xe4800008
    ctx->pc = 0x370564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x370568: 0x3e00008
    ctx->pc = 0x370568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37056Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3706B8u: goto label_3706b8;
            case 0x370744u: goto label_370744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370570u;
    // 0x370570: 0xc4a20000
    ctx->pc = 0x370570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370574: 0x27bdffe0
    ctx->pc = 0x370574u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370578: 0xc4a10004
    ctx->pc = 0x370578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37057c: 0x27a70010
    ctx->pc = 0x37057cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x370580: 0xc4a00008
    ctx->pc = 0x370580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370584: 0x27a30000
    ctx->pc = 0x370584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x370588: 0xe4e20000
    ctx->pc = 0x370588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x37058c: 0xe4e10004
    ctx->pc = 0x37058cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x370590: 0xe4e00008
    ctx->pc = 0x370590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x370594: 0xc4c20000
    ctx->pc = 0x370594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370598: 0xc4c10004
    ctx->pc = 0x370598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37059c: 0xc4c00008
    ctx->pc = 0x37059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3705a0: 0xe4620000
    ctx->pc = 0x3705a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3705a4: 0xe4610004
    ctx->pc = 0x3705a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3705a8: 0xe4600008
    ctx->pc = 0x3705a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3705ac: 0xd8e40000
    ctx->pc = 0x3705acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3705b0: 0xd8650000
    ctx->pc = 0x3705b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3705b4: 0x4bc521ac
    ctx->pc = 0x3705b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3705b8: 0xf8e60000
    ctx->pc = 0x3705b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3705bc: 0x27a30010
    ctx->pc = 0x3705bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
    // 0x3705c0: 0xc4620000
    ctx->pc = 0x3705c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3705c4: 0xc4610004
    ctx->pc = 0x3705c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3705c8: 0xc4600008
    ctx->pc = 0x3705c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3705cc: 0xe4820000
    ctx->pc = 0x3705ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3705d0: 0xe4810004
    ctx->pc = 0x3705d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3705d4: 0xe4800008
    ctx->pc = 0x3705d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3705d8: 0x3e00008
    ctx->pc = 0x3705D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3705DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3706B8u: goto label_3706b8;
            case 0x370744u: goto label_370744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3705E0u;
    // 0x3705e0: 0xc4a20000
    ctx->pc = 0x3705e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3705e4: 0x27bdfff0
    ctx->pc = 0x3705e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3705e8: 0xc4a10004
    ctx->pc = 0x3705e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3705ec: 0x27a30000
    ctx->pc = 0x3705ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x3705f0: 0xc4a00008
    ctx->pc = 0x3705f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3705f4: 0xe4620000
    ctx->pc = 0x3705f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3705f8: 0xe4610004
    ctx->pc = 0x3705f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3705fc: 0xe4600008
    ctx->pc = 0x3705fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x370600: 0x44086000
    ctx->pc = 0x370600u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x370604: 0x0
    ctx->pc = 0x370604u;
    // NOP
    // 0x370608: 0x48a82000
    ctx->pc = 0x370608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x37060c: 0xd8650000
    ctx->pc = 0x37060cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370610: 0x4bc42998
    ctx->pc = 0x370610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x370614: 0xf8660000
    ctx->pc = 0x370614u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x370618: 0x27a30000
    ctx->pc = 0x370618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x37061c: 0xc4620000
    ctx->pc = 0x37061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370620: 0xc4610004
    ctx->pc = 0x370620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370624: 0xc4600008
    ctx->pc = 0x370624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370628: 0xe4820000
    ctx->pc = 0x370628u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37062c: 0xe4810004
    ctx->pc = 0x37062cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370630: 0xe4800008
    ctx->pc = 0x370630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x370634: 0x3e00008
    ctx->pc = 0x370634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3706B8u: goto label_3706b8;
            case 0x370744u: goto label_370744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37063Cu;
    // 0x37063c: 0x0
    ctx->pc = 0x37063cu;
    // NOP
    // 0x370640: 0x27bdffa0
    ctx->pc = 0x370640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x370644: 0xffbf0030
    ctx->pc = 0x370644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x370648: 0x7fb20020
    ctx->pc = 0x370648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37064c: 0x7fb10010
    ctx->pc = 0x37064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370650: 0xa0902d
    ctx->pc = 0x370650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370654: 0x7fb00000
    ctx->pc = 0x370654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370658: 0x80282d
    ctx->pc = 0x370658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37065c: 0xc0882d
    ctx->pc = 0x37065cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370660: 0xe0802d
    ctx->pc = 0x370660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370664: 0x27a40050
    ctx->pc = 0x370664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x370668: 0xc0dc108
    ctx->pc = 0x370668u;
    SET_GPR_U32(ctx, 31, 0x370670u);
    ctx->pc = 0x37066Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370670u; }
    }
    if (ctx->pc != 0x370670u) { return; }
    ctx->pc = 0x370670u;
    // 0x370670: 0x220282d
    ctx->pc = 0x370670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370674: 0x240302d
    ctx->pc = 0x370674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370678: 0xc0dc108
    ctx->pc = 0x370678u;
    SET_GPR_U32(ctx, 31, 0x370680u);
    ctx->pc = 0x37067Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370680u; }
    }
    if (ctx->pc != 0x370680u) { return; }
    ctx->pc = 0x370680u;
    // 0x370680: 0x200202d
    ctx->pc = 0x370680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370684: 0x27a50040
    ctx->pc = 0x370684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x370688: 0xc064794
    ctx->pc = 0x370688u;
    SET_GPR_U32(ctx, 31, 0x370690u);
    ctx->pc = 0x37068Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x191E50u;
    {
        auto targetFn = runtime->lookupFunction(0x191E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370690u; }
        if (ctx->pc != 0x370690u) { return; }
    }
    ctx->pc = 0x370690u;
    // 0x370690: 0xc064760
    ctx->pc = 0x370690u;
    SET_GPR_U32(ctx, 31, 0x370698u);
    ctx->pc = 0x370694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D80u;
    {
        auto targetFn = runtime->lookupFunction(0x191D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370698u; }
        if (ctx->pc != 0x370698u) { return; }
    }
    ctx->pc = 0x370698u;
    // 0x370698: 0xc064730
    ctx->pc = 0x370698u;
    SET_GPR_U32(ctx, 31, 0x3706A0u);
    ctx->pc = 0x37069Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x191CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706A0u; }
        if (ctx->pc != 0x3706A0u) { return; }
    }
    ctx->pc = 0x3706A0u;
    // 0x3706a0: 0x44800800
    ctx->pc = 0x3706a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x3706a4: 0x0
    ctx->pc = 0x3706a4u;
    // NOP
    // 0x3706a8: 0x46000832
    ctx->pc = 0x3706a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3706ac: 0x45000002
    ctx->pc = 0x3706ACu;
    {
        const bool branch_taken_0x3706ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3706B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x3706ac) {
            ctx->pc = 0x3706B8u;
            goto label_3706b8;
        }
    }
    ctx->pc = 0x3706B4u;
    // 0x3706b4: 0x102d
    ctx->pc = 0x3706b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3706b8:
    // 0x3706b8: 0xdfbf0030
    ctx->pc = 0x3706b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3706bc: 0x7bb20020
    ctx->pc = 0x3706bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3706c0: 0x7bb10010
    ctx->pc = 0x3706c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3706c4: 0x7bb00000
    ctx->pc = 0x3706c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3706c8: 0x3e00008
    ctx->pc = 0x3706C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3706CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3706B8u: goto label_3706b8;
            case 0x370744u: goto label_370744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3706D0u;
    // 0x3706d0: 0x27bdffa0
    ctx->pc = 0x3706d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3706d4: 0xffbf0030
    ctx->pc = 0x3706d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3706d8: 0x7fb20020
    ctx->pc = 0x3706d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3706dc: 0x7fb10010
    ctx->pc = 0x3706dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3706e0: 0xa0902d
    ctx->pc = 0x3706e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706e4: 0x7fb00000
    ctx->pc = 0x3706e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3706e8: 0x80282d
    ctx->pc = 0x3706e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706ec: 0xe0802d
    ctx->pc = 0x3706ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706f0: 0xc0882d
    ctx->pc = 0x3706f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706f4: 0xc0dc108
    ctx->pc = 0x3706F4u;
    SET_GPR_U32(ctx, 31, 0x3706FCu);
    ctx->pc = 0x3706F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706FCu; }
    }
    if (ctx->pc != 0x3706FCu) { return; }
    ctx->pc = 0x3706FCu;
    // 0x3706fc: 0x240282d
    ctx->pc = 0x3706fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370700: 0x220302d
    ctx->pc = 0x370700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370704: 0xc0dc108
    ctx->pc = 0x370704u;
    SET_GPR_U32(ctx, 31, 0x37070Cu);
    ctx->pc = 0x370708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37070Cu; }
    }
    if (ctx->pc != 0x37070Cu) { return; }
    ctx->pc = 0x37070Cu;
    // 0x37070c: 0x200202d
    ctx->pc = 0x37070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370710: 0x27a50040
    ctx->pc = 0x370710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x370714: 0xc064794
    ctx->pc = 0x370714u;
    SET_GPR_U32(ctx, 31, 0x37071Cu);
    ctx->pc = 0x370718u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x191E50u;
    {
        auto targetFn = runtime->lookupFunction(0x191E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37071Cu; }
        if (ctx->pc != 0x37071Cu) { return; }
    }
    ctx->pc = 0x37071Cu;
    // 0x37071c: 0xc064760
    ctx->pc = 0x37071Cu;
    SET_GPR_U32(ctx, 31, 0x370724u);
    ctx->pc = 0x370720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D80u;
    {
        auto targetFn = runtime->lookupFunction(0x191D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370724u; }
        if (ctx->pc != 0x370724u) { return; }
    }
    ctx->pc = 0x370724u;
    // 0x370724: 0xc064730
    ctx->pc = 0x370724u;
    SET_GPR_U32(ctx, 31, 0x37072Cu);
    ctx->pc = 0x370728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x191CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37072Cu; }
        if (ctx->pc != 0x37072Cu) { return; }
    }
    ctx->pc = 0x37072Cu;
    // 0x37072c: 0x44800800
    ctx->pc = 0x37072cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x370730: 0x0
    ctx->pc = 0x370730u;
    // NOP
    // 0x370734: 0x46000832
    ctx->pc = 0x370734u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370738: 0x45000002
    ctx->pc = 0x370738u;
    {
        const bool branch_taken_0x370738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37073Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x370738) {
            ctx->pc = 0x370744u;
            goto label_370744;
        }
    }
    ctx->pc = 0x370740u;
    // 0x370740: 0x102d
    ctx->pc = 0x370740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370744:
    // 0x370744: 0xdfbf0030
    ctx->pc = 0x370744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370748: 0x7bb20020
    ctx->pc = 0x370748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37074c: 0x7bb10010
    ctx->pc = 0x37074cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370750: 0x7bb00000
    ctx->pc = 0x370750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370754: 0x3e00008
    ctx->pc = 0x370754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370758u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3706B8u: goto label_3706b8;
            case 0x370744u: goto label_370744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37075Cu;
    // 0x37075c: 0x0
    ctx->pc = 0x37075cu;
    // NOP
}
