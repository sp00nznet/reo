#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13eb88
// Address: 0x13eb88 - 0x13eba8
void entry_13eb88_0x13eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13eb88u;

    // 0x13eb88: 0x27bdfff0
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13eb8c: 0x3c040024
    ctx->pc = 0x13eb8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13eb90: 0xffbf0000
    ctx->pc = 0x13eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eb94: 0x2484d828
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957096));
    // 0x13eb98: 0xdfbf0000
    ctx->pc = 0x13eb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eb9c: 0x8045a12
    ctx->pc = 0x13EB9Cu;
    ctx->pc = 0x13EBA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13EBA4u;
    // 0x13eba4: 0x0
    ctx->pc = 0x13eba4u;
    // NOP
}
