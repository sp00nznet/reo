#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148608
// Address: 0x148608 - 0x148670
void sub_00148608_0x148608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148608u;

    // 0x148608: 0x27bdffd0
    ctx->pc = 0x148608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14860c: 0xffb10010
    ctx->pc = 0x14860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x148610: 0xffbf0020
    ctx->pc = 0x148610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148614: 0x80882d
    ctx->pc = 0x148614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148618: 0xffb00000
    ctx->pc = 0x148618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14861c: 0x8e300040
    ctx->pc = 0x14861cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x148620: 0x8e020004
    ctx->pc = 0x148620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148624: 0x1040000c
    ctx->pc = 0x148624u;
    {
        const bool branch_taken_0x148624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148628u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148624) {
            ctx->pc = 0x148658u;
            goto label_148658;
        }
    }
    ctx->pc = 0x14862Cu;
    // 0x14862c: 0x8e020008
    ctx->pc = 0x14862cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148630: 0x1040000a
    ctx->pc = 0x148630u;
    {
        const bool branch_taken_0x148630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148634u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x148630) {
            ctx->pc = 0x14865Cu;
            goto label_14865c;
        }
    }
    ctx->pc = 0x148638u;
    // 0x148638: 0xc0521a0
    ctx->pc = 0x148638u;
    SET_GPR_U32(ctx, 31, 0x148640u);
    ctx->pc = 0x14863Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148680u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148680_0x148680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148640u; }
    }
    if (ctx->pc != 0x148640u) { return; }
    ctx->pc = 0x148640u;
    // 0x148640: 0x8e020130
    ctx->pc = 0x148640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x148644: 0x24040001
    ctx->pc = 0x148644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148648: 0x8e0300c4
    ctx->pc = 0x148648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x14864c: 0x431023
    ctx->pc = 0x14864cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148650: 0xae220008
    ctx->pc = 0x148650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x148654: 0xae000004
    ctx->pc = 0x148654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_148658:
    // 0x148658: 0xdfbf0020
    ctx->pc = 0x148658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14865c:
    // 0x14865c: 0x80102d
    ctx->pc = 0x14865cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148660: 0xdfb10010
    ctx->pc = 0x148660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148664: 0xdfb00000
    ctx->pc = 0x148664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148668: 0x3e00008
    ctx->pc = 0x148668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14866Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148658u: goto label_148658;
            case 0x14865Cu: goto label_14865c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148670u;
}
