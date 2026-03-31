#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177E20
// Address: 0x177e20 - 0x177e38
void sub_00177E20_0x177e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177e20u;

    // 0x177e20: 0xdca20000
    ctx->pc = 0x177e20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177e24: 0xfc820168
    ctx->pc = 0x177e24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 360), GPR_U64(ctx, 2));
    // 0x177e28: 0xdca30008
    ctx->pc = 0x177e28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x177e2c: 0x3e00008
    ctx->pc = 0x177E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E30u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E34u;
    // 0x177e34: 0x0
    ctx->pc = 0x177e34u;
    // NOP
}
