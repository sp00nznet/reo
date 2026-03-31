#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7BB0
// Address: 0x1a7bb0 - 0x1a7de0
void sub_001A7BB0_0x1a7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7bb0u;

    // 0x1a7bb0: 0x27bdfff0
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7bb4: 0x3c02002b
    ctx->pc = 0x1a7bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7bb8: 0xffbf0000
    ctx->pc = 0x1a7bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7bbc: 0x3c01002b
    ctx->pc = 0x1a7bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7bc0: 0x8c250a68
    ctx->pc = 0x1a7bc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7bc4: 0x24420a80
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7bc8: 0x51840
    ctx->pc = 0x1a7bc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a7bcc: 0x651821
    ctx->pc = 0x1a7bccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7bd0: 0x31880
    ctx->pc = 0x1a7bd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7bd4: 0x432821
    ctx->pc = 0x1a7bd4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7bd8: 0x8ca20000
    ctx->pc = 0x1a7bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7bdc: 0x4400006
    ctx->pc = 0x1A7BDCu;
    {
        const bool branch_taken_0x1a7bdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7BE0u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x1a7bdc) {
            ctx->pc = 0x1A7BF8u;
            goto label_1a7bf8;
        }
    }
    ctx->pc = 0x1A7BE4u;
    // 0x1a7be4: 0x3c040024
    ctx->pc = 0x1a7be4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7be8: 0xc0423b4
    ctx->pc = 0x1A7BE8u;
    SET_GPR_U32(ctx, 31, 0x1A7BF0u);
    ctx->pc = 0x1A7BECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8944));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BF0u; }
    }
    if (ctx->pc != 0x1A7BF0u) { return; }
    ctx->pc = 0x1A7BF0u;
    // 0x1a7bf0: 0x10000012
    ctx->pc = 0x1A7BF0u;
    {
        const bool branch_taken_0x1a7bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7BF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7bf0) {
            ctx->pc = 0x1A7C3Cu;
            goto label_1a7c3c;
        }
    }
    ctx->pc = 0x1A7BF8u;
label_1a7bf8:
    // 0x1a7bf8: 0x3c024100
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
    // 0x1a7bfc: 0x31c00
    ctx->pc = 0x1a7bfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7c00: 0x3c01002b
    ctx->pc = 0x1a7c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7c04: 0x31a3c
    ctx->pc = 0x1a7c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7c08: 0x31a3e
    ctx->pc = 0x1a7c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7c0c: 0x621025
    ctx->pc = 0x1a7c0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7c10: 0xaca20000
    ctx->pc = 0x1a7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7c14: 0x8c220a68
    ctx->pc = 0x1a7c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7c18: 0x24430001
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7c1c: 0x4610004
    ctx->pc = 0x1A7C1Cu;
    {
        const bool branch_taken_0x1a7c1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7C20u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7c1c) {
            ctx->pc = 0x1A7C30u;
            goto label_1a7c30;
        }
    }
    ctx->pc = 0x1A7C24u;
    // 0x1a7c24: 0x10400002
    ctx->pc = 0x1A7C24u;
    {
        const bool branch_taken_0x1a7c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7c24) {
            ctx->pc = 0x1A7C30u;
            goto label_1a7c30;
        }
    }
    ctx->pc = 0x1A7C2Cu;
    // 0x1a7c2c: 0x2442ffe0
    ctx->pc = 0x1a7c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7c30:
    // 0x1a7c30: 0x3c01002b
    ctx->pc = 0x1a7c30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7c34: 0xac220a68
    ctx->pc = 0x1a7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7c38: 0x102d
    ctx->pc = 0x1a7c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c3c:
    // 0x1a7c3c: 0xdfbf0000
    ctx->pc = 0x1a7c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7c40: 0x3e00008
    ctx->pc = 0x1A7C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7C44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7BF8u: goto label_1a7bf8;
            case 0x1A7C30u: goto label_1a7c30;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CDCu: goto label_1a7cdc;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DD4u: goto label_1a7dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7C48u;
    // 0x1a7c48: 0x0
    ctx->pc = 0x1a7c48u;
    // NOP
    // 0x1a7c4c: 0x0
    ctx->pc = 0x1a7c4cu;
    // NOP
    // 0x1a7c50: 0x27bdfff0
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7c54: 0x3c02002b
    ctx->pc = 0x1a7c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7c58: 0xffbf0000
    ctx->pc = 0x1a7c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7c5c: 0x3c01002b
    ctx->pc = 0x1a7c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7c60: 0x8c250a68
    ctx->pc = 0x1a7c60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7c64: 0x24420a80
    ctx->pc = 0x1a7c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7c68: 0x51840
    ctx->pc = 0x1a7c68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a7c6c: 0x651821
    ctx->pc = 0x1a7c6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7c70: 0x31880
    ctx->pc = 0x1a7c70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7c74: 0x432821
    ctx->pc = 0x1a7c74u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c78: 0x8ca20000
    ctx->pc = 0x1a7c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7c7c: 0x4400006
    ctx->pc = 0x1A7C7Cu;
    {
        const bool branch_taken_0x1a7c7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7C80u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x1a7c7c) {
            ctx->pc = 0x1A7C98u;
            goto label_1a7c98;
        }
    }
    ctx->pc = 0x1A7C84u;
    // 0x1a7c84: 0x3c040024
    ctx->pc = 0x1a7c84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7c88: 0xc0423b4
    ctx->pc = 0x1A7C88u;
    SET_GPR_U32(ctx, 31, 0x1A7C90u);
    ctx->pc = 0x1A7C8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8992));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C90u; }
    }
    if (ctx->pc != 0x1A7C90u) { return; }
    ctx->pc = 0x1A7C90u;
    // 0x1a7c90: 0x10000012
    ctx->pc = 0x1A7C90u;
    {
        const bool branch_taken_0x1a7c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7C94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7c90) {
            ctx->pc = 0x1A7CDCu;
            goto label_1a7cdc;
        }
    }
    ctx->pc = 0x1A7C98u;
