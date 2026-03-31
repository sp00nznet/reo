#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001620A8
// Address: 0x1620a8 - 0x1620c0
void sub_001620A8_0x1620a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1620a8u;

    // 0x1620a8: 0x27bdfff0
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1620ac: 0xffbf0000
    ctx->pc = 0x1620acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1620b0: 0x8c8400a8
    ctx->pc = 0x1620b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1620b4: 0xdfbf0000
    ctx->pc = 0x1620b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620b8: 0x805f5aa
    ctx->pc = 0x1620B8u;
    ctx->pc = 0x1620BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D6A8u;
    entry_17d6a8_0x17d6c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1620C0u;
}
