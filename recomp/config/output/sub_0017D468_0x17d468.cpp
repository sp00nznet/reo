#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D468
// Address: 0x17d468 - 0x17d490
void sub_0017D468_0x17d468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d468u;

    // 0x17d468: 0x3e00008
    ctx->pc = 0x17D468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D46Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D470u;
    // 0x17d470: 0x3e00008
    ctx->pc = 0x17D470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D474u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D478u;
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
    // 0x17d488: 0x3e00008
    ctx->pc = 0x17D488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D48Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D490u;
}
