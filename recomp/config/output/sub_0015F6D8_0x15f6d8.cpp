#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F6D8
// Address: 0x15f6d8 - 0x15f718
void sub_0015F6D8_0x15f6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f6d8u;

    // 0x15f6d8: 0x27bdfff0
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f6dc: 0xffb00000
    ctx->pc = 0x15f6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f6e0: 0xffbf0008
    ctx->pc = 0x15f6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15f6e4: 0xc057d98
    ctx->pc = 0x15F6E4u;
    SET_GPR_U32(ctx, 31, 0x15F6ECu);
    ctx->pc = 0x15F6E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F660_0x15f660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6ECu; }
    }
    if (ctx->pc != 0x15F6ECu) { return; }
    ctx->pc = 0x15F6ECu;
    // 0x15f6ec: 0x3c02000f
    ctx->pc = 0x15f6ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x15f6f0: 0x24030001
    ctx->pc = 0x15f6f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f6f4: 0x3442ffff
    ctx->pc = 0x15f6f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x15f6f8: 0xae030118
    ctx->pc = 0x15f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
    // 0x15f6fc: 0xae020124
    ctx->pc = 0x15f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x15f700: 0xae00011c
    ctx->pc = 0x15f700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x15f704: 0xae000120
    ctx->pc = 0x15f704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x15f708: 0xdfbf0008
    ctx->pc = 0x15f708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f70c: 0xdfb00000
    ctx->pc = 0x15f70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f710: 0x3e00008
    ctx->pc = 0x15F710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F714u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F718u;
}
