#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a5ec0
// Address: 0x1a5ec0 - 0x1a5f00
void entry_1a5ec0_0x1a5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5ec0u;

    // 0x1a5ec0: 0x448c0
    ctx->pc = 0x1a5ec0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5ec4: 0x3c03002b
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a5ec8: 0x3c04002b
    ctx->pc = 0x1a5ec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a5ecc: 0x24630a02
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2562));
    // 0x1a5ed0: 0x24840a00
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2560));
    // 0x1a5ed4: 0x894021
    ctx->pc = 0x1a5ed4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1a5ed8: 0x692021
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a5edc: 0xa5050000
    ctx->pc = 0x1a5edcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5ee0: 0x3c03002b
    ctx->pc = 0x1a5ee0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a5ee4: 0xa4860000
    ctx->pc = 0x1a5ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5ee8: 0x24630a04
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2564));
    // 0x1a5eec: 0x691821
    ctx->pc = 0x1a5eecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a5ef0: 0x3e00008
    ctx->pc = 0x1A5EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EF4u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5EF8u;
    // 0x1a5ef8: 0x0
    ctx->pc = 0x1a5ef8u;
    // NOP
    // 0x1a5efc: 0x0
    ctx->pc = 0x1a5efcu;
    // NOP
}
