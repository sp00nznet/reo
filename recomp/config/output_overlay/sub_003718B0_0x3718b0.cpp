#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003718B0
// Address: 0x3718b0 - 0x3718e0
void sub_003718B0_0x3718b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3718b0u;

    // 0x3718b0: 0x44800000
    ctx->pc = 0x3718b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x3718b4: 0x27bdfff0
    ctx->pc = 0x3718b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3718b8: 0x460c0032
    ctx->pc = 0x3718b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3718bc: 0x45000003
    ctx->pc = 0x3718BCu;
    {
        const bool branch_taken_0x3718bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3718C0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x3718bc) {
            ctx->pc = 0x3718CCu;
            goto label_3718cc;
        }
    }
    ctx->pc = 0x3718C4u;
    // 0x3718c4: 0x10000004
    ctx->pc = 0x3718C4u;
    {
        const bool branch_taken_0x3718c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3718C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x3718c4) {
            ctx->pc = 0x3718D8u;
            goto label_3718d8;
        }
    }
    ctx->pc = 0x3718CCu;
label_3718cc:
    // 0x3718cc: 0xc064834
    ctx->pc = 0x3718CCu;
    SET_GPR_U32(ctx, 31, 0x3718D4u);
    ctx->pc = 0x1920D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1920D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3718D4u; }
        if (ctx->pc != 0x3718D4u) { return; }
    }
    ctx->pc = 0x3718D4u;
    // 0x3718d4: 0xdfbf0000
    ctx->pc = 0x3718d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3718d8:
    // 0x3718d8: 0x3e00008
    ctx->pc = 0x3718D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3718DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3718CCu: goto label_3718cc;
            case 0x3718D8u: goto label_3718d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3718E0u;
}
