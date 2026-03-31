#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011CEF8
// Address: 0x11cef8 - 0x11cf08
void sub_0011CEF8_0x11cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cef8u;

    // 0x11cef8: 0x24030074
    ctx->pc = 0x11cef8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 116));
    // 0x11cefc: 0xc
    ctx->pc = 0x11cefcu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11cf00: 0x3e00008
    ctx->pc = 0x11CF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CF08u;
}
