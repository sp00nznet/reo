#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00157D28
// Address: 0x157d28 - 0x157d40
void sub_00157D28_0x157d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x157d28u;

    // 0x157d28: 0x27bdfff0
    ctx->pc = 0x157d28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157d2c: 0xffbf0000
    ctx->pc = 0x157d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157d30: 0xdfbf0000
    ctx->pc = 0x157d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157d34: 0x8055f50
    ctx->pc = 0x157D34u;
    ctx->pc = 0x157D38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x157D40u;
    sub_00157D40_0x157d40(rdram, ctx, runtime); return;
    ctx->pc = 0x157D3Cu;
    // 0x157d3c: 0x0
    ctx->pc = 0x157d3cu;
    // NOP
}
