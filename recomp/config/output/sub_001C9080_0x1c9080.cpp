#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C9080
// Address: 0x1c9080 - 0x1c90a0
void sub_001C9080_0x1c9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c9080u;

    // 0x1c9080: 0x27bdffa0
    ctx->pc = 0x1c9080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c9084: 0xffa80040
    ctx->pc = 0x1c9084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x1c9088: 0xffa90048
    ctx->pc = 0x1c9088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x1c908c: 0xffaa0050
    ctx->pc = 0x1c908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x1c9090: 0xffab0058
    ctx->pc = 0x1c9090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x1c9094: 0x3e00008
    ctx->pc = 0x1C9094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C909Cu;
    // 0x1c909c: 0x0
    ctx->pc = 0x1c909cu;
    // NOP
}
