#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d668
// Address: 0x17d668 - 0x17d688
void entry_17d668_0x17d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d668u;

    // 0x17d668: 0x2484005c
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d66c: 0xac860004
    ctx->pc = 0x17d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x17d670: 0x3e00008
    ctx->pc = 0x17D670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D674u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D678u;
    // 0x17d678: 0x8c82005c
    ctx->pc = 0x17d678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x17d67c: 0x3e00008
    ctx->pc = 0x17D67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D680u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D684u;
    // 0x17d684: 0x0
    ctx->pc = 0x17d684u;
    // NOP
}
