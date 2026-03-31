#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103C78
// Address: 0x103c78 - 0x104ee0
void sub_00103C78_0x103c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103c78u;

label_103c78:
    // 0x103c78: 0x27bdff50
    ctx->pc = 0x103c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_103c7c:
    // 0x103c7c: 0xffb00060
    ctx->pc = 0x103c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_103c80:
    // 0x103c80: 0x120802d
    ctx->pc = 0x103c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_103c84:
    // 0x103c84: 0xffb40080
    ctx->pc = 0x103c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_103c88:
    // 0x103c88: 0xa0a02d
    ctx->pc = 0x103c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_103c8c:
    // 0x103c8c: 0xffb70098
    ctx->pc = 0x103c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_103c90:
    // 0x103c90: 0x80b82d
    ctx->pc = 0x103c90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_103c94:
    // 0x103c94: 0xffb10068
    ctx->pc = 0x103c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_103c98:
    // 0x103c98: 0xffb20070
    ctx->pc = 0x103c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_103c9c:
    // 0x103c9c: 0xffb30078
    ctx->pc = 0x103c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_103ca0:
    // 0x103ca0: 0xffb50088
    ctx->pc = 0x103ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_103ca4:
    // 0x103ca4: 0xffb60090
    ctx->pc = 0x103ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_103ca8:
    // 0x103ca8: 0xffbe00a0
    ctx->pc = 0x103ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_103cac:
    // 0x103cac: 0xffbf00a8
    ctx->pc = 0x103cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_103cb0:
    // 0x103cb0: 0xafa60008
    ctx->pc = 0x103cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_103cb4:
    // 0x103cb4: 0x8eeb0040
    ctx->pc = 0x103cb4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_103cb8:
    // 0x103cb8: 0xafa7000c
    ctx->pc = 0x103cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_103cbc:
    // 0x103cbc: 0xafa80010
    ctx->pc = 0x103cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_103cc0:
    // 0x103cc0: 0x1160000a
label_103cc4:
    if (ctx->pc == 0x103CC4u) {
        ctx->pc = 0x103CC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->pc = 0x103CC8u;
        goto label_103cc8;
    }
    ctx->pc = 0x103CC0u;
    {
        const bool branch_taken_0x103cc0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x103CC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        if (branch_taken_0x103cc0) {
            ctx->pc = 0x103CECu;
            goto label_103cec;
        }
    }
    ctx->pc = 0x103CC8u;
label_103cc8:
    // 0x103cc8: 0x8ee60044
    ctx->pc = 0x103cc8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_103ccc:
    // 0x103ccc: 0x24030001
    ctx->pc = 0x103cccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_103cd0:
    // 0x103cd0: 0x160282d
    ctx->pc = 0x103cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_103cd4:
    // 0x103cd4: 0xad660004
    ctx->pc = 0x103cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
label_103cd8:
    // 0x103cd8: 0x8ee20044
    ctx->pc = 0x103cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_103cdc:
    // 0x103cdc: 0x431804
    ctx->pc = 0x103cdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_103ce0:
    // 0x103ce0: 0xc041fa8
label_103ce4:
    if (ctx->pc == 0x103CE4u) {
        ctx->pc = 0x103CE4u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x103CE8u;
        goto label_103ce8;
    }
    ctx->pc = 0x103CE0u;
    SET_GPR_U32(ctx, 31, 0x103CE8u);
    ctx->pc = 0x103CE4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103CE8u; }
    }
    if (ctx->pc != 0x103CE8u) { return; }
    ctx->pc = 0x103CE8u;
label_103ce8:
    // 0x103ce8: 0xaee00040
    ctx->pc = 0x103ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
label_103cec:
    // 0x103cec: 0x14103e
    ctx->pc = 0x103cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_103cf0:
    // 0x103cf0: 0x2203c
    ctx->pc = 0x103cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_103cf4:
    // 0x103cf4: 0x4203f
    ctx->pc = 0x103cf4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_103cf8:
    // 0x103cf8: 0x483000c
label_103cfc:
    if (ctx->pc == 0x103CFCu) {
        ctx->pc = 0x103CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x103D00u;
        goto label_103d00;
    }
    ctx->pc = 0x103CF8u;
    {
        const bool branch_taken_0x103cf8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x103cf8) {
            ctx->pc = 0x103CFCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x103D2Cu;
            goto label_103d2c;
        }
    }
    ctx->pc = 0x103D00u;
label_103d00:
    // 0x103d00: 0x3c027fff
    ctx->pc = 0x103d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_103d04:
    // 0x103d04: 0x3c03ffff
    ctx->pc = 0x103d04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_103d08:
    // 0x103d08: 0x3183e
    ctx->pc = 0x103d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_103d0c:
    // 0x103d0c: 0x3442ffff
    ctx->pc = 0x103d0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_103d10:
    // 0x103d10: 0x283a024
    ctx->pc = 0x103d10u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_103d14:
    // 0x103d14: 0x821024
    ctx->pc = 0x103d14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_103d18:
    // 0x103d18: 0x24030001
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_103d1c:
    // 0x103d1c: 0x2103c
    ctx->pc = 0x103d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_103d20:
    // 0x103d20: 0xae030000
    ctx->pc = 0x103d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_103d24:
    // 0x103d24: 0x282a025
    ctx->pc = 0x103d24u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_103d28:
    // 0x103d28: 0x14103e
    ctx->pc = 0x103d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_103d2c:
    // 0x103d2c: 0x2803c
    ctx->pc = 0x103d2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_103d30:
    // 0x103d30: 0x10803f
    ctx->pc = 0x103d30u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_103d34:
    // 0x103d34: 0x3c037ff0
    ctx->pc = 0x103d34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_103d38:
    // 0x103d38: 0x2031024
    ctx->pc = 0x103d38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_103d3c:
    // 0x103d3c: 0x14430016
label_103d40:
    if (ctx->pc == 0x103D40u) {
        ctx->pc = 0x103D40u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x103D44u;
        goto label_103d44;
    }
    ctx->pc = 0x103D3Cu;
    {
        const bool branch_taken_0x103d3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x103D40u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x103d3c) {
            ctx->pc = 0x103D98u;
            goto label_103d98;
        }
    }
    ctx->pc = 0x103D44u;
label_103d44:
    // 0x103d44: 0x2402ffff
    ctx->pc = 0x103d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_103d48:
    // 0x103d48: 0x2133a
    ctx->pc = 0x103d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_103d4c:
    // 0x103d4c: 0x2403270f
    ctx->pc = 0x103d4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9999));
label_103d50:
    // 0x103d50: 0x2821024
    ctx->pc = 0x103d50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_103d54:
    // 0x103d54: 0x14400004
label_103d58:
    if (ctx->pc == 0x103D58u) {
        ctx->pc = 0x103D58u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x103D5Cu;
        goto label_103d5c;
    }
    ctx->pc = 0x103D54u;
    {
        const bool branch_taken_0x103d54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x103D58u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x103d54) {
            ctx->pc = 0x103D68u;
            goto label_103d68;
        }
    }
    ctx->pc = 0x103D5Cu;
label_103d5c:
    // 0x103d5c: 0x3c020023
    ctx->pc = 0x103d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_103d60:
    // 0x103d60: 0x10000003
label_103d64:
    if (ctx->pc == 0x103D64u) {
        ctx->pc = 0x103D64u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 30832));
        ctx->pc = 0x103D68u;
        goto label_103d68;
    }
    ctx->pc = 0x103D60u;
    {
        const bool branch_taken_0x103d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103D64u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 30832));
        if (branch_taken_0x103d60) {
            ctx->pc = 0x103D70u;
            goto label_103d70;
        }
    }
    ctx->pc = 0x103D68u;
label_103d68:
    // 0x103d68: 0x3c020023
    ctx->pc = 0x103d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_103d6c:
    // 0x103d6c: 0x24557880
    ctx->pc = 0x103d6cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 30848));
label_103d70:
    // 0x103d70: 0x8fa20014
    ctx->pc = 0x103d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_103d74:
    // 0x103d74: 0x10400018
label_103d78:
    if (ctx->pc == 0x103D78u) {
        ctx->pc = 0x103D78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x103D7Cu;
        goto label_103d7c;
    }
    ctx->pc = 0x103D74u;
    {
        const bool branch_taken_0x103d74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x103D78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 8));
        if (branch_taken_0x103d74) {
            ctx->pc = 0x103DD8u;
            goto label_103dd8;
        }
    }
    ctx->pc = 0x103D7Cu;
label_103d7c:
    // 0x103d7c: 0x82a20003
    ctx->pc = 0x103d7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_103d80:
    // 0x103d80: 0x26a40003
    ctx->pc = 0x103d80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 3));
label_103d84:
    // 0x103d84: 0x82180a
    ctx->pc = 0x103d84u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_103d88:
    // 0x103d88: 0x8fa40014
    ctx->pc = 0x103d88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_103d8c:
    // 0x103d8c: 0x10000012
label_103d90:
    if (ctx->pc == 0x103D90u) {
        ctx->pc = 0x103D90u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x103D94u;
        goto label_103d94;
    }
    ctx->pc = 0x103D8Cu;
    {
        const bool branch_taken_0x103d8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103D90u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x103d8c) {
            ctx->pc = 0x103DD8u;
            goto label_103dd8;
        }
    }
    ctx->pc = 0x103D94u;
label_103d94:
    // 0x103d94: 0x0
    ctx->pc = 0x103d94u;
    // NOP
label_103d98:
    // 0x103d98: 0x280202d
    ctx->pc = 0x103d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103d9c:
    // 0x103d9c: 0x282d
    ctx->pc = 0x103d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103da0:
    // 0x103da0: 0xc0448a6
label_103da4:
    if (ctx->pc == 0x103DA4u) {
        ctx->pc = 0x103DA8u;
        goto label_103da8;
    }
    ctx->pc = 0x103DA0u;
    SET_GPR_U32(ctx, 31, 0x103DA8u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DA8u; }
    }
    if (ctx->pc != 0x103DA8u) { return; }
    ctx->pc = 0x103DA8u;
label_103da8:
    // 0x103da8: 0x1440000d
label_103dac:
    if (ctx->pc == 0x103DACu) {
        ctx->pc = 0x103DACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103DB0u;
        goto label_103db0;
    }
    ctx->pc = 0x103DA8u;
    {
        const bool branch_taken_0x103da8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x103DACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103da8) {
            ctx->pc = 0x103DE0u;
            goto label_103de0;
        }
    }
    ctx->pc = 0x103DB0u;
label_103db0:
    // 0x103db0: 0x8fa40010
    ctx->pc = 0x103db0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103db4:
    // 0x103db4: 0x24020001
    ctx->pc = 0x103db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_103db8:
    // 0x103db8: 0x3c030023
    ctx->pc = 0x103db8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_103dbc:
    // 0x103dbc: 0xac820000
    ctx->pc = 0x103dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_103dc0:
    // 0x103dc0: 0x8fa20014
    ctx->pc = 0x103dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_103dc4:
    // 0x103dc4: 0x10400004
label_103dc8:
    if (ctx->pc == 0x103DC8u) {
        ctx->pc = 0x103DC8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 30856));
        ctx->pc = 0x103DCCu;
        goto label_103dcc;
    }
    ctx->pc = 0x103DC4u;
    {
        const bool branch_taken_0x103dc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x103DC8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 30856));
        if (branch_taken_0x103dc4) {
            ctx->pc = 0x103DD8u;
            goto label_103dd8;
        }
    }
    ctx->pc = 0x103DCCu;
label_103dcc:
    // 0x103dcc: 0x8fa30014
    ctx->pc = 0x103dccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_103dd0:
    // 0x103dd0: 0x26a20001
    ctx->pc = 0x103dd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
label_103dd4:
    // 0x103dd4: 0xac620000
    ctx->pc = 0x103dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_103dd8:
    // 0x103dd8: 0x10000434
label_103ddc:
    if (ctx->pc == 0x103DDCu) {
        ctx->pc = 0x103DDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103DE0u;
        goto label_103de0;
    }
    ctx->pc = 0x103DD8u;
    {
        const bool branch_taken_0x103dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103DDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103dd8) {
            ctx->pc = 0x104EACu;
            goto label_104eac;
        }
    }
    ctx->pc = 0x103DE0u;
label_103de0:
    // 0x103de0: 0x280282d
    ctx->pc = 0x103de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103de4:
    // 0x103de4: 0x3a0302d
    ctx->pc = 0x103de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_103de8:
    // 0x103de8: 0xc0422d2
label_103dec:
    if (ctx->pc == 0x103DECu) {
        ctx->pc = 0x103DECu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x103DF0u;
        goto label_103df0;
    }
    ctx->pc = 0x103DE8u;
    SET_GPR_U32(ctx, 31, 0x103DF0u);
    ctx->pc = 0x103DECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x108B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B48_0x108b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DF0u; }
    }
    if (ctx->pc != 0x103DF0u) { return; }
    ctx->pc = 0x103DF0u;
label_103df0:
    // 0x103df0: 0xafa20044
    ctx->pc = 0x103df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_103df4:
    // 0x103df4: 0x101502
    ctx->pc = 0x103df4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 20));
label_103df8:
    // 0x103df8: 0x305307ff
    ctx->pc = 0x103df8u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), 2047));
label_103dfc:
    // 0x103dfc: 0x12600014
label_103e00:
    if (ctx->pc == 0x103E00u) {
        ctx->pc = 0x103E00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        ctx->pc = 0x103E04u;
        goto label_103e04;
    }
    ctx->pc = 0x103DFCu;
    {
        const bool branch_taken_0x103dfc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x103E00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x103dfc) {
            ctx->pc = 0x103E50u;
            goto label_103e50;
        }
    }
    ctx->pc = 0x103E04u;
label_103e04:
    // 0x103e04: 0x280b02d
    ctx->pc = 0x103e04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103e08:
    // 0x103e08: 0x16183f
    ctx->pc = 0x103e08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
label_103e0c:
    // 0x103e0c: 0x3442ffff
    ctx->pc = 0x103e0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_103e10:
    // 0x103e10: 0x621824
    ctx->pc = 0x103e10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103e14:
    // 0x103e14: 0x3c05ffff
    ctx->pc = 0x103e14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_103e18:
    // 0x103e18: 0x5283e
    ctx->pc = 0x103e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_103e1c:
    // 0x103e1c: 0x3183c
    ctx->pc = 0x103e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_103e20:
    // 0x103e20: 0x2c5b024
    ctx->pc = 0x103e20u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_103e24:
    // 0x103e24: 0x2c3b025
    ctx->pc = 0x103e24u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_103e28:
    // 0x103e28: 0x3c043ff0
    ctx->pc = 0x103e28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16368 << 16));
label_103e2c:
    // 0x103e2c: 0x16103f
    ctx->pc = 0x103e2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
label_103e30:
    // 0x103e30: 0x2c5b024
    ctx->pc = 0x103e30u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_103e34:
    // 0x103e34: 0x441025
    ctx->pc = 0x103e34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_103e38:
    // 0x103e38: 0x2673fc01
    ctx->pc = 0x103e38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294966273));
label_103e3c:
    // 0x103e3c: 0x2103c
    ctx->pc = 0x103e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_103e40:
    // 0x103e40: 0xafa00040
    ctx->pc = 0x103e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_103e44:
    // 0x103e44: 0x2c2b025
    ctx->pc = 0x103e44u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_103e48:
    // 0x103e48: 0x10000029
label_103e4c:
    if (ctx->pc == 0x103E4Cu) {
        ctx->pc = 0x103E4Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x103E50u;
        goto label_103e50;
    }
    ctx->pc = 0x103E48u;
    {
        const bool branch_taken_0x103e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103E4Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x103e48) {
            ctx->pc = 0x103EF0u;
            goto label_103ef0;
        }
    }
    ctx->pc = 0x103E50u;
label_103e50:
    // 0x103e50: 0x8fa20000
    ctx->pc = 0x103e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_103e54:
    // 0x103e54: 0x8fb20004
    ctx->pc = 0x103e54u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_103e58:
    // 0x103e58: 0x2422021
    ctx->pc = 0x103e58u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_103e5c:
    // 0x103e5c: 0x24930432
    ctx->pc = 0x103e5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 1074));
label_103e60:
    // 0x103e60: 0x2a620021
    ctx->pc = 0x103e60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 33));
label_103e64:
    // 0x103e64: 0x1440000a
label_103e68:
    if (ctx->pc == 0x103E68u) {
        ctx->pc = 0x103E68u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->pc = 0x103E6Cu;
        goto label_103e6c;
    }
    ctx->pc = 0x103E64u;
    {
        const bool branch_taken_0x103e64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x103E68u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        if (branch_taken_0x103e64) {
            ctx->pc = 0x103E90u;
            goto label_103e90;
        }
    }
    ctx->pc = 0x103E6Cu;
label_103e6c:
    // 0x103e6c: 0x24840412
    ctx->pc = 0x103e6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1042));
label_103e70:
    // 0x103e70: 0x131823
    ctx->pc = 0x103e70u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_103e74:
    // 0x103e74: 0x14103c
    ctx->pc = 0x103e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_103e78:
    // 0x103e78: 0x2103f
    ctx->pc = 0x103e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_103e7c:
    // 0x103e7c: 0x701804
    ctx->pc = 0x103e7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_103e80:
    // 0x103e80: 0x821006
    ctx->pc = 0x103e80u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_103e84:
    // 0x103e84: 0x10000005
label_103e88:
    if (ctx->pc == 0x103E88u) {
        ctx->pc = 0x103E88u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x103E8Cu;
        goto label_103e8c;
    }
    ctx->pc = 0x103E84u;
    {
        const bool branch_taken_0x103e84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103E88u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x103e84) {
            ctx->pc = 0x103E9Cu;
            goto label_103e9c;
        }
    }
    ctx->pc = 0x103E8Cu;
label_103e8c:
    // 0x103e8c: 0x0
    ctx->pc = 0x103e8cu;
    // NOP
label_103e90:
    // 0x103e90: 0x14183c
    ctx->pc = 0x103e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_103e94:
    // 0x103e94: 0x3183f
    ctx->pc = 0x103e94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_103e98:
    // 0x103e98: 0x438004
    ctx->pc = 0x103e98u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_103e9c:
    // 0x103e9c: 0xc0448ba
label_103ea0:
    if (ctx->pc == 0x103EA0u) {
        ctx->pc = 0x103EA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103EA4u;
        goto label_103ea4;
    }
    ctx->pc = 0x103E9Cu;
    SET_GPR_U32(ctx, 31, 0x103EA4u);
    ctx->pc = 0x103EA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EA4u; }
    }
    if (ctx->pc != 0x103EA4u) { return; }
    ctx->pc = 0x103EA4u;
label_103ea4:
    // 0x103ea4: 0x6010006
label_103ea8:
    if (ctx->pc == 0x103EA8u) {
        ctx->pc = 0x103EACu;
        goto label_103eac;
    }
    ctx->pc = 0x103EA4u;
    {
        const bool branch_taken_0x103ea4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x103ea4) {
            ctx->pc = 0x103EC0u;
            goto label_103ec0;
        }
    }
    ctx->pc = 0x103EACu;
label_103eac:
    // 0x103eac: 0x340583e0
    ctx->pc = 0x103eacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
label_103eb0:
    // 0x103eb0: 0x52bfc
    ctx->pc = 0x103eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_103eb4:
    // 0x103eb4: 0x40202d
    ctx->pc = 0x103eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103eb8:
    // 0x103eb8: 0xc04473c
label_103ebc:
    if (ctx->pc == 0x103EBCu) {
        ctx->pc = 0x103EC0u;
        goto label_103ec0;
    }
    ctx->pc = 0x103EB8u;
    SET_GPR_U32(ctx, 31, 0x103EC0u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EC0u; }
    }
    if (ctx->pc != 0x103EC0u) { return; }
    ctx->pc = 0x103EC0u;
label_103ec0:
    // 0x103ec0: 0x40b02d
    ctx->pc = 0x103ec0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103ec4:
    // 0x103ec4: 0x3c02fe10
    ctx->pc = 0x103ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65040 << 16));
label_103ec8:
    // 0x103ec8: 0x16183f
    ctx->pc = 0x103ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
label_103ecc:
    // 0x103ecc: 0x3c04ffff
    ctx->pc = 0x103eccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_103ed0:
    // 0x103ed0: 0x4203e
    ctx->pc = 0x103ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_103ed4:
    // 0x103ed4: 0x2c4b024
    ctx->pc = 0x103ed4u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_103ed8:
    // 0x103ed8: 0x24040001
    ctx->pc = 0x103ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_103edc:
    // 0x103edc: 0x621821
    ctx->pc = 0x103edcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103ee0:
    // 0x103ee0: 0xafa40040
    ctx->pc = 0x103ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_103ee4:
    // 0x103ee4: 0x3183c
    ctx->pc = 0x103ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_103ee8:
    // 0x103ee8: 0x2673fbcd
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294966221));
label_103eec:
    // 0x103eec: 0x2c3b025
    ctx->pc = 0x103eecu;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_103ef0:
    // 0x103ef0: 0x3405ffe0
    ctx->pc = 0x103ef0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65504));
label_103ef4:
    // 0x103ef4: 0x52bbc
    ctx->pc = 0x103ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_103ef8:
    // 0x103ef8: 0x2c0202d
    ctx->pc = 0x103ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_103efc:
    // 0x103efc: 0xc044752
label_103f00:
    if (ctx->pc == 0x103F00u) {
        ctx->pc = 0x103F04u;
        goto label_103f04;
    }
    ctx->pc = 0x103EFCu;
    SET_GPR_U32(ctx, 31, 0x103F04u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F04u; }
    }
    if (ctx->pc != 0x103F04u) { return; }
    ctx->pc = 0x103F04u;
label_103f04:
    // 0x103f04: 0x3c010023
    ctx->pc = 0x103f04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_103f08:
    // 0x103f08: 0xdc257890
    ctx->pc = 0x103f08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 30864)));
label_103f0c:
    // 0x103f0c: 0x40202d
    ctx->pc = 0x103f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f10:
    // 0x103f10: 0xc04476c
label_103f14:
    if (ctx->pc == 0x103F14u) {
        ctx->pc = 0x103F18u;
        goto label_103f18;
    }
    ctx->pc = 0x103F10u;
    SET_GPR_U32(ctx, 31, 0x103F18u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F18u; }
    }
    if (ctx->pc != 0x103F18u) { return; }
    ctx->pc = 0x103F18u;
label_103f18:
    // 0x103f18: 0x3c010023
    ctx->pc = 0x103f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_103f1c:
    // 0x103f1c: 0xdc257898
    ctx->pc = 0x103f1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 30872)));
label_103f20:
    // 0x103f20: 0x40202d
    ctx->pc = 0x103f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f24:
    // 0x103f24: 0xc04473c
label_103f28:
    if (ctx->pc == 0x103F28u) {
        ctx->pc = 0x103F2Cu;
        goto label_103f2c;
    }
    ctx->pc = 0x103F24u;
    SET_GPR_U32(ctx, 31, 0x103F2Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F2Cu; }
    }
    if (ctx->pc != 0x103F2Cu) { return; }
    ctx->pc = 0x103F2Cu;
label_103f2c:
    // 0x103f2c: 0x40802d
    ctx->pc = 0x103f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f30:
    // 0x103f30: 0xc0448ba
label_103f34:
    if (ctx->pc == 0x103F34u) {
        ctx->pc = 0x103F34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103F38u;
        goto label_103f38;
    }
    ctx->pc = 0x103F30u;
    SET_GPR_U32(ctx, 31, 0x103F38u);
    ctx->pc = 0x103F34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F38u; }
    }
    if (ctx->pc != 0x103F38u) { return; }
    ctx->pc = 0x103F38u;
label_103f38:
    // 0x103f38: 0x3c010023
    ctx->pc = 0x103f38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_103f3c:
    // 0x103f3c: 0xdc2578a0
    ctx->pc = 0x103f3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 30880)));
label_103f40:
    // 0x103f40: 0x40202d
    ctx->pc = 0x103f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f44:
    // 0x103f44: 0xc04476c
label_103f48:
    if (ctx->pc == 0x103F48u) {
        ctx->pc = 0x103F4Cu;
        goto label_103f4c;
    }
    ctx->pc = 0x103F44u;
    SET_GPR_U32(ctx, 31, 0x103F4Cu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F4Cu; }
    }
    if (ctx->pc != 0x103F4Cu) { return; }
    ctx->pc = 0x103F4Cu;
label_103f4c:
    // 0x103f4c: 0x200202d
    ctx->pc = 0x103f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103f50:
    // 0x103f50: 0x40282d
    ctx->pc = 0x103f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f54:
    // 0x103f54: 0xc04473c
label_103f58:
    if (ctx->pc == 0x103F58u) {
        ctx->pc = 0x103F5Cu;
        goto label_103f5c;
    }
    ctx->pc = 0x103F54u;
    SET_GPR_U32(ctx, 31, 0x103F5Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F5Cu; }
    }
    if (ctx->pc != 0x103F5Cu) { return; }
    ctx->pc = 0x103F5Cu;
label_103f5c:
    // 0x103f5c: 0x40882d
    ctx->pc = 0x103f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f60:
    // 0x103f60: 0x220202d
    ctx->pc = 0x103f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103f64:
    // 0x103f64: 0xc0448e8
label_103f68:
    if (ctx->pc == 0x103F68u) {
        ctx->pc = 0x103F6Cu;
        goto label_103f6c;
    }
    ctx->pc = 0x103F64u;
    SET_GPR_U32(ctx, 31, 0x103F6Cu);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F6Cu; }
    }
    if (ctx->pc != 0x103F6Cu) { return; }
    ctx->pc = 0x103F6Cu;
label_103f6c:
    // 0x103f6c: 0x220202d
    ctx->pc = 0x103f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103f70:
    // 0x103f70: 0x282d
    ctx->pc = 0x103f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103f74:
    // 0x103f74: 0xc0448a6
label_103f78:
    if (ctx->pc == 0x103F78u) {
        ctx->pc = 0x103F78u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103F7Cu;
        goto label_103f7c;
    }
    ctx->pc = 0x103F74u;
    SET_GPR_U32(ctx, 31, 0x103F7Cu);
    ctx->pc = 0x103F78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F7Cu; }
    }
    if (ctx->pc != 0x103F7Cu) { return; }
    ctx->pc = 0x103F7Cu;
label_103f7c:
    // 0x103f7c: 0x441000a
label_103f80:
    if (ctx->pc == 0x103F80u) {
        ctx->pc = 0x103F80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x103F84u;
        goto label_103f84;
    }
    ctx->pc = 0x103F7Cu;
    {
        const bool branch_taken_0x103f7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x103F80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x103f7c) {
            ctx->pc = 0x103FA8u;
            goto label_103fa8;
        }
    }
    ctx->pc = 0x103F84u;
label_103f84:
    // 0x103f84: 0xc0448ba
label_103f88:
    if (ctx->pc == 0x103F88u) {
        ctx->pc = 0x103F88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103F8Cu;
        goto label_103f8c;
    }
    ctx->pc = 0x103F84u;
    SET_GPR_U32(ctx, 31, 0x103F8Cu);
    ctx->pc = 0x103F88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F8Cu; }
    }
    if (ctx->pc != 0x103F8Cu) { return; }
    ctx->pc = 0x103F8Cu;
label_103f8c:
    // 0x103f8c: 0x220202d
    ctx->pc = 0x103f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103f90:
    // 0x103f90: 0x40282d
    ctx->pc = 0x103f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f94:
    // 0x103f94: 0xc0448a6
label_103f98:
    if (ctx->pc == 0x103F98u) {
        ctx->pc = 0x103F9Cu;
        goto label_103f9c;
    }
    ctx->pc = 0x103F94u;
    SET_GPR_U32(ctx, 31, 0x103F9Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103F9Cu; }
    }
    if (ctx->pc != 0x103F9Cu) { return; }
    ctx->pc = 0x103F9Cu;
label_103f9c:
    // 0x103f9c: 0x27c3ffff
    ctx->pc = 0x103f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4294967295));
label_103fa0:
    // 0x103fa0: 0x62f00b
    ctx->pc = 0x103fa0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 3));
label_103fa4:
    // 0x103fa4: 0x24030001
    ctx->pc = 0x103fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_103fa8:
    // 0x103fa8: 0x2fc20017
    ctx->pc = 0x103fa8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), 23));
label_103fac:
    // 0x103fac: 0x1040000b
label_103fb0:
    if (ctx->pc == 0x103FB0u) {
        ctx->pc = 0x103FB0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x103FB4u;
        goto label_103fb4;
    }
    ctx->pc = 0x103FACu;
    {
        const bool branch_taken_0x103fac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x103FB0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        if (branch_taken_0x103fac) {
            ctx->pc = 0x103FDCu;
            goto label_103fdc;
        }
    }
    ctx->pc = 0x103FB4u;
label_103fb4:
    // 0x103fb4: 0x1e10c0
    ctx->pc = 0x103fb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 30), 3));
label_103fb8:
    // 0x103fb8: 0x280202d
    ctx->pc = 0x103fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103fbc:
    // 0x103fbc: 0x3c050023
    ctx->pc = 0x103fbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
label_103fc0:
    // 0x103fc0: 0xa22821
    ctx->pc = 0x103fc0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_103fc4:
    // 0x103fc4: 0xdca57928
    ctx->pc = 0x103fc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 31016)));
label_103fc8:
    // 0x103fc8: 0xc0448a6
label_103fcc:
    if (ctx->pc == 0x103FCCu) {
        ctx->pc = 0x103FCCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x103FD0u;
        goto label_103fd0;
    }
    ctx->pc = 0x103FC8u;
    SET_GPR_U32(ctx, 31, 0x103FD0u);
    ctx->pc = 0x103FCCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103FD0u; }
    }
    if (ctx->pc != 0x103FD0u) { return; }
    ctx->pc = 0x103FD0u;
label_103fd0:
    // 0x103fd0: 0x27c3ffff
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4294967295));
label_103fd4:
    // 0x103fd4: 0x28420000
    ctx->pc = 0x103fd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
label_103fd8:
    // 0x103fd8: 0x62f00b
    ctx->pc = 0x103fd8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 3));
label_103fdc:
    // 0x103fdc: 0x2531023
    ctx->pc = 0x103fdcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_103fe0:
    // 0x103fe0: 0x2450ffff
    ctx->pc = 0x103fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_103fe4:
    // 0x103fe4: 0x6020004
label_103fe8:
    if (ctx->pc == 0x103FE8u) {
        ctx->pc = 0x103FE8u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->pc = 0x103FECu;
        goto label_103fec;
    }
    ctx->pc = 0x103FE4u;
    {
        const bool branch_taken_0x103fe4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x103fe4) {
            ctx->pc = 0x103FE8u;
            SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->pc = 0x103FF8u;
            goto label_103ff8;
        }
    }
    ctx->pc = 0x103FECu;
label_103fec:
    // 0x103fec: 0xafb00038
    ctx->pc = 0x103fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_103ff0:
    // 0x103ff0: 0x10000003
label_103ff4:
    if (ctx->pc == 0x103FF4u) {
        ctx->pc = 0x103FF4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x103FF8u;
        goto label_103ff8;
    }
    ctx->pc = 0x103FF0u;
    {
        const bool branch_taken_0x103ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103FF4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x103ff0) {
            ctx->pc = 0x104000u;
            goto label_104000;
        }
    }
    ctx->pc = 0x103FF8u;
label_103ff8:
    // 0x103ff8: 0xafa00038
    ctx->pc = 0x103ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_103ffc:
    // 0x103ffc: 0xafb00018
    ctx->pc = 0x103ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_104000:
    // 0x104000: 0x7c00007
label_104004:
    if (ctx->pc == 0x104004u) {
        ctx->pc = 0x104004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x104008u;
        goto label_104008;
    }
    ctx->pc = 0x104000u;
    {
        const bool branch_taken_0x104000 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x104004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x104000) {
            ctx->pc = 0x104020u;
            goto label_104020;
        }
    }
    ctx->pc = 0x104008u;
label_104008:
    // 0x104008: 0xafa0001c
    ctx->pc = 0x104008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_10400c:
    // 0x10400c: 0x9e2021
    ctx->pc = 0x10400cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_104010:
    // 0x104010: 0xafbe003c
    ctx->pc = 0x104010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
label_104014:
    // 0x104014: 0x10000008
label_104018:
    if (ctx->pc == 0x104018u) {
        ctx->pc = 0x104018u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->pc = 0x10401Cu;
        goto label_10401c;
    }
    ctx->pc = 0x104014u;
    {
        const bool branch_taken_0x104014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104018u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        if (branch_taken_0x104014) {
            ctx->pc = 0x104038u;
            goto label_104038;
        }
    }
    ctx->pc = 0x10401Cu;
label_10401c:
    // 0x10401c: 0x0
    ctx->pc = 0x10401cu;
    // NOP
label_104020:
    // 0x104020: 0x8fa20018
    ctx->pc = 0x104020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_104024:
    // 0x104024: 0x1e1823
    ctx->pc = 0x104024u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_104028:
    // 0x104028: 0xafa3001c
    ctx->pc = 0x104028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_10402c:
    // 0x10402c: 0x5e1023
    ctx->pc = 0x10402cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_104030:
    // 0x104030: 0xafa0003c
    ctx->pc = 0x104030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_104034:
    // 0x104034: 0xafa20018
    ctx->pc = 0x104034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_104038:
    // 0x104038: 0x8fa40008
    ctx->pc = 0x104038u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_10403c:
    // 0x10403c: 0x24110001
    ctx->pc = 0x10403cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_104040:
    // 0x104040: 0x2c83000a
    ctx->pc = 0x104040u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 10));
label_104044:
    // 0x104044: 0x3200a
    ctx->pc = 0x104044u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_104048:
    // 0x104048: 0x28820006
    ctx->pc = 0x104048u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
label_10404c:
    // 0x10404c: 0x14400004
label_104050:
    if (ctx->pc == 0x104050u) {
        ctx->pc = 0x104050u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x104054u;
        goto label_104054;
    }
    ctx->pc = 0x10404Cu;
    {
        const bool branch_taken_0x10404c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104050u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x10404c) {
            ctx->pc = 0x104060u;
            goto label_104060;
        }
    }
    ctx->pc = 0x104054u;
label_104054:
    // 0x104054: 0x2484fffc
    ctx->pc = 0x104054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
label_104058:
    // 0x104058: 0x882d
    ctx->pc = 0x104058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10405c:
    // 0x10405c: 0xafa40008
    ctx->pc = 0x10405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_104060:
    // 0x104060: 0x8fa30008
    ctx->pc = 0x104060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_104064:
    // 0x104064: 0x24040001
    ctx->pc = 0x104064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_104068:
    // 0x104068: 0xafa40034
    ctx->pc = 0x104068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_10406c:
    // 0x10406c: 0x2c620006
    ctx->pc = 0x10406cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_104070:
    // 0x104070: 0x2403ffff
    ctx->pc = 0x104070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_104074:
    // 0x104074: 0xafa30028
    ctx->pc = 0x104074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_104078:
    // 0x104078: 0x10400020
label_10407c:
    if (ctx->pc == 0x10407Cu) {
        ctx->pc = 0x10407Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x104080u;
        goto label_104080;
    }
    ctx->pc = 0x104078u;
    {
        const bool branch_taken_0x104078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10407Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x104078) {
            ctx->pc = 0x1040FCu;
            goto label_1040fc;
        }
    }
    ctx->pc = 0x104080u;
label_104080:
    // 0x104080: 0x8fa40008
    ctx->pc = 0x104080u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_104084:
    // 0x104084: 0x41080
    ctx->pc = 0x104084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_104088:
    // 0x104088: 0x3c030023
    ctx->pc = 0x104088u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_10408c:
    // 0x10408c: 0x621821
    ctx->pc = 0x10408cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_104090:
    // 0x104090: 0x8c6378b0
    ctx->pc = 0x104090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 30896)));
label_104094:
    // 0x104094: 0x600008
