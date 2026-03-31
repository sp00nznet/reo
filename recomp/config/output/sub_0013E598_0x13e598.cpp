#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013E598
// Address: 0x13e598 - 0x13e5c0
void sub_0013E598_0x13e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e598u;

    // 0x13e598: 0x27bdfff0
    ctx->pc = 0x13e598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e59c: 0x2404000c
    ctx->pc = 0x13e59cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x13e5a0: 0xffbf0000
    ctx->pc = 0x13e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e5a4: 0x282d
    ctx->pc = 0x13e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5a8: 0x302d
    ctx->pc = 0x13e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5ac: 0x382d
    ctx->pc = 0x13e5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5b0: 0xdfbf0000
    ctx->pc = 0x13e5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e5b4: 0x402d
    ctx->pc = 0x13e5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5b8: 0x804e518
    ctx->pc = 0x13E5B8u;
    ctx->pc = 0x13E5BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139460u;
    sub_00139460_0x139460(rdram, ctx, runtime); return;
    ctx->pc = 0x13E5C0u;
}
