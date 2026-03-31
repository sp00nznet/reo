#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DF40
// Address: 0x11df40 - 0x11df50
void sub_0011DF40_0x11df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11df40u;

    // 0x11df40: 0x80282d
    ctx->pc = 0x11df40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df44: 0x3c04b000
    ctx->pc = 0x11df44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)45056 << 16));
    // 0x11df48: 0x80477b0
    ctx->pc = 0x11DF48u;
    ctx->pc = 0x11DF4Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 4112));
    ctx->pc = 0x11DEC0u;
    entry_11dec0_0x11df30(rdram, ctx, runtime); return;
    ctx->pc = 0x11DF50u;
}
