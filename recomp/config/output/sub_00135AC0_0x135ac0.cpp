#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135AC0
// Address: 0x135ac0 - 0x135ad0
void sub_00135AC0_0x135ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135ac0u;

    // 0x135ac0: 0xac800000
    ctx->pc = 0x135ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x135ac4: 0x3e00008
    ctx->pc = 0x135AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135AC8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135ACCu;
    // 0x135acc: 0x0
    ctx->pc = 0x135accu;
    // NOP
}
