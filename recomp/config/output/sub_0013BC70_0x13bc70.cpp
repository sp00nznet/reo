#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BC70
// Address: 0x13bc70 - 0x13bca0
void sub_0013BC70_0x13bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bc70u;

    // 0x13bc70: 0x8c820028
    ctx->pc = 0x13bc70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13bc74: 0x3c06ffff
    ctx->pc = 0x13bc74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)65535 << 16));
    // 0x13bc78: 0x6303e
    ctx->pc = 0x13bc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x13bc7c: 0xdc850008
    ctx->pc = 0x13bc7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13bc80: 0x212f8
    ctx->pc = 0x13bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x13bc84: 0xa2182b
    ctx->pc = 0x13bc84u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13bc88: 0xa3100b
    ctx->pc = 0x13bc88u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x13bc8c: 0x461024
    ctx->pc = 0x13bc8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13bc90: 0x2103c
    ctx->pc = 0x13bc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13bc94: 0x3e00008
    ctx->pc = 0x13BC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC98u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BC9Cu;
    // 0x13bc9c: 0x0
    ctx->pc = 0x13bc9cu;
    // NOP
}
