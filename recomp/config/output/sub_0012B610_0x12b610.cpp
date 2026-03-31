#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B610
// Address: 0x12b610 - 0x12b620
void sub_0012B610_0x12b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b610u;

    // 0x12b610: 0x3c030021
    ctx->pc = 0x12b610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b614: 0x8c620454
    ctx->pc = 0x12b614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1108)));
    // 0x12b618: 0x3e00008
    ctx->pc = 0x12B618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B61Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B620u;
}
