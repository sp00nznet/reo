#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// SifInit — stubbed (infinite polling loop for IOP, which we don't have)
void sub_0011D7F8_0x11d7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("sub_0011D7F8", rdram, ctx, runtime);
    if (ctx->pc == __entryPc) { ctx->pc = getRegU32(ctx, 31); }
}
