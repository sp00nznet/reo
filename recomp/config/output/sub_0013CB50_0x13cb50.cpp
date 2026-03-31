#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CB50
// Address: 0x13cb50 - 0x13cbb0
void sub_0013CB50_0x13cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13cb50u;

    // 0x13cb50: 0x3c060022
    ctx->pc = 0x13cb50u;
    SET_GPR_U32(ctx, 6, ((uint32_t)34 << 16));
    // 0x13cb54: 0x382d
    ctx->pc = 0x13cb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb58: 0x24c3e110
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294959376));
    // 0x13cb5c: 0x80620000
    ctx->pc = 0x13cb5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cb60: 0x14400003
    ctx->pc = 0x13CB60u;
    {
        const bool branch_taken_0x13cb60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CB64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13cb60) {
            ctx->pc = 0x13CB70u;
            goto label_13cb70;
        }
    }
    ctx->pc = 0x13CB68u;
    // 0x13cb68: 0x1000000f
    ctx->pc = 0x13CB68u;
    {
        const bool branch_taken_0x13cb68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CB6Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13cb68) {
            ctx->pc = 0x13CBA8u;
            goto label_13cba8;
        }
    }
    ctx->pc = 0x13CB70u;
label_13cb70:
    // 0x13cb70: 0x24a50001
    ctx->pc = 0x13cb70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_13cb74:
    // 0x13cb74: 0x510c0
    ctx->pc = 0x13cb74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x13cb78: 0x28a30010
    ctx->pc = 0x13cb78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 16));
    // 0x13cb7c: 0x1060000a
    ctx->pc = 0x13CB7Cu;
    {
        const bool branch_taken_0x13cb7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CB80u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x13cb7c) {
            ctx->pc = 0x13CBA8u;
            goto label_13cba8;
        }
    }
    ctx->pc = 0x13CB84u;
    // 0x13cb84: 0x210c0
    ctx->pc = 0x13cb84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x13cb88: 0x24c4e110
    ctx->pc = 0x13cb88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294959376));
    // 0x13cb8c: 0x451023
    ctx->pc = 0x13cb8cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13cb90: 0x210c0
    ctx->pc = 0x13cb90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x13cb94: 0x441021
    ctx->pc = 0x13cb94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13cb98: 0x80430000
    ctx->pc = 0x13cb98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cb9c: 0x5460fff5
    ctx->pc = 0x13CB9Cu;
    {
        const bool branch_taken_0x13cb9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13cb9c) {
            ctx->pc = 0x13CBA0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x13CB74u;
            goto label_13cb74;
        }
    }
    ctx->pc = 0x13CBA4u;
    // 0x13cba4: 0x40382d
    ctx->pc = 0x13cba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cba8:
    // 0x13cba8: 0x3e00008
    ctx->pc = 0x13CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CBACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CB70u: goto label_13cb70;
            case 0x13CB74u: goto label_13cb74;
            case 0x13CBA8u: goto label_13cba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CBB0u;
}
