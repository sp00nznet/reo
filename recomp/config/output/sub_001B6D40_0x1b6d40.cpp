#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B6D40
// Address: 0x1b6d40 - 0x1b6e90
void sub_001B6D40_0x1b6d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b6d40u;

    // 0x1b6d40: 0x27bdffc0
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6d44: 0xffbf0020
    ctx->pc = 0x1b6d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b6d48: 0x7fb10010
    ctx->pc = 0x1b6d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6d4c: 0x7fb00000
    ctx->pc = 0x1b6d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6d50: 0xafa4003c
    ctx->pc = 0x1b6d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x1b6d54: 0x3c10002c
    ctx->pc = 0x1b6d54u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b6d58: 0x8fa2003c
    ctx->pc = 0x1b6d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b6d5c: 0x90430000
    ctx->pc = 0x1b6d5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6d60: 0x14600003
    ctx->pc = 0x1B6D60u;
    {
        const bool branch_taken_0x1b6d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6D64u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945520));
        if (branch_taken_0x1b6d60) {
            ctx->pc = 0x1B6D70u;
            goto label_1b6d70;
        }
    }
    ctx->pc = 0x1B6D68u;
    // 0x1b6d68: 0x10000041
    ctx->pc = 0x1B6D68u;
    {
        const bool branch_taken_0x1b6d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6D6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d68) {
            ctx->pc = 0x1B6E70u;
            goto label_1b6e70;
        }
    }
    ctx->pc = 0x1B6D70u;
label_1b6d70:
    // 0x1b6d70: 0x8e020008
    ctx->pc = 0x1b6d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6d74: 0x24110002
    ctx->pc = 0x1b6d74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6d78: 0x10510010
    ctx->pc = 0x1B6D78u;
    {
        const bool branch_taken_0x1b6d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x1B6D7Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x1b6d78) {
            ctx->pc = 0x1B6DBCu;
            goto label_1b6dbc;
        }
    }
    ctx->pc = 0x1B6D80u;
    // 0x1b6d80: 0x2c620080
    ctx->pc = 0x1b6d80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 128));
    // 0x1b6d84: 0x14400004
    ctx->pc = 0x1B6D84u;
    {
        const bool branch_taken_0x1b6d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6D88u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 224));
        if (branch_taken_0x1b6d84) {
            ctx->pc = 0x1B6D98u;
            goto label_1b6d98;
        }
    }
    ctx->pc = 0x1B6D8Cu;
    // 0x1b6d8c: 0x2c6100c0
    ctx->pc = 0x1b6d8cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 192));
    // 0x1b6d90: 0x14200005
    ctx->pc = 0x1B6D90u;
    {
        const bool branch_taken_0x1b6d90 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b6d90) {
            ctx->pc = 0x1B6DA8u;
            goto label_1b6da8;
        }
    }
    ctx->pc = 0x1B6D98u;
label_1b6d98:
    // 0x1b6d98: 0x14400005
    ctx->pc = 0x1B6D98u;
    {
        const bool branch_taken_0x1b6d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6D9Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x1b6d98) {
            ctx->pc = 0x1B6DB0u;
            goto label_1b6db0;
        }
    }
    ctx->pc = 0x1B6DA0u;
    // 0x1b6da0: 0x10200004
    ctx->pc = 0x1B6DA0u;
    {
        const bool branch_taken_0x1b6da0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b6da0) {
            ctx->pc = 0x1B6DB4u;
            goto label_1b6db4;
        }
    }
    ctx->pc = 0x1B6DA8u;
label_1b6da8:
    // 0x1b6da8: 0x10000031
    ctx->pc = 0x1B6DA8u;
    {
        const bool branch_taken_0x1b6da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1b6da8) {
            ctx->pc = 0x1B6E70u;
            goto label_1b6e70;
        }
    }
    ctx->pc = 0x1B6DB0u;
label_1b6db0:
    // 0x1b6db0: 0x24020001
    ctx->pc = 0x1b6db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1b6db4:
    // 0x1b6db4: 0x1000002f
    ctx->pc = 0x1B6DB4u;
    {
        const bool branch_taken_0x1b6db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1b6db4) {
            ctx->pc = 0x1B6E74u;
            goto label_1b6e74;
        }
    }
    ctx->pc = 0x1B6DBCu;
