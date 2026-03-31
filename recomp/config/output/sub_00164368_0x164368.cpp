#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164368
// Address: 0x164368 - 0x1643b0
void sub_00164368_0x164368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164368u;

    // 0x164368: 0x27bdfff0
    ctx->pc = 0x164368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16436c: 0xffbf0000
    ctx->pc = 0x16436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164370: 0xc05799e
    ctx->pc = 0x164370u;
    SET_GPR_U32(ctx, 31, 0x164378u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164378u; }
    }
    if (ctx->pc != 0x164378u) { return; }
    ctx->pc = 0x164378u;
    // 0x164378: 0x8c420024
    ctx->pc = 0x164378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16437c: 0xdfbf0000
    ctx->pc = 0x16437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164380: 0x3e00008
    ctx->pc = 0x164380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164384u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164388u;
    // 0x164388: 0x27bdfff0
    ctx->pc = 0x164388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16438c: 0xffbf0000
    ctx->pc = 0x16438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164390: 0xc0590a6
    ctx->pc = 0x164390u;
    SET_GPR_U32(ctx, 31, 0x164398u);
    ctx->pc = 0x164298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164298_0x164298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164398u; }
    }
    if (ctx->pc != 0x164398u) { return; }
    ctx->pc = 0x164398u;
    // 0x164398: 0x38420001
    ctx->pc = 0x164398u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x16439c: 0xdfbf0000
    ctx->pc = 0x16439cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643a0: 0x2102b
    ctx->pc = 0x1643a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1643a4: 0x3e00008
    ctx->pc = 0x1643A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1643ACu;
    // 0x1643ac: 0x0
    ctx->pc = 0x1643acu;
    // NOP
}
