#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168610
// Address: 0x168610 - 0x1686c8
void sub_00168610_0x168610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168610u;

    // 0x168610: 0x27bdffd0
    ctx->pc = 0x168610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168614: 0xffb00000
    ctx->pc = 0x168614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168618: 0xa0802d
    ctx->pc = 0x168618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16861c: 0xffb10008
    ctx->pc = 0x16861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168620: 0x80882d
    ctx->pc = 0x168620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168624: 0xffb30018
    ctx->pc = 0x168624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168628: 0x982d
    ctx->pc = 0x168628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16862c: 0xffb40020
    ctx->pc = 0x16862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168630: 0xc0a02d
    ctx->pc = 0x168630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168634: 0xffb20010
    ctx->pc = 0x168634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168638: 0xffbf0028
    ctx->pc = 0x168638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16863c: 0x10000008
    ctx->pc = 0x16863Cu;
    {
        const bool branch_taken_0x16863c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168640u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 16)));
        if (branch_taken_0x16863c) {
            ctx->pc = 0x168660u;
            goto label_168660;
        }
    }
    ctx->pc = 0x168644u;
    // 0x168644: 0x0
    ctx->pc = 0x168644u;
    // NOP
label_168648:
    // 0x168648: 0x2128023
    ctx->pc = 0x168648u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x16864c: 0x10600015
    ctx->pc = 0x16864Cu;
    {
        const bool branch_taken_0x16864c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x168650u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        if (branch_taken_0x16864c) {
            ctx->pc = 0x1686A4u;
            goto label_1686a4;
        }
    }
    ctx->pc = 0x168654u;
    // 0x168654: 0x5a000014
    ctx->pc = 0x168654u;
    {
        const bool branch_taken_0x168654 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x168654) {
            ctx->pc = 0x168658u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1686A8u;
            goto label_1686a8;
        }
    }
    ctx->pc = 0x16865Cu;
    // 0x16865c: 0x26730001
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_168660:
    // 0x168660: 0x220202d
    ctx->pc = 0x168660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168664: 0xc05a426
    ctx->pc = 0x168664u;
    SET_GPR_U32(ctx, 31, 0x16866Cu);
    ctx->pc = 0x168668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169098u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169098_0x169098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16866Cu; }
    }
    if (ctx->pc != 0x16866Cu) { return; }
    ctx->pc = 0x16866Cu;
    // 0x16866c: 0x1040fff6
    ctx->pc = 0x16866Cu;
    {
        const bool branch_taken_0x16866c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168670u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 3));
        if (branch_taken_0x16866c) {
            ctx->pc = 0x168648u;
            goto label_168648;
        }
    }
    ctx->pc = 0x168674u;
    // 0x168674: 0x3c020027
    ctx->pc = 0x168674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x168678: 0x220202d
    ctx->pc = 0x168678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16867c: 0x24510f70
    ctx->pc = 0x16867cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 3952));
    // 0x168680: 0x200282d
    ctx->pc = 0x168680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168684: 0xc05a1b2
    ctx->pc = 0x168684u;
    SET_GPR_U32(ctx, 31, 0x16868Cu);
    ctx->pc = 0x168688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1686C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001686C8_0x1686c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16868Cu; }
    }
    if (ctx->pc != 0x16868Cu) { return; }
    ctx->pc = 0x16868Cu;
    // 0x16868c: 0x8e220000
    ctx->pc = 0x16868cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168690: 0x10400005
    ctx->pc = 0x168690u;
    {
        const bool branch_taken_0x168690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168694u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x168690) {
            ctx->pc = 0x1686A8u;
            goto label_1686a8;
        }
    }
    ctx->pc = 0x168698u;
    // 0x168698: 0x8e22000c
    ctx->pc = 0x168698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16869c: 0x5c400002
    ctx->pc = 0x16869Cu;
    {
        const bool branch_taken_0x16869c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x16869c) {
            ctx->pc = 0x1686A0u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
            ctx->pc = 0x1686A8u;
            goto label_1686a8;
        }
    }
    ctx->pc = 0x1686A4u;
label_1686a4:
    // 0x1686a4: 0xdfb00000
    ctx->pc = 0x1686a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1686a8:
    // 0x1686a8: 0xdfb10008
    ctx->pc = 0x1686a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1686ac: 0xdfb20010
    ctx->pc = 0x1686acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1686b0: 0xdfb30018
    ctx->pc = 0x1686b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1686b4: 0xdfb40020
    ctx->pc = 0x1686b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1686b8: 0xdfbf0028
    ctx->pc = 0x1686b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1686bc: 0x3e00008
    ctx->pc = 0x1686BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1686C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168648u: goto label_168648;
            case 0x168660u: goto label_168660;
            case 0x1686A4u: goto label_1686a4;
            case 0x1686A8u: goto label_1686a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1686C4u;
    // 0x1686c4: 0x0
    ctx->pc = 0x1686c4u;
    // NOP
}
