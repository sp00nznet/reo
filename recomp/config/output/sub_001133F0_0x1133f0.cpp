#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001133F0 (GS CSR VSync poll / sceGsSyncV-like)
// Address: 0x1133f0 - 0x113488
// Reads GS CSR (0x12001000) bit 13 (VSINT) to check if VSync occurred.
// Reverted to stub — real code hangs because GS CSR VSINT is never set.
// Override in reo_override.cpp binds this to reo_ret1 (return 1 = VSync done).
void sub_001133F0_0x1133f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ps2_stubs::TODO_NAMED("sub_001133F0", rdram, ctx, runtime);
}
