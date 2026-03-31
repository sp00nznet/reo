#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C7E0
// Address: 0x12c7e0 - 0x12c7f8
void sub_0012C7E0_0x12c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c7e0u;

    // 0x12c7e0: 0x27bdfff0
    ctx->pc = 0x12c7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c7e4: 0xffbf0000
    ctx->pc = 0x12c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c7e8: 0xdfbf0000
    ctx->pc = 0x12c7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c7ec: 0x804fbe0
    ctx->pc = 0x12C7ECu;
    ctx->pc = 0x12C7F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EF80u;
    entry_13ef80_0x13f038(rdram, ctx, runtime); return;
    ctx->pc = 0x12C7F4u;
    // 0x12c7f4: 0x0
    ctx->pc = 0x12c7f4u;
    // NOP
}
