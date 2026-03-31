#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Entry point wrapper for 0x1CB9A0 (demo scene thread entry)
// 0x1CB9A0 is the delay slot of jr ra in sub_001CB8F0, but the thread system
// needs it registered as a callable entry. The actual demo scene code starts
// at 0x1CB9B0 (after NOPs). This wrapper calls the parent function at the
// right entry point.
void entry_1cb9a0_0x1cb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    printf("[DEMO THREAD] entry_1cb9a0 started! a0=0x%08X\n", GPR_U32(ctx, 4));
    fflush(stdout);

    ctx->pc = 0x1CB9A0u;

    // The thread entry at 0x1CB9A0 is supposed to be a state machine loop
    // for the demo scene. Call sub_001CB8F0 which contains this code.
    // First, let the parent function handle it.
    sub_001CB8F0_0x1cb8f0(rdram, ctx, runtime);

    printf("[DEMO THREAD] entry_1cb9a0 returned, pc=0x%08X\n", ctx->pc);
    fflush(stdout);
}
