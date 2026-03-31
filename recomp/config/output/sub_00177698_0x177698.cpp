#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177698
// Address: 0x177698 - 0x1776e0
void sub_00177698_0x177698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177698u;

    // 0x177698: 0x24020008
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17769c: 0xac800004
    ctx->pc = 0x17769cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1776a0: 0xac800000
    ctx->pc = 0x1776a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1776a4: 0x24030002
    ctx->pc = 0x1776a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1776a8: 0xac85000c
    ctx->pc = 0x1776a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1776ac: 0x24050008
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1776b0: 0xac820010
    ctx->pc = 0x1776b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1776b4: 0x2482001c
    ctx->pc = 0x1776b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 28));
label_1776b8:
    // 0x1776b8: 0x2463ffff
    ctx->pc = 0x1776b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1776bc: 0xac450000
    ctx->pc = 0x1776bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1776c0: 0x0
    ctx->pc = 0x1776c0u;
    // NOP
    // 0x1776c4: 0x0
    ctx->pc = 0x1776c4u;
    // NOP
    // 0x1776c8: 0x0
    ctx->pc = 0x1776c8u;
    // NOP
    // 0x1776cc: 0x461fffa
    ctx->pc = 0x1776CCu;
    {
        const bool branch_taken_0x1776cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1776D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x1776cc) {
            ctx->pc = 0x1776B8u;
            goto label_1776b8;
        }
    }
    ctx->pc = 0x1776D4u;
    // 0x1776d4: 0x2402ffff
    ctx->pc = 0x1776d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1776d8: 0x3e00008
    ctx->pc = 0x1776D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1776DCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1776B8u: goto label_1776b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1776E0u;
}
