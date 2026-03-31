#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE790
// Address: 0x1ce790 - 0x1ce800
void sub_001CE790_0x1ce790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce790u;

    // 0x1ce790: 0x308600ff
    ctx->pc = 0x1ce790u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 255));
    // 0x1ce794: 0x3c020034
    ctx->pc = 0x1ce794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1ce798: 0x30a4ffff
    ctx->pc = 0x1ce798u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1ce79c: 0x24421500
    ctx->pc = 0x1ce79cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5376));
    // 0x1ce7a0: 0x1000000e
    ctx->pc = 0x1CE7A0u;
    {
        const bool branch_taken_0x1ce7a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE7A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7a0) {
            ctx->pc = 0x1CE7DCu;
            goto label_1ce7dc;
        }
    }
    ctx->pc = 0x1CE7A8u;
label_1ce7a8:
    // 0x1ce7a8: 0x90430010
    ctx->pc = 0x1ce7a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce7ac: 0x14660009
    ctx->pc = 0x1CE7ACu;
    {
        const bool branch_taken_0x1ce7ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x1ce7ac) {
            ctx->pc = 0x1CE7D4u;
            goto label_1ce7d4;
        }
    }
    ctx->pc = 0x1CE7B4u;
    // 0x1ce7b4: 0x90430000
    ctx->pc = 0x1ce7b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce7b8: 0x10600006
    ctx->pc = 0x1CE7B8u;
    {
        const bool branch_taken_0x1ce7b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7b8) {
            ctx->pc = 0x1CE7D4u;
            goto label_1ce7d4;
        }
    }
    ctx->pc = 0x1CE7C0u;
    // 0x1ce7c0: 0x94430012
    ctx->pc = 0x1ce7c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1ce7c4: 0x14640003
    ctx->pc = 0x1CE7C4u;
    {
        const bool branch_taken_0x1ce7c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ce7c4) {
            ctx->pc = 0x1CE7D4u;
            goto label_1ce7d4;
        }
    }
    ctx->pc = 0x1CE7CCu;
    // 0x1ce7cc: 0x10000007
    ctx->pc = 0x1CE7CCu;
    {
        const bool branch_taken_0x1ce7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7cc) {
            ctx->pc = 0x1CE7ECu;
            goto label_1ce7ec;
        }
    }
    ctx->pc = 0x1CE7D4u;
label_1ce7d4:
    // 0x1ce7d4: 0x24a50001
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ce7d8: 0x24420014
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
label_1ce7dc:
    // 0x1ce7dc: 0x28a30010
    ctx->pc = 0x1ce7dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 16));
    // 0x1ce7e0: 0x1460fff1
    ctx->pc = 0x1CE7E0u;
    {
        const bool branch_taken_0x1ce7e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7e0) {
            ctx->pc = 0x1CE7A8u;
            goto label_1ce7a8;
        }
    }
    ctx->pc = 0x1CE7E8u;
    // 0x1ce7e8: 0x102d
    ctx->pc = 0x1ce7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7ec:
    // 0x1ce7ec: 0x3e00008
    ctx->pc = 0x1CE7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7ECu: goto label_1ce7ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE7F4u;
    // 0x1ce7f4: 0x0
    ctx->pc = 0x1ce7f4u;
    // NOP
    // 0x1ce7f8: 0x0
    ctx->pc = 0x1ce7f8u;
    // NOP
    // 0x1ce7fc: 0x0
    ctx->pc = 0x1ce7fcu;
    // NOP
}
