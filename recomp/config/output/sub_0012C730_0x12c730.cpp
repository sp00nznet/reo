#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C730
// Address: 0x12c730 - 0x12c748
void sub_0012C730_0x12c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c730u;

    // 0x12c730: 0x27bdfff0
    ctx->pc = 0x12c730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c734: 0xffbf0000
    ctx->pc = 0x12c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c738: 0xdfbf0000
    ctx->pc = 0x12c738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c73c: 0x804fb2c
    ctx->pc = 0x12C73Cu;
    ctx->pc = 0x12C740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13ECB0u;
    entry_13ecb0_0x13ecf0(rdram, ctx, runtime); return;
    ctx->pc = 0x12C744u;
    // 0x12c744: 0x0
    ctx->pc = 0x12c744u;
    // NOP
}
