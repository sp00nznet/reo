#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180D90
// Address: 0x180d90 - 0x180e28
void sub_00180D90_0x180d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180d90u;

    // 0x180d90: 0x3c030023
    ctx->pc = 0x180d90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x180d94: 0x27bdffc0
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180d98: 0x8c66fa10
    ctx->pc = 0x180d98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x180d9c: 0x3c028101
    ctx->pc = 0x180d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180da0: 0xffbf0030
    ctx->pc = 0x180da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180da4: 0x10c0001c
    ctx->pc = 0x180DA4u;
    {
        const bool branch_taken_0x180da4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x180DA8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x180da4) {
            ctx->pc = 0x180E18u;
            goto label_180e18;
        }
    }
    ctx->pc = 0x180DACu;
    // 0x180dac: 0x8c870004
    ctx->pc = 0x180dacu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180db0: 0x3c028101
    ctx->pc = 0x180db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180db4: 0x24e3fffe
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x180db8: 0x2c630002
    ctx->pc = 0x180db8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x180dbc: 0x10600016
    ctx->pc = 0x180DBCu;
    {
        const bool branch_taken_0x180dbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x180DC0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x180dbc) {
            ctx->pc = 0x180E18u;
            goto label_180e18;
        }
    }
    ctx->pc = 0x180DC4u;
    // 0x180dc4: 0x8c830008
    ctx->pc = 0x180dc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x180dc8: 0x3c028101
    ctx->pc = 0x180dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180dcc: 0x14600012
    ctx->pc = 0x180DCCu;
    {
        const bool branch_taken_0x180dcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x180DD0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x180dcc) {
            ctx->pc = 0x180E18u;
            goto label_180e18;
        }
    }
    ctx->pc = 0x180DD4u;
    // 0x180dd4: 0x8c820000
    ctx->pc = 0x180dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180dd8: 0x24060002
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x180ddc: 0x8c83000c
    ctx->pc = 0x180ddcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x180de0: 0x3a0202d
    ctx->pc = 0x180de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180de4: 0x34420001
    ctx->pc = 0x180de4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x180de8: 0xafa70008
    ctx->pc = 0x180de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x180dec: 0xafa30010
    ctx->pc = 0x180decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x180df0: 0xafa0000c
    ctx->pc = 0x180df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x180df4: 0xafa20000
    ctx->pc = 0x180df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x180df8: 0xafa60004
    ctx->pc = 0x180df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x180dfc: 0xc061e5c
    ctx->pc = 0x180DFCu;
    SET_GPR_U32(ctx, 31, 0x180E04u);
    ctx->pc = 0x180E00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x187970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187970_0x187970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E04u; }
    }
    if (ctx->pc != 0x180E04u) { return; }
    ctx->pc = 0x180E04u;
    // 0x180e04: 0x40202d
    ctx->pc = 0x180e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e08: 0x3c028101
    ctx->pc = 0x180e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180e0c: 0x28830000
    ctx->pc = 0x180e0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 0));
    // 0x180e10: 0x34420017
    ctx->pc = 0x180e10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 23));
    // 0x180e14: 0x83100a
    ctx->pc = 0x180e14u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_180e18:
    // 0x180e18: 0xdfbf0030
    ctx->pc = 0x180e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180e1c: 0x3e00008
    ctx->pc = 0x180E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E18u: goto label_180e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180E24u;
    // 0x180e24: 0x0
    ctx->pc = 0x180e24u;
    // NOP
}
