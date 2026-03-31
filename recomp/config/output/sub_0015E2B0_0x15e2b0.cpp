#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E2B0
// Address: 0x15e2b0 - 0x15e318
void sub_0015E2B0_0x15e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e2b0u;

    // 0x15e2b0: 0x27bdfff0
    ctx->pc = 0x15e2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e2b4: 0x24020002
    ctx->pc = 0x15e2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e2b8: 0xffbf0000
    ctx->pc = 0x15e2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e2bc: 0x2c850003
    ctx->pc = 0x15e2bcu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x15e2c0: 0x10820011
    ctx->pc = 0x15E2C0u;
    {
        const bool branch_taken_0x15e2c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15E2C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15e2c0) {
            ctx->pc = 0x15E308u;
            goto label_15e308;
        }
    }
    ctx->pc = 0x15E2C8u;
    // 0x15e2c8: 0x50a00005
    ctx->pc = 0x15E2C8u;
    {
        const bool branch_taken_0x15e2c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x15e2c8) {
            ctx->pc = 0x15E2CCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15E2E0u;
            goto label_15e2e0;
        }
    }
    ctx->pc = 0x15E2D0u;
    // 0x15e2d0: 0x24020001
    ctx->pc = 0x15e2d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2d4: 0x10000006
    ctx->pc = 0x15E2D4u;
    {
        const bool branch_taken_0x15e2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E2D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e2d4) {
            ctx->pc = 0x15E2F0u;
            goto label_15e2f0;
        }
    }
    ctx->pc = 0x15E2DCu;
    // 0x15e2dc: 0x0
    ctx->pc = 0x15e2dcu;
    // NOP
label_15e2e0:
    // 0x15e2e0: 0x10820009
    ctx->pc = 0x15E2E0u;
    {
        const bool branch_taken_0x15e2e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15E2E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15e2e0) {
            ctx->pc = 0x15E308u;
            goto label_15e308;
        }
    }
    ctx->pc = 0x15E2E8u;
    // 0x15e2e8: 0x24020004
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x15e2ec: 0x24030004
    ctx->pc = 0x15e2ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_15e2f0:
    // 0x15e2f0: 0x10820006
    ctx->pc = 0x15E2F0u;
    {
        const bool branch_taken_0x15e2f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15E2F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15e2f0) {
            ctx->pc = 0x15E30Cu;
            goto label_15e30c;
        }
    }
    ctx->pc = 0x15E2F8u;
    // 0x15e2f8: 0x3c040024
    ctx->pc = 0x15e2f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15e2fc: 0xc058dd4
    ctx->pc = 0x15E2FCu;
    SET_GPR_U32(ctx, 31, 0x15E304u);
    ctx->pc = 0x15E300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E304u; }
    }
    if (ctx->pc != 0x15E304u) { return; }
    ctx->pc = 0x15E304u;
    // 0x15e304: 0x24030001
    ctx->pc = 0x15e304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_15e308:
    // 0x15e308: 0xdfbf0000
    ctx->pc = 0x15e308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e30c:
    // 0x15e30c: 0x60102d
    ctx->pc = 0x15e30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e310: 0x3e00008
    ctx->pc = 0x15E310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E2E0u: goto label_15e2e0;
            case 0x15E2F0u: goto label_15e2f0;
            case 0x15E308u: goto label_15e308;
            case 0x15E30Cu: goto label_15e30c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E318u;
}
