#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00118620
// Address: 0x118620 - 0x118670
void sub_00118620_0x118620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118620u;

    // 0x118620: 0x27bdffc0
    ctx->pc = 0x118620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118624: 0x2403ffff
    ctx->pc = 0x118624u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118628: 0xffb00020
    ctx->pc = 0x118628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11862c: 0x3c100021
    ctx->pc = 0x11862cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x118630: 0xffbf0030
    ctx->pc = 0x118630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118634: 0x8e029de4
    ctx->pc = 0x118634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294942180)));
    // 0x118638: 0x14430009
    ctx->pc = 0x118638u;
    {
        const bool branch_taken_0x118638 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x11863Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x118638) {
            ctx->pc = 0x118660u;
            goto label_118660;
        }
    }
    ctx->pc = 0x118640u;
    // 0x118640: 0x24020001
    ctx->pc = 0x118640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x118644: 0xafa00014
    ctx->pc = 0x118644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x118648: 0xafa20004
    ctx->pc = 0x118648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11864c: 0x3a0202d
    ctx->pc = 0x11864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118650: 0xc045188
    ctx->pc = 0x118650u;
    SET_GPR_U32(ctx, 31, 0x118658u);
    ctx->pc = 0x118654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118658u; }
    }
    if (ctx->pc != 0x118658u) { return; }
    ctx->pc = 0x118658u;
    // 0x118658: 0xae029de4
    ctx->pc = 0x118658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942180), GPR_U32(ctx, 2));
    // 0x11865c: 0xdfbf0030
    ctx->pc = 0x11865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_118660:
    // 0x118660: 0xdfb00020
    ctx->pc = 0x118660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118664: 0x3e00008
    ctx->pc = 0x118664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118660u: goto label_118660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11866Cu;
    // 0x11866c: 0x0
    ctx->pc = 0x11866cu;
    // NOP
}
