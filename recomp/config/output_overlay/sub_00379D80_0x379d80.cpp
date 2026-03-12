#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379D80
// Address: 0x379d80 - 0x379ed0
void sub_00379D80_0x379d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379d80u;

    // 0x379d80: 0x27bdffb0
    ctx->pc = 0x379d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x379d84: 0x3c010032
    ctx->pc = 0x379d84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379d88: 0xffbf0040
    ctx->pc = 0x379d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x379d8c: 0x24020002
    ctx->pc = 0x379d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379d90: 0x7fb30030
    ctx->pc = 0x379d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x379d94: 0x7fb20020
    ctx->pc = 0x379d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379d98: 0x80982d
    ctx->pc = 0x379d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d9c: 0x7fb10010
    ctx->pc = 0x379d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379da0: 0x7fb00000
    ctx->pc = 0x379da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379da4: 0x902343fc
    ctx->pc = 0x379da4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17404)));
    // 0x379da8: 0x10620019
    ctx->pc = 0x379DA8u;
    {
        const bool branch_taken_0x379da8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x379DACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379da8) {
            ctx->pc = 0x379E10u;
            goto label_379e10;
        }
    }
    ctx->pc = 0x379DB0u;
    // 0x379db0: 0x24020001
    ctx->pc = 0x379db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x379db4: 0x10620016
    ctx->pc = 0x379DB4u;
    {
        const bool branch_taken_0x379db4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x379db4) {
            ctx->pc = 0x379E10u;
            goto label_379e10;
        }
    }
    ctx->pc = 0x379DBCu;
    // 0x379dbc: 0x24020003
    ctx->pc = 0x379dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x379dc0: 0x1062000b
    ctx->pc = 0x379DC0u;
    {
        const bool branch_taken_0x379dc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x379DC4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x379dc0) {
            ctx->pc = 0x379DF0u;
            goto label_379df0;
        }
    }
    ctx->pc = 0x379DC8u;
    // 0x379dc8: 0x10600003
    ctx->pc = 0x379DC8u;
    {
        const bool branch_taken_0x379dc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x379DCCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x379dc8) {
            ctx->pc = 0x379DD8u;
            goto label_379dd8;
        }
    }
    ctx->pc = 0x379DD0u;
    // 0x379dd0: 0x10000017
    ctx->pc = 0x379DD0u;
    {
        const bool branch_taken_0x379dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x379dd0) {
            ctx->pc = 0x379E30u;
            goto label_379e30;
        }
    }
    ctx->pc = 0x379DD8u;
label_379dd8:
    // 0x379dd8: 0x3c11002c
    ctx->pc = 0x379dd8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)44 << 16));
    // 0x379ddc: 0x8c22440c
    ctx->pc = 0x379ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x379de0: 0x3c100001
    ctx->pc = 0x379de0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)1 << 16));
    // 0x379de4: 0x3c010057
    ctx->pc = 0x379de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379de8: 0x10000011
    ctx->pc = 0x379DE8u;
    {
        const bool branch_taken_0x379de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379DECu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 2));
        if (branch_taken_0x379de8) {
            ctx->pc = 0x379E30u;
            goto label_379e30;
        }
    }
    ctx->pc = 0x379DF0u;
label_379df0:
    // 0x379df0: 0x3c020010
    ctx->pc = 0x379df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x379df4: 0x8c23440c
    ctx->pc = 0x379df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x379df8: 0x3c11001c
    ctx->pc = 0x379df8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)28 << 16));
    // 0x379dfc: 0x3c100001
    ctx->pc = 0x379dfcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)1 << 16));
    // 0x379e00: 0x621021
    ctx->pc = 0x379e00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379e04: 0x3c010057
    ctx->pc = 0x379e04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e08: 0x10000009
    ctx->pc = 0x379E08u;
    {
        const bool branch_taken_0x379e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 2));
        if (branch_taken_0x379e08) {
            ctx->pc = 0x379E30u;
            goto label_379e30;
        }
    }
    ctx->pc = 0x379E10u;
