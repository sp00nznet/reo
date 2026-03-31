#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00116E08
// Address: 0x116e08 - 0x116e48
void sub_00116E08_0x116e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x116e08u;

    // 0x116e08: 0xc0102d
    ctx->pc = 0x116e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e0c: 0xe0182d
    ctx->pc = 0x116e0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e10: 0x100582d
    ctx->pc = 0x116e10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e14: 0x27bdfff0
    ctx->pc = 0x116e14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116e18: 0x120502d
    ctx->pc = 0x116e18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e1c: 0xa0302d
    ctx->pc = 0x116e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e20: 0xffbf0000
    ctx->pc = 0x116e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116e24: 0x40382d
    ctx->pc = 0x116e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e28: 0x60402d
    ctx->pc = 0x116e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e2c: 0x160482d
    ctx->pc = 0x116e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e30: 0xc045b34
    ctx->pc = 0x116E30u;
    SET_GPR_U32(ctx, 31, 0x116E38u);
    ctx->pc = 0x116E34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116CD0_0x116cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116E38u; }
    }
    if (ctx->pc != 0x116E38u) { return; }
    ctx->pc = 0x116E38u;
    // 0x116e38: 0xdfbf0000
    ctx->pc = 0x116e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116e3c: 0x3e00008
    ctx->pc = 0x116E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116E40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116E44u;
    // 0x116e44: 0x0
    ctx->pc = 0x116e44u;
    // NOP
}
