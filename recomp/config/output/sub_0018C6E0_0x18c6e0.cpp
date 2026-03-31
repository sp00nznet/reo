#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C6E0
// Address: 0x18c6e0 - 0x18c730
void sub_0018C6E0_0x18c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c6e0u;

    // 0x18c6e0: 0x3c037000
    ctx->pc = 0x18c6e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x18c6e4: 0x6493c
    ctx->pc = 0x18c6e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
    // 0x18c6e8: 0xc31024
    ctx->pc = 0x18c6e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18c6ec: 0x9493e
    ctx->pc = 0x18c6ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 4));
    // 0x18c6f0: 0x14430002
    ctx->pc = 0x18C6F0u;
    {
        const bool branch_taken_0x18c6f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18C6F4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c6f0) {
            ctx->pc = 0x18C6FCu;
            goto label_18c6fc;
        }
    }
    ctx->pc = 0x18C6F8u;
    // 0x18c6f8: 0x3c088000
    ctx->pc = 0x18c6f8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32768 << 16));
label_18c6fc:
    // 0x18c6fc: 0x7c800000
    ctx->pc = 0x18c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18c700: 0x1281825
    ctx->pc = 0x18c700u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18c704: 0xac850000
    ctx->pc = 0x18c704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18c708: 0x24020001
    ctx->pc = 0x18c708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c70c: 0x14e20005
    ctx->pc = 0x18C70Cu;
    {
        const bool branch_taken_0x18c70c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x18C710u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x18c70c) {
            ctx->pc = 0x18C724u;
            goto label_18c724;
        }
    }
    ctx->pc = 0x18C714u;
    // 0x18c714: 0x8c830000
    ctx->pc = 0x18c714u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c718: 0x3c028000
    ctx->pc = 0x18c718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c71c: 0x621025
    ctx->pc = 0x18c71cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c720: 0xac820000
    ctx->pc = 0x18c720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18c724:
    // 0x18c724: 0x3e00008
    ctx->pc = 0x18C724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C728u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C6FCu: goto label_18c6fc;
            case 0x18C724u: goto label_18c724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C72Cu;
    // 0x18c72c: 0x0
    ctx->pc = 0x18c72cu;
    // NOP
}
