#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103768
// Address: 0x103768 - 0x103780
void sub_00103768_0x103768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103768u;

    // 0x103768: 0x27bdfff0
    ctx->pc = 0x103768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10376c: 0x282d
    ctx->pc = 0x10376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103770: 0xffbf0000
    ctx->pc = 0x103770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103774: 0xdfbf0000
    ctx->pc = 0x103774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103778: 0x80431ea
    ctx->pc = 0x103778u;
    ctx->pc = 0x10377Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10C7A8u;
    sub_0010C7A8_0x10c7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x103780u;
}
