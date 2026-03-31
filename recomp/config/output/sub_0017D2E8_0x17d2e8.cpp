#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D2E8
// Address: 0x17d2e8 - 0x17d2f8
void sub_0017D2E8_0x17d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d2e8u;

    // 0x17d2e8: 0x3e00008
    ctx->pc = 0x17D2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2ECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D2F0u;
    // 0x17d2f0: 0x3e00008
    ctx->pc = 0x17D2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D2F8u;
}
