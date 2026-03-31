#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4D40
// Address: 0x1b4d40 - 0x1b5010
void sub_001B4D40_0x1b4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4d40u;

    // 0x1b4d40: 0x27bdffa0
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b4d44: 0xffbf0050
    ctx->pc = 0x1b4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b4d48: 0x7fb40040
    ctx->pc = 0x1b4d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b4d4c: 0x7fb30030
    ctx->pc = 0x1b4d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4d50: 0x80a02d
    ctx->pc = 0x1b4d50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d54: 0x7fb20020
    ctx->pc = 0x1b4d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4d58: 0xa0982d
    ctx->pc = 0x1b4d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d5c: 0x7fb10010
    ctx->pc = 0x1b4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4d60: 0xc0902d
    ctx->pc = 0x1b4d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d64: 0x7fb00000
    ctx->pc = 0x1b4d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4d68: 0xe0882d
    ctx->pc = 0x1b4d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d6c: 0x3c10002c
    ctx->pc = 0x1b4d6cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b4d70: 0x282d
    ctx->pc = 0x1b4d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d74: 0x2610aaf0
    ctx->pc = 0x1b4d74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945520));
    // 0x1b4d78: 0x240600a8
    ctx->pc = 0x1b4d78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 168));
    // 0x1b4d7c: 0xc041f1a
    ctx->pc = 0x1B4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D84u);
    ctx->pc = 0x1B4D80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D84u; }
    }
    if (ctx->pc != 0x1B4D84u) { return; }
    ctx->pc = 0x1B4D84u;
    // 0x1b4d84: 0x3c04002e
    ctx->pc = 0x1b4d84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x1b4d88: 0x3c020002
    ctx->pc = 0x1b4d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1b4d8c: 0x2484ed40
    ctx->pc = 0x1b4d8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962496));
    // 0x1b4d90: 0x282d
    ctx->pc = 0x1b4d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d94: 0xc041f1a
    ctx->pc = 0x1B4D94u;
    SET_GPR_U32(ctx, 31, 0x1B4D9Cu);
    ctx->pc = 0x1B4D98u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16752));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D9Cu; }
    }
    if (ctx->pc != 0x1B4D9Cu) { return; }
    ctx->pc = 0x1B4D9Cu;
    // 0x1b4d9c: 0x3c04002c
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b4da0: 0x3c020002
    ctx->pc = 0x1b4da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1b4da4: 0x2484abc0
    ctx->pc = 0x1b4da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945728));
    // 0x1b4da8: 0x282d
    ctx->pc = 0x1b4da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dac: 0xc041f1a
    ctx->pc = 0x1B4DACu;
    SET_GPR_U32(ctx, 31, 0x1B4DB4u);
    ctx->pc = 0x1B4DB0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16752));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
    }
    if (ctx->pc != 0x1B4DB4u) { return; }
    ctx->pc = 0x1B4DB4u;
    // 0x1b4db4: 0x3c01002c
    ctx->pc = 0x1b4db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4db8: 0x3c020002
    ctx->pc = 0x1b4db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1b4dbc: 0xac34aaf4
    ctx->pc = 0x1b4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945524), GPR_U32(ctx, 20));
    // 0x1b4dc0: 0x34424170
    ctx->pc = 0x1b4dc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16752));
    // 0x1b4dc4: 0x3c01002c
    ctx->pc = 0x1b4dc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4dc8: 0x2407ffc0
    ctx->pc = 0x1b4dc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b4dcc: 0xac20aaf0
    ctx->pc = 0x1b4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945520), GPR_U32(ctx, 0));
    // 0x1b4dd0: 0x182d
    ctx->pc = 0x1b4dd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dd4: 0x3c01002c
    ctx->pc = 0x1b4dd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4dd8: 0xac22ab8c
    ctx->pc = 0x1b4dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945676), GPR_U32(ctx, 2));
    // 0x1b4ddc: 0x3c01002c
    ctx->pc = 0x1b4ddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4de0: 0x3c020023
    ctx->pc = 0x1b4de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b4de4: 0xac20ab94
    ctx->pc = 0x1b4de4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945684), GPR_U32(ctx, 0));
    // 0x1b4de8: 0x24424590
    ctx->pc = 0x1b4de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17808));
    // 0x1b4dec: 0x3c01002c
    ctx->pc = 0x1b4decu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4df0: 0xac20ab90
    ctx->pc = 0x1b4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945680), GPR_U32(ctx, 0));
    // 0x1b4df4: 0x3c01002c
    ctx->pc = 0x1b4df4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4df8: 0x8c25aaf4
    ctx->pc = 0x1b4df8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294945524)));
    // 0x1b4dfc: 0x52040
    ctx->pc = 0x1b4dfcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b4e00: 0x3c01002c
    ctx->pc = 0x1b4e00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e04: 0x852021
    ctx->pc = 0x1b4e04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b4e08: 0x42080
    ctx->pc = 0x1b4e08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4e0c: 0x852021
    ctx->pc = 0x1b4e0cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b4e10: 0x42080
    ctx->pc = 0x1b4e10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4e14: 0x441021
    ctx->pc = 0x1b4e14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b4e18: 0x8c440000
    ctx->pc = 0x1b4e18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4e1c: 0xac24aaf8
    ctx->pc = 0x1b4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945528), GPR_U32(ctx, 4));
    // 0x1b4e20: 0x8c440004
    ctx->pc = 0x1b4e20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4e24: 0x3c01002c
    ctx->pc = 0x1b4e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e28: 0xac24aafc
    ctx->pc = 0x1b4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945532), GPR_U32(ctx, 4));
    // 0x1b4e2c: 0x8c440008
    ctx->pc = 0x1b4e2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4e30: 0x3c01002c
    ctx->pc = 0x1b4e30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e34: 0xac24ab00
    ctx->pc = 0x1b4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945536), GPR_U32(ctx, 4));
    // 0x1b4e38: 0x8c44000c
    ctx->pc = 0x1b4e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b4e3c: 0x3c01002c
    ctx->pc = 0x1b4e3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e40: 0xac24ab04
    ctx->pc = 0x1b4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945540), GPR_U32(ctx, 4));
    // 0x1b4e44: 0x8c440010
    ctx->pc = 0x1b4e44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b4e48: 0x3c01002c
    ctx->pc = 0x1b4e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e4c: 0xac24ab08
    ctx->pc = 0x1b4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945544), GPR_U32(ctx, 4));
    // 0x1b4e50: 0x8c44001c
    ctx->pc = 0x1b4e50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b4e54: 0x3c01002c
    ctx->pc = 0x1b4e54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e58: 0xac24ab0c
    ctx->pc = 0x1b4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945548), GPR_U32(ctx, 4));
    // 0x1b4e5c: 0x8c440020
    ctx->pc = 0x1b4e5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1b4e60: 0x3c01002c
    ctx->pc = 0x1b4e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e64: 0xac24ab10
    ctx->pc = 0x1b4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945552), GPR_U32(ctx, 4));
    // 0x1b4e68: 0x8c440018
    ctx->pc = 0x1b4e68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b4e6c: 0x3c01002c
    ctx->pc = 0x1b4e6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e70: 0xac24ab14
    ctx->pc = 0x1b4e70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945556), GPR_U32(ctx, 4));
    // 0x1b4e74: 0x3c01002c
    ctx->pc = 0x1b4e74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e78: 0xac32ab50
    ctx->pc = 0x1b4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945616), GPR_U32(ctx, 18));
    // 0x1b4e7c: 0x8c440028
    ctx->pc = 0x1b4e7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b4e80: 0x3c01002c
    ctx->pc = 0x1b4e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e84: 0xac24ab7c
    ctx->pc = 0x1b4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945660), GPR_U32(ctx, 4));
    // 0x1b4e88: 0x8c44002c
    ctx->pc = 0x1b4e88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1b4e8c: 0x3c01002c
    ctx->pc = 0x1b4e8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e90: 0xac24ab80
    ctx->pc = 0x1b4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945664), GPR_U32(ctx, 4));
    // 0x1b4e94: 0x8c440030
    ctx->pc = 0x1b4e94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b4e98: 0x3c01002c
    ctx->pc = 0x1b4e98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4e9c: 0xac24ab84
    ctx->pc = 0x1b4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945668), GPR_U32(ctx, 4));
    // 0x1b4ea0: 0x3c01002c
    ctx->pc = 0x1b4ea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4ea4: 0xac33ab18
    ctx->pc = 0x1b4ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945560), GPR_U32(ctx, 19));
    // 0x1b4ea8: 0x8c440024
    ctx->pc = 0x1b4ea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b4eac: 0x2642021
    ctx->pc = 0x1b4eacu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1b4eb0: 0x2484003f
    ctx->pc = 0x1b4eb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 63));
    // 0x1b4eb4: 0x879824
    ctx->pc = 0x1b4eb4u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b4eb8:
    // 0x1b4eb8: 0x32080
    ctx->pc = 0x1b4eb8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4ebc: 0x2042021
    ctx->pc = 0x1b4ebcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1b4ec0: 0x24630001
    ctx->pc = 0x1b4ec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b4ec4: 0xac93002c
    ctx->pc = 0x1b4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 19));
    // 0x1b4ec8: 0x8e060018
    ctx->pc = 0x1b4ec8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b4ecc: 0x28640002
    ctx->pc = 0x1b4eccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 2));
    // 0x1b4ed0: 0x8e050060
    ctx->pc = 0x1b4ed0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b4ed4: 0xc52818
    ctx->pc = 0x1b4ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1b4ed8: 0x2652821
    ctx->pc = 0x1b4ed8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1b4edc: 0x24a5003f
    ctx->pc = 0x1b4edcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    // 0x1b4ee0: 0x1480fff5
    ctx->pc = 0x1B4EE0u;
    {
        const bool branch_taken_0x1b4ee0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4EE4u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        if (branch_taken_0x1b4ee0) {
            ctx->pc = 0x1B4EB8u;
            goto label_1b4eb8;
        }
    }
    ctx->pc = 0x1B4EE8u;
    // 0x1b4ee8: 0xae130034
    ctx->pc = 0x1b4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x1b4eec: 0x8c450014
    ctx->pc = 0x1b4eecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b4ef0: 0x8e060034
    ctx->pc = 0x1b4ef0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b4ef4: 0x1000000d
    ctx->pc = 0x1B4EF4u;
    {
        const bool branch_taken_0x1b4ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4EF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ef4) {
            ctx->pc = 0x1B4F2Cu;
            goto label_1b4f2c;
        }
    }
    ctx->pc = 0x1B4EFCu;
