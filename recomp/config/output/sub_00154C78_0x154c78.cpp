#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00154C78
// Address: 0x154c78 - 0x1551a8
void sub_00154C78_0x154c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x154c78u;

    // 0x154c78: 0x248a0128
    ctx->pc = 0x154c78u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 296));
    // 0x154c7c: 0x24040002
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x154c80: 0x8d4304f4
    ctx->pc = 0x154c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 1268)));
    // 0x154c84: 0xa0582d
    ctx->pc = 0x154c84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c88: 0xad4404dc
    ctx->pc = 0x154c88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1244), GPR_U32(ctx, 4));
    // 0x154c8c: 0x2402fffc
    ctx->pc = 0x154c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x154c90: 0x24630001
    ctx->pc = 0x154c90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x154c94: 0x1623824
    ctx->pc = 0x154c94u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x154c98: 0xad4304f4
    ctx->pc = 0x154c98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1268), GPR_U32(ctx, 3));
    // 0x154c9c: 0x1671023
    ctx->pc = 0x154c9cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x154ca0: 0x248c0
    ctx->pc = 0x154ca0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 3));
    // 0x154ca4: 0x80e80000
    ctx->pc = 0x154ca4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ca8: 0x24e70001
    ctx->pc = 0x154ca8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154cac: 0x90e30000
    ctx->pc = 0x154cacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154cb0: 0x24e70001
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154cb4: 0x90e40000
    ctx->pc = 0x154cb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154cb8: 0x24e70001
    ctx->pc = 0x154cb8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154cbc: 0x90e50000
    ctx->pc = 0x154cbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154cc0: 0x24e70001
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154cc4: 0x80e60000
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154cc8: 0x24e70001
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154ccc: 0x90e20000
    ctx->pc = 0x154cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154cd0: 0x24e70001
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154cd4: 0x84200
    ctx->pc = 0x154cd4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x154cd8: 0x63200
    ctx->pc = 0x154cd8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154cdc: 0x1034025
    ctx->pc = 0x154cdcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x154ce0: 0x90e30000
    ctx->pc = 0x154ce0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ce4: 0xc23025
    ctx->pc = 0x154ce4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154ce8: 0x84200
    ctx->pc = 0x154ce8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x154cec: 0x24e70001
    ctx->pc = 0x154cecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154cf0: 0x63200
    ctx->pc = 0x154cf0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154cf4: 0x1044025
    ctx->pc = 0x154cf4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x154cf8: 0x90e20000
    ctx->pc = 0x154cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154cfc: 0xc33025
    ctx->pc = 0x154cfcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154d00: 0x84200
    ctx->pc = 0x154d00u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x154d04: 0x63200
    ctx->pc = 0x154d04u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154d08: 0x1054025
    ctx->pc = 0x154d08u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x154d0c: 0x24e70001
    ctx->pc = 0x154d0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154d10: 0xc23025
    ctx->pc = 0x154d10u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154d14: 0x11200008
    ctx->pc = 0x154D14u;
    {
        const bool branch_taken_0x154d14 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x154D18u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x154d14) {
            ctx->pc = 0x154D38u;
            goto label_154d38;
        }
    }
    ctx->pc = 0x154D1Cu;
    // 0x154d1c: 0x91023
    ctx->pc = 0x154d1cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x154d20: 0x461006
    ctx->pc = 0x154d20u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x154d24: 0x1021025
    ctx->pc = 0x154d24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154d28: 0x1264004
    ctx->pc = 0x154d28u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x154d2c: 0x10000004
    ctx->pc = 0x154D2Cu;
    {
        const bool branch_taken_0x154d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154D30u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 184), GPR_U32(ctx, 2));
        if (branch_taken_0x154d2c) {
            ctx->pc = 0x154D40u;
            goto label_154d40;
        }
    }
    ctx->pc = 0x154D34u;
    // 0x154d34: 0x0
    ctx->pc = 0x154d34u;
    // NOP
