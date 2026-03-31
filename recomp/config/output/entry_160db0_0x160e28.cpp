#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_160db0
// Address: 0x160db0 - 0x160e28
void entry_160db0_0x160e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160db0u;

    // 0x160db0: 0x27bdffe0
    ctx->pc = 0x160db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160db4: 0xffb00000
    ctx->pc = 0x160db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160db8: 0x80802d
    ctx->pc = 0x160db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dbc: 0xffb10008
    ctx->pc = 0x160dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160dc0: 0xffbf0010
    ctx->pc = 0x160dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160dc4: 0xc05838a
    ctx->pc = 0x160DC4u;
    SET_GPR_U32(ctx, 31, 0x160DCCu);
    ctx->pc = 0x160DC8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 96));
    ctx->pc = 0x160E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160E28_0x160e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DCCu; }
    }
    if (ctx->pc != 0x160DCCu) { return; }
    ctx->pc = 0x160DCCu;
    // 0x160dcc: 0xae220000
    ctx->pc = 0x160dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x160dd0: 0x200202d
    ctx->pc = 0x160dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dd4: 0xc0583a6
    ctx->pc = 0x160DD4u;
    SET_GPR_U32(ctx, 31, 0x160DDCu);
    ctx->pc = 0x160DD8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 136));
    ctx->pc = 0x160E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160E98_0x160e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DDCu; }
    }
    if (ctx->pc != 0x160DDCu) { return; }
    ctx->pc = 0x160DDCu;
    // 0x160ddc: 0x8e030008
    ctx->pc = 0x160ddcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160de0: 0xae220004
    ctx->pc = 0x160de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x160de4: 0xae230008
    ctx->pc = 0x160de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x160de8: 0x8e040014
    ctx->pc = 0x160de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160dec: 0x8e02000c
    ctx->pc = 0x160decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160df0: 0xae22000c
    ctx->pc = 0x160df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x160df4: 0x8e030010
    ctx->pc = 0x160df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160df8: 0xc0583c2
    ctx->pc = 0x160DF8u;
    SET_GPR_U32(ctx, 31, 0x160E00u);
    ctx->pc = 0x160DFCu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x160F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F08_0x160f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E00u; }
    }
    if (ctx->pc != 0x160E00u) { return; }
    ctx->pc = 0x160E00u;
    // 0x160e00: 0x8e040018
    ctx->pc = 0x160e00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160e04: 0xc0583c2
    ctx->pc = 0x160E04u;
    SET_GPR_U32(ctx, 31, 0x160E0Cu);
    ctx->pc = 0x160E08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x160F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F08_0x160f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E0Cu; }
    }
    if (ctx->pc != 0x160E0Cu) { return; }
    ctx->pc = 0x160E0Cu;
    // 0x160e0c: 0xae220018
    ctx->pc = 0x160e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x160e10: 0xdfb00000
    ctx->pc = 0x160e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e14: 0xdfb10008
    ctx->pc = 0x160e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160e18: 0xdfbf0010
    ctx->pc = 0x160e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160e1c: 0x3e00008
    ctx->pc = 0x160E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160E24u;
    // 0x160e24: 0x0
    ctx->pc = 0x160e24u;
    // NOP
}
