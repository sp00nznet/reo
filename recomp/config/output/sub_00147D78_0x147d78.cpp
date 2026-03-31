#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147D78
// Address: 0x147d78 - 0x147e78
void sub_00147D78_0x147d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147d78u;

    // 0x147d78: 0x27bdfff0
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147d7c: 0x3c020fff
    ctx->pc = 0x147d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x147d80: 0xffbf0000
    ctx->pc = 0x147d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147d84: 0x3442ffff
    ctx->pc = 0x147d84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x147d88: 0xa22824
    ctx->pc = 0x147d88u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147d8c: 0x3c032000
    ctx->pc = 0x147d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x147d90: 0x8c870040
    ctx->pc = 0x147d90u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147d94: 0xa32825
    ctx->pc = 0x147d94u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147d98: 0xace600fc
    ctx->pc = 0x147d98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 6));
    // 0x147d9c: 0xace500f0
    ctx->pc = 0x147d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 5));
    // 0x147da0: 0xace000f4
    ctx->pc = 0x147da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x147da4: 0xace000c8
    ctx->pc = 0x147da4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 200), GPR_U32(ctx, 0));
    // 0x147da8: 0xc05205c
    ctx->pc = 0x147DA8u;
    SET_GPR_U32(ctx, 31, 0x147DB0u);
    ctx->pc = 0x147DACu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
    ctx->pc = 0x148170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148170_0x148170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DB0u; }
    }
    if (ctx->pc != 0x147DB0u) { return; }
    ctx->pc = 0x147DB0u;
    // 0x147db0: 0xdfbf0000
    ctx->pc = 0x147db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147db4: 0x3e00008
    ctx->pc = 0x147DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147DBCu;
    // 0x147dbc: 0x0
    ctx->pc = 0x147dbcu;
    // NOP
    // 0x147dc0: 0x27bdfff0
    ctx->pc = 0x147dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147dc4: 0x3c020fff
    ctx->pc = 0x147dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x147dc8: 0xffbf0000
    ctx->pc = 0x147dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147dcc: 0xc74018
    ctx->pc = 0x147dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x147dd0: 0x3442ffff
    ctx->pc = 0x147dd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x147dd4: 0x63100
    ctx->pc = 0x147dd4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x147dd8: 0xa22824
    ctx->pc = 0x147dd8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147ddc: 0x8c830040
    ctx->pc = 0x147ddcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147de0: 0x3c022000
    ctx->pc = 0x147de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x147de4: 0x73900
    ctx->pc = 0x147de4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 4));
    // 0x147de8: 0xa22825
    ctx->pc = 0x147de8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147dec: 0xac6700f8
    ctx->pc = 0x147decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 7));
    // 0x147df0: 0xac6500f0
    ctx->pc = 0x147df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 5));
    // 0x147df4: 0xac6800fc
    ctx->pc = 0x147df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 8));
    // 0x147df8: 0xac6600f4
    ctx->pc = 0x147df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 6));
    // 0x147dfc: 0xc05205c
    ctx->pc = 0x147DFCu;
    SET_GPR_U32(ctx, 31, 0x147E04u);
    ctx->pc = 0x147E00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    ctx->pc = 0x148170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148170_0x148170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147E04u; }
    }
    if (ctx->pc != 0x147E04u) { return; }
    ctx->pc = 0x147E04u;
    // 0x147e04: 0xdfbf0000
    ctx->pc = 0x147e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147e08: 0x3e00008
    ctx->pc = 0x147E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147E10u;
    // 0x147e10: 0x8c830040
    ctx->pc = 0x147e10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147e14: 0x24020001
    ctx->pc = 0x147e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x147e18: 0x3e00008
    ctx->pc = 0x147E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4256), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147E20u;
    // 0x147e20: 0x8c820040
    ctx->pc = 0x147e20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147e24: 0xac4700b4
    ctx->pc = 0x147e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 7));
    // 0x147e28: 0xac4500ac
    ctx->pc = 0x147e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 5));
    // 0x147e2c: 0x3e00008
    ctx->pc = 0x147E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E30u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147E34u;
    // 0x147e34: 0x0
    ctx->pc = 0x147e34u;
    // NOP
    // 0x147e38: 0x8c880040
    ctx->pc = 0x147e38u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147e3c: 0x8d0200ac
    ctx->pc = 0x147e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x147e40: 0xaca20000
    ctx->pc = 0x147e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x147e44: 0x8d0300b0
    ctx->pc = 0x147e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x147e48: 0xacc30000
    ctx->pc = 0x147e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x147e4c: 0x8d0200b4
    ctx->pc = 0x147e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 180)));
    // 0x147e50: 0x3e00008
    ctx->pc = 0x147E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E54u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147E58u;
    // 0x147e58: 0x8c830040
    ctx->pc = 0x147e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147e5c: 0x3e00008
    ctx->pc = 0x147E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147E64u;
    // 0x147e64: 0x0
    ctx->pc = 0x147e64u;
    // NOP
    // 0x147e68: 0x8c830040
    ctx->pc = 0x147e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147e6c: 0x8c620004
    ctx->pc = 0x147e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x147e70: 0x3e00008
    ctx->pc = 0x147E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E74u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147E78u;
}