label_104098:
    if (ctx->pc == 0x104098u) {
        ctx->pc = 0x10409Cu;
        goto label_10409c;
    }
    ctx->pc = 0x104094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103C78u: goto label_103c78;
            case 0x103C7Cu: goto label_103c7c;
            case 0x103C80u: goto label_103c80;
            case 0x103C84u: goto label_103c84;
            case 0x103C88u: goto label_103c88;
            case 0x103C8Cu: goto label_103c8c;
            case 0x103C90u: goto label_103c90;
            case 0x103C94u: goto label_103c94;
            case 0x103C98u: goto label_103c98;
            case 0x103C9Cu: goto label_103c9c;
            case 0x103CA0u: goto label_103ca0;
            case 0x103CA4u: goto label_103ca4;
            case 0x103CA8u: goto label_103ca8;
            case 0x103CACu: goto label_103cac;
            case 0x103CB0u: goto label_103cb0;
            case 0x103CB4u: goto label_103cb4;
            case 0x103CB8u: goto label_103cb8;
            case 0x103CBCu: goto label_103cbc;
            case 0x103CC0u: goto label_103cc0;
            case 0x103CC4u: goto label_103cc4;
            case 0x103CC8u: goto label_103cc8;
            case 0x103CCCu: goto label_103ccc;
            case 0x103CD0u: goto label_103cd0;
            case 0x103CD4u: goto label_103cd4;
            case 0x103CD8u: goto label_103cd8;
            case 0x103CDCu: goto label_103cdc;
            case 0x103CE0u: goto label_103ce0;
            case 0x103CE4u: goto label_103ce4;
            case 0x103CE8u: goto label_103ce8;
            case 0x103CECu: goto label_103cec;
            case 0x103CF0u: goto label_103cf0;
            case 0x103CF4u: goto label_103cf4;
            case 0x103CF8u: goto label_103cf8;
            case 0x103CFCu: goto label_103cfc;
            case 0x103D00u: goto label_103d00;
            case 0x103D04u: goto label_103d04;
            case 0x103D08u: goto label_103d08;
            case 0x103D0Cu: goto label_103d0c;
            case 0x103D10u: goto label_103d10;
            case 0x103D14u: goto label_103d14;
            case 0x103D18u: goto label_103d18;
            case 0x103D1Cu: goto label_103d1c;
            case 0x103D20u: goto label_103d20;
            case 0x103D24u: goto label_103d24;
            case 0x103D28u: goto label_103d28;
            case 0x103D2Cu: goto label_103d2c;
            case 0x103D30u: goto label_103d30;
            case 0x103D34u: goto label_103d34;
            case 0x103D38u: goto label_103d38;
            case 0x103D3Cu: goto label_103d3c;
            case 0x103D40u: goto label_103d40;
            case 0x103D44u: goto label_103d44;
            case 0x103D48u: goto label_103d48;
            case 0x103D4Cu: goto label_103d4c;
            case 0x103D50u: goto label_103d50;
            case 0x103D54u: goto label_103d54;
            case 0x103D58u: goto label_103d58;
            case 0x103D5Cu: goto label_103d5c;
            case 0x103D60u: goto label_103d60;
            case 0x103D64u: goto label_103d64;
            case 0x103D68u: goto label_103d68;
            case 0x103D6Cu: goto label_103d6c;
            case 0x103D70u: goto label_103d70;
            case 0x103D74u: goto label_103d74;
            case 0x103D78u: goto label_103d78;
            case 0x103D7Cu: goto label_103d7c;
            case 0x103D80u: goto label_103d80;
            case 0x103D84u: goto label_103d84;
            case 0x103D88u: goto label_103d88;
            case 0x103D8Cu: goto label_103d8c;
            case 0x103D90u: goto label_103d90;
            case 0x103D94u: goto label_103d94;
            case 0x103D98u: goto label_103d98;
            case 0x103D9Cu: goto label_103d9c;
            case 0x103DA0u: goto label_103da0;
            case 0x103DA4u: goto label_103da4;
            case 0x103DA8u: goto label_103da8;
            case 0x103DACu: goto label_103dac;
            case 0x103DB0u: goto label_103db0;
            case 0x103DB4u: goto label_103db4;
            case 0x103DB8u: goto label_103db8;
            case 0x103DBCu: goto label_103dbc;
            case 0x103DC0u: goto label_103dc0;
            case 0x103DC4u: goto label_103dc4;
            case 0x103DC8u: goto label_103dc8;
            case 0x103DCCu: goto label_103dcc;
            case 0x103DD0u: goto label_103dd0;
            case 0x103DD4u: goto label_103dd4;
            case 0x103DD8u: goto label_103dd8;
            case 0x103DDCu: goto label_103ddc;
            case 0x103DE0u: goto label_103de0;
            case 0x103DE4u: goto label_103de4;
            case 0x103DE8u: goto label_103de8;
            case 0x103DECu: goto label_103dec;
            case 0x103DF0u: goto label_103df0;
            case 0x103DF4u: goto label_103df4;
            case 0x103DF8u: goto label_103df8;
            case 0x103DFCu: goto label_103dfc;
            case 0x103E00u: goto label_103e00;
            case 0x103E04u: goto label_103e04;
            case 0x103E08u: goto label_103e08;
            case 0x103E0Cu: goto label_103e0c;
            case 0x103E10u: goto label_103e10;
            case 0x103E14u: goto label_103e14;
            case 0x103E18u: goto label_103e18;
            case 0x103E1Cu: goto label_103e1c;
            case 0x103E20u: goto label_103e20;
            case 0x103E24u: goto label_103e24;
            case 0x103E28u: goto label_103e28;
            case 0x103E2Cu: goto label_103e2c;
            case 0x103E30u: goto label_103e30;
            case 0x103E34u: goto label_103e34;
            case 0x103E38u: goto label_103e38;
            case 0x103E3Cu: goto label_103e3c;
            case 0x103E40u: goto label_103e40;
            case 0x103E44u: goto label_103e44;
            case 0x103E48u: goto label_103e48;
            case 0x103E4Cu: goto label_103e4c;
            case 0x103E50u: goto label_103e50;
            case 0x103E54u: goto label_103e54;
            case 0x103E58u: goto label_103e58;
            case 0x103E5Cu: goto label_103e5c;
            case 0x103E60u: goto label_103e60;
            case 0x103E64u: goto label_103e64;
            case 0x103E68u: goto label_103e68;
            case 0x103E6Cu: goto label_103e6c;
            case 0x103E70u: goto label_103e70;
            case 0x103E74u: goto label_103e74;
            case 0x103E78u: goto label_103e78;
            case 0x103E7Cu: goto label_103e7c;
            case 0x103E80u: goto label_103e80;
            case 0x103E84u: goto label_103e84;
            case 0x103E88u: goto label_103e88;
            case 0x103E8Cu: goto label_103e8c;
            case 0x103E90u: goto label_103e90;
            case 0x103E94u: goto label_103e94;
            case 0x103E98u: goto label_103e98;
            case 0x103E9Cu: goto label_103e9c;
            case 0x103EA0u: goto label_103ea0;
            case 0x103EA4u: goto label_103ea4;
            case 0x103EA8u: goto label_103ea8;
            case 0x103EACu: goto label_103eac;
            case 0x103EB0u: goto label_103eb0;
            case 0x103EB4u: goto label_103eb4;
            case 0x103EB8u: goto label_103eb8;
            case 0x103EBCu: goto label_103ebc;
            case 0x103EC0u: goto label_103ec0;
            case 0x103EC4u: goto label_103ec4;
            case 0x103EC8u: goto label_103ec8;
            case 0x103ECCu: goto label_103ecc;
            case 0x103ED0u: goto label_103ed0;
            case 0x103ED4u: goto label_103ed4;
            case 0x103ED8u: goto label_103ed8;
            case 0x103EDCu: goto label_103edc;
            case 0x103EE0u: goto label_103ee0;
            case 0x103EE4u: goto label_103ee4;
            case 0x103EE8u: goto label_103ee8;
            case 0x103EECu: goto label_103eec;
            case 0x103EF0u: goto label_103ef0;
            case 0x103EF4u: goto label_103ef4;
            case 0x103EF8u: goto label_103ef8;
            case 0x103EFCu: goto label_103efc;
            case 0x103F00u: goto label_103f00;
            case 0x103F04u: goto label_103f04;
            case 0x103F08u: goto label_103f08;
            case 0x103F0Cu: goto label_103f0c;
            case 0x103F10u: goto label_103f10;
            case 0x103F14u: goto label_103f14;
            case 0x103F18u: goto label_103f18;
            case 0x103F1Cu: goto label_103f1c;
            case 0x103F20u: goto label_103f20;
            case 0x103F24u: goto label_103f24;
            case 0x103F28u: goto label_103f28;
            case 0x103F2Cu: goto label_103f2c;
            case 0x103F30u: goto label_103f30;
            case 0x103F34u: goto label_103f34;
            case 0x103F38u: goto label_103f38;
            case 0x103F3Cu: goto label_103f3c;
            case 0x103F40u: goto label_103f40;
            case 0x103F44u: goto label_103f44;
            case 0x103F48u: goto label_103f48;
            case 0x103F4Cu: goto label_103f4c;
            case 0x103F50u: goto label_103f50;
            case 0x103F54u: goto label_103f54;
            case 0x103F58u: goto label_103f58;
            case 0x103F5Cu: goto label_103f5c;
            case 0x103F60u: goto label_103f60;
            case 0x103F64u: goto label_103f64;
            case 0x103F68u: goto label_103f68;
            case 0x103F6Cu: goto label_103f6c;
            case 0x103F70u: goto label_103f70;
            case 0x103F74u: goto label_103f74;
            case 0x103F78u: goto label_103f78;
            case 0x103F7Cu: goto label_103f7c;
            case 0x103F80u: goto label_103f80;
            case 0x103F84u: goto label_103f84;
            case 0x103F88u: goto label_103f88;
            case 0x103F8Cu: goto label_103f8c;
            case 0x103F90u: goto label_103f90;
            case 0x103F94u: goto label_103f94;
            case 0x103F98u: goto label_103f98;
            case 0x103F9Cu: goto label_103f9c;
            case 0x103FA0u: goto label_103fa0;
            case 0x103FA4u: goto label_103fa4;
            case 0x103FA8u: goto label_103fa8;
            case 0x103FACu: goto label_103fac;
            case 0x103FB0u: goto label_103fb0;
            case 0x103FB4u: goto label_103fb4;
            case 0x103FB8u: goto label_103fb8;
            case 0x103FBCu: goto label_103fbc;
            case 0x103FC0u: goto label_103fc0;
            case 0x103FC4u: goto label_103fc4;
            case 0x103FC8u: goto label_103fc8;
            case 0x103FCCu: goto label_103fcc;
            case 0x103FD0u: goto label_103fd0;
            case 0x103FD4u: goto label_103fd4;
            case 0x103FD8u: goto label_103fd8;
            case 0x103FDCu: goto label_103fdc;
            case 0x103FE0u: goto label_103fe0;
            case 0x103FE4u: goto label_103fe4;
            case 0x103FE8u: goto label_103fe8;
            case 0x103FECu: goto label_103fec;
            case 0x103FF0u: goto label_103ff0;
            case 0x103FF4u: goto label_103ff4;
            case 0x103FF8u: goto label_103ff8;
            case 0x103FFCu: goto label_103ffc;
            case 0x104000u: goto label_104000;
            case 0x104004u: goto label_104004;
            case 0x104008u: goto label_104008;
            case 0x10400Cu: goto label_10400c;
            case 0x104010u: goto label_104010;
            case 0x104014u: goto label_104014;
            case 0x104018u: goto label_104018;
            case 0x10401Cu: goto label_10401c;
            case 0x104020u: goto label_104020;
            case 0x104024u: goto label_104024;
            case 0x104028u: goto label_104028;
            case 0x10402Cu: goto label_10402c;
            case 0x104030u: goto label_104030;
            case 0x104034u: goto label_104034;
            case 0x104038u: goto label_104038;
            case 0x10403Cu: goto label_10403c;
            case 0x104040u: goto label_104040;
            case 0x104044u: goto label_104044;
            case 0x104048u: goto label_104048;
            case 0x10404Cu: goto label_10404c;
            case 0x104050u: goto label_104050;
            case 0x104054u: goto label_104054;
            case 0x104058u: goto label_104058;
            case 0x10405Cu: goto label_10405c;
            case 0x104060u: goto label_104060;
            case 0x104064u: goto label_104064;
            case 0x104068u: goto label_104068;
            case 0x10406Cu: goto label_10406c;
            case 0x104070u: goto label_104070;
            case 0x104074u: goto label_104074;
            case 0x104078u: goto label_104078;
            case 0x10407Cu: goto label_10407c;
            case 0x104080u: goto label_104080;
            case 0x104084u: goto label_104084;
            case 0x104088u: goto label_104088;
            case 0x10408Cu: goto label_10408c;
            case 0x104090u: goto label_104090;
            case 0x104094u: goto label_104094;
            case 0x104098u: goto label_104098;
            case 0x10409Cu: goto label_10409c;
            case 0x1040A0u: goto label_1040a0;
            case 0x1040A4u: goto label_1040a4;
            case 0x1040A8u: goto label_1040a8;
            case 0x1040ACu: goto label_1040ac;
            case 0x1040B0u: goto label_1040b0;
            case 0x1040B4u: goto label_1040b4;
            case 0x1040B8u: goto label_1040b8;
            case 0x1040BCu: goto label_1040bc;
            case 0x1040C0u: goto label_1040c0;
            case 0x1040C4u: goto label_1040c4;
            case 0x1040C8u: goto label_1040c8;
            case 0x1040CCu: goto label_1040cc;
            case 0x1040D0u: goto label_1040d0;
            case 0x1040D4u: goto label_1040d4;
            case 0x1040D8u: goto label_1040d8;
            case 0x1040DCu: goto label_1040dc;
            case 0x1040E0u: goto label_1040e0;
            case 0x1040E4u: goto label_1040e4;
            case 0x1040E8u: goto label_1040e8;
            case 0x1040ECu: goto label_1040ec;
            case 0x1040F0u: goto label_1040f0;
            case 0x1040F4u: goto label_1040f4;
            case 0x1040F8u: goto label_1040f8;
            case 0x1040FCu: goto label_1040fc;
            case 0x104100u: goto label_104100;
            case 0x104104u: goto label_104104;
            case 0x104108u: goto label_104108;
            case 0x10410Cu: goto label_10410c;
            case 0x104110u: goto label_104110;
            case 0x104114u: goto label_104114;
            case 0x104118u: goto label_104118;
            case 0x10411Cu: goto label_10411c;
            case 0x104120u: goto label_104120;
            case 0x104124u: goto label_104124;
            case 0x104128u: goto label_104128;
            case 0x10412Cu: goto label_10412c;
            case 0x104130u: goto label_104130;
            case 0x104134u: goto label_104134;
            case 0x104138u: goto label_104138;
            case 0x10413Cu: goto label_10413c;
            case 0x104140u: goto label_104140;
            case 0x104144u: goto label_104144;
            case 0x104148u: goto label_104148;
            case 0x10414Cu: goto label_10414c;
            case 0x104150u: goto label_104150;
            case 0x104154u: goto label_104154;
            case 0x104158u: goto label_104158;
            case 0x10415Cu: goto label_10415c;
            case 0x104160u: goto label_104160;
            case 0x104164u: goto label_104164;
            case 0x104168u: goto label_104168;
            case 0x10416Cu: goto label_10416c;
            case 0x104170u: goto label_104170;
            case 0x104174u: goto label_104174;
            case 0x104178u: goto label_104178;
            case 0x10417Cu: goto label_10417c;
            case 0x104180u: goto label_104180;
            case 0x104184u: goto label_104184;
            case 0x104188u: goto label_104188;
            case 0x10418Cu: goto label_10418c;
            case 0x104190u: goto label_104190;
            case 0x104194u: goto label_104194;
            case 0x104198u: goto label_104198;
            case 0x10419Cu: goto label_10419c;
            case 0x1041A0u: goto label_1041a0;
            case 0x1041A4u: goto label_1041a4;
            case 0x1041A8u: goto label_1041a8;
            case 0x1041ACu: goto label_1041ac;
            case 0x1041B0u: goto label_1041b0;
            case 0x1041B4u: goto label_1041b4;
            case 0x1041B8u: goto label_1041b8;
            case 0x1041BCu: goto label_1041bc;
            case 0x1041C0u: goto label_1041c0;
            case 0x1041C4u: goto label_1041c4;
            case 0x1041C8u: goto label_1041c8;
            case 0x1041CCu: goto label_1041cc;
            case 0x1041D0u: goto label_1041d0;
            case 0x1041D4u: goto label_1041d4;
            case 0x1041D8u: goto label_1041d8;
            case 0x1041DCu: goto label_1041dc;
            case 0x1041E0u: goto label_1041e0;
            case 0x1041E4u: goto label_1041e4;
            case 0x1041E8u: goto label_1041e8;
            case 0x1041ECu: goto label_1041ec;
            case 0x1041F0u: goto label_1041f0;
            case 0x1041F4u: goto label_1041f4;
            case 0x1041F8u: goto label_1041f8;
            case 0x1041FCu: goto label_1041fc;
            case 0x104200u: goto label_104200;
            case 0x104204u: goto label_104204;
            case 0x104208u: goto label_104208;
            case 0x10420Cu: goto label_10420c;
            case 0x104210u: goto label_104210;
            case 0x104214u: goto label_104214;
            case 0x104218u: goto label_104218;
            case 0x10421Cu: goto label_10421c;
            case 0x104220u: goto label_104220;
            case 0x104224u: goto label_104224;
            case 0x104228u: goto label_104228;
            case 0x10422Cu: goto label_10422c;
            case 0x104230u: goto label_104230;
            case 0x104234u: goto label_104234;
            case 0x104238u: goto label_104238;
            case 0x10423Cu: goto label_10423c;
            case 0x104240u: goto label_104240;
            case 0x104244u: goto label_104244;
            case 0x104248u: goto label_104248;
            case 0x10424Cu: goto label_10424c;
            case 0x104250u: goto label_104250;
            case 0x104254u: goto label_104254;
            case 0x104258u: goto label_104258;
            case 0x10425Cu: goto label_10425c;
            case 0x104260u: goto label_104260;
            case 0x104264u: goto label_104264;
            case 0x104268u: goto label_104268;
            case 0x10426Cu: goto label_10426c;
            case 0x104270u: goto label_104270;
            case 0x104274u: goto label_104274;
            case 0x104278u: goto label_104278;
            case 0x10427Cu: goto label_10427c;
            case 0x104280u: goto label_104280;
            case 0x104284u: goto label_104284;
            case 0x104288u: goto label_104288;
            case 0x10428Cu: goto label_10428c;
            case 0x104290u: goto label_104290;
            case 0x104294u: goto label_104294;
            case 0x104298u: goto label_104298;
            case 0x10429Cu: goto label_10429c;
            case 0x1042A0u: goto label_1042a0;
            case 0x1042A4u: goto label_1042a4;
            case 0x1042A8u: goto label_1042a8;
            case 0x1042ACu: goto label_1042ac;
            case 0x1042B0u: goto label_1042b0;
            case 0x1042B4u: goto label_1042b4;
            case 0x1042B8u: goto label_1042b8;
            case 0x1042BCu: goto label_1042bc;
            case 0x1042C0u: goto label_1042c0;
            case 0x1042C4u: goto label_1042c4;
            case 0x1042C8u: goto label_1042c8;
            case 0x1042CCu: goto label_1042cc;
            case 0x1042D0u: goto label_1042d0;
            case 0x1042D4u: goto label_1042d4;
            case 0x1042D8u: goto label_1042d8;
            case 0x1042DCu: goto label_1042dc;
            case 0x1042E0u: goto label_1042e0;
            case 0x1042E4u: goto label_1042e4;
            case 0x1042E8u: goto label_1042e8;
            case 0x1042ECu: goto label_1042ec;
            case 0x1042F0u: goto label_1042f0;
            case 0x1042F4u: goto label_1042f4;
            case 0x1042F8u: goto label_1042f8;
            case 0x1042FCu: goto label_1042fc;
            case 0x104300u: goto label_104300;
            case 0x104304u: goto label_104304;
            case 0x104308u: goto label_104308;
            case 0x10430Cu: goto label_10430c;
            case 0x104310u: goto label_104310;
            case 0x104314u: goto label_104314;
            case 0x104318u: goto label_104318;
            case 0x10431Cu: goto label_10431c;
            case 0x104320u: goto label_104320;
            case 0x104324u: goto label_104324;
            case 0x104328u: goto label_104328;
            case 0x10432Cu: goto label_10432c;
            case 0x104330u: goto label_104330;
            case 0x104334u: goto label_104334;
            case 0x104338u: goto label_104338;
            case 0x10433Cu: goto label_10433c;
            case 0x104340u: goto label_104340;
            case 0x104344u: goto label_104344;
            case 0x104348u: goto label_104348;
            case 0x10434Cu: goto label_10434c;
            case 0x104350u: goto label_104350;
            case 0x104354u: goto label_104354;
            case 0x104358u: goto label_104358;
            case 0x10435Cu: goto label_10435c;
            case 0x104360u: goto label_104360;
            case 0x104364u: goto label_104364;
            case 0x104368u: goto label_104368;
            case 0x10436Cu: goto label_10436c;
            case 0x104370u: goto label_104370;
            case 0x104374u: goto label_104374;
            case 0x104378u: goto label_104378;
            case 0x10437Cu: goto label_10437c;
            case 0x104380u: goto label_104380;
            case 0x104384u: goto label_104384;
            case 0x104388u: goto label_104388;
            case 0x10438Cu: goto label_10438c;
            case 0x104390u: goto label_104390;
            case 0x104394u: goto label_104394;
            case 0x104398u: goto label_104398;
            case 0x10439Cu: goto label_10439c;
            case 0x1043A0u: goto label_1043a0;
            case 0x1043A4u: goto label_1043a4;
            case 0x1043A8u: goto label_1043a8;
            case 0x1043ACu: goto label_1043ac;
            case 0x1043B0u: goto label_1043b0;
            case 0x1043B4u: goto label_1043b4;
            case 0x1043B8u: goto label_1043b8;
            case 0x1043BCu: goto label_1043bc;
            case 0x1043C0u: goto label_1043c0;
            case 0x1043C4u: goto label_1043c4;
            case 0x1043C8u: goto label_1043c8;
            case 0x1043CCu: goto label_1043cc;
            case 0x1043D0u: goto label_1043d0;
            case 0x1043D4u: goto label_1043d4;
            case 0x1043D8u: goto label_1043d8;
            case 0x1043DCu: goto label_1043dc;
            case 0x1043E0u: goto label_1043e0;
            case 0x1043E4u: goto label_1043e4;
            case 0x1043E8u: goto label_1043e8;
            case 0x1043ECu: goto label_1043ec;
            case 0x1043F0u: goto label_1043f0;
            case 0x1043F4u: goto label_1043f4;
            case 0x1043F8u: goto label_1043f8;
            case 0x1043FCu: goto label_1043fc;
            case 0x104400u: goto label_104400;
            case 0x104404u: goto label_104404;
            case 0x104408u: goto label_104408;
            case 0x10440Cu: goto label_10440c;
            case 0x104410u: goto label_104410;
            case 0x104414u: goto label_104414;
            case 0x104418u: goto label_104418;
            case 0x10441Cu: goto label_10441c;
            case 0x104420u: goto label_104420;
            case 0x104424u: goto label_104424;
            case 0x104428u: goto label_104428;
            case 0x10442Cu: goto label_10442c;
            case 0x104430u: goto label_104430;
            case 0x104434u: goto label_104434;
            case 0x104438u: goto label_104438;
            case 0x10443Cu: goto label_10443c;
            case 0x104440u: goto label_104440;
            case 0x104444u: goto label_104444;
            case 0x104448u: goto label_104448;
            case 0x10444Cu: goto label_10444c;
            case 0x104450u: goto label_104450;
            case 0x104454u: goto label_104454;
            case 0x104458u: goto label_104458;
            case 0x10445Cu: goto label_10445c;
            case 0x104460u: goto label_104460;
            case 0x104464u: goto label_104464;
            case 0x104468u: goto label_104468;
            case 0x10446Cu: goto label_10446c;
            case 0x104470u: goto label_104470;
            case 0x104474u: goto label_104474;
            case 0x104478u: goto label_104478;
            case 0x10447Cu: goto label_10447c;
            case 0x104480u: goto label_104480;
            case 0x104484u: goto label_104484;
            case 0x104488u: goto label_104488;
            case 0x10448Cu: goto label_10448c;
            case 0x104490u: goto label_104490;
            case 0x104494u: goto label_104494;
            case 0x104498u: goto label_104498;
            case 0x10449Cu: goto label_10449c;
            case 0x1044A0u: goto label_1044a0;
            case 0x1044A4u: goto label_1044a4;
            case 0x1044A8u: goto label_1044a8;
            case 0x1044ACu: goto label_1044ac;
            case 0x1044B0u: goto label_1044b0;
            case 0x1044B4u: goto label_1044b4;
            case 0x1044B8u: goto label_1044b8;
            case 0x1044BCu: goto label_1044bc;
            case 0x1044C0u: goto label_1044c0;
            case 0x1044C4u: goto label_1044c4;
            case 0x1044C8u: goto label_1044c8;
            case 0x1044CCu: goto label_1044cc;
            case 0x1044D0u: goto label_1044d0;
            case 0x1044D4u: goto label_1044d4;
            case 0x1044D8u: goto label_1044d8;
            case 0x1044DCu: goto label_1044dc;
            case 0x1044E0u: goto label_1044e0;
            case 0x1044E4u: goto label_1044e4;
            case 0x1044E8u: goto label_1044e8;
            case 0x1044ECu: goto label_1044ec;
            case 0x1044F0u: goto label_1044f0;
            case 0x1044F4u: goto label_1044f4;
            case 0x1044F8u: goto label_1044f8;
            case 0x1044FCu: goto label_1044fc;
            case 0x104500u: goto label_104500;
            case 0x104504u: goto label_104504;
            case 0x104508u: goto label_104508;
            case 0x10450Cu: goto label_10450c;
            case 0x104510u: goto label_104510;
            case 0x104514u: goto label_104514;
            case 0x104518u: goto label_104518;
            case 0x10451Cu: goto label_10451c;
            case 0x104520u: goto label_104520;
            case 0x104524u: goto label_104524;
            case 0x104528u: goto label_104528;
            case 0x10452Cu: goto label_10452c;
            case 0x104530u: goto label_104530;
            case 0x104534u: goto label_104534;
            case 0x104538u: goto label_104538;
            case 0x10453Cu: goto label_10453c;
            case 0x104540u: goto label_104540;
            case 0x104544u: goto label_104544;
            case 0x104548u: goto label_104548;
            case 0x10454Cu: goto label_10454c;
            case 0x104550u: goto label_104550;
            case 0x104554u: goto label_104554;
            case 0x104558u: goto label_104558;
            case 0x10455Cu: goto label_10455c;
            case 0x104560u: goto label_104560;
            case 0x104564u: goto label_104564;
            case 0x104568u: goto label_104568;
            case 0x10456Cu: goto label_10456c;
            case 0x104570u: goto label_104570;
            case 0x104574u: goto label_104574;
            case 0x104578u: goto label_104578;
            case 0x10457Cu: goto label_10457c;
            case 0x104580u: goto label_104580;
            case 0x104584u: goto label_104584;
            case 0x104588u: goto label_104588;
            case 0x10458Cu: goto label_10458c;
            case 0x104590u: goto label_104590;
            case 0x104594u: goto label_104594;
            case 0x104598u: goto label_104598;
            case 0x10459Cu: goto label_10459c;
            case 0x1045A0u: goto label_1045a0;
            case 0x1045A4u: goto label_1045a4;
            case 0x1045A8u: goto label_1045a8;
            case 0x1045ACu: goto label_1045ac;
            case 0x1045B0u: goto label_1045b0;
            case 0x1045B4u: goto label_1045b4;
            case 0x1045B8u: goto label_1045b8;
            case 0x1045BCu: goto label_1045bc;
            case 0x1045C0u: goto label_1045c0;
            case 0x1045C4u: goto label_1045c4;
            case 0x1045C8u: goto label_1045c8;
            case 0x1045CCu: goto label_1045cc;
            case 0x1045D0u: goto label_1045d0;
            case 0x1045D4u: goto label_1045d4;
            case 0x1045D8u: goto label_1045d8;
            case 0x1045DCu: goto label_1045dc;
            case 0x1045E0u: goto label_1045e0;
            case 0x1045E4u: goto label_1045e4;
            case 0x1045E8u: goto label_1045e8;
            case 0x1045ECu: goto label_1045ec;
            case 0x1045F0u: goto label_1045f0;
            case 0x1045F4u: goto label_1045f4;
            case 0x1045F8u: goto label_1045f8;
            case 0x1045FCu: goto label_1045fc;
            case 0x104600u: goto label_104600;
            case 0x104604u: goto label_104604;
            case 0x104608u: goto label_104608;
            case 0x10460Cu: goto label_10460c;
            case 0x104610u: goto label_104610;
            case 0x104614u: goto label_104614;
            case 0x104618u: goto label_104618;
            case 0x10461Cu: goto label_10461c;
            case 0x104620u: goto label_104620;
            case 0x104624u: goto label_104624;
            case 0x104628u: goto label_104628;
            case 0x10462Cu: goto label_10462c;
            case 0x104630u: goto label_104630;
            case 0x104634u: goto label_104634;
            case 0x104638u: goto label_104638;
            case 0x10463Cu: goto label_10463c;
            case 0x104640u: goto label_104640;
            case 0x104644u: goto label_104644;
            case 0x104648u: goto label_104648;
            case 0x10464Cu: goto label_10464c;
            case 0x104650u: goto label_104650;
            case 0x104654u: goto label_104654;
            case 0x104658u: goto label_104658;
            case 0x10465Cu: goto label_10465c;
            case 0x104660u: goto label_104660;
            case 0x104664u: goto label_104664;
            case 0x104668u: goto label_104668;
            case 0x10466Cu: goto label_10466c;
            case 0x104670u: goto label_104670;
            case 0x104674u: goto label_104674;
            case 0x104678u: goto label_104678;
            case 0x10467Cu: goto label_10467c;
            case 0x104680u: goto label_104680;
            case 0x104684u: goto label_104684;
            case 0x104688u: goto label_104688;
            case 0x10468Cu: goto label_10468c;
            case 0x104690u: goto label_104690;
            case 0x104694u: goto label_104694;
            case 0x104698u: goto label_104698;
            case 0x10469Cu: goto label_10469c;
            case 0x1046A0u: goto label_1046a0;
            case 0x1046A4u: goto label_1046a4;
            case 0x1046A8u: goto label_1046a8;
            case 0x1046ACu: goto label_1046ac;
            case 0x1046B0u: goto label_1046b0;
            case 0x1046B4u: goto label_1046b4;
            case 0x1046B8u: goto label_1046b8;
            case 0x1046BCu: goto label_1046bc;
            case 0x1046C0u: goto label_1046c0;
            case 0x1046C4u: goto label_1046c4;
            case 0x1046C8u: goto label_1046c8;
            case 0x1046CCu: goto label_1046cc;
            case 0x1046D0u: goto label_1046d0;
            case 0x1046D4u: goto label_1046d4;
            case 0x1046D8u: goto label_1046d8;
            case 0x1046DCu: goto label_1046dc;
            case 0x1046E0u: goto label_1046e0;
            case 0x1046E4u: goto label_1046e4;
            case 0x1046E8u: goto label_1046e8;
            case 0x1046ECu: goto label_1046ec;
            case 0x1046F0u: goto label_1046f0;
            case 0x1046F4u: goto label_1046f4;
            case 0x1046F8u: goto label_1046f8;
            case 0x1046FCu: goto label_1046fc;
            case 0x104700u: goto label_104700;
            case 0x104704u: goto label_104704;
            case 0x104708u: goto label_104708;
            case 0x10470Cu: goto label_10470c;
            case 0x104710u: goto label_104710;
            case 0x104714u: goto label_104714;
            case 0x104718u: goto label_104718;
            case 0x10471Cu: goto label_10471c;
            case 0x104720u: goto label_104720;
            case 0x104724u: goto label_104724;
            case 0x104728u: goto label_104728;
            case 0x10472Cu: goto label_10472c;
            case 0x104730u: goto label_104730;
            case 0x104734u: goto label_104734;
            case 0x104738u: goto label_104738;
            case 0x10473Cu: goto label_10473c;
            case 0x104740u: goto label_104740;
            case 0x104744u: goto label_104744;
            case 0x104748u: goto label_104748;
            case 0x10474Cu: goto label_10474c;
            case 0x104750u: goto label_104750;
            case 0x104754u: goto label_104754;
            case 0x104758u: goto label_104758;
            case 0x10475Cu: goto label_10475c;
            case 0x104760u: goto label_104760;
            case 0x104764u: goto label_104764;
            case 0x104768u: goto label_104768;
            case 0x10476Cu: goto label_10476c;
            case 0x104770u: goto label_104770;
            case 0x104774u: goto label_104774;
            case 0x104778u: goto label_104778;
            case 0x10477Cu: goto label_10477c;
            case 0x104780u: goto label_104780;
            case 0x104784u: goto label_104784;
            case 0x104788u: goto label_104788;
            case 0x10478Cu: goto label_10478c;
            case 0x104790u: goto label_104790;
            case 0x104794u: goto label_104794;
            case 0x104798u: goto label_104798;
            case 0x10479Cu: goto label_10479c;
            case 0x1047A0u: goto label_1047a0;
            case 0x1047A4u: goto label_1047a4;
            case 0x1047A8u: goto label_1047a8;
            case 0x1047ACu: goto label_1047ac;
            case 0x1047B0u: goto label_1047b0;
            case 0x1047B4u: goto label_1047b4;
            case 0x1047B8u: goto label_1047b8;
            case 0x1047BCu: goto label_1047bc;
            case 0x1047C0u: goto label_1047c0;
            case 0x1047C4u: goto label_1047c4;
            case 0x1047C8u: goto label_1047c8;
            case 0x1047CCu: goto label_1047cc;
            case 0x1047D0u: goto label_1047d0;
            case 0x1047D4u: goto label_1047d4;
            case 0x1047D8u: goto label_1047d8;
            case 0x1047DCu: goto label_1047dc;
            case 0x1047E0u: goto label_1047e0;
            case 0x1047E4u: goto label_1047e4;
            case 0x1047E8u: goto label_1047e8;
            case 0x1047ECu: goto label_1047ec;
            case 0x1047F0u: goto label_1047f0;
            case 0x1047F4u: goto label_1047f4;
            case 0x1047F8u: goto label_1047f8;
            case 0x1047FCu: goto label_1047fc;
            case 0x104800u: goto label_104800;
            case 0x104804u: goto label_104804;
            case 0x104808u: goto label_104808;
            case 0x10480Cu: goto label_10480c;
            case 0x104810u: goto label_104810;
            case 0x104814u: goto label_104814;
            case 0x104818u: goto label_104818;
            case 0x10481Cu: goto label_10481c;
            case 0x104820u: goto label_104820;
            case 0x104824u: goto label_104824;
            case 0x104828u: goto label_104828;
            case 0x10482Cu: goto label_10482c;
            case 0x104830u: goto label_104830;
            case 0x104834u: goto label_104834;
            case 0x104838u: goto label_104838;
            case 0x10483Cu: goto label_10483c;
            case 0x104840u: goto label_104840;
            case 0x104844u: goto label_104844;
            case 0x104848u: goto label_104848;
            case 0x10484Cu: goto label_10484c;
            case 0x104850u: goto label_104850;
            case 0x104854u: goto label_104854;
            case 0x104858u: goto label_104858;
            case 0x10485Cu: goto label_10485c;
            case 0x104860u: goto label_104860;
            case 0x104864u: goto label_104864;
            case 0x104868u: goto label_104868;
            case 0x10486Cu: goto label_10486c;
            case 0x104870u: goto label_104870;
            case 0x104874u: goto label_104874;
            case 0x104878u: goto label_104878;
            case 0x10487Cu: goto label_10487c;
            case 0x104880u: goto label_104880;
            case 0x104884u: goto label_104884;
            case 0x104888u: goto label_104888;
            case 0x10488Cu: goto label_10488c;
            case 0x104890u: goto label_104890;
            case 0x104894u: goto label_104894;
            case 0x104898u: goto label_104898;
            case 0x10489Cu: goto label_10489c;
            case 0x1048A0u: goto label_1048a0;
            case 0x1048A4u: goto label_1048a4;
            case 0x1048A8u: goto label_1048a8;
            case 0x1048ACu: goto label_1048ac;
            case 0x1048B0u: goto label_1048b0;
            case 0x1048B4u: goto label_1048b4;
            case 0x1048B8u: goto label_1048b8;
            case 0x1048BCu: goto label_1048bc;
            case 0x1048C0u: goto label_1048c0;
            case 0x1048C4u: goto label_1048c4;
            case 0x1048C8u: goto label_1048c8;
            case 0x1048CCu: goto label_1048cc;
            case 0x1048D0u: goto label_1048d0;
            case 0x1048D4u: goto label_1048d4;
            case 0x1048D8u: goto label_1048d8;
            case 0x1048DCu: goto label_1048dc;
            case 0x1048E0u: goto label_1048e0;
            case 0x1048E4u: goto label_1048e4;
            case 0x1048E8u: goto label_1048e8;
            case 0x1048ECu: goto label_1048ec;
            case 0x1048F0u: goto label_1048f0;
            case 0x1048F4u: goto label_1048f4;
            case 0x1048F8u: goto label_1048f8;
            case 0x1048FCu: goto label_1048fc;
            case 0x104900u: goto label_104900;
            case 0x104904u: goto label_104904;
            case 0x104908u: goto label_104908;
            case 0x10490Cu: goto label_10490c;
            case 0x104910u: goto label_104910;
            case 0x104914u: goto label_104914;
            case 0x104918u: goto label_104918;
            case 0x10491Cu: goto label_10491c;
            case 0x104920u: goto label_104920;
            case 0x104924u: goto label_104924;
            case 0x104928u: goto label_104928;
            case 0x10492Cu: goto label_10492c;
            case 0x104930u: goto label_104930;
            case 0x104934u: goto label_104934;
            case 0x104938u: goto label_104938;
            case 0x10493Cu: goto label_10493c;
            case 0x104940u: goto label_104940;
            case 0x104944u: goto label_104944;
            case 0x104948u: goto label_104948;
            case 0x10494Cu: goto label_10494c;
            case 0x104950u: goto label_104950;
            case 0x104954u: goto label_104954;
            case 0x104958u: goto label_104958;
            case 0x10495Cu: goto label_10495c;
            case 0x104960u: goto label_104960;
            case 0x104964u: goto label_104964;
            case 0x104968u: goto label_104968;
            case 0x10496Cu: goto label_10496c;
            case 0x104970u: goto label_104970;
            case 0x104974u: goto label_104974;
            case 0x104978u: goto label_104978;
            case 0x10497Cu: goto label_10497c;
            case 0x104980u: goto label_104980;
            case 0x104984u: goto label_104984;
            case 0x104988u: goto label_104988;
            case 0x10498Cu: goto label_10498c;
            case 0x104990u: goto label_104990;
            case 0x104994u: goto label_104994;
            case 0x104998u: goto label_104998;
            case 0x10499Cu: goto label_10499c;
            case 0x1049A0u: goto label_1049a0;
            case 0x1049A4u: goto label_1049a4;
            case 0x1049A8u: goto label_1049a8;
            case 0x1049ACu: goto label_1049ac;
            case 0x1049B0u: goto label_1049b0;
            case 0x1049B4u: goto label_1049b4;
            case 0x1049B8u: goto label_1049b8;
            case 0x1049BCu: goto label_1049bc;
            case 0x1049C0u: goto label_1049c0;
            case 0x1049C4u: goto label_1049c4;
            case 0x1049C8u: goto label_1049c8;
            case 0x1049CCu: goto label_1049cc;
            case 0x1049D0u: goto label_1049d0;
            case 0x1049D4u: goto label_1049d4;
            case 0x1049D8u: goto label_1049d8;
            case 0x1049DCu: goto label_1049dc;
            case 0x1049E0u: goto label_1049e0;
            case 0x1049E4u: goto label_1049e4;
            case 0x1049E8u: goto label_1049e8;
            case 0x1049ECu: goto label_1049ec;
            case 0x1049F0u: goto label_1049f0;
            case 0x1049F4u: goto label_1049f4;
            case 0x1049F8u: goto label_1049f8;
            case 0x1049FCu: goto label_1049fc;
            case 0x104A00u: goto label_104a00;
            case 0x104A04u: goto label_104a04;
            case 0x104A08u: goto label_104a08;
            case 0x104A0Cu: goto label_104a0c;
            case 0x104A10u: goto label_104a10;
            case 0x104A14u: goto label_104a14;
            case 0x104A18u: goto label_104a18;
            case 0x104A1Cu: goto label_104a1c;
            case 0x104A20u: goto label_104a20;
            case 0x104A24u: goto label_104a24;
            case 0x104A28u: goto label_104a28;
            case 0x104A2Cu: goto label_104a2c;
            case 0x104A30u: goto label_104a30;
            case 0x104A34u: goto label_104a34;
            case 0x104A38u: goto label_104a38;
            case 0x104A3Cu: goto label_104a3c;
            case 0x104A40u: goto label_104a40;
            case 0x104A44u: goto label_104a44;
            case 0x104A48u: goto label_104a48;
            case 0x104A4Cu: goto label_104a4c;
            case 0x104A50u: goto label_104a50;
            case 0x104A54u: goto label_104a54;
            case 0x104A58u: goto label_104a58;
            case 0x104A5Cu: goto label_104a5c;
            case 0x104A60u: goto label_104a60;
            case 0x104A64u: goto label_104a64;
            case 0x104A68u: goto label_104a68;
            case 0x104A6Cu: goto label_104a6c;
            case 0x104A70u: goto label_104a70;
            case 0x104A74u: goto label_104a74;
            case 0x104A78u: goto label_104a78;
            case 0x104A7Cu: goto label_104a7c;
            case 0x104A80u: goto label_104a80;
            case 0x104A84u: goto label_104a84;
            case 0x104A88u: goto label_104a88;
            case 0x104A8Cu: goto label_104a8c;
            case 0x104A90u: goto label_104a90;
            case 0x104A94u: goto label_104a94;
            case 0x104A98u: goto label_104a98;
            case 0x104A9Cu: goto label_104a9c;
            case 0x104AA0u: goto label_104aa0;
            case 0x104AA4u: goto label_104aa4;
            case 0x104AA8u: goto label_104aa8;
            case 0x104AACu: goto label_104aac;
            case 0x104AB0u: goto label_104ab0;
            case 0x104AB4u: goto label_104ab4;
            case 0x104AB8u: goto label_104ab8;
            case 0x104ABCu: goto label_104abc;
            case 0x104AC0u: goto label_104ac0;
            case 0x104AC4u: goto label_104ac4;
            case 0x104AC8u: goto label_104ac8;
            case 0x104ACCu: goto label_104acc;
            case 0x104AD0u: goto label_104ad0;
            case 0x104AD4u: goto label_104ad4;
            case 0x104AD8u: goto label_104ad8;
            case 0x104ADCu: goto label_104adc;
            case 0x104AE0u: goto label_104ae0;
            case 0x104AE4u: goto label_104ae4;
            case 0x104AE8u: goto label_104ae8;
            case 0x104AECu: goto label_104aec;
            case 0x104AF0u: goto label_104af0;
            case 0x104AF4u: goto label_104af4;
            case 0x104AF8u: goto label_104af8;
            case 0x104AFCu: goto label_104afc;
            case 0x104B00u: goto label_104b00;
            case 0x104B04u: goto label_104b04;
            case 0x104B08u: goto label_104b08;
            case 0x104B0Cu: goto label_104b0c;
            case 0x104B10u: goto label_104b10;
            case 0x104B14u: goto label_104b14;
            case 0x104B18u: goto label_104b18;
            case 0x104B1Cu: goto label_104b1c;
            case 0x104B20u: goto label_104b20;
            case 0x104B24u: goto label_104b24;
            case 0x104B28u: goto label_104b28;
            case 0x104B2Cu: goto label_104b2c;
            case 0x104B30u: goto label_104b30;
            case 0x104B34u: goto label_104b34;
            case 0x104B38u: goto label_104b38;
            case 0x104B3Cu: goto label_104b3c;
            case 0x104B40u: goto label_104b40;
            case 0x104B44u: goto label_104b44;
            case 0x104B48u: goto label_104b48;
            case 0x104B4Cu: goto label_104b4c;
            case 0x104B50u: goto label_104b50;
            case 0x104B54u: goto label_104b54;
            case 0x104B58u: goto label_104b58;
            case 0x104B5Cu: goto label_104b5c;
            case 0x104B60u: goto label_104b60;
            case 0x104B64u: goto label_104b64;
            case 0x104B68u: goto label_104b68;
            case 0x104B6Cu: goto label_104b6c;
            case 0x104B70u: goto label_104b70;
            case 0x104B74u: goto label_104b74;
            case 0x104B78u: goto label_104b78;
            case 0x104B7Cu: goto label_104b7c;
            case 0x104B80u: goto label_104b80;
            case 0x104B84u: goto label_104b84;
            case 0x104B88u: goto label_104b88;
            case 0x104B8Cu: goto label_104b8c;
            case 0x104B90u: goto label_104b90;
            case 0x104B94u: goto label_104b94;
            case 0x104B98u: goto label_104b98;
            case 0x104B9Cu: goto label_104b9c;
            case 0x104BA0u: goto label_104ba0;
            case 0x104BA4u: goto label_104ba4;
            case 0x104BA8u: goto label_104ba8;
            case 0x104BACu: goto label_104bac;
            case 0x104BB0u: goto label_104bb0;
            case 0x104BB4u: goto label_104bb4;
            case 0x104BB8u: goto label_104bb8;
            case 0x104BBCu: goto label_104bbc;
            case 0x104BC0u: goto label_104bc0;
            case 0x104BC4u: goto label_104bc4;
            case 0x104BC8u: goto label_104bc8;
            case 0x104BCCu: goto label_104bcc;
            case 0x104BD0u: goto label_104bd0;
            case 0x104BD4u: goto label_104bd4;
            case 0x104BD8u: goto label_104bd8;
            case 0x104BDCu: goto label_104bdc;
            case 0x104BE0u: goto label_104be0;
            case 0x104BE4u: goto label_104be4;
            case 0x104BE8u: goto label_104be8;
            case 0x104BECu: goto label_104bec;
            case 0x104BF0u: goto label_104bf0;
            case 0x104BF4u: goto label_104bf4;
            case 0x104BF8u: goto label_104bf8;
            case 0x104BFCu: goto label_104bfc;
            case 0x104C00u: goto label_104c00;
            case 0x104C04u: goto label_104c04;
            case 0x104C08u: goto label_104c08;
            case 0x104C0Cu: goto label_104c0c;
            case 0x104C10u: goto label_104c10;
            case 0x104C14u: goto label_104c14;
            case 0x104C18u: goto label_104c18;
            case 0x104C1Cu: goto label_104c1c;
            case 0x104C20u: goto label_104c20;
            case 0x104C24u: goto label_104c24;
            case 0x104C28u: goto label_104c28;
            case 0x104C2Cu: goto label_104c2c;
            case 0x104C30u: goto label_104c30;
            case 0x104C34u: goto label_104c34;
            case 0x104C38u: goto label_104c38;
            case 0x104C3Cu: goto label_104c3c;
            case 0x104C40u: goto label_104c40;
            case 0x104C44u: goto label_104c44;
            case 0x104C48u: goto label_104c48;
            case 0x104C4Cu: goto label_104c4c;
            case 0x104C50u: goto label_104c50;
            case 0x104C54u: goto label_104c54;
            case 0x104C58u: goto label_104c58;
            case 0x104C5Cu: goto label_104c5c;
            case 0x104C60u: goto label_104c60;
            case 0x104C64u: goto label_104c64;
            case 0x104C68u: goto label_104c68;
            case 0x104C6Cu: goto label_104c6c;
            case 0x104C70u: goto label_104c70;
            case 0x104C74u: goto label_104c74;
            case 0x104C78u: goto label_104c78;
            case 0x104C7Cu: goto label_104c7c;
            case 0x104C80u: goto label_104c80;
            case 0x104C84u: goto label_104c84;
            case 0x104C88u: goto label_104c88;
            case 0x104C8Cu: goto label_104c8c;
            case 0x104C90u: goto label_104c90;
            case 0x104C94u: goto label_104c94;
            case 0x104C98u: goto label_104c98;
            case 0x104C9Cu: goto label_104c9c;
            case 0x104CA0u: goto label_104ca0;
            case 0x104CA4u: goto label_104ca4;
            case 0x104CA8u: goto label_104ca8;
            case 0x104CACu: goto label_104cac;
            case 0x104CB0u: goto label_104cb0;
            case 0x104CB4u: goto label_104cb4;
            case 0x104CB8u: goto label_104cb8;
            case 0x104CBCu: goto label_104cbc;
            case 0x104CC0u: goto label_104cc0;
            case 0x104CC4u: goto label_104cc4;
            case 0x104CC8u: goto label_104cc8;
            case 0x104CCCu: goto label_104ccc;
            case 0x104CD0u: goto label_104cd0;
            case 0x104CD4u: goto label_104cd4;
            case 0x104CD8u: goto label_104cd8;
            case 0x104CDCu: goto label_104cdc;
            case 0x104CE0u: goto label_104ce0;
            case 0x104CE4u: goto label_104ce4;
            case 0x104CE8u: goto label_104ce8;
            case 0x104CECu: goto label_104cec;
            case 0x104CF0u: goto label_104cf0;
            case 0x104CF4u: goto label_104cf4;
            case 0x104CF8u: goto label_104cf8;
            case 0x104CFCu: goto label_104cfc;
            case 0x104D00u: goto label_104d00;
            case 0x104D04u: goto label_104d04;
            case 0x104D08u: goto label_104d08;
            case 0x104D0Cu: goto label_104d0c;
            case 0x104D10u: goto label_104d10;
            case 0x104D14u: goto label_104d14;
            case 0x104D18u: goto label_104d18;
            case 0x104D1Cu: goto label_104d1c;
            case 0x104D20u: goto label_104d20;
            case 0x104D24u: goto label_104d24;
            case 0x104D28u: goto label_104d28;
            case 0x104D2Cu: goto label_104d2c;
            case 0x104D30u: goto label_104d30;
            case 0x104D34u: goto label_104d34;
            case 0x104D38u: goto label_104d38;
            case 0x104D3Cu: goto label_104d3c;
            case 0x104D40u: goto label_104d40;
            case 0x104D44u: goto label_104d44;
            case 0x104D48u: goto label_104d48;
            case 0x104D4Cu: goto label_104d4c;
            case 0x104D50u: goto label_104d50;
            case 0x104D54u: goto label_104d54;
            case 0x104D58u: goto label_104d58;
            case 0x104D5Cu: goto label_104d5c;
            case 0x104D60u: goto label_104d60;
            case 0x104D64u: goto label_104d64;
            case 0x104D68u: goto label_104d68;
            case 0x104D6Cu: goto label_104d6c;
            case 0x104D70u: goto label_104d70;
            case 0x104D74u: goto label_104d74;
            case 0x104D78u: goto label_104d78;
            case 0x104D7Cu: goto label_104d7c;
            case 0x104D80u: goto label_104d80;
            case 0x104D84u: goto label_104d84;
            case 0x104D88u: goto label_104d88;
            case 0x104D8Cu: goto label_104d8c;
            case 0x104D90u: goto label_104d90;
            case 0x104D94u: goto label_104d94;
            case 0x104D98u: goto label_104d98;
            case 0x104D9Cu: goto label_104d9c;
            case 0x104DA0u: goto label_104da0;
            case 0x104DA4u: goto label_104da4;
            case 0x104DA8u: goto label_104da8;
            case 0x104DACu: goto label_104dac;
            case 0x104DB0u: goto label_104db0;
            case 0x104DB4u: goto label_104db4;
            case 0x104DB8u: goto label_104db8;
            case 0x104DBCu: goto label_104dbc;
            case 0x104DC0u: goto label_104dc0;
            case 0x104DC4u: goto label_104dc4;
            case 0x104DC8u: goto label_104dc8;
            case 0x104DCCu: goto label_104dcc;
            case 0x104DD0u: goto label_104dd0;
            case 0x104DD4u: goto label_104dd4;
            case 0x104DD8u: goto label_104dd8;
            case 0x104DDCu: goto label_104ddc;
            case 0x104DE0u: goto label_104de0;
            case 0x104DE4u: goto label_104de4;
            case 0x104DE8u: goto label_104de8;
            case 0x104DECu: goto label_104dec;
            case 0x104DF0u: goto label_104df0;
            case 0x104DF4u: goto label_104df4;
            case 0x104DF8u: goto label_104df8;
            case 0x104DFCu: goto label_104dfc;
            case 0x104E00u: goto label_104e00;
            case 0x104E04u: goto label_104e04;
            case 0x104E08u: goto label_104e08;
            case 0x104E0Cu: goto label_104e0c;
            case 0x104E10u: goto label_104e10;
            case 0x104E14u: goto label_104e14;
            case 0x104E18u: goto label_104e18;
            case 0x104E1Cu: goto label_104e1c;
            case 0x104E20u: goto label_104e20;
            case 0x104E24u: goto label_104e24;
            case 0x104E28u: goto label_104e28;
            case 0x104E2Cu: goto label_104e2c;
            case 0x104E30u: goto label_104e30;
            case 0x104E34u: goto label_104e34;
            case 0x104E38u: goto label_104e38;
            case 0x104E3Cu: goto label_104e3c;
            case 0x104E40u: goto label_104e40;
            case 0x104E44u: goto label_104e44;
            case 0x104E48u: goto label_104e48;
            case 0x104E4Cu: goto label_104e4c;
            case 0x104E50u: goto label_104e50;
            case 0x104E54u: goto label_104e54;
            case 0x104E58u: goto label_104e58;
            case 0x104E5Cu: goto label_104e5c;
            case 0x104E60u: goto label_104e60;
            case 0x104E64u: goto label_104e64;
            case 0x104E68u: goto label_104e68;
            case 0x104E6Cu: goto label_104e6c;
            case 0x104E70u: goto label_104e70;
            case 0x104E74u: goto label_104e74;
            case 0x104E78u: goto label_104e78;
            case 0x104E7Cu: goto label_104e7c;
            case 0x104E80u: goto label_104e80;
            case 0x104E84u: goto label_104e84;
            case 0x104E88u: goto label_104e88;
            case 0x104E8Cu: goto label_104e8c;
            case 0x104E90u: goto label_104e90;
            case 0x104E94u: goto label_104e94;
            case 0x104E98u: goto label_104e98;
            case 0x104E9Cu: goto label_104e9c;
            case 0x104EA0u: goto label_104ea0;
            case 0x104EA4u: goto label_104ea4;
            case 0x104EA8u: goto label_104ea8;
            case 0x104EACu: goto label_104eac;
            case 0x104EB0u: goto label_104eb0;
            case 0x104EB4u: goto label_104eb4;
            case 0x104EB8u: goto label_104eb8;
            case 0x104EBCu: goto label_104ebc;
            case 0x104EC0u: goto label_104ec0;
            case 0x104EC4u: goto label_104ec4;
            case 0x104EC8u: goto label_104ec8;
            case 0x104ECCu: goto label_104ecc;
            case 0x104ED0u: goto label_104ed0;
            case 0x104ED4u: goto label_104ed4;
            case 0x104ED8u: goto label_104ed8;
            case 0x104EDCu: goto label_104edc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10409Cu;
