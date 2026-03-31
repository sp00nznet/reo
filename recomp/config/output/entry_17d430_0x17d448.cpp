#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d430
// Address: 0x17d430 - 0x17d448
void entry_17d430_0x17d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d430u;

    // 0x17d430: 0x27bdfff0
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d434: 0xffbf0000
    ctx->pc = 0x17d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d438: 0x8c840030
    ctx->pc = 0x17d438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17d43c: 0xdfbf0000
    ctx->pc = 0x17d43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d440: 0x805e9f6
    ctx->pc = 0x17D440u;
    ctx->pc = 0x17D444u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A7D8u;
    entry_17a7d8_0x17a7f8(rdram, ctx, runtime); return;
    ctx->pc = 0x17D448u;
}
