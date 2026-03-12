#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003701A0
// Address: 0x3701a0 - 0x370220
void sub_003701A0_0x3701a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3701a0u;

    // 0x3701a0: 0x27bdffe0
    ctx->pc = 0x3701a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3701a4: 0xffbf0010
    ctx->pc = 0x3701a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3701a8: 0xe7b40000
    ctx->pc = 0x3701a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3701ac: 0xc4a50000
    ctx->pc = 0x3701acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3701b0: 0xc4840000
    ctx->pc = 0x3701b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3701b4: 0xc4a10008
    ctx->pc = 0x3701b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3701b8: 0xc4800008
    ctx->pc = 0x3701b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3701bc: 0xc4a30004
    ctx->pc = 0x3701bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3701c0: 0xc4820004
    ctx->pc = 0x3701c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3701c4: 0x46042901
    ctx->pc = 0x3701c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3701c8: 0x46000801
    ctx->pc = 0x3701c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3701cc: 0x4604201a
    ctx->pc = 0x3701ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3701d0: 0x46021d01
    ctx->pc = 0x3701d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3701d4: 0xc0dc62c
    ctx->pc = 0x3701D4u;
    SET_GPR_U32(ctx, 31, 0x3701DCu);
    ctx->pc = 0x3701D8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x3718B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003718B0_0x3718b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3701DCu; }
    }
    if (ctx->pc != 0x3701DCu) { return; }
    ctx->pc = 0x3701DCu;
    // 0x3701dc: 0x44800800
    ctx->pc = 0x3701dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x3701e0: 0x0
    ctx->pc = 0x3701e0u;
    // NOP
    // 0x3701e4: 0x46000832
    ctx->pc = 0x3701e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3701e8: 0x45000003
    ctx->pc = 0x3701E8u;
    {
        const bool branch_taken_0x3701e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3701ECu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x3701e8) {
            ctx->pc = 0x3701F8u;
            goto label_3701f8;
        }
    }
    ctx->pc = 0x3701F0u;
    // 0x3701f0: 0x3c010039
    ctx->pc = 0x3701f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3701f4: 0xc420b288
    ctx->pc = 0x3701f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3701f8:
    // 0x3701f8: 0xc064860
    ctx->pc = 0x3701F8u;
    SET_GPR_U32(ctx, 31, 0x370200u);
    ctx->pc = 0x3701FCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x192180u;
    {
        auto targetFn = runtime->lookupFunction(0x192180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370200u; }
        if (ctx->pc != 0x370200u) { return; }
    }
    ctx->pc = 0x370200u;
    // 0x370200: 0xc0647bc
    ctx->pc = 0x370200u;
    SET_GPR_U32(ctx, 31, 0x370208u);
    ctx->pc = 0x370204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370208u; }
        if (ctx->pc != 0x370208u) { return; }
    }
    ctx->pc = 0x370208u;
    // 0x370208: 0xdfbf0010
    ctx->pc = 0x370208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37020c: 0xc7b40000
    ctx->pc = 0x37020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x370210: 0x3042ffff
    ctx->pc = 0x370210u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x370214: 0x3e00008
    ctx->pc = 0x370214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370218u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3701F8u: goto label_3701f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37021Cu;
    // 0x37021c: 0x0
    ctx->pc = 0x37021cu;
    // NOP
}
