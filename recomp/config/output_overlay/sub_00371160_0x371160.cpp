#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371160
// Address: 0x371160 - 0x371200
void sub_00371160_0x371160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371160u;

    // 0x371160: 0xc4860004
    ctx->pc = 0x371160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x371164: 0xc4a30004
    ctx->pc = 0x371164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x371168: 0xc4870000
    ctx->pc = 0x371168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x37116c: 0xc4a00000
    ctx->pc = 0x37116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371170: 0xc4a10008
    ctx->pc = 0x371170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371174: 0xc4850008
    ctx->pc = 0x371174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x371178: 0xc4c40000
    ctx->pc = 0x371178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37117c: 0x46061a41
    ctx->pc = 0x37117cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x371180: 0x46070281
    ctx->pc = 0x371180u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x371184: 0x46050a01
    ctx->pc = 0x371184u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x371188: 0x460a381a
    ctx->pc = 0x371188u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x37118c: 0xc4c20004
    ctx->pc = 0x37118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x371190: 0x460930c2
    ctx->pc = 0x371190u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x371194: 0x4604511d
    ctx->pc = 0x371194u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
    // 0x371198: 0x46041818
    ctx->pc = 0x371198u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x37119c: 0xc4c00008
    ctx->pc = 0x37119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3711a0: 0x46082842
    ctx->pc = 0x3711a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x3711a4: 0x4602489d
    ctx->pc = 0x3711a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x3711a8: 0x46020818
    ctx->pc = 0x3711a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3711ac: 0x4600409d
    ctx->pc = 0x3711acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[0]));
    // 0x3711b0: 0x460a5002
    ctx->pc = 0x3711b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3711b4: 0x46000047
    ctx->pc = 0x3711b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3711b8: 0x46094802
    ctx->pc = 0x3711b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x3711bc: 0x46000819
    ctx->pc = 0x3711bcu;
    ctx->f[31] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3711c0: 0x4608401d
    ctx->pc = 0x3711c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x3711c4: 0x460010c3
    ctx->pc = 0x3711c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[0];
    // 0x3711c8: 0x46035002
    ctx->pc = 0x3711c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x3711cc: 0x46003800
    ctx->pc = 0x3711ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x3711d0: 0xe4e00000
    ctx->pc = 0x3711d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3711d4: 0xc4820004
    ctx->pc = 0x3711d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3711d8: 0x46034842
    ctx->pc = 0x3711d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x3711dc: 0x46011040
    ctx->pc = 0x3711dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3711e0: 0xe4e10004
    ctx->pc = 0x3711e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3711e4: 0xc4810008
    ctx->pc = 0x3711e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3711e8: 0x46034002
    ctx->pc = 0x3711e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x3711ec: 0x46000800
    ctx->pc = 0x3711ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3711f0: 0x3e00008
    ctx->pc = 0x3711F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3711F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3711F8u;
    // 0x3711f8: 0x0
    ctx->pc = 0x3711f8u;
    // NOP
    // 0x3711fc: 0x0
    ctx->pc = 0x3711fcu;
    // NOP
}
