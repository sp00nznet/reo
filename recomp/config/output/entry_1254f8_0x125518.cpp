#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1254f8
// Address: 0x1254f8 - 0x125518
void entry_1254f8_0x125518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1254f8u;

    // 0x1254f8: 0x27bdfff0
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1254fc: 0x52840
    ctx->pc = 0x1254fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x125500: 0xffbf0000
    ctx->pc = 0x125500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125504: 0xe0302d
    ctx->pc = 0x125504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125508: 0x852821
    ctx->pc = 0x125508u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12550c: 0xdfbf0000
    ctx->pc = 0x12550cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125510: 0x8049516
    ctx->pc = 0x125510u;
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125458u;
    sub_00125458_0x125458(rdram, ctx, runtime); return;
    ctx->pc = 0x125518u;
}
