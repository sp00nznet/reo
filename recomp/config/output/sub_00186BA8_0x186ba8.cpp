#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186BA8
// Address: 0x186ba8 - 0x186be0
void sub_00186BA8_0x186ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186ba8u;

    // 0x186ba8: 0x3c020028
    ctx->pc = 0x186ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x186bac: 0x2404ffff
    ctx->pc = 0x186bacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186bb0: 0x24427080
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28800));
    // 0x186bb4: 0x24030001
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_186bb8:
    // 0x186bb8: 0x2463ffff
    ctx->pc = 0x186bb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x186bbc: 0xac440000
    ctx->pc = 0x186bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x186bc0: 0xac40000c
    ctx->pc = 0x186bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x186bc4: 0x0
    ctx->pc = 0x186bc4u;
    // NOP
    // 0x186bc8: 0x0
    ctx->pc = 0x186bc8u;
    // NOP
    // 0x186bcc: 0x461fffa
    ctx->pc = 0x186BCCu;
    {
        const bool branch_taken_0x186bcc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x186BD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8208));
        if (branch_taken_0x186bcc) {
            ctx->pc = 0x186BB8u;
            goto label_186bb8;
        }
    }
    ctx->pc = 0x186BD4u;
    // 0x186bd4: 0x3e00008
    ctx->pc = 0x186BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186BD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186BB8u: goto label_186bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186BDCu;
    // 0x186bdc: 0x0
    ctx->pc = 0x186bdcu;
    // NOP
}
