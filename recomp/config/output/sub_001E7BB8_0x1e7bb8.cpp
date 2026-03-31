#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E7BB8
// Address: 0x1e7bb8 - 0x1e7c00
void sub_001E7BB8_0x1e7bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e7bb8u;

    // 0x1e7bb8: 0x27bdffe0
    ctx->pc = 0x1e7bb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7bbc: 0xffbe0010
    ctx->pc = 0x1e7bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e7bc0: 0x3a0f02d
    ctx->pc = 0x1e7bc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bc4: 0x3c020035
    ctx->pc = 0x1e7bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1e7bc8: 0x24428ca0
    ctx->pc = 0x1e7bc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937760));
    // 0x1e7bcc: 0xafc20000
    ctx->pc = 0x1e7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1e7bd0: 0x8fc30000
    ctx->pc = 0x1e7bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7bd4: 0x3402cb18
    ctx->pc = 0x1e7bd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 51992));
    // 0x1e7bd8: 0xac620004
    ctx->pc = 0x1e7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e7bdc: 0x8fc30000
    ctx->pc = 0x1e7bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7be0: 0x3c02fafa
    ctx->pc = 0x1e7be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64250 << 16));
    // 0x1e7be4: 0x3442fafa
    ctx->pc = 0x1e7be4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64250));
    // 0x1e7be8: 0xac620000
    ctx->pc = 0x1e7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7bec: 0x3c0e82d
    ctx->pc = 0x1e7becu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bf0: 0xdfbe0010
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7bf4: 0x27bd0020
    ctx->pc = 0x1e7bf4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e7bf8: 0x3e00008
    ctx->pc = 0x1E7BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7C00u;
}
