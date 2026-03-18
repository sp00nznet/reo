#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC8F0
// Address: 0x1cc8f0 - 0x1cc950
// REO FIX: This is a rendering resource acquisition function.
// All paths (AA3E0, AA480, AA4A0) do PS2 thread/semaphore synchronization
// that hangs in static recomp (no interrupt handlers to signal semaphores).
// In single-threaded recomp, rendering resources are always available.
// Return v0=1 (success) immediately.
void sub_001CC8F0_0x1cc8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    SET_GPR_U32(ctx, 2, 1);  // v0 = 1 (resource acquired)
    ctx->pc = GPR_U32(ctx, 31);  // return to caller
}
