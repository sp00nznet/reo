#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174830
// Address: 0x174830 - 0x1748c0
void sub_00174830_0x174830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174830u;

    // 0x174830: 0x8c820000
    ctx->pc = 0x174830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174834: 0x38430001
    ctx->pc = 0x174834u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 1));
    // 0x174838: 0x3100b
    ctx->pc = 0x174838u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x17483c: 0x3e00008
    ctx->pc = 0x17483Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174840u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174860u: goto label_174860;
            case 0x17486Cu: goto label_17486c;
            case 0x1748B0u: goto label_1748b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174844u;
    // 0x174844: 0x0
    ctx->pc = 0x174844u;
    // NOP
    // 0x174848: 0x8c832ab0
    ctx->pc = 0x174848u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x17484c: 0x10600007
    ctx->pc = 0x17484Cu;
    {
        const bool branch_taken_0x17484c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17484c) {
            ctx->pc = 0x17486Cu;
            goto label_17486c;
        }
    }
    ctx->pc = 0x174854u;
    // 0x174854: 0x8c620da4
    ctx->pc = 0x174854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3492)));
    // 0x174858: 0x4420001
    ctx->pc = 0x174858u;
    {
        const bool branch_taken_0x174858 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x174858) {
            ctx->pc = 0x17485Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 3492), GPR_U32(ctx, 5));
            ctx->pc = 0x174860u;
            goto label_174860;
        }
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0x8c620da8
    ctx->pc = 0x174860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    // 0x174864: 0x4420001
    ctx->pc = 0x174864u;
    {
        const bool branch_taken_0x174864 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x174864) {
            ctx->pc = 0x174868u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 3496), GPR_U32(ctx, 6));
            ctx->pc = 0x17486Cu;
            goto label_17486c;
        }
    }
    ctx->pc = 0x17486Cu;
label_17486c:
    // 0x17486c: 0x3e00008
    ctx->pc = 0x17486Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174860u: goto label_174860;
            case 0x17486Cu: goto label_17486c;
            case 0x1748B0u: goto label_1748b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174874u;
    // 0x174874: 0x0
    ctx->pc = 0x174874u;
    // NOP
    // 0x174878: 0x27bdfff0
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17487c: 0xffb00000
    ctx->pc = 0x17487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174880: 0x80802d
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174884: 0xffbf0008
    ctx->pc = 0x174884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174888: 0x8e022ab0
    ctx->pc = 0x174888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x17488c: 0x50400008
    ctx->pc = 0x17488Cu;
    {
        const bool branch_taken_0x17488c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17488c) {
            ctx->pc = 0x174890u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1748B0u;
            goto label_1748b0;
        }
    }
    ctx->pc = 0x174894u;
    // 0x174894: 0xc05d230
    ctx->pc = 0x174894u;
    SET_GPR_U32(ctx, 31, 0x17489Cu);
    ctx->pc = 0x1748C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001748C0_0x1748c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17489Cu; }
    }
    if (ctx->pc != 0x17489Cu) { return; }
    ctx->pc = 0x17489Cu;
    // 0x17489c: 0x200202d
    ctx->pc = 0x17489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748a0: 0xdfbf0008
    ctx->pc = 0x1748a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1748a4: 0xdfb00000
    ctx->pc = 0x1748a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1748a8: 0x805d448
    ctx->pc = 0x1748A8u;
    ctx->pc = 0x1748ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175120u;
    entry_175120_0x175210(rdram, ctx, runtime); return;
    ctx->pc = 0x1748B0u;
label_1748b0:
    // 0x1748b0: 0xdfbf0008
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1748b4: 0x3e00008
    ctx->pc = 0x1748B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1748B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174860u: goto label_174860;
            case 0x17486Cu: goto label_17486c;
            case 0x1748B0u: goto label_1748b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1748BCu;
    // 0x1748bc: 0x0
    ctx->pc = 0x1748bcu;
    // NOP
}
