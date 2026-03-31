#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170CA0
// Address: 0x170ca0 - 0x170d90
void sub_00170CA0_0x170ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170ca0u;

    // 0x170ca0: 0x27bdffd0
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170ca4: 0xffb00000
    ctx->pc = 0x170ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170ca8: 0x80802d
    ctx->pc = 0x170ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cac: 0xffb10008
    ctx->pc = 0x170cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170cb0: 0xc0882d
    ctx->pc = 0x170cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cb4: 0xffb20010
    ctx->pc = 0x170cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170cb8: 0xa0902d
    ctx->pc = 0x170cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cbc: 0xffb30018
    ctx->pc = 0x170cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x170cc0: 0xe0982d
    ctx->pc = 0x170cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cc4: 0xffb40020
    ctx->pc = 0x170cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x170cc8: 0x100a02d
    ctx->pc = 0x170cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ccc: 0xffbf0028
    ctx->pc = 0x170cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x170cd0: 0xc045198
    ctx->pc = 0x170CD0u;
    SET_GPR_U32(ctx, 31, 0x170CD8u);
    ctx->pc = 0x170CD4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CD8u; }
    }
    if (ctx->pc != 0x170CD8u) { return; }
    ctx->pc = 0x170CD8u;
    // 0x170cd8: 0x8e03000c
    ctx->pc = 0x170cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x170cdc: 0x8e050010
    ctx->pc = 0x170cdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x170ce0: 0x8e060014
    ctx->pc = 0x170ce0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x170ce4: 0x651821
    ctx->pc = 0x170ce4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x170ce8: 0x8e040018
    ctx->pc = 0x170ce8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x170cec: 0x31ac0
    ctx->pc = 0x170cecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x170cf0: 0x8e020008
    ctx->pc = 0x170cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170cf4: 0x661821
    ctx->pc = 0x170cf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170cf8: 0x50800001
    ctx->pc = 0x170CF8u;
    {
        const bool branch_taken_0x170cf8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170cf8) {
            ctx->pc = 0x170CFCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x170D00u;
            goto label_170d00;
        }
    }
    ctx->pc = 0x170D00u;
label_170d00:
    // 0x170d00: 0x64001a
    ctx->pc = 0x170d00u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x170d04: 0x451023
    ctx->pc = 0x170d04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170d08: 0x212c0
    ctx->pc = 0x170d08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x170d0c: 0x2442f000
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x170d10: 0x462823
    ctx->pc = 0x170d10u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x170d14: 0x3810
    ctx->pc = 0x170d14u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x170d18: 0x872023
    ctx->pc = 0x170d18u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x170d1c: 0x85102a
    ctx->pc = 0x170d1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x170d20: 0x54400009
    ctx->pc = 0x170D20u;
    {
        const bool branch_taken_0x170d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170d20) {
            ctx->pc = 0x170D24u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->pc = 0x170D48u;
            goto label_170d48;
        }
    }
    ctx->pc = 0x170D28u;
    // 0x170d28: 0x8e020000
    ctx->pc = 0x170d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170d2c: 0xae250000
    ctx->pc = 0x170d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x170d30: 0x471021
    ctx->pc = 0x170d30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x170d34: 0xae800000
    ctx->pc = 0x170d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x170d38: 0xae420000
    ctx->pc = 0x170d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x170d3c: 0x1000000a
    ctx->pc = 0x170D3Cu;
    {
        const bool branch_taken_0x170d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170D40u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x170d3c) {
            ctx->pc = 0x170D68u;
            goto label_170d68;
        }
    }
    ctx->pc = 0x170D44u;
    // 0x170d44: 0x0
    ctx->pc = 0x170d44u;
    // NOP
label_170d48:
    // 0x170d48: 0x8e040000
    ctx->pc = 0x170d48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170d4c: 0x8e020018
    ctx->pc = 0x170d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x170d50: 0x871821
    ctx->pc = 0x170d50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x170d54: 0x471023
    ctx->pc = 0x170d54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x170d58: 0xae430000
    ctx->pc = 0x170d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x170d5c: 0xa21023
    ctx->pc = 0x170d5cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x170d60: 0xae640000
    ctx->pc = 0x170d60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x170d64: 0xae820000
    ctx->pc = 0x170d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_170d68:
    // 0x170d68: 0x8e040040
    ctx->pc = 0x170d68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x170d6c: 0xdfb10008
    ctx->pc = 0x170d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170d70: 0xdfb00000
    ctx->pc = 0x170d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d74: 0xdfb20010
    ctx->pc = 0x170d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170d78: 0xdfb30018
    ctx->pc = 0x170d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170d7c: 0xdfb40020
    ctx->pc = 0x170d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170d80: 0xdfbf0028
    ctx->pc = 0x170d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170d84: 0x8045190
    ctx->pc = 0x170D84u;
    ctx->pc = 0x170D88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x114640u;
    sub_00114640_0x114640(rdram, ctx, runtime); return;
    ctx->pc = 0x170D8Cu;
    // 0x170d8c: 0x0
    ctx->pc = 0x170d8cu;
    // NOP
}
