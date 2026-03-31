#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124518
// Address: 0x124518 - 0x124538
void sub_00124518_0x124518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124518u;

    // 0x124518: 0x3c040021
    ctx->pc = 0x124518u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x12451c: 0x102d
    ctx->pc = 0x12451cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124520: 0x2484b93c
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949180));
    // 0x124524: 0x8c830000
    ctx->pc = 0x124524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124528: 0x24630001
    ctx->pc = 0x124528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x12452c: 0x3e00008
    ctx->pc = 0x12452Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124530u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124534u;
    // 0x124534: 0x0
    ctx->pc = 0x124534u;
    // NOP
}