label_1b4efc:
    // 0x1b4efc: 0x90a30000
    ctx->pc = 0x1b4efcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4f00: 0x24e70001
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b4f04: 0x28e20010
    ctx->pc = 0x1b4f04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 16));
    // 0x1b4f08: 0xa0c30003
    ctx->pc = 0x1b4f08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4f0c: 0x90a30001
    ctx->pc = 0x1b4f0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b4f10: 0xa0c30002
    ctx->pc = 0x1b4f10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4f14: 0x24a50002
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x1b4f18: 0xa0c30001
    ctx->pc = 0x1b4f18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4f1c: 0xa0c30000
    ctx->pc = 0x1b4f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4f20: 0x1440fff6
    ctx->pc = 0x1B4F20u;
    {
        const bool branch_taken_0x1b4f20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4F24u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1b4f20) {
            ctx->pc = 0x1B4EFCu;
            goto label_1b4efc;
        }
    }
    ctx->pc = 0x1B4F28u;
    // 0x1b4f28: 0x24840001
    ctx->pc = 0x1b4f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1b4f2c:
    // 0x1b4f2c: 0x8e030024
    ctx->pc = 0x1b4f2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b4f30: 0x83102b
    ctx->pc = 0x1b4f30u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b4f34: 0x1440fff1
    ctx->pc = 0x1B4F34u;
    {
        const bool branch_taken_0x1b4f34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4F38u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f34) {
            ctx->pc = 0x1B4EFCu;
            goto label_1b4efc;
        }
    }
    ctx->pc = 0x1B4F3Cu;
    // 0x1b4f3c: 0x31180
    ctx->pc = 0x1b4f3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b4f40: 0xae110054
    ctx->pc = 0x1b4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1b4f44: 0x2629821
    ctx->pc = 0x1b4f44u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b4f48: 0x26220002
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1b4f4c: 0xae020058
    ctx->pc = 0x1b4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1b4f50: 0x882d
    ctx->pc = 0x1b4f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4f54:
    // 0x1b4f54: 0x3c020023
    ctx->pc = 0x1b4f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b4f58: 0x111880
    ctx->pc = 0x1b4f58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b4f5c: 0x244244c0
    ctx->pc = 0x1b4f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17600));
    // 0x1b4f60: 0x2039021
    ctx->pc = 0x1b4f60u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b4f64: 0x431021
    ctx->pc = 0x1b4f64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4f68: 0x8c440000
    ctx->pc = 0x1b4f68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4f6c: 0xae440038
    ctx->pc = 0x1b4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
    // 0x1b4f70: 0xc06dba4
    ctx->pc = 0x1B4F70u;
    SET_GPR_U32(ctx, 31, 0x1B4F78u);
    ctx->pc = 0x1B4F74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1B6E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6E90_0x1b6e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F78u; }
    }
    if (ctx->pc != 0x1B4F78u) { return; }
    ctx->pc = 0x1B4F78u;
    // 0x1b4f78: 0x200202d
    ctx->pc = 0x1b4f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f7c: 0xc06dc54
    ctx->pc = 0x1B4F7Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F84u);
    ctx->pc = 0x1B4F80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B7150u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7150_0x1b7150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F84u; }
    }
    if (ctx->pc != 0x1B4F84u) { return; }
    ctx->pc = 0x1B4F84u;
    // 0x1b4f84: 0xae420040
    ctx->pc = 0x1b4f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1b4f88: 0x26310001
    ctx->pc = 0x1b4f88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b4f8c: 0x2a220002
    ctx->pc = 0x1b4f8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x1b4f90: 0x1440fff0
    ctx->pc = 0x1B4F90u;
    {
        const bool branch_taken_0x1b4f90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b4f90) {
            ctx->pc = 0x1B4F54u;
            goto label_1b4f54;
        }
    }
    ctx->pc = 0x1B4F98u;
    // 0x1b4f98: 0xae000048
    ctx->pc = 0x1b4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1b4f9c: 0x3c028080
    ctx->pc = 0x1b4f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
    // 0x1b4fa0: 0x8e050040
    ctx->pc = 0x1b4fa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b4fa4: 0x2403fffe
    ctx->pc = 0x1b4fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1b4fa8: 0x34428080
    ctx->pc = 0x1b4fa8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
    // 0x1b4fac: 0x202d
    ctx->pc = 0x1b4facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fb0: 0xae05004c
    ctx->pc = 0x1b4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
    // 0x1b4fb4: 0x8e050028
    ctx->pc = 0x1b4fb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b4fb8: 0x2652823
    ctx->pc = 0x1b4fb8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1b4fbc: 0xae05005c
    ctx->pc = 0x1b4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x1b4fc0: 0x8e05000c
    ctx->pc = 0x1b4fc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4fc4: 0xae05006c
    ctx->pc = 0x1b4fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
    // 0x1b4fc8: 0xae000070
    ctx->pc = 0x1b4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1b4fcc: 0xae000074
    ctx->pc = 0x1b4fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1b4fd0: 0xae030078
    ctx->pc = 0x1b4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1b4fd4: 0xae00007c
    ctx->pc = 0x1b4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1b4fd8: 0xae020080
    ctx->pc = 0x1b4fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b4fdc: 0xc06d59c
    ctx->pc = 0x1B4FDCu;
    SET_GPR_U32(ctx, 31, 0x1B4FE4u);
    ctx->pc = 0x1B4FE0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->pc = 0x1B5670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5670_0x1b5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FE4u; }
    }
    if (ctx->pc != 0x1B4FE4u) { return; }
    ctx->pc = 0x1B4FE4u;
    // 0x1b4fe4: 0xdfbf0050
    ctx->pc = 0x1b4fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4fe8: 0x7bb40040
    ctx->pc = 0x1b4fe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4fec: 0x7bb30030
    ctx->pc = 0x1b4fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4ff0: 0x7bb20020
    ctx->pc = 0x1b4ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4ff4: 0x7bb10010
    ctx->pc = 0x1b4ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4ff8: 0x7bb00000
    ctx->pc = 0x1b4ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ffc: 0x3e00008
    ctx->pc = 0x1B4FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5000u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4EB8u: goto label_1b4eb8;
            case 0x1B4EFCu: goto label_1b4efc;
            case 0x1B4F2Cu: goto label_1b4f2c;
            case 0x1B4F54u: goto label_1b4f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5004u;
    // 0x1b5004: 0x0
    ctx->pc = 0x1b5004u;
    // NOP
    // 0x1b5008: 0x0
    ctx->pc = 0x1b5008u;
    // NOP
    // 0x1b500c: 0x0
    ctx->pc = 0x1b500cu;
    // NOP
}
