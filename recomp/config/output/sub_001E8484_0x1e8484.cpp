#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E8484
// Address: 0x1e8484 - 0x1e853c
void sub_001E8484_0x1e8484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e8484u;

    // 0x1e8484: 0x27bdffe0
    ctx->pc = 0x1e8484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8488: 0xffbe0010
    ctx->pc = 0x1e8488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e848c: 0xffbf0018
    ctx->pc = 0x1e848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e8490: 0x3a0f02d
    ctx->pc = 0x1e8490u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8494: 0xafc40000
    ctx->pc = 0x1e8494u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8498: 0xafc00004
    ctx->pc = 0x1e8498u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1e849c:
    // 0x1e849c: 0x8fc20004
    ctx->pc = 0x1e849cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e84a0: 0x10400003
    ctx->pc = 0x1E84A0u;
    {
        const bool branch_taken_0x1e84a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84a0) {
            ctx->pc = 0x1E84B0u;
            goto label_1e84b0;
        }
    }
    ctx->pc = 0x1E84A8u;
    // 0x1e84a8: 0x10000018
    ctx->pc = 0x1E84A8u;
    {
        const bool branch_taken_0x1e84a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84a8) {
            ctx->pc = 0x1E850Cu;
            goto label_1e850c;
        }
    }
    ctx->pc = 0x1E84B0u;
label_1e84b0:
    // 0x1e84b0: 0x8fc20000
    ctx->pc = 0x1e84b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e84b4: 0x24420008
    ctx->pc = 0x1e84b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e84b8: 0x27c30008
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 8));
    // 0x1e84bc: 0x40202d
    ctx->pc = 0x1e84bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84c0: 0x60282d
    ctx->pc = 0x1e84c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84c4: 0xc07c499
    ctx->pc = 0x1E84C4u;
    SET_GPR_U32(ctx, 31, 0x1E84CCu);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84CCu; }
    }
    if (ctx->pc != 0x1E84CCu) { return; }
    ctx->pc = 0x1E84CCu;
    // 0x1e84cc: 0xafc20004
    ctx->pc = 0x1e84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e84d0: 0x8fc20004
    ctx->pc = 0x1e84d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e84d4: 0x10400003
    ctx->pc = 0x1E84D4u;
    {
        const bool branch_taken_0x1e84d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84d4) {
            ctx->pc = 0x1E84E4u;
            goto label_1e84e4;
        }
    }
    ctx->pc = 0x1E84DCu;
    // 0x1e84dc: 0x1000ffef
    ctx->pc = 0x1E84DCu;
    {
        const bool branch_taken_0x1e84dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84dc) {
            ctx->pc = 0x1E849Cu;
            goto label_1e849c;
        }
    }
    ctx->pc = 0x1E84E4u;
label_1e84e4:
    // 0x1e84e4: 0x8f82802c
    ctx->pc = 0x1e84e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1e84e8: 0x1040ffec
    ctx->pc = 0x1E84E8u;
    {
        const bool branch_taken_0x1e84e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84e8) {
            ctx->pc = 0x1E849Cu;
            goto label_1e849c;
        }
    }
    ctx->pc = 0x1E84F0u;
    // 0x1e84f0: 0x8f84802c
    ctx->pc = 0x1e84f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1e84f4: 0x8fc50008
    ctx->pc = 0x1e84f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e84f8: 0xc07ca04
    ctx->pc = 0x1E84F8u;
    SET_GPR_U32(ctx, 31, 0x1E8500u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8500u; }
    }
    if (ctx->pc != 0x1E8500u) { return; }
    ctx->pc = 0x1E8500u;
    // 0x1e8500: 0xafc20004
    ctx->pc = 0x1e8500u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e8504: 0x1000ffe5
    ctx->pc = 0x1E8504u;
    {
        const bool branch_taken_0x1e8504 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8504) {
            ctx->pc = 0x1E849Cu;
            goto label_1e849c;
        }
    }
    ctx->pc = 0x1E850Cu;
label_1e850c:
    // 0x1e850c: 0x8fc30004
    ctx->pc = 0x1e850cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8510: 0x2402e4aa
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1e8514: 0x14620002
    ctx->pc = 0x1E8514u;
    {
        const bool branch_taken_0x1e8514 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e8514) {
            ctx->pc = 0x1E8520u;
            goto label_1e8520;
        }
    }
    ctx->pc = 0x1E851Cu;
    // 0x1e851c: 0xafc00004
    ctx->pc = 0x1e851cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1e8520:
    // 0x1e8520: 0x8fc20004
    ctx->pc = 0x1e8520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8524: 0x3c0e82d
    ctx->pc = 0x1e8524u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8528: 0xdfbe0010
    ctx->pc = 0x1e8528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e852c: 0xdfbf0018
    ctx->pc = 0x1e852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8530: 0x27bd0020
    ctx->pc = 0x1e8530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8534: 0x3e00008
    ctx->pc = 0x1E8534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E849Cu: goto label_1e849c;
            case 0x1E84B0u: goto label_1e84b0;
            case 0x1E84E4u: goto label_1e84e4;
            case 0x1E850Cu: goto label_1e850c;
            case 0x1E8520u: goto label_1e8520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E853Cu;
}
