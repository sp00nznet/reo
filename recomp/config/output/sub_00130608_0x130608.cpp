#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130608
// Address: 0x130608 - 0x130620
void sub_00130608_0x130608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130608u;

    // 0x130608: 0x8c830008
    ctx->pc = 0x130608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13060c: 0x10600002
    ctx->pc = 0x13060Cu;
    {
        const bool branch_taken_0x13060c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x130610u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13060c) {
            ctx->pc = 0x130618u;
            goto label_130618;
        }
    }
    ctx->pc = 0x130614u;
    // 0x130614: 0x8c820054
    ctx->pc = 0x130614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_130618:
    // 0x130618: 0x3e00008
    ctx->pc = 0x130618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130618u: goto label_130618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130620u;
}