label_10409c:
    // 0x10409c: 0x0
    ctx->pc = 0x10409cu;
    // NOP
label_1040a0:
    // 0x1040a0: 0x24130012
    ctx->pc = 0x1040a0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 18));
label_1040a4:
    // 0x1040a4: 0x10000015
label_1040a8:
    if (ctx->pc == 0x1040A8u) {
        ctx->pc = 0x1040A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x1040ACu;
        goto label_1040ac;
    }
    ctx->pc = 0x1040A4u;
    {
        const bool branch_taken_0x1040a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1040A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1040a4) {
            ctx->pc = 0x1040FCu;
            goto label_1040fc;
        }
    }
    ctx->pc = 0x1040ACu;
label_1040ac:
    // 0x1040ac: 0x0
    ctx->pc = 0x1040acu;
    // NOP
label_1040b0:
    // 0x1040b0: 0xafa00034
    ctx->pc = 0x1040b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1040b4:
    // 0x1040b4: 0x8fa3000c
    ctx->pc = 0x1040b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1040b8:
    // 0x1040b8: 0x24130001
    ctx->pc = 0x1040b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_1040bc:
    // 0x1040bc: 0x3102a
    ctx->pc = 0x1040bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
label_1040c0:
    // 0x1040c0: 0x62980b
    ctx->pc = 0x1040c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_1040c4:
    // 0x1040c4: 0xafb3000c
    ctx->pc = 0x1040c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
label_1040c8:
    // 0x1040c8: 0xafb30028
    ctx->pc = 0x1040c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_1040cc:
    // 0x1040cc: 0x1000000b
label_1040d0:
    if (ctx->pc == 0x1040D0u) {
        ctx->pc = 0x1040D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->pc = 0x1040D4u;
        goto label_1040d4;
    }
    ctx->pc = 0x1040CCu;
    {
        const bool branch_taken_0x1040cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1040D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        if (branch_taken_0x1040cc) {
            ctx->pc = 0x1040FCu;
            goto label_1040fc;
        }
    }
    ctx->pc = 0x1040D4u;
label_1040d4:
    // 0x1040d4: 0x0
    ctx->pc = 0x1040d4u;
    // NOP
label_1040d8:
    // 0x1040d8: 0xafa00034
    ctx->pc = 0x1040d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1040dc:
    // 0x1040dc: 0x8fa4000c
    ctx->pc = 0x1040dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1040e0:
    // 0x1040e0: 0x9e1021
    ctx->pc = 0x1040e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_1040e4:
    // 0x1040e4: 0x24040001
    ctx->pc = 0x1040e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1040e8:
    // 0x1040e8: 0x24530001
    ctx->pc = 0x1040e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1));
label_1040ec:
    // 0x1040ec: 0xafa20028
    ctx->pc = 0x1040ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1040f0:
    // 0x1040f0: 0x13182a
    ctx->pc = 0x1040f0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 19)));
label_1040f4:
    // 0x1040f4: 0xafb30020
    ctx->pc = 0x1040f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_1040f8:
    // 0x1040f8: 0x83980a
    ctx->pc = 0x1040f8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
label_1040fc:
    // 0x1040fc: 0x2e620018
    ctx->pc = 0x1040fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 24));
label_104100:
    // 0x104100: 0xaee00044
    ctx->pc = 0x104100u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
label_104104:
    // 0x104104: 0x1440000a
label_104108:
    if (ctx->pc == 0x104108u) {
        ctx->pc = 0x104108u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x10410Cu;
        goto label_10410c;
    }
    ctx->pc = 0x104104u;
    {
        const bool branch_taken_0x104104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104108u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x104104) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x10410Cu;
label_10410c:
    // 0x10410c: 0x182d
    ctx->pc = 0x10410cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104110:
    // 0x104110: 0x108040
    ctx->pc = 0x104110u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_104114:
    // 0x104114: 0x26020014
    ctx->pc = 0x104114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_104118:
    // 0x104118: 0x262102b
    ctx->pc = 0x104118u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_10411c:
    // 0x10411c: 0x0
    ctx->pc = 0x10411cu;
    // NOP
label_104120:
    // 0x104120: 0x0
    ctx->pc = 0x104120u;
    // NOP
label_104124:
    // 0x104124: 0x1040fffa
label_104128:
    if (ctx->pc == 0x104128u) {
        ctx->pc = 0x104128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x10412Cu;
        goto label_10412c;
    }
    ctx->pc = 0x104124u;
    {
        const bool branch_taken_0x104124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x104124) {
            ctx->pc = 0x104110u;
            goto label_104110;
        }
    }
    ctx->pc = 0x10412Cu;
label_10412c:
    // 0x10412c: 0xaee30044
    ctx->pc = 0x10412cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
label_104130:
    // 0x104130: 0x8ee50044
    ctx->pc = 0x104130u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_104134:
    // 0x104134: 0xc041f7e
label_104138:
    if (ctx->pc == 0x104138u) {
        ctx->pc = 0x104138u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10413Cu;
        goto label_10413c;
    }
    ctx->pc = 0x104134u;
    SET_GPR_U32(ctx, 31, 0x10413Cu);
    ctx->pc = 0x104138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10413Cu; }
    }
    if (ctx->pc != 0x10413Cu) { return; }
    ctx->pc = 0x10413Cu;
label_10413c:
    // 0x10413c: 0xafa20054
    ctx->pc = 0x10413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_104140:
    // 0x104140: 0x8fa30020
    ctx->pc = 0x104140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104144:
    // 0x104144: 0x8fa40054
    ctx->pc = 0x104144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_104148:
    // 0x104148: 0x2c62000f
    ctx->pc = 0x104148u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 15));
label_10414c:
    // 0x10414c: 0xaee40040
    ctx->pc = 0x10414cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
label_104150:
    // 0x104150: 0x10400113
label_104154:
    if (ctx->pc == 0x104154u) {
        ctx->pc = 0x104154u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x104158u;
        goto label_104158;
    }
    ctx->pc = 0x104150u;
    {
        const bool branch_taken_0x104150 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104154u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x104150) {
            ctx->pc = 0x1045A0u;
            goto label_1045a0;
        }
    }
    ctx->pc = 0x104158u;
label_104158:
    // 0x104158: 0x52200112
label_10415c:
    if (ctx->pc == 0x10415Cu) {
        ctx->pc = 0x10415Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x104160u;
        goto label_104160;
    }
    ctx->pc = 0x104158u;
    {
        const bool branch_taken_0x104158 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x104158) {
            ctx->pc = 0x10415Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1045A4u;
            goto label_1045a4;
        }
    }
    ctx->pc = 0x104160u;
label_104160:
    // 0x104160: 0x280b02d
    ctx->pc = 0x104160u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104164:
    // 0x104164: 0xafbe002c
    ctx->pc = 0x104164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
label_104168:
    // 0x104168: 0xafa30024
    ctx->pc = 0x104168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_10416c:
    // 0x10416c: 0x1bc00026
label_104170:
    if (ctx->pc == 0x104170u) {
        ctx->pc = 0x104170u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x104174u;
        goto label_104174;
    }
    ctx->pc = 0x10416Cu;
    {
        const bool branch_taken_0x10416c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x104170u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x10416c) {
            ctx->pc = 0x104208u;
            goto label_104208;
        }
    }
    ctx->pc = 0x104174u;
label_104174:
    // 0x104174: 0x33c2000f
    ctx->pc = 0x104174u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 15));
label_104178:
    // 0x104178: 0x1e8103
    ctx->pc = 0x104178u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
label_10417c:
    // 0x10417c: 0x210c0
    ctx->pc = 0x10417cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_104180:
    // 0x104180: 0x32030010
    ctx->pc = 0x104180u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 16));
label_104184:
    // 0x104184: 0x3c110023
    ctx->pc = 0x104184u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
label_104188:
    // 0x104188: 0x2228821
    ctx->pc = 0x104188u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_10418c:
    // 0x10418c: 0xde317928
    ctx->pc = 0x10418cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 31016)));
label_104190:
    // 0x104190: 0x10600007
label_104194:
    if (ctx->pc == 0x104194u) {
        ctx->pc = 0x104194u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        ctx->pc = 0x104198u;
        goto label_104198;
    }
    ctx->pc = 0x104190u;
    {
        const bool branch_taken_0x104190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x104194u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x104190) {
            ctx->pc = 0x1041B0u;
            goto label_1041b0;
        }
    }
    ctx->pc = 0x104198u;
label_104198:
    // 0x104198: 0x280202d
    ctx->pc = 0x104198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10419c:
    // 0x10419c: 0xdc457a10
    ctx->pc = 0x10419cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 31248)));
label_1041a0:
    // 0x1041a0: 0x3210000f
    ctx->pc = 0x1041a0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 15));
label_1041a4:
    // 0x1041a4: 0xc04480e
label_1041a8:
    if (ctx->pc == 0x1041A8u) {
        ctx->pc = 0x1041A8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1041ACu;
        goto label_1041ac;
    }
    ctx->pc = 0x1041A4u;
    SET_GPR_U32(ctx, 31, 0x1041ACu);
    ctx->pc = 0x1041A8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041ACu; }
    }
    if (ctx->pc != 0x1041ACu) { return; }
    ctx->pc = 0x1041ACu;
label_1041ac:
    // 0x1041ac: 0x40a02d
    ctx->pc = 0x1041acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1041b0:
    // 0x1041b0: 0x1200000e
label_1041b4:
    if (ctx->pc == 0x1041B4u) {
        ctx->pc = 0x1041B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        ctx->pc = 0x1041B8u;
        goto label_1041b8;
    }
    ctx->pc = 0x1041B0u;
    {
        const bool branch_taken_0x1041b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1041B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1041b0) {
            ctx->pc = 0x1041ECu;
            goto label_1041ec;
        }
    }
    ctx->pc = 0x1041B8u;
label_1041b8:
    // 0x1041b8: 0x245279f0
    ctx->pc = 0x1041b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 31216));
label_1041bc:
    // 0x1041bc: 0x0
    ctx->pc = 0x1041bcu;
    // NOP
label_1041c0:
    // 0x1041c0: 0x32020001
    ctx->pc = 0x1041c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_1041c4:
    // 0x1041c4: 0x50400007
label_1041c8:
    if (ctx->pc == 0x1041C8u) {
        ctx->pc = 0x1041C8u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->pc = 0x1041CCu;
        goto label_1041cc;
    }
    ctx->pc = 0x1041C4u;
    {
        const bool branch_taken_0x1041c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1041c4) {
            ctx->pc = 0x1041C8u;
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->pc = 0x1041E4u;
            goto label_1041e4;
        }
    }
    ctx->pc = 0x1041CCu;
label_1041cc:
    // 0x1041cc: 0xde450000
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1041d0:
    // 0x1041d0: 0x220202d
    ctx->pc = 0x1041d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1041d4:
    // 0x1041d4: 0xc04476c
label_1041d8:
    if (ctx->pc == 0x1041D8u) {
        ctx->pc = 0x1041D8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1041DCu;
        goto label_1041dc;
    }
    ctx->pc = 0x1041D4u;
    SET_GPR_U32(ctx, 31, 0x1041DCu);
    ctx->pc = 0x1041D8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041DCu; }
    }
    if (ctx->pc != 0x1041DCu) { return; }
    ctx->pc = 0x1041DCu;
label_1041dc:
    // 0x1041dc: 0x40882d
    ctx->pc = 0x1041dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1041e0:
    // 0x1041e0: 0x108043
    ctx->pc = 0x1041e0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1041e4:
    // 0x1041e4: 0x1600fff6
label_1041e8:
    if (ctx->pc == 0x1041E8u) {
        ctx->pc = 0x1041E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1041ECu;
        goto label_1041ec;
    }
    ctx->pc = 0x1041E4u;
    {
        const bool branch_taken_0x1041e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1041E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x1041e4) {
            ctx->pc = 0x1041C0u;
            goto label_1041c0;
        }
    }
    ctx->pc = 0x1041ECu;
label_1041ec:
    // 0x1041ec: 0x280202d
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1041f0:
    // 0x1041f0: 0x220282d
    ctx->pc = 0x1041f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1041f4:
    // 0x1041f4: 0xc04480e
label_1041f8:
    if (ctx->pc == 0x1041F8u) {
        ctx->pc = 0x1041FCu;
        goto label_1041fc;
    }
    ctx->pc = 0x1041F4u;
    SET_GPR_U32(ctx, 31, 0x1041FCu);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1041FCu; }
    }
    if (ctx->pc != 0x1041FCu) { return; }
    ctx->pc = 0x1041FCu;
label_1041fc:
    // 0x1041fc: 0x1000001b
label_104200:
    if (ctx->pc == 0x104200u) {
        ctx->pc = 0x104200u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104204u;
        goto label_104204;
    }
    ctx->pc = 0x1041FCu;
    {
        const bool branch_taken_0x1041fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104200u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1041fc) {
            ctx->pc = 0x10426Cu;
            goto label_10426c;
        }
    }
    ctx->pc = 0x104204u;
label_104204:
    // 0x104204: 0x0
    ctx->pc = 0x104204u;
    // NOP
label_104208:
    // 0x104208: 0x1e8823
    ctx->pc = 0x104208u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_10420c:
    // 0x10420c: 0x12200017
label_104210:
    if (ctx->pc == 0x104210u) {
        ctx->pc = 0x104210u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 15));
        ctx->pc = 0x104214u;
        goto label_104214;
    }
    ctx->pc = 0x10420Cu;
    {
        const bool branch_taken_0x10420c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x104210u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 15));
        if (branch_taken_0x10420c) {
            ctx->pc = 0x10426Cu;
            goto label_10426c;
        }
    }
    ctx->pc = 0x104214u;
label_104214:
    // 0x104214: 0x280282d
    ctx->pc = 0x104214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104218:
    // 0x104218: 0x210c0
    ctx->pc = 0x104218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_10421c:
    // 0x10421c: 0x3c040023
    ctx->pc = 0x10421cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_104220:
    // 0x104220: 0x822021
    ctx->pc = 0x104220u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_104224:
    // 0x104224: 0xdc847928
    ctx->pc = 0x104224u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 31016)));
label_104228:
    // 0x104228: 0xc04476c
label_10422c:
    if (ctx->pc == 0x10422Cu) {
        ctx->pc = 0x10422Cu;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->pc = 0x104230u;
        goto label_104230;
    }
    ctx->pc = 0x104228u;
    SET_GPR_U32(ctx, 31, 0x104230u);
    ctx->pc = 0x10422Cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104230u; }
    }
    if (ctx->pc != 0x104230u) { return; }
    ctx->pc = 0x104230u;
label_104230:
    // 0x104230: 0x1200000e
label_104234:
    if (ctx->pc == 0x104234u) {
        ctx->pc = 0x104234u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104238u;
        goto label_104238;
    }
    ctx->pc = 0x104230u;
    {
        const bool branch_taken_0x104230 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x104234u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104230) {
            ctx->pc = 0x10426Cu;
            goto label_10426c;
        }
    }
    ctx->pc = 0x104238u;
label_104238:
    // 0x104238: 0x3c020023
    ctx->pc = 0x104238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_10423c:
    // 0x10423c: 0x245179f0
    ctx->pc = 0x10423cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 31216));
label_104240:
    // 0x104240: 0x32020001
    ctx->pc = 0x104240u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_104244:
    // 0x104244: 0x50400007
label_104248:
    if (ctx->pc == 0x104248u) {
        ctx->pc = 0x104248u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->pc = 0x10424Cu;
        goto label_10424c;
    }
    ctx->pc = 0x104244u;
    {
        const bool branch_taken_0x104244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x104244) {
            ctx->pc = 0x104248u;
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->pc = 0x104264u;
            goto label_104264;
        }
    }
    ctx->pc = 0x10424Cu;
label_10424c:
    // 0x10424c: 0xde240000
    ctx->pc = 0x10424cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_104250:
    // 0x104250: 0x280282d
    ctx->pc = 0x104250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104254:
    // 0x104254: 0xc04476c
label_104258:
    if (ctx->pc == 0x104258u) {
        ctx->pc = 0x104258u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x10425Cu;
        goto label_10425c;
    }
    ctx->pc = 0x104254u;
    SET_GPR_U32(ctx, 31, 0x10425Cu);
    ctx->pc = 0x104258u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10425Cu; }
    }
    if (ctx->pc != 0x10425Cu) { return; }
    ctx->pc = 0x10425Cu;
label_10425c:
    // 0x10425c: 0x40a02d
    ctx->pc = 0x10425cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104260:
    // 0x104260: 0x108043
    ctx->pc = 0x104260u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_104264:
    // 0x104264: 0x1600fff6
label_104268:
    if (ctx->pc == 0x104268u) {
        ctx->pc = 0x104268u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x10426Cu;
        goto label_10426c;
    }
    ctx->pc = 0x104264u;
    {
        const bool branch_taken_0x104264 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x104268u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x104264) {
            ctx->pc = 0x104240u;
            goto label_104240;
        }
    }
    ctx->pc = 0x10426Cu;
