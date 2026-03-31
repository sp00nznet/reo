#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178378
// Address: 0x178378 - 0x1783d8
void sub_00178378_0x178378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178378u;

    // 0x178378: 0x27bdfff0
    ctx->pc = 0x178378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17837c: 0xffb00000
    ctx->pc = 0x17837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178380: 0x80802d
    ctx->pc = 0x178380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178384: 0xffbf0008
    ctx->pc = 0x178384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178388: 0x8e020010
    ctx->pc = 0x178388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17838c: 0x1840000a
    ctx->pc = 0x17838Cu;
    {
        const bool branch_taken_0x17838c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x178390u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17838c) {
            ctx->pc = 0x1783B8u;
            goto label_1783b8;
        }
    }
    ctx->pc = 0x178394u;
    // 0x178394: 0x26030018
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 24));
label_178398:
    // 0x178398: 0x8c620000
    ctx->pc = 0x178398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17839c: 0x24840001
    ctx->pc = 0x17839cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1783a0: 0x451023
    ctx->pc = 0x1783a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1783a4: 0xac620000
    ctx->pc = 0x1783a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1783a8: 0x8e020010
    ctx->pc = 0x1783a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1783ac: 0x82102a
    ctx->pc = 0x1783acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x1783b0: 0x1440fff9
    ctx->pc = 0x1783B0u;
    {
        const bool branch_taken_0x1783b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1783B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1783b0) {
            ctx->pc = 0x178398u;
            goto label_178398;
        }
    }
    ctx->pc = 0x1783B8u;
label_1783b8:
    // 0x1783b8: 0xc05e0f6
    ctx->pc = 0x1783B8u;
    SET_GPR_U32(ctx, 31, 0x1783C0u);
    ctx->pc = 0x1783BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1783D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001783D8_0x1783d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783C0u; }
    }
    if (ctx->pc != 0x1783C0u) { return; }
    ctx->pc = 0x1783C0u;
    // 0x1783c0: 0xae0201a8
    ctx->pc = 0x1783c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x1783c4: 0xdfbf0008
    ctx->pc = 0x1783c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1783c8: 0xdfb00000
    ctx->pc = 0x1783c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1783cc: 0x3e00008
    ctx->pc = 0x1783CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1783D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178398u: goto label_178398;
            case 0x1783B8u: goto label_1783b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1783D4u;
    // 0x1783d4: 0x0
    ctx->pc = 0x1783d4u;
    // NOP
}
