#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001585B8
// Address: 0x1585b8 - 0x158650
void sub_001585B8_0x1585b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1585b8u;

    // 0x1585b8: 0x90870000
    ctx->pc = 0x1585b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1585bc: 0x24060100
    ctx->pc = 0x1585bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1585c0: 0x90820001
    ctx->pc = 0x1585c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1585c4: 0x73a00
    ctx->pc = 0x1585c4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1585c8: 0x90830002
    ctx->pc = 0x1585c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1585cc: 0xe23825
    ctx->pc = 0x1585ccu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1585d0: 0x90850003
    ctx->pc = 0x1585d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1585d4: 0x73a00
    ctx->pc = 0x1585d4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1585d8: 0xe33825
    ctx->pc = 0x1585d8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1585dc: 0x73a00
    ctx->pc = 0x1585dcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1585e0: 0xe53825
    ctx->pc = 0x1585e0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1585e4: 0x10e60017
    ctx->pc = 0x1585E4u;
    {
        const bool branch_taken_0x1585e4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 6));
        ctx->pc = 0x1585E8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1585e4) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x1585ECu;
    // 0x1585ec: 0x24020101
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x1585f0: 0x10e20014
    ctx->pc = 0x1585F0u;
    {
        const bool branch_taken_0x1585f0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x1585F4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1585f0) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x1585F8u;
    // 0x1585f8: 0x24e2fefe
    ctx->pc = 0x1585f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967038));
    // 0x1585fc: 0x2c4200ae
    ctx->pc = 0x1585fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 174));
    // 0x158600: 0x14400010
    ctx->pc = 0x158600u;
    {
        const bool branch_taken_0x158600 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x158604u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x158600) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x158608u;
    // 0x158608: 0x240201b2
    ctx->pc = 0x158608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 434));
    // 0x15860c: 0x10e2000d
    ctx->pc = 0x15860Cu;
    {
        const bool branch_taken_0x15860c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x158610u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x15860c) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x158614u;
    // 0x158614: 0x240201b3
    ctx->pc = 0x158614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 435));
    // 0x158618: 0x10e2000a
    ctx->pc = 0x158618u;
    {
        const bool branch_taken_0x158618 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x15861Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x158618) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x158620u;
    // 0x158620: 0x240201b5
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 437));
    // 0x158624: 0x10e20007
    ctx->pc = 0x158624u;
    {
        const bool branch_taken_0x158624 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x158628u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x158624) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x15862Cu;
    // 0x15862c: 0x240201b7
    ctx->pc = 0x15862cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 439));
    // 0x158630: 0x10e20004
    ctx->pc = 0x158630u;
    {
        const bool branch_taken_0x158630 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x158634u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x158630) {
            ctx->pc = 0x158644u;
            goto label_158644;
        }
    }
    ctx->pc = 0x158638u;
    // 0x158638: 0x38e201b8
    ctx->pc = 0x158638u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 440));
    // 0x15863c: 0x24080008
    ctx->pc = 0x15863cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x158640: 0x2400b
    ctx->pc = 0x158640u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 0));
label_158644:
    // 0x158644: 0x3e00008
    ctx->pc = 0x158644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158648u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158644u: goto label_158644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15864Cu;
    // 0x15864c: 0x0
    ctx->pc = 0x15864cu;
    // NOP
}
