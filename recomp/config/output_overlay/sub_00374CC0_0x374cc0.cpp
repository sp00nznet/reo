#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374CC0
// Address: 0x374cc0 - 0x374f10
void sub_00374CC0_0x374cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374cc0u;

    // 0x374cc0: 0x27bdff90
    ctx->pc = 0x374cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x374cc4: 0xffbf0060
    ctx->pc = 0x374cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x374cc8: 0x7fb40050
    ctx->pc = 0x374cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x374ccc: 0x7fb30040
    ctx->pc = 0x374cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x374cd0: 0x80a02d
    ctx->pc = 0x374cd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cd4: 0x7fb20030
    ctx->pc = 0x374cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x374cd8: 0xa0982d
    ctx->pc = 0x374cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cdc: 0x7fb10020
    ctx->pc = 0x374cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x374ce0: 0xe0902d
    ctx->pc = 0x374ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ce4: 0x7fb00010
    ctx->pc = 0x374ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x374ce8: 0x100882d
    ctx->pc = 0x374ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cec: 0xe7b7000c
    ctx->pc = 0x374cecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x374cf0: 0xc0202d
    ctx->pc = 0x374cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cf4: 0xe7b60008
    ctx->pc = 0x374cf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x374cf8: 0xe7b50004
    ctx->pc = 0x374cf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x374cfc: 0xc0dc4fc
    ctx->pc = 0x374CFCu;
    SET_GPR_U32(ctx, 31, 0x374D04u);
    ctx->pc = 0x374D00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x3713F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003713F0_0x3713f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D04u; }
    }
    if (ctx->pc != 0x374D04u) { return; }
    ctx->pc = 0x374D04u;
    // 0x374d04: 0x86630002
    ctx->pc = 0x374d04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x374d08: 0x3050ffff
    ctx->pc = 0x374d08u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374d0c: 0x3c020001
    ctx->pc = 0x374d0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x374d10: 0x431023
    ctx->pc = 0x374d10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374d14: 0x3042ffff
    ctx->pc = 0x374d14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374d18: 0x4400004
    ctx->pc = 0x374D18u;
    {
        const bool branch_taken_0x374d18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x374D1Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x374d18) {
            ctx->pc = 0x374D2Cu;
            goto label_374d2c;
        }
    }
    ctx->pc = 0x374D20u;
    // 0x374d20: 0x44820000
    ctx->pc = 0x374d20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374d24: 0x10000007
    ctx->pc = 0x374D24u;
    {
        const bool branch_taken_0x374d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374D28u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x374d24) {
            ctx->pc = 0x374D44u;
            goto label_374d44;
        }
    }
    ctx->pc = 0x374D2Cu;
label_374d2c:
    // 0x374d2c: 0x30420001
    ctx->pc = 0x374d2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x374d30: 0x621825
    ctx->pc = 0x374d30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374d34: 0x44830000
    ctx->pc = 0x374d34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374d38: 0x0
    ctx->pc = 0x374d38u;
    // NOP
    // 0x374d3c: 0x46800060
    ctx->pc = 0x374d3cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x374d40: 0x46010840
    ctx->pc = 0x374d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_374d44:
    // 0x374d44: 0x3c034780
    ctx->pc = 0x374d44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18304 << 16));
    // 0x374d48: 0x86620000
    ctx->pc = 0x374d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x374d4c: 0x44830000
    ctx->pc = 0x374d4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374d50: 0x0
    ctx->pc = 0x374d50u;
    // NOP
    // 0x374d54: 0x46000d43
    ctx->pc = 0x374d54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x374d58: 0x3c030001
    ctx->pc = 0x374d58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x374d5c: 0x0
    ctx->pc = 0x374d5cu;
    // NOP
    // 0x374d60: 0x621023
    ctx->pc = 0x374d60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374d64: 0x3042ffff
    ctx->pc = 0x374d64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374d68: 0x4400004
    ctx->pc = 0x374D68u;
    {
        const bool branch_taken_0x374d68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x374D6Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x374d68) {
            ctx->pc = 0x374D7Cu;
            goto label_374d7c;
        }
    }
    ctx->pc = 0x374D70u;
    // 0x374d70: 0x44820000
    ctx->pc = 0x374d70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374d74: 0x10000007
    ctx->pc = 0x374D74u;
    {
        const bool branch_taken_0x374d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374D78u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x374d74) {
            ctx->pc = 0x374D94u;
            goto label_374d94;
        }
    }
    ctx->pc = 0x374D7Cu;
