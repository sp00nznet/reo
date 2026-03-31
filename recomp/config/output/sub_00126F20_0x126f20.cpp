#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00126F20
// Address: 0x126f20 - 0x126f80
void sub_00126F20_0x126f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126f20u;

    // 0x126f20: 0x28a50010
    ctx->pc = 0x126f20u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 16));
    // 0x126f24: 0x80382d
    ctx->pc = 0x126f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f28: 0x14a00012
    ctx->pc = 0x126F28u;
    {
        const bool branch_taken_0x126f28 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x126F2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x126f28) {
            ctx->pc = 0x126F74u;
            goto label_126f74;
        }
    }
    ctx->pc = 0x126F30u;
    // 0x126f30: 0x94e30000
    ctx->pc = 0x126f30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x126f34: 0x34058001
    ctx->pc = 0x126f34u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
    // 0x126f38: 0x32200
    ctx->pc = 0x126f38u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126f3c: 0x31a02
    ctx->pc = 0x126f3cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x126f40: 0x641825
    ctx->pc = 0x126f40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126f44: 0x3063ffff
    ctx->pc = 0x126f44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x126f48: 0x1465000a
    ctx->pc = 0x126F48u;
    {
        const bool branch_taken_0x126f48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x126F4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x126f48) {
            ctx->pc = 0x126F74u;
            goto label_126f74;
        }
    }
    ctx->pc = 0x126F50u;
    // 0x126f50: 0x94e30002
    ctx->pc = 0x126f50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x126f54: 0x2405ff00
    ctx->pc = 0x126f54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x126f58: 0x90e40003
    ctx->pc = 0x126f58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x126f5c: 0x102d
    ctx->pc = 0x126f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f60: 0x31a00
    ctx->pc = 0x126f60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126f64: 0x651824
    ctx->pc = 0x126f64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126f68: 0x832025
    ctx->pc = 0x126f68u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x126f6c: 0x24840004
    ctx->pc = 0x126f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x126f70: 0xa4c40000
    ctx->pc = 0x126f70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_126f74:
    // 0x126f74: 0x3e00008
    ctx->pc = 0x126F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126F74u: goto label_126f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126F7Cu;
    // 0x126f7c: 0x0
    ctx->pc = 0x126f7cu;
    // NOP
}
