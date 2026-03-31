#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F710
// Address: 0x18f710 - 0x18f7e0
void sub_0018F710_0x18f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f710u;

    // 0x18f710: 0x3c023f00
    ctx->pc = 0x18f710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x18f714: 0x27bdffc0
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f718: 0x44820000
    ctx->pc = 0x18f718u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18f71c: 0xffbf0020
    ctx->pc = 0x18f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f720: 0x7fb00010
    ctx->pc = 0x18f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18f724: 0x27a5003c
    ctx->pc = 0x18f724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    // 0x18f728: 0x46007382
    ctx->pc = 0x18f728u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x18f72c: 0x80802d
    ctx->pc = 0x18f72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f730: 0x27a40038
    ctx->pc = 0x18f730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 56));
    // 0x18f734: 0xe7b60008
    ctx->pc = 0x18f734u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18f738: 0xe7b50004
    ctx->pc = 0x18f738u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18f73c: 0xe7b40000
    ctx->pc = 0x18f73cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18f740: 0x46006586
    ctx->pc = 0x18f740u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x18f744: 0x46006d06
    ctx->pc = 0x18f744u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x18f748: 0x46007d46
    ctx->pc = 0x18f748u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x18f74c: 0xc06486c
    ctx->pc = 0x18F74Cu;
    SET_GPR_U32(ctx, 31, 0x18F754u);
    ctx->pc = 0x18F750u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x1921B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001921B0_0x1921b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F754u; }
    }
    if (ctx->pc != 0x18F754u) { return; }
    ctx->pc = 0x18F754u;
    // 0x18f754: 0xc063f7c
    ctx->pc = 0x18F754u;
    SET_GPR_U32(ctx, 31, 0x18F75Cu);
    ctx->pc = 0x18F758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F75Cu; }
    }
    if (ctx->pc != 0x18F75Cu) { return; }
    ctx->pc = 0x18F75Cu;
    // 0x18f75c: 0xc7a3003c
    ctx->pc = 0x18f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18f760: 0x3c034000
    ctx->pc = 0x18f760u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x18f764: 0xc7a20038
    ctx->pc = 0x18f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f768: 0x3c04bf80
    ctx->pc = 0x18f768u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49024 << 16));
    // 0x18f76c: 0x44830000
    ctx->pc = 0x18f76cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18f770: 0x4614b040
    ctx->pc = 0x18f770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x18f774: 0x46021883
    ctx->pc = 0x18f774u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x18f778: 0x46151083
    ctx->pc = 0x18f778u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[21];
    // 0x18f77c: 0xe6020000
    ctx->pc = 0x18f77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18f780: 0x46160002
    ctx->pc = 0x18f780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x18f784: 0x46140002
    ctx->pc = 0x18f784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18f788: 0xc7a3003c
    ctx->pc = 0x18f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18f78c: 0xc7a20038
    ctx->pc = 0x18f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f790: 0x4614b101
    ctx->pc = 0x18f790u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x18f794: 0x46000847
    ctx->pc = 0x18f794u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18f798: 0x46021883
    ctx->pc = 0x18f798u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x18f79c: 0x46000007
    ctx->pc = 0x18f79cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18f7a0: 0x46040843
    ctx->pc = 0x18f7a0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x18f7a4: 0xe6020014
    ctx->pc = 0x18f7a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x18f7a8: 0xe6010028
    ctx->pc = 0x18f7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x18f7ac: 0x46040003
    ctx->pc = 0x18f7acu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x18f7b0: 0xae04002c
    ctx->pc = 0x18f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x18f7b4: 0xe6000038
    ctx->pc = 0x18f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x18f7b8: 0xae00003c
    ctx->pc = 0x18f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x18f7bc: 0xdfbf0020
    ctx->pc = 0x18f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f7c0: 0xc7b60008
    ctx->pc = 0x18f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18f7c4: 0x7bb00010
    ctx->pc = 0x18f7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f7c8: 0xc7b50004
    ctx->pc = 0x18f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18f7cc: 0xc7b40000
    ctx->pc = 0x18f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f7d0: 0x3e00008
    ctx->pc = 0x18F7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F7D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F7D8u;
    // 0x18f7d8: 0x0
    ctx->pc = 0x18f7d8u;
    // NOP
    // 0x18f7dc: 0x0
    ctx->pc = 0x18f7dcu;
    // NOP
}