label_10426c:
    // 0x10426c: 0x8fa20030
    ctx->pc = 0x10426cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_104270:
    // 0x104270: 0x10400015
label_104274:
    if (ctx->pc == 0x104274u) {
        ctx->pc = 0x104278u;
        goto label_104278;
    }
    ctx->pc = 0x104270u;
    {
        const bool branch_taken_0x104270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x104270) {
            ctx->pc = 0x1042C8u;
            goto label_1042c8;
        }
    }
    ctx->pc = 0x104278u;
label_104278:
    // 0x104278: 0x3405ffc0
    ctx->pc = 0x104278u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_10427c:
    // 0x10427c: 0x52bbc
    ctx->pc = 0x10427cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_104280:
    // 0x104280: 0x280202d
    ctx->pc = 0x104280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104284:
    // 0x104284: 0xc0448a6
label_104288:
    if (ctx->pc == 0x104288u) {
        ctx->pc = 0x10428Cu;
        goto label_10428c;
    }
    ctx->pc = 0x104284u;
    SET_GPR_U32(ctx, 31, 0x10428Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10428Cu; }
    }
    if (ctx->pc != 0x10428Cu) { return; }
    ctx->pc = 0x10428Cu;
label_10428c:
    // 0x10428c: 0x441000e
label_104290:
    if (ctx->pc == 0x104290u) {
        ctx->pc = 0x104290u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x104294u;
        goto label_104294;
    }
    ctx->pc = 0x10428Cu;
    {
        const bool branch_taken_0x10428c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x104290u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x10428c) {
            ctx->pc = 0x1042C8u;
            goto label_1042c8;
        }
    }
    ctx->pc = 0x104294u;
label_104294:
    // 0x104294: 0x1860000c
label_104298:
    if (ctx->pc == 0x104298u) {
        ctx->pc = 0x104298u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x10429Cu;
        goto label_10429c;
    }
    ctx->pc = 0x104294u;
    {
        const bool branch_taken_0x104294 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x104298u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x104294) {
            ctx->pc = 0x1042C8u;
            goto label_1042c8;
        }
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0x188000bc
label_1042a0:
    if (ctx->pc == 0x1042A0u) {
        ctx->pc = 0x1042A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x1042A4u;
        goto label_1042a4;
    }
    ctx->pc = 0x10429Cu;
    {
        const bool branch_taken_0x10429c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1042A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x10429c) {
            ctx->pc = 0x104590u;
            goto label_104590;
        }
    }
    ctx->pc = 0x1042A4u;
label_1042a4:
    // 0x1042a4: 0x8fa20028
    ctx->pc = 0x1042a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1042a8:
    // 0x1042a8: 0x280282d
    ctx->pc = 0x1042a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1042ac:
    // 0x1042ac: 0x34048048
    ctx->pc = 0x1042acu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_1042b0:
    // 0x1042b0: 0x423fc
    ctx->pc = 0x1042b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_1042b4:
    // 0x1042b4: 0x27deffff
    ctx->pc = 0x1042b4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967295));
label_1042b8:
    // 0x1042b8: 0xafa20020
    ctx->pc = 0x1042b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1042bc:
    // 0x1042bc: 0xc04476c
label_1042c0:
    if (ctx->pc == 0x1042C0u) {
        ctx->pc = 0x1042C0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1042C4u;
        goto label_1042c4;
    }
    ctx->pc = 0x1042BCu;
    SET_GPR_U32(ctx, 31, 0x1042C4u);
    ctx->pc = 0x1042C0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042C4u; }
    }
    if (ctx->pc != 0x1042C4u) { return; }
    ctx->pc = 0x1042C4u;
label_1042c4:
    // 0x1042c4: 0x40a02d
    ctx->pc = 0x1042c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1042c8:
    // 0x1042c8: 0xc0448ba
label_1042cc:
    if (ctx->pc == 0x1042CCu) {
        ctx->pc = 0x1042CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1042D0u;
        goto label_1042d0;
    }
    ctx->pc = 0x1042C8u;
    SET_GPR_U32(ctx, 31, 0x1042D0u);
    ctx->pc = 0x1042CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042D0u; }
    }
    if (ctx->pc != 0x1042D0u) { return; }
    ctx->pc = 0x1042D0u;
label_1042d0:
    // 0x1042d0: 0x280282d
    ctx->pc = 0x1042d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1042d4:
    // 0x1042d4: 0x40202d
    ctx->pc = 0x1042d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1042d8:
    // 0x1042d8: 0xc04476c
label_1042dc:
    if (ctx->pc == 0x1042DCu) {
        ctx->pc = 0x1042E0u;
        goto label_1042e0;
    }
    ctx->pc = 0x1042D8u;
    SET_GPR_U32(ctx, 31, 0x1042E0u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042E0u; }
    }
    if (ctx->pc != 0x1042E0u) { return; }
    ctx->pc = 0x1042E0u;
label_1042e0:
    // 0x1042e0: 0x34058038
    ctx->pc = 0x1042e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32824));
label_1042e4:
    // 0x1042e4: 0x52bfc
    ctx->pc = 0x1042e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1042e8:
    // 0x1042e8: 0x40202d
    ctx->pc = 0x1042e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1042ec:
    // 0x1042ec: 0xc04473c
label_1042f0:
    if (ctx->pc == 0x1042F0u) {
        ctx->pc = 0x1042F4u;
        goto label_1042f4;
    }
    ctx->pc = 0x1042ECu;
    SET_GPR_U32(ctx, 31, 0x1042F4u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042F4u; }
    }
    if (ctx->pc != 0x1042F4u) { return; }
    ctx->pc = 0x1042F4u;
label_1042f4:
    // 0x1042f4: 0x3c04ffff
    ctx->pc = 0x1042f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_1042f8:
    // 0x1042f8: 0x4203e
    ctx->pc = 0x1042f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1042fc:
    // 0x1042fc: 0x40902d
    ctx->pc = 0x1042fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104300:
    // 0x104300: 0x3c02fcc0
    ctx->pc = 0x104300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64704 << 16));
label_104304:
    // 0x104304: 0x12183f
    ctx->pc = 0x104304u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
label_104308:
    // 0x104308: 0x2449024
    ctx->pc = 0x104308u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_10430c:
    // 0x10430c: 0x621821
    ctx->pc = 0x10430cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_104310:
    // 0x104310: 0x3183c
    ctx->pc = 0x104310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_104314:
    // 0x104314: 0x2439025
    ctx->pc = 0x104314u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_104318:
    // 0x104318: 0x8fa30020
    ctx->pc = 0x104318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10431c:
    // 0x10431c: 0x1460001a
label_104320:
    if (ctx->pc == 0x104320u) {
        ctx->pc = 0x104320u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x104324u;
        goto label_104324;
    }
    ctx->pc = 0x10431Cu;
    {
        const bool branch_taken_0x10431c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x104320u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x10431c) {
            ctx->pc = 0x104388u;
            goto label_104388;
        }
    }
    ctx->pc = 0x104324u;
label_104324:
    // 0x104324: 0x34058028
    ctx->pc = 0x104324u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32808));
label_104328:
    // 0x104328: 0x52bfc
    ctx->pc = 0x104328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10432c:
    // 0x10432c: 0x280202d
    ctx->pc = 0x10432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104330:
    // 0x104330: 0xafa0004c
    ctx->pc = 0x104330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_104334:
    // 0x104334: 0xc044752
label_104338:
    if (ctx->pc == 0x104338u) {
        ctx->pc = 0x104338u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x10433Cu;
        goto label_10433c;
    }
    ctx->pc = 0x104334u;
    SET_GPR_U32(ctx, 31, 0x10433Cu);
    ctx->pc = 0x104338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10433Cu; }
    }
    if (ctx->pc != 0x10433Cu) { return; }
    ctx->pc = 0x10433Cu;
label_10433c:
    // 0x10433c: 0x40802d
    ctx->pc = 0x10433cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104340:
    // 0x104340: 0x240282d
    ctx->pc = 0x104340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104344:
    // 0x104344: 0x200202d
    ctx->pc = 0x104344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104348:
    // 0x104348: 0xc0448a6
label_10434c:
    if (ctx->pc == 0x10434Cu) {
        ctx->pc = 0x104350u;
        goto label_104350;
    }
    ctx->pc = 0x104348u;
    SET_GPR_U32(ctx, 31, 0x104350u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104350u; }
    }
    if (ctx->pc != 0x104350u) { return; }
    ctx->pc = 0x104350u;
label_104350:
    // 0x104350: 0x1c4001e3
label_104354:
    if (ctx->pc == 0x104354u) {
        ctx->pc = 0x104354u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x104358u;
        goto label_104358;
    }
    ctx->pc = 0x104350u;
    {
        const bool branch_taken_0x104350 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x104354u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x104350) {
            ctx->pc = 0x104AE0u;
            goto label_104ae0;
        }
    }
    ctx->pc = 0x104358u;
label_104358:
    // 0x104358: 0x240282d
    ctx->pc = 0x104358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10435c:
    // 0x10435c: 0x202d
    ctx->pc = 0x10435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104360:
    // 0x104360: 0xc044752
label_104364:
    if (ctx->pc == 0x104364u) {
        ctx->pc = 0x104368u;
        goto label_104368;
    }
    ctx->pc = 0x104360u;
    SET_GPR_U32(ctx, 31, 0x104368u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104368u; }
    }
    if (ctx->pc != 0x104368u) { return; }
    ctx->pc = 0x104368u;
label_104368:
    // 0x104368: 0x200202d
    ctx->pc = 0x104368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10436c:
    // 0x10436c: 0x40282d
    ctx->pc = 0x10436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104370:
    // 0x104370: 0xc0448a6
label_104374:
    if (ctx->pc == 0x104374u) {
        ctx->pc = 0x104378u;
        goto label_104378;
    }
    ctx->pc = 0x104370u;
    SET_GPR_U32(ctx, 31, 0x104378u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104378u; }
    }
    if (ctx->pc != 0x104378u) { return; }
    ctx->pc = 0x104378u;
label_104378:
    // 0x104378: 0x44001d5
label_10437c:
    if (ctx->pc == 0x10437Cu) {
        ctx->pc = 0x10437Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x104380u;
        goto label_104380;
    }
    ctx->pc = 0x104378u;
    {
        const bool branch_taken_0x104378 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10437Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x104378) {
            ctx->pc = 0x104AD0u;
            goto label_104ad0;
        }
    }
    ctx->pc = 0x104380u;
label_104380:
    // 0x104380: 0x10000083
label_104384:
    if (ctx->pc == 0x104384u) {
        ctx->pc = 0x104388u;
        goto label_104388;
    }
    ctx->pc = 0x104380u;
    {
        const bool branch_taken_0x104380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x104380) {
            ctx->pc = 0x104590u;
            goto label_104590;
        }
    }
    ctx->pc = 0x104388u;
label_104388:
    // 0x104388: 0x1080003f
label_10438c:
    if (ctx->pc == 0x10438Cu) {
        ctx->pc = 0x10438Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x104390u;
        goto label_104390;
    }
    ctx->pc = 0x104388u;
    {
        const bool branch_taken_0x104388 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10438Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x104388) {
            ctx->pc = 0x104488u;
            goto label_104488;
        }
    }
    ctx->pc = 0x104390u;
label_104390:
    // 0x104390: 0x3404ff80
    ctx->pc = 0x104390u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_104394:
    // 0x104394: 0x423bc
    ctx->pc = 0x104394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_104398:
    // 0x104398: 0x310c0
    ctx->pc = 0x104398u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_10439c:
    // 0x10439c: 0x3c050023
    ctx->pc = 0x10439cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
label_1043a0:
    // 0x1043a0: 0xa22821
    ctx->pc = 0x1043a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1043a4:
    // 0x1043a4: 0xdca57920
    ctx->pc = 0x1043a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 31008)));
label_1043a8:
    // 0x1043a8: 0xc04480e
label_1043ac:
    if (ctx->pc == 0x1043ACu) {
        ctx->pc = 0x1043ACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1043B0u;
        goto label_1043b0;
    }
    ctx->pc = 0x1043A8u;
    SET_GPR_U32(ctx, 31, 0x1043B0u);
    ctx->pc = 0x1043ACu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043B0u; }
    }
    if (ctx->pc != 0x1043B0u) { return; }
    ctx->pc = 0x1043B0u;
label_1043b0:
    // 0x1043b0: 0x240282d
    ctx->pc = 0x1043b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1043b4:
    // 0x1043b4: 0x40202d
    ctx->pc = 0x1043b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1043b8:
    // 0x1043b8: 0xc044752
label_1043bc:
    if (ctx->pc == 0x1043BCu) {
        ctx->pc = 0x1043C0u;
        goto label_1043c0;
    }
    ctx->pc = 0x1043B8u;
    SET_GPR_U32(ctx, 31, 0x1043C0u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043C0u; }
    }
    if (ctx->pc != 0x1043C0u) { return; }
    ctx->pc = 0x1043C0u;
label_1043c0:
    // 0x1043c0: 0x1000000c
label_1043c4:
    if (ctx->pc == 0x1043C4u) {
        ctx->pc = 0x1043C4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1043C8u;
        goto label_1043c8;
    }
    ctx->pc = 0x1043C0u;
    {
        const bool branch_taken_0x1043c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1043C4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1043c0) {
            ctx->pc = 0x1043F4u;
            goto label_1043f4;
        }
    }
    ctx->pc = 0x1043C8u;
label_1043c8:
    // 0x1043c8: 0x34048048
    ctx->pc = 0x1043c8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_1043cc:
    // 0x1043cc: 0x423fc
    ctx->pc = 0x1043ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_1043d0:
    // 0x1043d0: 0x240282d
    ctx->pc = 0x1043d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1043d4:
    // 0x1043d4: 0xc04476c
label_1043d8:
    if (ctx->pc == 0x1043D8u) {
        ctx->pc = 0x1043DCu;
        goto label_1043dc;
    }
    ctx->pc = 0x1043D4u;
    SET_GPR_U32(ctx, 31, 0x1043DCu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043DCu; }
    }
    if (ctx->pc != 0x1043DCu) { return; }
    ctx->pc = 0x1043DCu;
label_1043dc:
    // 0x1043dc: 0x34048048
    ctx->pc = 0x1043dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_1043e0:
    // 0x1043e0: 0x423fc
    ctx->pc = 0x1043e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_1043e4:
    // 0x1043e4: 0x220282d
    ctx->pc = 0x1043e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1043e8:
    // 0x1043e8: 0xc04476c
label_1043ec:
    if (ctx->pc == 0x1043ECu) {
        ctx->pc = 0x1043ECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1043F0u;
        goto label_1043f0;
    }
    ctx->pc = 0x1043E8u;
    SET_GPR_U32(ctx, 31, 0x1043F0u);
    ctx->pc = 0x1043ECu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043F0u; }
    }
    if (ctx->pc != 0x1043F0u) { return; }
    ctx->pc = 0x1043F0u;
label_1043f0:
    // 0x1043f0: 0x40a02d
    ctx->pc = 0x1043f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1043f4:
    // 0x1043f4: 0x280202d
    ctx->pc = 0x1043f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1043f8:
    // 0x1043f8: 0xc0448e8
label_1043fc:
    if (ctx->pc == 0x1043FCu) {
        ctx->pc = 0x104400u;
        goto label_104400;
    }
    ctx->pc = 0x1043F8u;
    SET_GPR_U32(ctx, 31, 0x104400u);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104400u; }
    }
    if (ctx->pc != 0x104400u) { return; }
    ctx->pc = 0x104400u;
label_104400:
    // 0x104400: 0x40802d
    ctx->pc = 0x104400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104404:
    // 0x104404: 0xc0448ba
label_104408:
    if (ctx->pc == 0x104408u) {
        ctx->pc = 0x104408u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10440Cu;
        goto label_10440c;
    }
    ctx->pc = 0x104404u;
    SET_GPR_U32(ctx, 31, 0x10440Cu);
    ctx->pc = 0x104408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10440Cu; }
    }
    if (ctx->pc != 0x10440Cu) { return; }
    ctx->pc = 0x10440Cu;
label_10440c:
    // 0x10440c: 0x280202d
    ctx->pc = 0x10440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104410:
    // 0x104410: 0x40282d
    ctx->pc = 0x104410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104414:
    // 0x104414: 0xc044752
label_104418:
    if (ctx->pc == 0x104418u) {
        ctx->pc = 0x10441Cu;
        goto label_10441c;
    }
    ctx->pc = 0x104414u;
    SET_GPR_U32(ctx, 31, 0x10441Cu);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10441Cu; }
    }
    if (ctx->pc != 0x10441Cu) { return; }
    ctx->pc = 0x10441Cu;
label_10441c:
    // 0x10441c: 0x240282d
    ctx->pc = 0x10441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104420:
    // 0x104420: 0x40882d
    ctx->pc = 0x104420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104424:
    // 0x104424: 0x26020030
    ctx->pc = 0x104424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 48));
label_104428:
    // 0x104428: 0xa2a20000
    ctx->pc = 0x104428u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_10442c:
    // 0x10442c: 0x220202d
    ctx->pc = 0x10442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104430:
    // 0x104430: 0xc0448a6
label_104434:
    if (ctx->pc == 0x104434u) {
        ctx->pc = 0x104434u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x104438u;
        goto label_104438;
    }
    ctx->pc = 0x104430u;
    SET_GPR_U32(ctx, 31, 0x104438u);
    ctx->pc = 0x104434u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104438u; }
    }
    if (ctx->pc != 0x104438u) { return; }
    ctx->pc = 0x104438u;
label_104438:
    // 0x104438: 0x4400292
label_10443c:
    if (ctx->pc == 0x10443Cu) {
        ctx->pc = 0x10443Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x104440u;
        goto label_104440;
    }
    ctx->pc = 0x104438u;
    {
        const bool branch_taken_0x104438 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10443Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x104438) {
            ctx->pc = 0x104E84u;
            goto label_104e84;
        }
    }
    ctx->pc = 0x104440u;
label_104440:
    // 0x104440: 0x3404ffc0
    ctx->pc = 0x104440u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
label_104444:
    // 0x104444: 0x423bc
    ctx->pc = 0x104444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_104448:
    // 0x104448: 0x220282d
    ctx->pc = 0x104448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10444c:
    // 0x10444c: 0xc044752
label_104450:
    if (ctx->pc == 0x104450u) {
        ctx->pc = 0x104454u;
        goto label_104454;
    }
    ctx->pc = 0x10444Cu;
    SET_GPR_U32(ctx, 31, 0x104454u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104454u; }
    }
    if (ctx->pc != 0x104454u) { return; }
    ctx->pc = 0x104454u;
label_104454:
    // 0x104454: 0x240282d
    ctx->pc = 0x104454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104458:
    // 0x104458: 0x40202d
    ctx->pc = 0x104458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10445c:
    // 0x10445c: 0xc0448a6
label_104460:
    if (ctx->pc == 0x104460u) {
        ctx->pc = 0x104464u;
        goto label_104464;
    }
    ctx->pc = 0x10445Cu;
    SET_GPR_U32(ctx, 31, 0x104464u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104464u; }
    }
    if (ctx->pc != 0x104464u) { return; }
    ctx->pc = 0x104464u;
label_104464:
    // 0x104464: 0x4400099
label_104468:
    if (ctx->pc == 0x104468u) {
        ctx->pc = 0x104468u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x10446Cu;
        goto label_10446c;
    }
    ctx->pc = 0x104464u;
    {
        const bool branch_taken_0x104464 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x104468u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x104464) {
            ctx->pc = 0x1046CCu;
            goto label_1046cc;
        }
    }
    ctx->pc = 0x10446Cu;
label_10446c:
    // 0x10446c: 0x8fa40020
    ctx->pc = 0x10446cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104470:
    // 0x104470: 0x26730001
    ctx->pc = 0x104470u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_104474:
    // 0x104474: 0x264102a
    ctx->pc = 0x104474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 4)));
label_104478:
    // 0x104478: 0x1440ffd3
label_10447c:
    if (ctx->pc == 0x10447Cu) {
        ctx->pc = 0x10447Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x104480u;
        goto label_104480;
    }
    ctx->pc = 0x104478u;
    {
        const bool branch_taken_0x104478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10447Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x104478) {
            ctx->pc = 0x1043C8u;
            goto label_1043c8;
        }
    }
    ctx->pc = 0x104480u;
label_104480:
    // 0x104480: 0x10000043
label_104484:
    if (ctx->pc == 0x104484u) {
        ctx->pc = 0x104488u;
        goto label_104488;
    }
    ctx->pc = 0x104480u;
    {
        const bool branch_taken_0x104480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x104480) {
            ctx->pc = 0x104590u;
            goto label_104590;
        }
    }
    ctx->pc = 0x104488u;
label_104488:
    // 0x104488: 0x240282d
    ctx->pc = 0x104488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10448c:
    // 0x10448c: 0x310c0
    ctx->pc = 0x10448cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_104490:
    // 0x104490: 0x3c040023
    ctx->pc = 0x104490u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_104494:
    // 0x104494: 0x822021
    ctx->pc = 0x104494u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_104498:
    // 0x104498: 0xdc847920
    ctx->pc = 0x104498u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 31008)));
label_10449c:
    // 0x10449c: 0xc04476c
label_1044a0:
    if (ctx->pc == 0x1044A0u) {
        ctx->pc = 0x1044A0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1044A4u;
        goto label_1044a4;
    }
    ctx->pc = 0x10449Cu;
    SET_GPR_U32(ctx, 31, 0x1044A4u);
    ctx->pc = 0x1044A0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044A4u; }
    }
    if (ctx->pc != 0x1044A4u) { return; }
    ctx->pc = 0x1044A4u;
label_1044a4:
    // 0x1044a4: 0x40902d
    ctx->pc = 0x1044a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1044a8:
    // 0x1044a8: 0x280202d
    ctx->pc = 0x1044a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1044ac:
    // 0x1044ac: 0xc0448e8
label_1044b0:
    if (ctx->pc == 0x1044B0u) {
        ctx->pc = 0x1044B4u;
        goto label_1044b4;
    }
    ctx->pc = 0x1044ACu;
    SET_GPR_U32(ctx, 31, 0x1044B4u);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044B4u; }
    }
    if (ctx->pc != 0x1044B4u) { return; }
    ctx->pc = 0x1044B4u;
label_1044b4:
    // 0x1044b4: 0x40802d
    ctx->pc = 0x1044b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1044b8:
    // 0x1044b8: 0xc0448ba
label_1044bc:
    if (ctx->pc == 0x1044BCu) {
        ctx->pc = 0x1044BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1044C0u;
        goto label_1044c0;
    }
    ctx->pc = 0x1044B8u;
    SET_GPR_U32(ctx, 31, 0x1044C0u);
    ctx->pc = 0x1044BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044C0u; }
    }
    if (ctx->pc != 0x1044C0u) { return; }
    ctx->pc = 0x1044C0u;
label_1044c0:
    // 0x1044c0: 0x280202d
    ctx->pc = 0x1044c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1044c4:
    // 0x1044c4: 0x40282d
    ctx->pc = 0x1044c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1044c8:
    // 0x1044c8: 0xc044752
label_1044cc:
    if (ctx->pc == 0x1044CCu) {
        ctx->pc = 0x1044D0u;
        goto label_1044d0;
    }
    ctx->pc = 0x1044C8u;
    SET_GPR_U32(ctx, 31, 0x1044D0u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044D0u; }
    }
    if (ctx->pc != 0x1044D0u) { return; }
    ctx->pc = 0x1044D0u;
label_1044d0:
    // 0x1044d0: 0x40882d
    ctx->pc = 0x1044d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1044d4:
    // 0x1044d4: 0x26020030
    ctx->pc = 0x1044d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 48));
label_1044d8:
    // 0x1044d8: 0xa2a20000
    ctx->pc = 0x1044d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_1044dc:
    // 0x1044dc: 0x8fa40020
    ctx->pc = 0x1044dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1044e0:
    // 0x1044e0: 0x16640023
label_1044e4:
    if (ctx->pc == 0x1044E4u) {
        ctx->pc = 0x1044E4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x1044E8u;
        goto label_1044e8;
    }
    ctx->pc = 0x1044E0u;
    {
        const bool branch_taken_0x1044e0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 4));
        ctx->pc = 0x1044E4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1044e0) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x1044E8u;
label_1044e8:
    // 0x1044e8: 0x3404ff80
    ctx->pc = 0x1044e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_1044ec:
    // 0x1044ec: 0x423bc
    ctx->pc = 0x1044ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_1044f0:
    // 0x1044f0: 0x240282d
    ctx->pc = 0x1044f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1044f4:
    // 0x1044f4: 0xc04473c
label_1044f8:
    if (ctx->pc == 0x1044F8u) {
        ctx->pc = 0x1044FCu;
        goto label_1044fc;
    }
    ctx->pc = 0x1044F4u;
    SET_GPR_U32(ctx, 31, 0x1044FCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044FCu; }
    }
    if (ctx->pc != 0x1044FCu) { return; }
    ctx->pc = 0x1044FCu;
label_1044fc:
    // 0x1044fc: 0x220202d
    ctx->pc = 0x1044fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104500:
    // 0x104500: 0x40282d
    ctx->pc = 0x104500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104504:
    // 0x104504: 0xc0448a6
label_104508:
    if (ctx->pc == 0x104508u) {
        ctx->pc = 0x10450Cu;
        goto label_10450c;
    }
    ctx->pc = 0x104504u;
    SET_GPR_U32(ctx, 31, 0x10450Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10450Cu; }
    }
    if (ctx->pc != 0x10450Cu) { return; }
    ctx->pc = 0x10450Cu;
label_10450c:
    // 0x10450c: 0x1c40006f
label_104510:
    if (ctx->pc == 0x104510u) {
        ctx->pc = 0x104510u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x104514u;
        goto label_104514;
    }
    ctx->pc = 0x10450Cu;
    {
        const bool branch_taken_0x10450c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x104510u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x10450c) {
            ctx->pc = 0x1046CCu;
            goto label_1046cc;
        }
    }
    ctx->pc = 0x104514u;
label_104514:
    // 0x104514: 0x3404ff80
    ctx->pc = 0x104514u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_104518:
    // 0x104518: 0x423bc
    ctx->pc = 0x104518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_10451c:
    // 0x10451c: 0x240282d
    ctx->pc = 0x10451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104520:
    // 0x104520: 0xc044752
label_104524:
    if (ctx->pc == 0x104524u) {
        ctx->pc = 0x104528u;
        goto label_104528;
    }
    ctx->pc = 0x104520u;
    SET_GPR_U32(ctx, 31, 0x104528u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104528u; }
    }
    if (ctx->pc != 0x104528u) { return; }
    ctx->pc = 0x104528u;
label_104528:
    // 0x104528: 0x220202d
    ctx->pc = 0x104528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10452c:
    // 0x10452c: 0x40282d
    ctx->pc = 0x10452cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104530:
    // 0x104530: 0xc0448a6
label_104534:
    if (ctx->pc == 0x104534u) {
        ctx->pc = 0x104538u;
        goto label_104538;
    }
    ctx->pc = 0x104530u;
    SET_GPR_U32(ctx, 31, 0x104538u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104538u; }
    }
    if (ctx->pc != 0x104538u) { return; }
    ctx->pc = 0x104538u;
label_104538:
    // 0x104538: 0x4410015
label_10453c:
    if (ctx->pc == 0x10453Cu) {
        ctx->pc = 0x10453Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x104540u;
        goto label_104540;
    }
    ctx->pc = 0x104538u;
    {
        const bool branch_taken_0x104538 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10453Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x104538) {
            ctx->pc = 0x104590u;
            goto label_104590;
        }
    }
    ctx->pc = 0x104540u;
label_104540:
    // 0x104540: 0x24030030
    ctx->pc = 0x104540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_104544:
    // 0x104544: 0x26b5ffff
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_104548:
    // 0x104548: 0x82a20000
    ctx->pc = 0x104548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_10454c:
    // 0x10454c: 0x0
    ctx->pc = 0x10454cu;
    // NOP
label_104550:
    // 0x104550: 0x0
    ctx->pc = 0x104550u;
    // NOP
label_104554:
    // 0x104554: 0x0
    ctx->pc = 0x104554u;
    // NOP
label_104558:
    // 0x104558: 0x0
    ctx->pc = 0x104558u;
    // NOP
label_10455c:
    // 0x10455c: 0x5043fffa
label_104560:
    if (ctx->pc == 0x104560u) {
        ctx->pc = 0x104560u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x104564u;
        goto label_104564;
    }
    ctx->pc = 0x10455Cu;
    {
        const bool branch_taken_0x10455c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x10455c) {
            ctx->pc = 0x104560u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x104548u;
            goto label_104548;
        }
    }
    ctx->pc = 0x104564u;
label_104564:
    // 0x104564: 0x10000246
label_104568:
    if (ctx->pc == 0x104568u) {
        ctx->pc = 0x104568u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x10456Cu;
        goto label_10456c;
    }
    ctx->pc = 0x104564u;
    {
        const bool branch_taken_0x104564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104568u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x104564) {
            ctx->pc = 0x104E80u;
            goto label_104e80;
        }
    }
    ctx->pc = 0x10456Cu;
label_10456c:
    // 0x10456c: 0x0
    ctx->pc = 0x10456cu;
    // NOP
label_104570:
    // 0x104570: 0x34048048
    ctx->pc = 0x104570u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_104574:
    // 0x104574: 0x423fc
    ctx->pc = 0x104574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_104578:
    // 0x104578: 0x220282d
    ctx->pc = 0x104578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10457c:
    // 0x10457c: 0xc04476c
label_104580:
    if (ctx->pc == 0x104580u) {
        ctx->pc = 0x104580u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x104584u;
        goto label_104584;
    }
    ctx->pc = 0x10457Cu;
    SET_GPR_U32(ctx, 31, 0x104584u);
    ctx->pc = 0x104580u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104584u; }
    }
    if (ctx->pc != 0x104584u) { return; }
    ctx->pc = 0x104584u;
label_104584:
    // 0x104584: 0x1000ffc8
label_104588:
    if (ctx->pc == 0x104588u) {
        ctx->pc = 0x104588u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10458Cu;
        goto label_10458c;
    }
    ctx->pc = 0x104584u;
    {
        const bool branch_taken_0x104584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104588u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104584) {
            ctx->pc = 0x1044A8u;
            goto label_1044a8;
        }
    }
    ctx->pc = 0x10458Cu;
label_10458c:
    // 0x10458c: 0x0
    ctx->pc = 0x10458cu;
    // NOP
label_104590:
    // 0x104590: 0x2c0a02d
    ctx->pc = 0x104590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_104594:
    // 0x104594: 0x8fbe002c
    ctx->pc = 0x104594u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_104598:
    // 0x104598: 0xafa20020
    ctx->pc = 0x104598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_10459c:
    // 0x10459c: 0x8fb50054
    ctx->pc = 0x10459cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1045a0:
    // 0x1045a0: 0x8fa30000
    ctx->pc = 0x1045a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1045a4:
    // 0x1045a4: 0x460006a
label_1045a8:
    if (ctx->pc == 0x1045A8u) {
        ctx->pc = 0x1045A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), 15));
        ctx->pc = 0x1045ACu;
        goto label_1045ac;
    }
    ctx->pc = 0x1045A4u;
    {
        const bool branch_taken_0x1045a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1045A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), 15));
        if (branch_taken_0x1045a4) {
            ctx->pc = 0x104750u;
            goto label_104750;
        }
    }
    ctx->pc = 0x1045ACu;
label_1045ac:
    // 0x1045ac: 0x10400069
label_1045b0:
    if (ctx->pc == 0x1045B0u) {
        ctx->pc = 0x1045B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1045B4u;
        goto label_1045b4;
    }
    ctx->pc = 0x1045ACu;
    {
        const bool branch_taken_0x1045ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1045B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x1045ac) {
            ctx->pc = 0x104754u;
            goto label_104754;
        }
    }
    ctx->pc = 0x1045B4u;
label_1045b4:
    // 0x1045b4: 0x8fa3000c
    ctx->pc = 0x1045b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1045b8:
    // 0x1045b8: 0x1e10c0
    ctx->pc = 0x1045b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 30), 3));
label_1045bc:
    // 0x1045bc: 0x3c110023
    ctx->pc = 0x1045bcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
label_1045c0:
    // 0x1045c0: 0x2228821
    ctx->pc = 0x1045c0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1045c4:
    // 0x1045c4: 0xde317928
    ctx->pc = 0x1045c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 31016)));
label_1045c8:
    // 0x1045c8: 0x4610015
label_1045cc:
    if (ctx->pc == 0x1045CCu) {
        ctx->pc = 0x1045CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1045D0u;
        goto label_1045d0;
    }
    ctx->pc = 0x1045C8u;
    {
        const bool branch_taken_0x1045c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1045CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1045c8) {
            ctx->pc = 0x104620u;
            goto label_104620;
        }
    }
    ctx->pc = 0x1045D0u;
label_1045d0:
    // 0x1045d0: 0x8fa40020
    ctx->pc = 0x1045d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1045d4:
    // 0x1045d4: 0x1c800012
label_1045d8:
    if (ctx->pc == 0x1045D8u) {
        ctx->pc = 0x1045DCu;
        goto label_1045dc;
    }
    ctx->pc = 0x1045D4u;
    {
        const bool branch_taken_0x1045d4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1045d4) {
            ctx->pc = 0x104620u;
            goto label_104620;
        }
    }
    ctx->pc = 0x1045DCu;
label_1045dc:
    // 0x1045dc: 0xafa0004c
    ctx->pc = 0x1045dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_1045e0:
    // 0x1045e0: 0x480013b
label_1045e4:
    if (ctx->pc == 0x1045E4u) {
        ctx->pc = 0x1045E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x1045E8u;
        goto label_1045e8;
    }
    ctx->pc = 0x1045E0u;
    {
        const bool branch_taken_0x1045e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1045E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        if (branch_taken_0x1045e0) {
            ctx->pc = 0x104AD0u;
            goto label_104ad0;
        }
    }
    ctx->pc = 0x1045E8u;
label_1045e8:
    // 0x1045e8: 0x34058028
    ctx->pc = 0x1045e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32808));
label_1045ec:
    // 0x1045ec: 0x52bfc
    ctx->pc = 0x1045ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1045f0:
    // 0x1045f0: 0x220202d
    ctx->pc = 0x1045f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1045f4:
    // 0x1045f4: 0xc04476c
label_1045f8:
    if (ctx->pc == 0x1045F8u) {
        ctx->pc = 0x1045FCu;
        goto label_1045fc;
    }
    ctx->pc = 0x1045F4u;
    SET_GPR_U32(ctx, 31, 0x1045FCu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045FCu; }
    }
    if (ctx->pc != 0x1045FCu) { return; }
    ctx->pc = 0x1045FCu;
label_1045fc:
    // 0x1045fc: 0x280202d
    ctx->pc = 0x1045fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104600:
    // 0x104600: 0x40282d
    ctx->pc = 0x104600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104604:
    // 0x104604: 0xc0448a6
label_104608:
    if (ctx->pc == 0x104608u) {
        ctx->pc = 0x10460Cu;
        goto label_10460c;
    }
    ctx->pc = 0x104604u;
    SET_GPR_U32(ctx, 31, 0x10460Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10460Cu; }
    }
    if (ctx->pc != 0x10460Cu) { return; }
    ctx->pc = 0x10460Cu;
label_10460c:
    // 0x10460c: 0x18400131
label_104610:
    if (ctx->pc == 0x104610u) {
        ctx->pc = 0x104610u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x104614u;
        goto label_104614;
    }
    ctx->pc = 0x10460Cu;
    {
        const bool branch_taken_0x10460c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x104610u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x10460c) {
            ctx->pc = 0x104AD4u;
            goto label_104ad4;
        }
    }
    ctx->pc = 0x104614u;
label_104614:
    // 0x104614: 0x10000132
label_104618:
    if (ctx->pc == 0x104618u) {
        ctx->pc = 0x104618u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x10461Cu;
        goto label_10461c;
    }
    ctx->pc = 0x104614u;
    {
        const bool branch_taken_0x104614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104618u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x104614) {
            ctx->pc = 0x104AE0u;
            goto label_104ae0;
        }
    }
    ctx->pc = 0x10461Cu;
