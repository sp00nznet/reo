#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_114a40
// Address: 0x114a40 - 0x114a50
void entry_114a40_0x114a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114a40u;

    // 0x114a40: 0x2403007b
    ctx->pc = 0x114a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 123));
    // 0x114a44: 0xc
    ctx->pc = 0x114a44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114a48: 0x3e00008
    ctx->pc = 0x114A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A50u;
}