label_379e10:
    // 0x379e10: 0x3c010032
    ctx->pc = 0x379e10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379e14: 0x3c02004e
    ctx->pc = 0x379e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)78 << 16));
    // 0x379e18: 0x8c23445c
    ctx->pc = 0x379e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17500)));
    // 0x379e1c: 0x34514000
    ctx->pc = 0x379e1cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 2), 16384));
    // 0x379e20: 0x3c020001
    ctx->pc = 0x379e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x379e24: 0x34506000
    ctx->pc = 0x379e24u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 2), 24576));
    // 0x379e28: 0x3c010057
    ctx->pc = 0x379e28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e2c: 0xac23bae8
    ctx->pc = 0x379e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 3));
label_379e30:
    // 0x379e30: 0x3c010057
    ctx->pc = 0x379e30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e34: 0x282d
    ctx->pc = 0x379e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e38: 0x8c24bae8
    ctx->pc = 0x379e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379e3c: 0xc041f1a
    ctx->pc = 0x379E3Cu;
    SET_GPR_U32(ctx, 31, 0x379E44u);
    ctx->pc = 0x379E40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379E44u; }
        if (ctx->pc != 0x379E44u) { return; }
    }
    ctx->pc = 0x379E44u;
    // 0x379e44: 0x3c010057
    ctx->pc = 0x379e44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e48: 0x2405ffc0
    ctx->pc = 0x379e48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x379e4c: 0x8c26bae8
    ctx->pc = 0x379e4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379e50: 0x260301eb
    ctx->pc = 0x379e50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 491));
    // 0x379e54: 0x651824
    ctx->pc = 0x379e54u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x379e58: 0x2232023
    ctx->pc = 0x379e58u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x379e5c: 0x24c3006b
    ctx->pc = 0x379e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 107));
    // 0x379e60: 0x3c010057
    ctx->pc = 0x379e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e64: 0x651824
    ctx->pc = 0x379e64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x379e68: 0xacc30000
    ctx->pc = 0x379e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x379e6c: 0x8c23bae8
    ctx->pc = 0x379e6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379e70: 0xac700024
    ctx->pc = 0x379e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
    // 0x379e74: 0x3c010057
    ctx->pc = 0x379e74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e78: 0x8c23bae8
    ctx->pc = 0x379e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379e7c: 0xac640004
    ctx->pc = 0x379e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x379e80: 0x3c010057
    ctx->pc = 0x379e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e84: 0x8c25bae8
    ctx->pc = 0x379e84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379e88: 0x8ca40000
    ctx->pc = 0x379e88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379e8c: 0x3c010057
    ctx->pc = 0x379e8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379e90: 0x8ca30004
    ctx->pc = 0x379e90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x379e94: 0x831821
    ctx->pc = 0x379e94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379e98: 0xaca3000c
    ctx->pc = 0x379e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x379e9c: 0x8c23bae8
    ctx->pc = 0x379e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379ea0: 0xa4730008
    ctx->pc = 0x379ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x379ea4: 0x3c010057
    ctx->pc = 0x379ea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379ea8: 0x8c23bae8
    ctx->pc = 0x379ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379eac: 0xa472000a
    ctx->pc = 0x379eacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x379eb0: 0xdfbf0040
    ctx->pc = 0x379eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379eb4: 0x7bb30030
    ctx->pc = 0x379eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379eb8: 0x7bb20020
    ctx->pc = 0x379eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379ebc: 0x7bb10010
    ctx->pc = 0x379ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379ec0: 0x7bb00000
    ctx->pc = 0x379ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379ec4: 0x3e00008
    ctx->pc = 0x379EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379EC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379DD8u: goto label_379dd8;
            case 0x379DF0u: goto label_379df0;
            case 0x379E10u: goto label_379e10;
            case 0x379E30u: goto label_379e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379ECCu;
    // 0x379ecc: 0x0
    ctx->pc = 0x379eccu;
    // NOP
}
