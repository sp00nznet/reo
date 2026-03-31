#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C6E8
// Address: 0x12c6e8 - 0x12c700
void sub_0012C6E8_0x12c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c6e8u;

    // 0x12c6e8: 0x27bdfff0
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c6ec: 0xffbf0000
    ctx->pc = 0x12c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c6f0: 0xdfbf0000
    ctx->pc = 0x12c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c6f4: 0x804faf6
    ctx->pc = 0x12C6F4u;
    ctx->pc = 0x12C6F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EBD8u;
    sub_0013EBD8_0x13ebd8(rdram, ctx, runtime); return;
    ctx->pc = 0x12C6FCu;
    // 0x12c6fc: 0x0
    ctx->pc = 0x12c6fcu;
    // NOP
}
