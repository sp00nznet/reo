#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177E08
// Address: 0x177e08 - 0x177e20
void sub_00177E08_0x177e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177e08u;

    // 0x177e08: 0xdca20000
    ctx->pc = 0x177e08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177e0c: 0xfc820158
    ctx->pc = 0x177e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 344), GPR_U64(ctx, 2));
    // 0x177e10: 0xdca30008
    ctx->pc = 0x177e10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x177e14: 0x3e00008
    ctx->pc = 0x177E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E18u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E1Cu;
    // 0x177e1c: 0x0
    ctx->pc = 0x177e1cu;
    // NOP
}
