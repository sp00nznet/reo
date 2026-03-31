#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5480
// Address: 0x1c5480 - 0x1c54e0
void sub_001C5480_0x1c5480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5480u;

    // 0x1c5480: 0x27bdffe0
    ctx->pc = 0x1c5480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5484: 0x24060010
    ctx->pc = 0x1c5484u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c5488: 0xffbf0010
    ctx->pc = 0x1c5488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c548c: 0x7fb00000
    ctx->pc = 0x1c548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5490: 0x80802d
    ctx->pc = 0x1c5490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5494: 0x3c040032
    ctx->pc = 0x1c5494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c5498: 0x26050008
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c549c: 0xc041eac
    ctx->pc = 0x1C549Cu;
    SET_GPR_U32(ctx, 31, 0x1C54A4u);
    ctx->pc = 0x1C54A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16800));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54A4u; }
    }
    if (ctx->pc != 0x1C54A4u) { return; }
    ctx->pc = 0x1C54A4u;
    // 0x1c54a4: 0xc06eb7c
    ctx->pc = 0x1C54A4u;
    SET_GPR_U32(ctx, 31, 0x1C54ACu);
    ctx->pc = 0x1BADF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BADF0_0x1badf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54ACu; }
    }
    if (ctx->pc != 0x1C54ACu) { return; }
    ctx->pc = 0x1C54ACu;
    // 0x1c54ac: 0x82030018
    ctx->pc = 0x1c54acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c54b0: 0x3c010032
    ctx->pc = 0x1c54b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c54b4: 0xa0234476
    ctx->pc = 0x1c54b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c54b8: 0x82030019
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1c54bc: 0x3c010032
    ctx->pc = 0x1c54bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c54c0: 0xa0234488
    ctx->pc = 0x1c54c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17544), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c54c4: 0x8203001b
    ctx->pc = 0x1c54c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x1c54c8: 0x3c010032
    ctx->pc = 0x1c54c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c54cc: 0xa023448d
    ctx->pc = 0x1c54ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17549), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c54d0: 0xdfbf0010
    ctx->pc = 0x1c54d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c54d4: 0x7bb00000
    ctx->pc = 0x1c54d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c54d8: 0x3e00008
    ctx->pc = 0x1C54D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C54DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C54E0u;
}