label_154d38:
    // 0x154d38: 0xad4800b8
    ctx->pc = 0x154d38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 184), GPR_U32(ctx, 8));
    // 0x154d3c: 0xc0402d
    ctx->pc = 0x154d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154d40:
    // 0x154d40: 0x80e60000
    ctx->pc = 0x154d40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154d44: 0x24e70001
    ctx->pc = 0x154d44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154d48: 0x90e20000
    ctx->pc = 0x154d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154d4c: 0x24e70001
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154d50: 0x63200
    ctx->pc = 0x154d50u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154d54: 0x90e30000
    ctx->pc = 0x154d54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154d58: 0xc23025
    ctx->pc = 0x154d58u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154d5c: 0x2922001f
    ctx->pc = 0x154d5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 31));
    // 0x154d60: 0x24e70001
    ctx->pc = 0x154d60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154d64: 0x63200
    ctx->pc = 0x154d64u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154d68: 0x90e40000
    ctx->pc = 0x154d68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154d6c: 0x24e70001
    ctx->pc = 0x154d6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154d70: 0xc33025
    ctx->pc = 0x154d70u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154d74: 0x63200
    ctx->pc = 0x154d74u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154d78: 0x1440001d
    ctx->pc = 0x154D78u;
    {
        const bool branch_taken_0x154d78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x154D7Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x154d78) {
            ctx->pc = 0x154DF0u;
            goto label_154df0;
        }
    }
    ctx->pc = 0x154D80u;
    // 0x154d80: 0x2529ffe1
    ctx->pc = 0x154d80u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967265));
    // 0x154d84: 0x11200008
    ctx->pc = 0x154D84u;
    {
        const bool branch_taken_0x154d84 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x154D88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x154d84) {
            ctx->pc = 0x154DA8u;
            goto label_154da8;
        }
    }
    ctx->pc = 0x154D8Cu;
    // 0x154d8c: 0x491023
    ctx->pc = 0x154d8cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x154d90: 0x461006
    ctx->pc = 0x154d90u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x154d94: 0x1024025
    ctx->pc = 0x154d94u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154d98: 0x81fc2
    ctx->pc = 0x154d98u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 31));
    // 0x154d9c: 0x1264004
    ctx->pc = 0x154d9cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x154da0: 0x10000004
    ctx->pc = 0x154DA0u;
    {
        const bool branch_taken_0x154da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 188), GPR_U32(ctx, 3));
        if (branch_taken_0x154da0) {
            ctx->pc = 0x154DB4u;
            goto label_154db4;
        }
    }
    ctx->pc = 0x154DA8u;
label_154da8:
    // 0x154da8: 0x817c2
    ctx->pc = 0x154da8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x154dac: 0xc0402d
    ctx->pc = 0x154dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154db0: 0xad4200bc
    ctx->pc = 0x154db0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 188), GPR_U32(ctx, 2));
label_154db4:
    // 0x154db4: 0x80e60000
    ctx->pc = 0x154db4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154db8: 0x24e70001
    ctx->pc = 0x154db8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154dbc: 0x90e20000
    ctx->pc = 0x154dbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154dc0: 0x24e70001
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154dc4: 0x63200
    ctx->pc = 0x154dc4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154dc8: 0x90e30000
    ctx->pc = 0x154dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154dcc: 0xc23025
    ctx->pc = 0x154dccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154dd0: 0x24e70001
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154dd4: 0x63200
    ctx->pc = 0x154dd4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154dd8: 0x90e20000
    ctx->pc = 0x154dd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ddc: 0xc33025
    ctx->pc = 0x154ddcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154de0: 0x24e70001
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154de4: 0x63200
    ctx->pc = 0x154de4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154de8: 0x10000005
    ctx->pc = 0x154DE8u;
    {
        const bool branch_taken_0x154de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154DECu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x154de8) {
            ctx->pc = 0x154E00u;
            goto label_154e00;
        }
    }
    ctx->pc = 0x154DF0u;
