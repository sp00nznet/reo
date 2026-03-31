#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DE828
// Address: 0x1de828 - 0x1de8e0
void sub_001DE828_0x1de828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1de828u;

    // 0x1de828: 0x27bdffe0
    ctx->pc = 0x1de828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de82c: 0xffbe0010
    ctx->pc = 0x1de82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1de830: 0xffbf0018
    ctx->pc = 0x1de830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de834: 0x3a0f02d
    ctx->pc = 0x1de834u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de838: 0xafc40000
    ctx->pc = 0x1de838u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1de83c: 0x8fc40000
    ctx->pc = 0x1de83cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de840: 0xc077950
    ctx->pc = 0x1DE840u;
    SET_GPR_U32(ctx, 31, 0x1DE848u);
    ctx->pc = 0x1DE540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE540_0x1de540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE848u; }
    }
    if (ctx->pc != 0x1DE848u) { return; }
    ctx->pc = 0x1DE848u;
    // 0x1de848: 0x8fc20000
    ctx->pc = 0x1de848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de84c: 0x2442000c
    ctx->pc = 0x1de84cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1de850: 0xafc2000c
    ctx->pc = 0x1de850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1de854: 0x8fc2000c
    ctx->pc = 0x1de854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1de858: 0xafc20008
    ctx->pc = 0x1de858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1de85c: 0xafc00004
    ctx->pc = 0x1de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1de860:
    // 0x1de860: 0x8fc20000
    ctx->pc = 0x1de860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de864: 0x8fc30004
    ctx->pc = 0x1de864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1de868: 0x8c420008
    ctx->pc = 0x1de868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de86c: 0x62102a
    ctx->pc = 0x1de86cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1de870: 0x14400003
    ctx->pc = 0x1DE870u;
    {
        const bool branch_taken_0x1de870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1de870) {
            ctx->pc = 0x1DE880u;
            goto label_1de880;
        }
    }
    ctx->pc = 0x1DE878u;
    // 0x1de878: 0x10000013
    ctx->pc = 0x1DE878u;
    {
        const bool branch_taken_0x1de878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de878) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE880u;
label_1de880:
    // 0x1de880: 0x8fc4000c
    ctx->pc = 0x1de880u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1de884: 0xc0779d3
    ctx->pc = 0x1DE884u;
    SET_GPR_U32(ctx, 31, 0x1DE88Cu);
    ctx->pc = 0x1DE74Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE74C_0x1de74c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE88Cu; }
    }
    if (ctx->pc != 0x1DE88Cu) { return; }
    ctx->pc = 0x1DE88Cu;
    // 0x1de88c: 0x8fc2000c
    ctx->pc = 0x1de88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1de890: 0x8c420018
    ctx->pc = 0x1de890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1de894: 0x2442001f
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x1de898: 0x21082
    ctx->pc = 0x1de898u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x1de89c: 0x21880
    ctx->pc = 0x1de89cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de8a0: 0x8fc20008
    ctx->pc = 0x1de8a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1de8a4: 0x431021
    ctx->pc = 0x1de8a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de8a8: 0xafc20008
    ctx->pc = 0x1de8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1de8ac: 0x8fc20008
    ctx->pc = 0x1de8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1de8b0: 0xafc2000c
    ctx->pc = 0x1de8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1de8b4: 0x8fc20004
    ctx->pc = 0x1de8b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1de8b8: 0x24420001
    ctx->pc = 0x1de8b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de8bc: 0xafc20004
    ctx->pc = 0x1de8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1de8c0: 0x1000ffe7
    ctx->pc = 0x1DE8C0u;
    {
        const bool branch_taken_0x1de8c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de8c0) {
            ctx->pc = 0x1DE860u;
            goto label_1de860;
        }
    }
    ctx->pc = 0x1DE8C8u;
label_1de8c8:
    // 0x1de8c8: 0x3c0e82d
    ctx->pc = 0x1de8c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de8cc: 0xdfbe0010
    ctx->pc = 0x1de8ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de8d0: 0xdfbf0018
    ctx->pc = 0x1de8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de8d4: 0x27bd0020
    ctx->pc = 0x1de8d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de8d8: 0x3e00008
    ctx->pc = 0x1DE8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE860u: goto label_1de860;
            case 0x1DE880u: goto label_1de880;
            case 0x1DE8C8u: goto label_1de8c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE8E0u;
}
