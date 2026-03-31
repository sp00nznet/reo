#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6D60
// Address: 0x1d6d60 - 0x1d6dd0
void sub_001D6D60_0x1d6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6d60u;

    // 0x1d6d60: 0x27bdfff0
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6d64: 0xffbf0000
    ctx->pc = 0x1d6d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6d68: 0xc076480
    ctx->pc = 0x1D6D68u;
    SET_GPR_U32(ctx, 31, 0x1D6D70u);
    ctx->pc = 0x1D9200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9200_0x1d9200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D70u; }
    }
    if (ctx->pc != 0x1D6D70u) { return; }
    ctx->pc = 0x1D6D70u;
    // 0x1d6d70: 0x2143c
    ctx->pc = 0x1d6d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6d74: 0x2404fffe
    ctx->pc = 0x1d6d74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d6d78: 0x2143f
    ctx->pc = 0x1d6d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6d7c: 0x1044000c
    ctx->pc = 0x1D6D7Cu;
    {
        const bool branch_taken_0x1d6d7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1D6D80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x1d6d7c) {
            ctx->pc = 0x1D6DB0u;
            goto label_1d6db0;
        }
    }
    ctx->pc = 0x1D6D84u;
    // 0x1d6d84: 0x10430008
    ctx->pc = 0x1D6D84u;
    {
        const bool branch_taken_0x1d6d84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d6d84) {
            ctx->pc = 0x1D6DA8u;
            goto label_1d6da8;
        }
    }
    ctx->pc = 0x1D6D8Cu;
    // 0x1d6d8c: 0x2403ffff
    ctx->pc = 0x1d6d8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6d90: 0x10430003
    ctx->pc = 0x1D6D90u;
    {
        const bool branch_taken_0x1d6d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d6d90) {
            ctx->pc = 0x1D6DA0u;
            goto label_1d6da0;
        }
    }
    ctx->pc = 0x1D6D98u;
    // 0x1d6d98: 0x10000007
    ctx->pc = 0x1D6D98u;
    {
        const bool branch_taken_0x1d6d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6d98) {
            ctx->pc = 0x1D6DB8u;
            goto label_1d6db8;
        }
    }
    ctx->pc = 0x1D6DA0u;
label_1d6da0:
    // 0x1d6da0: 0x10000005
    ctx->pc = 0x1D6DA0u;
    {
        const bool branch_taken_0x1d6da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6DA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6da0) {
            ctx->pc = 0x1D6DB8u;
            goto label_1d6db8;
        }
    }
    ctx->pc = 0x1D6DA8u;
label_1d6da8:
    // 0x1d6da8: 0x10000003
    ctx->pc = 0x1D6DA8u;
    {
        const bool branch_taken_0x1d6da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6DACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6da8) {
            ctx->pc = 0x1D6DB8u;
            goto label_1d6db8;
        }
    }
    ctx->pc = 0x1D6DB0u;
label_1d6db0:
    // 0x1d6db0: 0x2402fffd
    ctx->pc = 0x1d6db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d6db4: 0x0
    ctx->pc = 0x1d6db4u;
    // NOP
label_1d6db8:
    // 0x1d6db8: 0xdfbf0000
    ctx->pc = 0x1d6db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6dbc: 0x3e00008
    ctx->pc = 0x1D6DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6DA0u: goto label_1d6da0;
            case 0x1D6DA8u: goto label_1d6da8;
            case 0x1D6DB0u: goto label_1d6db0;
            case 0x1D6DB8u: goto label_1d6db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6DC4u;
    // 0x1d6dc4: 0x0
    ctx->pc = 0x1d6dc4u;
    // NOP
    // 0x1d6dc8: 0x0
    ctx->pc = 0x1d6dc8u;
    // NOP
    // 0x1d6dcc: 0x0
    ctx->pc = 0x1d6dccu;
    // NOP
}
