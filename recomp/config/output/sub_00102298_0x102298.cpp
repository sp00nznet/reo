#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00102298
// Address: 0x102298 - 0x1022c8
void sub_00102298_0x102298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102298u;

    // 0x102298: 0x4843e800
    ctx->pc = 0x102298u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
    // 0x10229c: 0x24040001
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1022a0: 0x3062000f
    ctx->pc = 0x1022a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x1022a4: 0x14440003
    ctx->pc = 0x1022A4u;
    {
        const bool branch_taken_0x1022a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1022A8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3840));
        if (branch_taken_0x1022a4) {
            ctx->pc = 0x1022B4u;
            goto label_1022b4;
        }
    }
    ctx->pc = 0x1022ACu;
    // 0x1022ac: 0x3e00008
    ctx->pc = 0x1022ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1022B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1022B4u: goto label_1022b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1022B4u;
label_1022b4:
    // 0x1022b4: 0x80102d
    ctx->pc = 0x1022b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022b8: 0x38630100
    ctx->pc = 0x1022b8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 256));
    // 0x1022bc: 0x3e00008
    ctx->pc = 0x1022BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1022C0u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1022B4u: goto label_1022b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1022C4u;
    // 0x1022c4: 0x0
    ctx->pc = 0x1022c4u;
    // NOP
}
