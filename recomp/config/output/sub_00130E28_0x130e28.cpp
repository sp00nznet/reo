#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130E28
// Address: 0x130e28 - 0x130e40
void sub_00130E28_0x130e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130e28u;

    // 0x130e28: 0xac850028
    ctx->pc = 0x130e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x130e2c: 0x3e00008
    ctx->pc = 0x130E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130E34u;
    // 0x130e34: 0x0
    ctx->pc = 0x130e34u;
    // NOP
    // 0x130e38: 0x3e00008
    ctx->pc = 0x130E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130E40u;
}
