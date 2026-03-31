#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8D80
// Address: 0x1d8d80 - 0x1d8e10
void sub_001D8D80_0x1d8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8d80u;

    // 0x1d8d80: 0x27bdffc0
    ctx->pc = 0x1d8d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8d84: 0xffbf0030
    ctx->pc = 0x1d8d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d8d88: 0x7fb20020
    ctx->pc = 0x1d8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8d8c: 0x7fb10010
    ctx->pc = 0x1d8d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8d90: 0xa0902d
    ctx->pc = 0x1d8d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d94: 0x7fb00000
    ctx->pc = 0x1d8d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8d98: 0xc0882d
    ctx->pc = 0x1d8d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d9c: 0xc075e38
    ctx->pc = 0x1D8D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8DA4u);
    ctx->pc = 0x1D8DA0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DA4u; }
    }
    if (ctx->pc != 0x1D8DA4u) { return; }
    ctx->pc = 0x1D8DA4u;
    // 0x1d8da4: 0x3c050034
    ctx->pc = 0x1d8da4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8da8: 0x3c070034
    ctx->pc = 0x1d8da8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8dac: 0x2404002d
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d8db0: 0x24a57280
    ctx->pc = 0x1d8db0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8db4: 0x24060020
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8db8: 0x24e76280
    ctx->pc = 0x1d8db8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8dbc: 0xc075e40
    ctx->pc = 0x1D8DBCu;
    SET_GPR_U32(ctx, 31, 0x1D8DC4u);
    ctx->pc = 0x1D8DC0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 296));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DC4u; }
    }
    if (ctx->pc != 0x1D8DC4u) { return; }
    ctx->pc = 0x1D8DC4u;
    // 0x1d8dc4: 0x200202d
    ctx->pc = 0x1d8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8dc8: 0x3c100034
    ctx->pc = 0x1d8dc8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x1d8dcc: 0x2610629c
    ctx->pc = 0x1d8dccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 25244));
    // 0x1d8dd0: 0xc042bf0
    ctx->pc = 0x1D8DD0u;
    SET_GPR_U32(ctx, 31, 0x1D8DD8u);
    ctx->pc = 0x1D8DD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DD8u; }
    }
    if (ctx->pc != 0x1D8DD8u) { return; }
    ctx->pc = 0x1D8DD8u;
    // 0x1d8dd8: 0x8e020100
    ctx->pc = 0x1d8dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1d8ddc: 0x3c010034
    ctx->pc = 0x1d8ddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8de0: 0xae420000
    ctx->pc = 0x1d8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1d8de4: 0x8e020104
    ctx->pc = 0x1d8de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1d8de8: 0xae220000
    ctx->pc = 0x1d8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d8dec: 0xc075e3c
    ctx->pc = 0x1D8DECu;
    SET_GPR_U32(ctx, 31, 0x1D8DF4u);
    ctx->pc = 0x1D8DF0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DF4u; }
    }
    if (ctx->pc != 0x1D8DF4u) { return; }
    ctx->pc = 0x1D8DF4u;
    // 0x1d8df4: 0x200102d
    ctx->pc = 0x1d8df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8df8: 0xdfbf0030
    ctx->pc = 0x1d8df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8dfc: 0x7bb20020
    ctx->pc = 0x1d8dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8e00: 0x7bb10010
    ctx->pc = 0x1d8e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8e04: 0x7bb00000
    ctx->pc = 0x1d8e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8e08: 0x3e00008
    ctx->pc = 0x1D8E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8E0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8E10u;
}
