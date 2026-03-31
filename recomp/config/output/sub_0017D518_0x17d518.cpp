#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D518
// Address: 0x17d518 - 0x17d540
void sub_0017D518_0x17d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d518u;

    // 0x17d518: 0x517c2
    ctx->pc = 0x17d518u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x17d51c: 0x451021
    ctx->pc = 0x17d51cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17d520: 0x21043
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17d524: 0x21040
    ctx->pc = 0x17d524u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x17d528: 0x21843
    ctx->pc = 0x17d528u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17d52c: 0xac82000c
    ctx->pc = 0x17d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17d530: 0xac83002c
    ctx->pc = 0x17d530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x17d534: 0x3e00008
    ctx->pc = 0x17D534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D538u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D53Cu;
    // 0x17d53c: 0x0
    ctx->pc = 0x17d53cu;
    // NOP
}
