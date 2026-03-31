#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001692E0
// Address: 0x1692e0 - 0x169330
void sub_001692E0_0x1692e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1692e0u;

    // 0x1692e0: 0x27bdfff0
    ctx->pc = 0x1692e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1692e4: 0xffb00000
    ctx->pc = 0x1692e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1692e8: 0x80802d
    ctx->pc = 0x1692e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692ec: 0xffbf0008
    ctx->pc = 0x1692ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1692f0: 0x8e032ab0
    ctx->pc = 0x1692f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x1692f4: 0x10600009
    ctx->pc = 0x1692F4u;
    {
        const bool branch_taken_0x1692f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1692F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1692f4) {
            ctx->pc = 0x16931Cu;
            goto label_16931c;
        }
    }
    ctx->pc = 0x1692FCu;
    // 0x1692fc: 0xc05aefa
    ctx->pc = 0x1692FCu;
    SET_GPR_U32(ctx, 31, 0x169304u);
    ctx->pc = 0x16BBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BBE8_0x16bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169304u; }
    }
    if (ctx->pc != 0x169304u) { return; }
    ctx->pc = 0x169304u;
    // 0x169304: 0x58400004
    ctx->pc = 0x169304u;
    {
        const bool branch_taken_0x169304 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x169304) {
            ctx->pc = 0x169308u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
            ctx->pc = 0x169318u;
            goto label_169318;
        }
    }
    ctx->pc = 0x16930Cu;
    // 0x16930c: 0x10000003
    ctx->pc = 0x16930Cu;
    {
        const bool branch_taken_0x16930c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16930c) {
            ctx->pc = 0x16931Cu;
            goto label_16931c;
        }
    }
    ctx->pc = 0x169314u;
    // 0x169314: 0x0
    ctx->pc = 0x169314u;
    // NOP
label_169318:
    // 0x169318: 0x2442000c
    ctx->pc = 0x169318u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_16931c:
    // 0x16931c: 0xdfb00000
    ctx->pc = 0x16931cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169320: 0xdfbf0008
    ctx->pc = 0x169320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169324: 0x3e00008
    ctx->pc = 0x169324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169318u: goto label_169318;
            case 0x16931Cu: goto label_16931c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16932Cu;
    // 0x16932c: 0x0
    ctx->pc = 0x16932cu;
    // NOP
}
