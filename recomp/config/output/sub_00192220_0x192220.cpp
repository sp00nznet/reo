#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192220
// Address: 0x192220 - 0x192450
void sub_00192220_0x192220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192220u;

    // 0x192220: 0x44086000
    ctx->pc = 0x192220u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x192224: 0x0
    ctx->pc = 0x192224u;
    // NOP
    // 0x192228: 0x48a82000
    ctx->pc = 0x192228u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19222c: 0x4a0403bd
    ctx->pc = 0x19222cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x192230: 0x4a0003bf
    ctx->pc = 0x192230u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192234: 0x4b000120
    ctx->pc = 0x192234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x192238: 0x48282000
    ctx->pc = 0x192238u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19223c: 0x44880000
    ctx->pc = 0x19223cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x192240: 0x3e00008
    ctx->pc = 0x192240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A4u: goto label_1922a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192248u;
    // 0x192248: 0x0
    ctx->pc = 0x192248u;
    // NOP
    // 0x19224c: 0x0
    ctx->pc = 0x19224cu;
    // NOP
    // 0x192250: 0xc4840004
    ctx->pc = 0x192250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x192254: 0xc4850000
    ctx->pc = 0x192254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x192258: 0xc4830008
    ctx->pc = 0x192258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19225c: 0xc482000c
    ctx->pc = 0x19225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192260: 0x44804800
    ctx->pc = 0x192260u;
    *(uint32_t*)&ctx->f[9] = GPR_U32(ctx, 0);
    // 0x192264: 0x460421c2
    ctx->pc = 0x192264u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x192268: 0x46052a02
    ctx->pc = 0x192268u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x19226c: 0x46031982
    ctx->pc = 0x19226cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x192270: 0x46074000
    ctx->pc = 0x192270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x192274: 0x46021042
    ctx->pc = 0x192274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x192278: 0x46003000
    ctx->pc = 0x192278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x19227c: 0x46000840
    ctx->pc = 0x19227cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192280: 0x46090836
    ctx->pc = 0x192280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192284: 0x45010007
    ctx->pc = 0x192284u;
    {
        const bool branch_taken_0x192284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192288u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x192284) {
            ctx->pc = 0x1922A4u;
            goto label_1922a4;
        }
    }
    ctx->pc = 0x19228Cu;
    // 0x19228c: 0x44830000
    ctx->pc = 0x19228cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x192290: 0x0
    ctx->pc = 0x192290u;
    // NOP
    // 0x192294: 0x46010243
    ctx->pc = 0x192294u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[9] = ctx->f[0] / ctx->f[1];
    // 0x192298: 0x0
    ctx->pc = 0x192298u;
    // NOP
    // 0x19229c: 0x0
    ctx->pc = 0x19229cu;
    // NOP
    // 0x1922a0: 0x0
    ctx->pc = 0x1922a0u;
    // NOP
