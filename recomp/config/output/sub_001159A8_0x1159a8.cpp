#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001159A8
// Address: 0x1159a8 - 0x1159d0
void sub_001159A8_0x1159a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1159a8u;

    // 0x1159a8: 0x3c020026
    ctx->pc = 0x1159a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1159ac: 0x2443aa80
    ctx->pc = 0x1159acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294945408));
    // 0x1159b0: 0xac44aa80
    ctx->pc = 0x1159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945408), GPR_U32(ctx, 4));
    // 0x1159b4: 0x24640010
    ctx->pc = 0x1159b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1159b8: 0x60102d
    ctx->pc = 0x1159b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159bc: 0xac640008
    ctx->pc = 0x1159bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1159c0: 0xac600004
    ctx->pc = 0x1159c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1159c4: 0x3e00008
    ctx->pc = 0x1159C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1159CCu;
    // 0x1159cc: 0x0
    ctx->pc = 0x1159ccu;
    // NOP
}
