#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d478
// Address: 0x17d478 - 0x17d480
void entry_17d478_0x17d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d478u;

    // 0x17d478: 0x3e00008
    ctx->pc = 0x17D478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D47Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D480u;
}
