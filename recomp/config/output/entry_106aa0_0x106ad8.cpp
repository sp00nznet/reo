#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_106aa0
// Address: 0x106aa0 - 0x106ad8
void entry_106aa0_0x106ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106aa0u;

    // 0x106aa0: 0x3c020023
    ctx->pc = 0x106aa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x106aa4: 0x3e00008
    ctx->pc = 0x106AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106AA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30928));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106AACu;
    // 0x106aac: 0x0
    ctx->pc = 0x106aacu;
    // NOP
    // 0x106ab0: 0x27bdfff0
    ctx->pc = 0x106ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106ab4: 0x3c020021
    ctx->pc = 0x106ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x106ab8: 0xffbf0000
    ctx->pc = 0x106ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106abc: 0xa0302d
    ctx->pc = 0x106abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac0: 0x80282d
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac4: 0x8c4497f0
    ctx->pc = 0x106ac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x106ac8: 0xdfbf0000
    ctx->pc = 0x106ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106acc: 0x8041a84
    ctx->pc = 0x106ACCu;
    ctx->pc = 0x106AD0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x106A10u;
    entry_106a10_0x106aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x106AD4u;
    // 0x106ad4: 0x0
    ctx->pc = 0x106ad4u;
    // NOP
}
