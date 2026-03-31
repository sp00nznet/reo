#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001773A8
// Address: 0x1773a8 - 0x177440
void sub_001773A8_0x1773a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1773a8u;

    // 0x1773a8: 0x27bdffd0
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1773ac: 0x80182d
    ctx->pc = 0x1773acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773b0: 0xffb00010
    ctx->pc = 0x1773b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1773b4: 0x24020001
    ctx->pc = 0x1773b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1773b8: 0xffb10018
    ctx->pc = 0x1773b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1773bc: 0xffbf0020
    ctx->pc = 0x1773bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1773c0: 0x8c65094c
    ctx->pc = 0x1773c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 2380)));
    // 0x1773c4: 0x24630cc0
    ctx->pc = 0x1773c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3264));
    // 0x1773c8: 0x8c70023c
    ctx->pc = 0x1773c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x1773cc: 0x10a00017
    ctx->pc = 0x1773CCu;
    {
        const bool branch_taken_0x1773cc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1773D0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 568)));
        if (branch_taken_0x1773cc) {
            ctx->pc = 0x17742Cu;
            goto label_17742c;
        }
    }
    ctx->pc = 0x1773D4u;
    // 0x1773d4: 0x2403fffb
    ctx->pc = 0x1773d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1773d8: 0x12230014
    ctx->pc = 0x1773D8u;
    {
        const bool branch_taken_0x1773d8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x1773DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1773d8) {
            ctx->pc = 0x17742Cu;
            goto label_17742c;
        }
    }
    ctx->pc = 0x1773E0u;
    // 0x1773e0: 0x3a0282d
    ctx->pc = 0x1773e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773e4: 0xc05d8d4
    ctx->pc = 0x1773E4u;
    SET_GPR_U32(ctx, 31, 0x1773ECu);
    ctx->pc = 0x1773E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x176350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176350_0x176350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773ECu; }
    }
    if (ctx->pc != 0x1773ECu) { return; }
    ctx->pc = 0x1773ECu;
    // 0x1773ec: 0x3403ea24
    ctx->pc = 0x1773ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 59940));
    // 0x1773f0: 0x102140
    ctx->pc = 0x1773f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 5));
    // 0x1773f4: 0x50600001
    ctx->pc = 0x1773F4u;
    {
        const bool branch_taken_0x1773f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1773f4) {
            ctx->pc = 0x1773F8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1773FCu;
            goto label_1773fc;
        }
    }
    ctx->pc = 0x1773FCu;
label_1773fc:
    // 0x1773fc: 0x902023
    ctx->pc = 0x1773fcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x177400: 0x8fa60000
    ctx->pc = 0x177400u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177404: 0x42080
    ctx->pc = 0x177404u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x177408: 0x8fa70004
    ctx->pc = 0x177408u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17740c: 0x902021
    ctx->pc = 0x17740cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x177410: 0x200282d
    ctx->pc = 0x177410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177414: 0x42100
    ctx->pc = 0x177414u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x177418: 0x83001a
    ctx->pc = 0x177418u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x17741c: 0x2012
    ctx->pc = 0x17741cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x177420: 0xc05407a
    ctx->pc = 0x177420u;
    SET_GPR_U32(ctx, 31, 0x177428u);
    ctx->pc = 0x177424u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x1501E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001501E8_0x1501e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177428u; }
    }
    if (ctx->pc != 0x177428u) { return; }
    ctx->pc = 0x177428u;
    // 0x177428: 0x2102b
    ctx->pc = 0x177428u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_17742c:
    // 0x17742c: 0xdfb00010
    ctx->pc = 0x17742cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177430: 0xdfb10018
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177434: 0xdfbf0020
    ctx->pc = 0x177434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177438: 0x3e00008
    ctx->pc = 0x177438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17743Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1773FCu: goto label_1773fc;
            case 0x17742Cu: goto label_17742c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177440u;
}
