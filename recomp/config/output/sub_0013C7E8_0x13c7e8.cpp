#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C7E8
// Address: 0x13c7e8 - 0x13c838
void sub_0013C7E8_0x13c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c7e8u;

    // 0x13c7e8: 0xa0182d
    ctx->pc = 0x13c7e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7ec: 0x80282d
    ctx->pc = 0x13c7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7f0: 0x27bdfff0
    ctx->pc = 0x13c7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c7f4: 0x3c020022
    ctx->pc = 0x13c7f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c7f8: 0xffbf0000
    ctx->pc = 0x13c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c7fc: 0x2447de90
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x13c800: 0xac600000
    ctx->pc = 0x13c800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x13c804: 0x60202d
    ctx->pc = 0x13c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c808: 0xac600004
    ctx->pc = 0x13c808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13c80c: 0x8ce20000
    ctx->pc = 0x13c80cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13c810: 0x10400005
    ctx->pc = 0x13C810u;
    {
        const bool branch_taken_0x13c810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C814u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c810) {
            ctx->pc = 0x13C828u;
            goto label_13c828;
        }
    }
    ctx->pc = 0x13C818u;
    // 0x13c818: 0x8ce70004
    ctx->pc = 0x13c818u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13c81c: 0xdfbf0000
    ctx->pc = 0x13c81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c820: 0x804f1be
    ctx->pc = 0x13C820u;
    ctx->pc = 0x13C824u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13C6F8u;
    entry_13c6f8_0x13c7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x13C828u;
label_13c828:
    // 0x13c828: 0xdfbf0000
    ctx->pc = 0x13c828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c82c: 0x3e00008
    ctx->pc = 0x13C82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C828u: goto label_13c828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C834u;
    // 0x13c834: 0x0
    ctx->pc = 0x13c834u;
    // NOP
}
