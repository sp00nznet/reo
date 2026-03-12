#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00378C80
// Address: 0x378c80 - 0x3792f0
void sub_00378C80_0x378c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x378c80u;

    // 0x378c80: 0x27bdffc0
    ctx->pc = 0x378c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x378c84: 0x3c01002a
    ctx->pc = 0x378c84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x378c88: 0x7fb30030
    ctx->pc = 0x378c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x378c8c: 0x24030200
    ctx->pc = 0x378c8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 512));
    // 0x378c90: 0x7fb20020
    ctx->pc = 0x378c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x378c94: 0x7fb10010
    ctx->pc = 0x378c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378c98: 0x7fb00000
    ctx->pc = 0x378c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378c9c: 0x8c2ef9bc
    ctx->pc = 0x378c9cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x378ca0: 0x15c30004
    ctx->pc = 0x378CA0u;
    {
        const bool branch_taken_0x378ca0 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 3));
        ctx->pc = 0x378CA4u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x378ca0) {
            ctx->pc = 0x378CB4u;
            goto label_378cb4;
        }
    }
    ctx->pc = 0x378CA8u;
    // 0x378ca8: 0x240c0009
    ctx->pc = 0x378ca8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 9));
    // 0x378cac: 0x10000002
    ctx->pc = 0x378CACu;
    {
        const bool branch_taken_0x378cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x378CB0u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x378cac) {
            ctx->pc = 0x378CB8u;
            goto label_378cb8;
        }
    }
    ctx->pc = 0x378CB4u;