label_154df0:
    // 0x154df0: 0x817c2
    ctx->pc = 0x154df0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x154df4: 0x84040
    ctx->pc = 0x154df4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x154df8: 0xad4200bc
    ctx->pc = 0x154df8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 188), GPR_U32(ctx, 2));
    // 0x154dfc: 0x25290001
    ctx->pc = 0x154dfcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_154e00:
    // 0x154e00: 0x2922001b
    ctx->pc = 0x154e00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 27));
    // 0x154e04: 0x1440001e
    ctx->pc = 0x154E04u;
    {
        const bool branch_taken_0x154e04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x154E08u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 27));
        if (branch_taken_0x154e04) {
            ctx->pc = 0x154E80u;
            goto label_154e80;
        }
    }
    ctx->pc = 0x154E0Cu;
    // 0x154e0c: 0x2529ffe5
    ctx->pc = 0x154e0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x154e10: 0x11200009
    ctx->pc = 0x154E10u;
    {
        const bool branch_taken_0x154e10 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x154E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x154e10) {
            ctx->pc = 0x154E38u;
            goto label_154e38;
        }
    }
    ctx->pc = 0x154E18u;
    // 0x154e18: 0x491023
    ctx->pc = 0x154e18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x154e1c: 0x461006
    ctx->pc = 0x154e1cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x154e20: 0x1024025
    ctx->pc = 0x154e20u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154e24: 0x81ec2
    ctx->pc = 0x154e24u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 27));
    // 0x154e28: 0x1264004
    ctx->pc = 0x154e28u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x154e2c: 0x10000005
    ctx->pc = 0x154E2Cu;
    {
        const bool branch_taken_0x154e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154E30u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 192), GPR_U32(ctx, 3));
        if (branch_taken_0x154e2c) {
            ctx->pc = 0x154E44u;
            goto label_154e44;
        }
    }
    ctx->pc = 0x154E34u;
    // 0x154e34: 0x0
    ctx->pc = 0x154e34u;
    // NOP
label_154e38:
    // 0x154e38: 0x816c2
    ctx->pc = 0x154e38u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 27));
    // 0x154e3c: 0xc0402d
    ctx->pc = 0x154e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e40: 0xad4200c0
    ctx->pc = 0x154e40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 192), GPR_U32(ctx, 2));
label_154e44:
    // 0x154e44: 0x80e60000
    ctx->pc = 0x154e44u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154e48: 0x24e70001
    ctx->pc = 0x154e48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154e4c: 0x90e20000
    ctx->pc = 0x154e4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154e50: 0x24e70001
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154e54: 0x63200
    ctx->pc = 0x154e54u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154e58: 0x90e30000
    ctx->pc = 0x154e58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154e5c: 0xc23025
    ctx->pc = 0x154e5cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154e60: 0x24e70001
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154e64: 0x63200
    ctx->pc = 0x154e64u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154e68: 0x90e20000
    ctx->pc = 0x154e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154e6c: 0xc33025
    ctx->pc = 0x154e6cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154e70: 0x24e70001
    ctx->pc = 0x154e70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154e74: 0x63200
    ctx->pc = 0x154e74u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154e78: 0x10000004
    ctx->pc = 0x154E78u;
    {
        const bool branch_taken_0x154e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154E7Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x154e78) {
            ctx->pc = 0x154E8Cu;
            goto label_154e8c;
        }
    }
    ctx->pc = 0x154E80u;
label_154e80:
    // 0x154e80: 0x84140
    ctx->pc = 0x154e80u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 5));
    // 0x154e84: 0xad4200c0
    ctx->pc = 0x154e84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 192), GPR_U32(ctx, 2));
    // 0x154e88: 0x25290005
    ctx->pc = 0x154e88u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5));
