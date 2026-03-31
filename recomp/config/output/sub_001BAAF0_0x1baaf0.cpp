#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BAAF0
// Address: 0x1baaf0 - 0x1bab60
void sub_001BAAF0_0x1baaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1baaf0u;

    // 0x1baaf0: 0x27bdffd0
    ctx->pc = 0x1baaf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1baaf4: 0xffbf0020
    ctx->pc = 0x1baaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1baaf8: 0x7fb10010
    ctx->pc = 0x1baaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baafc: 0x7fb00000
    ctx->pc = 0x1baafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bab00: 0x80882d
    ctx->pc = 0x1bab00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab04: 0x10000009
    ctx->pc = 0x1BAB04u;
    {
        const bool branch_taken_0x1bab04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BAB08u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bab04) {
            ctx->pc = 0x1BAB2Cu;
            goto label_1bab2c;
        }
    }
    ctx->pc = 0x1BAB0Cu;
label_1bab0c:
    // 0x1bab0c: 0x902243c0
    ctx->pc = 0x1bab0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1bab10: 0x10400003
    ctx->pc = 0x1BAB10u;
    {
        const bool branch_taken_0x1bab10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BAB14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bab10) {
            ctx->pc = 0x1BAB20u;
            goto label_1bab20;
        }
    }
    ctx->pc = 0x1BAB18u;
    // 0x1bab18: 0x3c010029
    ctx->pc = 0x1bab18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1bab1c: 0xac204178
    ctx->pc = 0x1bab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16760), GPR_U32(ctx, 0));
label_1bab20:
    // 0x1bab20: 0xc067db0
    ctx->pc = 0x1BAB20u;
    SET_GPR_U32(ctx, 31, 0x1BAB28u);
    ctx->pc = 0x19F6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6C0_0x19f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB28u; }
    }
    if (ctx->pc != 0x1BAB28u) { return; }
    ctx->pc = 0x1BAB28u;
    // 0x1bab28: 0x26100001
    ctx->pc = 0x1bab28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1bab2c:
    // 0x1bab2c: 0x211102a
    ctx->pc = 0x1bab2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x1bab30: 0x1440fff6
    ctx->pc = 0x1BAB30u;
    {
        const bool branch_taken_0x1bab30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BAB34u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bab30) {
            ctx->pc = 0x1BAB0Cu;
            goto label_1bab0c;
        }
    }
    ctx->pc = 0x1BAB38u;
    // 0x1bab38: 0xc06b18c
    ctx->pc = 0x1BAB38u;
    SET_GPR_U32(ctx, 31, 0x1BAB40u);
    ctx->pc = 0x1AC630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC630_0x1ac630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB40u; }
    }
    if (ctx->pc != 0x1BAB40u) { return; }
    ctx->pc = 0x1BAB40u;
    // 0x1bab40: 0x3c010032
    ctx->pc = 0x1bab40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bab44: 0xac2243f4
    ctx->pc = 0x1bab44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17396), GPR_U32(ctx, 2));
    // 0x1bab48: 0xdfbf0020
    ctx->pc = 0x1bab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bab4c: 0x7bb10010
    ctx->pc = 0x1bab4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bab50: 0x7bb00000
    ctx->pc = 0x1bab50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bab54: 0x3e00008
    ctx->pc = 0x1BAB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAB58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAB0Cu: goto label_1bab0c;
            case 0x1BAB20u: goto label_1bab20;
            case 0x1BAB2Cu: goto label_1bab2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BAB5Cu;
    // 0x1bab5c: 0x0
    ctx->pc = 0x1bab5cu;
    // NOP
}
