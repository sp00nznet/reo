#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d2d8
// Address: 0x17d2d8 - 0x17d2e8
void entry_17d2d8_0x17d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d2d8u;

    // 0x17d2d8: 0x52880
    ctx->pc = 0x17d2d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17d2dc: 0xa42821
    ctx->pc = 0x17d2dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17d2e0: 0x3e00008
    ctx->pc = 0x17D2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D2E8u;
}
