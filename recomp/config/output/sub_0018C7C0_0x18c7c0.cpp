#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C7C0
// Address: 0x18c7c0 - 0x18c7f0
void sub_0018C7C0_0x18c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c7c0u;

    // 0x18c7c0: 0x3c037000
    ctx->pc = 0x18c7c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x18c7c4: 0x7c800000
    ctx->pc = 0x18c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18c7c8: 0xa31821
    ctx->pc = 0x18c7c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18c7cc: 0x24020001
    ctx->pc = 0x18c7ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c7d0: 0x14c20005
    ctx->pc = 0x18C7D0u;
    {
        const bool branch_taken_0x18c7d0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x18C7D4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x18c7d0) {
            ctx->pc = 0x18C7E8u;
            goto label_18c7e8;
        }
    }
    ctx->pc = 0x18C7D8u;
    // 0x18c7d8: 0x8c830000
    ctx->pc = 0x18c7d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c7dc: 0x3c028000
    ctx->pc = 0x18c7dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c7e0: 0x621025
    ctx->pc = 0x18c7e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c7e4: 0xac820000
    ctx->pc = 0x18c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18c7e8:
    // 0x18c7e8: 0x3e00008
    ctx->pc = 0x18C7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C7ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C7E8u: goto label_18c7e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C7F0u;
}
