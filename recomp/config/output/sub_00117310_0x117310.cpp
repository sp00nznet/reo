#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117310
// Address: 0x117310 - 0x117340
void sub_00117310_0x117310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117310u;

    // 0x117310: 0x8c850024
    ctx->pc = 0x117310u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x117314: 0x8c830018
    ctx->pc = 0x117314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x117318: 0xa3001a
    ctx->pc = 0x117318u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11731c: 0x50600001
    ctx->pc = 0x11731Cu;
    {
        const bool branch_taken_0x11731c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11731c) {
            ctx->pc = 0x117320u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x117324u;
            goto label_117324;
        }
    }
    ctx->pc = 0x117324u;
label_117324:
    // 0x117324: 0x8c850014
    ctx->pc = 0x117324u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x117328: 0x1010
    ctx->pc = 0x117328u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x11732c: 0x24430001
    ctx->pc = 0x11732cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x117330: 0x21180
    ctx->pc = 0x117330u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x117334: 0xac830024
    ctx->pc = 0x117334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x117338: 0x3e00008
    ctx->pc = 0x117338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11733Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117324u: goto label_117324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117340u;
}
