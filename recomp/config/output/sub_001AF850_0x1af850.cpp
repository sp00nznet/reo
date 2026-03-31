#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF850
// Address: 0x1af850 - 0x1af900
void sub_001AF850_0x1af850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af850u;

    // 0x1af850: 0x27bdffd0
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af854: 0xffbf0020
    ctx->pc = 0x1af854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af858: 0x7fb10010
    ctx->pc = 0x1af858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af85c: 0x7fb00000
    ctx->pc = 0x1af85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af860: 0x882d
    ctx->pc = 0x1af860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af864: 0x3c10002c
    ctx->pc = 0x1af864u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1af868: 0x10000006
    ctx->pc = 0x1AF868u;
    {
        const bool branch_taken_0x1af868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF86Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294938192));
        if (branch_taken_0x1af868) {
            ctx->pc = 0x1AF884u;
            goto label_1af884;
        }
    }
    ctx->pc = 0x1AF870u;
label_1af870:
    // 0x1af870: 0x8e020000
    ctx->pc = 0x1af870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af874: 0x10440007
    ctx->pc = 0x1AF874u;
    {
        const bool branch_taken_0x1af874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1AF878u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1af874) {
            ctx->pc = 0x1AF894u;
            goto label_1af894;
        }
    }
    ctx->pc = 0x1AF87Cu;
    // 0x1af87c: 0x26310001
    ctx->pc = 0x1af87cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af880: 0x26100008
    ctx->pc = 0x1af880u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
label_1af884:
    // 0x1af884: 0x2a220008
    ctx->pc = 0x1af884u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x1af888: 0x1440fff9
    ctx->pc = 0x1AF888u;
    {
        const bool branch_taken_0x1af888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af888) {
            ctx->pc = 0x1AF870u;
            goto label_1af870;
        }
    }
    ctx->pc = 0x1AF890u;
    // 0x1af890: 0x24020008
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1af894:
    // 0x1af894: 0x16220008
    ctx->pc = 0x1AF894u;
    {
        const bool branch_taken_0x1af894 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x1af894) {
            ctx->pc = 0x1AF8B8u;
            goto label_1af8b8;
        }
    }
    ctx->pc = 0x1AF89Cu;
label_1af89c:
    // 0x1af89c: 0x0
    ctx->pc = 0x1af89cu;
    // NOP
    // 0x1af8a0: 0x0
    ctx->pc = 0x1af8a0u;
    // NOP
    // 0x1af8a4: 0x0
    ctx->pc = 0x1af8a4u;
    // NOP
    // 0x1af8a8: 0x0
    ctx->pc = 0x1af8a8u;
    // NOP
    // 0x1af8ac: 0x0
    ctx->pc = 0x1af8acu;
    // NOP
    // 0x1af8b0: 0x1000fffa
    ctx->pc = 0x1AF8B0u;
    {
        const bool branch_taken_0x1af8b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1af8b0) {
            ctx->pc = 0x1AF89Cu;
            goto label_1af89c;
        }
    }
    ctx->pc = 0x1AF8B8u;
label_1af8b8:
    // 0x1af8b8: 0xc063708
    ctx->pc = 0x1AF8B8u;
    SET_GPR_U32(ctx, 31, 0x1AF8C0u);
    ctx->pc = 0x18DC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC20_0x18dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8C0u; }
    }
    if (ctx->pc != 0x1AF8C0u) { return; }
    ctx->pc = 0x1AF8C0u;
    // 0x1af8c0: 0x10000006
    ctx->pc = 0x1AF8C0u;
    {
        const bool branch_taken_0x1af8c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF8C4u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 8));
        if (branch_taken_0x1af8c0) {
            ctx->pc = 0x1AF8DCu;
            goto label_1af8dc;
        }
    }
    ctx->pc = 0x1AF8C8u;
label_1af8c8:
    // 0x1af8c8: 0xae000000
    ctx->pc = 0x1af8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1af8cc: 0x26310001
    ctx->pc = 0x1af8ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af8d0: 0xae000004
    ctx->pc = 0x1af8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1af8d4: 0x26100008
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1af8d8: 0x2a230008
    ctx->pc = 0x1af8d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 8));
label_1af8dc:
    // 0x1af8dc: 0x1460fffa
    ctx->pc = 0x1AF8DCu;
    {
        const bool branch_taken_0x1af8dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af8dc) {
            ctx->pc = 0x1AF8C8u;
            goto label_1af8c8;
        }
    }
    ctx->pc = 0x1AF8E4u;
    // 0x1af8e4: 0xdfbf0020
    ctx->pc = 0x1af8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af8e8: 0x7bb10010
    ctx->pc = 0x1af8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af8ec: 0x7bb00000
    ctx->pc = 0x1af8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af8f0: 0x3e00008
    ctx->pc = 0x1AF8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF8F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF870u: goto label_1af870;
            case 0x1AF884u: goto label_1af884;
            case 0x1AF894u: goto label_1af894;
            case 0x1AF89Cu: goto label_1af89c;
            case 0x1AF8B8u: goto label_1af8b8;
            case 0x1AF8C8u: goto label_1af8c8;
            case 0x1AF8DCu: goto label_1af8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF8F8u;
    // 0x1af8f8: 0x0
    ctx->pc = 0x1af8f8u;
    // NOP
    // 0x1af8fc: 0x0
    ctx->pc = 0x1af8fcu;
    // NOP
}