label_1922a4:
    // 0x1922a4: 0x46042802
    ctx->pc = 0x1922a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1922a8: 0x3c033f80
    ctx->pc = 0x1922a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1922ac: 0x46004ac2
    ctx->pc = 0x1922acu;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1922b0: 0x46032802
    ctx->pc = 0x1922b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1922b4: 0x46004a82
    ctx->pc = 0x1922b4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1922b8: 0x46051002
    ctx->pc = 0x1922b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1922bc: 0x46074b42
    ctx->pc = 0x1922bcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x1922c0: 0x460049c2
    ctx->pc = 0x1922c0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1922c4: 0x46084b82
    ctx->pc = 0x1922c4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1922c8: 0x46032002
    ctx->pc = 0x1922c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1922cc: 0x46004a02
    ctx->pc = 0x1922ccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1922d0: 0x46031002
    ctx->pc = 0x1922d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1922d4: 0x460048c2
    ctx->pc = 0x1922d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1922d8: 0x46041042
    ctx->pc = 0x1922d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1922dc: 0x46064b02
    ctx->pc = 0x1922dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1922e0: 0x46014982
    ctx->pc = 0x1922e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1922e4: 0x46035880
    ctx->pc = 0x1922e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x1922e8: 0x460c6900
    ctx->pc = 0x1922e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x1922ec: 0x44832800
    ctx->pc = 0x1922ecu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x1922f0: 0x460c7040
    ctx->pc = 0x1922f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
    // 0x1922f4: 0x46042901
    ctx->pc = 0x1922f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1922f8: 0xe4a40000
    ctx->pc = 0x1922f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1922fc: 0xe4a20004
    ctx->pc = 0x1922fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x192300: 0x46065101
    ctx->pc = 0x192300u;
    ctx->f[4] = FPU_SUB_S(ctx->f[10], ctx->f[6]);
    // 0x192304: 0x460d7000
    ctx->pc = 0x192304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x192308: 0x460358c1
    ctx->pc = 0x192308u;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x19230c: 0xe4a40008
    ctx->pc = 0x19230cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x192310: 0xe4a30010
    ctx->pc = 0x192310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x192314: 0x46012841
    ctx->pc = 0x192314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x192318: 0xe4a10014
    ctx->pc = 0x192318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x19231c: 0x460740c0
    ctx->pc = 0x19231cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x192320: 0x46065080
    ctx->pc = 0x192320u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x192324: 0xe4a30018
    ctx->pc = 0x192324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x192328: 0x46074041
    ctx->pc = 0x192328u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x19232c: 0xe4a20020
    ctx->pc = 0x19232cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x192330: 0x46002801
    ctx->pc = 0x192330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x192334: 0xe4a10024
    ctx->pc = 0x192334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x192338: 0xe4a00028
    ctx->pc = 0x192338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x19233c: 0xaca0002c
    ctx->pc = 0x19233cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x192340: 0xaca0001c
    ctx->pc = 0x192340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x192344: 0xaca0000c
    ctx->pc = 0x192344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x192348: 0xaca00038
    ctx->pc = 0x192348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x19234c: 0xaca00034
    ctx->pc = 0x19234cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x192350: 0xaca00030
    ctx->pc = 0x192350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x192354: 0x3e00008
    ctx->pc = 0x192354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192358u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A4u: goto label_1922a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19235Cu;
    // 0x19235c: 0x0
    ctx->pc = 0x19235cu;
    // NOP
    // 0x192360: 0xc486000c
    ctx->pc = 0x192360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x192364: 0xc4a0000c
    ctx->pc = 0x192364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192368: 0xc4830004
    ctx->pc = 0x192368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19236c: 0xc4a20004
    ctx->pc = 0x19236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192370: 0xc4850000
    ctx->pc = 0x192370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x192374: 0xc4a40000
    ctx->pc = 0x192374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x192378: 0xc4810008
    ctx->pc = 0x192378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19237c: 0x4600301a
    ctx->pc = 0x19237cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x192380: 0xc4a00008
    ctx->pc = 0x192380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192384: 0x46021882
    ctx->pc = 0x192384u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x192388: 0x4604291d
    ctx->pc = 0x192388u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x19238c: 0x46022019
    ctx->pc = 0x19238cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x192390: 0x4600081d
    ctx->pc = 0x192390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x192394: 0xe4c0000c
    ctx->pc = 0x192394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x192398: 0xc486000c
    ctx->pc = 0x192398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19239c: 0xc4a00000
    ctx->pc = 0x19239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923a0: 0xc4830004
    ctx->pc = 0x1923a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1923a4: 0xc4a20008
    ctx->pc = 0x1923a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1923a8: 0xc4850000
    ctx->pc = 0x1923a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1923ac: 0xc4a4000c
    ctx->pc = 0x1923acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1923b0: 0xc4810008
    ctx->pc = 0x1923b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1923b4: 0x4600301a
    ctx->pc = 0x1923b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1923b8: 0xc4a00004
    ctx->pc = 0x1923b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923bc: 0x46021882
    ctx->pc = 0x1923bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1923c0: 0x4604291c
    ctx->pc = 0x1923c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1923c4: 0x46041018
    ctx->pc = 0x1923c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1923c8: 0x4600081d
    ctx->pc = 0x1923c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1923cc: 0xe4c00000
    ctx->pc = 0x1923ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1923d0: 0xc486000c
    ctx->pc = 0x1923d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1923d4: 0xc4a00004
    ctx->pc = 0x1923d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923d8: 0xc4830008
    ctx->pc = 0x1923d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1923dc: 0xc4a20000
    ctx->pc = 0x1923dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1923e0: 0xc4850004
    ctx->pc = 0x1923e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1923e4: 0xc4a4000c
    ctx->pc = 0x1923e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1923e8: 0xc4810000
    ctx->pc = 0x1923e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1923ec: 0x4600301a
    ctx->pc = 0x1923ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1923f0: 0xc4a00008
    ctx->pc = 0x1923f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923f4: 0x46021882
    ctx->pc = 0x1923f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1923f8: 0x4604291c
    ctx->pc = 0x1923f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1923fc: 0x46041018
    ctx->pc = 0x1923fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x192400: 0x4600081d
    ctx->pc = 0x192400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x192404: 0xe4c00004
    ctx->pc = 0x192404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x192408: 0xc486000c
    ctx->pc = 0x192408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19240c: 0xc4a00008
    ctx->pc = 0x19240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192410: 0xc4830000
    ctx->pc = 0x192410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192414: 0xc4a20004
    ctx->pc = 0x192414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192418: 0xc4850008
    ctx->pc = 0x192418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19241c: 0xc4a4000c
    ctx->pc = 0x19241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x192420: 0xc4810004
    ctx->pc = 0x192420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192424: 0x4600301a
    ctx->pc = 0x192424u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x192428: 0xc4a00000
    ctx->pc = 0x192428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19242c: 0x46021882
    ctx->pc = 0x19242cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x192430: 0x4604291c
    ctx->pc = 0x192430u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x192434: 0x46041018
    ctx->pc = 0x192434u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x192438: 0x4600081d
    ctx->pc = 0x192438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x19243c: 0x3e00008
    ctx->pc = 0x19243Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192440u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A4u: goto label_1922a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192444u;
    // 0x192444: 0x0
    ctx->pc = 0x192444u;
    // NOP
    // 0x192448: 0x0
    ctx->pc = 0x192448u;
    // NOP
    // 0x19244c: 0x0
    ctx->pc = 0x19244cu;
    // NOP
}
