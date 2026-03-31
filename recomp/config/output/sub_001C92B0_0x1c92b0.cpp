#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C92B0
// Address: 0x1c92b0 - 0x1c92f0
void sub_001C92B0_0x1c92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c92b0u;

    // 0x1c92b0: 0x27bdfff0
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c92b4: 0x3c040034
    ctx->pc = 0x1c92b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c92b8: 0xffbf0000
    ctx->pc = 0x1c92b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c92bc: 0x2484d170
    ctx->pc = 0x1c92bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955376));
    // 0x1c92c0: 0x282d
    ctx->pc = 0x1c92c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92c4: 0xc041f1a
    ctx->pc = 0x1C92C4u;
    SET_GPR_U32(ctx, 31, 0x1C92CCu);
    ctx->pc = 0x1C92C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2080));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92CCu; }
    }
    if (ctx->pc != 0x1C92CCu) { return; }
    ctx->pc = 0x1C92CCu;
    // 0x1c92cc: 0x3c010034
    ctx->pc = 0x1c92ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c92d0: 0x102d
    ctx->pc = 0x1c92d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92d4: 0xac20d160
    ctx->pc = 0x1c92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955360), GPR_U32(ctx, 0));
    // 0x1c92d8: 0xdfbf0000
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c92dc: 0x3e00008
    ctx->pc = 0x1C92DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C92E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C92E4u;
    // 0x1c92e4: 0x0
    ctx->pc = 0x1c92e4u;
    // NOP
    // 0x1c92e8: 0x0
    ctx->pc = 0x1c92e8u;
    // NOP
    // 0x1c92ec: 0x0
    ctx->pc = 0x1c92ecu;
    // NOP
}
