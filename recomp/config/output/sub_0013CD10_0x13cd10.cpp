#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CD10
// Address: 0x13cd10 - 0x13cd38
void sub_0013CD10_0x13cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13cd10u;

    // 0x13cd10: 0x27bdfff0
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cd14: 0x3c08000f
    ctx->pc = 0x13cd14u;
    SET_GPR_U32(ctx, 8, ((uint32_t)15 << 16));
    // 0x13cd18: 0xffbf0000
    ctx->pc = 0x13cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cd1c: 0x302d
    ctx->pc = 0x13cd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd20: 0x382d
    ctx->pc = 0x13cd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd24: 0x3508ffff
    ctx->pc = 0x13cd24u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x13cd28: 0xdfbf0000
    ctx->pc = 0x13cd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cd2c: 0x804f34e
    ctx->pc = 0x13CD2Cu;
    ctx->pc = 0x13CD30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13CD38u;
    sub_0013CD38_0x13cd38(rdram, ctx, runtime); return;
    ctx->pc = 0x13CD34u;
    // 0x13cd34: 0x0
    ctx->pc = 0x13cd34u;
    // NOP
}
