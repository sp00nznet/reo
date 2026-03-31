#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B850
// Address: 0x15b850 - 0x15b910
void sub_0015B850_0x15b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b850u;

    // 0x15b850: 0x27bdffd0
    ctx->pc = 0x15b850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b854: 0xffb10008
    ctx->pc = 0x15b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15b858: 0x80882d
    ctx->pc = 0x15b858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b85c: 0xffb30018
    ctx->pc = 0x15b85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15b860: 0xffb00000
    ctx->pc = 0x15b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b864: 0xffb20010
    ctx->pc = 0x15b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15b868: 0xffbf0020
    ctx->pc = 0x15b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b86c: 0xc05408c
    ctx->pc = 0x15B86Cu;
    SET_GPR_U32(ctx, 31, 0x15B874u);
    ctx->pc = 0x15B870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150230_0x150230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B874u; }
    }
    if (ctx->pc != 0x15B874u) { return; }
    ctx->pc = 0x15B874u;
    // 0x15b874: 0x1040001e
    ctx->pc = 0x15B874u;
    {
        const bool branch_taken_0x15b874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B878u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15b874) {
            ctx->pc = 0x15B8F0u;
            goto label_15b8f0;
        }
    }
    ctx->pc = 0x15B87Cu;
    // 0x15b87c: 0x26300388
    ctx->pc = 0x15b87cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 904));
    // 0x15b880: 0x8e060000
    ctx->pc = 0x15b880u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b884: 0x0
    ctx->pc = 0x15b884u;
    // NOP
label_15b888:
    // 0x15b888: 0x240282d
    ctx->pc = 0x15b888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b88c: 0x8e070004
    ctx->pc = 0x15b88cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15b890: 0x26520001
    ctx->pc = 0x15b890u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x15b894: 0x8e080008
    ctx->pc = 0x15b894u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b898: 0x2610000c
    ctx->pc = 0x15b898u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x15b89c: 0xc054102
    ctx->pc = 0x15B89Cu;
    SET_GPR_U32(ctx, 31, 0x15B8A4u);
    ctx->pc = 0x15B8A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 896)));
    ctx->pc = 0x150408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150408_0x150408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8A4u; }
    }
    if (ctx->pc != 0x15B8A4u) { return; }
    ctx->pc = 0x15B8A4u;
    // 0x15b8a4: 0x2a420004
    ctx->pc = 0x15b8a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x15b8a8: 0x5440fff7
    ctx->pc = 0x15B8A8u;
    {
        const bool branch_taken_0x15b8a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15b8a8) {
            ctx->pc = 0x15B8ACu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x15B888u;
            goto label_15b888;
        }
    }
    ctx->pc = 0x15B8B0u;
    // 0x15b8b0: 0x8e2603bc
    ctx->pc = 0x15b8b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 956)));
    // 0x15b8b4: 0x8e240380
    ctx->pc = 0x15b8b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x15b8b8: 0xc05410c
    ctx->pc = 0x15B8B8u;
    SET_GPR_U32(ctx, 31, 0x15B8C0u);
    ctx->pc = 0x15B8BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 952)));
    ctx->pc = 0x150430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150430_0x150430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8C0u; }
    }
    if (ctx->pc != 0x15B8C0u) { return; }
    ctx->pc = 0x15B8C0u;
    // 0x15b8c0: 0x8e240380
    ctx->pc = 0x15b8c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x15b8c4: 0xc054120
    ctx->pc = 0x15B8C4u;
    SET_GPR_U32(ctx, 31, 0x15B8CCu);
    ctx->pc = 0x15B8C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150480_0x150480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8CCu; }
    }
    if (ctx->pc != 0x15B8CCu) { return; }
    ctx->pc = 0x15B8CCu;
    // 0x15b8cc: 0x8e240380
    ctx->pc = 0x15b8ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x15b8d0: 0x282d
    ctx->pc = 0x15b8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8d4: 0xc054116
    ctx->pc = 0x15B8D4u;
    SET_GPR_U32(ctx, 31, 0x15B8DCu);
    ctx->pc = 0x15B8D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 960));
    ctx->pc = 0x150458u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150458_0x150458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8DCu; }
    }
    if (ctx->pc != 0x15B8DCu) { return; }
    ctx->pc = 0x15B8DCu;
    // 0x15b8dc: 0xc056e44
    ctx->pc = 0x15B8DCu;
    SET_GPR_U32(ctx, 31, 0x15B8E4u);
    ctx->pc = 0x15B8E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B910_0x15b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8E4u; }
    }
    if (ctx->pc != 0x15B8E4u) { return; }
    ctx->pc = 0x15B8E4u;
    // 0x15b8e4: 0x10000003
    ctx->pc = 0x15B8E4u;
    {
        const bool branch_taken_0x15b8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B8E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15b8e4) {
            ctx->pc = 0x15B8F4u;
            goto label_15b8f4;
        }
    }
    ctx->pc = 0x15B8ECu;
    // 0x15b8ec: 0x0
    ctx->pc = 0x15b8ecu;
    // NOP
label_15b8f0:
    // 0x15b8f0: 0x2402ffff
    ctx->pc = 0x15b8f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15b8f4:
    // 0x15b8f4: 0xdfb00000
    ctx->pc = 0x15b8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b8f8: 0xdfb10008
    ctx->pc = 0x15b8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b8fc: 0xdfb20010
    ctx->pc = 0x15b8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b900: 0xdfb30018
    ctx->pc = 0x15b900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b904: 0xdfbf0020
    ctx->pc = 0x15b904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b908: 0x3e00008
    ctx->pc = 0x15B908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B888u: goto label_15b888;
            case 0x15B8F0u: goto label_15b8f0;
            case 0x15B8F4u: goto label_15b8f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B910u;
}
