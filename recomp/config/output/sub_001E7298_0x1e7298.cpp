#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E7298
// Address: 0x1e7298 - 0x1e7318
void sub_001E7298_0x1e7298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e7298u;

    // 0x1e7298: 0x27bdffe0
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e729c: 0xffbe0010
    ctx->pc = 0x1e729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e72a0: 0xffbf0018
    ctx->pc = 0x1e72a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e72a4: 0x3a0f02d
    ctx->pc = 0x1e72a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72a8: 0xafc40000
    ctx->pc = 0x1e72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e72ac: 0x2404001c
    ctx->pc = 0x1e72acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1e72b0: 0xc079f1f
    ctx->pc = 0x1E72B0u;
    SET_GPR_U32(ctx, 31, 0x1E72B8u);
    ctx->pc = 0x1E7C7Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7C7C_0x1e7c7c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72B8u; }
    }
    if (ctx->pc != 0x1E72B8u) { return; }
    ctx->pc = 0x1E72B8u;
    // 0x1e72b8: 0xafc20004
    ctx->pc = 0x1e72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e72bc: 0x8fc20004
    ctx->pc = 0x1e72bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e72c0: 0x14400004
    ctx->pc = 0x1E72C0u;
    {
        const bool branch_taken_0x1e72c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e72c0) {
            ctx->pc = 0x1E72D4u;
            goto label_1e72d4;
        }
    }
    ctx->pc = 0x1E72C8u;
    // 0x1e72c8: 0x8fc20004
    ctx->pc = 0x1e72c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e72cc: 0x1000000c
    ctx->pc = 0x1E72CCu;
    {
        const bool branch_taken_0x1e72cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e72cc) {
            ctx->pc = 0x1E7300u;
            goto label_1e7300;
        }
    }
    ctx->pc = 0x1E72D4u;
label_1e72d4:
    // 0x1e72d4: 0x8fc20004
    ctx->pc = 0x1e72d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e72d8: 0xac400004
    ctx->pc = 0x1e72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e72dc: 0x8fc20004
    ctx->pc = 0x1e72dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e72e0: 0xac400000
    ctx->pc = 0x1e72e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e72e4: 0x8fc20004
    ctx->pc = 0x1e72e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e72e8: 0x24420008
    ctx->pc = 0x1e72e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e72ec: 0x40202d
    ctx->pc = 0x1e72ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72f0: 0x282d
    ctx->pc = 0x1e72f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72f4: 0xc07c417
    ctx->pc = 0x1E72F4u;
    SET_GPR_U32(ctx, 31, 0x1E72FCu);
    ctx->pc = 0x1F105Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F105C_0x1f105c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72FCu; }
    }
    if (ctx->pc != 0x1E72FCu) { return; }
    ctx->pc = 0x1E72FCu;
    // 0x1e72fc: 0x8fc20004
    ctx->pc = 0x1e72fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1e7300:
    // 0x1e7300: 0x3c0e82d
    ctx->pc = 0x1e7300u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7304: 0xdfbe0010
    ctx->pc = 0x1e7304u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7308: 0xdfbf0018
    ctx->pc = 0x1e7308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e730c: 0x27bd0020
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e7310: 0x3e00008
    ctx->pc = 0x1E7310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E72D4u: goto label_1e72d4;
            case 0x1E7300u: goto label_1e7300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7318u;
}
