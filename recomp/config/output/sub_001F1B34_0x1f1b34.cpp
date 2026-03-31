#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F1B34
// Address: 0x1f1b34 - 0x1f1b84
void sub_001F1B34_0x1f1b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f1b34u;

    // 0x1f1b34: 0x27bdfff0
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1b38: 0xffbe0000
    ctx->pc = 0x1f1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f1b3c: 0x3a0f02d
    ctx->pc = 0x1f1b3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b40: 0x80102d
    ctx->pc = 0x1f1b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b44: 0x94420008
    ctx->pc = 0x1f1b44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f1b48: 0x3c0e82d
    ctx->pc = 0x1f1b48u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b4c: 0xdfbe0000
    ctx->pc = 0x1f1b4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1b50: 0x27bd0010
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1b54: 0x3e00008
    ctx->pc = 0x1F1B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1B5Cu;
    // 0x1f1b5c: 0x27bdfff0
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1b60: 0xffbe0000
    ctx->pc = 0x1f1b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f1b64: 0x3a0f02d
    ctx->pc = 0x1f1b64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b68: 0x80102d
    ctx->pc = 0x1f1b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b6c: 0x8c420004
    ctx->pc = 0x1f1b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1b70: 0x3c0e82d
    ctx->pc = 0x1f1b70u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b74: 0xdfbe0000
    ctx->pc = 0x1f1b74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1b78: 0x27bd0010
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1b7c: 0x3e00008
    ctx->pc = 0x1F1B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1B84u;
}