label_10461c:
    // 0x10461c: 0x0
    ctx->pc = 0x10461cu;
    // NOP
label_104620:
    // 0x104620: 0x220282d
    ctx->pc = 0x104620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104624:
    // 0x104624: 0x280202d
    ctx->pc = 0x104624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104628:
    // 0x104628: 0xc04480e
label_10462c:
    if (ctx->pc == 0x10462Cu) {
        ctx->pc = 0x104630u;
        goto label_104630;
    }
    ctx->pc = 0x104628u;
    SET_GPR_U32(ctx, 31, 0x104630u);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104630u; }
    }
    if (ctx->pc != 0x104630u) { return; }
    ctx->pc = 0x104630u;
label_104630:
    // 0x104630: 0x40202d
    ctx->pc = 0x104630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104634:
    // 0x104634: 0xc0448e8
label_104638:
    if (ctx->pc == 0x104638u) {
        ctx->pc = 0x10463Cu;
        goto label_10463c;
    }
    ctx->pc = 0x104634u;
    SET_GPR_U32(ctx, 31, 0x10463Cu);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10463Cu; }
    }
    if (ctx->pc != 0x10463Cu) { return; }
    ctx->pc = 0x10463Cu;
label_10463c:
    // 0x10463c: 0x40802d
    ctx->pc = 0x10463cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104640:
    // 0x104640: 0xc0448ba
label_104644:
    if (ctx->pc == 0x104644u) {
        ctx->pc = 0x104644u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104648u;
        goto label_104648;
    }
    ctx->pc = 0x104640u;
    SET_GPR_U32(ctx, 31, 0x104648u);
    ctx->pc = 0x104644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104648u; }
    }
    if (ctx->pc != 0x104648u) { return; }
    ctx->pc = 0x104648u;
label_104648:
    // 0x104648: 0x220282d
    ctx->pc = 0x104648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10464c:
    // 0x10464c: 0x40202d
    ctx->pc = 0x10464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104650:
    // 0x104650: 0xc04476c
label_104654:
    if (ctx->pc == 0x104654u) {
        ctx->pc = 0x104658u;
        goto label_104658;
    }
    ctx->pc = 0x104650u;
    SET_GPR_U32(ctx, 31, 0x104658u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104658u; }
    }
    if (ctx->pc != 0x104658u) { return; }
    ctx->pc = 0x104658u;
label_104658:
    // 0x104658: 0x280202d
    ctx->pc = 0x104658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10465c:
    // 0x10465c: 0x40282d
    ctx->pc = 0x10465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104660:
    // 0x104660: 0xc044752
label_104664:
    if (ctx->pc == 0x104664u) {
        ctx->pc = 0x104668u;
        goto label_104668;
    }
    ctx->pc = 0x104660u;
    SET_GPR_U32(ctx, 31, 0x104668u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104668u; }
    }
    if (ctx->pc != 0x104668u) { return; }
    ctx->pc = 0x104668u;
label_104668:
    // 0x104668: 0x40282d
    ctx->pc = 0x104668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10466c:
    // 0x10466c: 0x26020030
    ctx->pc = 0x10466cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 48));
label_104670:
    // 0x104670: 0xa2a20000
    ctx->pc = 0x104670u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_104674:
    // 0x104674: 0x8fa20020
    ctx->pc = 0x104674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104678:
    // 0x104678: 0x16620027
label_10467c:
    if (ctx->pc == 0x10467Cu) {
        ctx->pc = 0x10467Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x104680u;
        goto label_104680;
    }
    ctx->pc = 0x104678u;
    {
        const bool branch_taken_0x104678 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x10467Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x104678) {
            ctx->pc = 0x104718u;
            goto label_104718;
        }
    }
    ctx->pc = 0x104680u;
label_104680:
    // 0x104680: 0xa0202d
    ctx->pc = 0x104680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_104684:
    // 0x104684: 0xc04473c
label_104688:
    if (ctx->pc == 0x104688u) {
        ctx->pc = 0x10468Cu;
        goto label_10468c;
    }
    ctx->pc = 0x104684u;
    SET_GPR_U32(ctx, 31, 0x10468Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10468Cu; }
    }
    if (ctx->pc != 0x10468Cu) { return; }
    ctx->pc = 0x10468Cu;
label_10468c:
    // 0x10468c: 0x220282d
    ctx->pc = 0x10468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104690:
    // 0x104690: 0x40902d
    ctx->pc = 0x104690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104694:
    // 0x104694: 0x240202d
    ctx->pc = 0x104694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104698:
    // 0x104698: 0xc0448a6
label_10469c:
    if (ctx->pc == 0x10469Cu) {
        ctx->pc = 0x1046A0u;
        goto label_1046a0;
    }
    ctx->pc = 0x104698u;
    SET_GPR_U32(ctx, 31, 0x1046A0u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1046A0u; }
    }
    if (ctx->pc != 0x1046A0u) { return; }
    ctx->pc = 0x1046A0u;
label_1046a0:
    // 0x1046a0: 0x1c40000a
label_1046a4:
    if (ctx->pc == 0x1046A4u) {
        ctx->pc = 0x1046A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x1046A8u;
        goto label_1046a8;
    }
    ctx->pc = 0x1046A0u;
    {
        const bool branch_taken_0x1046a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1046A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x1046a0) {
            ctx->pc = 0x1046CCu;
            goto label_1046cc;
        }
    }
    ctx->pc = 0x1046A8u;
label_1046a8:
    // 0x1046a8: 0x240202d
    ctx->pc = 0x1046a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1046ac:
    // 0x1046ac: 0x220282d
    ctx->pc = 0x1046acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1046b0:
    // 0x1046b0: 0xc0448a6
label_1046b4:
    if (ctx->pc == 0x1046B4u) {
        ctx->pc = 0x1046B8u;
        goto label_1046b8;
    }
    ctx->pc = 0x1046B0u;
    SET_GPR_U32(ctx, 31, 0x1046B8u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1046B8u; }
    }
    if (ctx->pc != 0x1046B8u) { return; }
    ctx->pc = 0x1046B8u;
label_1046b8:
    // 0x1046b8: 0x144001f2
label_1046bc:
    if (ctx->pc == 0x1046BCu) {
        ctx->pc = 0x1046BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x1046C0u;
        goto label_1046c0;
    }
    ctx->pc = 0x1046B8u;
    {
        const bool branch_taken_0x1046b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1046BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x1046b8) {
            ctx->pc = 0x104E84u;
            goto label_104e84;
        }
    }
    ctx->pc = 0x1046C0u;
label_1046c0:
    // 0x1046c0: 0x32020001
    ctx->pc = 0x1046c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_1046c4:
    // 0x1046c4: 0x104001ef
label_1046c8:
    if (ctx->pc == 0x1046C8u) {
        ctx->pc = 0x1046C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x1046CCu;
        goto label_1046cc;
    }
    ctx->pc = 0x1046C4u;
    {
        const bool branch_taken_0x1046c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1046C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x1046c4) {
            ctx->pc = 0x104E84u;
            goto label_104e84;
        }
    }
    ctx->pc = 0x1046CCu;
label_1046cc:
    // 0x1046cc: 0x24050030
    ctx->pc = 0x1046ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
label_1046d0:
    // 0x1046d0: 0x26b5ffff
    ctx->pc = 0x1046d0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_1046d4:
    // 0x1046d4: 0x0
    ctx->pc = 0x1046d4u;
    // NOP
label_1046d8:
    // 0x1046d8: 0x82a20000
    ctx->pc = 0x1046d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1046dc:
    // 0x1046dc: 0x1443000a
label_1046e0:
    if (ctx->pc == 0x1046E0u) {
        ctx->pc = 0x1046E0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x1046E4u;
        goto label_1046e4;
    }
    ctx->pc = 0x1046DCu;
    {
        const bool branch_taken_0x1046dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1046E0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x1046dc) {
            ctx->pc = 0x104708u;
            goto label_104708;
        }
    }
    ctx->pc = 0x1046E4u;
label_1046e4:
    // 0x1046e4: 0x8fa40054
    ctx->pc = 0x1046e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1046e8:
    // 0x1046e8: 0x0
    ctx->pc = 0x1046e8u;
    // NOP
label_1046ec:
    // 0x1046ec: 0x0
    ctx->pc = 0x1046ecu;
    // NOP
label_1046f0:
    // 0x1046f0: 0x0
    ctx->pc = 0x1046f0u;
    // NOP
label_1046f4:
    // 0x1046f4: 0x56a4fff8
label_1046f8:
    if (ctx->pc == 0x1046F8u) {
        ctx->pc = 0x1046F8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x1046FCu;
        goto label_1046fc;
    }
    ctx->pc = 0x1046F4u;
    {
        const bool branch_taken_0x1046f4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 4));
        if (branch_taken_0x1046f4) {
            ctx->pc = 0x1046F8u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x1046D8u;
            goto label_1046d8;
        }
    }
    ctx->pc = 0x1046FCu;
label_1046fc:
    // 0x1046fc: 0xa0850000
    ctx->pc = 0x1046fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_104700:
    // 0x104700: 0xa0202d
    ctx->pc = 0x104700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_104704:
    // 0x104704: 0x27de0001
    ctx->pc = 0x104704u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
label_104708:
    // 0x104708: 0x24820001
    ctx->pc = 0x104708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_10470c:
    // 0x10470c: 0xa2a20000
    ctx->pc = 0x10470cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_104710:
    // 0x104710: 0x100001db
label_104714:
    if (ctx->pc == 0x104714u) {
        ctx->pc = 0x104714u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x104718u;
        goto label_104718;
    }
    ctx->pc = 0x104710u;
    {
        const bool branch_taken_0x104710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104714u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x104710) {
            ctx->pc = 0x104E80u;
            goto label_104e80;
        }
    }
    ctx->pc = 0x104718u;
label_104718:
    // 0x104718: 0x34048048
    ctx->pc = 0x104718u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_10471c:
    // 0x10471c: 0x423fc
    ctx->pc = 0x10471cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_104720:
    // 0x104720: 0xc04476c
label_104724:
    if (ctx->pc == 0x104724u) {
        ctx->pc = 0x104728u;
        goto label_104728;
    }
    ctx->pc = 0x104720u;
    SET_GPR_U32(ctx, 31, 0x104728u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104728u; }
    }
    if (ctx->pc != 0x104728u) { return; }
    ctx->pc = 0x104728u;
label_104728:
    // 0x104728: 0x282d
    ctx->pc = 0x104728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10472c:
    // 0x10472c: 0x40202d
    ctx->pc = 0x10472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104730:
    // 0x104730: 0x40a02d
    ctx->pc = 0x104730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104734:
    // 0x104734: 0xc0448a6
label_104738:
    if (ctx->pc == 0x104738u) {
        ctx->pc = 0x10473Cu;
        goto label_10473c;
    }
    ctx->pc = 0x104734u;
    SET_GPR_U32(ctx, 31, 0x10473Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10473Cu; }
    }
    if (ctx->pc != 0x10473Cu) { return; }
    ctx->pc = 0x10473Cu;
label_10473c:
    // 0x10473c: 0x104001d0
label_104740:
    if (ctx->pc == 0x104740u) {
        ctx->pc = 0x104740u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x104744u;
        goto label_104744;
    }
    ctx->pc = 0x10473Cu;
    {
        const bool branch_taken_0x10473c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104740u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x10473c) {
            ctx->pc = 0x104E80u;
            goto label_104e80;
        }
    }
    ctx->pc = 0x104744u;
label_104744:
    // 0x104744: 0x1000ffb6
label_104748:
    if (ctx->pc == 0x104748u) {
        ctx->pc = 0x10474Cu;
        goto label_10474c;
    }
    ctx->pc = 0x104744u;
    {
        const bool branch_taken_0x104744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x104744) {
            ctx->pc = 0x104620u;
            goto label_104620;
        }
    }
    ctx->pc = 0x10474Cu;
label_10474c:
    // 0x10474c: 0x0
    ctx->pc = 0x10474cu;
    // NOP
label_104750:
    // 0x104750: 0x8fa20008
    ctx->pc = 0x104750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_104754:
    // 0x104754: 0x8fa40034
    ctx->pc = 0x104754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_104758:
    // 0x104758: 0x8fb10018
    ctx->pc = 0x104758u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_10475c:
    // 0x10475c: 0x28560002
    ctx->pc = 0x10475cu;
    SET_GPR_U32(ctx, 22, SLT32(GPR_S32(ctx, 2), 2));
label_104760:
    // 0x104760: 0x8fb2001c
    ctx->pc = 0x104760u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_104764:
    // 0x104764: 0xafa00048
    ctx->pc = 0x104764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_104768:
    // 0x104768: 0x10800028
label_10476c:
    if (ctx->pc == 0x10476Cu) {
        ctx->pc = 0x10476Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x104770u;
        goto label_104770;
    }
    ctx->pc = 0x104768u;
    {
        const bool branch_taken_0x104768 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10476Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        if (branch_taken_0x104768) {
            ctx->pc = 0x10480Cu;
            goto label_10480c;
        }
    }
    ctx->pc = 0x104770u;
label_104770:
    // 0x104770: 0x52c00009
label_104774:
    if (ctx->pc == 0x104774u) {
        ctx->pc = 0x104774u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x104778u;
        goto label_104778;
    }
    ctx->pc = 0x104770u;
    {
        const bool branch_taken_0x104770 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x104770) {
            ctx->pc = 0x104774u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x104798u;
            goto label_104798;
        }
    }
    ctx->pc = 0x104778u;
label_104778:
    // 0x104778: 0x8fa20040
    ctx->pc = 0x104778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10477c:
    // 0x10477c: 0x14400019
label_104780:
    if (ctx->pc == 0x104780u) {
        ctx->pc = 0x104780u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 1075));
        ctx->pc = 0x104784u;
        goto label_104784;
    }
    ctx->pc = 0x10477Cu;
    {
        const bool branch_taken_0x10477c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104780u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 1075));
        if (branch_taken_0x10477c) {
            ctx->pc = 0x1047E4u;
            goto label_1047e4;
        }
    }
    ctx->pc = 0x104784u;
label_104784:
    // 0x104784: 0x8fa30004
    ctx->pc = 0x104784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_104788:
    // 0x104788: 0x24020036
    ctx->pc = 0x104788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
label_10478c:
    // 0x10478c: 0x10000015
label_104790:
    if (ctx->pc == 0x104790u) {
        ctx->pc = 0x104790u;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x104794u;
        goto label_104794;
    }
    ctx->pc = 0x10478Cu;
    {
        const bool branch_taken_0x10478c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104790u;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x10478c) {
            ctx->pc = 0x1047E4u;
            goto label_1047e4;
        }
    }
    ctx->pc = 0x104794u;
label_104794:
    // 0x104794: 0x0
    ctx->pc = 0x104794u;
    // NOP
label_104798:
    // 0x104798: 0x8fa4001c
    ctx->pc = 0x104798u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_10479c:
    // 0x10479c: 0x2470ffff
    ctx->pc = 0x10479cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1047a0:
    // 0x1047a0: 0x90102a
    ctx->pc = 0x1047a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
label_1047a4:
    // 0x1047a4: 0x10400009
label_1047a8:
    if (ctx->pc == 0x1047A8u) {
        ctx->pc = 0x1047A8u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->pc = 0x1047ACu;
        goto label_1047ac;
    }
    ctx->pc = 0x1047A4u;
    {
        const bool branch_taken_0x1047a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1047A8u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        if (branch_taken_0x1047a4) {
            ctx->pc = 0x1047CCu;
            goto label_1047cc;
        }
    }
    ctx->pc = 0x1047ACu;
label_1047ac:
    // 0x1047ac: 0x8fa2001c
    ctx->pc = 0x1047acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1047b0:
    // 0x1047b0: 0x902d
    ctx->pc = 0x1047b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1047b4:
    // 0x1047b4: 0x8fa3003c
    ctx->pc = 0x1047b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1047b8:
    // 0x1047b8: 0x2028023
    ctx->pc = 0x1047b8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1047bc:
    // 0x1047bc: 0x501021
    ctx->pc = 0x1047bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1047c0:
    // 0x1047c0: 0x701821
    ctx->pc = 0x1047c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1047c4:
    // 0x1047c4: 0xafa2001c
    ctx->pc = 0x1047c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1047c8:
    // 0x1047c8: 0xafa3003c
    ctx->pc = 0x1047c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1047cc:
    // 0x1047cc: 0x8fb30020
    ctx->pc = 0x1047ccu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1047d0:
    // 0x1047d0: 0x6610005
label_1047d4:
    if (ctx->pc == 0x1047D4u) {
        ctx->pc = 0x1047D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x1047D8u;
        goto label_1047d8;
    }
    ctx->pc = 0x1047D0u;
    {
        const bool branch_taken_0x1047d0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1047D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x1047d0) {
            ctx->pc = 0x1047E8u;
            goto label_1047e8;
        }
    }
    ctx->pc = 0x1047D8u;
label_1047d8:
    // 0x1047d8: 0x8fa40018
    ctx->pc = 0x1047d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1047dc:
    // 0x1047dc: 0x938823
    ctx->pc = 0x1047dcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1047e0:
    // 0x1047e0: 0x982d
    ctx->pc = 0x1047e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1047e4:
    // 0x1047e4: 0x8fa20038
    ctx->pc = 0x1047e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1047e8:
    // 0x1047e8: 0x2e0202d
    ctx->pc = 0x1047e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1047ec:
    // 0x1047ec: 0x24050001
    ctx->pc = 0x1047ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1047f0:
    // 0x1047f0: 0x531021
    ctx->pc = 0x1047f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1047f4:
    // 0x1047f4: 0xc042092
label_1047f8:
    if (ctx->pc == 0x1047F8u) {
        ctx->pc = 0x1047F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1047FCu;
        goto label_1047fc;
    }
    ctx->pc = 0x1047F4u;
    SET_GPR_U32(ctx, 31, 0x1047FCu);
    ctx->pc = 0x1047F8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x108248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108248_0x108248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1047FCu; }
    }
    if (ctx->pc != 0x1047FCu) { return; }
    ctx->pc = 0x1047FCu;
label_1047fc:
    // 0x1047fc: 0x8fa30018
    ctx->pc = 0x1047fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_104800:
    // 0x104800: 0xafa2004c
    ctx->pc = 0x104800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104804:
    // 0x104804: 0x731821
    ctx->pc = 0x104804u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_104808:
    // 0x104808: 0xafa30018
    ctx->pc = 0x104808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_10480c:
    // 0x10480c: 0x1a20000d
label_104810:
    if (ctx->pc == 0x104810u) {
        ctx->pc = 0x104810u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x104814u;
        goto label_104814;
    }
    ctx->pc = 0x10480Cu;
    {
        const bool branch_taken_0x10480c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x104810u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        if (branch_taken_0x10480c) {
            ctx->pc = 0x104844u;
            goto label_104844;
        }
    }
    ctx->pc = 0x104814u;
label_104814:
    // 0x104814: 0x8fa40038
    ctx->pc = 0x104814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_104818:
    // 0x104818: 0x1880000a
label_10481c:
    if (ctx->pc == 0x10481Cu) {
        ctx->pc = 0x10481Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104820u;
        goto label_104820;
    }
    ctx->pc = 0x104818u;
    {
        const bool branch_taken_0x104818 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10481Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104818) {
            ctx->pc = 0x104844u;
            goto label_104844;
        }
    }
    ctx->pc = 0x104820u;
label_104820:
    // 0x104820: 0x233102a
    ctx->pc = 0x104820u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_104824:
    // 0x104824: 0x222980b
    ctx->pc = 0x104824u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 17));
label_104828:
    // 0x104828: 0x8fa20018
    ctx->pc = 0x104828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_10482c:
    // 0x10482c: 0x932023
    ctx->pc = 0x10482cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_104830:
    // 0x104830: 0x2338823
    ctx->pc = 0x104830u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_104834:
    // 0x104834: 0x531023
    ctx->pc = 0x104834u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_104838:
    // 0x104838: 0xafa40038
    ctx->pc = 0x104838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_10483c:
    // 0x10483c: 0xafa20018
    ctx->pc = 0x10483cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_104840:
    // 0x104840: 0x8fa3001c
    ctx->pc = 0x104840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_104844:
    // 0x104844: 0x18600023
label_104848:
    if (ctx->pc == 0x104848u) {
        ctx->pc = 0x104848u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10484Cu;
        goto label_10484c;
    }
    ctx->pc = 0x104844u;
    {
        const bool branch_taken_0x104844 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x104848u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104844) {
            ctx->pc = 0x1048D4u;
            goto label_1048d4;
        }
    }
    ctx->pc = 0x10484Cu;
label_10484c:
    // 0x10484c: 0x8fa40034
    ctx->pc = 0x10484cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_104850:
    // 0x104850: 0x1080001b
label_104854:
    if (ctx->pc == 0x104854u) {
        ctx->pc = 0x104854u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x104858u;
        goto label_104858;
    }
    ctx->pc = 0x104850u;
    {
        const bool branch_taken_0x104850 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x104854u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x104850) {
            ctx->pc = 0x1048C0u;
            goto label_1048c0;
        }
    }
    ctx->pc = 0x104858u;
label_104858:
    // 0x104858: 0x1a400010
label_10485c:
    if (ctx->pc == 0x10485Cu) {
        ctx->pc = 0x10485Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x104860u;
        goto label_104860;
    }
    ctx->pc = 0x104858u;
    {
        const bool branch_taken_0x104858 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x10485Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        if (branch_taken_0x104858) {
            ctx->pc = 0x10489Cu;
            goto label_10489c;
        }
    }
    ctx->pc = 0x104860u;
label_104860:
    // 0x104860: 0x8fa5004c
    ctx->pc = 0x104860u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104864:
    // 0x104864: 0x2e0202d
    ctx->pc = 0x104864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104868:
    // 0x104868: 0xc042124
label_10486c:
    if (ctx->pc == 0x10486Cu) {
        ctx->pc = 0x10486Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104870u;
        goto label_104870;
    }
    ctx->pc = 0x104868u;
    SET_GPR_U32(ctx, 31, 0x104870u);
    ctx->pc = 0x10486Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108490_0x108490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104870u; }
    }
    if (ctx->pc != 0x104870u) { return; }
    ctx->pc = 0x104870u;
label_104870:
    // 0x104870: 0x2e0202d
    ctx->pc = 0x104870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104874:
    // 0x104874: 0x8fa60044
    ctx->pc = 0x104874u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104878:
    // 0x104878: 0x40282d
    ctx->pc = 0x104878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10487c:
    // 0x10487c: 0xc0420a0
label_104880:
    if (ctx->pc == 0x104880u) {
        ctx->pc = 0x104880u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x104884u;
        goto label_104884;
    }
    ctx->pc = 0x10487Cu;
    SET_GPR_U32(ctx, 31, 0x104884u);
    ctx->pc = 0x104880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x108280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108280_0x108280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104884u; }
    }
    if (ctx->pc != 0x104884u) { return; }
    ctx->pc = 0x104884u;
label_104884:
    // 0x104884: 0x2e0202d
    ctx->pc = 0x104884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104888:
    // 0x104888: 0x8fa50044
    ctx->pc = 0x104888u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_10488c:
    // 0x10488c: 0xc041fa8
label_104890:
    if (ctx->pc == 0x104890u) {
        ctx->pc = 0x104890u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104894u;
        goto label_104894;
    }
    ctx->pc = 0x10488Cu;
    SET_GPR_U32(ctx, 31, 0x104894u);
    ctx->pc = 0x104890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104894u; }
    }
    if (ctx->pc != 0x104894u) { return; }
    ctx->pc = 0x104894u;
label_104894:
    // 0x104894: 0xafb00044
    ctx->pc = 0x104894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_104898:
    // 0x104898: 0x8fa2001c
    ctx->pc = 0x104898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_10489c:
    // 0x10489c: 0x528023
    ctx->pc = 0x10489cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1048a0:
    // 0x1048a0: 0x5200000c
label_1048a4:
    if (ctx->pc == 0x1048A4u) {
        ctx->pc = 0x1048A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1048A8u;
        goto label_1048a8;
    }
    ctx->pc = 0x1048A0u;
    {
        const bool branch_taken_0x1048a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1048a0) {
            ctx->pc = 0x1048A4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1048D4u;
            goto label_1048d4;
        }
    }
    ctx->pc = 0x1048A8u;
label_1048a8:
    // 0x1048a8: 0x8fa50044
    ctx->pc = 0x1048a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1048ac:
    // 0x1048ac: 0x200302d
    ctx->pc = 0x1048acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1048b0:
    // 0x1048b0: 0xc042124
label_1048b4:
    if (ctx->pc == 0x1048B4u) {
        ctx->pc = 0x1048B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1048B8u;
        goto label_1048b8;
    }
    ctx->pc = 0x1048B0u;
    SET_GPR_U32(ctx, 31, 0x1048B8u);
    ctx->pc = 0x1048B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108490_0x108490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1048B8u; }
    }
    if (ctx->pc != 0x1048B8u) { return; }
    ctx->pc = 0x1048B8u;
label_1048b8:
    // 0x1048b8: 0x10000005
label_1048bc:
    if (ctx->pc == 0x1048BCu) {
        ctx->pc = 0x1048BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x1048C0u;
        goto label_1048c0;
    }
    ctx->pc = 0x1048B8u;
    {
        const bool branch_taken_0x1048b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1048BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x1048b8) {
            ctx->pc = 0x1048D0u;
            goto label_1048d0;
        }
    }
    ctx->pc = 0x1048C0u;
label_1048c0:
    // 0x1048c0: 0x2e0202d
    ctx->pc = 0x1048c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1048c4:
    // 0x1048c4: 0xc042124
label_1048c8:
    if (ctx->pc == 0x1048C8u) {
        ctx->pc = 0x1048C8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x1048CCu;
        goto label_1048cc;
    }
    ctx->pc = 0x1048C4u;
    SET_GPR_U32(ctx, 31, 0x1048CCu);
    ctx->pc = 0x1048C8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x108490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108490_0x108490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1048CCu; }
    }
    if (ctx->pc != 0x1048CCu) { return; }
    ctx->pc = 0x1048CCu;
label_1048cc:
    // 0x1048cc: 0xafa20044
    ctx->pc = 0x1048ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1048d0:
    // 0x1048d0: 0x2e0202d
    ctx->pc = 0x1048d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1048d4:
    // 0x1048d4: 0xc042092
label_1048d8:
    if (ctx->pc == 0x1048D8u) {
        ctx->pc = 0x1048D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1048DCu;
        goto label_1048dc;
    }
    ctx->pc = 0x1048D4u;
    SET_GPR_U32(ctx, 31, 0x1048DCu);
    ctx->pc = 0x1048D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x108248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108248_0x108248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1048DCu; }
    }
    if (ctx->pc != 0x1048DCu) { return; }
    ctx->pc = 0x1048DCu;
label_1048dc:
    // 0x1048dc: 0x8fa3003c
    ctx->pc = 0x1048dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1048e0:
    // 0x1048e0: 0x18600006
label_1048e4:
    if (ctx->pc == 0x1048E4u) {
        ctx->pc = 0x1048E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x1048E8u;
        goto label_1048e8;
    }
    ctx->pc = 0x1048E0u;
    {
        const bool branch_taken_0x1048e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1048E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        if (branch_taken_0x1048e0) {
            ctx->pc = 0x1048FCu;
            goto label_1048fc;
        }
    }
    ctx->pc = 0x1048E8u;
label_1048e8:
    // 0x1048e8: 0x40282d
    ctx->pc = 0x1048e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1048ec:
    // 0x1048ec: 0x2e0202d
    ctx->pc = 0x1048ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1048f0:
    // 0x1048f0: 0xc042124
label_1048f4:
    if (ctx->pc == 0x1048F4u) {
        ctx->pc = 0x1048F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1048F8u;
        goto label_1048f8;
    }
    ctx->pc = 0x1048F0u;
    SET_GPR_U32(ctx, 31, 0x1048F8u);
    ctx->pc = 0x1048F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108490_0x108490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1048F8u; }
    }
    if (ctx->pc != 0x1048F8u) { return; }
    ctx->pc = 0x1048F8u;
label_1048f8:
    // 0x1048f8: 0xafa20050
    ctx->pc = 0x1048f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1048fc:
    // 0x1048fc: 0x12c00011
label_104900:
    if (ctx->pc == 0x104900u) {
        ctx->pc = 0x104900u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104904u;
        goto label_104904;
    }
    ctx->pc = 0x1048FCu;
    {
        const bool branch_taken_0x1048fc = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x104900u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1048fc) {
            ctx->pc = 0x104944u;
            goto label_104944;
        }
    }
    ctx->pc = 0x104904u;
label_104904:
    // 0x104904: 0x2402ffff
    ctx->pc = 0x104904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_104908:
    // 0x104908: 0x2133a
    ctx->pc = 0x104908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_10490c:
    // 0x10490c: 0x2821024
    ctx->pc = 0x10490cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_104910:
    // 0x104910: 0x1440000d
label_104914:
    if (ctx->pc == 0x104914u) {
        ctx->pc = 0x104914u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x104918u;
        goto label_104918;
    }
    ctx->pc = 0x104910u;
    {
        const bool branch_taken_0x104910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104914u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x104910) {
            ctx->pc = 0x104948u;
            goto label_104948;
        }
    }
    ctx->pc = 0x104918u;
label_104918:
    // 0x104918: 0x14103f
    ctx->pc = 0x104918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
label_10491c:
    // 0x10491c: 0x3c037ff0
    ctx->pc = 0x10491cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_104920:
    // 0x104920: 0x431024
    ctx->pc = 0x104920u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_104924:
    // 0x104924: 0x10400007
label_104928:
    if (ctx->pc == 0x104928u) {
        ctx->pc = 0x104928u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x10492Cu;
        goto label_10492c;
    }
    ctx->pc = 0x104924u;
    {
        const bool branch_taken_0x104924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104928u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x104924) {
            ctx->pc = 0x104944u;
            goto label_104944;
        }
    }
    ctx->pc = 0x10492Cu;
label_10492c:
    // 0x10492c: 0x24100001
    ctx->pc = 0x10492cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_104930:
    // 0x104930: 0x8fa20038
    ctx->pc = 0x104930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_104934:
    // 0x104934: 0x24840001
    ctx->pc = 0x104934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_104938:
    // 0x104938: 0x24420001
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_10493c:
    // 0x10493c: 0xafa40018
    ctx->pc = 0x10493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_104940:
    // 0x104940: 0xafa20038
    ctx->pc = 0x104940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_104944:
    // 0x104944: 0x8fa3003c
    ctx->pc = 0x104944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_104948:
    // 0x104948: 0x10600009
label_10494c:
    if (ctx->pc == 0x10494Cu) {
        ctx->pc = 0x10494Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x104950u;
        goto label_104950;
    }
    ctx->pc = 0x104948u;
    {
        const bool branch_taken_0x104948 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10494Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x104948) {
            ctx->pc = 0x104970u;
            goto label_104970;
        }
    }
    ctx->pc = 0x104950u;
label_104950:
    // 0x104950: 0x8c820010
    ctx->pc = 0x104950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_104954:
    // 0x104954: 0x21080
    ctx->pc = 0x104954u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_104958:
    // 0x104958: 0x441021
    ctx->pc = 0x104958u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10495c:
    // 0x10495c: 0xc042042
label_104960:
    if (ctx->pc == 0x104960u) {
        ctx->pc = 0x104960u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x104964u;
        goto label_104964;
    }
    ctx->pc = 0x10495Cu;
    SET_GPR_U32(ctx, 31, 0x104964u);
    ctx->pc = 0x104960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x108108u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108108_0x108108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104964u; }
    }
    if (ctx->pc != 0x104964u) { return; }
    ctx->pc = 0x104964u;
label_104964:
    // 0x104964: 0x8fa30038
    ctx->pc = 0x104964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_104968:
    // 0x104968: 0x10000003
label_10496c:
    if (ctx->pc == 0x10496Cu) {
        ctx->pc = 0x10496Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x104970u;
        goto label_104970;
    }
    ctx->pc = 0x104968u;
    {
        const bool branch_taken_0x104968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10496Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x104968) {
            ctx->pc = 0x104978u;
            goto label_104978;
        }
    }
    ctx->pc = 0x104970u;
label_104970:
    // 0x104970: 0x8fa40038
    ctx->pc = 0x104970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_104974:
    // 0x104974: 0x24820001
    ctx->pc = 0x104974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_104978:
    // 0x104978: 0x3053001f
    ctx->pc = 0x104978u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), 31));
label_10497c:
    // 0x10497c: 0x12600002
label_104980:
    if (ctx->pc == 0x104980u) {
        ctx->pc = 0x104980u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x104984u;
        goto label_104984;
    }
    ctx->pc = 0x10497Cu;
    {
        const bool branch_taken_0x10497c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x104980u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x10497c) {
            ctx->pc = 0x104988u;
            goto label_104988;
        }
    }
    ctx->pc = 0x104984u;
label_104984:
    // 0x104984: 0x539823
    ctx->pc = 0x104984u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_104988:
    // 0x104988: 0x2a620005
    ctx->pc = 0x104988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 5));
label_10498c:
    // 0x10498c: 0x1440000a
label_104990:
    if (ctx->pc == 0x104990u) {
        ctx->pc = 0x104990u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        ctx->pc = 0x104994u;
        goto label_104994;
    }
    ctx->pc = 0x10498Cu;
    {
        const bool branch_taken_0x10498c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104990u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x10498c) {
            ctx->pc = 0x1049B8u;
            goto label_1049b8;
        }
    }
    ctx->pc = 0x104994u;
label_104994:
    // 0x104994: 0x8fa20038
    ctx->pc = 0x104994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_104998:
    // 0x104998: 0x2673fffc
    ctx->pc = 0x104998u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967292));
label_10499c:
    // 0x10499c: 0x8fa30018
    ctx->pc = 0x10499cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1049a0:
    // 0x1049a0: 0x2338821
    ctx->pc = 0x1049a0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1049a4:
    // 0x1049a4: 0x531021
    ctx->pc = 0x1049a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1049a8:
    // 0x1049a8: 0x731821
    ctx->pc = 0x1049a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1049ac:
    // 0x1049ac: 0xafa20038
    ctx->pc = 0x1049acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1049b0:
    // 0x1049b0: 0x1000000b
label_1049b4:
    if (ctx->pc == 0x1049B4u) {
        ctx->pc = 0x1049B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x1049B8u;
        goto label_1049b8;
    }
    ctx->pc = 0x1049B0u;
    {
        const bool branch_taken_0x1049b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1049B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x1049b0) {
            ctx->pc = 0x1049E0u;
            goto label_1049e0;
        }
    }
    ctx->pc = 0x1049B8u;
label_1049b8:
    // 0x1049b8: 0x1040000a
label_1049bc:
    if (ctx->pc == 0x1049BCu) {
        ctx->pc = 0x1049BCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x1049C0u;
        goto label_1049c0;
    }
    ctx->pc = 0x1049B8u;
    {
        const bool branch_taken_0x1049b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1049BCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x1049b8) {
            ctx->pc = 0x1049E4u;
            goto label_1049e4;
        }
    }
    ctx->pc = 0x1049C0u;
label_1049c0:
    // 0x1049c0: 0x8fa40038
    ctx->pc = 0x1049c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1049c4:
    // 0x1049c4: 0x2673001c
    ctx->pc = 0x1049c4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 28));
label_1049c8:
    // 0x1049c8: 0x8fa20018
    ctx->pc = 0x1049c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1049cc:
    // 0x1049cc: 0x2338821
    ctx->pc = 0x1049ccu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1049d0:
    // 0x1049d0: 0x932021
    ctx->pc = 0x1049d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1049d4:
    // 0x1049d4: 0x531021
    ctx->pc = 0x1049d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1049d8:
    // 0x1049d8: 0xafa40038
    ctx->pc = 0x1049d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1049dc:
    // 0x1049dc: 0xafa20018
    ctx->pc = 0x1049dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1049e0:
    // 0x1049e0: 0x8fa30018
    ctx->pc = 0x1049e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1049e4:
    // 0x1049e4: 0x58600007
label_1049e8:
    if (ctx->pc == 0x1049E8u) {
        ctx->pc = 0x1049E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x1049ECu;
        goto label_1049ec;
    }
    ctx->pc = 0x1049E4u;
    {
        const bool branch_taken_0x1049e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1049e4) {
            ctx->pc = 0x1049E8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->pc = 0x104A04u;
            goto label_104a04;
        }
    }
    ctx->pc = 0x1049ECu;
