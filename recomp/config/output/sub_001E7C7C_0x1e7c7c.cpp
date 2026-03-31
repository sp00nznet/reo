#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E7C7C
// Address: 0x1e7c7c - 0x1e7e40
void sub_001E7C7C_0x1e7c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e7c7cu;

    // 0x1e7c7c: 0x27bdffd0
    ctx->pc = 0x1e7c7cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7c80: 0xffbe0020
    ctx->pc = 0x1e7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e7c84: 0xffbf0028
    ctx->pc = 0x1e7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e7c88: 0x3a0f02d
    ctx->pc = 0x1e7c88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c8c: 0xafc40000
    ctx->pc = 0x1e7c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e7c90: 0x8fc20000
    ctx->pc = 0x1e7c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7c94: 0x2442001f
    ctx->pc = 0x1e7c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x1e7c98: 0xafc20014
    ctx->pc = 0x1e7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1e7c9c: 0x8fc20014
    ctx->pc = 0x1e7c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e7ca0: 0x4410004
    ctx->pc = 0x1E7CA0u;
    {
        const bool branch_taken_0x1e7ca0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e7ca0) {
            ctx->pc = 0x1E7CB4u;
            goto label_1e7cb4;
        }
    }
    ctx->pc = 0x1E7CA8u;
    // 0x1e7ca8: 0x8fc30014
    ctx->pc = 0x1e7ca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e7cac: 0x2463001f
    ctx->pc = 0x1e7cacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e7cb0: 0xafc30014
    ctx->pc = 0x1e7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
label_1e7cb4:
    // 0x1e7cb4: 0x8fc30014
    ctx->pc = 0x1e7cb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e7cb8: 0x31143
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1e7cbc: 0x21140
    ctx->pc = 0x1e7cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1e7cc0: 0xafc20000
    ctx->pc = 0x1e7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1e7cc4: 0xafc00010
    ctx->pc = 0x1e7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x1e7cc8: 0xafc00004
    ctx->pc = 0x1e7cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1e7ccc:
    // 0x1e7ccc: 0x8fc20004
    ctx->pc = 0x1e7cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7cd0: 0x3403cb1f
    ctx->pc = 0x1e7cd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 51999));
    // 0x1e7cd4: 0x62102b
    ctx->pc = 0x1e7cd4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7cd8: 0x10400003
    ctx->pc = 0x1E7CD8u;
    {
        const bool branch_taken_0x1e7cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7cd8) {
            ctx->pc = 0x1E7CE8u;
            goto label_1e7ce8;
        }
    }
    ctx->pc = 0x1E7CE0u;
    // 0x1e7ce0: 0x10000048
    ctx->pc = 0x1E7CE0u;
    {
        const bool branch_taken_0x1e7ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7ce0) {
            ctx->pc = 0x1E7E04u;
            goto label_1e7e04;
        }
    }
    ctx->pc = 0x1E7CE8u;
label_1e7ce8:
    // 0x1e7ce8: 0x3c030035
    ctx->pc = 0x1e7ce8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x1e7cec: 0x24638ca0
    ctx->pc = 0x1e7cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937760));
    // 0x1e7cf0: 0x8fc20004
    ctx->pc = 0x1e7cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7cf4: 0x621021
    ctx->pc = 0x1e7cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7cf8: 0xafc2000c
    ctx->pc = 0x1e7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e7cfc: 0x8fc2000c
    ctx->pc = 0x1e7cfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7d00: 0x8c430000
    ctx->pc = 0x1e7d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7d04: 0x3c02fafa
    ctx->pc = 0x1e7d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64250 << 16));
    // 0x1e7d08: 0x3442fafa
    ctx->pc = 0x1e7d08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64250));
    // 0x1e7d0c: 0x1462002d
    ctx->pc = 0x1E7D0Cu;
    {
        const bool branch_taken_0x1e7d0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e7d0c) {
            ctx->pc = 0x1E7DC4u;
            goto label_1e7dc4;
        }
    }
    ctx->pc = 0x1E7D14u;
    // 0x1e7d14: 0x8fc2000c
    ctx->pc = 0x1e7d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7d18: 0x8c420004
    ctx->pc = 0x1e7d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7d1c: 0xafc20008
    ctx->pc = 0x1e7d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1e7d20: 0x8fc20000
    ctx->pc = 0x1e7d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7d24: 0x24430008
    ctx->pc = 0x1e7d24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e7d28: 0x8fc20008
    ctx->pc = 0x1e7d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e7d2c: 0x43102b
    ctx->pc = 0x1e7d2cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7d30: 0x1440002c
    ctx->pc = 0x1E7D30u;
    {
        const bool branch_taken_0x1e7d30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7d30) {
            ctx->pc = 0x1E7DE4u;
            goto label_1e7de4;
        }
    }
    ctx->pc = 0x1E7D38u;
    // 0x1e7d38: 0x8fc30004
    ctx->pc = 0x1e7d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7d3c: 0x3c020035
    ctx->pc = 0x1e7d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1e7d40: 0x24428ca8
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937768));
    // 0x1e7d44: 0x621021
    ctx->pc = 0x1e7d44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7d48: 0xafc20010
    ctx->pc = 0x1e7d48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e7d4c: 0x8fc3000c
    ctx->pc = 0x1e7d4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7d50: 0x8fc20000
    ctx->pc = 0x1e7d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7d54: 0xac620004
    ctx->pc = 0x1e7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e7d58: 0x8fc3000c
    ctx->pc = 0x1e7d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7d5c: 0x3c02fafa
    ctx->pc = 0x1e7d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64250 << 16));
    // 0x1e7d60: 0x3442fafa
    ctx->pc = 0x1e7d60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64250));
    // 0x1e7d64: 0xac620000
    ctx->pc = 0x1e7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7d68: 0x8fc3000c
    ctx->pc = 0x1e7d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7d6c: 0x3c02fbfb
    ctx->pc = 0x1e7d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64507 << 16));
    // 0x1e7d70: 0x3442fbfb
    ctx->pc = 0x1e7d70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64507));
    // 0x1e7d74: 0xac620000
    ctx->pc = 0x1e7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7d78: 0x8fc30004
    ctx->pc = 0x1e7d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7d7c: 0x3c020035
    ctx->pc = 0x1e7d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1e7d80: 0x24428ca8
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937768));
    // 0x1e7d84: 0x621821
    ctx->pc = 0x1e7d84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7d88: 0x8fc20000
    ctx->pc = 0x1e7d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7d8c: 0x621021
    ctx->pc = 0x1e7d8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7d90: 0xafc2000c
    ctx->pc = 0x1e7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e7d94: 0x8fc4000c
    ctx->pc = 0x1e7d94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7d98: 0x8fc30008
    ctx->pc = 0x1e7d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e7d9c: 0x8fc20000
    ctx->pc = 0x1e7d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7da0: 0x621023
    ctx->pc = 0x1e7da0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7da4: 0x2442fff8
    ctx->pc = 0x1e7da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1e7da8: 0xac820004
    ctx->pc = 0x1e7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e7dac: 0x8fc3000c
    ctx->pc = 0x1e7dacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7db0: 0x3c02fafa
    ctx->pc = 0x1e7db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64250 << 16));
    // 0x1e7db4: 0x3442fafa
    ctx->pc = 0x1e7db4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64250));
    // 0x1e7db8: 0xac620000
    ctx->pc = 0x1e7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7dbc: 0x10000011
    ctx->pc = 0x1E7DBCu;
    {
        const bool branch_taken_0x1e7dbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7dbc) {
            ctx->pc = 0x1E7E04u;
            goto label_1e7e04;
        }
    }
    ctx->pc = 0x1E7DC4u;
