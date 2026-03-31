#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7A80
// Address: 0x1c7a80 - 0x1c7ac0
void sub_001C7A80_0x1c7a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7a80u;

    // 0x1c7a80: 0x3c010033
    ctx->pc = 0x1c7a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7a84: 0xa0245056
    ctx->pc = 0x1c7a84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20566), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7a88: 0x3c010033
    ctx->pc = 0x1c7a88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7a8c: 0xa0205059
    ctx->pc = 0x1c7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20569), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7a90: 0x3c010033
    ctx->pc = 0x1c7a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7a94: 0xa0205058
    ctx->pc = 0x1c7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20568), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7a98: 0x3c010033
    ctx->pc = 0x1c7a98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7a9c: 0xa0205057
    ctx->pc = 0x1c7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20567), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7aa0: 0x3c010033
    ctx->pc = 0x1c7aa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7aa4: 0xa420505c
    ctx->pc = 0x1c7aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20572), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7aa8: 0x3c010033
    ctx->pc = 0x1c7aa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7aac: 0xa420505a
    ctx->pc = 0x1c7aacu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20570), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7ab0: 0x3c010033
    ctx->pc = 0x1c7ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7ab4: 0x3e00008
    ctx->pc = 0x1C7AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7AB8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20596), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7ABCu;
    // 0x1c7abc: 0x0
    ctx->pc = 0x1c7abcu;
    // NOP
}