label_154e8c:
    // 0x154e8c: 0x2922001a
    ctx->pc = 0x154e8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 26));
    // 0x154e90: 0x1440001d
    ctx->pc = 0x154E90u;
    {
        const bool branch_taken_0x154e90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x154E94u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
        if (branch_taken_0x154e90) {
            ctx->pc = 0x154F08u;
            goto label_154f08;
        }
    }
    ctx->pc = 0x154E98u;
    // 0x154e98: 0x2529ffe6
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967270));
    // 0x154e9c: 0x11200008
    ctx->pc = 0x154E9Cu;
    {
        const bool branch_taken_0x154e9c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x154EA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x154e9c) {
            ctx->pc = 0x154EC0u;
            goto label_154ec0;
        }
    }
    ctx->pc = 0x154EA4u;
    // 0x154ea4: 0x491023
    ctx->pc = 0x154ea4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x154ea8: 0x461006
    ctx->pc = 0x154ea8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x154eac: 0x1024025
    ctx->pc = 0x154eacu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154eb0: 0x81e82
    ctx->pc = 0x154eb0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 26));
    // 0x154eb4: 0x1264004
    ctx->pc = 0x154eb4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x154eb8: 0x10000004
    ctx->pc = 0x154EB8u;
    {
        const bool branch_taken_0x154eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154EBCu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 196), GPR_U32(ctx, 3));
        if (branch_taken_0x154eb8) {
            ctx->pc = 0x154ECCu;
            goto label_154ecc;
        }
    }
    ctx->pc = 0x154EC0u;
label_154ec0:
    // 0x154ec0: 0x81682
    ctx->pc = 0x154ec0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
    // 0x154ec4: 0xc0402d
    ctx->pc = 0x154ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ec8: 0xad4200c4
    ctx->pc = 0x154ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 196), GPR_U32(ctx, 2));
label_154ecc:
    // 0x154ecc: 0x80e60000
    ctx->pc = 0x154eccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ed0: 0x24e70001
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154ed4: 0x90e20000
    ctx->pc = 0x154ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ed8: 0x24e70001
    ctx->pc = 0x154ed8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154edc: 0x63200
    ctx->pc = 0x154edcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154ee0: 0x90e30000
    ctx->pc = 0x154ee0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ee4: 0xc23025
    ctx->pc = 0x154ee4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154ee8: 0x24e70001
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154eec: 0x63200
    ctx->pc = 0x154eecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154ef0: 0x90e20000
    ctx->pc = 0x154ef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ef4: 0xc33025
    ctx->pc = 0x154ef4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154ef8: 0x24e70001
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154efc: 0x63200
    ctx->pc = 0x154efcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154f00: 0x10000004
    ctx->pc = 0x154F00u;
    {
        const bool branch_taken_0x154f00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F04u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x154f00) {
            ctx->pc = 0x154F14u;
            goto label_154f14;
        }
    }
    ctx->pc = 0x154F08u;
label_154f08:
    // 0x154f08: 0x84180
    ctx->pc = 0x154f08u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 6));
    // 0x154f0c: 0xad4200c4
    ctx->pc = 0x154f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 196), GPR_U32(ctx, 2));
    // 0x154f10: 0x25290006
    ctx->pc = 0x154f10u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 6));
label_154f14:
    // 0x154f14: 0x2922001f
    ctx->pc = 0x154f14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 31));
    // 0x154f18: 0x1440001d
    ctx->pc = 0x154F18u;
    {
        const bool branch_taken_0x154f18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x154F1Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
        if (branch_taken_0x154f18) {
            ctx->pc = 0x154F90u;
            goto label_154f90;
        }
    }
    ctx->pc = 0x154F20u;
    // 0x154f20: 0x2529ffe1
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967265));
    // 0x154f24: 0x11200008
    ctx->pc = 0x154F24u;
    {
        const bool branch_taken_0x154f24 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x154f24) {
            ctx->pc = 0x154F48u;
            goto label_154f48;
        }
    }
    ctx->pc = 0x154F2Cu;
    // 0x154f2c: 0x491023
    ctx->pc = 0x154f2cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x154f30: 0x461006
    ctx->pc = 0x154f30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x154f34: 0x1024025
    ctx->pc = 0x154f34u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154f38: 0x81fc2
    ctx->pc = 0x154f38u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 31));
    // 0x154f3c: 0x1264004
    ctx->pc = 0x154f3cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x154f40: 0x10000004
    ctx->pc = 0x154F40u;
    {
        const bool branch_taken_0x154f40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F44u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x154f40) {
            ctx->pc = 0x154F54u;
            goto label_154f54;
        }
    }
    ctx->pc = 0x154F48u;
