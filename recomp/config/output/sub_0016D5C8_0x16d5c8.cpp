#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D5C8
// Address: 0x16d5c8 - 0x16d5e8
void sub_0016D5C8_0x16d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d5c8u;

    // 0x16d5c8: 0x27bdfff0
    ctx->pc = 0x16d5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d5cc: 0xa0302d
    ctx->pc = 0x16d5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5d0: 0xffbf0000
    ctx->pc = 0x16d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d5d4: 0x8c851b38
    ctx->pc = 0x16d5d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6968)));
    // 0x16d5d8: 0xdfbf0000
    ctx->pc = 0x16d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5dc: 0x8059d92
    ctx->pc = 0x16D5DCu;
    ctx->pc = 0x16D5E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167648u;
    entry_167648_0x167bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x16D5E4u;
    // 0x16d5e4: 0x0
    ctx->pc = 0x16d5e4u;
    // NOP
}
