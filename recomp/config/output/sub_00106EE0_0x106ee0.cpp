/*
 * REO Override: sub_00106EE0 — GS DMA/GIF packet builder
 *
 * Original function calls sub_00107D28 (GS init), sub_001071D8 (GIF tag
 * processor with 50+ labels and bit-scan loops), and sub_00107DA8 (GS
 * finalize). Without real GS hardware, sub_001071D8 loops infinitely on
 * uninitialized GIF data.
 *
 * This override returns a0 (the buffer pointer/size) directly, which the
 * caller uses for 64-byte-aligned buffer arithmetic.
 */
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106EE0
// Address: 0x106ee0 - 0x106f38
void sub_00106EE0_0x106ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // HLE: Skip GIF packet processing — return a0 as buffer size
    setReturnU32(ctx, getRegU32(ctx, 4));
    ctx->pc = getRegU32(ctx, 31);
}
