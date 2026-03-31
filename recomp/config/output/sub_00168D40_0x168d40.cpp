#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168D40
// Address: 0x168d40 - 0x168dc0
void sub_00168D40_0x168d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168d40u;

    // 0x168d40: 0x90a20003
    ctx->pc = 0x168d40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x168d44: 0x90a60002
    ctx->pc = 0x168d44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x168d48: 0x90a70001
    ctx->pc = 0x168d48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x168d4c: 0x26102
    ctx->pc = 0x168d4cu;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 2), 4));
    // 0x168d50: 0x64082
    ctx->pc = 0x168d50u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 6), 2));
    // 0x168d54: 0x64842
    ctx->pc = 0x168d54u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 6), 1));
    // 0x168d58: 0x72842
    ctx->pc = 0x168d58u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 7), 1));
    // 0x168d5c: 0x30e70001
    ctx->pc = 0x168d5cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
    // 0x168d60: 0x250c2
    ctx->pc = 0x168d60u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 3));
    // 0x168d64: 0x25882
    ctx->pc = 0x168d64u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 2), 2));
    // 0x168d68: 0x30cd0001
    ctx->pc = 0x168d68u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 6), 1));
    // 0x168d6c: 0x63102
    ctx->pc = 0x168d6cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 4));
    // 0x168d70: 0x30430003
    ctx->pc = 0x168d70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x168d74: 0x21182
    ctx->pc = 0x168d74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 6));
    // 0x168d78: 0x30a50003
    ctx->pc = 0x168d78u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 3));
    // 0x168d7c: 0x31080003
    ctx->pc = 0x168d7cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 3));
    // 0x168d80: 0x31290001
    ctx->pc = 0x168d80u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 1));
    // 0x168d84: 0x318c0003
    ctx->pc = 0x168d84u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 3));
    // 0x168d88: 0x314a0001
    ctx->pc = 0x168d88u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 1));
    // 0x168d8c: 0x316b0001
    ctx->pc = 0x168d8cu;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 1));
    // 0x168d90: 0xa083000a
    ctx->pc = 0x168d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x168d94: 0xa0850000
    ctx->pc = 0x168d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x168d98: 0xa0870001
    ctx->pc = 0x168d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x168d9c: 0xa0860002
    ctx->pc = 0x168d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x168da0: 0xa0880003
    ctx->pc = 0x168da0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x168da4: 0xa0890004
    ctx->pc = 0x168da4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x168da8: 0xa08d0005
    ctx->pc = 0x168da8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x168dac: 0xa0820006
    ctx->pc = 0x168dacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x168db0: 0xa08c0007
    ctx->pc = 0x168db0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x168db4: 0xa08a0008
    ctx->pc = 0x168db4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x168db8: 0x3e00008
    ctx->pc = 0x168DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DBCu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 11));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168DC0u;
}