label_1b6dbc:
    // 0x1b6dbc: 0x10200003
    ctx->pc = 0x1B6DBCu;
    {
        const bool branch_taken_0x1b6dbc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DC0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 192));
        if (branch_taken_0x1b6dbc) {
            ctx->pc = 0x1B6DCCu;
            goto label_1b6dcc;
        }
    }
    ctx->pc = 0x1B6DC4u;
    // 0x1b6dc4: 0x10000011
    ctx->pc = 0x1B6DC4u;
    {
        const bool branch_taken_0x1b6dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DC8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b6dc4) {
            ctx->pc = 0x1B6E0Cu;
            goto label_1b6e0c;
        }
    }
    ctx->pc = 0x1B6DCCu;
label_1b6dcc:
    // 0x1b6dcc: 0x14400005
    ctx->pc = 0x1B6DCCu;
    {
        const bool branch_taken_0x1b6dcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DD0u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 224));
        if (branch_taken_0x1b6dcc) {
            ctx->pc = 0x1B6DE4u;
            goto label_1b6de4;
        }
    }
    ctx->pc = 0x1B6DD4u;
    // 0x1b6dd4: 0x10200004
    ctx->pc = 0x1B6DD4u;
    {
        const bool branch_taken_0x1b6dd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DD8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 224));
        if (branch_taken_0x1b6dd4) {
            ctx->pc = 0x1B6DE8u;
            goto label_1b6de8;
        }
    }
    ctx->pc = 0x1B6DDCu;
    // 0x1b6ddc: 0x1000000c
    ctx->pc = 0x1B6DDCu;
    {
        const bool branch_taken_0x1b6ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 60));
        if (branch_taken_0x1b6ddc) {
            ctx->pc = 0x1B6E10u;
            goto label_1b6e10;
        }
    }
    ctx->pc = 0x1B6DE4u;
label_1b6de4:
    // 0x1b6de4: 0x2c6200e0
    ctx->pc = 0x1b6de4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 224));
label_1b6de8:
    // 0x1b6de8: 0x14400006
    ctx->pc = 0x1B6DE8u;
    {
        const bool branch_taken_0x1b6de8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b6de8) {
            ctx->pc = 0x1B6E04u;
            goto label_1b6e04;
        }
    }
    ctx->pc = 0x1B6DF0u;
    // 0x1b6df0: 0x2c6100f0
    ctx->pc = 0x1b6df0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 240));
    // 0x1b6df4: 0x10200003
    ctx->pc = 0x1B6DF4u;
    {
        const bool branch_taken_0x1b6df4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DF8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1b6df4) {
            ctx->pc = 0x1B6E04u;
            goto label_1b6e04;
        }
    }
    ctx->pc = 0x1B6DFCu;
    // 0x1b6dfc: 0x10000003
    ctx->pc = 0x1B6DFCu;
    {
        const bool branch_taken_0x1b6dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b6dfc) {
            ctx->pc = 0x1B6E0Cu;
            goto label_1b6e0c;
        }
    }
    ctx->pc = 0x1B6E04u;
label_1b6e04:
    // 0x1b6e04: 0x1000001a
    ctx->pc = 0x1B6E04u;
    {
        const bool branch_taken_0x1b6e04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b6e04) {
            ctx->pc = 0x1B6E70u;
            goto label_1b6e70;
        }
    }
    ctx->pc = 0x1B6E0Cu;
label_1b6e0c:
    // 0x1b6e0c: 0x27a4003c
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 60));
label_1b6e10:
    // 0x1b6e10: 0xc06d9b0
    ctx->pc = 0x1B6E10u;
    SET_GPR_U32(ctx, 31, 0x1B6E18u);
    ctx->pc = 0x1B66C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B66C0_0x1b66c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E18u; }
    }
    if (ctx->pc != 0x1B6E18u) { return; }
    ctx->pc = 0x1B6E18u;
    // 0x1b6e18: 0x8e030094
    ctx->pc = 0x1b6e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1b6e1c: 0x1460000b
    ctx->pc = 0x1B6E1Cu;
    {
        const bool branch_taken_0x1b6e1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6E20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e1c) {
            ctx->pc = 0x1B6E4Cu;
            goto label_1b6e4c;
        }
    }
    ctx->pc = 0x1B6E24u;
    // 0x1b6e24: 0x2c410010
    ctx->pc = 0x1b6e24u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 16));
    // 0x1b6e28: 0x10200003
    ctx->pc = 0x1B6E28u;
    {
        const bool branch_taken_0x1b6e28 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6E2Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 128));
        if (branch_taken_0x1b6e28) {
            ctx->pc = 0x1B6E38u;
            goto label_1b6e38;
        }
    }
    ctx->pc = 0x1B6E30u;
    // 0x1b6e30: 0x1000000f
    ctx->pc = 0x1B6E30u;
    {
        const bool branch_taken_0x1b6e30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6E34u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x1b6e30) {
            ctx->pc = 0x1B6E70u;
            goto label_1b6e70;
        }
    }
    ctx->pc = 0x1B6E38u;
