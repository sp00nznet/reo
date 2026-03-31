#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f0f0
// Address: 0x13f0f0 - 0x13f100
void entry_13f0f0_0x13f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f0f0u;

    // 0x13f0f0: 0x52880
    ctx->pc = 0x13f0f0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f0f4: 0xa42821
    ctx->pc = 0x13f0f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13f0f8: 0x3e00008
    ctx->pc = 0x13F0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F100u;
}
