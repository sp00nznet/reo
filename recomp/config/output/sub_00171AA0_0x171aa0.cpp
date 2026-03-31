#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00171AA0
// Address: 0x171aa0 - 0x171ac8
void sub_00171AA0_0x171aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x171aa0u;

    // 0x171aa0: 0x27bdfff0
    ctx->pc = 0x171aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171aa4: 0x3c050027
    ctx->pc = 0x171aa4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x171aa8: 0xffbf0000
    ctx->pc = 0x171aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171aac: 0x24a560d8
    ctx->pc = 0x171aacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24792));
    // 0x171ab0: 0x24060048
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 72));
    // 0x171ab4: 0x8c841b30
    ctx->pc = 0x171ab4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x171ab8: 0xdfbf0000
    ctx->pc = 0x171ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171abc: 0x24840a00
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2560));
    // 0x171ac0: 0x80557c8
    ctx->pc = 0x171AC0u;
    ctx->pc = 0x171AC4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x155F20u;
    entry_155f20_0x1560f0(rdram, ctx, runtime); return;
    ctx->pc = 0x171AC8u;
}
