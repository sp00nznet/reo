#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160E28
// Address: 0x160e28 - 0x160e98
void sub_00160E28_0x160e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160e28u;

    // 0x160e28: 0x27bdfff0
    ctx->pc = 0x160e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160e2c: 0x24020002
    ctx->pc = 0x160e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160e30: 0xffb00000
    ctx->pc = 0x160e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160e34: 0x24100003
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160e38: 0xffbf0008
    ctx->pc = 0x160e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160e3c: 0x8c830088
    ctx->pc = 0x160e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x160e40: 0x1062000b
    ctx->pc = 0x160E40u;
    {
        const bool branch_taken_0x160e40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x160E44u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x160e40) {
            ctx->pc = 0x160E70u;
            goto label_160e70;
        }
    }
    ctx->pc = 0x160E48u;
    // 0x160e48: 0x10800005
    ctx->pc = 0x160E48u;
    {
        const bool branch_taken_0x160e48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x160E4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x160e48) {
            ctx->pc = 0x160E60u;
            goto label_160e60;
        }
    }
    ctx->pc = 0x160E50u;
    // 0x160e50: 0x5062000b
    ctx->pc = 0x160E50u;
    {
        const bool branch_taken_0x160e50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x160e50) {
            ctx->pc = 0x160E54u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x160E80u;
            goto label_160e80;
        }
    }
    ctx->pc = 0x160E58u;
    // 0x160e58: 0x10000007
    ctx->pc = 0x160E58u;
    {
        const bool branch_taken_0x160e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160E5Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x160e58) {
            ctx->pc = 0x160E78u;
            goto label_160e78;
        }
    }
    ctx->pc = 0x160E60u;
label_160e60:
    // 0x160e60: 0x10700008
    ctx->pc = 0x160E60u;
    {
        const bool branch_taken_0x160e60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        ctx->pc = 0x160E64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160e60) {
            ctx->pc = 0x160E84u;
            goto label_160e84;
        }
    }
    ctx->pc = 0x160E68u;
    // 0x160e68: 0x10000003
    ctx->pc = 0x160E68u;
    {
        const bool branch_taken_0x160e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160E6Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x160e68) {
            ctx->pc = 0x160E78u;
            goto label_160e78;
        }
    }
    ctx->pc = 0x160E70u;
label_160e70:
    // 0x160e70: 0x10000003
    ctx->pc = 0x160E70u;
    {
        const bool branch_taken_0x160e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160E74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160e70) {
            ctx->pc = 0x160E80u;
            goto label_160e80;
        }
    }
    ctx->pc = 0x160E78u;
label_160e78:
    // 0x160e78: 0xc058dd4
    ctx->pc = 0x160E78u;
    SET_GPR_U32(ctx, 31, 0x160E80u);
    ctx->pc = 0x160E7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965456));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E80u; }
    }
    if (ctx->pc != 0x160E80u) { return; }
    ctx->pc = 0x160E80u;
label_160e80:
    // 0x160e80: 0x200102d
    ctx->pc = 0x160e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160e84:
    // 0x160e84: 0xdfb00000
    ctx->pc = 0x160e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e88: 0xdfbf0008
    ctx->pc = 0x160e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160e8c: 0x3e00008
    ctx->pc = 0x160E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160E60u: goto label_160e60;
            case 0x160E70u: goto label_160e70;
            case 0x160E78u: goto label_160e78;
            case 0x160E80u: goto label_160e80;
            case 0x160E84u: goto label_160e84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160E94u;
    // 0x160e94: 0x0
    ctx->pc = 0x160e94u;
    // NOP
}
