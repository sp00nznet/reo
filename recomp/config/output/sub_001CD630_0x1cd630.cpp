#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD630
// Address: 0x1cd630 - 0x1cd6a0
void sub_001CD630_0x1cd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd630u;

    // 0x1cd630: 0x27bdffe0
    ctx->pc = 0x1cd630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd634: 0x3c020023
    ctx->pc = 0x1cd634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd638: 0xffbf0010
    ctx->pc = 0x1cd638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd63c: 0x51880
    ctx->pc = 0x1cd63cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd640: 0x244266d0
    ctx->pc = 0x1cd640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26320));
    // 0x1cd644: 0x7fb00000
    ctx->pc = 0x1cd644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd648: 0x431021
    ctx->pc = 0x1cd648u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd64c: 0x80382d
    ctx->pc = 0x1cd64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd650: 0x8c460000
    ctx->pc = 0x1cd650u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd654: 0xa0802d
    ctx->pc = 0x1cd654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd658: 0x3c040034
    ctx->pc = 0x1cd658u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cd65c: 0x3c050025
    ctx->pc = 0x1cd65cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd660: 0x24840af0
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd664: 0xc042a0c
    ctx->pc = 0x1CD664u;
    SET_GPR_U32(ctx, 31, 0x1CD66Cu);
    ctx->pc = 0x1CD668u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24592));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD66Cu; }
    }
    if (ctx->pc != 0x1CD66Cu) { return; }
    ctx->pc = 0x1CD66Cu;
    // 0x1cd66c: 0x16000005
    ctx->pc = 0x1CD66Cu;
    {
        const bool branch_taken_0x1cd66c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD670u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1cd66c) {
            ctx->pc = 0x1CD684u;
            goto label_1cd684;
        }
    }
    ctx->pc = 0x1CD674u;
    // 0x1cd674: 0x3c050025
    ctx->pc = 0x1cd674u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd678: 0x24840af0
    ctx->pc = 0x1cd678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd67c: 0xc042aee
    ctx->pc = 0x1CD67Cu;
    SET_GPR_U32(ctx, 31, 0x1CD684u);
    ctx->pc = 0x1CD680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24480));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD684u; }
    }
    if (ctx->pc != 0x1CD684u) { return; }
    ctx->pc = 0x1CD684u;
label_1cd684:
    // 0x1cd684: 0xdfbf0010
    ctx->pc = 0x1cd684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd688: 0x3c020034
    ctx->pc = 0x1cd688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cd68c: 0x7bb00000
    ctx->pc = 0x1cd68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd690: 0x24420af0
    ctx->pc = 0x1cd690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2800));
    // 0x1cd694: 0x3e00008
    ctx->pc = 0x1CD694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD698u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD684u: goto label_1cd684;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD69Cu;
    // 0x1cd69c: 0x0
    ctx->pc = 0x1cd69cu;
    // NOP
}