label_1e7dc4:
    // 0x1e7dc4: 0x8fc2000c
    ctx->pc = 0x1e7dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7dc8: 0x8c430000
    ctx->pc = 0x1e7dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7dcc: 0x3c02fbfb
    ctx->pc = 0x1e7dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64507 << 16));
    // 0x1e7dd0: 0x3442fbfb
    ctx->pc = 0x1e7dd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64507));
    // 0x1e7dd4: 0x10620003
    ctx->pc = 0x1E7DD4u;
    {
        const bool branch_taken_0x1e7dd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e7dd4) {
            ctx->pc = 0x1E7DE4u;
            goto label_1e7de4;
        }
    }
    ctx->pc = 0x1E7DDCu;
    // 0x1e7ddc: 0xc040dd4
    ctx->pc = 0x1E7DDCu;
    SET_GPR_U32(ctx, 31, 0x1E7DE4u);
    ctx->pc = 0x103750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103750_0x103750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DE4u; }
    }
    if (ctx->pc != 0x1E7DE4u) { return; }
    ctx->pc = 0x1E7DE4u;
label_1e7de4:
    // 0x1e7de4: 0x8fc2000c
    ctx->pc = 0x1e7de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7de8: 0x8fc30004
    ctx->pc = 0x1e7de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7dec: 0x8c420004
    ctx->pc = 0x1e7decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7df0: 0x621021
    ctx->pc = 0x1e7df0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7df4: 0x24420008
    ctx->pc = 0x1e7df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e7df8: 0xafc20004
    ctx->pc = 0x1e7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e7dfc: 0x1000ffb3
    ctx->pc = 0x1E7DFCu;
    {
        const bool branch_taken_0x1e7dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7dfc) {
            ctx->pc = 0x1E7CCCu;
            goto label_1e7ccc;
        }
    }
    ctx->pc = 0x1E7E04u;
label_1e7e04:
    // 0x1e7e04: 0x8fc20004
    ctx->pc = 0x1e7e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7e08: 0x3403cb20
    ctx->pc = 0x1e7e08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 52000));
    // 0x1e7e0c: 0x62102b
    ctx->pc = 0x1e7e0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7e10: 0x10400004
    ctx->pc = 0x1E7E10u;
    {
        const bool branch_taken_0x1e7e10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7e10) {
            ctx->pc = 0x1E7E24u;
            goto label_1e7e24;
        }
    }
    ctx->pc = 0x1E7E18u;
    // 0x1e7e18: 0x102d
    ctx->pc = 0x1e7e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e1c: 0x10000002
    ctx->pc = 0x1E7E1Cu;
    {
        const bool branch_taken_0x1e7e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7e1c) {
            ctx->pc = 0x1E7E28u;
            goto label_1e7e28;
        }
    }
    ctx->pc = 0x1E7E24u;
label_1e7e24:
    // 0x1e7e24: 0x8fc20010
    ctx->pc = 0x1e7e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1e7e28:
    // 0x1e7e28: 0x3c0e82d
    ctx->pc = 0x1e7e28u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e2c: 0xdfbe0020
    ctx->pc = 0x1e7e2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7e30: 0xdfbf0028
    ctx->pc = 0x1e7e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7e34: 0x27bd0030
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7e38: 0x3e00008
    ctx->pc = 0x1E7E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7CB4u: goto label_1e7cb4;
            case 0x1E7CCCu: goto label_1e7ccc;
            case 0x1E7CE8u: goto label_1e7ce8;
            case 0x1E7DC4u: goto label_1e7dc4;
            case 0x1E7DE4u: goto label_1e7de4;
            case 0x1E7E04u: goto label_1e7e04;
            case 0x1E7E24u: goto label_1e7e24;
            case 0x1E7E28u: goto label_1e7e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7E40u;
}