label_154f48:
    // 0x154f48: 0x817c2
    ctx->pc = 0x154f48u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x154f4c: 0xc0402d
    ctx->pc = 0x154f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f50: 0xad420018
    ctx->pc = 0x154f50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
label_154f54:
    // 0x154f54: 0x80e60000
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154f58: 0x24e70001
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154f5c: 0x90e20000
    ctx->pc = 0x154f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154f60: 0x24e70001
    ctx->pc = 0x154f60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154f64: 0x63200
    ctx->pc = 0x154f64u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154f68: 0x90e30000
    ctx->pc = 0x154f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154f6c: 0xc23025
    ctx->pc = 0x154f6cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154f70: 0x24e70001
    ctx->pc = 0x154f70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154f74: 0x63200
    ctx->pc = 0x154f74u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154f78: 0x90e20000
    ctx->pc = 0x154f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154f7c: 0xc33025
    ctx->pc = 0x154f7cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154f80: 0x24e70001
    ctx->pc = 0x154f80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154f84: 0x63200
    ctx->pc = 0x154f84u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154f88: 0x10000004
    ctx->pc = 0x154F88u;
    {
        const bool branch_taken_0x154f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154F8Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x154f88) {
            ctx->pc = 0x154F9Cu;
            goto label_154f9c;
        }
    }
    ctx->pc = 0x154F90u;
label_154f90:
    // 0x154f90: 0x84040
    ctx->pc = 0x154f90u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x154f94: 0xad420018
    ctx->pc = 0x154f94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
    // 0x154f98: 0x25290001
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_154f9c:
    // 0x154f9c: 0x2922001a
    ctx->pc = 0x154f9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 26));
    // 0x154fa0: 0x1440001d
    ctx->pc = 0x154FA0u;
    {
        const bool branch_taken_0x154fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x154FA4u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
        if (branch_taken_0x154fa0) {
            ctx->pc = 0x155018u;
            goto label_155018;
        }
    }
    ctx->pc = 0x154FA8u;
    // 0x154fa8: 0x2529ffe6
    ctx->pc = 0x154fa8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967270));
    // 0x154fac: 0x11200008
    ctx->pc = 0x154FACu;
    {
        const bool branch_taken_0x154fac = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x154FB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x154fac) {
            ctx->pc = 0x154FD0u;
            goto label_154fd0;
        }
    }
    ctx->pc = 0x154FB4u;
    // 0x154fb4: 0x491023
    ctx->pc = 0x154fb4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x154fb8: 0x461006
    ctx->pc = 0x154fb8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x154fbc: 0x1024025
    ctx->pc = 0x154fbcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154fc0: 0x81e82
    ctx->pc = 0x154fc0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 26));
    // 0x154fc4: 0x1264004
    ctx->pc = 0x154fc4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x154fc8: 0x10000004
    ctx->pc = 0x154FC8u;
    {
        const bool branch_taken_0x154fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x154FCCu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 200), GPR_U32(ctx, 3));
        if (branch_taken_0x154fc8) {
            ctx->pc = 0x154FDCu;
            goto label_154fdc;
        }
    }
    ctx->pc = 0x154FD0u;
label_154fd0:
    // 0x154fd0: 0x81682
    ctx->pc = 0x154fd0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
    // 0x154fd4: 0xc0402d
    ctx->pc = 0x154fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fd8: 0xad4200c8
    ctx->pc = 0x154fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 200), GPR_U32(ctx, 2));
