#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147F30
// Address: 0x147f30 - 0x147f68
void sub_00147F30_0x147f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147f30u;

    // 0x147f30: 0x2402000c
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x147f34: 0x8c880040
    ctx->pc = 0x147f34u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147f38: 0xa22818
    ctx->pc = 0x147f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x147f3c: 0x2503000c
    ctx->pc = 0x147f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 12));
    // 0x147f40: 0x651821
    ctx->pc = 0x147f40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147f44: 0x1052021
    ctx->pc = 0x147f44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x147f48: 0x8c620000
    ctx->pc = 0x147f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147f4c: 0xac660000
    ctx->pc = 0x147f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x147f50: 0xac870010
    ctx->pc = 0x147f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x147f54: 0x380182d
    ctx->pc = 0x147f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f58: 0x80402d
    ctx->pc = 0x147f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f5c: 0x3e00008
    ctx->pc = 0x147F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F60u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147F64u;
    // 0x147f64: 0x0
    ctx->pc = 0x147f64u;
    // NOP
}