label_378cb4:
    // 0x378cb4: 0x180682d
    ctx->pc = 0x378cb4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_378cb8:
    // 0x378cb8: 0x3c010057
    ctx->pc = 0x378cb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378cbc: 0x24030080
    ctx->pc = 0x378cbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x378cc0: 0x8c2fba90
    ctx->pc = 0x378cc0u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378cc4: 0x3c0b0003
    ctx->pc = 0x378cc4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)3 << 16));
    // 0x378cc8: 0x3283c
    ctx->pc = 0x378cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378ccc: 0x24080047
    ctx->pc = 0x378cccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 71));
    // 0x378cd0: 0x24030068
    ctx->pc = 0x378cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
    // 0x378cd4: 0x240a0046
    ctx->pc = 0x378cd4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 70));
    // 0x378cd8: 0x653025
    ctx->pc = 0x378cd8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x378cdc: 0x24090001
    ctx->pc = 0x378cdcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x378ce0: 0x3c030040
    ctx->pc = 0x378ce0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x378ce4: 0x24050042
    ctx->pc = 0x378ce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 66));
    // 0x378ce8: 0x34634040
    ctx->pc = 0x378ce8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16448));
    // 0x378cec: 0xe3843
    ctx->pc = 0x378cecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 14), 1));
    // 0x378cf0: 0xfdeb0000
    ctx->pc = 0x378cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 11));
    // 0x378cf4: 0x3c010057
    ctx->pc = 0x378cf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378cf8: 0xfde80008
    ctx->pc = 0x378cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 8));
    // 0x378cfc: 0x8c28ba90
    ctx->pc = 0x378cfcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d00: 0x25080010
    ctx->pc = 0x378d00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
    // 0x378d04: 0x3c010057
    ctx->pc = 0x378d04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d08: 0xac28ba90
    ctx->pc = 0x378d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 8));
    // 0x378d0c: 0x3c010057
    ctx->pc = 0x378d0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d10: 0x8c28ba90
    ctx->pc = 0x378d10u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d14: 0xfd0a0000
    ctx->pc = 0x378d14u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 10));
    // 0x378d18: 0x3c010057
    ctx->pc = 0x378d18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d1c: 0xfd000008
    ctx->pc = 0x378d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 0));
    // 0x378d20: 0x8c28ba90
    ctx->pc = 0x378d20u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d24: 0x25080010
    ctx->pc = 0x378d24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
    // 0x378d28: 0x3c010057
    ctx->pc = 0x378d28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d2c: 0xac28ba90
    ctx->pc = 0x378d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 8));
    // 0x378d30: 0x3c010057
    ctx->pc = 0x378d30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d34: 0x8c28ba90
    ctx->pc = 0x378d34u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d38: 0xfd090000
    ctx->pc = 0x378d38u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
    // 0x378d3c: 0x3c010057
    ctx->pc = 0x378d3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d40: 0xfd0a0008
    ctx->pc = 0x378d40u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x378d44: 0x8c28ba90
    ctx->pc = 0x378d44u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d48: 0x25080010
    ctx->pc = 0x378d48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
    // 0x378d4c: 0x3c010057
    ctx->pc = 0x378d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d50: 0xac28ba90
    ctx->pc = 0x378d50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 8));
    // 0x378d54: 0x3c010057
    ctx->pc = 0x378d54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d58: 0x8c28ba90
    ctx->pc = 0x378d58u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d5c: 0xfd060000
    ctx->pc = 0x378d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 6));
    // 0x378d60: 0x3c010057
    ctx->pc = 0x378d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d64: 0xfd050008
    ctx->pc = 0x378d64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 5));
    // 0x378d68: 0x8c25ba90
    ctx->pc = 0x378d68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d6c: 0x24a50010
    ctx->pc = 0x378d6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x378d70: 0x3c010057
    ctx->pc = 0x378d70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d74: 0xac25ba90
    ctx->pc = 0x378d74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 5));
    // 0x378d78: 0x3c010057
    ctx->pc = 0x378d78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d7c: 0x8c25ba90
    ctx->pc = 0x378d7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d80: 0xfca30000
    ctx->pc = 0x378d80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x378d84: 0x3c010057
    ctx->pc = 0x378d84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d88: 0xfca90008
    ctx->pc = 0x378d88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x378d8c: 0x8c23ba90
    ctx->pc = 0x378d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378d90: 0x24630010
    ctx->pc = 0x378d90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x378d94: 0x3c010057
    ctx->pc = 0x378d94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378d98: 0x5c10003
    ctx->pc = 0x378D98u;
    {
        const bool branch_taken_0x378d98 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x378D9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
        if (branch_taken_0x378d98) {
            ctx->pc = 0x378DA8u;
            goto label_378da8;
        }
    }
    ctx->pc = 0x378DA0u;
    // 0x378da0: 0x25c30001
    ctx->pc = 0x378da0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 1));
    // 0x378da4: 0x33843
    ctx->pc = 0x378da4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_378da8:
    // 0x378da8: 0x3c010057
    ctx->pc = 0x378da8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378dac: 0x24100800
    ctx->pc = 0x378dacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x378db0: 0x8426aff8
    ctx->pc = 0x378db0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946808)));
    // 0x378db4: 0x24ebffff
    ctx->pc = 0x378db4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x378db8: 0x3c038000
    ctx->pc = 0x378db8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x378dbc: 0x2077823
    ctx->pc = 0x378dbcu;
    SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x378dc0: 0x3283c
    ctx->pc = 0x378dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378dc4: 0x20bc023
    ctx->pc = 0x378dc4u;
    SET_GPR_U32(ctx, 24, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    // 0x378dc8: 0x24090080
    ctx->pc = 0x378dc8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 128));
    // 0x378dcc: 0x24030004
    ctx->pc = 0x378dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x378dd0: 0x70052b89
    ctx->pc = 0x378dd0u;
    SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x378dd4: 0x24110042
    ctx->pc = 0x378dd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 66));
    // 0x378dd8: 0x3c010057
    ctx->pc = 0x378dd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ddc: 0x1e65821
    ctx->pc = 0x378ddcu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x378de0: 0x842aaff0
    ctx->pc = 0x378de0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946800)));
    // 0x378de4: 0xb7900
    ctx->pc = 0x378de4u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 11), 4));
    // 0x378de8: 0x9583c
    ctx->pc = 0x378de8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x378dec: 0x240900a1
    ctx->pc = 0x378decu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 161));
    // 0x378df0: 0x12b9025
    ctx->pc = 0x378df0u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x378df4: 0x3c010057
    ctx->pc = 0x378df4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378df8: 0x25500720
    ctx->pc = 0x378df8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 10), 1824));
    // 0x378dfc: 0x8c28ba90
    ctx->pc = 0x378dfcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378e00: 0x104900
    ctx->pc = 0x378e00u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 4));
    // 0x378e04: 0x94c38
    ctx->pc = 0x378e04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x378e08: 0x12f5825
    ctx->pc = 0x378e08u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x378e0c: 0x1655825
    ctx->pc = 0x378e0cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x378e10: 0x3c0900c0
    ctx->pc = 0x378e10u;
    SET_GPR_U32(ctx, 9, ((uint32_t)192 << 16));
    // 0x378e14: 0x3530c0c0
    ctx->pc = 0x378e14u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 9), 49344));
    // 0x378e18: 0x240f0001
    ctx->pc = 0x378e18u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 1));
    // 0x378e1c: 0xfd0b0000
    ctx->pc = 0x378e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 11));
    // 0x378e20: 0x3c010057
    ctx->pc = 0x378e20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e24: 0xfd030008
    ctx->pc = 0x378e24u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x378e28: 0x8c39ba90
    ctx->pc = 0x378e28u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378e2c: 0x3c010057
    ctx->pc = 0x378e2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e30: 0x27390010
    ctx->pc = 0x378e30u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 16));
    // 0x378e34: 0x8428afe8
    ctx->pc = 0x378e34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946792)));
    // 0x378e38: 0x3c010057
    ctx->pc = 0x378e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e3c: 0x308c021
    ctx->pc = 0x378e3cu;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
    // 0x378e40: 0x8429afe0
    ctx->pc = 0x378e40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946784)));
    // 0x378e44: 0x18c100
    ctx->pc = 0x378e44u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 24), 4));
    // 0x378e48: 0x3c010057
    ctx->pc = 0x378e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e4c: 0xac39ba90
    ctx->pc = 0x378e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 25));
    // 0x378e50: 0x3c010057
    ctx->pc = 0x378e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e54: 0x25390721
    ctx->pc = 0x378e54u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 9), 1825));
    // 0x378e58: 0x8c33ba90
    ctx->pc = 0x378e58u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378e5c: 0x19c900
    ctx->pc = 0x378e5cu;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 25), 4));
    // 0x378e60: 0x19cc38
    ctx->pc = 0x378e60u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 16);
    // 0x378e64: 0x338c025
    ctx->pc = 0x378e64u;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x378e68: 0x3052825
    ctx->pc = 0x378e68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x378e6c: 0xfe650000
    ctx->pc = 0x378e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
    // 0x378e70: 0x3c010057
    ctx->pc = 0x378e70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e74: 0xfe630008
    ctx->pc = 0x378e74u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x378e78: 0x8c38ba90
    ctx->pc = 0x378e78u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378e7c: 0x27180010
    ctx->pc = 0x378e7cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 16));
    // 0x378e80: 0x3c010057
    ctx->pc = 0x378e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e84: 0xac38ba90
    ctx->pc = 0x378e84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 24));
    // 0x378e88: 0x3c010057
    ctx->pc = 0x378e88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e8c: 0x8c38ba90
    ctx->pc = 0x378e8cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378e90: 0xff120000
    ctx->pc = 0x378e90u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x378e94: 0x3c010057
    ctx->pc = 0x378e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378e98: 0xff110008
    ctx->pc = 0x378e98u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 17));
    // 0x378e9c: 0x8c31ba90
    ctx->pc = 0x378e9cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378ea0: 0x26310010
    ctx->pc = 0x378ea0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x378ea4: 0x3c010057
    ctx->pc = 0x378ea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ea8: 0xac31ba90
    ctx->pc = 0x378ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 17));
    // 0x378eac: 0x3c010057
    ctx->pc = 0x378eacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378eb0: 0x8c31ba90
    ctx->pc = 0x378eb0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378eb4: 0xfe300000
    ctx->pc = 0x378eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 16));
    // 0x378eb8: 0x3c010057
    ctx->pc = 0x378eb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ebc: 0xfe2f0008
    ctx->pc = 0x378ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 15));
    // 0x378ec0: 0x8c2fba90
    ctx->pc = 0x378ec0u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378ec4: 0x25ef0010
    ctx->pc = 0x378ec4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 16));
    // 0x378ec8: 0x3c010057
    ctx->pc = 0x378ec8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ecc: 0xac2fba90
    ctx->pc = 0x378eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 15));
    // 0x378ed0: 0x3c010057
    ctx->pc = 0x378ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ed4: 0x8c2fba90
    ctx->pc = 0x378ed4u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378ed8: 0xfdeb0000
    ctx->pc = 0x378ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 11));
    // 0x378edc: 0x3c010057
    ctx->pc = 0x378edcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ee0: 0xfde30008
    ctx->pc = 0x378ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 3));
    // 0x378ee4: 0x8c2fba90
    ctx->pc = 0x378ee4u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378ee8: 0x25ef0010
    ctx->pc = 0x378ee8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 16));
    // 0x378eec: 0x3c010057
    ctx->pc = 0x378eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ef0: 0xac2fba90
    ctx->pc = 0x378ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 15));
    // 0x378ef4: 0x3c010057
    ctx->pc = 0x378ef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ef8: 0x8c2fba90
    ctx->pc = 0x378ef8u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378efc: 0xfde50000
    ctx->pc = 0x378efcu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 5));
    // 0x378f00: 0x3c010057
    ctx->pc = 0x378f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378f04: 0xfde30008
    ctx->pc = 0x378f04u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 3));
    // 0x378f08: 0x8c25ba90
    ctx->pc = 0x378f08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378f0c: 0x3c01002a
    ctx->pc = 0x378f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x378f10: 0x24a50010
    ctx->pc = 0x378f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x378f14: 0x8c23fa00
    ctx->pc = 0x378f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294965760)));
    // 0x378f18: 0x3c010057
    ctx->pc = 0x378f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378f1c: 0x14600004
    ctx->pc = 0x378F1Cu;
    {
        const bool branch_taken_0x378f1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x378F20u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 5));
        if (branch_taken_0x378f1c) {
            ctx->pc = 0x378F30u;
            goto label_378f30;
        }
    }
    ctx->pc = 0x378F24u;
    // 0x378f24: 0x3c01002a
    ctx->pc = 0x378f24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x378f28: 0x10000003
    ctx->pc = 0x378F28u;
    {
        const bool branch_taken_0x378f28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x378F2Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294965720)));
        if (branch_taken_0x378f28) {
            ctx->pc = 0x378F38u;
            goto label_378f38;
        }
    }
    ctx->pc = 0x378F30u;
