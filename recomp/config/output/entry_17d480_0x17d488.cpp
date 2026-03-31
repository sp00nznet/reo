#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d480
// Address: 0x17d480 - 0x17d488
void entry_17d480_0x17d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d480u;

    // 0x17d480: 0x3e00008
    ctx->pc = 0x17D480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D484u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D488u;
}
