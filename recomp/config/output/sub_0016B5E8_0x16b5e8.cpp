#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B5E8
// Address: 0x16b5e8 - 0x16b680
void sub_0016B5E8_0x16b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b5e8u;

    // 0x16b5e8: 0x27bdffb0
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b5ec: 0xffb10038
    ctx->pc = 0x16b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16b5f0: 0x2491090c
    ctx->pc = 0x16b5f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 2316));
    // 0x16b5f4: 0xffb00030
    ctx->pc = 0x16b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16b5f8: 0x3a0282d
    ctx->pc = 0x16b5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5fc: 0xffb20040
    ctx->pc = 0x16b5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16b600: 0xffbf0048
    ctx->pc = 0x16b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16b604: 0x8c921aec
    ctx->pc = 0x16b604u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 6892)));
    // 0x16b608: 0x8e500000
    ctx->pc = 0x16b608u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16b60c: 0xc055f74
    ctx->pc = 0x16B60Cu;
    SET_GPR_U32(ctx, 31, 0x16B614u);
    ctx->pc = 0x16B610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157DD0_0x157dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B614u; }
    }
    if (ctx->pc != 0x16B614u) { return; }
    ctx->pc = 0x16B614u;
    // 0x16b614: 0x200202d
    ctx->pc = 0x16b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b618: 0x8fa20008
    ctx->pc = 0x16b618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b61c: 0x27a50010
    ctx->pc = 0x16b61cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b620: 0x18400002
    ctx->pc = 0x16B620u;
    {
        const bool branch_taken_0x16b620 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16B624u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16b620) {
            ctx->pc = 0x16B62Cu;
            goto label_16b62c;
        }
    }
    ctx->pc = 0x16B628u;
    // 0x16b628: 0xae220018
    ctx->pc = 0x16b628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_16b62c:
    // 0x16b62c: 0xc055f90
    ctx->pc = 0x16B62Cu;
    SET_GPR_U32(ctx, 31, 0x16B634u);
    ctx->pc = 0x157E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157E40_0x157e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B634u; }
    }
    if (ctx->pc != 0x16B634u) { return; }
    ctx->pc = 0x16B634u;
    // 0x16b634: 0x2403ffff
    ctx->pc = 0x16b634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b638: 0x8fa20020
    ctx->pc = 0x16b638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b63c: 0x54430001
    ctx->pc = 0x16B63Cu;
    {
        const bool branch_taken_0x16b63c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16b63c) {
            ctx->pc = 0x16B640u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
            ctx->pc = 0x16B644u;
            goto label_16b644;
        }
    }
    ctx->pc = 0x16B644u;
label_16b644:
    // 0x16b644: 0x8e220024
    ctx->pc = 0x16b644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16b648: 0x54430004
    ctx->pc = 0x16B648u;
    {
        const bool branch_taken_0x16b648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16b648) {
            ctx->pc = 0x16B64Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->pc = 0x16B65Cu;
            goto label_16b65c;
        }
    }
    ctx->pc = 0x16B650u;
    // 0x16b650: 0x8e420008
    ctx->pc = 0x16b650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16b654: 0xae220024
    ctx->pc = 0x16b654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x16b658: 0x8e220028
    ctx->pc = 0x16b658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_16b65c:
    // 0x16b65c: 0x14430003
    ctx->pc = 0x16B65Cu;
    {
        const bool branch_taken_0x16b65c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16B660u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x16b65c) {
            ctx->pc = 0x16B66Cu;
            goto label_16b66c;
        }
    }
    ctx->pc = 0x16B664u;
    // 0x16b664: 0x8e420004
    ctx->pc = 0x16b664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16b668: 0xae220028
    ctx->pc = 0x16b668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_16b66c:
    // 0x16b66c: 0xdfb10038
    ctx->pc = 0x16b66cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b670: 0xdfb20040
    ctx->pc = 0x16b670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b674: 0xdfbf0048
    ctx->pc = 0x16b674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16b678: 0x3e00008
    ctx->pc = 0x16B678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B67Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B62Cu: goto label_16b62c;
            case 0x16B644u: goto label_16b644;
            case 0x16B65Cu: goto label_16b65c;
            case 0x16B66Cu: goto label_16b66c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B680u;
}