label_378f30:
    // 0x378f30: 0x3c01002a
    ctx->pc = 0x378f30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x378f34: 0x8c25f9dc
    ctx->pc = 0x378f34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294965724)));
label_378f38:
    // 0x378f38: 0x5c10003
    ctx->pc = 0x378F38u;
    {
        const bool branch_taken_0x378f38 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x378F3Cu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), 6));
        if (branch_taken_0x378f38) {
            ctx->pc = 0x378F48u;
            goto label_378f48;
        }
    }
    ctx->pc = 0x378F40u;
    // 0x378f40: 0x25c3003f
    ctx->pc = 0x378f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 63));
    // 0x378f44: 0x31983
    ctx->pc = 0x378f44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_378f48:
    // 0x378f48: 0x3783c
    ctx->pc = 0x378f48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378f4c: 0x3c010057
    ctx->pc = 0x378f4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378f50: 0x51942
    ctx->pc = 0x378f50u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 5));
    // 0x378f54: 0xf783f
    ctx->pc = 0x378f54u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x378f58: 0x3283c
    ctx->pc = 0x378f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378f5c: 0x8c2eba90
    ctx->pc = 0x378f5cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378f60: 0xc183c
    ctx->pc = 0x378f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
    // 0x378f64: 0x5283e
    ctx->pc = 0x378f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x378f68: 0x3183f
    ctx->pc = 0x378f68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x378f6c: 0x240c004c
    ctx->pc = 0x378f6cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 76));
    // 0x378f70: 0x3c6b8
    ctx->pc = 0x378f70u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) << 26);
    // 0x378f74: 0x24110156
    ctx->pc = 0x378f74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 342));
    // 0x378f78: 0xf1c38
    ctx->pc = 0x378f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << 16);
    // 0x378f7c: 0xf83b8
    ctx->pc = 0x378f7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) << 14);
    // 0x378f80: 0xa32825
    ctx->pc = 0x378f80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x378f84: 0x3c1900a0
    ctx->pc = 0x378f84u;
    SET_GPR_U32(ctx, 25, ((uint32_t)160 << 16));
    // 0x378f88: 0xd183c
    ctx->pc = 0x378f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x378f8c: 0x3c010057
    ctx->pc = 0x378f8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378f90: 0x3183f
    ctx->pc = 0x378f90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x378f94: 0x31e38
    ctx->pc = 0x378f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x378f98: 0x652825
    ctx->pc = 0x378f98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x378f9c: 0xfdc50000
    ctx->pc = 0x378f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x378fa0: 0x2403000e
    ctx->pc = 0x378fa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x378fa4: 0xfdcc0008
    ctx->pc = 0x378fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 12));
    // 0x378fa8: 0x3283c
    ctx->pc = 0x378fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x378fac: 0x8c32ba90
    ctx->pc = 0x378facu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378fb0: 0x3c034000
    ctx->pc = 0x378fb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x378fb4: 0x657825
    ctx->pc = 0x378fb4u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x378fb8: 0x240e0006
    ctx->pc = 0x378fb8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 6));
    // 0x378fbc: 0x240c0014
    ctx->pc = 0x378fbcu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 20));
    // 0x378fc0: 0x2405003f
    ctx->pc = 0x378fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x378fc4: 0x2403000a
    ctx->pc = 0x378fc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x378fc8: 0x26520010
    ctx->pc = 0x378fc8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
    // 0x378fcc: 0x3c010057
    ctx->pc = 0x378fccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378fd0: 0xac32ba90
    ctx->pc = 0x378fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 18));
    // 0x378fd4: 0x3c010057
    ctx->pc = 0x378fd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378fd8: 0x8c32ba90
    ctx->pc = 0x378fd8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378fdc: 0xfe510000
    ctx->pc = 0x378fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x378fe0: 0x3c010057
    ctx->pc = 0x378fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378fe4: 0xfe400008
    ctx->pc = 0x378fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x378fe8: 0x8c32ba90
    ctx->pc = 0x378fe8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x378fec: 0x3c010032
    ctx->pc = 0x378fecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x378ff0: 0x26520010
    ctx->pc = 0x378ff0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
    // 0x378ff4: 0x94314416
    ctx->pc = 0x378ff4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    // 0x378ff8: 0x3c010057
    ctx->pc = 0x378ff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x378ffc: 0x2308025
    ctx->pc = 0x378ffcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x379000: 0xac32ba90
    ctx->pc = 0x379000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 18));
    // 0x379004: 0x219c825
    ctx->pc = 0x379004u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x379008: 0x3c010057
    ctx->pc = 0x379008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37900c: 0x319c025
    ctx->pc = 0x37900cu;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x379010: 0x8c30ba90
    ctx->pc = 0x379010u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379014: 0x30f7825
    ctx->pc = 0x379014u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x379018: 0xfe0f0000
    ctx->pc = 0x379018u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 15));
    // 0x37901c: 0x3c010057
    ctx->pc = 0x37901cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379020: 0xfe0e0008
    ctx->pc = 0x379020u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 14));
    // 0x379024: 0x8c2eba90
    ctx->pc = 0x379024u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379028: 0x25ce0010
    ctx->pc = 0x379028u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 16));
    // 0x37902c: 0x3c010057
    ctx->pc = 0x37902cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379030: 0xac2eba90
    ctx->pc = 0x379030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 14));
    // 0x379034: 0x3c010057
    ctx->pc = 0x379034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379038: 0x8c2eba90
    ctx->pc = 0x379038u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37903c: 0xfdc00000
    ctx->pc = 0x37903cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 0));
    // 0x379040: 0x3c010057
    ctx->pc = 0x379040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379044: 0xfdcc0008
    ctx->pc = 0x379044u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 12));
    // 0x379048: 0x8c2cba90
    ctx->pc = 0x379048u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37904c: 0x258c0010
    ctx->pc = 0x37904cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 16));
    // 0x379050: 0x3c010057
    ctx->pc = 0x379050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379054: 0xac2cba90
    ctx->pc = 0x379054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 12));
    // 0x379058: 0x3c010057
    ctx->pc = 0x379058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37905c: 0x8c2cba90
    ctx->pc = 0x37905cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379060: 0xfd800000
    ctx->pc = 0x379060u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 0));
    // 0x379064: 0x3c010057
    ctx->pc = 0x379064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379068: 0xfd850008
    ctx->pc = 0x379068u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x37906c: 0x8c25ba90
    ctx->pc = 0x37906cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379070: 0x24a50010
    ctx->pc = 0x379070u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x379074: 0x3c010057
    ctx->pc = 0x379074u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379078: 0x15a3000c
    ctx->pc = 0x379078u;
    {
        const bool branch_taken_0x379078 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 3));
        ctx->pc = 0x37907Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 5));
        if (branch_taken_0x379078) {
            ctx->pc = 0x3790ACu;
            goto label_3790ac;
        }
    }
    ctx->pc = 0x379080u;
    // 0x379080: 0x3c010057
    ctx->pc = 0x379080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379084: 0x24050001
    ctx->pc = 0x379084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x379088: 0x8c2cba90
    ctx->pc = 0x379088u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37908c: 0x24030045
    ctx->pc = 0x37908cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
    // 0x379090: 0xfd850000
    ctx->pc = 0x379090u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x379094: 0x3c010057
    ctx->pc = 0x379094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379098: 0xfd830008
    ctx->pc = 0x379098u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x37909c: 0x8c23ba90
    ctx->pc = 0x37909cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3790a0: 0x24630010
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x3790a4: 0x3c010057
    ctx->pc = 0x3790a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3790a8: 0xac23ba90
    ctx->pc = 0x3790a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
