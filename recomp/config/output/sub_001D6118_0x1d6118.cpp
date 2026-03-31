#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6118
// Address: 0x1d6118 - 0x1d6148
void sub_001D6118_0x1d6118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6118u;

    // 0x1d6118: 0x24020038
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d611c: 0x3c050034
    ctx->pc = 0x1d611cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d6120: 0x822018
    ctx->pc = 0x1d6120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d6124: 0x8ca32844
    ctx->pc = 0x1d6124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 10308)));
    // 0x1d6128: 0x102d
    ctx->pc = 0x1d6128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d612c: 0x641821
    ctx->pc = 0x1d612cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6130: 0x24630010
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d6134: 0xac600004
    ctx->pc = 0x1d6134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d6138: 0xac600024
    ctx->pc = 0x1d6138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d613c: 0xac60001c
    ctx->pc = 0x1d613cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1d6140: 0x3e00008
    ctx->pc = 0x1D6140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6144u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6148u;
}
