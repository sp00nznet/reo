#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111DB0
// Address: 0x111db0 - 0x112038
void sub_00111DB0_0x111db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111db0u;

    // 0x111db0: 0x27bdff50
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x111db4: 0xffa40060
    ctx->pc = 0x111db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x111db8: 0x27a40060
    ctx->pc = 0x111db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x111dbc: 0xffa50068
    ctx->pc = 0x111dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x111dc0: 0xffb00070
    ctx->pc = 0x111dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x111dc4: 0xffb10078
    ctx->pc = 0x111dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x111dc8: 0xffb20080
    ctx->pc = 0x111dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x111dcc: 0xffb30088
    ctx->pc = 0x111dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x111dd0: 0xffb40090
    ctx->pc = 0x111dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x111dd4: 0xffb50098
    ctx->pc = 0x111dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x111dd8: 0xffb600a0
    ctx->pc = 0x111dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x111ddc: 0xffbf00a8
    ctx->pc = 0x111ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x111de0: 0xc044674
    ctx->pc = 0x111DE0u;
    SET_GPR_U32(ctx, 31, 0x111DE8u);
    ctx->pc = 0x111DE4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DE8u; }
    }
    if (ctx->pc != 0x111DE8u) { return; }
    ctx->pc = 0x111DE8u;
    // 0x111de8: 0x27b00020
    ctx->pc = 0x111de8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x111dec: 0x27a40068
    ctx->pc = 0x111decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x111df0: 0xc044674
    ctx->pc = 0x111DF0u;
    SET_GPR_U32(ctx, 31, 0x111DF8u);
    ctx->pc = 0x111DF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DF8u; }
    }
    if (ctx->pc != 0x111DF8u) { return; }
    ctx->pc = 0x111DF8u;
    // 0x111df8: 0x8fa40000
    ctx->pc = 0x111df8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111dfc: 0x2c820002
    ctx->pc = 0x111dfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x111e00: 0x14400018
    ctx->pc = 0x111E00u;
    {
        const bool branch_taken_0x111e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111E04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x111e00) {
            ctx->pc = 0x111E64u;
            goto label_111e64;
        }
    }
    ctx->pc = 0x111E08u;
    // 0x111e08: 0x8fa30020
    ctx->pc = 0x111e08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111e0c: 0x2c620002
    ctx->pc = 0x111e0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x111e10: 0x5440001e
    ctx->pc = 0x111E10u;
    {
        const bool branch_taken_0x111e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111e10) {
            ctx->pc = 0x111E14u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->pc = 0x111E8Cu;
            goto label_111e8c;
        }
    }
    ctx->pc = 0x111E18u;
    // 0x111e18: 0x38820004
    ctx->pc = 0x111e18u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x111e1c: 0x14400006
    ctx->pc = 0x111E1Cu;
    {
        const bool branch_taken_0x111e1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111E20u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x111e1c) {
            ctx->pc = 0x111E38u;
            goto label_111e38;
        }
    }
    ctx->pc = 0x111E24u;
    // 0x111e24: 0x38620002
    ctx->pc = 0x111e24u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x111e28: 0x5440000e
    ctx->pc = 0x111E28u;
    {
        const bool branch_taken_0x111e28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111e28) {
            ctx->pc = 0x111E2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x111E64u;
            goto label_111e64;
        }
    }
    ctx->pc = 0x111E30u;
    // 0x111e30: 0x10000006
    ctx->pc = 0x111E30u;
    {
        const bool branch_taken_0x111e30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111E34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x111e30) {
            ctx->pc = 0x111E4Cu;
            goto label_111e4c;
        }
    }
    ctx->pc = 0x111E38u;
