#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115810
// Address: 0x115810 - 0x115890
void sub_00115810_0x115810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115810u;

    // 0x115810: 0x27bdffe0
    ctx->pc = 0x115810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115814: 0xafa40000
    ctx->pc = 0x115814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115818: 0x3a0282d
    ctx->pc = 0x115818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11581c: 0xffbf0010
    ctx->pc = 0x11581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115820: 0xc045294
    ctx->pc = 0x115820u;
    SET_GPR_U32(ctx, 31, 0x115828u);
    ctx->pc = 0x115824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115828u; }
    }
    if (ctx->pc != 0x115828u) { return; }
    ctx->pc = 0x115828u;
    // 0x115828: 0xdfbf0010
    ctx->pc = 0x115828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11582c: 0x3e00008
    ctx->pc = 0x11582Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115834u;
    // 0x115834: 0x0
    ctx->pc = 0x115834u;
    // NOP
    // 0x115838: 0x27bdffd0
    ctx->pc = 0x115838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11583c: 0x308400ff
    ctx->pc = 0x11583cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x115840: 0xafa50004
    ctx->pc = 0x115840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x115844: 0xafa40000
    ctx->pc = 0x115844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115848: 0x3a0282d
    ctx->pc = 0x115848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11584c: 0xffbf0020
    ctx->pc = 0x11584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115850: 0x24040020
    ctx->pc = 0x115850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x115854: 0xc045294
    ctx->pc = 0x115854u;
    SET_GPR_U32(ctx, 31, 0x11585Cu);
    ctx->pc = 0x115858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11585Cu; }
    }
    if (ctx->pc != 0x11585Cu) { return; }
    ctx->pc = 0x11585Cu;
    // 0x11585c: 0xdfbf0020
    ctx->pc = 0x11585cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115860: 0x3e00008
    ctx->pc = 0x115860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115864u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115868u;
    // 0x115868: 0x27bdffe0
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11586c: 0xafa40000
    ctx->pc = 0x11586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115870: 0x3a0282d
    ctx->pc = 0x115870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115874: 0xffbf0010
    ctx->pc = 0x115874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115878: 0xc045294
    ctx->pc = 0x115878u;
    SET_GPR_U32(ctx, 31, 0x115880u);
    ctx->pc = 0x11587Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115880u; }
    }
    if (ctx->pc != 0x115880u) { return; }
    ctx->pc = 0x115880u;
    // 0x115880: 0xdfbf0010
    ctx->pc = 0x115880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115884: 0x3e00008
    ctx->pc = 0x115884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115888u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11588Cu;
    // 0x11588c: 0x0
    ctx->pc = 0x11588cu;
    // NOP
}
