#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168888
// Address: 0x168888 - 0x168908
void sub_00168888_0x168888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168888u;

    // 0x168888: 0x27bdffd0
    ctx->pc = 0x168888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16888c: 0xffb00010
    ctx->pc = 0x16888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168890: 0xa0802d
    ctx->pc = 0x168890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168894: 0xffb10018
    ctx->pc = 0x168894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x168898: 0xffb20020
    ctx->pc = 0x168898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16889c: 0xffbf0028
    ctx->pc = 0x16889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1688a0: 0xc0560fc
    ctx->pc = 0x1688A0u;
    SET_GPR_U32(ctx, 31, 0x1688A8u);
    ctx->pc = 0x1688A4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1583F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583F0_0x1583f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A8u; }
    }
    if (ctx->pc != 0x1688A8u) { return; }
    ctx->pc = 0x1688A8u;
    // 0x1688a8: 0x40882d
    ctx->pc = 0x1688a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688ac: 0x2a020007
    ctx->pc = 0x1688acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x1688b0: 0x24030006
    ctx->pc = 0x1688b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1688b4: 0x240282d
    ctx->pc = 0x1688b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688b8: 0x202180b
    ctx->pc = 0x1688b8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
    // 0x1688bc: 0x200302d
    ctx->pc = 0x1688bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688c0: 0x3a0382d
    ctx->pc = 0x1688c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688c4: 0x27a80004
    ctx->pc = 0x1688c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    // 0x1688c8: 0x220202d
    ctx->pc = 0x1688c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688cc: 0x12200007
    ctx->pc = 0x1688CCu;
    {
        const bool branch_taken_0x1688cc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1688D0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x1688cc) {
            ctx->pc = 0x1688ECu;
            goto label_1688ec;
        }
    }
    ctx->pc = 0x1688D4u;
    // 0x1688d4: 0xc055900
    ctx->pc = 0x1688D4u;
    SET_GPR_U32(ctx, 31, 0x1688DCu);
    ctx->pc = 0x156400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00156400_0x156400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688DCu; }
    }
    if (ctx->pc != 0x1688DCu) { return; }
    ctx->pc = 0x1688DCu;
    // 0x1688dc: 0xc05615a
    ctx->pc = 0x1688DCu;
    SET_GPR_U32(ctx, 31, 0x1688E4u);
    ctx->pc = 0x1688E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158568u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158568_0x158568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688E4u; }
    }
    if (ctx->pc != 0x1688E4u) { return; }
    ctx->pc = 0x1688E4u;
    // 0x1688e4: 0x8fa20000
    ctx->pc = 0x1688e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1688e8: 0x2421021
    ctx->pc = 0x1688e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1688ec:
    // 0x1688ec: 0xdfb00010
    ctx->pc = 0x1688ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1688f0: 0xdfb10018
    ctx->pc = 0x1688f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1688f4: 0xdfb20020
    ctx->pc = 0x1688f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1688f8: 0xdfbf0028
    ctx->pc = 0x1688f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1688fc: 0x3e00008
    ctx->pc = 0x1688FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1688ECu: goto label_1688ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168904u;
    // 0x168904: 0x0
    ctx->pc = 0x168904u;
    // NOP
}
