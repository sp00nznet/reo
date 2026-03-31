#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015EE48
// Address: 0x15ee48 - 0x15ee88
void sub_0015EE48_0x15ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ee48u;

    // 0x15ee48: 0x27bdfff0
    ctx->pc = 0x15ee48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ee4c: 0xffbf0000
    ctx->pc = 0x15ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ee50: 0xc05c89e
    ctx->pc = 0x15EE50u;
    SET_GPR_U32(ctx, 31, 0x15EE58u);
    ctx->pc = 0x15EE54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x172278u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172278_0x172278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE58u; }
    }
    if (ctx->pc != 0x15EE58u) { return; }
    ctx->pc = 0x15EE58u;
    // 0x15ee58: 0x10400007
    ctx->pc = 0x15EE58u;
    {
        const bool branch_taken_0x15ee58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EE5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966985));
        if (branch_taken_0x15ee58) {
            ctx->pc = 0x15EE78u;
            goto label_15ee78;
        }
    }
    ctx->pc = 0x15EE60u;
    // 0x15ee60: 0xc057abc
    ctx->pc = 0x15EE60u;
    SET_GPR_U32(ctx, 31, 0x15EE68u);
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE68u; }
    }
    if (ctx->pc != 0x15EE68u) { return; }
    ctx->pc = 0x15EE68u;
    // 0x15ee68: 0x3c040024
    ctx->pc = 0x15ee68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15ee6c: 0xc058dd4
    ctx->pc = 0x15EE6Cu;
    SET_GPR_U32(ctx, 31, 0x15EE74u);
    ctx->pc = 0x15EE70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963184));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE74u; }
    }
    if (ctx->pc != 0x15EE74u) { return; }
    ctx->pc = 0x15EE74u;
    // 0x15ee74: 0x2402fec9
    ctx->pc = 0x15ee74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966985));
label_15ee78:
    // 0x15ee78: 0xdfbf0000
    ctx->pc = 0x15ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ee7c: 0x3e00008
    ctx->pc = 0x15EE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EE78u: goto label_15ee78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EE84u;
    // 0x15ee84: 0x0
    ctx->pc = 0x15ee84u;
    // NOP
}