label_154fdc:
    // 0x154fdc: 0x80e60000
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154fe0: 0x24e70001
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154fe4: 0x90e20000
    ctx->pc = 0x154fe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154fe8: 0x24e70001
    ctx->pc = 0x154fe8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154fec: 0x63200
    ctx->pc = 0x154fecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x154ff0: 0x90e30000
    ctx->pc = 0x154ff0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154ff4: 0xc23025
    ctx->pc = 0x154ff4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154ff8: 0x24e70001
    ctx->pc = 0x154ff8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x154ffc: 0x63200
    ctx->pc = 0x154ffcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155000: 0x90e20000
    ctx->pc = 0x155000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155004: 0xc33025
    ctx->pc = 0x155004u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x155008: 0x24e70001
    ctx->pc = 0x155008u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x15500c: 0x63200
    ctx->pc = 0x15500cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155010: 0x10000004
    ctx->pc = 0x155010u;
    {
        const bool branch_taken_0x155010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155014u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x155010) {
            ctx->pc = 0x155024u;
            goto label_155024;
        }
    }
    ctx->pc = 0x155018u;
label_155018:
    // 0x155018: 0x84180
    ctx->pc = 0x155018u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 6));
    // 0x15501c: 0xad4200c8
    ctx->pc = 0x15501cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 200), GPR_U32(ctx, 2));
    // 0x155020: 0x25290006
    ctx->pc = 0x155020u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 6));
label_155024:
    // 0x155024: 0x2922001a
    ctx->pc = 0x155024u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 26));
    // 0x155028: 0x1440001d
    ctx->pc = 0x155028u;
    {
        const bool branch_taken_0x155028 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15502Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
        if (branch_taken_0x155028) {
            ctx->pc = 0x1550A0u;
            goto label_1550a0;
        }
    }
    ctx->pc = 0x155030u;
    // 0x155030: 0x2529ffe6
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967270));
    // 0x155034: 0x11200008
    ctx->pc = 0x155034u;
    {
        const bool branch_taken_0x155034 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x155038u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x155034) {
            ctx->pc = 0x155058u;
            goto label_155058;
        }
    }
    ctx->pc = 0x15503Cu;
    // 0x15503c: 0x491023
    ctx->pc = 0x15503cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x155040: 0x461006
    ctx->pc = 0x155040u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x155044: 0x1024025
    ctx->pc = 0x155044u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x155048: 0x81e82
    ctx->pc = 0x155048u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 26));
    // 0x15504c: 0x1264004
    ctx->pc = 0x15504cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x155050: 0x10000004
    ctx->pc = 0x155050u;
    {
        const bool branch_taken_0x155050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155054u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 204), GPR_U32(ctx, 3));
        if (branch_taken_0x155050) {
            ctx->pc = 0x155064u;
            goto label_155064;
        }
    }
    ctx->pc = 0x155058u;
label_155058:
    // 0x155058: 0x81682
    ctx->pc = 0x155058u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 26));
    // 0x15505c: 0xc0402d
    ctx->pc = 0x15505cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155060: 0xad4200cc
    ctx->pc = 0x155060u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 204), GPR_U32(ctx, 2));
label_155064:
    // 0x155064: 0x80e60000
    ctx->pc = 0x155064u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155068: 0x24e70001
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x15506c: 0x90e20000
    ctx->pc = 0x15506cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155070: 0x24e70001
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x155074: 0x63200
    ctx->pc = 0x155074u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155078: 0x90e30000
    ctx->pc = 0x155078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15507c: 0xc23025
    ctx->pc = 0x15507cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x155080: 0x24e70001
    ctx->pc = 0x155080u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x155084: 0x63200
    ctx->pc = 0x155084u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155088: 0x90e20000
    ctx->pc = 0x155088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15508c: 0xc33025
    ctx->pc = 0x15508cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x155090: 0x24e70001
    ctx->pc = 0x155090u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x155094: 0x63200
    ctx->pc = 0x155094u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155098: 0x10000004
    ctx->pc = 0x155098u;
    {
        const bool branch_taken_0x155098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15509Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x155098) {
            ctx->pc = 0x1550ACu;
            goto label_1550ac;
        }
    }
    ctx->pc = 0x1550A0u;
