#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_161c78
// Address: 0x161c78 - 0x161d20
void entry_161c78_0x161d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161c78u;

    // 0x161c78: 0x27bdffd0
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161c7c: 0x80102d
    ctx->pc = 0x161c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c80: 0xffb00020
    ctx->pc = 0x161c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x161c84: 0x24430100
    ctx->pc = 0x161c84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 256));
    // 0x161c88: 0xffbf0028
    ctx->pc = 0x161c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x161c8c: 0x3a0202d
    ctx->pc = 0x161c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c90: 0x8c680004
    ctx->pc = 0x161c90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x161c94: 0x15000008
    ctx->pc = 0x161C94u;
    {
        const bool branch_taken_0x161c94 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x161C98u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 168)));
        if (branch_taken_0x161c94) {
            ctx->pc = 0x161CB8u;
            goto label_161cb8;
        }
    }
    ctx->pc = 0x161C9Cu;
    // 0x161c9c: 0x200202d
    ctx->pc = 0x161c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ca0: 0x282d
    ctx->pc = 0x161ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ca4: 0xc05f4be
    ctx->pc = 0x161CA4u;
    SET_GPR_U32(ctx, 31, 0x161CACu);
    ctx->pc = 0x161CA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D2F8_0x17d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CACu; }
    }
    if (ctx->pc != 0x161CACu) { return; }
    ctx->pc = 0x161CACu;
    // 0x161cac: 0x10000019
    ctx->pc = 0x161CACu;
    {
        const bool branch_taken_0x161cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161CB0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x161cac) {
            ctx->pc = 0x161D14u;
            goto label_161d14;
        }
    }
    ctx->pc = 0x161CB4u;
    // 0x161cb4: 0x0
    ctx->pc = 0x161cb4u;
    // NOP
label_161cb8:
    // 0x161cb8: 0x8c620008
    ctx->pc = 0x161cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x161cbc: 0x3c050024
    ctx->pc = 0x161cbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x161cc0: 0x3c060024
    ctx->pc = 0x161cc0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x161cc4: 0x24a5fef8
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967032));
    // 0x161cc8: 0x24c6ff00
    ctx->pc = 0x161cc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967040));
    // 0x161ccc: 0x27a70010
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x161cd0: 0xafa80000
    ctx->pc = 0x161cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x161cd4: 0xc050288
    ctx->pc = 0x161CD4u;
    SET_GPR_U32(ctx, 31, 0x161CDCu);
    ctx->pc = 0x161CD8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CDCu; }
    }
    if (ctx->pc != 0x161CDCu) { return; }
    ctx->pc = 0x161CDCu;
    // 0x161cdc: 0x200202d
    ctx->pc = 0x161cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce0: 0x282d
    ctx->pc = 0x161ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce4: 0x14400006
    ctx->pc = 0x161CE4u;
    {
        const bool branch_taken_0x161ce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161CE8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161ce4) {
            ctx->pc = 0x161D00u;
            goto label_161d00;
        }
    }
    ctx->pc = 0x161CECu;
    // 0x161cec: 0xc05f4be
    ctx->pc = 0x161CECu;
    SET_GPR_U32(ctx, 31, 0x161CF4u);
    ctx->pc = 0x17D2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D2F8_0x17d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CF4u; }
    }
    if (ctx->pc != 0x161CF4u) { return; }
    ctx->pc = 0x161CF4u;
    // 0x161cf4: 0x10000007
    ctx->pc = 0x161CF4u;
    {
        const bool branch_taken_0x161cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161CF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x161cf4) {
            ctx->pc = 0x161D14u;
            goto label_161d14;
        }
    }
    ctx->pc = 0x161CFCu;
    // 0x161cfc: 0x0
    ctx->pc = 0x161cfcu;
    // NOP
label_161d00:
    // 0x161d00: 0x8fa50010
    ctx->pc = 0x161d00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161d04: 0x200202d
    ctx->pc = 0x161d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d08: 0xc05f4be
    ctx->pc = 0x161D08u;
    SET_GPR_U32(ctx, 31, 0x161D10u);
    ctx->pc = 0x161D0Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x17D2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D2F8_0x17d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D10u; }
    }
    if (ctx->pc != 0x161D10u) { return; }
    ctx->pc = 0x161D10u;
    // 0x161d10: 0xdfb00020
    ctx->pc = 0x161d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161d14:
    // 0x161d14: 0xdfbf0028
    ctx->pc = 0x161d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x161d18: 0x3e00008
    ctx->pc = 0x161D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161CB8u: goto label_161cb8;
            case 0x161D00u: goto label_161d00;
            case 0x161D14u: goto label_161d14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161D20u;
}