label_1049ec:
    // 0x1049ec: 0x8fa50044
    ctx->pc = 0x1049ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1049f0:
    // 0x1049f0: 0x60302d
    ctx->pc = 0x1049f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1049f4:
    // 0x1049f4: 0xc042164
label_1049f8:
    if (ctx->pc == 0x1049F8u) {
        ctx->pc = 0x1049F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1049FCu;
        goto label_1049fc;
    }
    ctx->pc = 0x1049F4u;
    SET_GPR_U32(ctx, 31, 0x1049FCu);
    ctx->pc = 0x1049F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1049FCu; }
    }
    if (ctx->pc != 0x1049FCu) { return; }
    ctx->pc = 0x1049FCu;
label_1049fc:
    // 0x1049fc: 0xafa20044
    ctx->pc = 0x1049fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_104a00:
    // 0x104a00: 0x8fa40038
    ctx->pc = 0x104a00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_104a04:
    // 0x104a04: 0x18800007
label_104a08:
    if (ctx->pc == 0x104A08u) {
        ctx->pc = 0x104A08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x104A0Cu;
        goto label_104a0c;
    }
    ctx->pc = 0x104A04u;
    {
        const bool branch_taken_0x104a04 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x104A08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x104a04) {
            ctx->pc = 0x104A24u;
            goto label_104a24;
        }
    }
    ctx->pc = 0x104A0Cu;
label_104a0c:
    // 0x104a0c: 0x8fa50050
    ctx->pc = 0x104a0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104a10:
    // 0x104a10: 0x80302d
    ctx->pc = 0x104a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104a14:
    // 0x104a14: 0xc042164
label_104a18:
    if (ctx->pc == 0x104A18u) {
        ctx->pc = 0x104A18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104A1Cu;
        goto label_104a1c;
    }
    ctx->pc = 0x104A14u;
    SET_GPR_U32(ctx, 31, 0x104A1Cu);
    ctx->pc = 0x104A18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A1Cu; }
    }
    if (ctx->pc != 0x104A1Cu) { return; }
    ctx->pc = 0x104A1Cu;
label_104a1c:
    // 0x104a1c: 0xafa20050
    ctx->pc = 0x104a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_104a20:
    // 0x104a20: 0x8fa20030
    ctx->pc = 0x104a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_104a24:
    // 0x104a24: 0x10400016
label_104a28:
    if (ctx->pc == 0x104A28u) {
        ctx->pc = 0x104A28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x104A2Cu;
        goto label_104a2c;
    }
    ctx->pc = 0x104A24u;
    {
        const bool branch_taken_0x104a24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104A28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x104a24) {
            ctx->pc = 0x104A80u;
            goto label_104a80;
        }
    }
    ctx->pc = 0x104A2Cu;
label_104a2c:
    // 0x104a2c: 0xc0421ba
label_104a30:
    if (ctx->pc == 0x104A30u) {
        ctx->pc = 0x104A30u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x104A34u;
        goto label_104a34;
    }
    ctx->pc = 0x104A2Cu;
    SET_GPR_U32(ctx, 31, 0x104A34u);
    ctx->pc = 0x104A30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A34u; }
    }
    if (ctx->pc != 0x104A34u) { return; }
    ctx->pc = 0x104A34u;
label_104a34:
    // 0x104a34: 0x4430013
label_104a38:
    if (ctx->pc == 0x104A38u) {
        ctx->pc = 0x104A38u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x104A3Cu;
        goto label_104a3c;
    }
    ctx->pc = 0x104A34u;
    {
        const bool branch_taken_0x104a34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x104a34) {
            ctx->pc = 0x104A38u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x104A84u;
            goto label_104a84;
        }
    }
    ctx->pc = 0x104A3Cu;
label_104a3c:
    // 0x104a3c: 0x8fa50044
    ctx->pc = 0x104a3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104a40:
    // 0x104a40: 0x2e0202d
    ctx->pc = 0x104a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104a44:
    // 0x104a44: 0x2406000a
    ctx->pc = 0x104a44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104a48:
    // 0x104a48: 0xc041fb4
label_104a4c:
    if (ctx->pc == 0x104A4Cu) {
        ctx->pc = 0x104A4Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104A50u;
        goto label_104a50;
    }
    ctx->pc = 0x104A48u;
    SET_GPR_U32(ctx, 31, 0x104A50u);
    ctx->pc = 0x104A4Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A50u; }
    }
    if (ctx->pc != 0x104A50u) { return; }
    ctx->pc = 0x104A50u;
label_104a50:
    // 0x104a50: 0x27deffff
    ctx->pc = 0x104a50u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967295));
label_104a54:
    // 0x104a54: 0x8fa30034
    ctx->pc = 0x104a54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_104a58:
    // 0x104a58: 0x10600007
label_104a5c:
    if (ctx->pc == 0x104A5Cu) {
        ctx->pc = 0x104A5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x104A60u;
        goto label_104a60;
    }
    ctx->pc = 0x104A58u;
    {
        const bool branch_taken_0x104a58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x104A5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x104a58) {
            ctx->pc = 0x104A78u;
            goto label_104a78;
        }
    }
    ctx->pc = 0x104A60u;
label_104a60:
    // 0x104a60: 0x8fa5004c
    ctx->pc = 0x104a60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104a64:
    // 0x104a64: 0x2e0202d
    ctx->pc = 0x104a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104a68:
    // 0x104a68: 0x2406000a
    ctx->pc = 0x104a68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104a6c:
    // 0x104a6c: 0xc041fb4
label_104a70:
    if (ctx->pc == 0x104A70u) {
        ctx->pc = 0x104A70u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104A74u;
        goto label_104a74;
    }
    ctx->pc = 0x104A6Cu;
    SET_GPR_U32(ctx, 31, 0x104A74u);
    ctx->pc = 0x104A70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A74u; }
    }
    if (ctx->pc != 0x104A74u) { return; }
    ctx->pc = 0x104A74u;
label_104a74:
    // 0x104a74: 0xafa2004c
    ctx->pc = 0x104a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104a78:
    // 0x104a78: 0x8fa40028
    ctx->pc = 0x104a78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_104a7c:
    // 0x104a7c: 0xafa40020
    ctx->pc = 0x104a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_104a80:
    // 0x104a80: 0x8fa20020
    ctx->pc = 0x104a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104a84:
    // 0x104a84: 0x1c40001c
label_104a88:
    if (ctx->pc == 0x104A88u) {
        ctx->pc = 0x104A88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x104A8Cu;
        goto label_104a8c;
    }
    ctx->pc = 0x104A84u;
    {
        const bool branch_taken_0x104a84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x104A88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x104a84) {
            ctx->pc = 0x104AF8u;
            goto label_104af8;
        }
    }
    ctx->pc = 0x104A8Cu;
label_104a8c:
    // 0x104a8c: 0x8fa30008
    ctx->pc = 0x104a8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_104a90:
    // 0x104a90: 0x28620003
    ctx->pc = 0x104a90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
label_104a94:
    // 0x104a94: 0x14400018
label_104a98:
    if (ctx->pc == 0x104A98u) {
        ctx->pc = 0x104A9Cu;
        goto label_104a9c;
    }
    ctx->pc = 0x104A94u;
    {
        const bool branch_taken_0x104a94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x104a94) {
            ctx->pc = 0x104AF8u;
            goto label_104af8;
        }
    }
    ctx->pc = 0x104A9Cu;
label_104a9c:
    // 0x104a9c: 0x8fa40020
    ctx->pc = 0x104a9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104aa0:
    // 0x104aa0: 0x480000b
label_104aa4:
    if (ctx->pc == 0x104AA4u) {
        ctx->pc = 0x104AA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x104AA8u;
        goto label_104aa8;
    }
    ctx->pc = 0x104AA0u;
    {
        const bool branch_taken_0x104aa0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x104AA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x104aa0) {
            ctx->pc = 0x104AD0u;
            goto label_104ad0;
        }
    }
    ctx->pc = 0x104AA8u;
label_104aa8:
    // 0x104aa8: 0x2e0202d
    ctx->pc = 0x104aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104aac:
    // 0x104aac: 0x24060005
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
label_104ab0:
    // 0x104ab0: 0xc041fb4
label_104ab4:
    if (ctx->pc == 0x104AB4u) {
        ctx->pc = 0x104AB4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104AB8u;
        goto label_104ab8;
    }
    ctx->pc = 0x104AB0u;
    SET_GPR_U32(ctx, 31, 0x104AB8u);
    ctx->pc = 0x104AB4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104AB8u; }
    }
    if (ctx->pc != 0x104AB8u) { return; }
    ctx->pc = 0x104AB8u;
label_104ab8:
    // 0x104ab8: 0x8fa40044
    ctx->pc = 0x104ab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104abc:
    // 0x104abc: 0x40282d
    ctx->pc = 0x104abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104ac0:
    // 0x104ac0: 0xc0421ba
label_104ac4:
    if (ctx->pc == 0x104AC4u) {
        ctx->pc = 0x104AC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x104AC8u;
        goto label_104ac8;
    }
    ctx->pc = 0x104AC0u;
    SET_GPR_U32(ctx, 31, 0x104AC8u);
    ctx->pc = 0x104AC4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104AC8u; }
    }
    if (ctx->pc != 0x104AC8u) { return; }
    ctx->pc = 0x104AC8u;
label_104ac8:
    // 0x104ac8: 0x5c400005
label_104acc:
    if (ctx->pc == 0x104ACCu) {
        ctx->pc = 0x104ACCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x104AD0u;
        goto label_104ad0;
    }
    ctx->pc = 0x104AC8u;
    {
        const bool branch_taken_0x104ac8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x104ac8) {
            ctx->pc = 0x104ACCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->pc = 0x104AE0u;
            goto label_104ae0;
        }
    }
    ctx->pc = 0x104AD0u;
label_104ad0:
    // 0x104ad0: 0x8fa2000c
    ctx->pc = 0x104ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_104ad4:
    // 0x104ad4: 0x100000db
label_104ad8:
    if (ctx->pc == 0x104AD8u) {
        ctx->pc = 0x104AD8u;
        SET_GPR_U32(ctx, 30, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x104ADCu;
        goto label_104adc;
    }
    ctx->pc = 0x104AD4u;
    {
        const bool branch_taken_0x104ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104AD8u;
        SET_GPR_U32(ctx, 30, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x104ad4) {
            ctx->pc = 0x104E44u;
            goto label_104e44;
        }
    }
    ctx->pc = 0x104ADCu;
label_104adc:
    // 0x104adc: 0x0
    ctx->pc = 0x104adcu;
    // NOP
label_104ae0:
    // 0x104ae0: 0x24020031
    ctx->pc = 0x104ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_104ae4:
    // 0x104ae4: 0x27de0001
    ctx->pc = 0x104ae4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
label_104ae8:
    // 0x104ae8: 0x24750001
    ctx->pc = 0x104ae8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
label_104aec:
    // 0x104aec: 0x100000d5
label_104af0:
    if (ctx->pc == 0x104AF0u) {
        ctx->pc = 0x104AF0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x104AF4u;
        goto label_104af4;
    }
    ctx->pc = 0x104AECu;
    {
        const bool branch_taken_0x104aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104AF0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x104aec) {
            ctx->pc = 0x104E44u;
            goto label_104e44;
        }
    }
    ctx->pc = 0x104AF4u;
label_104af4:
    // 0x104af4: 0x0
    ctx->pc = 0x104af4u;
    // NOP
label_104af8:
    // 0x104af8: 0x1080009a
label_104afc:
    if (ctx->pc == 0x104AFCu) {
        ctx->pc = 0x104AFCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x104B00u;
        goto label_104b00;
    }
    ctx->pc = 0x104AF8u;
    {
        const bool branch_taken_0x104af8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x104AFCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x104af8) {
            ctx->pc = 0x104D64u;
            goto label_104d64;
        }
    }
    ctx->pc = 0x104B00u;
label_104b00:
    // 0x104b00: 0x1a200007
label_104b04:
    if (ctx->pc == 0x104B04u) {
        ctx->pc = 0x104B04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x104B08u;
        goto label_104b08;
    }
    ctx->pc = 0x104B00u;
    {
        const bool branch_taken_0x104b00 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x104B04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        if (branch_taken_0x104b00) {
            ctx->pc = 0x104B20u;
            goto label_104b20;
        }
    }
    ctx->pc = 0x104B08u;
label_104b08:
    // 0x104b08: 0x8fa5004c
    ctx->pc = 0x104b08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104b0c:
    // 0x104b0c: 0x220302d
    ctx->pc = 0x104b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104b10:
    // 0x104b10: 0xc042164
label_104b14:
    if (ctx->pc == 0x104B14u) {
        ctx->pc = 0x104B14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104B18u;
        goto label_104b18;
    }
    ctx->pc = 0x104B10u;
    SET_GPR_U32(ctx, 31, 0x104B18u);
    ctx->pc = 0x104B14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B18u; }
    }
    if (ctx->pc != 0x104B18u) { return; }
    ctx->pc = 0x104B18u;
label_104b18:
    // 0x104b18: 0xafa2004c
    ctx->pc = 0x104b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104b1c:
    // 0x104b1c: 0x8fa2004c
    ctx->pc = 0x104b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104b20:
    // 0x104b20: 0x12000011
label_104b24:
    if (ctx->pc == 0x104B24u) {
        ctx->pc = 0x104B24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x104B28u;
        goto label_104b28;
    }
    ctx->pc = 0x104B20u;
    {
        const bool branch_taken_0x104b20 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x104B24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x104b20) {
            ctx->pc = 0x104B68u;
            goto label_104b68;
        }
    }
    ctx->pc = 0x104B28u;
label_104b28:
    // 0x104b28: 0x8c450004
    ctx->pc = 0x104b28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_104b2c:
    // 0x104b2c: 0xc041f7e
label_104b30:
    if (ctx->pc == 0x104B30u) {
        ctx->pc = 0x104B30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104B34u;
        goto label_104b34;
    }
    ctx->pc = 0x104B2Cu;
    SET_GPR_U32(ctx, 31, 0x104B34u);
    ctx->pc = 0x104B30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B34u; }
    }
    if (ctx->pc != 0x104B34u) { return; }
    ctx->pc = 0x104B34u;
label_104b34:
    // 0x104b34: 0x8fa30048
    ctx->pc = 0x104b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_104b38:
    // 0x104b38: 0x2444000c
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
label_104b3c:
    // 0x104b3c: 0xafa2004c
    ctx->pc = 0x104b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104b40:
    // 0x104b40: 0x2465000c
    ctx->pc = 0x104b40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 12));
label_104b44:
    // 0x104b44: 0x8c660010
    ctx->pc = 0x104b44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_104b48:
    // 0x104b48: 0x63080
    ctx->pc = 0x104b48u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
label_104b4c:
    // 0x104b4c: 0xc041eac
label_104b50:
    if (ctx->pc == 0x104B50u) {
        ctx->pc = 0x104B50u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x104B54u;
        goto label_104b54;
    }
    ctx->pc = 0x104B4Cu;
    SET_GPR_U32(ctx, 31, 0x104B54u);
    ctx->pc = 0x104B50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B54u; }
    }
    if (ctx->pc != 0x104B54u) { return; }
    ctx->pc = 0x104B54u;
label_104b54:
    // 0x104b54: 0x2e0202d
    ctx->pc = 0x104b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104b58:
    // 0x104b58: 0x8fa5004c
    ctx->pc = 0x104b58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104b5c:
    // 0x104b5c: 0xc042164
label_104b60:
    if (ctx->pc == 0x104B60u) {
        ctx->pc = 0x104B60u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x104B64u;
        goto label_104b64;
    }
    ctx->pc = 0x104B5Cu;
    SET_GPR_U32(ctx, 31, 0x104B64u);
    ctx->pc = 0x104B60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B64u; }
    }
    if (ctx->pc != 0x104B64u) { return; }
    ctx->pc = 0x104B64u;
label_104b64:
    // 0x104b64: 0xafa2004c
    ctx->pc = 0x104b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104b68:
    // 0x104b68: 0x14103c
    ctx->pc = 0x104b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_104b6c:
    // 0x104b6c: 0x2103f
    ctx->pc = 0x104b6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_104b70:
    // 0x104b70: 0x24130001
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_104b74:
    // 0x104b74: 0x10000020
label_104b78:
    if (ctx->pc == 0x104B78u) {
        ctx->pc = 0x104B78u;
        SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x104B7Cu;
        goto label_104b7c;
    }
    ctx->pc = 0x104B74u;
    {
        const bool branch_taken_0x104b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104B78u;
        SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x104b74) {
            ctx->pc = 0x104BF8u;
            goto label_104bf8;
        }
    }
    ctx->pc = 0x104B7Cu;
label_104b7c:
    // 0x104b7c: 0x0
    ctx->pc = 0x104b7cu;
    // NOP
label_104b80:
    // 0x104b80: 0x8fa50044
    ctx->pc = 0x104b80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104b84:
    // 0x104b84: 0x2e0202d
    ctx->pc = 0x104b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104b88:
    // 0x104b88: 0x2406000a
    ctx->pc = 0x104b88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104b8c:
    // 0x104b8c: 0xc041fb4
label_104b90:
    if (ctx->pc == 0x104B90u) {
        ctx->pc = 0x104B90u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104B94u;
        goto label_104b94;
    }
    ctx->pc = 0x104B8Cu;
    SET_GPR_U32(ctx, 31, 0x104B94u);
    ctx->pc = 0x104B90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B94u; }
    }
    if (ctx->pc != 0x104B94u) { return; }
    ctx->pc = 0x104B94u;
label_104b94:
    // 0x104b94: 0xafa20044
    ctx->pc = 0x104b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_104b98:
    // 0x104b98: 0x8fa40048
    ctx->pc = 0x104b98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_104b9c:
    // 0x104b9c: 0x8fa2004c
    ctx->pc = 0x104b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104ba0:
    // 0x104ba0: 0x14820009
label_104ba4:
    if (ctx->pc == 0x104BA4u) {
        ctx->pc = 0x104BA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x104BA8u;
        goto label_104ba8;
    }
    ctx->pc = 0x104BA0u;
    {
        const bool branch_taken_0x104ba0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x104BA4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x104ba0) {
            ctx->pc = 0x104BC8u;
            goto label_104bc8;
        }
    }
    ctx->pc = 0x104BA8u;
label_104ba8:
    // 0x104ba8: 0x40282d
    ctx->pc = 0x104ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104bac:
    // 0x104bac: 0x2e0202d
    ctx->pc = 0x104bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104bb0:
    // 0x104bb0: 0x2406000a
    ctx->pc = 0x104bb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104bb4:
    // 0x104bb4: 0xc041fb4
label_104bb8:
    if (ctx->pc == 0x104BB8u) {
        ctx->pc = 0x104BB8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104BBCu;
        goto label_104bbc;
    }
    ctx->pc = 0x104BB4u;
    SET_GPR_U32(ctx, 31, 0x104BBCu);
    ctx->pc = 0x104BB8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104BBCu; }
    }
    if (ctx->pc != 0x104BBCu) { return; }
    ctx->pc = 0x104BBCu;
label_104bbc:
    // 0x104bbc: 0xafa2004c
    ctx->pc = 0x104bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104bc0:
    // 0x104bc0: 0x1000000c
label_104bc4:
    if (ctx->pc == 0x104BC4u) {
        ctx->pc = 0x104BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x104BC8u;
        goto label_104bc8;
    }
    ctx->pc = 0x104BC0u;
    {
        const bool branch_taken_0x104bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x104bc0) {
            ctx->pc = 0x104BF4u;
            goto label_104bf4;
        }
    }
    ctx->pc = 0x104BC8u;
label_104bc8:
    // 0x104bc8: 0x2406000a
    ctx->pc = 0x104bc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104bcc:
    // 0x104bcc: 0x382d
    ctx->pc = 0x104bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104bd0:
    // 0x104bd0: 0xc041fb4
label_104bd4:
    if (ctx->pc == 0x104BD4u) {
        ctx->pc = 0x104BD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104BD8u;
        goto label_104bd8;
    }
    ctx->pc = 0x104BD0u;
    SET_GPR_U32(ctx, 31, 0x104BD8u);
    ctx->pc = 0x104BD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104BD8u; }
    }
    if (ctx->pc != 0x104BD8u) { return; }
    ctx->pc = 0x104BD8u;
label_104bd8:
    // 0x104bd8: 0x2e0202d
    ctx->pc = 0x104bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104bdc:
    // 0x104bdc: 0x8fa5004c
    ctx->pc = 0x104bdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104be0:
    // 0x104be0: 0x2406000a
    ctx->pc = 0x104be0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104be4:
    // 0x104be4: 0x382d
    ctx->pc = 0x104be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104be8:
    // 0x104be8: 0xc041fb4
label_104bec:
    if (ctx->pc == 0x104BECu) {
        ctx->pc = 0x104BECu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x104BF0u;
        goto label_104bf0;
    }
    ctx->pc = 0x104BE8u;
    SET_GPR_U32(ctx, 31, 0x104BF0u);
    ctx->pc = 0x104BECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104BF0u; }
    }
    if (ctx->pc != 0x104BF0u) { return; }
    ctx->pc = 0x104BF0u;
label_104bf0:
    // 0x104bf0: 0xafa2004c
    ctx->pc = 0x104bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_104bf4:
    // 0x104bf4: 0x26730001
    ctx->pc = 0x104bf4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_104bf8:
    // 0x104bf8: 0x8fa40044
    ctx->pc = 0x104bf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104bfc:
    // 0x104bfc: 0xc040e92
label_104c00:
    if (ctx->pc == 0x104C00u) {
        ctx->pc = 0x104C00u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x104C04u;
        goto label_104c04;
    }
    ctx->pc = 0x104BFCu;
    SET_GPR_U32(ctx, 31, 0x104C04u);
    ctx->pc = 0x104C00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x103A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103A48_0x103a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C04u; }
    }
    if (ctx->pc != 0x104C04u) { return; }
    ctx->pc = 0x104C04u;
label_104c04:
    // 0x104c04: 0x8fa40044
    ctx->pc = 0x104c04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104c08:
    // 0x104c08: 0x24540030
    ctx->pc = 0x104c08u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 48));
label_104c0c:
    // 0x104c0c: 0xc0421ba
label_104c10:
    if (ctx->pc == 0x104C10u) {
        ctx->pc = 0x104C10u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x104C14u;
        goto label_104c14;
    }
    ctx->pc = 0x104C0Cu;
    SET_GPR_U32(ctx, 31, 0x104C14u);
    ctx->pc = 0x104C10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C14u; }
    }
    if (ctx->pc != 0x104C14u) { return; }
    ctx->pc = 0x104C14u;
label_104c14:
    // 0x104c14: 0x2e0202d
    ctx->pc = 0x104c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104c18:
    // 0x104c18: 0x8fa50050
    ctx->pc = 0x104c18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104c1c:
    // 0x104c1c: 0x40802d
    ctx->pc = 0x104c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104c20:
    // 0x104c20: 0xc0421d4
label_104c24:
    if (ctx->pc == 0x104C24u) {
        ctx->pc = 0x104C24u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x104C28u;
        goto label_104c28;
    }
    ctx->pc = 0x104C20u;
    SET_GPR_U32(ctx, 31, 0x104C28u);
    ctx->pc = 0x104C24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x108750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108750_0x108750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C28u; }
    }
    if (ctx->pc != 0x104C28u) { return; }
    ctx->pc = 0x104C28u;
label_104c28:
    // 0x104c28: 0x40902d
    ctx->pc = 0x104c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104c2c:
    // 0x104c2c: 0x8e42000c
    ctx->pc = 0x104c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_104c30:
    // 0x104c30: 0x14400005
label_104c34:
    if (ctx->pc == 0x104C34u) {
        ctx->pc = 0x104C34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x104C38u;
        goto label_104c38;
    }
    ctx->pc = 0x104C30u;
    {
        const bool branch_taken_0x104c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104C34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x104c30) {
            ctx->pc = 0x104C48u;
            goto label_104c48;
        }
    }
    ctx->pc = 0x104C38u;
label_104c38:
    // 0x104c38: 0x8fa40044
    ctx->pc = 0x104c38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104c3c:
    // 0x104c3c: 0xc0421ba
label_104c40:
    if (ctx->pc == 0x104C40u) {
        ctx->pc = 0x104C40u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104C44u;
        goto label_104c44;
    }
    ctx->pc = 0x104C3Cu;
    SET_GPR_U32(ctx, 31, 0x104C44u);
    ctx->pc = 0x104C40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C44u; }
    }
    if (ctx->pc != 0x104C44u) { return; }
    ctx->pc = 0x104C44u;
label_104c44:
    // 0x104c44: 0x40882d
    ctx->pc = 0x104c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104c48:
    // 0x104c48: 0x240282d
    ctx->pc = 0x104c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104c4c:
    // 0x104c4c: 0xc041fa8
label_104c50:
    if (ctx->pc == 0x104C50u) {
        ctx->pc = 0x104C50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104C54u;
        goto label_104c54;
    }
    ctx->pc = 0x104C4Cu;
    SET_GPR_U32(ctx, 31, 0x104C54u);
    ctx->pc = 0x104C50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C54u; }
    }
    if (ctx->pc != 0x104C54u) { return; }
    ctx->pc = 0x104C54u;
label_104c54:
    // 0x104c54: 0x1620000a
label_104c58:
    if (ctx->pc == 0x104C58u) {
        ctx->pc = 0x104C58u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x104C5Cu;
        goto label_104c5c;
    }
    ctx->pc = 0x104C54u;
    {
        const bool branch_taken_0x104c54 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x104C58u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x104c54) {
            ctx->pc = 0x104C80u;
            goto label_104c80;
        }
    }
    ctx->pc = 0x104C5Cu;
label_104c5c:
    // 0x104c5c: 0x14600008
label_104c60:
    if (ctx->pc == 0x104C60u) {
        ctx->pc = 0x104C64u;
        goto label_104c64;
    }
    ctx->pc = 0x104C5Cu;
    {
        const bool branch_taken_0x104c5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x104c5c) {
            ctx->pc = 0x104C80u;
            goto label_104c80;
        }
    }
    ctx->pc = 0x104C64u;
label_104c64:
    // 0x104c64: 0x16c00006
label_104c68:
    if (ctx->pc == 0x104C68u) {
        ctx->pc = 0x104C68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x104C6Cu;
        goto label_104c6c;
    }
    ctx->pc = 0x104C64u;
    {
        const bool branch_taken_0x104c64 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x104C68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x104c64) {
            ctx->pc = 0x104C80u;
            goto label_104c80;
        }
    }
    ctx->pc = 0x104C6Cu;
label_104c6c:
    // 0x104c6c: 0x12840029
label_104c70:
    if (ctx->pc == 0x104C70u) {
        ctx->pc = 0x104C70u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
        ctx->pc = 0x104C74u;
        goto label_104c74;
    }
    ctx->pc = 0x104C6Cu;
    {
        const bool branch_taken_0x104c6c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 4));
        ctx->pc = 0x104C70u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
        if (branch_taken_0x104c6c) {
            ctx->pc = 0x104D14u;
            goto label_104d14;
        }
    }
    ctx->pc = 0x104C74u;
label_104c74:
    // 0x104c74: 0x282a021
    ctx->pc = 0x104c74u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_104c78:
    // 0x104c78: 0x10000071
label_104c7c:
    if (ctx->pc == 0x104C7Cu) {
        ctx->pc = 0x104C7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x104C80u;
        goto label_104c80;
    }
    ctx->pc = 0x104C78u;
    {
        const bool branch_taken_0x104c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104C7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        if (branch_taken_0x104c78) {
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104C80u;
label_104c80:
    // 0x104c80: 0x6000007
label_104c84:
    if (ctx->pc == 0x104C84u) {
        ctx->pc = 0x104C88u;
        goto label_104c88;
    }
    ctx->pc = 0x104C80u;
    {
        const bool branch_taken_0x104c80 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x104c80) {
            ctx->pc = 0x104CA0u;
            goto label_104ca0;
        }
    }
    ctx->pc = 0x104C88u;
label_104c88:
    // 0x104c88: 0x1600001d
label_104c8c:
    if (ctx->pc == 0x104C8Cu) {
        ctx->pc = 0x104C8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x104C90u;
        goto label_104c90;
    }
    ctx->pc = 0x104C88u;
    {
        const bool branch_taken_0x104c88 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x104C8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x104c88) {
            ctx->pc = 0x104D00u;
            goto label_104d00;
        }
    }
    ctx->pc = 0x104C90u;
label_104c90:
    // 0x104c90: 0x1440001b
label_104c94:
    if (ctx->pc == 0x104C94u) {
        ctx->pc = 0x104C98u;
        goto label_104c98;
    }
    ctx->pc = 0x104C90u;
    {
        const bool branch_taken_0x104c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x104c90) {
            ctx->pc = 0x104D00u;
            goto label_104d00;
        }
    }
    ctx->pc = 0x104C98u;
label_104c98:
    // 0x104c98: 0x16c00019
label_104c9c:
    if (ctx->pc == 0x104C9Cu) {
        ctx->pc = 0x104CA0u;
        goto label_104ca0;
    }
    ctx->pc = 0x104C98u;
    {
        const bool branch_taken_0x104c98 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x104c98) {
            ctx->pc = 0x104D00u;
            goto label_104d00;
        }
    }
    ctx->pc = 0x104CA0u;
label_104ca0:
    // 0x104ca0: 0x5a200067
label_104ca4:
    if (ctx->pc == 0x104CA4u) {
        ctx->pc = 0x104CA4u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x104CA8u;
        goto label_104ca8;
    }
    ctx->pc = 0x104CA0u;
    {
        const bool branch_taken_0x104ca0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x104ca0) {
            ctx->pc = 0x104CA4u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104CA8u;
label_104ca8:
    // 0x104ca8: 0x8fa50044
    ctx->pc = 0x104ca8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104cac:
    // 0x104cac: 0x24060001
    ctx->pc = 0x104cacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_104cb0:
    // 0x104cb0: 0xc042164
label_104cb4:
    if (ctx->pc == 0x104CB4u) {
        ctx->pc = 0x104CB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104CB8u;
        goto label_104cb8;
    }
    ctx->pc = 0x104CB0u;
    SET_GPR_U32(ctx, 31, 0x104CB8u);
    ctx->pc = 0x104CB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104CB8u; }
    }
    if (ctx->pc != 0x104CB8u) { return; }
    ctx->pc = 0x104CB8u;
label_104cb8:
    // 0x104cb8: 0x8fa50050
    ctx->pc = 0x104cb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104cbc:
    // 0x104cbc: 0x40202d
    ctx->pc = 0x104cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104cc0:
    // 0x104cc0: 0xc0421ba
label_104cc4:
    if (ctx->pc == 0x104CC4u) {
        ctx->pc = 0x104CC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x104CC8u;
        goto label_104cc8;
    }
    ctx->pc = 0x104CC0u;
    SET_GPR_U32(ctx, 31, 0x104CC8u);
    ctx->pc = 0x104CC4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104CC8u; }
    }
    if (ctx->pc != 0x104CC8u) { return; }
    ctx->pc = 0x104CC8u;
label_104cc8:
    // 0x104cc8: 0x40882d
    ctx->pc = 0x104cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104ccc:
    // 0x104ccc: 0x5e200007
label_104cd0:
    if (ctx->pc == 0x104CD0u) {
        ctx->pc = 0x104CD0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x104CD4u;
        goto label_104cd4;
    }
    ctx->pc = 0x104CCCu;
    {
        const bool branch_taken_0x104ccc = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x104ccc) {
            ctx->pc = 0x104CD0u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x104CECu;
            goto label_104cec;
        }
    }
    ctx->pc = 0x104CD4u;
label_104cd4:
    // 0x104cd4: 0x5620005a
label_104cd8:
    if (ctx->pc == 0x104CD8u) {
        ctx->pc = 0x104CD8u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x104CDCu;
        goto label_104cdc;
    }
    ctx->pc = 0x104CD4u;
    {
        const bool branch_taken_0x104cd4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x104cd4) {
            ctx->pc = 0x104CD8u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104CDCu;
label_104cdc:
    // 0x104cdc: 0x32820001
    ctx->pc = 0x104cdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
label_104ce0:
    // 0x104ce0: 0x50400057
label_104ce4:
    if (ctx->pc == 0x104CE4u) {
        ctx->pc = 0x104CE4u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x104CE8u;
        goto label_104ce8;
    }
    ctx->pc = 0x104CE0u;
    {
        const bool branch_taken_0x104ce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x104ce0) {
            ctx->pc = 0x104CE4u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104CE8u;
label_104ce8:
    // 0x104ce8: 0x26940001
    ctx->pc = 0x104ce8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_104cec:
    // 0x104cec: 0x2402003a
    ctx->pc = 0x104cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
label_104cf0:
    // 0x104cf0: 0x52820009
label_104cf4:
    if (ctx->pc == 0x104CF4u) {
        ctx->pc = 0x104CF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x104CF8u;
        goto label_104cf8;
    }
    ctx->pc = 0x104CF0u;
    {
        const bool branch_taken_0x104cf0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x104cf0) {
            ctx->pc = 0x104CF4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 57));
            ctx->pc = 0x104D18u;
            goto label_104d18;
        }
    }
    ctx->pc = 0x104CF8u;
label_104cf8:
    // 0x104cf8: 0x10000051
label_104cfc:
    if (ctx->pc == 0x104CFCu) {
        ctx->pc = 0x104CFCu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x104D00u;
        goto label_104d00;
    }
    ctx->pc = 0x104CF8u;
    {
        const bool branch_taken_0x104cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104CFCu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        if (branch_taken_0x104cf8) {
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104D00u;
label_104d00:
    // 0x104d00: 0x5a20000b
label_104d04:
    if (ctx->pc == 0x104D04u) {
        ctx->pc = 0x104D04u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x104D08u;
        goto label_104d08;
    }
    ctx->pc = 0x104D00u;
    {
        const bool branch_taken_0x104d00 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x104d00) {
            ctx->pc = 0x104D04u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->pc = 0x104D30u;
            goto label_104d30;
        }
    }
    ctx->pc = 0x104D08u;
label_104d08:
    // 0x104d08: 0x24030039
    ctx->pc = 0x104d08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
label_104d0c:
    // 0x104d0c: 0x16830006
label_104d10:
    if (ctx->pc == 0x104D10u) {
        ctx->pc = 0x104D10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x104D14u;
        goto label_104d14;
    }
    ctx->pc = 0x104D0Cu;
    {
        const bool branch_taken_0x104d0c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 3));
        ctx->pc = 0x104D10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x104d0c) {
            ctx->pc = 0x104D28u;
            goto label_104d28;
        }
    }
    ctx->pc = 0x104D14u;
label_104d14:
    // 0x104d14: 0x24040039
    ctx->pc = 0x104d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 57));
label_104d18:
    // 0x104d18: 0xa2a40000
    ctx->pc = 0x104d18u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
label_104d1c:
    // 0x104d1c: 0x1000002a
label_104d20:
    if (ctx->pc == 0x104D20u) {
        ctx->pc = 0x104D20u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x104D24u;
        goto label_104d24;
    }
    ctx->pc = 0x104D1Cu;
    {
        const bool branch_taken_0x104d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104D20u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x104d1c) {
            ctx->pc = 0x104DC8u;
            goto label_104dc8;
        }
    }
    ctx->pc = 0x104D24u;
label_104d24:
    // 0x104d24: 0x0
    ctx->pc = 0x104d24u;
    // NOP
label_104d28:
    // 0x104d28: 0x10000045
label_104d2c:
    if (ctx->pc == 0x104D2Cu) {
        ctx->pc = 0x104D2Cu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x104D30u;
        goto label_104d30;
    }
    ctx->pc = 0x104D28u;
    {
        const bool branch_taken_0x104d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104D2Cu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x104d28) {
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104D30u;
label_104d30:
    // 0x104d30: 0x8fa20020
    ctx->pc = 0x104d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104d34:
    // 0x104d34: 0x1662ff92
label_104d38:
    if (ctx->pc == 0x104D38u) {
        ctx->pc = 0x104D38u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x104D3Cu;
        goto label_104d3c;
    }
    ctx->pc = 0x104D34u;
    {
        const bool branch_taken_0x104d34 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x104D38u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x104d34) {
            ctx->pc = 0x104B80u;
            goto label_104b80;
        }
    }
    ctx->pc = 0x104D3Cu;
