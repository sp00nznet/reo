#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370140
// Address: 0x370140 - 0x3701a0
void sub_00370140_0x370140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370140u;

    // 0x370140: 0x27bdfff0
    ctx->pc = 0x370140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370144: 0xffbf0000
    ctx->pc = 0x370144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370148: 0x44800000
    ctx->pc = 0x370148u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x37014c: 0xc4a20008
    ctx->pc = 0x37014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370150: 0xc4810008
    ctx->pc = 0x370150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370154: 0xc4a40000
    ctx->pc = 0x370154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370158: 0xc4830000
    ctx->pc = 0x370158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37015c: 0x46011341
    ctx->pc = 0x37015cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x370160: 0x460d0032
    ctx->pc = 0x370160u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370164: 0x45000003
    ctx->pc = 0x370164u;
    {
        const bool branch_taken_0x370164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370168u;
        ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        if (branch_taken_0x370164) {
            ctx->pc = 0x370174u;
            goto label_370174;
        }
    }
    ctx->pc = 0x37016Cu;
    // 0x37016c: 0x3c010039
    ctx->pc = 0x37016cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x370170: 0xc42db288
    ctx->pc = 0x370170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_370174:
    // 0x370174: 0xc064860
    ctx->pc = 0x370174u;
    SET_GPR_U32(ctx, 31, 0x37017Cu);
    ctx->pc = 0x192180u;
    {
        auto targetFn = runtime->lookupFunction(0x192180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37017Cu; }
        if (ctx->pc != 0x37017Cu) { return; }
    }
    ctx->pc = 0x37017Cu;
    // 0x37017c: 0xc0647bc
    ctx->pc = 0x37017Cu;
    SET_GPR_U32(ctx, 31, 0x370184u);
    ctx->pc = 0x370180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370184u; }
        if (ctx->pc != 0x370184u) { return; }
    }
    ctx->pc = 0x370184u;
    // 0x370184: 0xdfbf0000
    ctx->pc = 0x370184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370188: 0x3042ffff
    ctx->pc = 0x370188u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x37018c: 0x3e00008
    ctx->pc = 0x37018Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x370174u: goto label_370174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370194u;
    // 0x370194: 0x0
    ctx->pc = 0x370194u;
    // NOP
    // 0x370198: 0x0
    ctx->pc = 0x370198u;
    // NOP
    // 0x37019c: 0x0
    ctx->pc = 0x37019cu;
    // NOP
}
