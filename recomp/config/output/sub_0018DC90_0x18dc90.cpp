#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DC90
// Address: 0x18dc90 - 0x18dca0
void sub_0018DC90_0x18dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // REO FIX: Pool address resolver passthrough (sibling of sub_0018DCA0).
    // Originally trampolines to entry_1a0d80 → entry_1a1370 (pool free/lookup).
    // Same fix: return a0 as-is since our allocator returns raw addresses.
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));  // v0 = a0
    ctx->pc = GPR_U32(ctx, 31);            // return
}
