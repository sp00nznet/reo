#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E280
// Address: 0x12e280 - 0x12e320
void sub_0012E280_0x12e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e280u;

    // 0x12e280: 0x27bdfff0
    ctx->pc = 0x12e280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e284: 0xffb00000
    ctx->pc = 0x12e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e288: 0xffbf0008
    ctx->pc = 0x12e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12e28c: 0xc04b84e
    ctx->pc = 0x12E28Cu;
    SET_GPR_U32(ctx, 31, 0x12E294u);
    ctx->pc = 0x12E290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12E138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E138_0x12e138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E294u; }
    }
    if (ctx->pc != 0x12E294u) { return; }
    ctx->pc = 0x12E294u;
    // 0x12e294: 0x40402d
    ctx->pc = 0x12e294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e298: 0x1100001c
    ctx->pc = 0x12E298u;
    {
        const bool branch_taken_0x12e298 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E29Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
        if (branch_taken_0x12e298) {
            ctx->pc = 0x12E30Cu;
            goto label_12e30c;
        }
    }
    ctx->pc = 0x12E2A0u;
    // 0x12e2a0: 0x24649fa0
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294942624));
    // 0x12e2a4: 0x80820000
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e2a8: 0x1040000f
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E2ACu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E2E8u;
            goto label_12e2e8;
        }
    }
    ctx->pc = 0x12E2B0u;
    // 0x12e2b0: 0x80302d
    ctx->pc = 0x12e2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2b4: 0x80282d
    ctx->pc = 0x12e2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e2b8:
    // 0x12e2b8: 0x24e70001
    ctx->pc = 0x12e2b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x12e2bc: 0x24c60090
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 144));
    // 0x12e2c0: 0x28e30010
    ctx->pc = 0x12e2c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 16));
    // 0x12e2c4: 0x10600009
    ctx->pc = 0x12E2C4u;
    {
        const bool branch_taken_0x12e2c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E2C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 144));
        if (branch_taken_0x12e2c4) {
            ctx->pc = 0x12E2ECu;
            goto label_12e2ec;
        }
    }
    ctx->pc = 0x12E2CCu;
    // 0x12e2cc: 0x80c20000
    ctx->pc = 0x12e2ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12e2d0: 0x0
    ctx->pc = 0x12e2d0u;
    // NOP
    // 0x12e2d4: 0x1440fff8
    ctx->pc = 0x12E2D4u;
    {
        const bool branch_taken_0x12e2d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E2D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e2d4) {
            ctx->pc = 0x12E2B8u;
            goto label_12e2b8;
        }
    }
    ctx->pc = 0x12E2DCu;
    // 0x12e2dc: 0x10000004
    ctx->pc = 0x12E2DCu;
    {
        const bool branch_taken_0x12e2dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E2E0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
        if (branch_taken_0x12e2dc) {
            ctx->pc = 0x12E2F0u;
            goto label_12e2f0;
        }
    }
    ctx->pc = 0x12E2E4u;
    // 0x12e2e4: 0x0
    ctx->pc = 0x12e2e4u;
    // NOP
label_12e2e8:
    // 0x12e2e8: 0x24030001
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12e2ec:
    // 0x12e2ec: 0xac900014
    ctx->pc = 0x12e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
label_12e2f0:
    // 0x12e2f0: 0x10600005
    ctx->pc = 0x12E2F0u;
    {
        const bool branch_taken_0x12e2f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E2F4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 8));
        if (branch_taken_0x12e2f0) {
            ctx->pc = 0x12E308u;
            goto label_12e308;
        }
    }
    ctx->pc = 0x12E2F8u;
    // 0x12e2f8: 0x24030001
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e2fc: 0x80102d
    ctx->pc = 0x12e2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e300: 0x10000002
    ctx->pc = 0x12E300u;
    {
        const bool branch_taken_0x12e300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E304u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12e300) {
            ctx->pc = 0x12E30Cu;
            goto label_12e30c;
        }
    }
    ctx->pc = 0x12E308u;
label_12e308:
    // 0x12e308: 0x102d
    ctx->pc = 0x12e308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e30c:
    // 0x12e30c: 0xdfb00000
    ctx->pc = 0x12e30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e310: 0xdfbf0008
    ctx->pc = 0x12e310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e314: 0x3e00008
    ctx->pc = 0x12E314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E2B8u: goto label_12e2b8;
            case 0x12E2E8u: goto label_12e2e8;
            case 0x12E2ECu: goto label_12e2ec;
            case 0x12E2F0u: goto label_12e2f0;
            case 0x12E308u: goto label_12e308;
            case 0x12E30Cu: goto label_12e30c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E31Cu;
    // 0x12e31c: 0x0
    ctx->pc = 0x12e31cu;
    // NOP
}
