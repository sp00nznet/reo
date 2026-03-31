#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5CA0
// Address: 0x1b5ca0 - 0x1b5dc0
void sub_001B5CA0_0x1b5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5ca0u;

    // 0x1b5ca0: 0x27bdffe0
    ctx->pc = 0x1b5ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5ca4: 0x24020002
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5ca8: 0xffbf0010
    ctx->pc = 0x1b5ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5cac: 0x7fb00000
    ctx->pc = 0x1b5cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5cb0: 0x8c830008
    ctx->pc = 0x1b5cb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b5cb4: 0x14620005
    ctx->pc = 0x1B5CB4u;
    {
        const bool branch_taken_0x1b5cb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b5cb4) {
            ctx->pc = 0x1B5CCCu;
            goto label_1b5ccc;
        }
    }
    ctx->pc = 0x1B5CBCu;
    // 0x1b5cbc: 0xc06da18
    ctx->pc = 0x1B5CBCu;
    SET_GPR_U32(ctx, 31, 0x1B5CC4u);
    ctx->pc = 0x1B6860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6860_0x1b6860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CC4u; }
    }
    if (ctx->pc != 0x1B5CC4u) { return; }
    ctx->pc = 0x1B5CC4u;
    // 0x1b5cc4: 0x10000038
    ctx->pc = 0x1B5CC4u;
    {
        const bool branch_taken_0x1b5cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5CC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1b5cc4) {
            ctx->pc = 0x1B5DA8u;
            goto label_1b5da8;
        }
    }
    ctx->pc = 0x1B5CCCu;
label_1b5ccc:
    // 0x1b5ccc: 0x8c860020
    ctx->pc = 0x1b5cccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b5cd0: 0x8c820028
    ctx->pc = 0x1b5cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b5cd4: 0x8c880010
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b5cd8: 0xa61818
    ctx->pc = 0x1b5cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b5cdc: 0x15000007
    ctx->pc = 0x1B5CDCu;
    {
        const bool branch_taken_0x1b5cdc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5CE0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1b5cdc) {
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CE4u;
    // 0x1b5ce4: 0x8c850014
    ctx->pc = 0x1b5ce4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b5ce8: 0x24030001
    ctx->pc = 0x1b5ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5cec: 0x14a30003
    ctx->pc = 0x1B5CECu;
    {
        const bool branch_taken_0x1b5cec = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b5cec) {
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CF4u;
    // 0x1b5cf4: 0x1000002b
    ctx->pc = 0x1B5CF4u;
    {
        const bool branch_taken_0x1b5cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b5cf4) {
            ctx->pc = 0x1B5DA4u;
            goto label_1b5da4;
        }
    }
    ctx->pc = 0x1B5CFCu;
label_1b5cfc:
    // 0x1b5cfc: 0x8c850018
    ctx->pc = 0x1b5cfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b5d00: 0x8c830064
    ctx->pc = 0x1b5d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1b5d04: 0x8c870048
    ctx->pc = 0x1b5d04u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b5d08: 0xa32818
    ctx->pc = 0x1b5d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1b5d0c: 0x73880
    ctx->pc = 0x1b5d0cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b5d10: 0xe43821
    ctx->pc = 0x1b5d10u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1b5d14: 0x8ce3002c
    ctx->pc = 0x1b5d14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1b5d18: 0x15000006
    ctx->pc = 0x1B5D18u;
    {
        const bool branch_taken_0x1b5d18 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5D1Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x1b5d18) {
            ctx->pc = 0x1B5D34u;
            goto label_1b5d34;
        }
    }
    ctx->pc = 0x1B5D20u;
    // 0x1b5d20: 0x40282d
    ctx->pc = 0x1b5d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d24: 0xc041eac
    ctx->pc = 0x1B5D24u;
    SET_GPR_U32(ctx, 31, 0x1B5D2Cu);
    ctx->pc = 0x1B5D28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D2Cu; }
    }
    if (ctx->pc != 0x1B5D2Cu) { return; }
    ctx->pc = 0x1B5D2Cu;
    // 0x1b5d2c: 0x1000001d
    ctx->pc = 0x1B5D2Cu;
    {
        const bool branch_taken_0x1b5d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5D30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d2c) {
            ctx->pc = 0x1B5DA4u;
            goto label_1b5da4;
        }
    }
    ctx->pc = 0x1B5D34u;
