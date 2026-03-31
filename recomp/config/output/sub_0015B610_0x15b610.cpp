#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B610
// Address: 0x15b610 - 0x15b690
void sub_0015B610_0x15b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b610u;

    // 0x15b610: 0x24840078
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 120));
    // 0x15b614: 0x8c820018
    ctx->pc = 0x15b614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15b618: 0xaca20000
    ctx->pc = 0x15b618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15b61c: 0x8c83001c
    ctx->pc = 0x15b61cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15b620: 0x3e00008
    ctx->pc = 0x15B620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B624u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B660u: goto label_15b660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B628u;
    // 0x15b628: 0x27bdfff0
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b62c: 0xffb00000
    ctx->pc = 0x15b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b630: 0xffbf0008
    ctx->pc = 0x15b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15b634: 0xc056dec
    ctx->pc = 0x15B634u;
    SET_GPR_U32(ctx, 31, 0x15B63Cu);
    ctx->pc = 0x15B638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B63Cu; }
    }
    if (ctx->pc != 0x15B63Cu) { return; }
    ctx->pc = 0x15B63Cu;
    // 0x15b63c: 0x3c05ff03
    ctx->pc = 0x15b63cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x15b640: 0x200202d
    ctx->pc = 0x15b640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b644: 0x10400006
    ctx->pc = 0x15B644u;
    {
        const bool branch_taken_0x15b644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B648u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 513));
        if (branch_taken_0x15b644) {
            ctx->pc = 0x15B660u;
            goto label_15b660;
        }
    }
    ctx->pc = 0x15B64Cu;
    // 0x15b64c: 0xdfb00000
    ctx->pc = 0x15b64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b650: 0x202d
    ctx->pc = 0x15b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b654: 0xdfbf0008
    ctx->pc = 0x15b654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b658: 0x80563ce
    ctx->pc = 0x15B658u;
    ctx->pc = 0x15B65Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x15B660u;
label_15b660:
    // 0x15b660: 0xc056e0e
    ctx->pc = 0x15B660u;
    SET_GPR_U32(ctx, 31, 0x15B668u);
    ctx->pc = 0x15B838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B838_0x15b838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B668u; }
    }
    if (ctx->pc != 0x15B668u) { return; }
    ctx->pc = 0x15B668u;
    // 0x15b668: 0x200202d
    ctx->pc = 0x15b668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b66c: 0xc056da6
    ctx->pc = 0x15B66Cu;
    SET_GPR_U32(ctx, 31, 0x15B674u);
    ctx->pc = 0x15B670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 964));
    ctx->pc = 0x15B698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B698_0x15b698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B674u; }
    }
    if (ctx->pc != 0x15B674u) { return; }
    ctx->pc = 0x15B674u;
    // 0x15b674: 0x24020001
    ctx->pc = 0x15b674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b678: 0xae020188
    ctx->pc = 0x15b678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x15b67c: 0x102d
    ctx->pc = 0x15b67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b680: 0xdfb00000
    ctx->pc = 0x15b680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b684: 0xdfbf0008
    ctx->pc = 0x15b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b688: 0x3e00008
    ctx->pc = 0x15B688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B68Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B660u: goto label_15b660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B690u;
}
