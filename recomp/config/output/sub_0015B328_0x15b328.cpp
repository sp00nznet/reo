#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B328
// Address: 0x15b328 - 0x15b358
void sub_0015B328_0x15b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b328u;

    // 0x15b328: 0x3c020026
    ctx->pc = 0x15b328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x15b32c: 0x3c060023
    ctx->pc = 0x15b32cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x15b330: 0x8c434cc0
    ctx->pc = 0x15b330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 19648)));
    // 0x15b334: 0x24620020
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32));
    // 0x15b338: 0x24650060
    ctx->pc = 0x15b338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 96));
    // 0x15b33c: 0xac82002c
    ctx->pc = 0x15b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x15b340: 0xac850034
    ctx->pc = 0x15b340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x15b344: 0xac830030
    ctx->pc = 0x15b344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x15b348: 0x8cc2d8dc
    ctx->pc = 0x15b348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294957276)));
    // 0x15b34c: 0xac820110
    ctx->pc = 0x15b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
    // 0x15b350: 0x3e00008
    ctx->pc = 0x15B350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B354u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B358u;
}
