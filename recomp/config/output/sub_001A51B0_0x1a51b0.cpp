#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A51B0
// Address: 0x1a51b0 - 0x1a5220
void sub_001A51B0_0x1a51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a51b0u;

    // 0x1a51b0: 0x27bdffe0
    ctx->pc = 0x1a51b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a51b4: 0xffbf0010
    ctx->pc = 0x1a51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a51b8: 0x7fb00000
    ctx->pc = 0x1a51b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a51bc: 0xc069460
    ctx->pc = 0x1A51BCu;
    SET_GPR_U32(ctx, 31, 0x1A51C4u);
    ctx->pc = 0x1A51C0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5180_0x1a5180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51C4u; }
    }
    if (ctx->pc != 0x1A51C4u) { return; }
    ctx->pc = 0x1A51C4u;
    // 0x1a51c4: 0x44800800
    ctx->pc = 0x1a51c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1a51c8: 0x0
    ctx->pc = 0x1a51c8u;
    // NOP
    // 0x1a51cc: 0x46000832
    ctx->pc = 0x1a51ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a51d0: 0x45000005
    ctx->pc = 0x1A51D0u;
    {
        const bool branch_taken_0x1a51d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a51d0) {
            ctx->pc = 0x1A51E8u;
            goto label_1a51e8;
        }
    }
    ctx->pc = 0x1A51D8u;
    // 0x1a51d8: 0xe6010008
    ctx->pc = 0x1a51d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a51dc: 0xe6010004
    ctx->pc = 0x1a51dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a51e0: 0x1000000b
    ctx->pc = 0x1A51E0u;
    {
        const bool branch_taken_0x1a51e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A51E4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x1a51e0) {
            ctx->pc = 0x1A5210u;
            goto label_1a5210;
        }
    }
    ctx->pc = 0x1A51E8u;
label_1a51e8:
    // 0x1a51e8: 0xc6010000
    ctx->pc = 0x1a51e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a51ec: 0x0
    ctx->pc = 0x1a51ecu;
    // NOP
    // 0x1a51f0: 0x46000843
    ctx->pc = 0x1a51f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1a51f4: 0xe6010000
    ctx->pc = 0x1a51f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a51f8: 0xc6010004
    ctx->pc = 0x1a51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a51fc: 0x46000843
    ctx->pc = 0x1a51fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1a5200: 0xe6010004
    ctx->pc = 0x1a5200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a5204: 0xc6010008
    ctx->pc = 0x1a5204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5208: 0x46000803
    ctx->pc = 0x1a5208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a520c: 0xe6000008
    ctx->pc = 0x1a520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a5210:
    // 0x1a5210: 0xdfbf0010
    ctx->pc = 0x1a5210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5214: 0x7bb00000
    ctx->pc = 0x1a5214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5218: 0x3e00008
    ctx->pc = 0x1A5218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A521Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A51E8u: goto label_1a51e8;
            case 0x1A5210u: goto label_1a5210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5220u;
}
