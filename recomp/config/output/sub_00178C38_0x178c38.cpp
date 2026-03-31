#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178C38
// Address: 0x178c38 - 0x178c60
void sub_00178C38_0x178c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178c38u;

    // 0x178c38: 0x27bdfff0
    ctx->pc = 0x178c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178c3c: 0x282d
    ctx->pc = 0x178c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c40: 0xffbf0000
    ctx->pc = 0x178c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178c44: 0x302d
    ctx->pc = 0x178c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c48: 0x382d
    ctx->pc = 0x178c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c4c: 0x402d
    ctx->pc = 0x178c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c50: 0xdfbf0000
    ctx->pc = 0x178c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c54: 0x805e318
    ctx->pc = 0x178C54u;
    ctx->pc = 0x178C58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x178C60u;
    sub_00178C60_0x178c60(rdram, ctx, runtime); return;
    ctx->pc = 0x178C5Cu;
    // 0x178c5c: 0x0
    ctx->pc = 0x178c5cu;
    // NOP
}
