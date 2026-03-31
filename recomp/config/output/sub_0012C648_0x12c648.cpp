#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C648
// Address: 0x12c648 - 0x12c660
void sub_0012C648_0x12c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c648u;

    // 0x12c648: 0x27bdfff0
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c64c: 0xffbf0000
    ctx->pc = 0x12c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c650: 0xdfbf0000
    ctx->pc = 0x12c650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c654: 0x804f9b0
    ctx->pc = 0x12C654u;
    ctx->pc = 0x12C658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E6C0u;
    entry_13e6c0_0x13e770(rdram, ctx, runtime); return;
    ctx->pc = 0x12C65Cu;
    // 0x12c65c: 0x0
    ctx->pc = 0x12c65cu;
    // NOP
}
