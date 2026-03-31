#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_134f38
// Address: 0x134f38 - 0x134f58
void entry_134f38_0x134f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134f38u;

    // 0x134f38: 0x94820034
    ctx->pc = 0x134f38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x134f3c: 0xa4a20000
    ctx->pc = 0x134f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x134f40: 0x94830036
    ctx->pc = 0x134f40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x134f44: 0xa4c30000
    ctx->pc = 0x134f44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x134f48: 0x94820038
    ctx->pc = 0x134f48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x134f4c: 0x3e00008
    ctx->pc = 0x134F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F50u;
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134F54u;
    // 0x134f54: 0x0
    ctx->pc = 0x134f54u;
    // NOP
}
