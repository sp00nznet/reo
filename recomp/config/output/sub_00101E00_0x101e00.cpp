#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101E00
// Address: 0x101e00 - 0x101e18
void sub_00101E00_0x101e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101e00u;

    // 0x101e00: 0x4842e800
    ctx->pc = 0x101e00u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat);
    // 0x101e04: 0x3042000f
    ctx->pc = 0x101e04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x101e08: 0x38420001
    ctx->pc = 0x101e08u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x101e0c: 0x3e00008
    ctx->pc = 0x101E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E10u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101E14u;
    // 0x101e14: 0x0
    ctx->pc = 0x101e14u;
    // NOP
}