label_1a7c98:
    // 0x1a7c98: 0x3c024200
    ctx->pc = 0x1a7c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16896 << 16));
    // 0x1a7c9c: 0x31c00
    ctx->pc = 0x1a7c9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7ca0: 0x3c01002b
    ctx->pc = 0x1a7ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7ca4: 0x31a3c
    ctx->pc = 0x1a7ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7ca8: 0x31a3e
    ctx->pc = 0x1a7ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7cac: 0x621025
    ctx->pc = 0x1a7cacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7cb0: 0xaca20000
    ctx->pc = 0x1a7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7cb4: 0x8c220a68
    ctx->pc = 0x1a7cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7cb8: 0x24430001
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7cbc: 0x4610004
    ctx->pc = 0x1A7CBCu;
    {
        const bool branch_taken_0x1a7cbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7CC0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7cbc) {
            ctx->pc = 0x1A7CD0u;
            goto label_1a7cd0;
        }
    }
    ctx->pc = 0x1A7CC4u;
    // 0x1a7cc4: 0x10400002
    ctx->pc = 0x1A7CC4u;
    {
        const bool branch_taken_0x1a7cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7cc4) {
            ctx->pc = 0x1A7CD0u;
            goto label_1a7cd0;
        }
    }
    ctx->pc = 0x1A7CCCu;
    // 0x1a7ccc: 0x2442ffe0
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7cd0:
    // 0x1a7cd0: 0x3c01002b
    ctx->pc = 0x1a7cd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7cd4: 0xac220a68
    ctx->pc = 0x1a7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7cd8: 0x102d
    ctx->pc = 0x1a7cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cdc:
    // 0x1a7cdc: 0xdfbf0000
    ctx->pc = 0x1a7cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7ce0: 0x3e00008
    ctx->pc = 0x1A7CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7CE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7BF8u: goto label_1a7bf8;
            case 0x1A7C30u: goto label_1a7c30;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CDCu: goto label_1a7cdc;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DD4u: goto label_1a7dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7CE8u;
    // 0x1a7ce8: 0x0
    ctx->pc = 0x1a7ce8u;
    // NOP
    // 0x1a7cec: 0x0
    ctx->pc = 0x1a7cecu;
    // NOP
    // 0x1a7cf0: 0x27bdfff0
    ctx->pc = 0x1a7cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7cf4: 0x2c810003
    ctx->pc = 0x1a7cf4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x1a7cf8: 0x14200006
    ctx->pc = 0x1A7CF8u;
    {
        const bool branch_taken_0x1a7cf8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7CFCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1a7cf8) {
            ctx->pc = 0x1A7D14u;
            goto label_1a7d14;
        }
    }
    ctx->pc = 0x1A7D00u;
    // 0x1a7d00: 0x3c040024
    ctx->pc = 0x1a7d00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7d04: 0xc0423b4
    ctx->pc = 0x1A7D04u;
    SET_GPR_U32(ctx, 31, 0x1A7D0Cu);
    ctx->pc = 0x1A7D08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9056));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D0Cu; }
    }
    if (ctx->pc != 0x1A7D0Cu) { return; }
    ctx->pc = 0x1A7D0Cu;
    // 0x1a7d0c: 0x10000031
    ctx->pc = 0x1A7D0Cu;
    {
        const bool branch_taken_0x1a7d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x1a7d0c) {
            ctx->pc = 0x1A7DD4u;
            goto label_1a7dd4;
        }
    }
    ctx->pc = 0x1A7D14u;
