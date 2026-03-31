#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17a7d8
// Address: 0x17a7d8 - 0x17a7f8
void entry_17a7d8_0x17a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a7d8u;

    // 0x17a7d8: 0x24820008
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x17a7dc: 0x24030001
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a7e0: 0xac460008
    ctx->pc = 0x17a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17a7e4: 0xac470000
    ctx->pc = 0x17a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x17a7e8: 0xac450004
    ctx->pc = 0x17a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17a7ec: 0x3e00008
    ctx->pc = 0x17A7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A7F4u;
    // 0x17a7f4: 0x0
    ctx->pc = 0x17a7f4u;
    // NOP
}
