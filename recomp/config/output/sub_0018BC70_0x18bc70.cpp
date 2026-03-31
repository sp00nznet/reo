#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018BC70
// Address: 0x18bc70 - 0x18bd60
void sub_0018BC70_0x18bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18bc70u;

    // 0x18bc70: 0x27bdff90
    ctx->pc = 0x18bc70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18bc74: 0xffbf0060
    ctx->pc = 0x18bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18bc78: 0x7fb50050
    ctx->pc = 0x18bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18bc7c: 0x7fb40040
    ctx->pc = 0x18bc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18bc80: 0xa0a82d
    ctx->pc = 0x18bc80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc84: 0x7fb30030
    ctx->pc = 0x18bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18bc88: 0xc0a02d
    ctx->pc = 0x18bc88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc8c: 0x7fb20020
    ctx->pc = 0x18bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bc90: 0xe0982d
    ctx->pc = 0x18bc90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc94: 0x7fb10010
    ctx->pc = 0x18bc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bc98: 0x100902d
    ctx->pc = 0x18bc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc9c: 0x7fb00000
    ctx->pc = 0x18bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bca0: 0x120882d
    ctx->pc = 0x18bca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bca4: 0x10800011
    ctx->pc = 0x18BCA4u;
    {
        const bool branch_taken_0x18bca4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BCA8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18bca4) {
            ctx->pc = 0x18BCECu;
            goto label_18bcec;
        }
    }
    ctx->pc = 0x18BCACu;
    // 0x18bcac: 0x3c01002a
    ctx->pc = 0x18bcacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18bcb0: 0xc066134
    ctx->pc = 0x18BCB0u;
    SET_GPR_U32(ctx, 31, 0x18BCB8u);
    ctx->pc = 0x18BCB4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    ctx->pc = 0x1984D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001984D0_0x1984d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCB8u; }
    }
    if (ctx->pc != 0x18BCB8u) { return; }
    ctx->pc = 0x18BCB8u;
    // 0x18bcb8: 0x2404003b
    ctx->pc = 0x18bcb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 59));
    // 0x18bcbc: 0x24030014
    ctx->pc = 0x18bcbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bcc0: 0xfea40008
    ctx->pc = 0x18bcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 4));
    // 0x18bcc4: 0xfe830008
    ctx->pc = 0x18bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x18bcc8: 0x24040006
    ctx->pc = 0x18bcc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x18bccc: 0xfe640008
    ctx->pc = 0x18bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 4));
    // 0x18bcd0: 0x24030008
    ctx->pc = 0x18bcd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x18bcd4: 0xfe430008
    ctx->pc = 0x18bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x18bcd8: 0x24040034
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 52));
    // 0x18bcdc: 0x24030036
    ctx->pc = 0x18bcdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 54));
    // 0x18bce0: 0xfe240008
    ctx->pc = 0x18bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x18bce4: 0x10000013
    ctx->pc = 0x18BCE4u;
    {
        const bool branch_taken_0x18bce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18BCE8u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        if (branch_taken_0x18bce4) {
            ctx->pc = 0x18BD34u;
            goto label_18bd34;
        }
    }
    ctx->pc = 0x18BCECu;
label_18bcec:
    // 0x18bcec: 0xfea00000
    ctx->pc = 0x18bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 0));
    // 0x18bcf0: 0x2403003b
    ctx->pc = 0x18bcf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 59));
    // 0x18bcf4: 0xfea30008
    ctx->pc = 0x18bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x18bcf8: 0x24040014
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bcfc: 0xfe800000
    ctx->pc = 0x18bcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
    // 0x18bd00: 0x24030006
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x18bd04: 0xfe840008
    ctx->pc = 0x18bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x18bd08: 0x24050008
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x18bd0c: 0xfe600000
    ctx->pc = 0x18bd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 0));
    // 0x18bd10: 0x24040034
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 52));
    // 0x18bd14: 0xfe630008
    ctx->pc = 0x18bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x18bd18: 0xfe400000
    ctx->pc = 0x18bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x18bd1c: 0x24030036
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 54));
    // 0x18bd20: 0xfe450008
    ctx->pc = 0x18bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x18bd24: 0xfe200000
    ctx->pc = 0x18bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x18bd28: 0xfe240008
    ctx->pc = 0x18bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x18bd2c: 0xfe000000
    ctx->pc = 0x18bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x18bd30: 0xfe030008
    ctx->pc = 0x18bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_18bd34:
    // 0x18bd34: 0xdfbf0060
    ctx->pc = 0x18bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18bd38: 0x7bb50050
    ctx->pc = 0x18bd38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18bd3c: 0x7bb40040
    ctx->pc = 0x18bd3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bd40: 0x7bb30030
    ctx->pc = 0x18bd40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bd44: 0x7bb20020
    ctx->pc = 0x18bd44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bd48: 0x7bb10010
    ctx->pc = 0x18bd48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bd4c: 0x7bb00000
    ctx->pc = 0x18bd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bd50: 0x3e00008
    ctx->pc = 0x18BD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BCECu: goto label_18bcec;
            case 0x18BD34u: goto label_18bd34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BD58u;
    // 0x18bd58: 0x0
    ctx->pc = 0x18bd58u;
    // NOP
    // 0x18bd5c: 0x0
    ctx->pc = 0x18bd5cu;
    // NOP
}
