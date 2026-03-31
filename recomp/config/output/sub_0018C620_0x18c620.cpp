#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C620
// Address: 0x18c620 - 0x18c680
void sub_0018C620_0x18c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c620u;

    // 0x18c620: 0x3c037000
    ctx->pc = 0x18c620u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x18c624: 0x6493c
    ctx->pc = 0x18c624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
    // 0x18c628: 0xc31024
    ctx->pc = 0x18c628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18c62c: 0x9493e
    ctx->pc = 0x18c62cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 4));
    // 0x18c630: 0x14430002
    ctx->pc = 0x18C630u;
    {
        const bool branch_taken_0x18c630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18C634u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c630) {
            ctx->pc = 0x18C63Cu;
            goto label_18c63c;
        }
    }
    ctx->pc = 0x18C638u;
    // 0x18c638: 0x3c088000
    ctx->pc = 0x18c638u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32768 << 16));
label_18c63c:
    // 0x18c63c: 0x3c062000
    ctx->pc = 0x18c63cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x18c640: 0x7c800000
    ctx->pc = 0x18c640u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18c644: 0xa62821
    ctx->pc = 0x18c644u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18c648: 0x1281825
    ctx->pc = 0x18c648u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18c64c: 0xac850000
    ctx->pc = 0x18c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18c650: 0x24020001
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c654: 0x14e20005
    ctx->pc = 0x18C654u;
    {
        const bool branch_taken_0x18c654 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x18C658u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x18c654) {
            ctx->pc = 0x18C66Cu;
            goto label_18c66c;
        }
    }
    ctx->pc = 0x18C65Cu;
    // 0x18c65c: 0x8c830000
    ctx->pc = 0x18c65cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c660: 0x3c028000
    ctx->pc = 0x18c660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c664: 0x621025
    ctx->pc = 0x18c664u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c668: 0xac820000
    ctx->pc = 0x18c668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18c66c:
    // 0x18c66c: 0x3e00008
    ctx->pc = 0x18C66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C670u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C63Cu: goto label_18c63c;
            case 0x18C66Cu: goto label_18c66c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C674u;
    // 0x18c674: 0x0
    ctx->pc = 0x18c674u;
    // NOP
    // 0x18c678: 0x0
    ctx->pc = 0x18c678u;
    // NOP
    // 0x18c67c: 0x0
    ctx->pc = 0x18c67cu;
    // NOP
}