label_1b5d34:
    // 0x1b5d34: 0x8c85000c
    ctx->pc = 0x1b5d34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b5d38: 0x2403fffc
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b5d3c: 0x200382d
    ctx->pc = 0x1b5d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d40: 0x482d
    ctx->pc = 0x1b5d40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d44: 0x24a40003
    ctx->pc = 0x1b5d44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 3));
    // 0x1b5d48: 0x831824
    ctx->pc = 0x1b5d48u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b5d4c: 0xa31818
    ctx->pc = 0x1b5d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b5d50: 0x10000010
    ctx->pc = 0x1B5D50u;
    {
        const bool branch_taken_0x1b5d50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5D54u;
        SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1b5d50) {
            ctx->pc = 0x1B5D94u;
            goto label_1b5d94;
        }
    }
    ctx->pc = 0x1B5D58u;
label_1b5d58:
    // 0x1b5d58: 0x90460000
    ctx->pc = 0x1b5d58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5d5c: 0x25290001
    ctx->pc = 0x1b5d5cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1b5d60: 0x30c300c0
    ctx->pc = 0x1b5d60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 192));
    // 0x1b5d64: 0x24420001
    ctx->pc = 0x1b5d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b5d68: 0x32183
    ctx->pc = 0x1b5d68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1b5d6c: 0x30c30030
    ctx->pc = 0x1b5d6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 48));
    // 0x1b5d70: 0x832825
    ctx->pc = 0x1b5d70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b5d74: 0x30c3000c
    ctx->pc = 0x1b5d74u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 12));
    // 0x1b5d78: 0x32180
    ctx->pc = 0x1b5d78u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b5d7c: 0x30c30003
    ctx->pc = 0x1b5d7cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 3));
    // 0x1b5d80: 0x852025
    ctx->pc = 0x1b5d80u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b5d84: 0x31b00
    ctx->pc = 0x1b5d84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 12));
    // 0x1b5d88: 0x641825
    ctx->pc = 0x1b5d88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b5d8c: 0xa6030000
    ctx->pc = 0x1b5d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b5d90: 0x26100002
    ctx->pc = 0x1b5d90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_1b5d94:
    // 0x1b5d94: 0x128182a
    ctx->pc = 0x1b5d94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1b5d98: 0x1460ffef
    ctx->pc = 0x1B5D98u;
    {
        const bool branch_taken_0x1b5d98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b5d98) {
            ctx->pc = 0x1B5D58u;
            goto label_1b5d58;
        }
    }
    ctx->pc = 0x1B5DA0u;
    // 0x1b5da0: 0xe0102d
    ctx->pc = 0x1b5da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b5da4:
    // 0x1b5da4: 0xdfbf0010
    ctx->pc = 0x1b5da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5da8:
    // 0x1b5da8: 0x7bb00000
    ctx->pc = 0x1b5da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5dac: 0x3e00008
    ctx->pc = 0x1B5DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5DB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5CCCu: goto label_1b5ccc;
            case 0x1B5CFCu: goto label_1b5cfc;
            case 0x1B5D34u: goto label_1b5d34;
            case 0x1B5D58u: goto label_1b5d58;
            case 0x1B5D94u: goto label_1b5d94;
            case 0x1B5DA4u: goto label_1b5da4;
            case 0x1B5DA8u: goto label_1b5da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5DB4u;
    // 0x1b5db4: 0x0
    ctx->pc = 0x1b5db4u;
    // NOP
    // 0x1b5db8: 0x0
    ctx->pc = 0x1b5db8u;
    // NOP
    // 0x1b5dbc: 0x0
    ctx->pc = 0x1b5dbcu;
    // NOP
}
