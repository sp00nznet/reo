#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_122e70
// Address: 0x122e70 - 0x122e90
void entry_122e70_0x122e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122e70u;

    // 0x122e70: 0x24020600
    ctx->pc = 0x122e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1536));
    // 0x122e74: 0xac8500c0
    ctx->pc = 0x122e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
    // 0x122e78: 0xa2001a
    ctx->pc = 0x122e78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x122e7c: 0x50400001
    ctx->pc = 0x122E7Cu;
    {
        const bool branch_taken_0x122e7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x122e7c) {
            ctx->pc = 0x122E80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x122E84u;
            goto label_122e84;
        }
    }
    ctx->pc = 0x122E84u;
label_122e84:
    // 0x122e84: 0x1812
    ctx->pc = 0x122e84u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x122e88: 0x3e00008
    ctx->pc = 0x122E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E84u: goto label_122e84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E90u;
}