label_1550a0:
    // 0x1550a0: 0x84180
    ctx->pc = 0x1550a0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 6));
    // 0x1550a4: 0xad4200cc
    ctx->pc = 0x1550a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 204), GPR_U32(ctx, 2));
    // 0x1550a8: 0x25290006
    ctx->pc = 0x1550a8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 6));
label_1550ac:
    // 0x1550ac: 0x2922001f
    ctx->pc = 0x1550acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 31));
    // 0x1550b0: 0x1440001d
    ctx->pc = 0x1550B0u;
    {
        const bool branch_taken_0x1550b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1550B4u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
        if (branch_taken_0x1550b0) {
            ctx->pc = 0x155128u;
            goto label_155128;
        }
    }
    ctx->pc = 0x1550B8u;
    // 0x1550b8: 0x2529ffe1
    ctx->pc = 0x1550b8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967265));
    // 0x1550bc: 0x11200008
    ctx->pc = 0x1550BCu;
    {
        const bool branch_taken_0x1550bc = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x1550C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1550bc) {
            ctx->pc = 0x1550E0u;
            goto label_1550e0;
        }
    }
    ctx->pc = 0x1550C4u;
    // 0x1550c4: 0x491023
    ctx->pc = 0x1550c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1550c8: 0x461006
    ctx->pc = 0x1550c8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1550cc: 0x1024025
    ctx->pc = 0x1550ccu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1550d0: 0x81fc2
    ctx->pc = 0x1550d0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1550d4: 0x1264004
    ctx->pc = 0x1550d4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x1550d8: 0x10000004
    ctx->pc = 0x1550D8u;
    {
        const bool branch_taken_0x1550d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1550DCu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 208), GPR_U32(ctx, 3));
        if (branch_taken_0x1550d8) {
            ctx->pc = 0x1550ECu;
            goto label_1550ec;
        }
    }
    ctx->pc = 0x1550E0u;
label_1550e0:
    // 0x1550e0: 0x817c2
    ctx->pc = 0x1550e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1550e4: 0xc0402d
    ctx->pc = 0x1550e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550e8: 0xad4200d0
    ctx->pc = 0x1550e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 208), GPR_U32(ctx, 2));
label_1550ec:
    // 0x1550ec: 0x80e60000
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1550f0: 0x24e70001
    ctx->pc = 0x1550f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1550f4: 0x90e20000
    ctx->pc = 0x1550f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1550f8: 0x24e70001
    ctx->pc = 0x1550f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1550fc: 0x63200
    ctx->pc = 0x1550fcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155100: 0x90e30000
    ctx->pc = 0x155100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155104: 0xc23025
    ctx->pc = 0x155104u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x155108: 0x24e70001
    ctx->pc = 0x155108u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x15510c: 0x63200
    ctx->pc = 0x15510cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155110: 0x90e20000
    ctx->pc = 0x155110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155114: 0xc33025
    ctx->pc = 0x155114u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x155118: 0x24e70001
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x15511c: 0x63200
    ctx->pc = 0x15511cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155120: 0x10000004
    ctx->pc = 0x155120u;
    {
        const bool branch_taken_0x155120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155124u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x155120) {
            ctx->pc = 0x155134u;
            goto label_155134;
        }
    }
    ctx->pc = 0x155128u;
