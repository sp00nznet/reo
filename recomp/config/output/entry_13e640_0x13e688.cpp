#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13e640
// Address: 0x13e640 - 0x13e688
void entry_13e640_0x13e688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e640u;

    // 0x13e640: 0x27bdfff0
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e644: 0x3c020022
    ctx->pc = 0x13e644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13e648: 0xffb00000
    ctx->pc = 0x13e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e64c: 0x24501468
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 5224));
    // 0x13e650: 0x8e030000
    ctx->pc = 0x13e650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e654: 0x10600008
    ctx->pc = 0x13E654u;
    {
        const bool branch_taken_0x13e654 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E658u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13e654) {
            ctx->pc = 0x13E678u;
            goto label_13e678;
        }
    }
    ctx->pc = 0x13E65Cu;
    // 0x13e65c: 0x2404000f
    ctx->pc = 0x13e65cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x13e660: 0x282d
    ctx->pc = 0x13e660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e664: 0x302d
    ctx->pc = 0x13e664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e668: 0x382d
    ctx->pc = 0x13e668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e66c: 0xc04e518
    ctx->pc = 0x13E66Cu;
    SET_GPR_U32(ctx, 31, 0x13E674u);
    ctx->pc = 0x13E670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E674u; }
    }
    if (ctx->pc != 0x13E674u) { return; }
    ctx->pc = 0x13E674u;
    // 0x13e674: 0xae000000
    ctx->pc = 0x13e674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13e678:
    // 0x13e678: 0xdfb00000
    ctx->pc = 0x13e678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e67c: 0xdfbf0008
    ctx->pc = 0x13e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e680: 0x3e00008
    ctx->pc = 0x13E680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E678u: goto label_13e678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E688u;
}
