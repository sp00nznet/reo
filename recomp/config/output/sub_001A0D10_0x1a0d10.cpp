#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0D10
// Address: 0x1a0d10 - 0x1a0d40
void sub_001A0D10_0x1a0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0d10u;

    // 0x1a0d10: 0x80382d
    ctx->pc = 0x1a0d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d14: 0xa0402d
    ctx->pc = 0x1a0d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d18: 0xc0482d
    ctx->pc = 0x1a0d18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d1c: 0x3c04002b
    ctx->pc = 0x1a0d1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d20: 0x3c05002a
    ctx->pc = 0x1a0d20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)42 << 16));
    // 0x1a0d24: 0x2484fef0
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    // 0x1a0d28: 0x24a5fef0
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967024));
    // 0x1a0d2c: 0x24061000
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a0d30: 0x8068368
    ctx->pc = 0x1A0D30u;
    ctx->pc = 0x1A0D34u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A0DA0u;
    entry_1a0da0_0x1a0e10(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D38u;
    // 0x1a0d38: 0x0
    ctx->pc = 0x1a0d38u;
    // NOP
    // 0x1a0d3c: 0x0
    ctx->pc = 0x1a0d3cu;
    // NOP
}
