#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F7E0
// Address: 0x18f7e0 - 0x18f880
void sub_0018F7E0_0x18f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f7e0u;

    // 0x18f7e0: 0x80282d
    ctx->pc = 0x18f7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7e4: 0x27bdfff0
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f7e8: 0x3c040029
    ctx->pc = 0x18f7e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18f7ec: 0xffbf0000
    ctx->pc = 0x18f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f7f0: 0xc064540
    ctx->pc = 0x18F7F0u;
    SET_GPR_U32(ctx, 31, 0x18F7F8u);
    ctx->pc = 0x18F7F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19712));
    ctx->pc = 0x191500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191500_0x191500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7F8u; }
    }
    if (ctx->pc != 0x18F7F8u) { return; }
    ctx->pc = 0x18F7F8u;
    // 0x18f7f8: 0x3c010029
    ctx->pc = 0x18f7f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f7fc: 0x3c033f00
    ctx->pc = 0x18f7fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x18f800: 0xc42641d0
    ctx->pc = 0x18f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18f804: 0x44833800
    ctx->pc = 0x18f804u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 3);
    // 0x18f808: 0x3c034000
    ctx->pc = 0x18f808u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x18f80c: 0x44832000
    ctx->pc = 0x18f80cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 3);
    // 0x18f810: 0x3c010029
    ctx->pc = 0x18f810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f814: 0xc42541b0
    ctx->pc = 0x18f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18f818: 0x46063982
    ctx->pc = 0x18f818u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x18f81c: 0x3c010029
    ctx->pc = 0x18f81cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f820: 0xc4234d00
    ctx->pc = 0x18f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18f824: 0x46062943
    ctx->pc = 0x18f824u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[6];
    // 0x18f828: 0x3c010029
    ctx->pc = 0x18f828u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f82c: 0xc42241c8
    ctx->pc = 0x18f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f830: 0x3c010029
    ctx->pc = 0x18f830u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f834: 0xc42141a8
    ctx->pc = 0x18f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f838: 0x46023882
    ctx->pc = 0x18f838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x18f83c: 0x46020843
    ctx->pc = 0x18f83cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x18f840: 0x3c010029
    ctx->pc = 0x18f840u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f844: 0xc4204d14
    ctx->pc = 0x18f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f848: 0x46032082
    ctx->pc = 0x18f848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18f84c: 0x46002002
    ctx->pc = 0x18f84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x18f850: 0x3c010029
    ctx->pc = 0x18f850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f854: 0x46051083
    ctx->pc = 0x18f854u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[5];
    // 0x18f858: 0xe4224d00
    ctx->pc = 0x18f858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19712), bits); }
    // 0x18f85c: 0x46010003
    ctx->pc = 0x18f85cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x18f860: 0x3c010029
    ctx->pc = 0x18f860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f864: 0xe4204d14
    ctx->pc = 0x18f864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19732), bits); }
    // 0x18f868: 0xdfbf0000
    ctx->pc = 0x18f868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f86c: 0x3e00008
    ctx->pc = 0x18F86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F874u;
    // 0x18f874: 0x0
    ctx->pc = 0x18f874u;
    // NOP
    // 0x18f878: 0x0
    ctx->pc = 0x18f878u;
    // NOP
    // 0x18f87c: 0x0
    ctx->pc = 0x18f87cu;
    // NOP
}
