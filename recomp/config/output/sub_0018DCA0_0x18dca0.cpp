#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DCA0
// Address: 0x18dca0 - 0x18dcb0
void sub_0018DCA0_0x18dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // REO FIX: Pool address resolver passthrough.
    // Originally trampolines to entry_1a0d70 → entry_1a1330 (pool lookup).
    // The pool struct at 0x2AFDF0 is never initialized because our bump allocator
    // bypasses the pool system, so lookups return 0 → wrPtr = 0 → empty display lists.
    // Since our allocator returns raw usable addresses, just return a0 as-is.
    { static int c = 0; if (c < 20) { printf("[18DCA0] pool_resolve(0x%08X) ra=0x%08X → passthrough\n", GPR_U32(ctx, 4), GPR_U32(ctx, 31)); fflush(stdout); c++; } }
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));  // v0 = a0
    ctx->pc = GPR_U32(ctx, 31);            // return
}
