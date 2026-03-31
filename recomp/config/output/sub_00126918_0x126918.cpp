#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00126918
// Address: 0x126918 - 0x126990
void sub_00126918_0x126918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126918u;

    // 0x126918: 0x28a50014
    ctx->pc = 0x126918u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 20));
    // 0x12691c: 0x80402d
    ctx->pc = 0x12691cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126920: 0x14a00019
    ctx->pc = 0x126920u;
    {
        const bool branch_taken_0x126920 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x126924u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x126920) {
            ctx->pc = 0x126988u;
            goto label_126988;
        }
    }
    ctx->pc = 0x126928u;
    // 0x126928: 0x95030000
    ctx->pc = 0x126928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12692c: 0x34058000
    ctx->pc = 0x12692cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x126930: 0x32200
    ctx->pc = 0x126930u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126934: 0x31a02
    ctx->pc = 0x126934u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x126938: 0x641825
    ctx->pc = 0x126938u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12693c: 0x3063ffff
    ctx->pc = 0x12693cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x126940: 0x14650011
    ctx->pc = 0x126940u;
    {
        const bool branch_taken_0x126940 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x126944u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x126940) {
            ctx->pc = 0x126988u;
            goto label_126988;
        }
    }
    ctx->pc = 0x126948u;
    // 0x126948: 0x95030002
    ctx->pc = 0x126948u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x12694c: 0x2405ff00
    ctx->pc = 0x12694cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x126950: 0x91040003
    ctx->pc = 0x126950u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x126954: 0x31a00
    ctx->pc = 0x126954u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126958: 0x651824
    ctx->pc = 0x126958u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12695c: 0x832025
    ctx->pc = 0x12695cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x126960: 0x42400
    ctx->pc = 0x126960u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x126964: 0x42403
    ctx->pc = 0x126964u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x126968: 0x28840010
    ctx->pc = 0x126968u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), 16));
    // 0x12696c: 0x14800006
    ctx->pc = 0x12696Cu;
    {
        const bool branch_taken_0x12696c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x126970u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x12696c) {
            ctx->pc = 0x126988u;
            goto label_126988;
        }
    }
    ctx->pc = 0x126974u;
    // 0x126974: 0x91040012
    ctx->pc = 0x126974u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x126978: 0x102d
    ctx->pc = 0x126978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12697c: 0xa0c40000
    ctx->pc = 0x12697cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126980: 0x91030013
    ctx->pc = 0x126980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x126984: 0xa0e30000
    ctx->pc = 0x126984u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_126988:
    // 0x126988: 0x3e00008
    ctx->pc = 0x126988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126988u: goto label_126988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126990u;
}
