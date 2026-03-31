#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D7C0
// Address: 0x12d7c0 - 0x12d7d8
void sub_0012D7C0_0x12d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d7c0u;

    // 0x12d7c0: 0x27bdfff0
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d7c4: 0xffbf0000
    ctx->pc = 0x12d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d7c8: 0x8c840004
    ctx->pc = 0x12d7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d7cc: 0xdfbf0000
    ctx->pc = 0x12d7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7d0: 0x80493a2
    ctx->pc = 0x12D7D0u;
    ctx->pc = 0x12D7D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124E88u;
    entry_124e88_0x124ee8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7D8u;
}
