#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128F28
// Address: 0x128f28 - 0x128f80
void sub_00128F28_0x128f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128f28u;

    // 0x128f28: 0x3c060021
    ctx->pc = 0x128f28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x128f2c: 0x382d
    ctx->pc = 0x128f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f30: 0x24c3c8c0
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294953152));
    // 0x128f34: 0x80620000
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f38: 0x14400003
    ctx->pc = 0x128F38u;
    {
        const bool branch_taken_0x128f38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128F3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128f38) {
            ctx->pc = 0x128F48u;
            goto label_128f48;
        }
    }
    ctx->pc = 0x128F40u;
    // 0x128f40: 0x1000000d
    ctx->pc = 0x128F40u;
    {
        const bool branch_taken_0x128f40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128F44u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128f40) {
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F48u;
label_128f48:
    // 0x128f48: 0x24a50001
    ctx->pc = 0x128f48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_128f4c:
    // 0x128f4c: 0x51100
    ctx->pc = 0x128f4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x128f50: 0x28a30010
    ctx->pc = 0x128f50u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 16));
    // 0x128f54: 0x10600008
    ctx->pc = 0x128F54u;
    {
        const bool branch_taken_0x128f54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x128F58u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x128f54) {
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F5Cu;
    // 0x128f5c: 0x21080
    ctx->pc = 0x128f5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x128f60: 0x24c3c8c0
    ctx->pc = 0x128f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294953152));
    // 0x128f64: 0x431021
    ctx->pc = 0x128f64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128f68: 0x80440000
    ctx->pc = 0x128f68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128f6c: 0x5480fff7
    ctx->pc = 0x128F6Cu;
    {
        const bool branch_taken_0x128f6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x128f6c) {
            ctx->pc = 0x128F70u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x128F4Cu;
            goto label_128f4c;
        }
    }
    ctx->pc = 0x128F74u;
    // 0x128f74: 0x40382d
    ctx->pc = 0x128f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128f78:
    // 0x128f78: 0x3e00008
    ctx->pc = 0x128F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128F48u: goto label_128f48;
            case 0x128F4Cu: goto label_128f4c;
            case 0x128F78u: goto label_128f78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128F80u;
}
