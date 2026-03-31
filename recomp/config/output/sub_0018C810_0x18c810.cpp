#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C810
// Address: 0x18c810 - 0x18c850
void sub_0018C810_0x18c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c810u;

    // 0x18c810: 0x51400
    ctx->pc = 0x18c810u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x18c814: 0x34c38000
    ctx->pc = 0x18c814u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), 32768));
    // 0x18c818: 0x621825
    ctx->pc = 0x18c818u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c81c: 0xac800000
    ctx->pc = 0x18c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18c820: 0x3c026c00
    ctx->pc = 0x18c820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27648 << 16));
    // 0x18c824: 0x3c050100
    ctx->pc = 0x18c824u;
    SET_GPR_U32(ctx, 5, ((uint32_t)256 << 16));
    // 0x18c828: 0x621825
    ctx->pc = 0x18c828u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c82c: 0xac800004
    ctx->pc = 0x18c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18c830: 0x34a20404
    ctx->pc = 0x18c830u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 1028));
    // 0x18c834: 0xac820008
    ctx->pc = 0x18c834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x18c838: 0x24820010
    ctx->pc = 0x18c838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x18c83c: 0x3e00008
    ctx->pc = 0x18C83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C840u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C844u;
    // 0x18c844: 0x0
    ctx->pc = 0x18c844u;
    // NOP
    // 0x18c848: 0x0
    ctx->pc = 0x18c848u;
    // NOP
    // 0x18c84c: 0x0
    ctx->pc = 0x18c84cu;
    // NOP
}
