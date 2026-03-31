#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101F60
// Address: 0x101f60 - 0x101fa0
void sub_00101F60_0x101f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101f60u;

    // 0x101f60: 0x4843e800
    ctx->pc = 0x101f60u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
    // 0x101f64: 0x30620002
    ctx->pc = 0x101f64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x101f68: 0x10400003
    ctx->pc = 0x101F68u;
    {
        const bool branch_taken_0x101f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101F6Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x101f68) {
            ctx->pc = 0x101F78u;
            goto label_101f78;
        }
    }
    ctx->pc = 0x101F70u;
    // 0x101f70: 0x3e00008
    ctx->pc = 0x101F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F78u: goto label_101f78;
            case 0x101F88u: goto label_101f88;
            case 0x101F98u: goto label_101f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F78u;
label_101f78:
    // 0x101f78: 0x10400003
    ctx->pc = 0x101F78u;
    {
        const bool branch_taken_0x101f78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101F7Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x101f78) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F80u;
    // 0x101f80: 0x3e00008
    ctx->pc = 0x101F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F78u: goto label_101f78;
            case 0x101F88u: goto label_101f88;
            case 0x101F98u: goto label_101f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x10400003
    ctx->pc = 0x101F88u;
    {
        const bool branch_taken_0x101f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101F8Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x101f88) {
            ctx->pc = 0x101F98u;
            goto label_101f98;
        }
    }
    ctx->pc = 0x101F90u;
    // 0x101f90: 0x3e00008
    ctx->pc = 0x101F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F78u: goto label_101f78;
            case 0x101F88u: goto label_101f88;
            case 0x101F98u: goto label_101f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F98u;
label_101f98:
    // 0x101f98: 0x3e00008
    ctx->pc = 0x101F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F9Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F78u: goto label_101f78;
            case 0x101F88u: goto label_101f88;
            case 0x101F98u: goto label_101f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101FA0u;
}
