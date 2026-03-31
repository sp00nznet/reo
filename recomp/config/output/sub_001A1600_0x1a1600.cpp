#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1600
// Address: 0x1a1600 - 0x1a1670
void sub_001A1600_0x1a1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1600u;

    // 0x1a1600: 0x27bdffe0
    ctx->pc = 0x1a1600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1604: 0xffbf0010
    ctx->pc = 0x1a1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1608: 0x7fb00000
    ctx->pc = 0x1a1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a160c: 0x8c850000
    ctx->pc = 0x1a160cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1610: 0x1000000e
    ctx->pc = 0x1A1610u;
    {
        const bool branch_taken_0x1a1610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1614u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1610) {
            ctx->pc = 0x1A164Cu;
            goto label_1a164c;
        }
    }
    ctx->pc = 0x1A1618u;
label_1a1618:
    // 0x1a1618: 0x8c820008
    ctx->pc = 0x1a1618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a161c: 0x101900
    ctx->pc = 0x1a161cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a1620: 0x431821
    ctx->pc = 0x1a1620u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1624: 0x8c620004
    ctx->pc = 0x1a1624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1628: 0x14400007
    ctx->pc = 0x1A1628u;
    {
        const bool branch_taken_0x1a1628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1628) {
            ctx->pc = 0x1A1648u;
            goto label_1a1648;
        }
    }
    ctx->pc = 0x1A1630u;
    // 0x1a1630: 0x60202d
    ctx->pc = 0x1a1630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1634: 0x282d
    ctx->pc = 0x1a1634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1638: 0xc0696c4
    ctx->pc = 0x1A1638u;
    SET_GPR_U32(ctx, 31, 0x1A1640u);
    ctx->pc = 0x1A163Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1A5B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B10_0x1a5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1640u; }
    }
    if (ctx->pc != 0x1A1640u) { return; }
    ctx->pc = 0x1A1640u;
    // 0x1a1640: 0x10000005
    ctx->pc = 0x1A1640u;
    {
        const bool branch_taken_0x1a1640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1644u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1640) {
            ctx->pc = 0x1A1658u;
            goto label_1a1658;
        }
    }
    ctx->pc = 0x1A1648u;
label_1a1648:
    // 0x1a1648: 0x26100001
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1a164c:
    // 0x1a164c: 0x205102a
    ctx->pc = 0x1a164cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 5)));
    // 0x1a1650: 0x1440fff1
    ctx->pc = 0x1A1650u;
    {
        const bool branch_taken_0x1a1650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1654u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x1a1650) {
            ctx->pc = 0x1A1618u;
            goto label_1a1618;
        }
    }
    ctx->pc = 0x1A1658u;
label_1a1658:
    // 0x1a1658: 0xdfbf0010
    ctx->pc = 0x1a1658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a165c: 0x7bb00000
    ctx->pc = 0x1a165cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1660: 0x3e00008
    ctx->pc = 0x1A1660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1664u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1618u: goto label_1a1618;
            case 0x1A1648u: goto label_1a1648;
            case 0x1A164Cu: goto label_1a164c;
            case 0x1A1658u: goto label_1a1658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1668u;
    // 0x1a1668: 0x0
    ctx->pc = 0x1a1668u;
    // NOP
    // 0x1a166c: 0x0
    ctx->pc = 0x1a166cu;
    // NOP
}
