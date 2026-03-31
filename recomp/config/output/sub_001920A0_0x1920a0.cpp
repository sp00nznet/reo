#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001920A0
// Address: 0x1920a0 - 0x192170
void sub_001920A0_0x1920a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1920a0u;

label_1920a0:
    // 0x1920a0: 0x44800000
    ctx->pc = 0x1920a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1920a4: 0x0
    ctx->pc = 0x1920a4u;
    // NOP
    // 0x1920a8: 0x46006034
    ctx->pc = 0x1920a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1920ac: 0x45000003
    ctx->pc = 0x1920ACu;
    {
        const bool branch_taken_0x1920ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1920B0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1920ac) {
            ctx->pc = 0x1920BCu;
            goto label_1920bc;
        }
    }
    ctx->pc = 0x1920B4u;
    // 0x1920b4: 0x46006307
    ctx->pc = 0x1920b4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1920b8: 0x46006006
    ctx->pc = 0x1920b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1920bc:
    // 0x1920bc: 0x3e00008
    ctx->pc = 0x1920BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1920A0u: goto label_1920a0;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920E0u: goto label_1920e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1920C4u;
    // 0x1920c4: 0x0
    ctx->pc = 0x1920c4u;
    // NOP
    // 0x1920c8: 0x0
    ctx->pc = 0x1920c8u;
    // NOP
    // 0x1920cc: 0x0
    ctx->pc = 0x1920ccu;
    // NOP
    // 0x1920d0: 0x27bdfff0
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1920d4: 0xffbf0000
    ctx->pc = 0x1920d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1920d8: 0xc064828
    ctx->pc = 0x1920D8u;
    SET_GPR_U32(ctx, 31, 0x1920E0u);
    ctx->pc = 0x1920A0u;
    goto label_1920a0;
    ctx->pc = 0x1920E0u;
label_1920e0:
    // 0x1920e0: 0xc064888
    ctx->pc = 0x1920E0u;
    SET_GPR_U32(ctx, 31, 0x1920E8u);
    ctx->pc = 0x1920E4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x192220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192220_0x192220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920E8u; }
    }
    if (ctx->pc != 0x1920E8u) { return; }
    ctx->pc = 0x1920E8u;
    // 0x1920e8: 0xdfbf0000
    ctx->pc = 0x1920e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1920ec: 0x3e00008
    ctx->pc = 0x1920ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1920F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1920A0u: goto label_1920a0;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920E0u: goto label_1920e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1920F4u;
    // 0x1920f4: 0x0
    ctx->pc = 0x1920f4u;
    // NOP
    // 0x1920f8: 0x0
    ctx->pc = 0x1920f8u;
    // NOP
    // 0x1920fc: 0x0
    ctx->pc = 0x1920fcu;
    // NOP
    // 0x192100: 0x80489b6
    ctx->pc = 0x192100u;
    ctx->pc = 0x1226D8u;
    entry_1226d8_0x1226f0(rdram, ctx, runtime); return;
    ctx->pc = 0x192108u;
    // 0x192108: 0x0
    ctx->pc = 0x192108u;
    // NOP
    // 0x19210c: 0x0
    ctx->pc = 0x19210cu;
    // NOP
    // 0x192110: 0x27bdffe0
    ctx->pc = 0x192110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192114: 0x3c023f80
    ctx->pc = 0x192114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x192118: 0xffbf0010
    ctx->pc = 0x192118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19211c: 0xe7b40000
    ctx->pc = 0x19211cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192120: 0x46006506
    ctx->pc = 0x192120u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x192124: 0x4600a007
    ctx->pc = 0x192124u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x192128: 0x46140042
    ctx->pc = 0x192128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19212c: 0x44820000
    ctx->pc = 0x19212cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x192130: 0xc064888
    ctx->pc = 0x192130u;
    SET_GPR_U32(ctx, 31, 0x192138u);
    ctx->pc = 0x192134u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x192220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192220_0x192220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192138u; }
    }
    if (ctx->pc != 0x192138u) { return; }
    ctx->pc = 0x192138u;
    // 0x192138: 0x0
    ctx->pc = 0x192138u;
    // NOP
    // 0x19213c: 0x0
    ctx->pc = 0x19213cu;
    // NOP
    // 0x192140: 0x4600a303
    ctx->pc = 0x192140u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x192144: 0x0
    ctx->pc = 0x192144u;
    // NOP
    // 0x192148: 0x0
    ctx->pc = 0x192148u;
    // NOP
    // 0x19214c: 0xc06485c
    ctx->pc = 0x19214Cu;
    SET_GPR_U32(ctx, 31, 0x192154u);
    ctx->pc = 0x192170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192170_0x192170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192154u; }
    }
    if (ctx->pc != 0x192154u) { return; }
    ctx->pc = 0x192154u;
    // 0x192154: 0xdfbf0010
    ctx->pc = 0x192154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192158: 0xc7b40000
    ctx->pc = 0x192158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19215c: 0x3e00008
    ctx->pc = 0x19215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1920A0u: goto label_1920a0;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920E0u: goto label_1920e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192164u;
    // 0x192164: 0x0
    ctx->pc = 0x192164u;
    // NOP
    // 0x192168: 0x0
    ctx->pc = 0x192168u;
    // NOP
    // 0x19216c: 0x0
    ctx->pc = 0x19216cu;
    // NOP
}
