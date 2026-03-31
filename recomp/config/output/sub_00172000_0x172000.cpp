#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172000
// Address: 0x172000 - 0x172018
void sub_00172000_0x172000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172000u;

    // 0x172000: 0x8c831b30
    ctx->pc = 0x172000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x172004: 0x246309d8
    ctx->pc = 0x172004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2520));
    // 0x172008: 0x8c62000c
    ctx->pc = 0x172008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17200c: 0x2442ffff
    ctx->pc = 0x17200cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x172010: 0x3e00008
    ctx->pc = 0x172010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172014u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172018u;
}
