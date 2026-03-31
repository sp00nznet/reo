#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012BEE0
// Address: 0x12bee0 - 0x12bef8
void sub_0012BEE0_0x12bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12bee0u;

    // 0x12bee0: 0x27bdfff0
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bee4: 0xffbf0000
    ctx->pc = 0x12bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bee8: 0xdfbf0000
    ctx->pc = 0x12bee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12beec: 0x804af6e
    ctx->pc = 0x12BEECu;
    ctx->pc = 0x12BEF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12BDB8u;
    entry_12bdb8_0x12bee0(rdram, ctx, runtime); return;
    ctx->pc = 0x12BEF4u;
    // 0x12bef4: 0x0
    ctx->pc = 0x12bef4u;
    // NOP
}
