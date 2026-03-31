#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B2E0
// Address: 0x15b2e0 - 0x15b328
void sub_0015B2E0_0x15b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b2e0u;

    // 0x15b2e0: 0x3c020026
    ctx->pc = 0x15b2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x15b2e4: 0x24424c70
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19568));
    // 0x15b2e8: 0x8c440054
    ctx->pc = 0x15b2e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15b2ec: 0x1880000b
    ctx->pc = 0x15B2ECu;
    {
        const bool branch_taken_0x15b2ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x15B2F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
        if (branch_taken_0x15b2ec) {
            ctx->pc = 0x15B31Cu;
            goto label_15b31c;
        }
    }
    ctx->pc = 0x15B2F4u;
    // 0x15b2f4: 0x80102d
    ctx->pc = 0x15b2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2f8: 0x24040001
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b2fc: 0x0
    ctx->pc = 0x15b2fcu;
    // NOP
label_15b300:
    // 0x15b300: 0x2442ffff
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15b304: 0xac640188
    ctx->pc = 0x15b304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 4));
    // 0x15b308: 0x0
    ctx->pc = 0x15b308u;
    // NOP
    // 0x15b30c: 0x0
    ctx->pc = 0x15b30cu;
    // NOP
    // 0x15b310: 0x0
    ctx->pc = 0x15b310u;
    // NOP
    // 0x15b314: 0x1440fffa
    ctx->pc = 0x15B314u;
    {
        const bool branch_taken_0x15b314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15B318u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 992));
        if (branch_taken_0x15b314) {
            ctx->pc = 0x15B300u;
            goto label_15b300;
        }
    }
    ctx->pc = 0x15B31Cu;
label_15b31c:
    // 0x15b31c: 0x3e00008
    ctx->pc = 0x15B31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B300u: goto label_15b300;
            case 0x15B31Cu: goto label_15b31c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B324u;
    // 0x15b324: 0x0
    ctx->pc = 0x15b324u;
    // NOP
}