label_111e38:
    // 0x111e38: 0x14400007
    ctx->pc = 0x111E38u;
    {
        const bool branch_taken_0x111e38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111E3Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x111e38) {
            ctx->pc = 0x111E58u;
            goto label_111e58;
        }
    }
    ctx->pc = 0x111E40u;
    // 0x111e40: 0x54400012
    ctx->pc = 0x111E40u;
    {
        const bool branch_taken_0x111e40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111e40) {
            ctx->pc = 0x111E44u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->pc = 0x111E8Cu;
            goto label_111e8c;
        }
    }
    ctx->pc = 0x111E48u;
    // 0x111e48: 0x3c020024
    ctx->pc = 0x111e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_111e4c:
    // 0x111e4c: 0x1000006d
    ctx->pc = 0x111E4Cu;
    {
        const bool branch_taken_0x111e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111E50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294935968));
        if (branch_taken_0x111e4c) {
            ctx->pc = 0x112004u;
            goto label_112004;
        }
    }
    ctx->pc = 0x111E54u;
    // 0x111e54: 0x0
    ctx->pc = 0x111e54u;
    // NOP
label_111e58:
    // 0x111e58: 0x14400009
    ctx->pc = 0x111E58u;
    {
        const bool branch_taken_0x111e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111E5Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x111e58) {
            ctx->pc = 0x111E80u;
            goto label_111e80;
        }
    }
    ctx->pc = 0x111E60u;
    // 0x111e60: 0x8fa20004
    ctx->pc = 0x111e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_111e64:
    // 0x111e64: 0x3a0202d
    ctx->pc = 0x111e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e68: 0x8fa30024
    ctx->pc = 0x111e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x111e6c: 0x431026
    ctx->pc = 0x111e6cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111e70: 0x2102b
    ctx->pc = 0x111e70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111e74: 0x10000063
    ctx->pc = 0x111E74u;
    {
        const bool branch_taken_0x111e74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111E78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x111e74) {
            ctx->pc = 0x112004u;
            goto label_112004;
        }
    }
    ctx->pc = 0x111E7Cu;
    // 0x111e7c: 0x0
    ctx->pc = 0x111e7cu;
    // NOP
label_111e80:
    // 0x111e80: 0x14400009
    ctx->pc = 0x111E80u;
    {
        const bool branch_taken_0x111e80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111E84u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x111e80) {
            ctx->pc = 0x111EA8u;
            goto label_111ea8;
        }
    }
    ctx->pc = 0x111E88u;
    // 0x111e88: 0x8fa30024
    ctx->pc = 0x111e88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_111e8c:
    // 0x111e8c: 0x200202d
    ctx->pc = 0x111e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e90: 0x8fa20004
    ctx->pc = 0x111e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x111e94: 0x431026
    ctx->pc = 0x111e94u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111e98: 0x2102b
    ctx->pc = 0x111e98u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111e9c: 0x10000059
    ctx->pc = 0x111E9Cu;
    {
        const bool branch_taken_0x111e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111EA0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x111e9c) {
            ctx->pc = 0x112004u;
            goto label_112004;
        }
    }
    ctx->pc = 0x111EA4u;
    // 0x111ea4: 0x0
    ctx->pc = 0x111ea4u;
    // NOP
