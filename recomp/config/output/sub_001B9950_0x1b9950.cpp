#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B9950
// Address: 0x1b9950 - 0x1b9970
void sub_001B9950_0x1b9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b9950u;

    // 0x1b9950: 0x3c04003c
    ctx->pc = 0x1b9950u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x1b9954: 0x282d
    ctx->pc = 0x1b9954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9958: 0x24842750
    ctx->pc = 0x1b9958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10064));
    // 0x1b995c: 0x8041f1a
    ctx->pc = 0x1B995Cu;
    ctx->pc = 0x1B9960u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9964u;
    // 0x1b9964: 0x0
    ctx->pc = 0x1b9964u;
    // NOP
    // 0x1b9968: 0x0
    ctx->pc = 0x1b9968u;
    // NOP
    // 0x1b996c: 0x0
    ctx->pc = 0x1b996cu;
    // NOP
}
