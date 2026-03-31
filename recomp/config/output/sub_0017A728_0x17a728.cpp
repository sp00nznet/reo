#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A728
// Address: 0x17a728 - 0x17a750
void sub_0017A728_0x17a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a728u;

    // 0x17a728: 0x24820008
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x17a72c: 0x2406001f
    ctx->pc = 0x17a72cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
    // 0x17a730: 0x24030064
    ctx->pc = 0x17a730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x17a734: 0x24050001
    ctx->pc = 0x17a734u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a738: 0xac430008
    ctx->pc = 0x17a738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17a73c: 0xac460004
    ctx->pc = 0x17a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x17a740: 0xac400000
    ctx->pc = 0x17a740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17a744: 0x3e00008
    ctx->pc = 0x17A744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A748u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A74Cu;
    // 0x17a74c: 0x0
    ctx->pc = 0x17a74cu;
    // NOP
}
