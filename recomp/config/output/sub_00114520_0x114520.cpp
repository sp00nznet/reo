#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114520
// Address: 0x114520 - 0x114530
void sub_00114520_0x114520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114520u;

    // 0x114520: 0x24030030
    ctx->pc = 0x114520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x114524: 0xc
    ctx->pc = 0x114524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114528: 0x3e00008
    ctx->pc = 0x114528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114530u;
}
