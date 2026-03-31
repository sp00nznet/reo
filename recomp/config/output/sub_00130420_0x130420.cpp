#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130420
// Address: 0x130420 - 0x130478
void sub_00130420_0x130420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130420u;

    // 0x130420: 0x27bdfff0
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130424: 0xffb00000
    ctx->pc = 0x130424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130428: 0x80802d
    ctx->pc = 0x130428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13042c: 0x1200000e
    ctx->pc = 0x13042Cu;
    {
        const bool branch_taken_0x13042c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x130430u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13042c) {
            ctx->pc = 0x130468u;
            goto label_130468;
        }
    }
    ctx->pc = 0x130434u;
    // 0x130434: 0xc04c1d2
    ctx->pc = 0x130434u;
    SET_GPR_U32(ctx, 31, 0x13043Cu);
    ctx->pc = 0x130748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130748_0x130748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13043Cu; }
    }
    if (ctx->pc != 0x13043Cu) { return; }
    ctx->pc = 0x13043Cu;
    // 0x13043c: 0xc04c158
    ctx->pc = 0x13043Cu;
    SET_GPR_U32(ctx, 31, 0x130444u);
    ctx->pc = 0x130440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130560_0x130560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130444u; }
    }
    if (ctx->pc != 0x130444u) { return; }
    ctx->pc = 0x130444u;
    // 0x130444: 0xa2000000
    ctx->pc = 0x130444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x130448: 0x200202d
    ctx->pc = 0x130448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13044c: 0xdfb00000
    ctx->pc = 0x13044cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130450: 0xdfbf0008
    ctx->pc = 0x130450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130454: 0x282d
    ctx->pc = 0x130454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130458: 0x2406005c
    ctx->pc = 0x130458u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 92));
    // 0x13045c: 0x8041f1a
    ctx->pc = 0x13045Cu;
    ctx->pc = 0x130460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x130464u;
    // 0x130464: 0x0
    ctx->pc = 0x130464u;
    // NOP
label_130468:
    // 0x130468: 0xdfb00000
    ctx->pc = 0x130468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13046c: 0xdfbf0008
    ctx->pc = 0x13046cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130470: 0x3e00008
    ctx->pc = 0x130470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130474u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130468u: goto label_130468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130478u;
}
