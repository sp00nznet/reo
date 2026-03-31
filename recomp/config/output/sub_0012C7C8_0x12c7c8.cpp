#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C7C8
// Address: 0x12c7c8 - 0x12c7e0
void sub_0012C7C8_0x12c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c7c8u;

    // 0x12c7c8: 0x27bdfff0
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c7cc: 0xffbf0000
    ctx->pc = 0x12c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c7d0: 0xdfbf0000
    ctx->pc = 0x12c7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c7d4: 0x804fbde
    ctx->pc = 0x12C7D4u;
    ctx->pc = 0x12C7D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EF78u;
    entry_13ef78_0x13ef80(rdram, ctx, runtime); return;
    ctx->pc = 0x12C7DCu;
    // 0x12c7dc: 0x0
    ctx->pc = 0x12c7dcu;
    // NOP
}
