#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169950
// Address: 0x169950 - 0x169980
void sub_00169950_0x169950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169950u;

    // 0x169950: 0x24850098
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 152));
    // 0x169954: 0x2484090c
    ctx->pc = 0x169954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2316));
    // 0x169958: 0x8ca20004
    ctx->pc = 0x169958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16995c: 0xac820024
    ctx->pc = 0x16995cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x169960: 0x8ca30008
    ctx->pc = 0x169960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x169964: 0xac830028
    ctx->pc = 0x169964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x169968: 0x8ca2000c
    ctx->pc = 0x169968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16996c: 0x3e00008
    ctx->pc = 0x16996Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169970u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169974u;
    // 0x169974: 0x0
    ctx->pc = 0x169974u;
    // NOP
    // 0x169978: 0x3e00008
    ctx->pc = 0x169978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16997Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169980u;
}
