#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168F78
// Address: 0x168f78 - 0x168f88
void sub_00168F78_0x168f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168f78u;

    // 0x168f78: 0xac800090
    ctx->pc = 0x168f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x168f7c: 0xac800000
    ctx->pc = 0x168f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x168f80: 0x3e00008
    ctx->pc = 0x168F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F84u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168F88u;
}
