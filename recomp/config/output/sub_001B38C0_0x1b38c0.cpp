#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B38C0
// Address: 0x1b38c0 - 0x1b3920
void sub_001B38C0_0x1b38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b38c0u;

    // 0x1b38c0: 0x3c010032
    ctx->pc = 0x1b38c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b38c4: 0x94234414
    ctx->pc = 0x1b38c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b38c8: 0x10600012
    ctx->pc = 0x1B38C8u;
    {
        const bool branch_taken_0x1b38c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B38CCu;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 24));
        if (branch_taken_0x1b38c8) {
            ctx->pc = 0x1B3914u;
            goto label_1b3914;
        }
    }
    ctx->pc = 0x1B38D0u;
    // 0x1b38d0: 0x308300ff
    ctx->pc = 0x1b38d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x1b38d4: 0x30a50080
    ctx->pc = 0x1b38d4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 128));
    // 0x1b38d8: 0x31842
    ctx->pc = 0x1b38d8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b38dc: 0x52e00
    ctx->pc = 0x1b38dcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b38e0: 0x31c00
    ctx->pc = 0x1b38e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b38e4: 0xa33025
    ctx->pc = 0x1b38e4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b38e8: 0x3c01002c
    ctx->pc = 0x1b38e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b38ec: 0x41a02
    ctx->pc = 0x1b38ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 8));
    // 0x1b38f0: 0x306500ff
    ctx->pc = 0x1b38f0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 255));
    // 0x1b38f4: 0x41c02
    ctx->pc = 0x1b38f4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 16));
    // 0x1b38f8: 0x52042
    ctx->pc = 0x1b38f8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 1));
    // 0x1b38fc: 0x306300ff
    ctx->pc = 0x1b38fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1b3900: 0x42200
    ctx->pc = 0x1b3900u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1b3904: 0x31842
    ctx->pc = 0x1b3904u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b3908: 0x862025
    ctx->pc = 0x1b3908u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b390c: 0x641825
    ctx->pc = 0x1b390cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3910: 0xac23a9f4
    ctx->pc = 0x1b3910u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945268), GPR_U32(ctx, 3));
label_1b3914:
    // 0x1b3914: 0x3e00008
    ctx->pc = 0x1B3914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3914u: goto label_1b3914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B391Cu;
    // 0x1b391c: 0x0
    ctx->pc = 0x1b391cu;
    // NOP
}
