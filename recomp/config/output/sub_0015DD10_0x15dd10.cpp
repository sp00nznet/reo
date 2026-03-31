#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DD10
// Address: 0x15dd10 - 0x15dd50
void sub_0015DD10_0x15dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15dd10u;

    // 0x15dd10: 0x24020002
    ctx->pc = 0x15dd10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15dd14: 0x2c850003
    ctx->pc = 0x15dd14u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x15dd18: 0x1082000a
    ctx->pc = 0x15DD18u;
    {
        const bool branch_taken_0x15dd18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15DD1Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15dd18) {
            ctx->pc = 0x15DD44u;
            goto label_15dd44;
        }
    }
    ctx->pc = 0x15DD20u;
    // 0x15dd20: 0x50a00005
    ctx->pc = 0x15DD20u;
    {
        const bool branch_taken_0x15dd20 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x15dd20) {
            ctx->pc = 0x15DD24u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15DD38u;
            goto label_15dd38;
        }
    }
    ctx->pc = 0x15DD28u;
    // 0x15dd28: 0x24020001
    ctx->pc = 0x15dd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dd2c: 0x10000003
    ctx->pc = 0x15DD2Cu;
    {
        const bool branch_taken_0x15dd2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DD30u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15dd2c) {
            ctx->pc = 0x15DD3Cu;
            goto label_15dd3c;
        }
    }
    ctx->pc = 0x15DD34u;
    // 0x15dd34: 0x0
    ctx->pc = 0x15dd34u;
    // NOP
label_15dd38:
    // 0x15dd38: 0x24030003
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_15dd3c:
    // 0x15dd3c: 0x54820001
    ctx->pc = 0x15DD3Cu;
    {
        const bool branch_taken_0x15dd3c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x15dd3c) {
            ctx->pc = 0x15DD40u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15DD44u;
            goto label_15dd44;
        }
    }
    ctx->pc = 0x15DD44u;
label_15dd44:
    // 0x15dd44: 0x3e00008
    ctx->pc = 0x15DD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DD38u: goto label_15dd38;
            case 0x15DD3Cu: goto label_15dd3c;
            case 0x15DD44u: goto label_15dd44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DD4Cu;
    // 0x15dd4c: 0x0
    ctx->pc = 0x15dd4cu;
    // NOP
}
