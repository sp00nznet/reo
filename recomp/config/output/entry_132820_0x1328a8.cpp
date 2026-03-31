#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_132820
// Address: 0x132820 - 0x1328a8
void entry_132820_0x1328a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132820u;

    // 0x132820: 0x27bdfff0
    ctx->pc = 0x132820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132824: 0x14800006
    ctx->pc = 0x132824u;
    {
        const bool branch_taken_0x132824 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132828u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x132824) {
            ctx->pc = 0x132840u;
            goto label_132840;
        }
    }
    ctx->pc = 0x13282Cu;
    // 0x13282c: 0x3c040024
    ctx->pc = 0x13282cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132830: 0xc04a034
    ctx->pc = 0x132830u;
    SET_GPR_U32(ctx, 31, 0x132838u);
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947240));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132838u; }
    }
    if (ctx->pc != 0x132838u) { return; }
    ctx->pc = 0x132838u;
    // 0x132838: 0x10000002
    ctx->pc = 0x132838u;
    {
        const bool branch_taken_0x132838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13283Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x132838) {
            ctx->pc = 0x132844u;
            goto label_132844;
        }
    }
    ctx->pc = 0x132840u;
label_132840:
    // 0x132840: 0x84820040
    ctx->pc = 0x132840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
label_132844:
    // 0x132844: 0xdfbf0000
    ctx->pc = 0x132844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132848: 0x3e00008
    ctx->pc = 0x132848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13284Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132840u: goto label_132840;
            case 0x132844u: goto label_132844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132850u;
    // 0x132850: 0x27bdfff0
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132854: 0xffbf0000
    ctx->pc = 0x132854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132858: 0xc04b63e
    ctx->pc = 0x132858u;
    SET_GPR_U32(ctx, 31, 0x132860u);
    ctx->pc = 0x13285Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x12D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D8F8_0x12d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132860u; }
    }
    if (ctx->pc != 0x132860u) { return; }
    ctx->pc = 0x132860u;
    // 0x132860: 0xdfbf0000
    ctx->pc = 0x132860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132864: 0x3e00008
    ctx->pc = 0x132864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132840u: goto label_132840;
            case 0x132844u: goto label_132844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13286Cu;
    // 0x13286c: 0x0
    ctx->pc = 0x13286cu;
    // NOP
    // 0x132870: 0x27bdfff0
    ctx->pc = 0x132870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132874: 0xffbf0000
    ctx->pc = 0x132874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132878: 0xc04b654
    ctx->pc = 0x132878u;
    SET_GPR_U32(ctx, 31, 0x132880u);
    ctx->pc = 0x13287Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x12D950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D950_0x12d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132880u; }
    }
    if (ctx->pc != 0x132880u) { return; }
    ctx->pc = 0x132880u;
    // 0x132880: 0xdfbf0000
    ctx->pc = 0x132880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132884: 0x3e00008
    ctx->pc = 0x132884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132888u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132840u: goto label_132840;
            case 0x132844u: goto label_132844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13288Cu;
    // 0x13288c: 0x0
    ctx->pc = 0x13288cu;
    // NOP
    // 0x132890: 0x27bdfff0
    ctx->pc = 0x132890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132894: 0xffbf0000
    ctx->pc = 0x132894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132898: 0x8c840004
    ctx->pc = 0x132898u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13289c: 0xdfbf0000
    ctx->pc = 0x13289cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328a0: 0x804b66e
    ctx->pc = 0x1328A0u;
    ctx->pc = 0x1328A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12D9B8u;
    entry_12d9b8_0x12da10(rdram, ctx, runtime); return;
    ctx->pc = 0x1328A8u;
}
