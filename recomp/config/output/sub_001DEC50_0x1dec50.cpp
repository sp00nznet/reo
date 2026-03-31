#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DEC50
// Address: 0x1dec50 - 0x1ded08
void sub_001DEC50_0x1dec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1dec50u;

    // 0x1dec50: 0x27bdffe0
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dec54: 0xffbe0010
    ctx->pc = 0x1dec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1dec58: 0xffbf0018
    ctx->pc = 0x1dec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dec5c: 0x3a0f02d
    ctx->pc = 0x1dec5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec60: 0xafc40000
    ctx->pc = 0x1dec60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1dec64: 0x8fc40000
    ctx->pc = 0x1dec64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dec68: 0xc07779e
    ctx->pc = 0x1DEC68u;
    SET_GPR_U32(ctx, 31, 0x1DEC70u);
    ctx->pc = 0x1DDE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDE78_0x1dde78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC70u; }
    }
    if (ctx->pc != 0x1DEC70u) { return; }
    ctx->pc = 0x1DEC70u;
    // 0x1dec70: 0x8fc20000
    ctx->pc = 0x1dec70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dec74: 0x8c420000
    ctx->pc = 0x1dec74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dec78: 0xafc20008
    ctx->pc = 0x1dec78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dec7c: 0x8fc20000
    ctx->pc = 0x1dec7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dec80: 0x24420004
    ctx->pc = 0x1dec80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1dec84: 0xafc20000
    ctx->pc = 0x1dec84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1dec88: 0xafc2000c
    ctx->pc = 0x1dec88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1dec8c: 0x8fc20008
    ctx->pc = 0x1dec8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dec90: 0x2c4200e0
    ctx->pc = 0x1dec90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 224));
    // 0x1dec94: 0x14400003
    ctx->pc = 0x1DEC94u;
    {
        const bool branch_taken_0x1dec94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dec94) {
            ctx->pc = 0x1DECA4u;
            goto label_1deca4;
        }
    }
    ctx->pc = 0x1DEC9Cu;
    // 0x1dec9c: 0x10000014
    ctx->pc = 0x1DEC9Cu;
    {
        const bool branch_taken_0x1dec9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dec9c) {
            ctx->pc = 0x1DECF0u;
            goto label_1decf0;
        }
    }
    ctx->pc = 0x1DECA4u;
label_1deca4:
    // 0x1deca4: 0xafc00004
    ctx->pc = 0x1deca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1deca8:
    // 0x1deca8: 0x8fc20004
    ctx->pc = 0x1deca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1decac: 0x8fc30008
    ctx->pc = 0x1decacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1decb0: 0x43102a
    ctx->pc = 0x1decb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1decb4: 0x14400003
    ctx->pc = 0x1DECB4u;
    {
        const bool branch_taken_0x1decb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1decb4) {
            ctx->pc = 0x1DECC4u;
            goto label_1decc4;
        }
    }
    ctx->pc = 0x1DECBCu;
    // 0x1decbc: 0x1000000c
    ctx->pc = 0x1DECBCu;
    {
        const bool branch_taken_0x1decbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1decbc) {
            ctx->pc = 0x1DECF0u;
            goto label_1decf0;
        }
    }
    ctx->pc = 0x1DECC4u;
label_1decc4:
    // 0x1decc4: 0x8fc4000c
    ctx->pc = 0x1decc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1decc8: 0xc07779e
    ctx->pc = 0x1DECC8u;
    SET_GPR_U32(ctx, 31, 0x1DECD0u);
    ctx->pc = 0x1DDE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDE78_0x1dde78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECD0u; }
    }
    if (ctx->pc != 0x1DECD0u) { return; }
    ctx->pc = 0x1DECD0u;
    // 0x1decd0: 0x8fc2000c
    ctx->pc = 0x1decd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1decd4: 0x24420004
    ctx->pc = 0x1decd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1decd8: 0xafc2000c
    ctx->pc = 0x1decd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1decdc: 0x8fc20004
    ctx->pc = 0x1decdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dece0: 0x24420001
    ctx->pc = 0x1dece0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dece4: 0xafc20004
    ctx->pc = 0x1dece4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1dece8: 0x1000ffef
    ctx->pc = 0x1DECE8u;
    {
        const bool branch_taken_0x1dece8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dece8) {
            ctx->pc = 0x1DECA8u;
            goto label_1deca8;
        }
    }
    ctx->pc = 0x1DECF0u;
label_1decf0:
    // 0x1decf0: 0x3c0e82d
    ctx->pc = 0x1decf0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decf4: 0xdfbe0010
    ctx->pc = 0x1decf4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1decf8: 0xdfbf0018
    ctx->pc = 0x1decf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1decfc: 0x27bd0020
    ctx->pc = 0x1decfcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ded00: 0x3e00008
    ctx->pc = 0x1DED00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DECA4u: goto label_1deca4;
            case 0x1DECA8u: goto label_1deca8;
            case 0x1DECC4u: goto label_1decc4;
            case 0x1DECF0u: goto label_1decf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DED08u;
}
