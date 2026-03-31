#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17cef0
// Address: 0x17cef0 - 0x17cf48
void entry_17cef0_0x17cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17cef0u;

    // 0x17cef0: 0x27bdfff0
    ctx->pc = 0x17cef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cef4: 0x3c020023
    ctx->pc = 0x17cef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17cef8: 0xffb00000
    ctx->pc = 0x17cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cefc: 0x2450f298
    ctx->pc = 0x17cefcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294963864));
    // 0x17cf00: 0x8e030000
    ctx->pc = 0x17cf00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cf04: 0x1860000c
    ctx->pc = 0x17CF04u;
    {
        const bool branch_taken_0x17cf04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17CF08u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x17cf04) {
            ctx->pc = 0x17CF38u;
            goto label_17cf38;
        }
    }
    ctx->pc = 0x17CF0Cu;
    // 0x17cf0c: 0xc05f5d0
    ctx->pc = 0x17CF0Cu;
    SET_GPR_U32(ctx, 31, 0x17CF14u);
    ctx->pc = 0x17D740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D740_0x17d740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF14u; }
    }
    if (ctx->pc != 0x17CF14u) { return; }
    ctx->pc = 0x17CF14u;
    // 0x17cf14: 0xc05e99e
    ctx->pc = 0x17CF14u;
    SET_GPR_U32(ctx, 31, 0x17CF1Cu);
    ctx->pc = 0x17A678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A678_0x17a678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF1Cu; }
    }
    if (ctx->pc != 0x17CF1Cu) { return; }
    ctx->pc = 0x17CF1Cu;
    // 0x17cf1c: 0xc05f594
    ctx->pc = 0x17CF1Cu;
    SET_GPR_U32(ctx, 31, 0x17CF24u);
    ctx->pc = 0x17D650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D650_0x17d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF24u; }
    }
    if (ctx->pc != 0x17CF24u) { return; }
    ctx->pc = 0x17CF24u;
    // 0x17cf24: 0xc052480
    ctx->pc = 0x17CF24u;
    SET_GPR_U32(ctx, 31, 0x17CF2Cu);
    ctx->pc = 0x149200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00149200_0x149200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF2Cu; }
    }
    if (ctx->pc != 0x17CF2Cu) { return; }
    ctx->pc = 0x17CF2Cu;
    // 0x17cf2c: 0x8e020000
    ctx->pc = 0x17cf2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cf30: 0x2442ffff
    ctx->pc = 0x17cf30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17cf34: 0xae020000
    ctx->pc = 0x17cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17cf38:
    // 0x17cf38: 0xdfb00000
    ctx->pc = 0x17cf38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf3c: 0xdfbf0008
    ctx->pc = 0x17cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cf40: 0x3e00008
    ctx->pc = 0x17CF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CF38u: goto label_17cf38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CF48u;
}
