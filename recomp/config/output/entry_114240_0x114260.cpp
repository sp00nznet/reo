#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_114240
// Address: 0x114240 - 0x114260
void entry_114240_0x114260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114240u;

    // 0x114240: 0x24030004
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x114244: 0xc
    ctx->pc = 0x114244u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114248: 0x3e00008
    ctx->pc = 0x114248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114250u;
    // 0x114250: 0x24030005
    ctx->pc = 0x114250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x114254: 0xc
    ctx->pc = 0x114254u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114258: 0x3e00008
    ctx->pc = 0x114258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114260u;
}