label_111ea8:
    // 0x111ea8: 0x3c15ffff
    ctx->pc = 0x111ea8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)65535 << 16));
    // 0x111eac: 0x15a83e
    ctx->pc = 0x111eacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x111eb0: 0xdfb20030
    ctx->pc = 0x111eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111eb4: 0x2758024
    ctx->pc = 0x111eb4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x111eb8: 0x13983e
    ctx->pc = 0x111eb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x111ebc: 0x255b024
    ctx->pc = 0x111ebcu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x111ec0: 0x12903e
    ctx->pc = 0x111ec0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x111ec4: 0x200282d
    ctx->pc = 0x111ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ec8: 0xc043ea8
    ctx->pc = 0x111EC8u;
    SET_GPR_U32(ctx, 31, 0x111ED0u);
    ctx->pc = 0x111ECCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111ED0u; }
    }
    if (ctx->pc != 0x111ED0u) { return; }
    ctx->pc = 0x111ED0u;
    // 0x111ed0: 0x240202d
    ctx->pc = 0x111ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ed4: 0x200282d
    ctx->pc = 0x111ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ed8: 0xc043ea8
    ctx->pc = 0x111ED8u;
    SET_GPR_U32(ctx, 31, 0x111EE0u);
    ctx->pc = 0x111EDCu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111EE0u; }
    }
    if (ctx->pc != 0x111EE0u) { return; }
    ctx->pc = 0x111EE0u;
    // 0x111ee0: 0x2c0202d
    ctx->pc = 0x111ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee4: 0x260282d
    ctx->pc = 0x111ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee8: 0xc043ea8
    ctx->pc = 0x111EE8u;
    SET_GPR_U32(ctx, 31, 0x111EF0u);
    ctx->pc = 0x111EECu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111EF0u; }
    }
    if (ctx->pc != 0x111EF0u) { return; }
    ctx->pc = 0x111EF0u;
    // 0x111ef0: 0x240202d
    ctx->pc = 0x111ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ef4: 0x40802d
    ctx->pc = 0x111ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ef8: 0x260282d
    ctx->pc = 0x111ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111efc: 0xc043ea8
    ctx->pc = 0x111EFCu;
    SET_GPR_U32(ctx, 31, 0x111F04u);
    ctx->pc = 0x111F00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111F04u; }
    }
    if (ctx->pc != 0x111F04u) { return; }
    ctx->pc = 0x111F04u;
    // 0x111f04: 0x211882b
    ctx->pc = 0x111f04u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x111f08: 0x10303c
    ctx->pc = 0x111f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x111f0c: 0x10803e
    ctx->pc = 0x111f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x111f10: 0x286302d
    ctx->pc = 0x111f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x111f14: 0x2158024
    ctx->pc = 0x111f14u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x111f18: 0x11883c
    ctx->pc = 0x111f18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x111f1c: 0x202802d
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x111f20: 0x8fa20004
    ctx->pc = 0x111f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x111f24: 0xd4a02b
    ctx->pc = 0x111f24u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x111f28: 0x8fa40008
    ctx->pc = 0x111f28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111f2c: 0x8fa70028
    ctx->pc = 0x111f2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111f30: 0x234882d
    ctx->pc = 0x111f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x111f34: 0x8fa50024
    ctx->pc = 0x111f34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x111f38: 0x230882d
    ctx->pc = 0x111f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x111f3c: 0x872021
    ctx->pc = 0x111f3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x111f40: 0x2403ffff
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111f44: 0x318fa
    ctx->pc = 0x111f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x111f48: 0x451026
    ctx->pc = 0x111f48u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x111f4c: 0x24840004
    ctx->pc = 0x111f4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x111f50: 0x2102b
    ctx->pc = 0x111f50u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111f54: 0x71182b
    ctx->pc = 0x111f54u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x111f58: 0xafa20044
    ctx->pc = 0x111f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x111f5c: 0x10600011
    ctx->pc = 0x111F5Cu;
    {
        const bool branch_taken_0x111f5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x111F60u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        if (branch_taken_0x111f5c) {
            ctx->pc = 0x111FA4u;
            goto label_111fa4;
        }
    }
    ctx->pc = 0x111F64u;
    // 0x111f64: 0x34078000
    ctx->pc = 0x111f64u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 32768));
    // 0x111f68: 0x73c3c
    ctx->pc = 0x111f68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x111f6c: 0x2405ffff
    ctx->pc = 0x111f6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111f70: 0x528fa
    ctx->pc = 0x111f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x111f74: 0x32220001
    ctx->pc = 0x111f74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_111f78:
    // 0x111f78: 0x11887a
    ctx->pc = 0x111f78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x111f7c: 0x2103c
    ctx->pc = 0x111f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111f80: 0x2103f
    ctx->pc = 0x111f80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x111f84: 0xb1182b
    ctx->pc = 0x111f84u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x111f88: 0x10400003
    ctx->pc = 0x111F88u;
    {
        const bool branch_taken_0x111f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111F8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x111f88) {
            ctx->pc = 0x111F98u;
            goto label_111f98;
        }
    }
    ctx->pc = 0x111F90u;
    // 0x111f90: 0x6307a
    ctx->pc = 0x111f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x111f94: 0xc73025
    ctx->pc = 0x111f94u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_111f98:
    // 0x111f98: 0x1460fff7
    ctx->pc = 0x111F98u;
    {
        const bool branch_taken_0x111f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x111F9Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x111f98) {
            ctx->pc = 0x111F78u;
            goto label_111f78;
        }
    }
    ctx->pc = 0x111FA0u;
    // 0x111fa0: 0xafa40048
    ctx->pc = 0x111fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_111fa4:
    // 0x111fa4: 0x2402ffff
    ctx->pc = 0x111fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111fa8: 0x2113a
    ctx->pc = 0x111fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x111fac: 0x51102b
    ctx->pc = 0x111facu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x111fb0: 0x14400011
    ctx->pc = 0x111FB0u;
    {
        const bool branch_taken_0x111fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111FB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x111fb0) {
            ctx->pc = 0x111FF8u;
            goto label_111ff8;
        }
    }
    ctx->pc = 0x111FB8u;
    // 0x111fb8: 0x8fa40048
    ctx->pc = 0x111fb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x111fbc: 0x34088000
    ctx->pc = 0x111fbcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 32768));
    // 0x111fc0: 0x8443c
    ctx->pc = 0x111fc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x111fc4: 0x24070001
    ctx->pc = 0x111fc4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x111fc8: 0x2405ffff
    ctx->pc = 0x111fc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111fcc: 0x5293a
    ctx->pc = 0x111fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_111fd0:
    // 0x111fd0: 0x118878
    ctx->pc = 0x111fd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x111fd4: 0xc81824
    ctx->pc = 0x111fd4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x111fd8: 0x2271025
    ctx->pc = 0x111fd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x111fdc: 0x2484ffff
    ctx->pc = 0x111fdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111fe0: 0x43880b
    ctx->pc = 0x111fe0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x111fe4: 0xb1102b
    ctx->pc = 0x111fe4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x111fe8: 0x1040fff9
    ctx->pc = 0x111FE8u;
    {
        const bool branch_taken_0x111fe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111FECu;
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        if (branch_taken_0x111fe8) {
            ctx->pc = 0x111FD0u;
            goto label_111fd0;
        }
    }
    ctx->pc = 0x111FF0u;
    // 0x111ff0: 0xafa40048
    ctx->pc = 0x111ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x111ff4: 0x24020003
    ctx->pc = 0x111ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_111ff8:
    // 0x111ff8: 0xffb10050
    ctx->pc = 0x111ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x111ffc: 0xafa20040
    ctx->pc = 0x111ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x112000: 0x27a40040
    ctx->pc = 0x112000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
