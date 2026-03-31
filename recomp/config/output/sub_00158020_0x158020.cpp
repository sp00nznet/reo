#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158020
// Address: 0x158020 - 0x158030
void sub_00158020_0x158020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158020u;

    // 0x158020: 0x3c020024
    ctx->pc = 0x158020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x158024: 0x3e00008
    ctx->pc = 0x158024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158028u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960496));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15802Cu;
    // 0x15802c: 0x0
    ctx->pc = 0x15802cu;
    // NOP
}
