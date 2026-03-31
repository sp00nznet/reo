#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BC50
// Address: 0x13bc50 - 0x13bc70
void sub_0013BC50_0x13bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bc50u;

    // 0x13bc50: 0x8c820028
    ctx->pc = 0x13bc50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13bc54: 0xdc850008
    ctx->pc = 0x13bc54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13bc58: 0x212f8
    ctx->pc = 0x13bc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x13bc5c: 0xa2182b
    ctx->pc = 0x13bc5cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13bc60: 0xa3100b
    ctx->pc = 0x13bc60u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x13bc64: 0x3e00008
    ctx->pc = 0x13BC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC68u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BC6Cu;
    // 0x13bc6c: 0x0
    ctx->pc = 0x13bc6cu;
    // NOP
}
