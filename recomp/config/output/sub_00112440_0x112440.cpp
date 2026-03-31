#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112440
// Address: 0x112440 - 0x112470
void sub_00112440_0x112440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112440u;

    // 0x112440: 0x27bdffd0
    ctx->pc = 0x112440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x112444: 0xafa40000
    ctx->pc = 0x112444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x112448: 0x3a0202d
    ctx->pc = 0x112448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11244c: 0xffbf0020
    ctx->pc = 0x11244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x112450: 0xafa50004
    ctx->pc = 0x112450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x112454: 0xafa60008
    ctx->pc = 0x112454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x112458: 0xc04463e
    ctx->pc = 0x112458u;
    SET_GPR_U32(ctx, 31, 0x112460u);
    ctx->pc = 0x11245Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->pc = 0x1118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118F8_0x1118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112460u; }
    }
    if (ctx->pc != 0x112460u) { return; }
    ctx->pc = 0x112460u;
    // 0x112460: 0xdfbf0020
    ctx->pc = 0x112460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112464: 0x3e00008
    ctx->pc = 0x112464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11246Cu;
    // 0x11246c: 0x0
    ctx->pc = 0x11246cu;
    // NOP
}
