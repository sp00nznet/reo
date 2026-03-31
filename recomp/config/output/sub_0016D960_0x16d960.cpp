#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D960
// Address: 0x16d960 - 0x16d988
void sub_0016D960_0x16d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d960u;

    // 0x16d960: 0x2482000c
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 12));
    // 0x16d964: 0x2403ffff
    ctx->pc = 0x16d964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d968: 0xac800008
    ctx->pc = 0x16d968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x16d96c: 0xac800000
    ctx->pc = 0x16d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16d970: 0xac800004
    ctx->pc = 0x16d970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x16d974: 0xac400004
    ctx->pc = 0x16d974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x16d978: 0xac430008
    ctx->pc = 0x16d978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16d97c: 0x3e00008
    ctx->pc = 0x16D97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D980u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D984u;
    // 0x16d984: 0x0
    ctx->pc = 0x16d984u;
    // NOP
}
