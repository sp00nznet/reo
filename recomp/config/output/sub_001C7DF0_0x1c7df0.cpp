#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7DF0
// Address: 0x1c7df0 - 0x1c7ed0
void sub_001C7DF0_0x1c7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7df0u;

    // 0x1c7df0: 0x27bdfff0
    ctx->pc = 0x1c7df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7df4: 0xffbf0000
    ctx->pc = 0x1c7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7df8: 0x8c830004
    ctx->pc = 0x1c7df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c7dfc: 0x8c86000c
    ctx->pc = 0x1c7dfcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c7e00: 0x651821
    ctx->pc = 0x1c7e00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c7e04: 0xc3082a
    ctx->pc = 0x1c7e04u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x1c7e08: 0x10200005
    ctx->pc = 0x1C7E08u;
    {
        const bool branch_taken_0x1c7e08 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7e08) {
            ctx->pc = 0x1C7E20u;
            goto label_1c7e20;
        }
    }
    ctx->pc = 0x1C7E10u;
    // 0x1c7e10: 0xc071ef0
    ctx->pc = 0x1C7E10u;
    SET_GPR_U32(ctx, 31, 0x1C7E18u);
    ctx->pc = 0x1C7E14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C7BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7BC0_0x1c7bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E18u; }
    }
    if (ctx->pc != 0x1C7E18u) { return; }
    ctx->pc = 0x1C7E18u;
    // 0x1c7e18: 0x10000003
    ctx->pc = 0x1C7E18u;
    {
        const bool branch_taken_0x1c7e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7E1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1c7e18) {
            ctx->pc = 0x1C7E28u;
            goto label_1c7e28;
        }
    }
    ctx->pc = 0x1C7E20u;
label_1c7e20:
    // 0x1c7e20: 0xac830004
    ctx->pc = 0x1c7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1c7e24: 0xdfbf0000
    ctx->pc = 0x1c7e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7e28:
    // 0x1c7e28: 0x3e00008
    ctx->pc = 0x1C7E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7E20u: goto label_1c7e20;
            case 0x1C7E28u: goto label_1c7e28;
            case 0x1C7E9Cu: goto label_1c7e9c;
            case 0x1C7EC4u: goto label_1c7ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7E30u;
    // 0x1c7e30: 0x27bdffc0
    ctx->pc = 0x1c7e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c7e34: 0x3c010034
    ctx->pc = 0x1c7e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c7e38: 0xffbf0010
    ctx->pc = 0x1c7e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7e3c: 0x24030003
    ctx->pc = 0x1c7e3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7e40: 0x7fb00000
    ctx->pc = 0x1c7e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7e44: 0x8c28d158
    ctx->pc = 0x1c7e44u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c7e48: 0x8d080008
    ctx->pc = 0x1c7e48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1c7e4c: 0x3c010034
    ctx->pc = 0x1c7e4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c7e50: 0xa4880000
    ctx->pc = 0x1c7e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1c7e54: 0x8c24d158
    ctx->pc = 0x1c7e54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c7e58: 0x8c84000c
    ctx->pc = 0x1c7e58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c7e5c: 0x3c010034
    ctx->pc = 0x1c7e5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c7e60: 0xa4a40000
    ctx->pc = 0x1c7e60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c7e64: 0x84242640
    ctx->pc = 0x1c7e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9792)));
    // 0x1c7e68: 0x30840001
    ctx->pc = 0x1c7e68u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x1c7e6c: 0x3c010034
    ctx->pc = 0x1c7e6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c7e70: 0xa4c40000
    ctx->pc = 0x1c7e70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c7e74: 0xa4e00000
    ctx->pc = 0x1c7e74u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7e78: 0x8c24d158
    ctx->pc = 0x1c7e78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c7e7c: 0x8c840000
    ctx->pc = 0x1c7e7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7e80: 0x10830006
    ctx->pc = 0x1C7E80u;
    {
        const bool branch_taken_0x1c7e80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C7E84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e80) {
            ctx->pc = 0x1C7E9Cu;
            goto label_1c7e9c;
        }
    }
    ctx->pc = 0x1C7E88u;
    // 0x1c7e88: 0x24030002
    ctx->pc = 0x1c7e88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7e8c: 0x10830003
    ctx->pc = 0x1C7E8Cu;
    {
        const bool branch_taken_0x1c7e8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c7e8c) {
            ctx->pc = 0x1C7E9Cu;
            goto label_1c7e9c;
        }
    }
    ctx->pc = 0x1C7E94u;
    // 0x1c7e94: 0x1000000b
    ctx->pc = 0x1C7E94u;
    {
        const bool branch_taken_0x1c7e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7E98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c7e94) {
            ctx->pc = 0x1C7EC4u;
            goto label_1c7ec4;
        }
    }
    ctx->pc = 0x1C7E9Cu;
label_1c7e9c:
    // 0x1c7e9c: 0xc075c14
    ctx->pc = 0x1C7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7EA4u);
    ctx->pc = 0x1C7EA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1D7050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7050_0x1d7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EA4u; }
    }
    if (ctx->pc != 0x1C7EA4u) { return; }
    ctx->pc = 0x1C7EA4u;
    // 0x1c7ea4: 0x8fa40028
    ctx->pc = 0x1c7ea4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c7ea8: 0x24030064
    ctx->pc = 0x1c7ea8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1c7eac: 0x83001a
    ctx->pc = 0x1c7eacu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1c7eb0: 0x0
    ctx->pc = 0x1c7eb0u;
    // NOP
    // 0x1c7eb4: 0x0
    ctx->pc = 0x1c7eb4u;
    // NOP
    // 0x1c7eb8: 0x1812
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1c7ebc: 0xa6030000
    ctx->pc = 0x1c7ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7ec0: 0xdfbf0010
    ctx->pc = 0x1c7ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7ec4:
    // 0x1c7ec4: 0x7bb00000
    ctx->pc = 0x1c7ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ec8: 0x3e00008
    ctx->pc = 0x1C7EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7ECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7E20u: goto label_1c7e20;
            case 0x1C7E28u: goto label_1c7e28;
            case 0x1C7E9Cu: goto label_1c7e9c;
            case 0x1C7EC4u: goto label_1c7ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7ED0u;
}
