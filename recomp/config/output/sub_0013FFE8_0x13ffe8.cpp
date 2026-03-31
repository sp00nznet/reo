#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013FFE8
// Address: 0x13ffe8 - 0x140020
void sub_0013FFE8_0x13ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ffe8u;

    // 0x13ffe8: 0x52840
    ctx->pc = 0x13ffe8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x13ffec: 0xa62821
    ctx->pc = 0x13ffecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fff0: 0x52880
    ctx->pc = 0x13fff0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x13fff4: 0xa42821
    ctx->pc = 0x13fff4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13fff8: 0x3e00008
    ctx->pc = 0x13FFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FFFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140000u;
    // 0x140000: 0x27bdfff0
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140004: 0x3c040024
    ctx->pc = 0x140004u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x140008: 0xffbf0000
    ctx->pc = 0x140008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14000c: 0x2484da88
    ctx->pc = 0x14000cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957704));
    // 0x140010: 0xdfbf0000
    ctx->pc = 0x140010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140014: 0x804fca2
    ctx->pc = 0x140014u;
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F288u;
    entry_13f288_0x13f2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x14001Cu;
    // 0x14001c: 0x0
    ctx->pc = 0x14001cu;
    // NOP
}
