#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371880
// Address: 0x371880 - 0x3718b0
void sub_00371880_0x371880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371880u;

    // 0x371880: 0x44800000
    ctx->pc = 0x371880u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x371884: 0x27bdfff0
    ctx->pc = 0x371884u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371888: 0x460c0032
    ctx->pc = 0x371888u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37188c: 0x45000003
    ctx->pc = 0x37188Cu;
    {
        const bool branch_taken_0x37188c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x371890u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x37188c) {
            ctx->pc = 0x37189Cu;
            goto label_37189c;
        }
    }
    ctx->pc = 0x371894u;
    // 0x371894: 0x10000004
    ctx->pc = 0x371894u;
    {
        const bool branch_taken_0x371894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x371898u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x371894) {
            ctx->pc = 0x3718A8u;
            goto label_3718a8;
        }
    }
    ctx->pc = 0x37189Cu;
label_37189c:
    // 0x37189c: 0xc064888
    ctx->pc = 0x37189Cu;
    SET_GPR_U32(ctx, 31, 0x3718A4u);
    ctx->pc = 0x192220u;
    {
        auto targetFn = runtime->lookupFunction(0x192220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3718A4u; }
        if (ctx->pc != 0x3718A4u) { return; }
    }
    ctx->pc = 0x3718A4u;
    // 0x3718a4: 0xdfbf0000
    ctx->pc = 0x3718a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3718a8:
    // 0x3718a8: 0x3e00008
    ctx->pc = 0x3718A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3718ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37189Cu: goto label_37189c;
            case 0x3718A8u: goto label_3718a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3718B0u;
}
