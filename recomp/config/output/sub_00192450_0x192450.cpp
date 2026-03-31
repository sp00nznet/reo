#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192450
// Address: 0x192450 - 0x192480
void sub_00192450_0x192450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192450u;

    // 0x192450: 0x27bdfff0
    ctx->pc = 0x192450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192454: 0xffbf0000
    ctx->pc = 0x192454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192458: 0xc063728
    ctx->pc = 0x192458u;
    SET_GPR_U32(ctx, 31, 0x192460u);
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192460u; }
    }
    if (ctx->pc != 0x192460u) { return; }
    ctx->pc = 0x192460u;
    // 0x192460: 0x3c010029
    ctx->pc = 0x192460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x192464: 0xac224168
    ctx->pc = 0x192464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16744), GPR_U32(ctx, 2));
    // 0x192468: 0x3c010029
    ctx->pc = 0x192468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x19246c: 0xc0638ec
    ctx->pc = 0x19246Cu;
    SET_GPR_U32(ctx, 31, 0x192474u);
    ctx->pc = 0x192470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    ctx->pc = 0x18E3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E3B0_0x18e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192474u; }
    }
    if (ctx->pc != 0x192474u) { return; }
    ctx->pc = 0x192474u;
    // 0x192474: 0xdfbf0000
    ctx->pc = 0x192474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192478: 0x3e00008
    ctx->pc = 0x192478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19247Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192480u;
}
