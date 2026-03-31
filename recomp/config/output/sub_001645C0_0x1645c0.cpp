#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001645C0
// Address: 0x1645c0 - 0x1645d8
void sub_001645C0_0x1645c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1645c0u;

    // 0x1645c0: 0x27bdfff0
    ctx->pc = 0x1645c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1645c4: 0x282d
    ctx->pc = 0x1645c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645c8: 0xffbf0000
    ctx->pc = 0x1645c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1645cc: 0xdfbf0000
    ctx->pc = 0x1645ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645d0: 0x804c0f6
    ctx->pc = 0x1645D0u;
    ctx->pc = 0x1645D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1303D8u;
    sub_001303D8_0x1303d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1645D8u;
}
