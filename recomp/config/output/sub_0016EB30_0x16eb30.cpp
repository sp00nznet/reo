#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016EB30
// Address: 0x16eb30 - 0x16eb48
void sub_0016EB30_0x16eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16eb30u;

    // 0x16eb30: 0x248409a0
    ctx->pc = 0x16eb30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2464));
    // 0x16eb34: 0x8c8200ac
    ctx->pc = 0x16eb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x16eb38: 0xace20000
    ctx->pc = 0x16eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x16eb3c: 0x8c8300a8
    ctx->pc = 0x16eb3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x16eb40: 0x3e00008
    ctx->pc = 0x16EB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB44u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EB48u;
}