label_374d7c:
    // 0x374d7c: 0x30420001
    ctx->pc = 0x374d7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x374d80: 0x621825
    ctx->pc = 0x374d80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374d84: 0x44830000
    ctx->pc = 0x374d84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374d88: 0x0
    ctx->pc = 0x374d88u;
    // NOP
    // 0x374d8c: 0x46800060
    ctx->pc = 0x374d8cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x374d90: 0x46010840
    ctx->pc = 0x374d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_374d94:
    // 0x374d94: 0x3c024780
    ctx->pc = 0x374d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x374d98: 0x3c040032
    ctx->pc = 0x374d98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x374d9c: 0x44820000
    ctx->pc = 0x374d9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374da0: 0x3c050032
    ctx->pc = 0x374da0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x374da4: 0x24844144
    ctx->pc = 0x374da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x374da8: 0x24a54138
    ctx->pc = 0x374da8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x374dac: 0x46000d03
    ctx->pc = 0x374dacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x374db0: 0x0
    ctx->pc = 0x374db0u;
    // NOP
    // 0x374db4: 0x0
    ctx->pc = 0x374db4u;
    // NOP
    // 0x374db8: 0xc0dc050
    ctx->pc = 0x374DB8u;
    SET_GPR_U32(ctx, 31, 0x374DC0u);
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374DC0u; }
    }
    if (ctx->pc != 0x374DC0u) { return; }
    ctx->pc = 0x374DC0u;
    // 0x374dc0: 0x3042ffff
    ctx->pc = 0x374dc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374dc4: 0x4400004
    ctx->pc = 0x374DC4u;
    {
        const bool branch_taken_0x374dc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x374DC8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x374dc4) {
            ctx->pc = 0x374DD8u;
            goto label_374dd8;
        }
    }
    ctx->pc = 0x374DCCu;
    // 0x374dcc: 0x44820000
    ctx->pc = 0x374dccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374dd0: 0x10000007
    ctx->pc = 0x374DD0u;
    {
        const bool branch_taken_0x374dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374DD4u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x374dd0) {
            ctx->pc = 0x374DF0u;
            goto label_374df0;
        }
    }
    ctx->pc = 0x374DD8u;
label_374dd8:
    // 0x374dd8: 0x30420001
    ctx->pc = 0x374dd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x374ddc: 0x621825
    ctx->pc = 0x374ddcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374de0: 0x44830000
    ctx->pc = 0x374de0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374de4: 0x0
    ctx->pc = 0x374de4u;
    // NOP
    // 0x374de8: 0x46800060
    ctx->pc = 0x374de8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x374dec: 0x46010840
    ctx->pc = 0x374decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_374df0:
    // 0x374df0: 0x3c024780
    ctx->pc = 0x374df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x374df4: 0x3c040032
    ctx->pc = 0x374df4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x374df8: 0x44820000
    ctx->pc = 0x374df8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374dfc: 0x3c050032
    ctx->pc = 0x374dfcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x374e00: 0x24844144
    ctx->pc = 0x374e00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x374e04: 0x24a54138
    ctx->pc = 0x374e04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x374e08: 0x46000dc3
    ctx->pc = 0x374e08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
    // 0x374e0c: 0x0
    ctx->pc = 0x374e0cu;
    // NOP
    // 0x374e10: 0x0
    ctx->pc = 0x374e10u;
    // NOP
    // 0x374e14: 0xc0dc068
    ctx->pc = 0x374E14u;
    SET_GPR_U32(ctx, 31, 0x374E1Cu);
    ctx->pc = 0x3701A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003701A0_0x3701a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E1Cu; }
    }
    if (ctx->pc != 0x374E1Cu) { return; }
    ctx->pc = 0x374E1Cu;
    // 0x374e1c: 0x3042ffff
    ctx->pc = 0x374e1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374e20: 0x4400004
    ctx->pc = 0x374E20u;
    {
        const bool branch_taken_0x374e20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x374E24u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x374e20) {
            ctx->pc = 0x374E34u;
            goto label_374e34;
        }
    }
    ctx->pc = 0x374E28u;
    // 0x374e28: 0x44820000
    ctx->pc = 0x374e28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374e2c: 0x10000007
    ctx->pc = 0x374E2Cu;
    {
        const bool branch_taken_0x374e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374E30u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x374e2c) {
            ctx->pc = 0x374E4Cu;
            goto label_374e4c;
        }
    }
    ctx->pc = 0x374E34u;
