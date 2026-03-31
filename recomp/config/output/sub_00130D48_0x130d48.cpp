#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130D48
// Address: 0x130d48 - 0x130e18
void sub_00130D48_0x130d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130d48u;

    // 0x130d48: 0x27bdffd0
    ctx->pc = 0x130d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130d4c: 0xffb30018
    ctx->pc = 0x130d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130d50: 0x3c130022
    ctx->pc = 0x130d50u;
    SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
    // 0x130d54: 0xffb00000
    ctx->pc = 0x130d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130d58: 0xffb10008
    ctx->pc = 0x130d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130d5c: 0xffb20010
    ctx->pc = 0x130d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130d60: 0xffbf0020
    ctx->pc = 0x130d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130d64: 0xc050864
    ctx->pc = 0x130D64u;
    SET_GPR_U32(ctx, 31, 0x130D6Cu);
    ctx->pc = 0x130D68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294944944));
    ctx->pc = 0x142190u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142190_0x142190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D6Cu; }
    }
    if (ctx->pc != 0x130D6Cu) { return; }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0x1040000e
    ctx->pc = 0x130D6Cu;
    {
        const bool branch_taken_0x130d6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130D70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x130d6c) {
            ctx->pc = 0x130DA8u;
            goto label_130da8;
        }
    }
    ctx->pc = 0x130D74u;
    // 0x130d74: 0x24120001
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d78: 0x2450a8c0
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x130d7c: 0x24110027
    ctx->pc = 0x130d7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 39));
label_130d80:
    // 0x130d80: 0x82020000
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130d84: 0x54520004
    ctx->pc = 0x130D84u;
    {
        const bool branch_taken_0x130d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x130d84) {
            ctx->pc = 0x130D88u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x130D98u;
            goto label_130d98;
        }
    }
    ctx->pc = 0x130D8Cu;
    // 0x130d8c: 0xc04c2de
    ctx->pc = 0x130D8Cu;
    SET_GPR_U32(ctx, 31, 0x130D94u);
    ctx->pc = 0x130D90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130B78_0x130b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D94u; }
    }
    if (ctx->pc != 0x130D94u) { return; }
    ctx->pc = 0x130D94u;
    // 0x130d94: 0x2631ffff
    ctx->pc = 0x130d94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_130d98:
    // 0x130d98: 0x621fff9
    ctx->pc = 0x130D98u;
    {
        const bool branch_taken_0x130d98 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x130D9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 92));
        if (branch_taken_0x130d98) {
            ctx->pc = 0x130D80u;
            goto label_130d80;
        }
    }
    ctx->pc = 0x130DA0u;
    // 0x130da0: 0x2662a8b0
    ctx->pc = 0x130da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294944944));
    // 0x130da4: 0xac400000
    ctx->pc = 0x130da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_130da8:
    // 0x130da8: 0xdfb00000
    ctx->pc = 0x130da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130dac: 0xdfb10008
    ctx->pc = 0x130dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130db0: 0xdfb20010
    ctx->pc = 0x130db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130db4: 0xdfb30018
    ctx->pc = 0x130db4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130db8: 0xdfbf0020
    ctx->pc = 0x130db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130dbc: 0x3e00008
    ctx->pc = 0x130DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130D80u: goto label_130d80;
            case 0x130D98u: goto label_130d98;
            case 0x130DA8u: goto label_130da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130DC4u;
    // 0x130dc4: 0x0
    ctx->pc = 0x130dc4u;
    // NOP
    // 0x130dc8: 0x27bdfff0
    ctx->pc = 0x130dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130dcc: 0xffb00000
    ctx->pc = 0x130dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130dd0: 0xffbf0008
    ctx->pc = 0x130dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130dd4: 0xc04c182
    ctx->pc = 0x130DD4u;
    SET_GPR_U32(ctx, 31, 0x130DDCu);
    ctx->pc = 0x130DD8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130608_0x130608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DDCu; }
    }
    if (ctx->pc != 0x130DDCu) { return; }
    ctx->pc = 0x130DDCu;
    // 0x130ddc: 0xae020000
    ctx->pc = 0x130ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x130de0: 0x24020001
    ctx->pc = 0x130de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130de4: 0xdfb00000
    ctx->pc = 0x130de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130de8: 0xdfbf0008
    ctx->pc = 0x130de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130dec: 0x3e00008
    ctx->pc = 0x130DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130DF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130D80u: goto label_130d80;
            case 0x130D98u: goto label_130d98;
            case 0x130DA8u: goto label_130da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130DF4u;
    // 0x130df4: 0x0
    ctx->pc = 0x130df4u;
    // NOP
    // 0x130df8: 0x8c830018
    ctx->pc = 0x130df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x130dfc: 0x24020001
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e00: 0xaca30000
    ctx->pc = 0x130e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x130e04: 0x8c850014
    ctx->pc = 0x130e04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x130e08: 0x3e00008
    ctx->pc = 0x130E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130D80u: goto label_130d80;
            case 0x130D98u: goto label_130d98;
            case 0x130DA8u: goto label_130da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E10u;
    // 0x130e10: 0x3e00008
    ctx->pc = 0x130E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130D80u: goto label_130d80;
            case 0x130D98u: goto label_130d98;
            case 0x130DA8u: goto label_130da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E18u;
}
