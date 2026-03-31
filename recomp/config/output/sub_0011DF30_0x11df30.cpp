#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DF30
// Address: 0x11df30 - 0x11df40
void sub_0011DF30_0x11df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11df30u;

    // 0x11df30: 0x80282d
    ctx->pc = 0x11df30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df34: 0x3c04b000
    ctx->pc = 0x11df34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)45056 << 16));
    // 0x11df38: 0x80477b0
    ctx->pc = 0x11DF38u;
    ctx->pc = 0x11DF3Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 4096));
    ctx->pc = 0x11DEC0u;
    entry_11dec0_0x11df30(rdram, ctx, runtime); return;
    ctx->pc = 0x11DF40u;
}
