#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187838
// Address: 0x187838 - 0x1878e0
void sub_00187838_0x187838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187838u;

    // 0x187838: 0x27bdffc0
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18783c: 0x3c020023
    ctx->pc = 0x18783cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x187840: 0xffb00020
    ctx->pc = 0x187840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x187844: 0x3c100029
    ctx->pc = 0x187844u;
    SET_GPR_U32(ctx, 16, ((uint32_t)41 << 16));
    // 0x187848: 0xffb10028
    ctx->pc = 0x187848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x18784c: 0x2411007f
    ctx->pc = 0x18784cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 127));
    // 0x187850: 0x3a0202d
    ctx->pc = 0x187850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187854: 0xffbf0030
    ctx->pc = 0x187854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x187858: 0xafa00008
    ctx->pc = 0x187858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x18785c: 0x2610b8c0
    ctx->pc = 0x18785cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294949056));
    // 0x187860: 0xafb10004
    ctx->pc = 0x187860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x187864: 0xafa00014
    ctx->pc = 0x187864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x187868: 0xc045188
    ctx->pc = 0x187868u;
    SET_GPR_U32(ctx, 31, 0x187870u);
    ctx->pc = 0x18786Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966560), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187870u; }
    }
    if (ctx->pc != 0x187870u) { return; }
    ctx->pc = 0x187870u;
    // 0x187870: 0xafb10004
    ctx->pc = 0x187870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x187874: 0x3a0202d
    ctx->pc = 0x187874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187878: 0xae020000
    ctx->pc = 0x187878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18787c: 0xafa00008
    ctx->pc = 0x18787cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x187880: 0xc045188
    ctx->pc = 0x187880u;
    SET_GPR_U32(ctx, 31, 0x187888u);
    ctx->pc = 0x187884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187888u; }
    }
    if (ctx->pc != 0x187888u) { return; }
    ctx->pc = 0x187888u;
    // 0x187888: 0xae020004
    ctx->pc = 0x187888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18788c: 0x3c020029
    ctx->pc = 0x18788cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x187890: 0x2442b8c8
    ctx->pc = 0x187890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x187894: 0x24060200
    ctx->pc = 0x187894u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    // 0x187898: 0x24050010
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x18789c: 0x24044000
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1878a0: 0x24030001
    ctx->pc = 0x1878a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878a4: 0x0
    ctx->pc = 0x1878a4u;
    // NOP
label_1878a8:
    // 0x1878a8: 0x2463ffff
    ctx->pc = 0x1878a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1878ac: 0xac400000
    ctx->pc = 0x1878acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1878b0: 0xac460008
    ctx->pc = 0x1878b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1878b4: 0xac45000c
    ctx->pc = 0x1878b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1878b8: 0xac440010
    ctx->pc = 0x1878b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1878bc: 0x461fffa
    ctx->pc = 0x1878BCu;
    {
        const bool branch_taken_0x1878bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1878C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28));
        if (branch_taken_0x1878bc) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x1878C4u;
    // 0x1878c4: 0xdfb00020
    ctx->pc = 0x1878c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1878c8: 0x24020001
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878cc: 0xdfb10028
    ctx->pc = 0x1878ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1878d0: 0xdfbf0030
    ctx->pc = 0x1878d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1878d4: 0x3e00008
    ctx->pc = 0x1878D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1878D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1878A8u: goto label_1878a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1878DCu;
    // 0x1878dc: 0x0
    ctx->pc = 0x1878dcu;
    // NOP
}