label_104d3c:
    // 0x104d3c: 0x10000013
label_104d40:
    if (ctx->pc == 0x104D40u) {
        ctx->pc = 0x104D40u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x104D44u;
        goto label_104d44;
    }
    ctx->pc = 0x104D3Cu;
    {
        const bool branch_taken_0x104d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104D40u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x104d3c) {
            ctx->pc = 0x104D8Cu;
            goto label_104d8c;
        }
    }
    ctx->pc = 0x104D44u;
label_104d44:
    // 0x104d44: 0x0
    ctx->pc = 0x104d44u;
    // NOP
label_104d48:
    // 0x104d48: 0x8fa50044
    ctx->pc = 0x104d48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104d4c:
    // 0x104d4c: 0x2e0202d
    ctx->pc = 0x104d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_104d50:
    // 0x104d50: 0x2406000a
    ctx->pc = 0x104d50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_104d54:
    // 0x104d54: 0xc041fb4
label_104d58:
    if (ctx->pc == 0x104D58u) {
        ctx->pc = 0x104D58u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104D5Cu;
        goto label_104d5c;
    }
    ctx->pc = 0x104D54u;
    SET_GPR_U32(ctx, 31, 0x104D5Cu);
    ctx->pc = 0x104D58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D5Cu; }
    }
    if (ctx->pc != 0x104D5Cu) { return; }
    ctx->pc = 0x104D5Cu;
label_104d5c:
    // 0x104d5c: 0x26730001
    ctx->pc = 0x104d5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_104d60:
    // 0x104d60: 0xafa20044
    ctx->pc = 0x104d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_104d64:
    // 0x104d64: 0x8fa40044
    ctx->pc = 0x104d64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104d68:
    // 0x104d68: 0xc040e92
label_104d6c:
    if (ctx->pc == 0x104D6Cu) {
        ctx->pc = 0x104D6Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x104D70u;
        goto label_104d70;
    }
    ctx->pc = 0x104D68u;
    SET_GPR_U32(ctx, 31, 0x104D70u);
    ctx->pc = 0x104D6Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x103A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103A48_0x103a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D70u; }
    }
    if (ctx->pc != 0x104D70u) { return; }
    ctx->pc = 0x104D70u;
label_104d70:
    // 0x104d70: 0x8fa40020
    ctx->pc = 0x104d70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104d74:
    // 0x104d74: 0x24540030
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 48));
label_104d78:
    // 0x104d78: 0xa2b40000
    ctx->pc = 0x104d78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
label_104d7c:
    // 0x104d7c: 0x264182a
    ctx->pc = 0x104d7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 4)));
label_104d80:
    // 0x104d80: 0x1460fff1
label_104d84:
    if (ctx->pc == 0x104D84u) {
        ctx->pc = 0x104D84u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x104D88u;
        goto label_104d88;
    }
    ctx->pc = 0x104D80u;
    {
        const bool branch_taken_0x104d80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x104D84u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x104d80) {
            ctx->pc = 0x104D48u;
            goto label_104d48;
        }
    }
    ctx->pc = 0x104D88u;
label_104d88:
    // 0x104d88: 0x8fa50044
    ctx->pc = 0x104d88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104d8c:
    // 0x104d8c: 0x24060001
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_104d90:
    // 0x104d90: 0xc042164
label_104d94:
    if (ctx->pc == 0x104D94u) {
        ctx->pc = 0x104D94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104D98u;
        goto label_104d98;
    }
    ctx->pc = 0x104D90u;
    SET_GPR_U32(ctx, 31, 0x104D98u);
    ctx->pc = 0x104D94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108590_0x108590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D98u; }
    }
    if (ctx->pc != 0x104D98u) { return; }
    ctx->pc = 0x104D98u;
label_104d98:
    // 0x104d98: 0x8fa50050
    ctx->pc = 0x104d98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104d9c:
    // 0x104d9c: 0x40202d
    ctx->pc = 0x104d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104da0:
    // 0x104da0: 0xc0421ba
label_104da4:
    if (ctx->pc == 0x104DA4u) {
        ctx->pc = 0x104DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x104DA8u;
        goto label_104da8;
    }
    ctx->pc = 0x104DA0u;
    SET_GPR_U32(ctx, 31, 0x104DA8u);
    ctx->pc = 0x104DA4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104DA8u; }
    }
    if (ctx->pc != 0x104DA8u) { return; }
    ctx->pc = 0x104DA8u;
label_104da8:
    // 0x104da8: 0x40802d
    ctx->pc = 0x104da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104dac:
    // 0x104dac: 0x5e000007
label_104db0:
    if (ctx->pc == 0x104DB0u) {
        ctx->pc = 0x104DB0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x104DB4u;
        goto label_104db4;
    }
    ctx->pc = 0x104DACu;
    {
        const bool branch_taken_0x104dac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x104dac) {
            ctx->pc = 0x104DB0u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x104DCCu;
            goto label_104dcc;
        }
    }
    ctx->pc = 0x104DB4u;
label_104db4:
    // 0x104db4: 0x1600001a
label_104db8:
    if (ctx->pc == 0x104DB8u) {
        ctx->pc = 0x104DB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x104DBCu;
        goto label_104dbc;
    }
    ctx->pc = 0x104DB4u;
    {
        const bool branch_taken_0x104db4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x104DB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x104db4) {
            ctx->pc = 0x104E20u;
            goto label_104e20;
        }
    }
    ctx->pc = 0x104DBCu;
label_104dbc:
    // 0x104dbc: 0x32820001
    ctx->pc = 0x104dbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
label_104dc0:
    // 0x104dc0: 0x50400018
label_104dc4:
    if (ctx->pc == 0x104DC4u) {
        ctx->pc = 0x104DC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x104DC8u;
        goto label_104dc8;
    }
    ctx->pc = 0x104DC0u;
    {
        const bool branch_taken_0x104dc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x104dc0) {
            ctx->pc = 0x104DC4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x104E24u;
            goto label_104e24;
        }
    }
    ctx->pc = 0x104DC8u;
label_104dc8:
    // 0x104dc8: 0x26b5ffff
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_104dcc:
    // 0x104dcc: 0x10000006
label_104dd0:
    if (ctx->pc == 0x104DD0u) {
        ctx->pc = 0x104DD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x104DD4u;
        goto label_104dd4;
    }
    ctx->pc = 0x104DCCu;
    {
        const bool branch_taken_0x104dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104DD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x104dcc) {
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104DD4u;
label_104dd4:
    // 0x104dd4: 0x0
    ctx->pc = 0x104dd4u;
    // NOP
label_104dd8:
    // 0x104dd8: 0x8fa20054
    ctx->pc = 0x104dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_104ddc:
    // 0x104ddc: 0x52a2000a
label_104de0:
    if (ctx->pc == 0x104DE0u) {
        ctx->pc = 0x104DE0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x104DE4u;
        goto label_104de4;
    }
    ctx->pc = 0x104DDCu;
    {
        const bool branch_taken_0x104ddc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        if (branch_taken_0x104ddc) {
            ctx->pc = 0x104DE0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->pc = 0x104E08u;
            goto label_104e08;
        }
    }
    ctx->pc = 0x104DE4u;
label_104de4:
    // 0x104de4: 0x26b5ffff
    ctx->pc = 0x104de4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_104de8:
    // 0x104de8: 0x82a20000
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_104dec:
    // 0x104dec: 0x0
    ctx->pc = 0x104decu;
    // NOP
label_104df0:
    // 0x104df0: 0x0
    ctx->pc = 0x104df0u;
    // NOP
label_104df4:
    // 0x104df4: 0x1043fff8
label_104df8:
    if (ctx->pc == 0x104DF8u) {
        ctx->pc = 0x104DF8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x104DFCu;
        goto label_104dfc;
    }
    ctx->pc = 0x104DF4u;
    {
        const bool branch_taken_0x104df4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x104DF8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x104df4) {
            ctx->pc = 0x104DD8u;
            goto label_104dd8;
        }
    }
    ctx->pc = 0x104DFCu;
label_104dfc:
    // 0x104dfc: 0x24820001
    ctx->pc = 0x104dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_104e00:
    // 0x104e00: 0x1000000f
label_104e04:
    if (ctx->pc == 0x104E04u) {
        ctx->pc = 0x104E04u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x104E08u;
        goto label_104e08;
    }
    ctx->pc = 0x104E00u;
    {
        const bool branch_taken_0x104e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104E04u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x104e00) {
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104E08u;
label_104e08:
    // 0x104e08: 0x24020031
    ctx->pc = 0x104e08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_104e0c:
    // 0x104e0c: 0x27de0001
    ctx->pc = 0x104e0cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
label_104e10:
    // 0x104e10: 0xa0620000
    ctx->pc = 0x104e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_104e14:
    // 0x104e14: 0x1000000b
label_104e18:
    if (ctx->pc == 0x104E18u) {
        ctx->pc = 0x104E18u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x104E1Cu;
        goto label_104e1c;
    }
    ctx->pc = 0x104E14u;
    {
        const bool branch_taken_0x104e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104E18u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x104e14) {
            ctx->pc = 0x104E44u;
            goto label_104e44;
        }
    }
    ctx->pc = 0x104E1Cu;
label_104e1c:
    // 0x104e1c: 0x0
    ctx->pc = 0x104e1cu;
    // NOP
label_104e20:
    // 0x104e20: 0x26b5ffff
    ctx->pc = 0x104e20u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_104e24:
    // 0x104e24: 0x82a20000
    ctx->pc = 0x104e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_104e28:
    // 0x104e28: 0x0
    ctx->pc = 0x104e28u;
    // NOP
label_104e2c:
    // 0x104e2c: 0x0
    ctx->pc = 0x104e2cu;
    // NOP
label_104e30:
    // 0x104e30: 0x0
    ctx->pc = 0x104e30u;
    // NOP
label_104e34:
    // 0x104e34: 0x0
    ctx->pc = 0x104e34u;
    // NOP
label_104e38:
    // 0x104e38: 0x5043fffa
label_104e3c:
    if (ctx->pc == 0x104E3Cu) {
        ctx->pc = 0x104E3Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x104E40u;
        goto label_104e40;
    }
    ctx->pc = 0x104E38u;
    {
        const bool branch_taken_0x104e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x104e38) {
            ctx->pc = 0x104E3Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x104E24u;
            goto label_104e24;
        }
    }
    ctx->pc = 0x104E40u;
label_104e40:
    // 0x104e40: 0x26b50001
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_104e44:
    // 0x104e44: 0x8fa50050
    ctx->pc = 0x104e44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_104e48:
    // 0x104e48: 0xc041fa8
label_104e4c:
    if (ctx->pc == 0x104E4Cu) {
        ctx->pc = 0x104E4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104E50u;
        goto label_104e50;
    }
    ctx->pc = 0x104E48u;
    SET_GPR_U32(ctx, 31, 0x104E50u);
    ctx->pc = 0x104E4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E50u; }
    }
    if (ctx->pc != 0x104E50u) { return; }
    ctx->pc = 0x104E50u;
label_104e50:
    // 0x104e50: 0x8fa4004c
    ctx->pc = 0x104e50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104e54:
    // 0x104e54: 0x1080000a
label_104e58:
    if (ctx->pc == 0x104E58u) {
        ctx->pc = 0x104E58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x104E5Cu;
        goto label_104e5c;
    }
    ctx->pc = 0x104E54u;
    {
        const bool branch_taken_0x104e54 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x104E58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x104e54) {
            ctx->pc = 0x104E80u;
            goto label_104e80;
        }
    }
    ctx->pc = 0x104E5Cu;
label_104e5c:
    // 0x104e5c: 0x10400006
label_104e60:
    if (ctx->pc == 0x104E60u) {
        ctx->pc = 0x104E60u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x104E64u;
        goto label_104e64;
    }
    ctx->pc = 0x104E5Cu;
    {
        const bool branch_taken_0x104e5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104E60u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        if (branch_taken_0x104e5c) {
            ctx->pc = 0x104E78u;
            goto label_104e78;
        }
    }
    ctx->pc = 0x104E64u;
label_104e64:
    // 0x104e64: 0x10440003
label_104e68:
    if (ctx->pc == 0x104E68u) {
        ctx->pc = 0x104E68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104E6Cu;
        goto label_104e6c;
    }
    ctx->pc = 0x104E64u;
    {
        const bool branch_taken_0x104e64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x104E68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104e64) {
            ctx->pc = 0x104E74u;
            goto label_104e74;
        }
    }
    ctx->pc = 0x104E6Cu;
label_104e6c:
    // 0x104e6c: 0xc041fa8
label_104e70:
    if (ctx->pc == 0x104E70u) {
        ctx->pc = 0x104E70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104E74u;
        goto label_104e74;
    }
    ctx->pc = 0x104E6Cu;
    SET_GPR_U32(ctx, 31, 0x104E74u);
    ctx->pc = 0x104E70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E74u; }
    }
    if (ctx->pc != 0x104E74u) { return; }
    ctx->pc = 0x104E74u;
label_104e74:
    // 0x104e74: 0x8fa5004c
    ctx->pc = 0x104e74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_104e78:
    // 0x104e78: 0xc041fa8
label_104e7c:
    if (ctx->pc == 0x104E7Cu) {
        ctx->pc = 0x104E7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104E80u;
        goto label_104e80;
    }
    ctx->pc = 0x104E78u;
    SET_GPR_U32(ctx, 31, 0x104E80u);
    ctx->pc = 0x104E7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E80u; }
    }
    if (ctx->pc != 0x104E80u) { return; }
    ctx->pc = 0x104E80u;
label_104e80:
    // 0x104e80: 0x8fa50044
    ctx->pc = 0x104e80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_104e84:
    // 0x104e84: 0xc041fa8
label_104e88:
    if (ctx->pc == 0x104E88u) {
        ctx->pc = 0x104E88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104E8Cu;
        goto label_104e8c;
    }
    ctx->pc = 0x104E84u;
    SET_GPR_U32(ctx, 31, 0x104E8Cu);
    ctx->pc = 0x104E88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E8Cu; }
    }
    if (ctx->pc != 0x104E8Cu) { return; }
    ctx->pc = 0x104E8Cu;
label_104e8c:
    // 0x104e8c: 0xa2a00000
    ctx->pc = 0x104e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
label_104e90:
    // 0x104e90: 0x27c20001
    ctx->pc = 0x104e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 1));
label_104e94:
    // 0x104e94: 0x8fa30010
    ctx->pc = 0x104e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_104e98:
    // 0x104e98: 0xac620000
    ctx->pc = 0x104e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_104e9c:
    // 0x104e9c: 0x8fa40014
    ctx->pc = 0x104e9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_104ea0:
    // 0x104ea0: 0x54800001
label_104ea4:
    if (ctx->pc == 0x104EA4u) {
        ctx->pc = 0x104EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x104EA8u;
        goto label_104ea8;
    }
    ctx->pc = 0x104EA0u;
    {
        const bool branch_taken_0x104ea0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x104ea0) {
            ctx->pc = 0x104EA4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->pc = 0x104EA8u;
            goto label_104ea8;
        }
    }
    ctx->pc = 0x104EA8u;
label_104ea8:
    // 0x104ea8: 0x8fa20054
    ctx->pc = 0x104ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_104eac:
    // 0x104eac: 0xdfb00060
    ctx->pc = 0x104eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_104eb0:
    // 0x104eb0: 0xdfb10068
    ctx->pc = 0x104eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_104eb4:
    // 0x104eb4: 0xdfb20070
    ctx->pc = 0x104eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_104eb8:
    // 0x104eb8: 0xdfb30078
    ctx->pc = 0x104eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_104ebc:
    // 0x104ebc: 0xdfb40080
    ctx->pc = 0x104ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_104ec0:
    // 0x104ec0: 0xdfb50088
    ctx->pc = 0x104ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_104ec4:
    // 0x104ec4: 0xdfb60090
    ctx->pc = 0x104ec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_104ec8:
    // 0x104ec8: 0xdfb70098
    ctx->pc = 0x104ec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_104ecc:
    // 0x104ecc: 0xdfbe00a0
    ctx->pc = 0x104eccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_104ed0:
    // 0x104ed0: 0xdfbf00a8
    ctx->pc = 0x104ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_104ed4:
    // 0x104ed4: 0x3e00008
