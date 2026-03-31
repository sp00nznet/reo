#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C790
// Address: 0x18c790 - 0x18c7c0
void sub_0018C790_0x18c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c790u;

    // 0x18c790: 0x3c036000
    ctx->pc = 0x18c790u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24576 << 16));
    // 0x18c794: 0x7c800000
    ctx->pc = 0x18c794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18c798: 0xa31821
    ctx->pc = 0x18c798u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18c79c: 0x24020001
    ctx->pc = 0x18c79cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c7a0: 0x14c20005
    ctx->pc = 0x18C7A0u;
    {
        const bool branch_taken_0x18c7a0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x18C7A4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x18c7a0) {
            ctx->pc = 0x18C7B8u;
            goto label_18c7b8;
        }
    }
    ctx->pc = 0x18C7A8u;
    // 0x18c7a8: 0x8c830000
    ctx->pc = 0x18c7a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c7ac: 0x3c028000
    ctx->pc = 0x18c7acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c7b0: 0x621025
    ctx->pc = 0x18c7b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c7b4: 0xac820000
    ctx->pc = 0x18c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18c7b8:
    // 0x18c7b8: 0x3e00008
    ctx->pc = 0x18C7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C7BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C7B8u: goto label_18c7b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C7C0u;
}
