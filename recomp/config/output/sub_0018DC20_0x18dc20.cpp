#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DC20
// Address: 0x18dc20 - 0x18dc30
void sub_0018DC20_0x18dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dc20u;

    // 0x18dc20: 0x80282d
    ctx->pc = 0x18dc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc24: 0x3c04002a
    ctx->pc = 0x18dc24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x18dc28: 0x806269c
    ctx->pc = 0x18DC28u;
    ctx->pc = 0x18DC2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966864));
    ctx->pc = 0x189A70u;
    entry_189a70_0x189b08(rdram, ctx, runtime); return;
    ctx->pc = 0x18DC30u;
}
