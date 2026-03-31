#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1270
// Address: 0x1c1270 - 0x1c1290
void sub_001C1270_0x1c1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1270u;

    // 0x1c1270: 0x3c020032
    ctx->pc = 0x1c1270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1c1274: 0x41880
    ctx->pc = 0x1c1274u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1278: 0x24426c78
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27768));
    // 0x1c127c: 0x431021
    ctx->pc = 0x1c127cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1280: 0x3e00008
    ctx->pc = 0x1C1280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1284u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1288u;
    // 0x1c1288: 0x0
    ctx->pc = 0x1c1288u;
    // NOP
    // 0x1c128c: 0x0
    ctx->pc = 0x1c128cu;
    // NOP
}
