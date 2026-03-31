#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d6a8
// Address: 0x17d6a8 - 0x17d6c8
void entry_17d6a8_0x17d6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d6a8u;

    // 0x17d6a8: 0x27bdfff0
    ctx->pc = 0x17d6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d6ac: 0x2484005c
    ctx->pc = 0x17d6acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d6b0: 0xffbf0000
    ctx->pc = 0x17d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d6b4: 0x8c850004
    ctx->pc = 0x17d6b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d6b8: 0xdfbf0000
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6bc: 0x8c840000
    ctx->pc = 0x17d6bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d6c0: 0x805f97a
    ctx->pc = 0x17D6C0u;
    ctx->pc = 0x17D6C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E5E8u;
    entry_17e5e8_0x17e628(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6C8u;
}
