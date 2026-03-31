#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C8B0
// Address: 0x12c8b0 - 0x12c8d8
void sub_0012C8B0_0x12c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c8b0u;

    // 0x12c8b0: 0x27bdfff0
    ctx->pc = 0x12c8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c8b4: 0xffbf0000
    ctx->pc = 0x12c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c8b8: 0xdfbf0000
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c8bc: 0x804fc56
    ctx->pc = 0x12C8BCu;
    ctx->pc = 0x12C8C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F158u;
    entry_13f158_0x13f1a0(rdram, ctx, runtime); return;
    ctx->pc = 0x12C8C4u;
    // 0x12c8c4: 0x0
    ctx->pc = 0x12c8c4u;
    // NOP
    // 0x12c8c8: 0x3e00008
    ctx->pc = 0x12C8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C8D0u;
    // 0x12c8d0: 0x3e00008
    ctx->pc = 0x12C8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C8D8u;
}
