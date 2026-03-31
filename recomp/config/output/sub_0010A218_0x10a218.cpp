#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A218
// Address: 0x10a218 - 0x10a258
void sub_0010A218_0x10a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a218u;

    // 0x10a218: 0x80102d
    ctx->pc = 0x10a218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a21c: 0x2203c
    ctx->pc = 0x10a21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10a220: 0x4203f
    ctx->pc = 0x10a220u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x10a224: 0x2103f
    ctx->pc = 0x10a224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10a228: 0x3c037fff
    ctx->pc = 0x10a228u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x10a22c: 0x3c067ff0
    ctx->pc = 0x10a22cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32752 << 16));
    // 0x10a230: 0x42823
    ctx->pc = 0x10a230u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x10a234: 0x3463ffff
    ctx->pc = 0x10a234u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x10a238: 0x852025
    ctx->pc = 0x10a238u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10a23c: 0x431024
    ctx->pc = 0x10a23cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a240: 0x427c2
    ctx->pc = 0x10a240u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 31));
    // 0x10a244: 0x441025
    ctx->pc = 0x10a244u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10a248: 0xc21023
    ctx->pc = 0x10a248u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a24c: 0x3e00008
    ctx->pc = 0x10A24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A250u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A254u;
    // 0x10a254: 0x0
    ctx->pc = 0x10a254u;
    // NOP
}
