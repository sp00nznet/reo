#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1BC0
// Address: 0x1b1bc0 - 0x1b1c10
void sub_001B1BC0_0x1b1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1bc0u;

    // 0x1b1bc0: 0x27bdffe0
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1bc4: 0x282d
    ctx->pc = 0x1b1bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bc8: 0xffbf0010
    ctx->pc = 0x1b1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1bcc: 0x240607d0
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2000));
    // 0x1b1bd0: 0x7fb00000
    ctx->pc = 0x1b1bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1bd4: 0x80802d
    ctx->pc = 0x1b1bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bd8: 0xc06c6d0
    ctx->pc = 0x1B1BD8u;
    SET_GPR_U32(ctx, 31, 0x1B1BE0u);
    ctx->pc = 0x1B1BDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1B1B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B40_0x1b1b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BE0u; }
    }
    if (ctx->pc != 0x1B1BE0u) { return; }
    ctx->pc = 0x1B1BE0u;
    // 0x1b1be0: 0x26040fa4
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4004));
    // 0x1b1be4: 0x282d
    ctx->pc = 0x1b1be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1be8: 0xc041f1a
    ctx->pc = 0x1B1BE8u;
    SET_GPR_U32(ctx, 31, 0x1B1BF0u);
    ctx->pc = 0x1B1BECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4000));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BF0u; }
    }
    if (ctx->pc != 0x1B1BF0u) { return; }
    ctx->pc = 0x1B1BF0u;
    // 0x1b1bf0: 0xa2000001
    ctx->pc = 0x1b1bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1bf4: 0xa2000000
    ctx->pc = 0x1b1bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1bf8: 0xdfbf0010
    ctx->pc = 0x1b1bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1bfc: 0x7bb00000
    ctx->pc = 0x1b1bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1c00: 0x3e00008
    ctx->pc = 0x1B1C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1C08u;
    // 0x1b1c08: 0x0
    ctx->pc = 0x1b1c08u;
    // NOP
    // 0x1b1c0c: 0x0
    ctx->pc = 0x1b1c0cu;
    // NOP
}
