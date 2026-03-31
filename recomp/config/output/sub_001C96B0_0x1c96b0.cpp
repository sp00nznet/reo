#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C96B0
// Address: 0x1c96b0 - 0x1c9770
void sub_001C96B0_0x1c96b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c96b0u;

    // 0x1c96b0: 0x27bdffe0
    ctx->pc = 0x1c96b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c96b4: 0x3c010034
    ctx->pc = 0x1c96b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c96b8: 0xffbf0000
    ctx->pc = 0x1c96b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c96bc: 0x24020001
    ctx->pc = 0x1c96bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c96c0: 0x8c23d158
    ctx->pc = 0x1c96c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c96c4: 0x8c630000
    ctx->pc = 0x1c96c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c96c8: 0x10620003
    ctx->pc = 0x1C96C8u;
    {
        const bool branch_taken_0x1c96c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C96CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
        if (branch_taken_0x1c96c8) {
            ctx->pc = 0x1C96D8u;
            goto label_1c96d8;
        }
    }
    ctx->pc = 0x1C96D0u;
    // 0x1c96d0: 0x10000023
    ctx->pc = 0x1C96D0u;
    {
        const bool branch_taken_0x1c96d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C96D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c96d0) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C96D8u;
label_1c96d8:
    // 0x1c96d8: 0xc075db0
    ctx->pc = 0x1C96D8u;
    SET_GPR_U32(ctx, 31, 0x1C96E0u);
    ctx->pc = 0x1D76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D76C0_0x1d76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
    }
    if (ctx->pc != 0x1C96E0u) { return; }
    ctx->pc = 0x1C96E0u;
    // 0x1c96e0: 0x24030001
    ctx->pc = 0x1c96e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c96e4: 0x10430007
    ctx->pc = 0x1C96E4u;
    {
        const bool branch_taken_0x1c96e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C96E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c96e4) {
            ctx->pc = 0x1C9704u;
            goto label_1c9704;
        }
    }
    ctx->pc = 0x1C96ECu;
    // 0x1c96ec: 0x10400003
    ctx->pc = 0x1C96ECu;
    {
        const bool branch_taken_0x1c96ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c96ec) {
            ctx->pc = 0x1C96FCu;
            goto label_1c96fc;
        }
    }
    ctx->pc = 0x1C96F4u;
    // 0x1c96f4: 0x1000001a
    ctx->pc = 0x1C96F4u;
    {
        const bool branch_taken_0x1c96f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C96F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1c96f4) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C96FCu;
label_1c96fc:
    // 0x1c96fc: 0x10000018
    ctx->pc = 0x1C96FCu;
    {
        const bool branch_taken_0x1c96fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9700u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c96fc) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C9704u;
label_1c9704:
    // 0x1c9704: 0xc075dcc
    ctx->pc = 0x1C9704u;
    SET_GPR_U32(ctx, 31, 0x1C970Cu);
    ctx->pc = 0x1C9708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 24));
    ctx->pc = 0x1D7730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7730_0x1d7730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C970Cu; }
    }
    if (ctx->pc != 0x1C970Cu) { return; }
    ctx->pc = 0x1C970Cu;
    // 0x1c970c: 0x1840000f
    ctx->pc = 0x1C970Cu;
    {
        const bool branch_taken_0x1c970c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c970c) {
            ctx->pc = 0x1C974Cu;
            goto label_1c974c;
        }
    }
    ctx->pc = 0x1C9714u;
    // 0x1c9714: 0xc0759c4
    ctx->pc = 0x1C9714u;
    SET_GPR_U32(ctx, 31, 0x1C971Cu);
    ctx->pc = 0x1D6710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6710_0x1d6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C971Cu; }
    }
    if (ctx->pc != 0x1C971Cu) { return; }
    ctx->pc = 0x1C971Cu;
    // 0x1c971c: 0x1440000b
    ctx->pc = 0x1C971Cu;
    {
        const bool branch_taken_0x1c971c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c971c) {
            ctx->pc = 0x1C974Cu;
            goto label_1c974c;
        }
    }
    ctx->pc = 0x1C9724u;
    // 0x1c9724: 0xc075dec
    ctx->pc = 0x1C9724u;
    SET_GPR_U32(ctx, 31, 0x1C972Cu);
    ctx->pc = 0x1C9728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1D77B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D77B0_0x1d77b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C972Cu; }
    }
    if (ctx->pc != 0x1C972Cu) { return; }
    ctx->pc = 0x1C972Cu;
    // 0x1c972c: 0x14400007
    ctx->pc = 0x1C972Cu;
    {
        const bool branch_taken_0x1c972c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c972c) {
            ctx->pc = 0x1C974Cu;
            goto label_1c974c;
        }
    }
    ctx->pc = 0x1C9734u;
    // 0x1c9734: 0x3c010034
    ctx->pc = 0x1c9734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9738: 0x8fa40018
    ctx->pc = 0x1c9738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c973c: 0x8c23d158
    ctx->pc = 0x1c973cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c9740: 0x102d
    ctx->pc = 0x1c9740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9744: 0x10000006
    ctx->pc = 0x1C9744u;
    {
        const bool branch_taken_0x1c9744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9748u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        if (branch_taken_0x1c9744) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C974Cu;
label_1c974c:
    // 0x1c974c: 0x3c010034
    ctx->pc = 0x1c974cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9750: 0x2403ffff
    ctx->pc = 0x1c9750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9754: 0x8c22d158
    ctx->pc = 0x1c9754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c9758: 0xac430010
    ctx->pc = 0x1c9758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1c975c: 0x2402ffff
    ctx->pc = 0x1c975cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9760:
    // 0x1c9760: 0xdfbf0000
    ctx->pc = 0x1c9760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9764: 0x3e00008
    ctx->pc = 0x1C9764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C96D8u: goto label_1c96d8;
            case 0x1C96FCu: goto label_1c96fc;
            case 0x1C9704u: goto label_1c9704;
            case 0x1C974Cu: goto label_1c974c;
            case 0x1C9760u: goto label_1c9760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C976Cu;
    // 0x1c976c: 0x0
    ctx->pc = 0x1c976cu;
    // NOP
}