label_155128:
    // 0x155128: 0x84040
    ctx->pc = 0x155128u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x15512c: 0xad4200d0
    ctx->pc = 0x15512cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 208), GPR_U32(ctx, 2));
    // 0x155130: 0x25290001
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_155134:
    // 0x155134: 0x2922001f
    ctx->pc = 0x155134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 31));
    // 0x155138: 0x5440000f
    ctx->pc = 0x155138u;
    {
        const bool branch_taken_0x155138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x155138) {
            ctx->pc = 0x15513Cu;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155140u;
    // 0x155140: 0x2529ffe1
    ctx->pc = 0x155140u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967265));
    // 0x155144: 0x51200008
    ctx->pc = 0x155144u;
    {
        const bool branch_taken_0x155144 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x155144) {
            ctx->pc = 0x155148u;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
            ctx->pc = 0x155168u;
            goto label_155168;
        }
    }
    ctx->pc = 0x15514Cu;
    // 0x15514c: 0x24020001
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x155150: 0x491023
    ctx->pc = 0x155150u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x155154: 0x461006
    ctx->pc = 0x155154u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x155158: 0x1024025
    ctx->pc = 0x155158u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x15515c: 0x81fc2
    ctx->pc = 0x15515cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 31));
    // 0x155160: 0x10000002
    ctx->pc = 0x155160u;
    {
        const bool branch_taken_0x155160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155164u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 212), GPR_U32(ctx, 3));
        if (branch_taken_0x155160) {
            ctx->pc = 0x15516Cu;
            goto label_15516c;
        }
    }
    ctx->pc = 0x155168u;
label_155168:
    // 0x155168: 0xad4200d4
    ctx->pc = 0x155168u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 212), GPR_U32(ctx, 2));
label_15516c:
    // 0x15516c: 0x10000004
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155170u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x15516c) {
            ctx->pc = 0x155180u;
            goto label_155180;
        }
    }
    ctx->pc = 0x155174u;
    // 0x155174: 0x0
    ctx->pc = 0x155174u;
    // NOP
label_155178:
    // 0x155178: 0x25290001
    ctx->pc = 0x155178u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x15517c: 0xad4200d4
    ctx->pc = 0x15517cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 212), GPR_U32(ctx, 2));
label_155180:
    // 0x155180: 0xeb1823
    ctx->pc = 0x155180u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x155184: 0x318c0
    ctx->pc = 0x155184u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x155188: 0x1231821
    ctx->pc = 0x155188u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x15518c: 0x2462ffc7
    ctx->pc = 0x15518cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x155190: 0x2463ffce
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x155194: 0x28440000
    ctx->pc = 0x155194u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x155198: 0x64100b
    ctx->pc = 0x155198u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x15519c: 0x210c3
    ctx->pc = 0x15519cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1551a0: 0x3e00008
    ctx->pc = 0x1551A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1551A4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154D38u: goto label_154d38;
            case 0x154D40u: goto label_154d40;
            case 0x154DA8u: goto label_154da8;
            case 0x154DB4u: goto label_154db4;
            case 0x154DF0u: goto label_154df0;
            case 0x154E00u: goto label_154e00;
            case 0x154E38u: goto label_154e38;
            case 0x154E44u: goto label_154e44;
            case 0x154E80u: goto label_154e80;
            case 0x154E8Cu: goto label_154e8c;
            case 0x154EC0u: goto label_154ec0;
            case 0x154ECCu: goto label_154ecc;
            case 0x154F08u: goto label_154f08;
            case 0x154F14u: goto label_154f14;
            case 0x154F48u: goto label_154f48;
            case 0x154F54u: goto label_154f54;
            case 0x154F90u: goto label_154f90;
            case 0x154F9Cu: goto label_154f9c;
            case 0x154FD0u: goto label_154fd0;
            case 0x154FDCu: goto label_154fdc;
            case 0x155018u: goto label_155018;
            case 0x155024u: goto label_155024;
            case 0x155058u: goto label_155058;
            case 0x155064u: goto label_155064;
            case 0x1550A0u: goto label_1550a0;
            case 0x1550ACu: goto label_1550ac;
            case 0x1550E0u: goto label_1550e0;
            case 0x1550ECu: goto label_1550ec;
            case 0x155128u: goto label_155128;
            case 0x155134u: goto label_155134;
            case 0x155168u: goto label_155168;
            case 0x15516Cu: goto label_15516c;
            case 0x155178u: goto label_155178;
            case 0x155180u: goto label_155180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1551A8u;
}
