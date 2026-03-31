#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189C80
// Address: 0x189c80 - 0x189e10
void sub_00189C80_0x189c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189c80u;

    // 0x189c80: 0x27bdffb0
    ctx->pc = 0x189c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189c84: 0x3c010029
    ctx->pc = 0x189c84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x189c88: 0xffbf0040
    ctx->pc = 0x189c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x189c8c: 0x7fb30030
    ctx->pc = 0x189c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189c90: 0x7fb20020
    ctx->pc = 0x189c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189c94: 0x80982d
    ctx->pc = 0x189c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c98: 0x7fb10010
    ctx->pc = 0x189c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189c9c: 0x902d
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ca0: 0x7fb00000
    ctx->pc = 0x189ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189ca4: 0x8c2341a0
    ctx->pc = 0x189ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16800)));
    // 0x189ca8: 0x10000008
    ctx->pc = 0x189CA8u;
    {
        const bool branch_taken_0x189ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189CACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189ca8) {
            ctx->pc = 0x189CCCu;
            goto label_189ccc;
        }
    }
    ctx->pc = 0x189CB0u;
label_189cb0:
    // 0x189cb0: 0x521021
    ctx->pc = 0x189cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x189cb4: 0x211c0
    ctx->pc = 0x189cb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
    // 0x189cb8: 0x621021
    ctx->pc = 0x189cb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189cbc: 0x8c420004
    ctx->pc = 0x189cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189cc0: 0x10400006
    ctx->pc = 0x189CC0u;
    {
        const bool branch_taken_0x189cc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x189CC4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x189cc0) {
            ctx->pc = 0x189CDCu;
            goto label_189cdc;
        }
    }
    ctx->pc = 0x189CC8u;
    // 0x189cc8: 0x26520001
    ctx->pc = 0x189cc8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_189ccc:
    // 0x189ccc: 0x2e420280
    ctx->pc = 0x189cccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 640));
    // 0x189cd0: 0x1440fff7
    ctx->pc = 0x189CD0u;
    {
        const bool branch_taken_0x189cd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189CD4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x189cd0) {
            ctx->pc = 0x189CB0u;
            goto label_189cb0;
        }
    }
    ctx->pc = 0x189CD8u;
    // 0x189cd8: 0x121040
    ctx->pc = 0x189cd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
label_189cdc:
    // 0x189cdc: 0x282d
    ctx->pc = 0x189cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ce0: 0x521021
    ctx->pc = 0x189ce0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x189ce4: 0x24060180
    ctx->pc = 0x189ce4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    // 0x189ce8: 0x211c0
    ctx->pc = 0x189ce8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
    // 0x189cec: 0x628821
    ctx->pc = 0x189cecu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189cf0: 0xc0636e0
    ctx->pc = 0x189CF0u;
    SET_GPR_U32(ctx, 31, 0x189CF8u);
    ctx->pc = 0x189CF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CF8u; }
    }
    if (ctx->pc != 0x189CF8u) { return; }
    ctx->pc = 0x189CF8u;
    // 0x189cf8: 0x8e630000
    ctx->pc = 0x189cf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189cfc: 0x32020004
    ctx->pc = 0x189cfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
    // 0x189d00: 0xae230004
    ctx->pc = 0x189d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x189d04: 0x8e63000c
    ctx->pc = 0x189d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x189d08: 0xae230008
    ctx->pc = 0x189d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x189d0c: 0xae300000
    ctx->pc = 0x189d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x189d10: 0xae200050
    ctx->pc = 0x189d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x189d14: 0x14400029
    ctx->pc = 0x189D14u;
    {
        const bool branch_taken_0x189d14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189D18u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x189d14) {
            ctx->pc = 0x189DBCu;
            goto label_189dbc;
        }
    }
    ctx->pc = 0x189D1Cu;
    // 0x189d1c: 0x24020030
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x189d20: 0x2404fff0
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189d24: 0xae220010
    ctx->pc = 0x189d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x189d28: 0x8e63001c
    ctx->pc = 0x189d28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x189d2c: 0x8e220010
    ctx->pc = 0x189d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x189d30: 0x2463000f
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x189d34: 0x641824
    ctx->pc = 0x189d34u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189d38: 0x431021
    ctx->pc = 0x189d38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189d3c: 0xae220010
    ctx->pc = 0x189d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x189d40: 0x8e630018
    ctx->pc = 0x189d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x189d44: 0x8e220010
    ctx->pc = 0x189d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x189d48: 0x2463000f
    ctx->pc = 0x189d48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x189d4c: 0x641824
    ctx->pc = 0x189d4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189d50: 0x431021
    ctx->pc = 0x189d50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189d54: 0xae220010
    ctx->pc = 0x189d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x189d58: 0x8e240010
    ctx->pc = 0x189d58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x189d5c: 0xc063714
    ctx->pc = 0x189D5Cu;
    SET_GPR_U32(ctx, 31, 0x189D64u);
    ctx->pc = 0x189D60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D64u; }
    }
    if (ctx->pc != 0x189D64u) { return; }
    ctx->pc = 0x189D64u;
    // 0x189d64: 0xae220014
    ctx->pc = 0x189d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x189d68: 0xc063728
    ctx->pc = 0x189D68u;
    SET_GPR_U32(ctx, 31, 0x189D70u);
    ctx->pc = 0x189D6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D70u; }
    }
    if (ctx->pc != 0x189D70u) { return; }
    ctx->pc = 0x189D70u;
    // 0x189d70: 0x40802d
    ctx->pc = 0x189d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d74: 0x260282d
    ctx->pc = 0x189d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d78: 0x200202d
    ctx->pc = 0x189d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d7c: 0xc0636ec
    ctx->pc = 0x189D7Cu;
    SET_GPR_U32(ctx, 31, 0x189D84u);
    ctx->pc = 0x189D80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D84u; }
    }
    if (ctx->pc != 0x189D84u) { return; }
    ctx->pc = 0x189D84u;
    // 0x189d84: 0x8e66001c
    ctx->pc = 0x189d84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x189d88: 0x26100030
    ctx->pc = 0x189d88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
    // 0x189d8c: 0x8e650008
    ctx->pc = 0x189d8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x189d90: 0xc0636ec
    ctx->pc = 0x189D90u;
    SET_GPR_U32(ctx, 31, 0x189D98u);
    ctx->pc = 0x189D94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D98u; }
    }
    if (ctx->pc != 0x189D98u) { return; }
    ctx->pc = 0x189D98u;
    // 0x189d98: 0x8e63001c
    ctx->pc = 0x189d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x189d9c: 0x2402fff0
    ctx->pc = 0x189d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189da0: 0x8e660018
    ctx->pc = 0x189da0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x189da4: 0x8e650010
    ctx->pc = 0x189da4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x189da8: 0x2463000f
    ctx->pc = 0x189da8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x189dac: 0x621024
    ctx->pc = 0x189dacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189db0: 0x2028021
    ctx->pc = 0x189db0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x189db4: 0xc0636ec
    ctx->pc = 0x189DB4u;
    SET_GPR_U32(ctx, 31, 0x189DBCu);
    ctx->pc = 0x189DB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DBCu; }
    }
    if (ctx->pc != 0x189DBCu) { return; }
    ctx->pc = 0x189DBCu;
