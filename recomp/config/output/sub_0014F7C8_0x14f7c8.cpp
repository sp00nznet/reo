#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0014F7C8
// Address: 0x14f7c8 - 0x14f7e8
void sub_0014F7C8_0x14f7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14f7c8u;

    // 0x14f7c8: 0x27bdfff0
    ctx->pc = 0x14f7c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f7cc: 0x3c060023
    ctx->pc = 0x14f7ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x14f7d0: 0xffbf0000
    ctx->pc = 0x14f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f7d4: 0x24c6a808
    ctx->pc = 0x14f7d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944776));
    // 0x14f7d8: 0xdfbf0000
    ctx->pc = 0x14f7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f7dc: 0x8053dfa
    ctx->pc = 0x14F7DCu;
    ctx->pc = 0x14F7E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14F7E8u;
    sub_0014F7E8_0x14f7e8(rdram, ctx, runtime); return;
    ctx->pc = 0x14F7E4u;
    // 0x14f7e4: 0x0
    ctx->pc = 0x14f7e4u;
    // NOP
}
