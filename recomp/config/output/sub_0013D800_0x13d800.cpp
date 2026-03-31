#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D800
// Address: 0x13d800 - 0x13d8b0
void sub_0013D800_0x13d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d800u;

    // 0x13d800: 0x27bdffe0
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d804: 0xffb00000
    ctx->pc = 0x13d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d808: 0x80802d
    ctx->pc = 0x13d808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d80c: 0xffb10008
    ctx->pc = 0x13d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d810: 0xffbf0010
    ctx->pc = 0x13d810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d814: 0x8e020028
    ctx->pc = 0x13d814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13d818: 0x14400009
    ctx->pc = 0x13D818u;
    {
        const bool branch_taken_0x13d818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D81Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d818) {
            ctx->pc = 0x13D840u;
            goto label_13d840;
        }
    }
    ctx->pc = 0x13D820u;
    // 0x13d820: 0x3c040024
    ctx->pc = 0x13d820u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d824: 0xdfb00000
    ctx->pc = 0x13d824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d828: 0xdfb10008
    ctx->pc = 0x13d828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d82c: 0x2484d498
    ctx->pc = 0x13d82cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956184));
    // 0x13d830: 0xdfbf0010
    ctx->pc = 0x13d830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d834: 0x804f53e
    ctx->pc = 0x13D834u;
    ctx->pc = 0x13D838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13D83Cu;
    // 0x13d83c: 0x0
    ctx->pc = 0x13d83cu;
    // NOP
label_13d840:
    // 0x13d840: 0x8e020020
    ctx->pc = 0x13d840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13d844: 0x21140
    ctx->pc = 0x13d844u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d848: 0x2021021
    ctx->pc = 0x13d848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d84c: 0xc04c16e
    ctx->pc = 0x13D84Cu;
    SET_GPR_U32(ctx, 31, 0x13D854u);
    ctx->pc = 0x13D850u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 56));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D854u; }
    }
    if (ctx->pc != 0x13D854u) { return; }
    ctx->pc = 0x13D854u;
    // 0x13d854: 0x40182d
    ctx->pc = 0x13d854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d858: 0x24020004
    ctx->pc = 0x13d858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x13d85c: 0x14620004
    ctx->pc = 0x13D85Cu;
    {
        const bool branch_taken_0x13d85c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x13D860u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x13d85c) {
            ctx->pc = 0x13D870u;
            goto label_13d870;
        }
    }
    ctx->pc = 0x13D864u;
    // 0x13d864: 0x24020003
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d868: 0x1000000c
    ctx->pc = 0x13D868u;
    {
        const bool branch_taken_0x13d868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D86Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x13d868) {
            ctx->pc = 0x13D89Cu;
            goto label_13d89c;
        }
    }
    ctx->pc = 0x13D870u;
label_13d870:
    // 0x13d870: 0x14640005
    ctx->pc = 0x13D870u;
    {
        const bool branch_taken_0x13d870 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x13D874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x13d870) {
            ctx->pc = 0x13D888u;
            goto label_13d888;
        }
    }
    ctx->pc = 0x13D878u;
    // 0x13d878: 0xc04c182
    ctx->pc = 0x13D878u;
    SET_GPR_U32(ctx, 31, 0x13D880u);
    ctx->pc = 0x13D87Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x130608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130608_0x130608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D880u; }
    }
    if (ctx->pc != 0x13D880u) { return; }
    ctx->pc = 0x13D880u;
    // 0x13d880: 0x10000006
    ctx->pc = 0x13D880u;
    {
        const bool branch_taken_0x13d880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D884u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x13d880) {
            ctx->pc = 0x13D89Cu;
            goto label_13d89c;
        }
    }
    ctx->pc = 0x13D888u;
label_13d888:
    // 0x13d888: 0x54620005
    ctx->pc = 0x13D888u;
    {
        const bool branch_taken_0x13d888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d888) {
            ctx->pc = 0x13D88Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13D8A0u;
            goto label_13d8a0;
        }
    }
    ctx->pc = 0x13D890u;
    // 0x13d890: 0x8e02002c
    ctx->pc = 0x13d890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13d894: 0xae240018
    ctx->pc = 0x13d894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x13d898: 0xae22001c
    ctx->pc = 0x13d898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_13d89c:
    // 0x13d89c: 0xdfb00000
    ctx->pc = 0x13d89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d8a0:
    // 0x13d8a0: 0xdfb10008
    ctx->pc = 0x13d8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d8a4: 0xdfbf0010
    ctx->pc = 0x13d8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d8a8: 0x3e00008
    ctx->pc = 0x13D8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D8ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D840u: goto label_13d840;
            case 0x13D870u: goto label_13d870;
            case 0x13D888u: goto label_13d888;
            case 0x13D89Cu: goto label_13d89c;
            case 0x13D8A0u: goto label_13d8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D8B0u;
}
