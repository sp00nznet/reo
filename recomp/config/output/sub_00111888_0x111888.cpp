#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111888
// Address: 0x111888 - 0x1118b8
void sub_00111888_0x111888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111888u;

    // 0x111888: 0x27bdffe0
    ctx->pc = 0x111888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11188c: 0xafa40000
    ctx->pc = 0x11188cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111890: 0x3a0202d
    ctx->pc = 0x111890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111894: 0xffbf0010
    ctx->pc = 0x111894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111898: 0xafa50004
    ctx->pc = 0x111898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x11189c: 0xafa60008
    ctx->pc = 0x11189cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1118a0: 0xc0445dc
    ctx->pc = 0x1118A0u;
    SET_GPR_U32(ctx, 31, 0x1118A8u);
    ctx->pc = 0x1118A4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->pc = 0x111770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111770_0x111770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1118A8u; }
    }
    if (ctx->pc != 0x1118A8u) { return; }
    ctx->pc = 0x1118A8u;
    // 0x1118a8: 0xdfbf0010
    ctx->pc = 0x1118a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1118ac: 0x3e00008
    ctx->pc = 0x1118ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1118B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1118B4u;
    // 0x1118b4: 0x0
    ctx->pc = 0x1118b4u;
    // NOP
}