label_189dbc:
    // 0x189dbc: 0x3c01002a
    ctx->pc = 0x189dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x189dc0: 0x260282d
    ctx->pc = 0x189dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dc4: 0x8c22fe70
    ctx->pc = 0x189dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
    // 0x189dc8: 0x220202d
    ctx->pc = 0x189dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dcc: 0xc062784
    ctx->pc = 0x189DCCu;
    SET_GPR_U32(ctx, 31, 0x189DD4u);
    ctx->pc = 0x189DD0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x189E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E10_0x189e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DD4u; }
    }
    if (ctx->pc != 0x189DD4u) { return; }
    ctx->pc = 0x189DD4u;
    // 0x189dd4: 0x14400005
    ctx->pc = 0x189DD4u;
    {
        const bool branch_taken_0x189dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189DD8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x189dd4) {
            ctx->pc = 0x189DECu;
            goto label_189dec;
        }
    }
    ctx->pc = 0x189DDCu;
    // 0x189ddc: 0xc063128
    ctx->pc = 0x189DDCu;
    SET_GPR_U32(ctx, 31, 0x189DE4u);
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C4A0_0x18c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DE4u; }
    }
    if (ctx->pc != 0x189DE4u) { return; }
    ctx->pc = 0x189DE4u;
    // 0x189de4: 0x10000002
    ctx->pc = 0x189DE4u;
    {
        const bool branch_taken_0x189de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189DE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189de4) {
            ctx->pc = 0x189DF0u;
            goto label_189df0;
        }
    }
    ctx->pc = 0x189DECu;
label_189dec:
    // 0x189dec: 0x26420001
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
label_189df0:
    // 0x189df0: 0xdfbf0040
    ctx->pc = 0x189df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189df4: 0x7bb30030
    ctx->pc = 0x189df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189df8: 0x7bb20020
    ctx->pc = 0x189df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189dfc: 0x7bb10010
    ctx->pc = 0x189dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189e00: 0x7bb00000
    ctx->pc = 0x189e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189e04: 0x3e00008
    ctx->pc = 0x189E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189E08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189CB0u: goto label_189cb0;
            case 0x189CCCu: goto label_189ccc;
            case 0x189CDCu: goto label_189cdc;
            case 0x189DBCu: goto label_189dbc;
            case 0x189DECu: goto label_189dec;
            case 0x189DF0u: goto label_189df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189E0Cu;
    // 0x189e0c: 0x0
    ctx->pc = 0x189e0cu;
    // NOP
}
