#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A620
// Address: 0x17a620 - 0x17a678
void sub_0017A620_0x17a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a620u;

    // 0x17a620: 0x27bdfff0
    ctx->pc = 0x17a620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a624: 0xffbf0000
    ctx->pc = 0x17a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a628: 0xdfbf0000
    ctx->pc = 0x17a628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a62c: 0x805e98e
    ctx->pc = 0x17A62Cu;
    ctx->pc = 0x17A630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A638u;
    goto label_17a638;
    ctx->pc = 0x17A634u;
    // 0x17a634: 0x0
    ctx->pc = 0x17a634u;
    // NOP
label_17a638:
    // 0x17a638: 0x27bdfff0
    ctx->pc = 0x17a638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a63c: 0x282d
    ctx->pc = 0x17a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a640: 0xffb00000
    ctx->pc = 0x17a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a644: 0x3c100023
    ctx->pc = 0x17a644u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x17a648: 0x2610f1f0
    ctx->pc = 0x17a648u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963696));
    // 0x17a64c: 0x240600a8
    ctx->pc = 0x17a64cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 168));
    // 0x17a650: 0xffbf0008
    ctx->pc = 0x17a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a654: 0xc041f1a
    ctx->pc = 0x17A654u;
    SET_GPR_U32(ctx, 31, 0x17A65Cu);
    ctx->pc = 0x17A658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A65Cu; }
    }
    if (ctx->pc != 0x17A65Cu) { return; }
    ctx->pc = 0x17A65Cu;
    // 0x17a65c: 0x24030008
    ctx->pc = 0x17a65cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17a660: 0xae030004
    ctx->pc = 0x17a660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x17a664: 0xdfbf0008
    ctx->pc = 0x17a664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a668: 0xdfb00000
    ctx->pc = 0x17a668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a66c: 0x3e00008
    ctx->pc = 0x17A66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A638u: goto label_17a638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A674u;
    // 0x17a674: 0x0
    ctx->pc = 0x17a674u;
    // NOP
}