label_374e34:
    // 0x374e34: 0x30420001
    ctx->pc = 0x374e34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x374e38: 0x621825
    ctx->pc = 0x374e38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374e3c: 0x44830000
    ctx->pc = 0x374e3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374e40: 0x0
    ctx->pc = 0x374e40u;
    // NOP
    // 0x374e44: 0x46800060
    ctx->pc = 0x374e44u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x374e48: 0x46010840
    ctx->pc = 0x374e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_374e4c:
    // 0x374e4c: 0x3c024780
    ctx->pc = 0x374e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x374e50: 0x3c050032
    ctx->pc = 0x374e50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x374e54: 0x44820000
    ctx->pc = 0x374e54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374e58: 0x280202d
    ctx->pc = 0x374e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e5c: 0x24a54138
    ctx->pc = 0x374e5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x374e60: 0x46000d83
    ctx->pc = 0x374e60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
    // 0x374e64: 0x0
    ctx->pc = 0x374e64u;
    // NOP
    // 0x374e68: 0x0
    ctx->pc = 0x374e68u;
    // NOP
    // 0x374e6c: 0xc0dc050
    ctx->pc = 0x374E6Cu;
    SET_GPR_U32(ctx, 31, 0x374E74u);
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E74u; }
    }
    if (ctx->pc != 0x374E74u) { return; }
    ctx->pc = 0x374E74u;
    // 0x374e74: 0x3c050032
    ctx->pc = 0x374e74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x374e78: 0x280202d
    ctx->pc = 0x374e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e7c: 0xc0dc068
    ctx->pc = 0x374E7Cu;
    SET_GPR_U32(ctx, 31, 0x374E84u);
    ctx->pc = 0x374E80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    ctx->pc = 0x3701A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003701A0_0x3701a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374E84u; }
    }
    if (ctx->pc != 0x374E84u) { return; }
    ctx->pc = 0x374E84u;
    // 0x374e84: 0x3203ffff
    ctx->pc = 0x374e84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 65535));
    // 0x374e88: 0x3c040001
    ctx->pc = 0x374e88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x374e8c: 0x831823
    ctx->pc = 0x374e8cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374e90: 0x3c024780
    ctx->pc = 0x374e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x374e94: 0x31880
    ctx->pc = 0x374e94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x374e98: 0x3063ffff
    ctx->pc = 0x374e98u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x374e9c: 0x44831000
    ctx->pc = 0x374e9cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x374ea0: 0x44820800
    ctx->pc = 0x374ea0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x374ea4: 0x468010a0
    ctx->pc = 0x374ea4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x374ea8: 0x46011043
    ctx->pc = 0x374ea8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x374eac: 0x4617a800
    ctx->pc = 0x374eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x374eb0: 0x0
    ctx->pc = 0x374eb0u;
    // NOP
    // 0x374eb4: 0x0
    ctx->pc = 0x374eb4u;
    // NOP
    // 0x374eb8: 0xc064880
    ctx->pc = 0x374EB8u;
    SET_GPR_U32(ctx, 31, 0x374EC0u);
    ctx->pc = 0x374EBCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374EC0u; }
        if (ctx->pc != 0x374EC0u) { return; }
    }
    ctx->pc = 0x374EC0u;
    // 0x374ec0: 0x4616a040
    ctx->pc = 0x374ec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x374ec4: 0xe6400000
    ctx->pc = 0x374ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x374ec8: 0x44800000
    ctx->pc = 0x374ec8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x374ecc: 0xc064880
    ctx->pc = 0x374ECCu;
    SET_GPR_U32(ctx, 31, 0x374ED4u);
    ctx->pc = 0x374ED0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374ED4u; }
        if (ctx->pc != 0x374ED4u) { return; }
    }
    ctx->pc = 0x374ED4u;
    // 0x374ed4: 0xe6200000
    ctx->pc = 0x374ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x374ed8: 0xdfbf0060
    ctx->pc = 0x374ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374edc: 0xc7b7000c
    ctx->pc = 0x374edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x374ee0: 0x7bb40050
    ctx->pc = 0x374ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374ee4: 0xc7b60008
    ctx->pc = 0x374ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x374ee8: 0x7bb30040
    ctx->pc = 0x374ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374eec: 0xc7b50004
    ctx->pc = 0x374eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x374ef0: 0x7bb20030
    ctx->pc = 0x374ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374ef4: 0xc7b40000
    ctx->pc = 0x374ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374ef8: 0x7bb10020
    ctx->pc = 0x374ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374efc: 0x7bb00010
    ctx->pc = 0x374efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374f00: 0x3e00008
    ctx->pc = 0x374F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x374D2Cu: goto label_374d2c;
            case 0x374D44u: goto label_374d44;
            case 0x374D7Cu: goto label_374d7c;
            case 0x374D94u: goto label_374d94;
            case 0x374DD8u: goto label_374dd8;
            case 0x374DF0u: goto label_374df0;
            case 0x374E34u: goto label_374e34;
            case 0x374E4Cu: goto label_374e4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x374F08u;
    // 0x374f08: 0x0
    ctx->pc = 0x374f08u;
    // NOP
    // 0x374f0c: 0x0
    ctx->pc = 0x374f0cu;
    // NOP
}
