#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F09F0
// Address: 0x1f09f0 - 0x1f0a3c
void sub_001F09F0_0x1f09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f09f0u;

    // 0x1f09f0: 0x27bdffe0
    ctx->pc = 0x1f09f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f09f4: 0xffbe0010
    ctx->pc = 0x1f09f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f09f8: 0xffbf0018
    ctx->pc = 0x1f09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f09fc: 0x3a0f02d
    ctx->pc = 0x1f09fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a00: 0xafc40000
    ctx->pc = 0x1f0a00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f0a04: 0xa7c00004
    ctx->pc = 0x1f0a04u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f0a08: 0x27c20004
    ctx->pc = 0x1f0a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
    // 0x1f0a0c: 0x8fc40000
    ctx->pc = 0x1f0a0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f0a10: 0x40282d
    ctx->pc = 0x1f0a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a14: 0x24060002
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0a18: 0xc041eac
    ctx->pc = 0x1F0A18u;
    SET_GPR_U32(ctx, 31, 0x1F0A20u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A20u; }
    }
    if (ctx->pc != 0x1F0A20u) { return; }
    ctx->pc = 0x1F0A20u;
    // 0x1f0a20: 0x102d
    ctx->pc = 0x1f0a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a24: 0x3c0e82d
    ctx->pc = 0x1f0a24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a28: 0xdfbe0010
    ctx->pc = 0x1f0a28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0a2c: 0xdfbf0018
    ctx->pc = 0x1f0a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0a30: 0x27bd0020
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f0a34: 0x3e00008
    ctx->pc = 0x1F0A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0A3Cu;
}
