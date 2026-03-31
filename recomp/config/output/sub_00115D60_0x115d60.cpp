#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115D60
// Address: 0x115d60 - 0x115e30
void sub_00115D60_0x115d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115d60u;

    // 0x115d60: 0x27bdffa0
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x115d64: 0x182d
    ctx->pc = 0x115d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d68: 0xffb40040
    ctx->pc = 0x115d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x115d6c: 0xffb20020
    ctx->pc = 0x115d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115d70: 0x80a02d
    ctx->pc = 0x115d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d74: 0xffbf0050
    ctx->pc = 0x115d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x115d78: 0xa0902d
    ctx->pc = 0x115d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d7c: 0xffb30030
    ctx->pc = 0x115d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x115d80: 0xffb10010
    ctx->pc = 0x115d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115d84: 0x1a400021
    ctx->pc = 0x115D84u;
    {
        const bool branch_taken_0x115d84 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x115D88u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x115d84) {
            ctx->pc = 0x115E0Cu;
            goto label_115e0c;
        }
    }
    ctx->pc = 0x115D8Cu;
    // 0x115d8c: 0x3c130026
    ctx->pc = 0x115d8cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
    // 0x115d90: 0x3c020026
    ctx->pc = 0x115d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x115d94: 0x0
    ctx->pc = 0x115d94u;
    // NOP
label_115d98:
    // 0x115d98: 0x24710001
    ctx->pc = 0x115d98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 1));
    // 0x115d9c: 0x8c44aba8
    ctx->pc = 0x115d9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294945704)));
    // 0x115da0: 0x2838021
    ctx->pc = 0x115da0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x115da4: 0x0
    ctx->pc = 0x115da4u;
    // NOP
label_115da8:
    // 0x115da8: 0x8c820004
    ctx->pc = 0x115da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x115dac: 0x0
    ctx->pc = 0x115dacu;
    // NOP
    // 0x115db0: 0x0
    ctx->pc = 0x115db0u;
    // NOP
    // 0x115db4: 0x0
    ctx->pc = 0x115db4u;
    // NOP
    // 0x115db8: 0x0
    ctx->pc = 0x115db8u;
    // NOP
    // 0x115dbc: 0x1040fffa
    ctx->pc = 0x115DBCu;
    {
        const bool branch_taken_0x115dbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x115dbc) {
            ctx->pc = 0x115DA8u;
            goto label_115da8;
        }
    }
    ctx->pc = 0x115DC4u;
    // 0x115dc4: 0x2665ab90
    ctx->pc = 0x115dc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294945680));
    // 0x115dc8: 0x8ca20018
    ctx->pc = 0x115dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x115dcc: 0x8c430008
    ctx->pc = 0x115dccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x115dd0: 0x90640000
    ctx->pc = 0x115dd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115dd4: 0xa2040000
    ctx->pc = 0x115dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x115dd8: 0xc045684
    ctx->pc = 0x115DD8u;
    SET_GPR_U32(ctx, 31, 0x115DE0u);
    ctx->pc = 0x115DDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->pc = 0x115A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115A10_0x115a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115DE0u; }
    }
    if (ctx->pc != 0x115DE0u) { return; }
    ctx->pc = 0x115DE0u;
    // 0x115de0: 0x82030000
    ctx->pc = 0x115de0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115de4: 0x2402000a
    ctx->pc = 0x115de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x115de8: 0x10620003
    ctx->pc = 0x115DE8u;
    {
        const bool branch_taken_0x115de8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x115DECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x115de8) {
            ctx->pc = 0x115DF8u;
            goto label_115df8;
        }
    }
    ctx->pc = 0x115DF0u;
    // 0x115df0: 0x14620003
    ctx->pc = 0x115DF0u;
    {
        const bool branch_taken_0x115df0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x115DF4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115df0) {
            ctx->pc = 0x115E00u;
            goto label_115e00;
        }
    }
    ctx->pc = 0x115DF8u;
label_115df8:
    // 0x115df8: 0x10000005
    ctx->pc = 0x115DF8u;
    {
        const bool branch_taken_0x115df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115DFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115df8) {
            ctx->pc = 0x115E10u;
            goto label_115e10;
        }
    }
    ctx->pc = 0x115E00u;
label_115e00:
    // 0x115e00: 0x72102a
    ctx->pc = 0x115e00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x115e04: 0x1440ffe4
    ctx->pc = 0x115E04u;
    {
        const bool branch_taken_0x115e04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x115E08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x115e04) {
            ctx->pc = 0x115D98u;
            goto label_115d98;
        }
    }
    ctx->pc = 0x115E0Cu;
label_115e0c:
    // 0x115e0c: 0x60102d
    ctx->pc = 0x115e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_115e10:
    // 0x115e10: 0xdfbf0050
    ctx->pc = 0x115e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115e14: 0xdfb40040
    ctx->pc = 0x115e14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115e18: 0xdfb30030
    ctx->pc = 0x115e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115e1c: 0xdfb20020
    ctx->pc = 0x115e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115e20: 0xdfb10010
    ctx->pc = 0x115e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e24: 0xdfb00000
    ctx->pc = 0x115e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115e28: 0x3e00008
    ctx->pc = 0x115E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115D98u: goto label_115d98;
            case 0x115DA8u: goto label_115da8;
            case 0x115DF8u: goto label_115df8;
            case 0x115E00u: goto label_115e00;
            case 0x115E0Cu: goto label_115e0c;
            case 0x115E10u: goto label_115e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115E30u;
}
