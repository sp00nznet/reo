#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_189a50
// Address: 0x189a50 - 0x189a70
void entry_189a50_0x189a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189a50u;

    // 0x189a50: 0x51080
    ctx->pc = 0x189a50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x189a54: 0x441821
    ctx->pc = 0x189a54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189a58: 0x8c63000c
    ctx->pc = 0x189a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x189a5c: 0x24020001
    ctx->pc = 0x189a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a60: 0xacc30000
    ctx->pc = 0x189a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x189a64: 0x3e00008
    ctx->pc = 0x189A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189A68u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189A6Cu;
    // 0x189a6c: 0x0
    ctx->pc = 0x189a6cu;
    // NOP
}
