#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189970
// Address: 0x189970 - 0x1899f0
void sub_00189970_0x189970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189970u;

    // 0x189970: 0x24e2ffff
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x189974: 0xac850000
    ctx->pc = 0x189974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x189978: 0x401827
    ctx->pc = 0x189978u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x18997c: 0xac870014
    ctx->pc = 0x18997cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x189980: 0xc71021
    ctx->pc = 0x189980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x189984: 0x8c850000
    ctx->pc = 0x189984u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189988: 0x8c870014
    ctx->pc = 0x189988u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18998c: 0x2442ffff
    ctx->pc = 0x18998cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189990: 0x623024
    ctx->pc = 0x189990u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189994: 0x24020001
    ctx->pc = 0x189994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189998: 0x24e3ffff
    ctx->pc = 0x189998u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18999c: 0xa72821
    ctx->pc = 0x18999cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1899a0: 0x601827
    ctx->pc = 0x1899a0u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1899a4: 0x24a5ffff
    ctx->pc = 0x1899a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1899a8: 0x651824
    ctx->pc = 0x1899a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1899ac: 0xac830004
    ctx->pc = 0x1899acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1899b0: 0x8c850000
    ctx->pc = 0x1899b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1899b4: 0x8c870014
    ctx->pc = 0x1899b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1899b8: 0xa62821
    ctx->pc = 0x1899b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1899bc: 0x24e3ffff
    ctx->pc = 0x1899bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1899c0: 0xe52821
    ctx->pc = 0x1899c0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1899c4: 0x601827
    ctx->pc = 0x1899c4u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1899c8: 0x24a5ffff
    ctx->pc = 0x1899c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1899cc: 0x651824
    ctx->pc = 0x1899ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1899d0: 0xac830008
    ctx->pc = 0x1899d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1899d4: 0x8c830004
    ctx->pc = 0x1899d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1899d8: 0xac83000c
    ctx->pc = 0x1899d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1899dc: 0x8c830008
    ctx->pc = 0x1899dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1899e0: 0x3e00008
    ctx->pc = 0x1899E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1899E4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1899E8u;
    // 0x1899e8: 0x0
    ctx->pc = 0x1899e8u;
    // NOP
    // 0x1899ec: 0x0
    ctx->pc = 0x1899ecu;
    // NOP
}
