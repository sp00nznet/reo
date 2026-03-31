#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E550
// Address: 0x12e550 - 0x12e588
void sub_0012E550_0x12e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e550u;

    // 0x12e550: 0x52840
    ctx->pc = 0x12e550u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x12e554: 0x102d
    ctx->pc = 0x12e554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e558: 0x10800002
    ctx->pc = 0x12E558u;
    {
        const bool branch_taken_0x12e558 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E55Cu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x12e558) {
            ctx->pc = 0x12E564u;
            goto label_12e564;
        }
    }
    ctx->pc = 0x12E560u;
    // 0x12e560: 0x84a20018
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_12e564:
    // 0x12e564: 0x3e00008
    ctx->pc = 0x12E564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E564u: goto label_12e564;
            case 0x12E580u: goto label_12e580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E56Cu;
    // 0x12e56c: 0x0
    ctx->pc = 0x12e56cu;
    // NOP
    // 0x12e570: 0xa42821
    ctx->pc = 0x12e570u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12e574: 0x10800002
    ctx->pc = 0x12E574u;
    {
        const bool branch_taken_0x12e574 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E578u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e574) {
            ctx->pc = 0x12E580u;
            goto label_12e580;
        }
    }
    ctx->pc = 0x12E57Cu;
    // 0x12e57c: 0x80a20058
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
label_12e580:
    // 0x12e580: 0x3e00008
    ctx->pc = 0x12E580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E564u: goto label_12e564;
            case 0x12E580u: goto label_12e580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E588u;
}