label_3790ac:
    // 0x3790ac: 0x61900
    ctx->pc = 0x3790acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x3790b0: 0x3c010057
    ctx->pc = 0x3790b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3790b4: 0x24630008
    ctx->pc = 0x3790b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x3790b8: 0x8c2fba90
    ctx->pc = 0x3790b8u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3790bc: 0x3303c
    ctx->pc = 0x3790bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3790c0: 0x4203c
    ctx->pc = 0x3790c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3790c4: 0xa1900
    ctx->pc = 0x3790c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 4));
    // 0x3790c8: 0x4203e
    ctx->pc = 0x3790c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3790cc: 0x24630008
    ctx->pc = 0x3790ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x3790d0: 0x4203c
    ctx->pc = 0x3790d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3790d4: 0x3183c
    ctx->pc = 0x3790d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3790d8: 0x348c0062
    ctx->pc = 0x3790d8u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 4), 98));
    // 0x3790dc: 0x3183f
    ctx->pc = 0x3790dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3790e0: 0x6303f
    ctx->pc = 0x3790e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3790e4: 0x31c38
    ctx->pc = 0x3790e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3790e8: 0xfdec0000
    ctx->pc = 0x3790e8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 12));
    // 0x3790ec: 0xc33025
    ctx->pc = 0x3790ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3790f0: 0x240e0042
    ctx->pc = 0x3790f0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 66));
    // 0x3790f4: 0x81900
    ctx->pc = 0x3790f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 4));
    // 0x3790f8: 0xfdee0008
    ctx->pc = 0x3790f8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 14));
    // 0x3790fc: 0x246a0008
    ctx->pc = 0x3790fcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 3), 8));
    // 0x379100: 0x3c010057
    ctx->pc = 0x379100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379104: 0x91900
    ctx->pc = 0x379104u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 4));
    // 0x379108: 0xa603c
    ctx->pc = 0x379108u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 0));
    // 0x37910c: 0x24630008
    ctx->pc = 0x37910cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x379110: 0xc603f
    ctx->pc = 0x379110u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x379114: 0x3503c
    ctx->pc = 0x379114u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x379118: 0x24050003
    ctx->pc = 0x379118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x37911c: 0x25230720
    ctx->pc = 0x37911cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 9), 1824));
    // 0x379120: 0xa503f
    ctx->pc = 0x379120u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x379124: 0x34900
    ctx->pc = 0x379124u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 4));
    // 0x379128: 0xa5438
    ctx->pc = 0x379128u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x37912c: 0x25290008
    ctx->pc = 0x37912cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x379130: 0x18a1825
    ctx->pc = 0x379130u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x379134: 0x9483c
    ctx->pc = 0x379134u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x379138: 0x8c2cba90
    ctx->pc = 0x379138u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37913c: 0x9483f
    ctx->pc = 0x37913cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x379140: 0x24040004
    ctx->pc = 0x379140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x379144: 0x95438
    ctx->pc = 0x379144u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << 16);
    // 0x379148: 0x24090800
    ctx->pc = 0x379148u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x37914c: 0x1274823
    ctx->pc = 0x37914cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x379150: 0x1284821
    ctx->pc = 0x379150u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x379154: 0x3c078000
    ctx->pc = 0x379154u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32768 << 16));
    // 0x379158: 0x94900
    ctx->pc = 0x379158u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 4));
    // 0x37915c: 0x7403c
    ctx->pc = 0x37915cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x379160: 0x25290008
    ctx->pc = 0x379160u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x379164: 0x258c0010
    ctx->pc = 0x379164u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 16));
    // 0x379168: 0x9483c
    ctx->pc = 0x379168u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x37916c: 0x3c010057
    ctx->pc = 0x37916cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379170: 0x9483f
    ctx->pc = 0x379170u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x379174: 0xac2cba90
    ctx->pc = 0x379174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 12));
    // 0x379178: 0x1494825
    ctx->pc = 0x379178u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x37917c: 0x3c010057
    ctx->pc = 0x37917cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379180: 0x8c2aba90
    ctx->pc = 0x379180u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379184: 0x70084389
    ctx->pc = 0x379184u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x379188: 0x1284025
    ctx->pc = 0x379188u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x37918c: 0x2407000a
    ctx->pc = 0x37918cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x379190: 0xfd460000
    ctx->pc = 0x379190u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x379194: 0x3c010057
    ctx->pc = 0x379194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379198: 0xfd450008
    ctx->pc = 0x379198u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x37919c: 0x8c26ba90
    ctx->pc = 0x37919cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3791a0: 0x24c60010
    ctx->pc = 0x3791a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x3791a4: 0x3c010057
    ctx->pc = 0x3791a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791a8: 0xac26ba90
    ctx->pc = 0x3791a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x3791ac: 0x3c010057
    ctx->pc = 0x3791acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791b0: 0x8c26ba90
    ctx->pc = 0x3791b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3791b4: 0xfccb0000
    ctx->pc = 0x3791b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x3791b8: 0x3c010057
    ctx->pc = 0x3791b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791bc: 0xfcc40008
    ctx->pc = 0x3791bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x3791c0: 0x8c26ba90
    ctx->pc = 0x3791c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3791c4: 0x24c60010
    ctx->pc = 0x3791c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x3791c8: 0x3c010057
    ctx->pc = 0x3791c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791cc: 0xac26ba90
    ctx->pc = 0x3791ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 6));
    // 0x3791d0: 0x3c010057
    ctx->pc = 0x3791d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791d4: 0x8c26ba90
    ctx->pc = 0x3791d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3791d8: 0xfcc30000
    ctx->pc = 0x3791d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x3791dc: 0x3c010057
    ctx->pc = 0x3791dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791e0: 0xfcc50008
    ctx->pc = 0x3791e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x3791e4: 0x8c23ba90
    ctx->pc = 0x3791e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3791e8: 0x24630010
    ctx->pc = 0x3791e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x3791ec: 0x3c010057
    ctx->pc = 0x3791ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791f0: 0xac23ba90
    ctx->pc = 0x3791f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
    // 0x3791f4: 0x3c010057
    ctx->pc = 0x3791f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3791f8: 0x8c23ba90
    ctx->pc = 0x3791f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3791fc: 0xfc680000
    ctx->pc = 0x3791fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x379200: 0x3c010057
    ctx->pc = 0x379200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379204: 0xfc640008
    ctx->pc = 0x379204u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x379208: 0x8c23ba90
    ctx->pc = 0x379208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37920c: 0x24630010
    ctx->pc = 0x37920cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x379210: 0x3c010057
    ctx->pc = 0x379210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379214: 0x15a7000c
    ctx->pc = 0x379214u;
    {
        const bool branch_taken_0x379214 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 7));
        ctx->pc = 0x379218u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
        if (branch_taken_0x379214) {
            ctx->pc = 0x379248u;
            goto label_379248;
        }
    }
    ctx->pc = 0x37921Cu;
    // 0x37921c: 0x3c010057
    ctx->pc = 0x37921cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379220: 0x24040001
    ctx->pc = 0x379220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x379224: 0x8c25ba90
    ctx->pc = 0x379224u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379228: 0x24030045
    ctx->pc = 0x379228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
    // 0x37922c: 0xfca40000
    ctx->pc = 0x37922cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x379230: 0x3c010057
    ctx->pc = 0x379230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379234: 0xfca30008
    ctx->pc = 0x379234u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x379238: 0x8c23ba90
    ctx->pc = 0x379238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37923c: 0x24630010
    ctx->pc = 0x37923cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x379240: 0x3c010057
    ctx->pc = 0x379240u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379244: 0xac23ba90
    ctx->pc = 0x379244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
