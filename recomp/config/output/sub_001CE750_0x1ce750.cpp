#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE750
// Address: 0x1ce750 - 0x1ce790
void sub_001CE750_0x1ce750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce750u;

    // 0x1ce750: 0x27bdfff0
    ctx->pc = 0x1ce750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce754: 0xffbf0000
    ctx->pc = 0x1ce754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce758: 0x90830000
    ctx->pc = 0x1ce758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce75c: 0x2463ffff
    ctx->pc = 0x1ce75cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce760: 0xa0830000
    ctx->pc = 0x1ce760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce764: 0x306300ff
    ctx->pc = 0x1ce764u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1ce768: 0x14600005
    ctx->pc = 0x1CE768u;
    {
        const bool branch_taken_0x1ce768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce768) {
            ctx->pc = 0x1CE780u;
            goto label_1ce780;
        }
    }
    ctx->pc = 0x1CE770u;
    // 0x1ce770: 0xa0800010
    ctx->pc = 0x1ce770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce774: 0xa080000f
    ctx->pc = 0x1ce774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce778: 0xc073a94
    ctx->pc = 0x1CE778u;
    SET_GPR_U32(ctx, 31, 0x1CE780u);
    ctx->pc = 0x1CE77Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x1CEA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEA50_0x1cea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE780u; }
    }
    if (ctx->pc != 0x1CE780u) { return; }
    ctx->pc = 0x1CE780u;
label_1ce780:
    // 0x1ce780: 0xdfbf0000
    ctx->pc = 0x1ce780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce784: 0x3e00008
    ctx->pc = 0x1CE784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE780u: goto label_1ce780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE78Cu;
    // 0x1ce78c: 0x0
    ctx->pc = 0x1ce78cu;
    // NOP
}
