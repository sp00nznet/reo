#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D1B0
// Address: 0x16d1b0 - 0x16d200
void sub_0016D1B0_0x16d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d1b0u;

    // 0x16d1b0: 0x27bdffd0
    ctx->pc = 0x16d1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d1b4: 0xffb00020
    ctx->pc = 0x16d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16d1b8: 0xa0802d
    ctx->pc = 0x16d1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1bc: 0xffbf0028
    ctx->pc = 0x16d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16d1c0: 0x3a0302d
    ctx->pc = 0x16d1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1c4: 0xc059bfa
    ctx->pc = 0x16D1C4u;
    SET_GPR_U32(ctx, 31, 0x16D1CCu);
    ctx->pc = 0x16D1C8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6968)));
    ctx->pc = 0x166FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FE8_0x166fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1CCu; }
    }
    if (ctx->pc != 0x16D1CCu) { return; }
    ctx->pc = 0x16D1CCu;
    // 0x16d1cc: 0x10400004
    ctx->pc = 0x16D1CCu;
    {
        const bool branch_taken_0x16d1cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D1D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d1cc) {
            ctx->pc = 0x16D1E0u;
            goto label_16d1e0;
        }
    }
    ctx->pc = 0x16D1D4u;
    // 0x16d1d4: 0xae000004
    ctx->pc = 0x16d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16d1d8: 0x10000004
    ctx->pc = 0x16D1D8u;
    {
        const bool branch_taken_0x16d1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D1DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x16d1d8) {
            ctx->pc = 0x16D1ECu;
            goto label_16d1ec;
        }
    }
    ctx->pc = 0x16D1E0u;
label_16d1e0:
    // 0x16d1e0: 0x8fa20004
    ctx->pc = 0x16d1e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16d1e4: 0xae030000
    ctx->pc = 0x16d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16d1e8: 0xae020004
    ctx->pc = 0x16d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_16d1ec:
    // 0x16d1ec: 0xdfb00020
    ctx->pc = 0x16d1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d1f0: 0xdfbf0028
    ctx->pc = 0x16d1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d1f4: 0x3e00008
    ctx->pc = 0x16D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D1F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D1E0u: goto label_16d1e0;
            case 0x16D1ECu: goto label_16d1ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D1FCu;
    // 0x16d1fc: 0x0
    ctx->pc = 0x16d1fcu;
    // NOP
}