label_379248:
    // 0x379248: 0x3c010057
    ctx->pc = 0x379248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37924c: 0x3c040007
    ctx->pc = 0x37924cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)7 << 16));
    // 0x379250: 0x8c28ba90
    ctx->pc = 0x379250u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x379254: 0x3c063000
    ctx->pc = 0x379254u;
    SET_GPR_U32(ctx, 6, ((uint32_t)12288 << 16));
    // 0x379258: 0x2405004e
    ctx->pc = 0x379258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 78));
    // 0x37925c: 0x3484000f
    ctx->pc = 0x37925cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 15));
    // 0x379260: 0x24030047
    ctx->pc = 0x379260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x379264: 0x3c01002a
    ctx->pc = 0x379264u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379268: 0x8c27f9f0
    ctx->pc = 0x379268u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294965744)));
    // 0x37926c: 0x73942
    ctx->pc = 0x37926cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 7), 5));
    // 0x379270: 0x3c010057
    ctx->pc = 0x379270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379274: 0x7383c
    ctx->pc = 0x379274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x379278: 0x7383e
    ctx->pc = 0x379278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x37927c: 0xe63025
    ctx->pc = 0x37927cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x379280: 0xfd060000
    ctx->pc = 0x379280u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 6));
    // 0x379284: 0xfd050008
    ctx->pc = 0x379284u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 5));
    // 0x379288: 0x8c25ba90
    ctx->pc = 0x379288u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x37928c: 0x24a50010
    ctx->pc = 0x37928cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x379290: 0x3c010057
    ctx->pc = 0x379290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379294: 0xac25ba90
    ctx->pc = 0x379294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 5));
    // 0x379298: 0x3c010057
    ctx->pc = 0x379298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37929c: 0x8c25ba90
    ctx->pc = 0x37929cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3792a0: 0xfca40000
    ctx->pc = 0x3792a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x3792a4: 0x3c010057
    ctx->pc = 0x3792a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3792a8: 0xfca30008
    ctx->pc = 0x3792a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3792ac: 0x8c23ba90
    ctx->pc = 0x3792acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x3792b0: 0x24630010
    ctx->pc = 0x3792b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x3792b4: 0x3c010057
    ctx->pc = 0x3792b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3792b8: 0xac23ba90
    ctx->pc = 0x3792b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 3));
    // 0x3792bc: 0x7bb30030
    ctx->pc = 0x3792bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3792c0: 0x7bb20020
    ctx->pc = 0x3792c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3792c4: 0x7bb10010
    ctx->pc = 0x3792c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3792c8: 0x7bb00000
    ctx->pc = 0x3792c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3792cc: 0x3e00008
    ctx->pc = 0x3792CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3792D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x378CB4u: goto label_378cb4;
            case 0x378CB8u: goto label_378cb8;
            case 0x378DA8u: goto label_378da8;
            case 0x378F30u: goto label_378f30;
            case 0x378F38u: goto label_378f38;
            case 0x378F48u: goto label_378f48;
            case 0x3790ACu: goto label_3790ac;
            case 0x379248u: goto label_379248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3792D4u;
    // 0x3792d4: 0x0
    ctx->pc = 0x3792d4u;
    // NOP
    // 0x3792d8: 0x0
    ctx->pc = 0x3792d8u;
    // NOP
    // 0x3792dc: 0x0
    ctx->pc = 0x3792dcu;
    // NOP
    // 0x3792e0: 0x8067ba4
    ctx->pc = 0x3792E0u;
    ctx->pc = 0x19EE90u;
    {
        auto targetFn = runtime->lookupFunction(0x19EE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3792E8u;
    // 0x3792e8: 0x0
    ctx->pc = 0x3792e8u;
    // NOP
    // 0x3792ec: 0x0
    ctx->pc = 0x3792ecu;
    // NOP
}
