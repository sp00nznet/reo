#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160C30
// Address: 0x160c30 - 0x160c90
void sub_00160C30_0x160c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160c30u;

    // 0x160c30: 0x27bdfff0
    ctx->pc = 0x160c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160c34: 0x24020002
    ctx->pc = 0x160c34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160c38: 0xffbf0000
    ctx->pc = 0x160c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160c3c: 0x2c850003
    ctx->pc = 0x160c3cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x160c40: 0x1082000e
    ctx->pc = 0x160C40u;
    {
        const bool branch_taken_0x160c40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x160C44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160c40) {
            ctx->pc = 0x160C7Cu;
            goto label_160c7c;
        }
    }
    ctx->pc = 0x160C48u;
    // 0x160c48: 0x50a00005
    ctx->pc = 0x160C48u;
    {
        const bool branch_taken_0x160c48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x160c48) {
            ctx->pc = 0x160C4Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x160C60u;
            goto label_160c60;
        }
    }
    ctx->pc = 0x160C50u;
    // 0x160c50: 0x24020001
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160c54: 0x10000003
    ctx->pc = 0x160C54u;
    {
        const bool branch_taken_0x160c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160C58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x160c54) {
            ctx->pc = 0x160C64u;
            goto label_160c64;
        }
    }
    ctx->pc = 0x160C5Cu;
    // 0x160c5c: 0x0
    ctx->pc = 0x160c5cu;
    // NOP
label_160c60:
    // 0x160c60: 0x24030003
    ctx->pc = 0x160c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_160c64:
    // 0x160c64: 0x10820006
    ctx->pc = 0x160C64u;
    {
        const bool branch_taken_0x160c64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x160C68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x160c64) {
            ctx->pc = 0x160C80u;
            goto label_160c80;
        }
    }
    ctx->pc = 0x160C6Cu;
    // 0x160c6c: 0x3c040024
    ctx->pc = 0x160c6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160c70: 0xc058dd4
    ctx->pc = 0x160C70u;
    SET_GPR_U32(ctx, 31, 0x160C78u);
    ctx->pc = 0x160C74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965416));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C78u; }
    }
    if (ctx->pc != 0x160C78u) { return; }
    ctx->pc = 0x160C78u;
    // 0x160c78: 0x24030003
    ctx->pc = 0x160c78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_160c7c:
    // 0x160c7c: 0xdfbf0000
    ctx->pc = 0x160c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160c80:
    // 0x160c80: 0x60102d
    ctx->pc = 0x160c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c84: 0x3e00008
    ctx->pc = 0x160C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160C88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C60u: goto label_160c60;
            case 0x160C64u: goto label_160c64;
            case 0x160C7Cu: goto label_160c7c;
            case 0x160C80u: goto label_160c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160C8Cu;
    // 0x160c8c: 0x0
    ctx->pc = 0x160c8cu;
    // NOP
}
