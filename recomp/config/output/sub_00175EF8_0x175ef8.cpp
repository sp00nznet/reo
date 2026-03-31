#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175EF8
// Address: 0x175ef8 - 0x175f20
void sub_00175EF8_0x175ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175ef8u;

    // 0x175ef8: 0x8ca30288
    ctx->pc = 0x175ef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 648)));
    // 0x175efc: 0x2406ffff
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175f00: 0x10660004
    ctx->pc = 0x175F00u;
    {
        const bool branch_taken_0x175f00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x175F04u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175f00) {
            ctx->pc = 0x175F14u;
            goto label_175f14;
        }
    }
    ctx->pc = 0x175F08u;
    // 0x175f08: 0x8c82004c
    ctx->pc = 0x175f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x175f0c: 0x38420004
    ctx->pc = 0x175f0cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
    // 0x175f10: 0x2c420001
    ctx->pc = 0x175f10u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_175f14:
    // 0x175f14: 0x3e00008
    ctx->pc = 0x175F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175F14u: goto label_175f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175F1Cu;
    // 0x175f1c: 0x0
    ctx->pc = 0x175f1cu;
    // NOP
}
