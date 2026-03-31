#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00102498
// Address: 0x102498 - 0x1024e0
void sub_00102498_0x102498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102498u;

    // 0x102498: 0x4843e800
    ctx->pc = 0x102498u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
    // 0x10249c: 0x30620200
    ctx->pc = 0x10249cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
    // 0x1024a0: 0x10400003
    ctx->pc = 0x1024A0u;
    {
        const bool branch_taken_0x1024a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1024A4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1024));
        if (branch_taken_0x1024a0) {
            ctx->pc = 0x1024B0u;
            goto label_1024b0;
        }
    }
    ctx->pc = 0x1024A8u;
    // 0x1024a8: 0x1000000b
    ctx->pc = 0x1024A8u;
    {
        const bool branch_taken_0x1024a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1024ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1024a8) {
            ctx->pc = 0x1024D8u;
            goto label_1024d8;
        }
    }
    ctx->pc = 0x1024B0u;
label_1024b0:
    // 0x1024b0: 0x10400003
    ctx->pc = 0x1024B0u;
    {
        const bool branch_taken_0x1024b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1024B4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
        if (branch_taken_0x1024b0) {
            ctx->pc = 0x1024C0u;
            goto label_1024c0;
        }
    }
    ctx->pc = 0x1024B8u;
    // 0x1024b8: 0x10000007
    ctx->pc = 0x1024B8u;
    {
        const bool branch_taken_0x1024b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1024BCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1024b8) {
            ctx->pc = 0x1024D8u;
            goto label_1024d8;
        }
    }
    ctx->pc = 0x1024C0u;
label_1024c0:
    // 0x1024c0: 0x10400003
    ctx->pc = 0x1024C0u;
    {
        const bool branch_taken_0x1024c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1024C4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x1024c0) {
            ctx->pc = 0x1024D0u;
            goto label_1024d0;
        }
    }
    ctx->pc = 0x1024C8u;
    // 0x1024c8: 0x10000003
    ctx->pc = 0x1024C8u;
    {
        const bool branch_taken_0x1024c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1024CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1024c8) {
            ctx->pc = 0x1024D8u;
            goto label_1024d8;
        }
    }
    ctx->pc = 0x1024D0u;
label_1024d0:
    // 0x1024d0: 0x24030004
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1024d4: 0x2180a
    ctx->pc = 0x1024d4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_1024d8:
    // 0x1024d8: 0x3e00008
    ctx->pc = 0x1024D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1024DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1024B0u: goto label_1024b0;
            case 0x1024C0u: goto label_1024c0;
            case 0x1024D0u: goto label_1024d0;
            case 0x1024D8u: goto label_1024d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1024E0u;
}
