#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016BB98
// Address: 0x16bb98 - 0x16bbe8
void sub_0016BB98_0x16bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16bb98u;

    // 0x16bb98: 0x27bdfff0
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bb9c: 0xffb00000
    ctx->pc = 0x16bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bba0: 0x80802d
    ctx->pc = 0x16bba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bba4: 0xffbf0008
    ctx->pc = 0x16bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16bba8: 0x8e032ab0
    ctx->pc = 0x16bba8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x16bbac: 0x10600009
    ctx->pc = 0x16BBACu;
    {
        const bool branch_taken_0x16bbac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BBB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bbac) {
            ctx->pc = 0x16BBD4u;
            goto label_16bbd4;
        }
    }
    ctx->pc = 0x16BBB4u;
    // 0x16bbb4: 0xc05aefa
    ctx->pc = 0x16BBB4u;
    SET_GPR_U32(ctx, 31, 0x16BBBCu);
    ctx->pc = 0x16BBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BBE8_0x16bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBBCu; }
    }
    if (ctx->pc != 0x16BBBCu) { return; }
    ctx->pc = 0x16BBBCu;
    // 0x16bbbc: 0x58400004
    ctx->pc = 0x16BBBCu;
    {
        const bool branch_taken_0x16bbbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16bbbc) {
            ctx->pc = 0x16BBC0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
            ctx->pc = 0x16BBD0u;
            goto label_16bbd0;
        }
    }
    ctx->pc = 0x16BBC4u;
    // 0x16bbc4: 0x10000003
    ctx->pc = 0x16BBC4u;
    {
        const bool branch_taken_0x16bbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BBC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bbc4) {
            ctx->pc = 0x16BBD4u;
            goto label_16bbd4;
        }
    }
    ctx->pc = 0x16BBCCu;
    // 0x16bbcc: 0x0
    ctx->pc = 0x16bbccu;
    // NOP
label_16bbd0:
    // 0x16bbd0: 0x244208a0
    ctx->pc = 0x16bbd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2208));
label_16bbd4:
    // 0x16bbd4: 0xdfb00000
    ctx->pc = 0x16bbd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bbd8: 0xdfbf0008
    ctx->pc = 0x16bbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bbdc: 0x3e00008
    ctx->pc = 0x16BBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BBD0u: goto label_16bbd0;
            case 0x16BBD4u: goto label_16bbd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BBE4u;
    // 0x16bbe4: 0x0
    ctx->pc = 0x16bbe4u;
    // NOP
}
