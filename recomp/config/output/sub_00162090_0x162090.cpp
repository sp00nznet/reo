#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162090
// Address: 0x162090 - 0x1620a8
void sub_00162090_0x162090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162090u;

    // 0x162090: 0x27bdfff0
    ctx->pc = 0x162090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162094: 0xffbf0000
    ctx->pc = 0x162094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162098: 0x8c8400a8
    ctx->pc = 0x162098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x16209c: 0xdfbf0000
    ctx->pc = 0x16209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620a0: 0x805f59a
    ctx->pc = 0x1620A0u;
    ctx->pc = 0x1620A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D668u;
    entry_17d668_0x17d688(rdram, ctx, runtime); return;
    ctx->pc = 0x1620A8u;
}
