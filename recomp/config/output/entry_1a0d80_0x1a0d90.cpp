#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a0d80
// Address: 0x1a0d80 - 0x1a0d90
void entry_1a0d80_0x1a0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0d80u;

    // 0x1a0d80: 0x80282d
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d84: 0x3c04002b
    ctx->pc = 0x1a0d84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a0d88: 0x80684dc
    ctx->pc = 0x1A0D88u;
    ctx->pc = 0x1A0D8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1A1370u;
    entry_1a1370_0x1a13f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0D90u;
}
