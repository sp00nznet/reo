#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010B7B8
// Address: 0x10b7b8 - 0x10b808
void sub_0010B7B8_0x10b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b7b8u;

    // 0x10b7b8: 0x90830000
    ctx->pc = 0x10b7b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b7bc: 0x52e00
    ctx->pc = 0x10b7bcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x10b7c0: 0x52e03
    ctx->pc = 0x10b7c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x10b7c4: 0x302d
    ctx->pc = 0x10b7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7c8: 0x10600009
    ctx->pc = 0x10B7C8u;
    {
        const bool branch_taken_0x10b7c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B7CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b7c8) {
            ctx->pc = 0x10B7F0u;
            goto label_10b7f0;
        }
    }
    ctx->pc = 0x10B7D0u;
label_10b7d0:
    // 0x10b7d0: 0x21600
    ctx->pc = 0x10b7d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x10b7d4: 0x21603
    ctx->pc = 0x10b7d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10b7d8: 0x451026
    ctx->pc = 0x10b7d8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10b7dc: 0x82300a
    ctx->pc = 0x10b7dcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
    // 0x10b7e0: 0x24840001
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10b7e4: 0x90830000
    ctx->pc = 0x10b7e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b7e8: 0x1460fff9
    ctx->pc = 0x10B7E8u;
    {
        const bool branch_taken_0x10b7e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B7ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b7e8) {
            ctx->pc = 0x10B7D0u;
            goto label_10b7d0;
        }
    }
    ctx->pc = 0x10B7F0u;
label_10b7f0:
    // 0x10b7f0: 0x31e00
    ctx->pc = 0x10b7f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x10b7f4: 0x80102d
    ctx->pc = 0x10b7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7f8: 0x31e03
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x10b7fc: 0x651826
    ctx->pc = 0x10b7fcu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10b800: 0x3e00008
    ctx->pc = 0x10B800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B804u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B7D0u: goto label_10b7d0;
            case 0x10B7F0u: goto label_10b7f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B808u;
}
