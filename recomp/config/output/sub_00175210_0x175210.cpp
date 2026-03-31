#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175210
// Address: 0x175210 - 0x175258
void sub_00175210_0x175210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175210u;

    // 0x175210: 0x24851aa0
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 6816));
    // 0x175214: 0x2406ffff
    ctx->pc = 0x175214u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175218: 0x8ca30014
    ctx->pc = 0x175218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x17521c: 0x310c0
    ctx->pc = 0x17521cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x175220: 0x431023
    ctx->pc = 0x175220u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175224: 0x21080
    ctx->pc = 0x175224u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x175228: 0x431021
    ctx->pc = 0x175228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17522c: 0x21080
    ctx->pc = 0x17522cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x175230: 0x822021
    ctx->pc = 0x175230u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x175234: 0x8c831190
    ctx->pc = 0x175234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4496)));
    // 0x175238: 0x31100
    ctx->pc = 0x175238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x17523c: 0x431021
    ctx->pc = 0x17523cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175240: 0x21080
    ctx->pc = 0x175240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x175244: 0xa22821
    ctx->pc = 0x175244u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175248: 0x8ca20020
    ctx->pc = 0x175248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17524c: 0x28430000
    ctx->pc = 0x17524cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x175250: 0x3e00008
    ctx->pc = 0x175250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175254u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175258u;
}
