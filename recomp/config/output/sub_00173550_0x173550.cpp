#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173550
// Address: 0x173550 - 0x173570
void sub_00173550_0x173550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173550u;

    // 0x173550: 0x8c830004
    ctx->pc = 0x173550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173554: 0x10600004
    ctx->pc = 0x173554u;
    {
        const bool branch_taken_0x173554 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x173554) {
            ctx->pc = 0x173568u;
            goto label_173568;
        }
    }
    ctx->pc = 0x17355Cu;
    // 0x17355c: 0x8c830040
    ctx->pc = 0x17355cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x173560: 0x2c632ba0
    ctx->pc = 0x173560u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 11168));
    // 0x173564: 0x3100a
    ctx->pc = 0x173564u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_173568:
    // 0x173568: 0x3e00008
    ctx->pc = 0x173568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173568u: goto label_173568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173570u;
}
