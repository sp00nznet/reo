#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C668
// Address: 0x12c668 - 0x12c680
void sub_0012C668_0x12c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c668u;

    // 0x12c668: 0x27bdfff0
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c66c: 0xffbf0000
    ctx->pc = 0x12c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c670: 0xdfbf0000
    ctx->pc = 0x12c670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c674: 0x804f9dc
    ctx->pc = 0x12C674u;
    ctx->pc = 0x12C678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E770u;
    entry_13e770_0x13eac0(rdram, ctx, runtime); return;
    ctx->pc = 0x12C67Cu;
    // 0x12c67c: 0x0
    ctx->pc = 0x12c67cu;
    // NOP
}