label_104ed8:
    if (ctx->pc == 0x104ED8u) {
        ctx->pc = 0x104ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x104EDCu;
        goto label_104edc;
    }
    ctx->pc = 0x104ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103C78u: goto label_103c78;
            case 0x103C7Cu: goto label_103c7c;
            case 0x103C80u: goto label_103c80;
            case 0x103C84u: goto label_103c84;
            case 0x103C88u: goto label_103c88;
            case 0x103C8Cu: goto label_103c8c;
            case 0x103C90u: goto label_103c90;
            case 0x103C94u: goto label_103c94;
            case 0x103C98u: goto label_103c98;
            case 0x103C9Cu: goto label_103c9c;
            case 0x103CA0u: goto label_103ca0;
            case 0x103CA4u: goto label_103ca4;
            case 0x103CA8u: goto label_103ca8;
            case 0x103CACu: goto label_103cac;
            case 0x103CB0u: goto label_103cb0;
            case 0x103CB4u: goto label_103cb4;
            case 0x103CB8u: goto label_103cb8;
            case 0x103CBCu: goto label_103cbc;
            case 0x103CC0u: goto label_103cc0;
            case 0x103CC4u: goto label_103cc4;
            case 0x103CC8u: goto label_103cc8;
            case 0x103CCCu: goto label_103ccc;
            case 0x103CD0u: goto label_103cd0;
            case 0x103CD4u: goto label_103cd4;
            case 0x103CD8u: goto label_103cd8;
            case 0x103CDCu: goto label_103cdc;
            case 0x103CE0u: goto label_103ce0;
            case 0x103CE4u: goto label_103ce4;
            case 0x103CE8u: goto label_103ce8;
            case 0x103CECu: goto label_103cec;
            case 0x103CF0u: goto label_103cf0;
            case 0x103CF4u: goto label_103cf4;
            case 0x103CF8u: goto label_103cf8;
            case 0x103CFCu: goto label_103cfc;
            case 0x103D00u: goto label_103d00;
            case 0x103D04u: goto label_103d04;
            case 0x103D08u: goto label_103d08;
            case 0x103D0Cu: goto label_103d0c;
            case 0x103D10u: goto label_103d10;
            case 0x103D14u: goto label_103d14;
            case 0x103D18u: goto label_103d18;
            case 0x103D1Cu: goto label_103d1c;
            case 0x103D20u: goto label_103d20;
            case 0x103D24u: goto label_103d24;
            case 0x103D28u: goto label_103d28;
            case 0x103D2Cu: goto label_103d2c;
            case 0x103D30u: goto label_103d30;
            case 0x103D34u: goto label_103d34;
            case 0x103D38u: goto label_103d38;
            case 0x103D3Cu: goto label_103d3c;
            case 0x103D40u: goto label_103d40;
            case 0x103D44u: goto label_103d44;
            case 0x103D48u: goto label_103d48;
            case 0x103D4Cu: goto label_103d4c;
            case 0x103D50u: goto label_103d50;
            case 0x103D54u: goto label_103d54;
            case 0x103D58u: goto label_103d58;
            case 0x103D5Cu: goto label_103d5c;
            case 0x103D60u: goto label_103d60;
            case 0x103D64u: goto label_103d64;
            case 0x103D68u: goto label_103d68;
            case 0x103D6Cu: goto label_103d6c;
            case 0x103D70u: goto label_103d70;
            case 0x103D74u: goto label_103d74;
            case 0x103D78u: goto label_103d78;
            case 0x103D7Cu: goto label_103d7c;
            case 0x103D80u: goto label_103d80;
            case 0x103D84u: goto label_103d84;
            case 0x103D88u: goto label_103d88;
            case 0x103D8Cu: goto label_103d8c;
            case 0x103D90u: goto label_103d90;
            case 0x103D94u: goto label_103d94;
            case 0x103D98u: goto label_103d98;
            case 0x103D9Cu: goto label_103d9c;
            case 0x103DA0u: goto label_103da0;
            case 0x103DA4u: goto label_103da4;
            case 0x103DA8u: goto label_103da8;
            case 0x103DACu: goto label_103dac;
            case 0x103DB0u: goto label_103db0;
            case 0x103DB4u: goto label_103db4;
            case 0x103DB8u: goto label_103db8;
            case 0x103DBCu: goto label_103dbc;
            case 0x103DC0u: goto label_103dc0;
            case 0x103DC4u: goto label_103dc4;
            case 0x103DC8u: goto label_103dc8;
            case 0x103DCCu: goto label_103dcc;
            case 0x103DD0u: goto label_103dd0;
            case 0x103DD4u: goto label_103dd4;
            case 0x103DD8u: goto label_103dd8;
            case 0x103DDCu: goto label_103ddc;
            case 0x103DE0u: goto label_103de0;
            case 0x103DE4u: goto label_103de4;
            case 0x103DE8u: goto label_103de8;
            case 0x103DECu: goto label_103dec;
            case 0x103DF0u: goto label_103df0;
            case 0x103DF4u: goto label_103df4;
            case 0x103DF8u: goto label_103df8;
            case 0x103DFCu: goto label_103dfc;
            case 0x103E00u: goto label_103e00;
            case 0x103E04u: goto label_103e04;
            case 0x103E08u: goto label_103e08;
            case 0x103E0Cu: goto label_103e0c;
            case 0x103E10u: goto label_103e10;
            case 0x103E14u: goto label_103e14;
            case 0x103E18u: goto label_103e18;
            case 0x103E1Cu: goto label_103e1c;
            case 0x103E20u: goto label_103e20;
            case 0x103E24u: goto label_103e24;
            case 0x103E28u: goto label_103e28;
            case 0x103E2Cu: goto label_103e2c;
            case 0x103E30u: goto label_103e30;
            case 0x103E34u: goto label_103e34;
            case 0x103E38u: goto label_103e38;
            case 0x103E3Cu: goto label_103e3c;
            case 0x103E40u: goto label_103e40;
            case 0x103E44u: goto label_103e44;
            case 0x103E48u: goto label_103e48;
            case 0x103E4Cu: goto label_103e4c;
            case 0x103E50u: goto label_103e50;
            case 0x103E54u: goto label_103e54;
            case 0x103E58u: goto label_103e58;
            case 0x103E5Cu: goto label_103e5c;
            case 0x103E60u: goto label_103e60;
            case 0x103E64u: goto label_103e64;
            case 0x103E68u: goto label_103e68;
            case 0x103E6Cu: goto label_103e6c;
            case 0x103E70u: goto label_103e70;
            case 0x103E74u: goto label_103e74;
            case 0x103E78u: goto label_103e78;
            case 0x103E7Cu: goto label_103e7c;
            case 0x103E80u: goto label_103e80;
            case 0x103E84u: goto label_103e84;
            case 0x103E88u: goto label_103e88;
            case 0x103E8Cu: goto label_103e8c;
            case 0x103E90u: goto label_103e90;
            case 0x103E94u: goto label_103e94;
            case 0x103E98u: goto label_103e98;
            case 0x103E9Cu: goto label_103e9c;
            case 0x103EA0u: goto label_103ea0;
            case 0x103EA4u: goto label_103ea4;
            case 0x103EA8u: goto label_103ea8;
            case 0x103EACu: goto label_103eac;
            case 0x103EB0u: goto label_103eb0;
            case 0x103EB4u: goto label_103eb4;
            case 0x103EB8u: goto label_103eb8;
            case 0x103EBCu: goto label_103ebc;
            case 0x103EC0u: goto label_103ec0;
            case 0x103EC4u: goto label_103ec4;
            case 0x103EC8u: goto label_103ec8;
            case 0x103ECCu: goto label_103ecc;
            case 0x103ED0u: goto label_103ed0;
            case 0x103ED4u: goto label_103ed4;
            case 0x103ED8u: goto label_103ed8;
            case 0x103EDCu: goto label_103edc;
            case 0x103EE0u: goto label_103ee0;
            case 0x103EE4u: goto label_103ee4;
            case 0x103EE8u: goto label_103ee8;
            case 0x103EECu: goto label_103eec;
            case 0x103EF0u: goto label_103ef0;
            case 0x103EF4u: goto label_103ef4;
            case 0x103EF8u: goto label_103ef8;
            case 0x103EFCu: goto label_103efc;
            case 0x103F00u: goto label_103f00;
            case 0x103F04u: goto label_103f04;
            case 0x103F08u: goto label_103f08;
            case 0x103F0Cu: goto label_103f0c;
            case 0x103F10u: goto label_103f10;
            case 0x103F14u: goto label_103f14;
            case 0x103F18u: goto label_103f18;
            case 0x103F1Cu: goto label_103f1c;
            case 0x103F20u: goto label_103f20;
            case 0x103F24u: goto label_103f24;
            case 0x103F28u: goto label_103f28;
            case 0x103F2Cu: goto label_103f2c;
            case 0x103F30u: goto label_103f30;
            case 0x103F34u: goto label_103f34;
            case 0x103F38u: goto label_103f38;
            case 0x103F3Cu: goto label_103f3c;
            case 0x103F40u: goto label_103f40;
            case 0x103F44u: goto label_103f44;
            case 0x103F48u: goto label_103f48;
            case 0x103F4Cu: goto label_103f4c;
            case 0x103F50u: goto label_103f50;
            case 0x103F54u: goto label_103f54;
            case 0x103F58u: goto label_103f58;
            case 0x103F5Cu: goto label_103f5c;
            case 0x103F60u: goto label_103f60;
            case 0x103F64u: goto label_103f64;
            case 0x103F68u: goto label_103f68;
            case 0x103F6Cu: goto label_103f6c;
            case 0x103F70u: goto label_103f70;
            case 0x103F74u: goto label_103f74;
            case 0x103F78u: goto label_103f78;
            case 0x103F7Cu: goto label_103f7c;
            case 0x103F80u: goto label_103f80;
            case 0x103F84u: goto label_103f84;
            case 0x103F88u: goto label_103f88;
            case 0x103F8Cu: goto label_103f8c;
            case 0x103F90u: goto label_103f90;
            case 0x103F94u: goto label_103f94;
            case 0x103F98u: goto label_103f98;
            case 0x103F9Cu: goto label_103f9c;
            case 0x103FA0u: goto label_103fa0;
            case 0x103FA4u: goto label_103fa4;
            case 0x103FA8u: goto label_103fa8;
            case 0x103FACu: goto label_103fac;
            case 0x103FB0u: goto label_103fb0;
            case 0x103FB4u: goto label_103fb4;
            case 0x103FB8u: goto label_103fb8;
            case 0x103FBCu: goto label_103fbc;
            case 0x103FC0u: goto label_103fc0;
            case 0x103FC4u: goto label_103fc4;
            case 0x103FC8u: goto label_103fc8;
            case 0x103FCCu: goto label_103fcc;
            case 0x103FD0u: goto label_103fd0;
            case 0x103FD4u: goto label_103fd4;
            case 0x103FD8u: goto label_103fd8;
            case 0x103FDCu: goto label_103fdc;
            case 0x103FE0u: goto label_103fe0;
            case 0x103FE4u: goto label_103fe4;
            case 0x103FE8u: goto label_103fe8;
            case 0x103FECu: goto label_103fec;
            case 0x103FF0u: goto label_103ff0;
            case 0x103FF4u: goto label_103ff4;
            case 0x103FF8u: goto label_103ff8;
            case 0x103FFCu: goto label_103ffc;
            case 0x104000u: goto label_104000;
            case 0x104004u: goto label_104004;
            case 0x104008u: goto label_104008;
            case 0x10400Cu: goto label_10400c;
            case 0x104010u: goto label_104010;
            case 0x104014u: goto label_104014;
            case 0x104018u: goto label_104018;
            case 0x10401Cu: goto label_10401c;
            case 0x104020u: goto label_104020;
            case 0x104024u: goto label_104024;
            case 0x104028u: goto label_104028;
            case 0x10402Cu: goto label_10402c;
            case 0x104030u: goto label_104030;
            case 0x104034u: goto label_104034;
            case 0x104038u: goto label_104038;
            case 0x10403Cu: goto label_10403c;
            case 0x104040u: goto label_104040;
            case 0x104044u: goto label_104044;
            case 0x104048u: goto label_104048;
            case 0x10404Cu: goto label_10404c;
            case 0x104050u: goto label_104050;
            case 0x104054u: goto label_104054;
            case 0x104058u: goto label_104058;
            case 0x10405Cu: goto label_10405c;
            case 0x104060u: goto label_104060;
            case 0x104064u: goto label_104064;
            case 0x104068u: goto label_104068;
            case 0x10406Cu: goto label_10406c;
            case 0x104070u: goto label_104070;
            case 0x104074u: goto label_104074;
            case 0x104078u: goto label_104078;
            case 0x10407Cu: goto label_10407c;
            case 0x104080u: goto label_104080;
            case 0x104084u: goto label_104084;
            case 0x104088u: goto label_104088;
            case 0x10408Cu: goto label_10408c;
            case 0x104090u: goto label_104090;
            case 0x104094u: goto label_104094;
            case 0x104098u: goto label_104098;
            case 0x10409Cu: goto label_10409c;
            case 0x1040A0u: goto label_1040a0;
            case 0x1040A4u: goto label_1040a4;
            case 0x1040A8u: goto label_1040a8;
            case 0x1040ACu: goto label_1040ac;
            case 0x1040B0u: goto label_1040b0;
            case 0x1040B4u: goto label_1040b4;
            case 0x1040B8u: goto label_1040b8;
            case 0x1040BCu: goto label_1040bc;
            case 0x1040C0u: goto label_1040c0;
            case 0x1040C4u: goto label_1040c4;
            case 0x1040C8u: goto label_1040c8;
            case 0x1040CCu: goto label_1040cc;
            case 0x1040D0u: goto label_1040d0;
            case 0x1040D4u: goto label_1040d4;
            case 0x1040D8u: goto label_1040d8;
            case 0x1040DCu: goto label_1040dc;
            case 0x1040E0u: goto label_1040e0;
            case 0x1040E4u: goto label_1040e4;
            case 0x1040E8u: goto label_1040e8;
            case 0x1040ECu: goto label_1040ec;
            case 0x1040F0u: goto label_1040f0;
            case 0x1040F4u: goto label_1040f4;
            case 0x1040F8u: goto label_1040f8;
            case 0x1040FCu: goto label_1040fc;
            case 0x104100u: goto label_104100;
            case 0x104104u: goto label_104104;
            case 0x104108u: goto label_104108;
            case 0x10410Cu: goto label_10410c;
            case 0x104110u: goto label_104110;
            case 0x104114u: goto label_104114;
            case 0x104118u: goto label_104118;
            case 0x10411Cu: goto label_10411c;
            case 0x104120u: goto label_104120;
            case 0x104124u: goto label_104124;
            case 0x104128u: goto label_104128;
            case 0x10412Cu: goto label_10412c;
            case 0x104130u: goto label_104130;
            case 0x104134u: goto label_104134;
            case 0x104138u: goto label_104138;
            case 0x10413Cu: goto label_10413c;
            case 0x104140u: goto label_104140;
            case 0x104144u: goto label_104144;
            case 0x104148u: goto label_104148;
            case 0x10414Cu: goto label_10414c;
            case 0x104150u: goto label_104150;
            case 0x104154u: goto label_104154;
            case 0x104158u: goto label_104158;
            case 0x10415Cu: goto label_10415c;
            case 0x104160u: goto label_104160;
            case 0x104164u: goto label_104164;
            case 0x104168u: goto label_104168;
            case 0x10416Cu: goto label_10416c;
            case 0x104170u: goto label_104170;
            case 0x104174u: goto label_104174;
            case 0x104178u: goto label_104178;
            case 0x10417Cu: goto label_10417c;
            case 0x104180u: goto label_104180;
            case 0x104184u: goto label_104184;
            case 0x104188u: goto label_104188;
            case 0x10418Cu: goto label_10418c;
            case 0x104190u: goto label_104190;
            case 0x104194u: goto label_104194;
            case 0x104198u: goto label_104198;
            case 0x10419Cu: goto label_10419c;
            case 0x1041A0u: goto label_1041a0;
            case 0x1041A4u: goto label_1041a4;
            case 0x1041A8u: goto label_1041a8;
            case 0x1041ACu: goto label_1041ac;
            case 0x1041B0u: goto label_1041b0;
            case 0x1041B4u: goto label_1041b4;
            case 0x1041B8u: goto label_1041b8;
            case 0x1041BCu: goto label_1041bc;
            case 0x1041C0u: goto label_1041c0;
            case 0x1041C4u: goto label_1041c4;
            case 0x1041C8u: goto label_1041c8;
            case 0x1041CCu: goto label_1041cc;
            case 0x1041D0u: goto label_1041d0;
            case 0x1041D4u: goto label_1041d4;
            case 0x1041D8u: goto label_1041d8;
            case 0x1041DCu: goto label_1041dc;
            case 0x1041E0u: goto label_1041e0;
            case 0x1041E4u: goto label_1041e4;
            case 0x1041E8u: goto label_1041e8;
            case 0x1041ECu: goto label_1041ec;
            case 0x1041F0u: goto label_1041f0;
            case 0x1041F4u: goto label_1041f4;
            case 0x1041F8u: goto label_1041f8;
            case 0x1041FCu: goto label_1041fc;
            case 0x104200u: goto label_104200;
            case 0x104204u: goto label_104204;
            case 0x104208u: goto label_104208;
            case 0x10420Cu: goto label_10420c;
            case 0x104210u: goto label_104210;
            case 0x104214u: goto label_104214;
            case 0x104218u: goto label_104218;
            case 0x10421Cu: goto label_10421c;
            case 0x104220u: goto label_104220;
            case 0x104224u: goto label_104224;
            case 0x104228u: goto label_104228;
            case 0x10422Cu: goto label_10422c;
            case 0x104230u: goto label_104230;
            case 0x104234u: goto label_104234;
            case 0x104238u: goto label_104238;
            case 0x10423Cu: goto label_10423c;
            case 0x104240u: goto label_104240;
            case 0x104244u: goto label_104244;
            case 0x104248u: goto label_104248;
            case 0x10424Cu: goto label_10424c;
            case 0x104250u: goto label_104250;
            case 0x104254u: goto label_104254;
            case 0x104258u: goto label_104258;
            case 0x10425Cu: goto label_10425c;
            case 0x104260u: goto label_104260;
            case 0x104264u: goto label_104264;
            case 0x104268u: goto label_104268;
            case 0x10426Cu: goto label_10426c;
            case 0x104270u: goto label_104270;
            case 0x104274u: goto label_104274;
            case 0x104278u: goto label_104278;
            case 0x10427Cu: goto label_10427c;
            case 0x104280u: goto label_104280;
            case 0x104284u: goto label_104284;
            case 0x104288u: goto label_104288;
            case 0x10428Cu: goto label_10428c;
            case 0x104290u: goto label_104290;
            case 0x104294u: goto label_104294;
            case 0x104298u: goto label_104298;
            case 0x10429Cu: goto label_10429c;
            case 0x1042A0u: goto label_1042a0;
            case 0x1042A4u: goto label_1042a4;
            case 0x1042A8u: goto label_1042a8;
            case 0x1042ACu: goto label_1042ac;
            case 0x1042B0u: goto label_1042b0;
            case 0x1042B4u: goto label_1042b4;
            case 0x1042B8u: goto label_1042b8;
            case 0x1042BCu: goto label_1042bc;
            case 0x1042C0u: goto label_1042c0;
            case 0x1042C4u: goto label_1042c4;
            case 0x1042C8u: goto label_1042c8;
            case 0x1042CCu: goto label_1042cc;
            case 0x1042D0u: goto label_1042d0;
            case 0x1042D4u: goto label_1042d4;
            case 0x1042D8u: goto label_1042d8;
            case 0x1042DCu: goto label_1042dc;
            case 0x1042E0u: goto label_1042e0;
            case 0x1042E4u: goto label_1042e4;
            case 0x1042E8u: goto label_1042e8;
            case 0x1042ECu: goto label_1042ec;
            case 0x1042F0u: goto label_1042f0;
            case 0x1042F4u: goto label_1042f4;
            case 0x1042F8u: goto label_1042f8;
            case 0x1042FCu: goto label_1042fc;
            case 0x104300u: goto label_104300;
            case 0x104304u: goto label_104304;
            case 0x104308u: goto label_104308;
            case 0x10430Cu: goto label_10430c;
            case 0x104310u: goto label_104310;
            case 0x104314u: goto label_104314;
            case 0x104318u: goto label_104318;
            case 0x10431Cu: goto label_10431c;
            case 0x104320u: goto label_104320;
            case 0x104324u: goto label_104324;
            case 0x104328u: goto label_104328;
            case 0x10432Cu: goto label_10432c;
            case 0x104330u: goto label_104330;
            case 0x104334u: goto label_104334;
            case 0x104338u: goto label_104338;
            case 0x10433Cu: goto label_10433c;
            case 0x104340u: goto label_104340;
            case 0x104344u: goto label_104344;
            case 0x104348u: goto label_104348;
            case 0x10434Cu: goto label_10434c;
            case 0x104350u: goto label_104350;
            case 0x104354u: goto label_104354;
            case 0x104358u: goto label_104358;
            case 0x10435Cu: goto label_10435c;
            case 0x104360u: goto label_104360;
            case 0x104364u: goto label_104364;
            case 0x104368u: goto label_104368;
            case 0x10436Cu: goto label_10436c;
            case 0x104370u: goto label_104370;
            case 0x104374u: goto label_104374;
            case 0x104378u: goto label_104378;
            case 0x10437Cu: goto label_10437c;
            case 0x104380u: goto label_104380;
            case 0x104384u: goto label_104384;
            case 0x104388u: goto label_104388;
            case 0x10438Cu: goto label_10438c;
            case 0x104390u: goto label_104390;
            case 0x104394u: goto label_104394;
            case 0x104398u: goto label_104398;
            case 0x10439Cu: goto label_10439c;
            case 0x1043A0u: goto label_1043a0;
            case 0x1043A4u: goto label_1043a4;
            case 0x1043A8u: goto label_1043a8;
            case 0x1043ACu: goto label_1043ac;
            case 0x1043B0u: goto label_1043b0;
            case 0x1043B4u: goto label_1043b4;
            case 0x1043B8u: goto label_1043b8;
            case 0x1043BCu: goto label_1043bc;
            case 0x1043C0u: goto label_1043c0;
            case 0x1043C4u: goto label_1043c4;
            case 0x1043C8u: goto label_1043c8;
            case 0x1043CCu: goto label_1043cc;
            case 0x1043D0u: goto label_1043d0;
            case 0x1043D4u: goto label_1043d4;
            case 0x1043D8u: goto label_1043d8;
            case 0x1043DCu: goto label_1043dc;
            case 0x1043E0u: goto label_1043e0;
            case 0x1043E4u: goto label_1043e4;
            case 0x1043E8u: goto label_1043e8;
            case 0x1043ECu: goto label_1043ec;
            case 0x1043F0u: goto label_1043f0;
            case 0x1043F4u: goto label_1043f4;
            case 0x1043F8u: goto label_1043f8;
            case 0x1043FCu: goto label_1043fc;
            case 0x104400u: goto label_104400;
            case 0x104404u: goto label_104404;
            case 0x104408u: goto label_104408;
            case 0x10440Cu: goto label_10440c;
            case 0x104410u: goto label_104410;
            case 0x104414u: goto label_104414;
            case 0x104418u: goto label_104418;
            case 0x10441Cu: goto label_10441c;
            case 0x104420u: goto label_104420;
            case 0x104424u: goto label_104424;
            case 0x104428u: goto label_104428;
            case 0x10442Cu: goto label_10442c;
            case 0x104430u: goto label_104430;
            case 0x104434u: goto label_104434;
            case 0x104438u: goto label_104438;
            case 0x10443Cu: goto label_10443c;
            case 0x104440u: goto label_104440;
            case 0x104444u: goto label_104444;
            case 0x104448u: goto label_104448;
            case 0x10444Cu: goto label_10444c;
            case 0x104450u: goto label_104450;
            case 0x104454u: goto label_104454;
            case 0x104458u: goto label_104458;
            case 0x10445Cu: goto label_10445c;
            case 0x104460u: goto label_104460;
            case 0x104464u: goto label_104464;
            case 0x104468u: goto label_104468;
            case 0x10446Cu: goto label_10446c;
            case 0x104470u: goto label_104470;
            case 0x104474u: goto label_104474;
            case 0x104478u: goto label_104478;
            case 0x10447Cu: goto label_10447c;
            case 0x104480u: goto label_104480;
            case 0x104484u: goto label_104484;
            case 0x104488u: goto label_104488;
            case 0x10448Cu: goto label_10448c;
            case 0x104490u: goto label_104490;
            case 0x104494u: goto label_104494;
            case 0x104498u: goto label_104498;
            case 0x10449Cu: goto label_10449c;
            case 0x1044A0u: goto label_1044a0;
            case 0x1044A4u: goto label_1044a4;
            case 0x1044A8u: goto label_1044a8;
            case 0x1044ACu: goto label_1044ac;
            case 0x1044B0u: goto label_1044b0;
            case 0x1044B4u: goto label_1044b4;
            case 0x1044B8u: goto label_1044b8;
            case 0x1044BCu: goto label_1044bc;
            case 0x1044C0u: goto label_1044c0;
            case 0x1044C4u: goto label_1044c4;
            case 0x1044C8u: goto label_1044c8;
            case 0x1044CCu: goto label_1044cc;
            case 0x1044D0u: goto label_1044d0;
            case 0x1044D4u: goto label_1044d4;
            case 0x1044D8u: goto label_1044d8;
            case 0x1044DCu: goto label_1044dc;
            case 0x1044E0u: goto label_1044e0;
            case 0x1044E4u: goto label_1044e4;
            case 0x1044E8u: goto label_1044e8;
            case 0x1044ECu: goto label_1044ec;
            case 0x1044F0u: goto label_1044f0;
            case 0x1044F4u: goto label_1044f4;
            case 0x1044F8u: goto label_1044f8;
            case 0x1044FCu: goto label_1044fc;
            case 0x104500u: goto label_104500;
            case 0x104504u: goto label_104504;
            case 0x104508u: goto label_104508;
            case 0x10450Cu: goto label_10450c;
            case 0x104510u: goto label_104510;
            case 0x104514u: goto label_104514;
            case 0x104518u: goto label_104518;
            case 0x10451Cu: goto label_10451c;
            case 0x104520u: goto label_104520;
            case 0x104524u: goto label_104524;
            case 0x104528u: goto label_104528;
            case 0x10452Cu: goto label_10452c;
            case 0x104530u: goto label_104530;
            case 0x104534u: goto label_104534;
            case 0x104538u: goto label_104538;
            case 0x10453Cu: goto label_10453c;
            case 0x104540u: goto label_104540;
            case 0x104544u: goto label_104544;
            case 0x104548u: goto label_104548;
            case 0x10454Cu: goto label_10454c;
            case 0x104550u: goto label_104550;
            case 0x104554u: goto label_104554;
            case 0x104558u: goto label_104558;
            case 0x10455Cu: goto label_10455c;
            case 0x104560u: goto label_104560;
            case 0x104564u: goto label_104564;
            case 0x104568u: goto label_104568;
            case 0x10456Cu: goto label_10456c;
            case 0x104570u: goto label_104570;
            case 0x104574u: goto label_104574;
            case 0x104578u: goto label_104578;
            case 0x10457Cu: goto label_10457c;
            case 0x104580u: goto label_104580;
            case 0x104584u: goto label_104584;
            case 0x104588u: goto label_104588;
            case 0x10458Cu: goto label_10458c;
            case 0x104590u: goto label_104590;
            case 0x104594u: goto label_104594;
            case 0x104598u: goto label_104598;
            case 0x10459Cu: goto label_10459c;
            case 0x1045A0u: goto label_1045a0;
            case 0x1045A4u: goto label_1045a4;
            case 0x1045A8u: goto label_1045a8;
            case 0x1045ACu: goto label_1045ac;
            case 0x1045B0u: goto label_1045b0;
            case 0x1045B4u: goto label_1045b4;
            case 0x1045B8u: goto label_1045b8;
            case 0x1045BCu: goto label_1045bc;
            case 0x1045C0u: goto label_1045c0;
            case 0x1045C4u: goto label_1045c4;
            case 0x1045C8u: goto label_1045c8;
            case 0x1045CCu: goto label_1045cc;
            case 0x1045D0u: goto label_1045d0;
            case 0x1045D4u: goto label_1045d4;
            case 0x1045D8u: goto label_1045d8;
            case 0x1045DCu: goto label_1045dc;
            case 0x1045E0u: goto label_1045e0;
            case 0x1045E4u: goto label_1045e4;
            case 0x1045E8u: goto label_1045e8;
            case 0x1045ECu: goto label_1045ec;
            case 0x1045F0u: goto label_1045f0;
            case 0x1045F4u: goto label_1045f4;
            case 0x1045F8u: goto label_1045f8;
            case 0x1045FCu: goto label_1045fc;
            case 0x104600u: goto label_104600;
            case 0x104604u: goto label_104604;
            case 0x104608u: goto label_104608;
            case 0x10460Cu: goto label_10460c;
            case 0x104610u: goto label_104610;
            case 0x104614u: goto label_104614;
            case 0x104618u: goto label_104618;
            case 0x10461Cu: goto label_10461c;
            case 0x104620u: goto label_104620;
            case 0x104624u: goto label_104624;
            case 0x104628u: goto label_104628;
            case 0x10462Cu: goto label_10462c;
            case 0x104630u: goto label_104630;
            case 0x104634u: goto label_104634;
            case 0x104638u: goto label_104638;
            case 0x10463Cu: goto label_10463c;
            case 0x104640u: goto label_104640;
            case 0x104644u: goto label_104644;
            case 0x104648u: goto label_104648;
            case 0x10464Cu: goto label_10464c;
            case 0x104650u: goto label_104650;
            case 0x104654u: goto label_104654;
            case 0x104658u: goto label_104658;
            case 0x10465Cu: goto label_10465c;
            case 0x104660u: goto label_104660;
            case 0x104664u: goto label_104664;
            case 0x104668u: goto label_104668;
            case 0x10466Cu: goto label_10466c;
            case 0x104670u: goto label_104670;
            case 0x104674u: goto label_104674;
            case 0x104678u: goto label_104678;
            case 0x10467Cu: goto label_10467c;
            case 0x104680u: goto label_104680;
            case 0x104684u: goto label_104684;
            case 0x104688u: goto label_104688;
            case 0x10468Cu: goto label_10468c;
            case 0x104690u: goto label_104690;
            case 0x104694u: goto label_104694;
            case 0x104698u: goto label_104698;
            case 0x10469Cu: goto label_10469c;
            case 0x1046A0u: goto label_1046a0;
            case 0x1046A4u: goto label_1046a4;
            case 0x1046A8u: goto label_1046a8;
            case 0x1046ACu: goto label_1046ac;
            case 0x1046B0u: goto label_1046b0;
            case 0x1046B4u: goto label_1046b4;
            case 0x1046B8u: goto label_1046b8;
            case 0x1046BCu: goto label_1046bc;
            case 0x1046C0u: goto label_1046c0;
            case 0x1046C4u: goto label_1046c4;
            case 0x1046C8u: goto label_1046c8;
            case 0x1046CCu: goto label_1046cc;
            case 0x1046D0u: goto label_1046d0;
            case 0x1046D4u: goto label_1046d4;
            case 0x1046D8u: goto label_1046d8;
            case 0x1046DCu: goto label_1046dc;
            case 0x1046E0u: goto label_1046e0;
            case 0x1046E4u: goto label_1046e4;
            case 0x1046E8u: goto label_1046e8;
            case 0x1046ECu: goto label_1046ec;
            case 0x1046F0u: goto label_1046f0;
            case 0x1046F4u: goto label_1046f4;
            case 0x1046F8u: goto label_1046f8;
            case 0x1046FCu: goto label_1046fc;
            case 0x104700u: goto label_104700;
            case 0x104704u: goto label_104704;
            case 0x104708u: goto label_104708;
            case 0x10470Cu: goto label_10470c;
            case 0x104710u: goto label_104710;
            case 0x104714u: goto label_104714;
            case 0x104718u: goto label_104718;
            case 0x10471Cu: goto label_10471c;
            case 0x104720u: goto label_104720;
            case 0x104724u: goto label_104724;
            case 0x104728u: goto label_104728;
            case 0x10472Cu: goto label_10472c;
            case 0x104730u: goto label_104730;
            case 0x104734u: goto label_104734;
            case 0x104738u: goto label_104738;
            case 0x10473Cu: goto label_10473c;
            case 0x104740u: goto label_104740;
            case 0x104744u: goto label_104744;
            case 0x104748u: goto label_104748;
            case 0x10474Cu: goto label_10474c;
            case 0x104750u: goto label_104750;
            case 0x104754u: goto label_104754;
            case 0x104758u: goto label_104758;
            case 0x10475Cu: goto label_10475c;
            case 0x104760u: goto label_104760;
            case 0x104764u: goto label_104764;
            case 0x104768u: goto label_104768;
            case 0x10476Cu: goto label_10476c;
            case 0x104770u: goto label_104770;
            case 0x104774u: goto label_104774;
            case 0x104778u: goto label_104778;
            case 0x10477Cu: goto label_10477c;
            case 0x104780u: goto label_104780;
            case 0x104784u: goto label_104784;
            case 0x104788u: goto label_104788;
            case 0x10478Cu: goto label_10478c;
            case 0x104790u: goto label_104790;
            case 0x104794u: goto label_104794;
            case 0x104798u: goto label_104798;
            case 0x10479Cu: goto label_10479c;
            case 0x1047A0u: goto label_1047a0;
            case 0x1047A4u: goto label_1047a4;
            case 0x1047A8u: goto label_1047a8;
            case 0x1047ACu: goto label_1047ac;
            case 0x1047B0u: goto label_1047b0;
            case 0x1047B4u: goto label_1047b4;
            case 0x1047B8u: goto label_1047b8;
            case 0x1047BCu: goto label_1047bc;
            case 0x1047C0u: goto label_1047c0;
            case 0x1047C4u: goto label_1047c4;
            case 0x1047C8u: goto label_1047c8;
            case 0x1047CCu: goto label_1047cc;
            case 0x1047D0u: goto label_1047d0;
            case 0x1047D4u: goto label_1047d4;
            case 0x1047D8u: goto label_1047d8;
            case 0x1047DCu: goto label_1047dc;
            case 0x1047E0u: goto label_1047e0;
            case 0x1047E4u: goto label_1047e4;
            case 0x1047E8u: goto label_1047e8;
            case 0x1047ECu: goto label_1047ec;
            case 0x1047F0u: goto label_1047f0;
            case 0x1047F4u: goto label_1047f4;
            case 0x1047F8u: goto label_1047f8;
            case 0x1047FCu: goto label_1047fc;
            case 0x104800u: goto label_104800;
            case 0x104804u: goto label_104804;
            case 0x104808u: goto label_104808;
            case 0x10480Cu: goto label_10480c;
            case 0x104810u: goto label_104810;
            case 0x104814u: goto label_104814;
            case 0x104818u: goto label_104818;
            case 0x10481Cu: goto label_10481c;
            case 0x104820u: goto label_104820;
            case 0x104824u: goto label_104824;
            case 0x104828u: goto label_104828;
            case 0x10482Cu: goto label_10482c;
            case 0x104830u: goto label_104830;
            case 0x104834u: goto label_104834;
            case 0x104838u: goto label_104838;
            case 0x10483Cu: goto label_10483c;
            case 0x104840u: goto label_104840;
            case 0x104844u: goto label_104844;
            case 0x104848u: goto label_104848;
            case 0x10484Cu: goto label_10484c;
            case 0x104850u: goto label_104850;
            case 0x104854u: goto label_104854;
            case 0x104858u: goto label_104858;
            case 0x10485Cu: goto label_10485c;
            case 0x104860u: goto label_104860;
            case 0x104864u: goto label_104864;
            case 0x104868u: goto label_104868;
            case 0x10486Cu: goto label_10486c;
            case 0x104870u: goto label_104870;
            case 0x104874u: goto label_104874;
            case 0x104878u: goto label_104878;
            case 0x10487Cu: goto label_10487c;
            case 0x104880u: goto label_104880;
            case 0x104884u: goto label_104884;
            case 0x104888u: goto label_104888;
            case 0x10488Cu: goto label_10488c;
            case 0x104890u: goto label_104890;
            case 0x104894u: goto label_104894;
            case 0x104898u: goto label_104898;
            case 0x10489Cu: goto label_10489c;
            case 0x1048A0u: goto label_1048a0;
            case 0x1048A4u: goto label_1048a4;
            case 0x1048A8u: goto label_1048a8;
            case 0x1048ACu: goto label_1048ac;
            case 0x1048B0u: goto label_1048b0;
            case 0x1048B4u: goto label_1048b4;
            case 0x1048B8u: goto label_1048b8;
            case 0x1048BCu: goto label_1048bc;
            case 0x1048C0u: goto label_1048c0;
            case 0x1048C4u: goto label_1048c4;
            case 0x1048C8u: goto label_1048c8;
            case 0x1048CCu: goto label_1048cc;
            case 0x1048D0u: goto label_1048d0;
            case 0x1048D4u: goto label_1048d4;
            case 0x1048D8u: goto label_1048d8;
            case 0x1048DCu: goto label_1048dc;
            case 0x1048E0u: goto label_1048e0;
            case 0x1048E4u: goto label_1048e4;
            case 0x1048E8u: goto label_1048e8;
            case 0x1048ECu: goto label_1048ec;
            case 0x1048F0u: goto label_1048f0;
            case 0x1048F4u: goto label_1048f4;
            case 0x1048F8u: goto label_1048f8;
            case 0x1048FCu: goto label_1048fc;
            case 0x104900u: goto label_104900;
            case 0x104904u: goto label_104904;
            case 0x104908u: goto label_104908;
            case 0x10490Cu: goto label_10490c;
            case 0x104910u: goto label_104910;
            case 0x104914u: goto label_104914;
            case 0x104918u: goto label_104918;
            case 0x10491Cu: goto label_10491c;
            case 0x104920u: goto label_104920;
            case 0x104924u: goto label_104924;
            case 0x104928u: goto label_104928;
            case 0x10492Cu: goto label_10492c;
            case 0x104930u: goto label_104930;
            case 0x104934u: goto label_104934;
            case 0x104938u: goto label_104938;
            case 0x10493Cu: goto label_10493c;
            case 0x104940u: goto label_104940;
            case 0x104944u: goto label_104944;
            case 0x104948u: goto label_104948;
            case 0x10494Cu: goto label_10494c;
            case 0x104950u: goto label_104950;
            case 0x104954u: goto label_104954;
            case 0x104958u: goto label_104958;
            case 0x10495Cu: goto label_10495c;
            case 0x104960u: goto label_104960;
            case 0x104964u: goto label_104964;
            case 0x104968u: goto label_104968;
            case 0x10496Cu: goto label_10496c;
            case 0x104970u: goto label_104970;
            case 0x104974u: goto label_104974;
            case 0x104978u: goto label_104978;
            case 0x10497Cu: goto label_10497c;
            case 0x104980u: goto label_104980;
            case 0x104984u: goto label_104984;
            case 0x104988u: goto label_104988;
            case 0x10498Cu: goto label_10498c;
            case 0x104990u: goto label_104990;
            case 0x104994u: goto label_104994;
            case 0x104998u: goto label_104998;
            case 0x10499Cu: goto label_10499c;
            case 0x1049A0u: goto label_1049a0;
            case 0x1049A4u: goto label_1049a4;
            case 0x1049A8u: goto label_1049a8;
            case 0x1049ACu: goto label_1049ac;
            case 0x1049B0u: goto label_1049b0;
            case 0x1049B4u: goto label_1049b4;
            case 0x1049B8u: goto label_1049b8;
            case 0x1049BCu: goto label_1049bc;
            case 0x1049C0u: goto label_1049c0;
            case 0x1049C4u: goto label_1049c4;
            case 0x1049C8u: goto label_1049c8;
            case 0x1049CCu: goto label_1049cc;
            case 0x1049D0u: goto label_1049d0;
            case 0x1049D4u: goto label_1049d4;
            case 0x1049D8u: goto label_1049d8;
            case 0x1049DCu: goto label_1049dc;
            case 0x1049E0u: goto label_1049e0;
            case 0x1049E4u: goto label_1049e4;
            case 0x1049E8u: goto label_1049e8;
            case 0x1049ECu: goto label_1049ec;
            case 0x1049F0u: goto label_1049f0;
            case 0x1049F4u: goto label_1049f4;
            case 0x1049F8u: goto label_1049f8;
            case 0x1049FCu: goto label_1049fc;
            case 0x104A00u: goto label_104a00;
            case 0x104A04u: goto label_104a04;
            case 0x104A08u: goto label_104a08;
            case 0x104A0Cu: goto label_104a0c;
            case 0x104A10u: goto label_104a10;
            case 0x104A14u: goto label_104a14;
            case 0x104A18u: goto label_104a18;
            case 0x104A1Cu: goto label_104a1c;
            case 0x104A20u: goto label_104a20;
            case 0x104A24u: goto label_104a24;
            case 0x104A28u: goto label_104a28;
            case 0x104A2Cu: goto label_104a2c;
            case 0x104A30u: goto label_104a30;
            case 0x104A34u: goto label_104a34;
            case 0x104A38u: goto label_104a38;
            case 0x104A3Cu: goto label_104a3c;
            case 0x104A40u: goto label_104a40;
            case 0x104A44u: goto label_104a44;
            case 0x104A48u: goto label_104a48;
            case 0x104A4Cu: goto label_104a4c;
            case 0x104A50u: goto label_104a50;
            case 0x104A54u: goto label_104a54;
            case 0x104A58u: goto label_104a58;
            case 0x104A5Cu: goto label_104a5c;
            case 0x104A60u: goto label_104a60;
            case 0x104A64u: goto label_104a64;
            case 0x104A68u: goto label_104a68;
            case 0x104A6Cu: goto label_104a6c;
            case 0x104A70u: goto label_104a70;
            case 0x104A74u: goto label_104a74;
            case 0x104A78u: goto label_104a78;
            case 0x104A7Cu: goto label_104a7c;
            case 0x104A80u: goto label_104a80;
            case 0x104A84u: goto label_104a84;
            case 0x104A88u: goto label_104a88;
            case 0x104A8Cu: goto label_104a8c;
            case 0x104A90u: goto label_104a90;
            case 0x104A94u: goto label_104a94;
            case 0x104A98u: goto label_104a98;
            case 0x104A9Cu: goto label_104a9c;
            case 0x104AA0u: goto label_104aa0;
            case 0x104AA4u: goto label_104aa4;
            case 0x104AA8u: goto label_104aa8;
            case 0x104AACu: goto label_104aac;
            case 0x104AB0u: goto label_104ab0;
            case 0x104AB4u: goto label_104ab4;
            case 0x104AB8u: goto label_104ab8;
            case 0x104ABCu: goto label_104abc;
            case 0x104AC0u: goto label_104ac0;
            case 0x104AC4u: goto label_104ac4;
            case 0x104AC8u: goto label_104ac8;
            case 0x104ACCu: goto label_104acc;
            case 0x104AD0u: goto label_104ad0;
            case 0x104AD4u: goto label_104ad4;
            case 0x104AD8u: goto label_104ad8;
            case 0x104ADCu: goto label_104adc;
            case 0x104AE0u: goto label_104ae0;
            case 0x104AE4u: goto label_104ae4;
            case 0x104AE8u: goto label_104ae8;
            case 0x104AECu: goto label_104aec;
            case 0x104AF0u: goto label_104af0;
            case 0x104AF4u: goto label_104af4;
            case 0x104AF8u: goto label_104af8;
            case 0x104AFCu: goto label_104afc;
            case 0x104B00u: goto label_104b00;
            case 0x104B04u: goto label_104b04;
            case 0x104B08u: goto label_104b08;
            case 0x104B0Cu: goto label_104b0c;
            case 0x104B10u: goto label_104b10;
            case 0x104B14u: goto label_104b14;
            case 0x104B18u: goto label_104b18;
            case 0x104B1Cu: goto label_104b1c;
            case 0x104B20u: goto label_104b20;
            case 0x104B24u: goto label_104b24;
            case 0x104B28u: goto label_104b28;
            case 0x104B2Cu: goto label_104b2c;
            case 0x104B30u: goto label_104b30;
            case 0x104B34u: goto label_104b34;
            case 0x104B38u: goto label_104b38;
            case 0x104B3Cu: goto label_104b3c;
            case 0x104B40u: goto label_104b40;
            case 0x104B44u: goto label_104b44;
            case 0x104B48u: goto label_104b48;
            case 0x104B4Cu: goto label_104b4c;
            case 0x104B50u: goto label_104b50;
            case 0x104B54u: goto label_104b54;
            case 0x104B58u: goto label_104b58;
            case 0x104B5Cu: goto label_104b5c;
            case 0x104B60u: goto label_104b60;
            case 0x104B64u: goto label_104b64;
            case 0x104B68u: goto label_104b68;
            case 0x104B6Cu: goto label_104b6c;
            case 0x104B70u: goto label_104b70;
            case 0x104B74u: goto label_104b74;
            case 0x104B78u: goto label_104b78;
            case 0x104B7Cu: goto label_104b7c;
            case 0x104B80u: goto label_104b80;
            case 0x104B84u: goto label_104b84;
            case 0x104B88u: goto label_104b88;
            case 0x104B8Cu: goto label_104b8c;
            case 0x104B90u: goto label_104b90;
            case 0x104B94u: goto label_104b94;
            case 0x104B98u: goto label_104b98;
            case 0x104B9Cu: goto label_104b9c;
            case 0x104BA0u: goto label_104ba0;
            case 0x104BA4u: goto label_104ba4;
            case 0x104BA8u: goto label_104ba8;
            case 0x104BACu: goto label_104bac;
            case 0x104BB0u: goto label_104bb0;
            case 0x104BB4u: goto label_104bb4;
            case 0x104BB8u: goto label_104bb8;
            case 0x104BBCu: goto label_104bbc;
            case 0x104BC0u: goto label_104bc0;
            case 0x104BC4u: goto label_104bc4;
            case 0x104BC8u: goto label_104bc8;
            case 0x104BCCu: goto label_104bcc;
            case 0x104BD0u: goto label_104bd0;
            case 0x104BD4u: goto label_104bd4;
            case 0x104BD8u: goto label_104bd8;
            case 0x104BDCu: goto label_104bdc;
            case 0x104BE0u: goto label_104be0;
            case 0x104BE4u: goto label_104be4;
            case 0x104BE8u: goto label_104be8;
            case 0x104BECu: goto label_104bec;
            case 0x104BF0u: goto label_104bf0;
            case 0x104BF4u: goto label_104bf4;
            case 0x104BF8u: goto label_104bf8;
            case 0x104BFCu: goto label_104bfc;
            case 0x104C00u: goto label_104c00;
            case 0x104C04u: goto label_104c04;
            case 0x104C08u: goto label_104c08;
            case 0x104C0Cu: goto label_104c0c;
            case 0x104C10u: goto label_104c10;
            case 0x104C14u: goto label_104c14;
            case 0x104C18u: goto label_104c18;
            case 0x104C1Cu: goto label_104c1c;
            case 0x104C20u: goto label_104c20;
            case 0x104C24u: goto label_104c24;
            case 0x104C28u: goto label_104c28;
            case 0x104C2Cu: goto label_104c2c;
            case 0x104C30u: goto label_104c30;
            case 0x104C34u: goto label_104c34;
            case 0x104C38u: goto label_104c38;
            case 0x104C3Cu: goto label_104c3c;
            case 0x104C40u: goto label_104c40;
            case 0x104C44u: goto label_104c44;
            case 0x104C48u: goto label_104c48;
            case 0x104C4Cu: goto label_104c4c;
            case 0x104C50u: goto label_104c50;
            case 0x104C54u: goto label_104c54;
            case 0x104C58u: goto label_104c58;
            case 0x104C5Cu: goto label_104c5c;
            case 0x104C60u: goto label_104c60;
            case 0x104C64u: goto label_104c64;
            case 0x104C68u: goto label_104c68;
            case 0x104C6Cu: goto label_104c6c;
            case 0x104C70u: goto label_104c70;
            case 0x104C74u: goto label_104c74;
            case 0x104C78u: goto label_104c78;
            case 0x104C7Cu: goto label_104c7c;
            case 0x104C80u: goto label_104c80;
            case 0x104C84u: goto label_104c84;
            case 0x104C88u: goto label_104c88;
            case 0x104C8Cu: goto label_104c8c;
            case 0x104C90u: goto label_104c90;
            case 0x104C94u: goto label_104c94;
            case 0x104C98u: goto label_104c98;
            case 0x104C9Cu: goto label_104c9c;
            case 0x104CA0u: goto label_104ca0;
            case 0x104CA4u: goto label_104ca4;
            case 0x104CA8u: goto label_104ca8;
            case 0x104CACu: goto label_104cac;
            case 0x104CB0u: goto label_104cb0;
            case 0x104CB4u: goto label_104cb4;
            case 0x104CB8u: goto label_104cb8;
            case 0x104CBCu: goto label_104cbc;
            case 0x104CC0u: goto label_104cc0;
            case 0x104CC4u: goto label_104cc4;
            case 0x104CC8u: goto label_104cc8;
            case 0x104CCCu: goto label_104ccc;
            case 0x104CD0u: goto label_104cd0;
            case 0x104CD4u: goto label_104cd4;
            case 0x104CD8u: goto label_104cd8;
            case 0x104CDCu: goto label_104cdc;
            case 0x104CE0u: goto label_104ce0;
            case 0x104CE4u: goto label_104ce4;
            case 0x104CE8u: goto label_104ce8;
            case 0x104CECu: goto label_104cec;
            case 0x104CF0u: goto label_104cf0;
            case 0x104CF4u: goto label_104cf4;
            case 0x104CF8u: goto label_104cf8;
            case 0x104CFCu: goto label_104cfc;
            case 0x104D00u: goto label_104d00;
            case 0x104D04u: goto label_104d04;
            case 0x104D08u: goto label_104d08;
            case 0x104D0Cu: goto label_104d0c;
            case 0x104D10u: goto label_104d10;
            case 0x104D14u: goto label_104d14;
            case 0x104D18u: goto label_104d18;
            case 0x104D1Cu: goto label_104d1c;
            case 0x104D20u: goto label_104d20;
            case 0x104D24u: goto label_104d24;
            case 0x104D28u: goto label_104d28;
            case 0x104D2Cu: goto label_104d2c;
            case 0x104D30u: goto label_104d30;
            case 0x104D34u: goto label_104d34;
            case 0x104D38u: goto label_104d38;
            case 0x104D3Cu: goto label_104d3c;
            case 0x104D40u: goto label_104d40;
            case 0x104D44u: goto label_104d44;
            case 0x104D48u: goto label_104d48;
            case 0x104D4Cu: goto label_104d4c;
            case 0x104D50u: goto label_104d50;
            case 0x104D54u: goto label_104d54;
            case 0x104D58u: goto label_104d58;
            case 0x104D5Cu: goto label_104d5c;
            case 0x104D60u: goto label_104d60;
            case 0x104D64u: goto label_104d64;
            case 0x104D68u: goto label_104d68;
            case 0x104D6Cu: goto label_104d6c;
            case 0x104D70u: goto label_104d70;
            case 0x104D74u: goto label_104d74;
            case 0x104D78u: goto label_104d78;
            case 0x104D7Cu: goto label_104d7c;
            case 0x104D80u: goto label_104d80;
            case 0x104D84u: goto label_104d84;
            case 0x104D88u: goto label_104d88;
            case 0x104D8Cu: goto label_104d8c;
            case 0x104D90u: goto label_104d90;
            case 0x104D94u: goto label_104d94;
            case 0x104D98u: goto label_104d98;
            case 0x104D9Cu: goto label_104d9c;
            case 0x104DA0u: goto label_104da0;
            case 0x104DA4u: goto label_104da4;
            case 0x104DA8u: goto label_104da8;
            case 0x104DACu: goto label_104dac;
            case 0x104DB0u: goto label_104db0;
            case 0x104DB4u: goto label_104db4;
            case 0x104DB8u: goto label_104db8;
            case 0x104DBCu: goto label_104dbc;
            case 0x104DC0u: goto label_104dc0;
            case 0x104DC4u: goto label_104dc4;
            case 0x104DC8u: goto label_104dc8;
            case 0x104DCCu: goto label_104dcc;
            case 0x104DD0u: goto label_104dd0;
            case 0x104DD4u: goto label_104dd4;
            case 0x104DD8u: goto label_104dd8;
            case 0x104DDCu: goto label_104ddc;
            case 0x104DE0u: goto label_104de0;
            case 0x104DE4u: goto label_104de4;
            case 0x104DE8u: goto label_104de8;
            case 0x104DECu: goto label_104dec;
            case 0x104DF0u: goto label_104df0;
            case 0x104DF4u: goto label_104df4;
            case 0x104DF8u: goto label_104df8;
            case 0x104DFCu: goto label_104dfc;
            case 0x104E00u: goto label_104e00;
            case 0x104E04u: goto label_104e04;
            case 0x104E08u: goto label_104e08;
            case 0x104E0Cu: goto label_104e0c;
            case 0x104E10u: goto label_104e10;
            case 0x104E14u: goto label_104e14;
            case 0x104E18u: goto label_104e18;
            case 0x104E1Cu: goto label_104e1c;
            case 0x104E20u: goto label_104e20;
            case 0x104E24u: goto label_104e24;
            case 0x104E28u: goto label_104e28;
            case 0x104E2Cu: goto label_104e2c;
            case 0x104E30u: goto label_104e30;
            case 0x104E34u: goto label_104e34;
            case 0x104E38u: goto label_104e38;
            case 0x104E3Cu: goto label_104e3c;
            case 0x104E40u: goto label_104e40;
            case 0x104E44u: goto label_104e44;
            case 0x104E48u: goto label_104e48;
            case 0x104E4Cu: goto label_104e4c;
            case 0x104E50u: goto label_104e50;
            case 0x104E54u: goto label_104e54;
            case 0x104E58u: goto label_104e58;
            case 0x104E5Cu: goto label_104e5c;
            case 0x104E60u: goto label_104e60;
            case 0x104E64u: goto label_104e64;
            case 0x104E68u: goto label_104e68;
            case 0x104E6Cu: goto label_104e6c;
            case 0x104E70u: goto label_104e70;
            case 0x104E74u: goto label_104e74;
            case 0x104E78u: goto label_104e78;
            case 0x104E7Cu: goto label_104e7c;
            case 0x104E80u: goto label_104e80;
            case 0x104E84u: goto label_104e84;
            case 0x104E88u: goto label_104e88;
            case 0x104E8Cu: goto label_104e8c;
            case 0x104E90u: goto label_104e90;
            case 0x104E94u: goto label_104e94;
            case 0x104E98u: goto label_104e98;
            case 0x104E9Cu: goto label_104e9c;
            case 0x104EA0u: goto label_104ea0;
            case 0x104EA4u: goto label_104ea4;
            case 0x104EA8u: goto label_104ea8;
            case 0x104EACu: goto label_104eac;
            case 0x104EB0u: goto label_104eb0;
            case 0x104EB4u: goto label_104eb4;
            case 0x104EB8u: goto label_104eb8;
            case 0x104EBCu: goto label_104ebc;
            case 0x104EC0u: goto label_104ec0;
            case 0x104EC4u: goto label_104ec4;
            case 0x104EC8u: goto label_104ec8;
            case 0x104ECCu: goto label_104ecc;
            case 0x104ED0u: goto label_104ed0;
            case 0x104ED4u: goto label_104ed4;
            case 0x104ED8u: goto label_104ed8;
            case 0x104EDCu: goto label_104edc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x104EDCu;
label_104edc:
    // 0x104edc: 0x0
    ctx->pc = 0x104edcu;
    // NOP
}
