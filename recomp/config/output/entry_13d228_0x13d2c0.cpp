#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13d228
// Address: 0x13d228 - 0x13d2c0
void entry_13d228_0x13d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d228u;

    // 0x13d228: 0x27bdfff0
    ctx->pc = 0x13d228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d22c: 0x14800006
    ctx->pc = 0x13D22Cu;
    {
        const bool branch_taken_0x13d22c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D230u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d22c) {
            ctx->pc = 0x13D248u;
            goto label_13d248;
        }
    }
    ctx->pc = 0x13D234u;
    // 0x13d234: 0x3c040024
    ctx->pc = 0x13d234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d238: 0xc04f53e
    ctx->pc = 0x13D238u;
    SET_GPR_U32(ctx, 31, 0x13D240u);
    ctx->pc = 0x13D23Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D240u; }
    }
    if (ctx->pc != 0x13D240u) { return; }
    ctx->pc = 0x13D240u;
    // 0x13d240: 0x1000001b
    ctx->pc = 0x13D240u;
    {
        const bool branch_taken_0x13d240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d240) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D248u;
label_13d248:
    // 0x13d248: 0x24860038
    ctx->pc = 0x13d248u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d24c: 0x8cc20000
    ctx->pc = 0x13d24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d250: 0x1045000c
    ctx->pc = 0x13D250u;
    {
        const bool branch_taken_0x13d250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13D254u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d250) {
            ctx->pc = 0x13D284u;
            goto label_13d284;
        }
    }
    ctx->pc = 0x13D258u;
    // 0x13d258: 0x24630001
    ctx->pc = 0x13d258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d25c: 0x0
    ctx->pc = 0x13d25cu;
    // NOP
label_13d260:
    // 0x13d260: 0x28620010
    ctx->pc = 0x13d260u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13d264: 0x10400007
    ctx->pc = 0x13D264u;
    {
        const bool branch_taken_0x13d264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D268u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x13d264) {
            ctx->pc = 0x13D284u;
            goto label_13d284;
        }
    }
    ctx->pc = 0x13D26Cu;
    // 0x13d26c: 0x8cc20000
    ctx->pc = 0x13d26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d270: 0x0
    ctx->pc = 0x13d270u;
    // NOP
    // 0x13d274: 0x0
    ctx->pc = 0x13d274u;
    // NOP
    // 0x13d278: 0x0
    ctx->pc = 0x13d278u;
    // NOP
    // 0x13d27c: 0x5445fff8
    ctx->pc = 0x13D27Cu;
    {
        const bool branch_taken_0x13d27c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x13d27c) {
            ctx->pc = 0x13D280u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x13D260u;
            goto label_13d260;
        }
    }
    ctx->pc = 0x13D284u;
label_13d284:
    // 0x13d284: 0x24020010
    ctx->pc = 0x13d284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d288: 0x54620007
    ctx->pc = 0x13D288u;
    {
        const bool branch_taken_0x13d288 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d288) {
            ctx->pc = 0x13D28Cu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
            ctx->pc = 0x13D2A8u;
            goto label_13d2a8;
        }
    }
    ctx->pc = 0x13D290u;
    // 0x13d290: 0x3c040024
    ctx->pc = 0x13d290u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d294: 0xc04f53e
    ctx->pc = 0x13D294u;
    SET_GPR_U32(ctx, 31, 0x13D29Cu);
    ctx->pc = 0x13D298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955992));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D29Cu; }
    }
    if (ctx->pc != 0x13D29Cu) { return; }
    ctx->pc = 0x13D29Cu;
    // 0x13d29c: 0x10000004
    ctx->pc = 0x13D29Cu;
    {
        const bool branch_taken_0x13d29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D2A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d29c) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D2A4u;
    // 0x13d2a4: 0x0
    ctx->pc = 0x13d2a4u;
    // NOP
label_13d2a8:
    // 0x13d2a8: 0x641821
    ctx->pc = 0x13d2a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d2ac: 0x8c620050
    ctx->pc = 0x13d2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_13d2b0:
    // 0x13d2b0: 0xdfbf0000
    ctx->pc = 0x13d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d2b4: 0x3e00008
    ctx->pc = 0x13D2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D2B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D248u: goto label_13d248;
            case 0x13D260u: goto label_13d260;
            case 0x13D284u: goto label_13d284;
            case 0x13D2A8u: goto label_13d2a8;
            case 0x13D2B0u: goto label_13d2b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D2BCu;
    // 0x13d2bc: 0x0
    ctx->pc = 0x13d2bcu;
    // NOP
}
