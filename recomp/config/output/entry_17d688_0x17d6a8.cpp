#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d688
// Address: 0x17d688 - 0x17d6a8
void entry_17d688_0x17d6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d688u;

    // 0x17d688: 0x27bdfff0
    ctx->pc = 0x17d688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d68c: 0x2484005c
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d690: 0xffbf0000
    ctx->pc = 0x17d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d694: 0x8c850004
    ctx->pc = 0x17d694u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d698: 0xdfbf0000
    ctx->pc = 0x17d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d69c: 0x8c840000
    ctx->pc = 0x17d69cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d6a0: 0x805f96a
    ctx->pc = 0x17D6A0u;
    ctx->pc = 0x17D6A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E5A8u;
    entry_17e5a8_0x17e5e8(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6A8u;
}