label_1b6e38:
    // 0x1b6e38: 0x10200003
    ctx->pc = 0x1B6E38u;
    {
        const bool branch_taken_0x1b6e38 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b6e38) {
            ctx->pc = 0x1B6E48u;
            goto label_1b6e48;
        }
    }
    ctx->pc = 0x1B6E40u;
    // 0x1b6e40: 0x1000000b
    ctx->pc = 0x1B6E40u;
    {
        const bool branch_taken_0x1b6e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6E44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e40) {
            ctx->pc = 0x1B6E70u;
            goto label_1b6e70;
        }
    }
    ctx->pc = 0x1B6E48u;
label_1b6e48:
    // 0x1b6e48: 0x200202d
    ctx->pc = 0x1b6e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e4c:
    // 0x1b6e4c: 0xc06d9fc
    ctx->pc = 0x1B6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E54u);
    ctx->pc = 0x1B6E50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B67F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B67F0_0x1b67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E54u; }
    }
    if (ctx->pc != 0x1B6E54u) { return; }
    ctx->pc = 0x1B6E54u;
    // 0x1b6e54: 0x200202d
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e58: 0xc06da8c
    ctx->pc = 0x1B6E58u;
    SET_GPR_U32(ctx, 31, 0x1B6E60u);
    ctx->pc = 0x1B6E5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B6A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6A30_0x1b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E60u; }
    }
    if (ctx->pc != 0x1B6E60u) { return; }
    ctx->pc = 0x1B6E60u;
    // 0x1b6e60: 0x14400002
    ctx->pc = 0x1B6E60u;
    {
        const bool branch_taken_0x1b6e60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b6e60) {
            ctx->pc = 0x1B6E6Cu;
            goto label_1b6e6c;
        }
    }
    ctx->pc = 0x1B6E68u;
    // 0x1b6e68: 0x36310010
    ctx->pc = 0x1b6e68u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 16));
label_1b6e6c:
    // 0x1b6e6c: 0x220102d
    ctx->pc = 0x1b6e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e70:
    // 0x1b6e70: 0xdfbf0020
    ctx->pc = 0x1b6e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6e74:
    // 0x1b6e74: 0x7bb10010
    ctx->pc = 0x1b6e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e78: 0x7bb00000
    ctx->pc = 0x1b6e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e7c: 0x3e00008
    ctx->pc = 0x1B6E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B6D70u: goto label_1b6d70;
            case 0x1B6D98u: goto label_1b6d98;
            case 0x1B6DA8u: goto label_1b6da8;
            case 0x1B6DB0u: goto label_1b6db0;
            case 0x1B6DB4u: goto label_1b6db4;
            case 0x1B6DBCu: goto label_1b6dbc;
            case 0x1B6DCCu: goto label_1b6dcc;
            case 0x1B6DE4u: goto label_1b6de4;
            case 0x1B6DE8u: goto label_1b6de8;
            case 0x1B6E04u: goto label_1b6e04;
            case 0x1B6E0Cu: goto label_1b6e0c;
            case 0x1B6E10u: goto label_1b6e10;
            case 0x1B6E38u: goto label_1b6e38;
            case 0x1B6E48u: goto label_1b6e48;
            case 0x1B6E4Cu: goto label_1b6e4c;
            case 0x1B6E6Cu: goto label_1b6e6c;
            case 0x1B6E70u: goto label_1b6e70;
            case 0x1B6E74u: goto label_1b6e74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B6E84u;
    // 0x1b6e84: 0x0
    ctx->pc = 0x1b6e84u;
    // NOP
    // 0x1b6e88: 0x0
    ctx->pc = 0x1b6e88u;
    // NOP
    // 0x1b6e8c: 0x0
    ctx->pc = 0x1b6e8cu;
    // NOP
}
