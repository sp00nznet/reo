#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17cf48
// Address: 0x17cf48 - 0x17cf60
void entry_17cf48_0x17cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17cf48u;

    // 0x17cf48: 0x3c020023
    ctx->pc = 0x17cf48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17cf4c: 0x2442f2a8
    ctx->pc = 0x17cf4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963880));
    // 0x17cf50: 0xac450004
    ctx->pc = 0x17cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17cf54: 0x3e00008
    ctx->pc = 0x17CF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF58u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CF5Cu;
    // 0x17cf5c: 0x0
    ctx->pc = 0x17cf5cu;
    // NOP
}
