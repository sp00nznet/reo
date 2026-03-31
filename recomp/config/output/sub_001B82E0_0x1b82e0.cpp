#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B82E0
// Address: 0x1b82e0 - 0x1b8360
void sub_001B82E0_0x1b82e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b82e0u;

    // 0x1b82e0: 0x27bdfff0
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b82e4: 0x3c010032
    ctx->pc = 0x1b82e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b82e8: 0xffbf0000
    ctx->pc = 0x1b82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b82ec: 0x902243ca
    ctx->pc = 0x1b82ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17354)));
    // 0x1b82f0: 0x4400004
    ctx->pc = 0x1B82F0u;
    {
        const bool branch_taken_0x1b82f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B82F4u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1b82f0) {
            ctx->pc = 0x1B8304u;
            goto label_1b8304;
        }
    }
    ctx->pc = 0x1B82F8u;
    // 0x1b82f8: 0x44820000
    ctx->pc = 0x1b82f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b82fc: 0x10000007
    ctx->pc = 0x1B82FCu;
    {
        const bool branch_taken_0x1b82fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8300u;
        ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1b82fc) {
            ctx->pc = 0x1B831Cu;
            goto label_1b831c;
        }
    }
    ctx->pc = 0x1B8304u;
label_1b8304:
    // 0x1b8304: 0x30420001
    ctx->pc = 0x1b8304u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1b8308: 0x621825
    ctx->pc = 0x1b8308u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b830c: 0x44830000
    ctx->pc = 0x1b830cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1b8310: 0x0
    ctx->pc = 0x1b8310u;
    // NOP
    // 0x1b8314: 0x468000a0
    ctx->pc = 0x1b8314u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1b8318: 0x46021080
    ctx->pc = 0x1b8318u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b831c:
    // 0x1b831c: 0x3c0340e0
    ctx->pc = 0x1b831cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16608 << 16));
    // 0x1b8320: 0x3c024380
    ctx->pc = 0x1b8320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17280 << 16));
    // 0x1b8324: 0x44830800
    ctx->pc = 0x1b8324u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1b8328: 0x44820000
    ctx->pc = 0x1b8328u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b832c: 0x0
    ctx->pc = 0x1b832cu;
    // NOP
    // 0x1b8330: 0x46011043
    ctx->pc = 0x1b8330u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1b8334: 0x46010002
    ctx->pc = 0x1b8334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b8338: 0x46000024
    ctx->pc = 0x1b8338u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1b833c: 0x44050000
    ctx->pc = 0x1b833cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1b8340: 0xc06b3ac
    ctx->pc = 0x1B8340u;
    SET_GPR_U32(ctx, 31, 0x1B8348u);
    ctx->pc = 0x1B8344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ACEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACEB0_0x1aceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8348u; }
    }
    if (ctx->pc != 0x1B8348u) { return; }
    ctx->pc = 0x1B8348u;
    // 0x1b8348: 0xc06e654
    ctx->pc = 0x1B8348u;
    SET_GPR_U32(ctx, 31, 0x1B8350u);
    ctx->pc = 0x1B9950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9950_0x1b9950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8350u; }
    }
    if (ctx->pc != 0x1B8350u) { return; }
    ctx->pc = 0x1B8350u;
    // 0x1b8350: 0xdfbf0000
    ctx->pc = 0x1b8350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8354: 0x3e00008
    ctx->pc = 0x1B8354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8358u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8304u: goto label_1b8304;
            case 0x1B831Cu: goto label_1b831c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B835Cu;
    // 0x1b835c: 0x0
    ctx->pc = 0x1b835cu;
    // NOP
}
