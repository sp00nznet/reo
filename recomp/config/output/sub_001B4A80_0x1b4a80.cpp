#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4A80
// Address: 0x1b4a80 - 0x1b4ab0
void sub_001B4A80_0x1b4a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4a80u;

    // 0x1b4a80: 0x27bdfff0
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a84: 0xffbf0000
    ctx->pc = 0x1b4a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a88: 0xc067238
    ctx->pc = 0x1B4A88u;
    SET_GPR_U32(ctx, 31, 0x1B4A90u);
    ctx->pc = 0x1B4A8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x19C8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C8E0_0x19c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A90u; }
    }
    if (ctx->pc != 0x1B4A90u) { return; }
    ctx->pc = 0x1B4A90u;
    // 0x1b4a90: 0x3c010032
    ctx->pc = 0x1b4a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4a94: 0xa4224414
    ctx->pc = 0x1b4a94u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17428), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4a98: 0xdfbf0000
    ctx->pc = 0x1b4a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a9c: 0x3e00008
    ctx->pc = 0x1B4A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4AA4u;
    // 0x1b4aa4: 0x0
    ctx->pc = 0x1b4aa4u;
    // NOP
    // 0x1b4aa8: 0x0
    ctx->pc = 0x1b4aa8u;
    // NOP
    // 0x1b4aac: 0x0
    ctx->pc = 0x1b4aacu;
    // NOP
}
