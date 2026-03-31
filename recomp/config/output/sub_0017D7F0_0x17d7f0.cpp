#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D7F0
// Address: 0x17d7f0 - 0x17d800
void sub_0017D7F0_0x17d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d7f0u;

    // 0x17d7f0: 0xac800040
    ctx->pc = 0x17d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x17d7f4: 0x3e00008
    ctx->pc = 0x17D7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D7F8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D7FCu;
    // 0x17d7fc: 0x0
    ctx->pc = 0x17d7fcu;
    // NOP
}
