#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DF50
// Address: 0x11df50 - 0x11df60
void sub_0011DF50_0x11df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11df50u;

    // 0x11df50: 0x80282d
    ctx->pc = 0x11df50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df54: 0x3c04b000
    ctx->pc = 0x11df54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)45056 << 16));
    // 0x11df58: 0x80477b0
    ctx->pc = 0x11DF58u;
    ctx->pc = 0x11DF5Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 4128));
    ctx->pc = 0x11DEC0u;
    entry_11dec0_0x11df30(rdram, ctx, runtime); return;
    ctx->pc = 0x11DF60u;
}
