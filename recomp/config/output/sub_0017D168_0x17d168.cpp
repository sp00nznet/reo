#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D168
// Address: 0x17d168 - 0x17d178
void sub_0017D168_0x17d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d168u;

    // 0x17d168: 0x2882181f
    ctx->pc = 0x17d168u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6175));
    // 0x17d16c: 0x3e00008
    ctx->pc = 0x17D16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D170u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D174u;
    // 0x17d174: 0x0
    ctx->pc = 0x17d174u;
    // NOP
}
