#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172BD8
// Address: 0x172bd8 - 0x172be0
void sub_00172BD8_0x172bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172bd8u;

    // 0x172bd8: 0x3e00008
    ctx->pc = 0x172BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172BDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172BE0u;
}
