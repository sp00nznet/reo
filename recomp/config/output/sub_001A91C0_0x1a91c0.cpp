#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A91C0
// Address: 0x1a91c0 - 0x1a91d0
void sub_001A91C0_0x1a91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a91c0u;

    // 0x1a91c0: 0x3e00008
    ctx->pc = 0x1A91C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A91C8u;
    // 0x1a91c8: 0x0
    ctx->pc = 0x1a91c8u;
    // NOP
    // 0x1a91cc: 0x0
    ctx->pc = 0x1a91ccu;
    // NOP
}
