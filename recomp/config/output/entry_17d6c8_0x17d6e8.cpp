#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d6c8
// Address: 0x17d6c8 - 0x17d6e8
void entry_17d6c8_0x17d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d6c8u;

    // 0x17d6c8: 0x27bdfff0
    ctx->pc = 0x17d6c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d6cc: 0x2484005c
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d6d0: 0xffbf0000
    ctx->pc = 0x17d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d6d4: 0x8c850004
    ctx->pc = 0x17d6d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d6d8: 0xdfbf0000
    ctx->pc = 0x17d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6dc: 0x8c840000
    ctx->pc = 0x17d6dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d6e0: 0x805f98a
    ctx->pc = 0x17D6E0u;
    ctx->pc = 0x17D6E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E628u;
    entry_17e628_0x17e6a0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6E8u;
}