label_112004:
    // 0x112004: 0xc04463e
    ctx->pc = 0x112004u;
    SET_GPR_U32(ctx, 31, 0x11200Cu);
    ctx->pc = 0x1118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118F8_0x1118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11200Cu; }
    }
    if (ctx->pc != 0x11200Cu) { return; }
    ctx->pc = 0x11200Cu;
    // 0x11200c: 0xdfb00070
    ctx->pc = 0x11200cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112010: 0xdfb10078
    ctx->pc = 0x112010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x112014: 0xdfb20080
    ctx->pc = 0x112014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112018: 0xdfb30088
    ctx->pc = 0x112018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11201c: 0xdfb40090
    ctx->pc = 0x11201cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112020: 0xdfb50098
    ctx->pc = 0x112020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x112024: 0xdfb600a0
    ctx->pc = 0x112024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112028: 0xdfbf00a8
    ctx->pc = 0x112028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11202c: 0x3e00008
    ctx->pc = 0x11202Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111E38u: goto label_111e38;
            case 0x111E4Cu: goto label_111e4c;
            case 0x111E58u: goto label_111e58;
            case 0x111E64u: goto label_111e64;
            case 0x111E80u: goto label_111e80;
            case 0x111E8Cu: goto label_111e8c;
            case 0x111EA8u: goto label_111ea8;
            case 0x111F78u: goto label_111f78;
            case 0x111F98u: goto label_111f98;
            case 0x111FA4u: goto label_111fa4;
            case 0x111FD0u: goto label_111fd0;
            case 0x111FF8u: goto label_111ff8;
            case 0x112004u: goto label_112004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112034u;
    // 0x112034: 0x0
    ctx->pc = 0x112034u;
    // NOP
}