label_1a7d14:
    // 0x1a7d14: 0x2ca2000a
    ctx->pc = 0x1a7d14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 10));
    // 0x1a7d18: 0x14400006
    ctx->pc = 0x1A7D18u;
    {
        const bool branch_taken_0x1a7d18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a7d18) {
            ctx->pc = 0x1A7D34u;
            goto label_1a7d34;
        }
    }
    ctx->pc = 0x1A7D20u;
    // 0x1a7d20: 0x3c040024
    ctx->pc = 0x1a7d20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7d24: 0xc0423b4
    ctx->pc = 0x1A7D24u;
    SET_GPR_U32(ctx, 31, 0x1A7D2Cu);
    ctx->pc = 0x1A7D28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9104));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D2Cu; }
    }
    if (ctx->pc != 0x1A7D2Cu) { return; }
    ctx->pc = 0x1A7D2Cu;
    // 0x1a7d2c: 0x10000029
    ctx->pc = 0x1A7D2Cu;
    {
        const bool branch_taken_0x1a7d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1a7d2c) {
            ctx->pc = 0x1A7DD4u;
            goto label_1a7dd4;
        }
    }
    ctx->pc = 0x1A7D34u;
label_1a7d34:
    // 0x1a7d34: 0x3c02002b
    ctx->pc = 0x1a7d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7d38: 0x8c290a68
    ctx->pc = 0x1a7d38u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7d3c: 0x24420a80
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7d40: 0x91840
    ctx->pc = 0x1a7d40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1a7d44: 0x691821
    ctx->pc = 0x1a7d44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a7d48: 0x31880
    ctx->pc = 0x1a7d48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7d4c: 0x434821
    ctx->pc = 0x1a7d4cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d50: 0x8d220000
    ctx->pc = 0x1a7d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a7d54: 0x4400006
    ctx->pc = 0x1A7D54u;
    {
        const bool branch_taken_0x1a7d54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7D58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1a7d54) {
            ctx->pc = 0x1A7D70u;
            goto label_1a7d70;
        }
    }
    ctx->pc = 0x1A7D5Cu;
    // 0x1a7d5c: 0x3c040024
    ctx->pc = 0x1a7d5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7d60: 0xc0423b4
    ctx->pc = 0x1A7D60u;
    SET_GPR_U32(ctx, 31, 0x1A7D68u);
    ctx->pc = 0x1A7D64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9152));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D68u; }
    }
    if (ctx->pc != 0x1A7D68u) { return; }
    ctx->pc = 0x1A7D68u;
    // 0x1a7d68: 0x1000001a
    ctx->pc = 0x1A7D68u;
    {
        const bool branch_taken_0x1a7d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7d68) {
            ctx->pc = 0x1A7DD4u;
            goto label_1a7dd4;
        }
    }
    ctx->pc = 0x1A7D70u;
label_1a7d70:
    // 0x1a7d70: 0x6143c
    ctx->pc = 0x1a7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1a7d74: 0x32180
    ctx->pc = 0x1a7d74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1a7d78: 0x2143f
    ctx->pc = 0x1a7d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a7d7c: 0xa42825
    ctx->pc = 0x1a7d7cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a7d80: 0x3043ffff
    ctx->pc = 0x1a7d80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1a7d84: 0x52400
    ctx->pc = 0x1a7d84u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a7d88: 0x3c024400
    ctx->pc = 0x1a7d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17408 << 16));
    // 0x1a7d8c: 0x831825
    ctx->pc = 0x1a7d8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7d90: 0x3c01002b
    ctx->pc = 0x1a7d90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7d94: 0x31a3c
    ctx->pc = 0x1a7d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7d98: 0x31a3e
    ctx->pc = 0x1a7d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7d9c: 0x621025
    ctx->pc = 0x1a7d9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7da0: 0xad220000
    ctx->pc = 0x1a7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1a7da4: 0xa1270004
    ctx->pc = 0x1a7da4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a7da8: 0xa1280005
    ctx->pc = 0x1a7da8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a7dac: 0x8c220a68
    ctx->pc = 0x1a7dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7db0: 0x24430001
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7db4: 0x4610004
    ctx->pc = 0x1A7DB4u;
    {
        const bool branch_taken_0x1a7db4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7DB8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7db4) {
            ctx->pc = 0x1A7DC8u;
            goto label_1a7dc8;
        }
    }
    ctx->pc = 0x1A7DBCu;
    // 0x1a7dbc: 0x10400002
    ctx->pc = 0x1A7DBCu;
    {
        const bool branch_taken_0x1a7dbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7dbc) {
            ctx->pc = 0x1A7DC8u;
            goto label_1a7dc8;
        }
    }
    ctx->pc = 0x1A7DC4u;
    // 0x1a7dc4: 0x2442ffe0
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7dc8:
    // 0x1a7dc8: 0x3c01002b
    ctx->pc = 0x1a7dc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7dcc: 0xac220a68
    ctx->pc = 0x1a7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7dd0: 0x102d
    ctx->pc = 0x1a7dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dd4:
    // 0x1a7dd4: 0xdfbf0000
    ctx->pc = 0x1a7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7dd8: 0x3e00008
    ctx->pc = 0x1A7DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7DDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7BF8u: goto label_1a7bf8;
            case 0x1A7C30u: goto label_1a7c30;
            case 0x1A7C3Cu: goto label_1a7c3c;
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CDCu: goto label_1a7cdc;
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DD4u: goto label_1a7dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7DE0u;
}
