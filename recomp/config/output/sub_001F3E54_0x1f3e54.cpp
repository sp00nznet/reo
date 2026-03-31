#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F3E54
// Address: 0x1f3e54 - 0x1f3e90
void sub_001F3E54_0x1f3e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f3e54u;

    // 0x1f3e54: 0x27bdffe0
    ctx->pc = 0x1f3e54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3e58: 0xffbe0010
    ctx->pc = 0x1f3e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f3e5c: 0xffbf0018
    ctx->pc = 0x1f3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f3e60: 0x3a0f02d
    ctx->pc = 0x1f3e60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e64: 0xafc40000
    ctx->pc = 0x1f3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f3e68: 0x8fc40000
    ctx->pc = 0x1f3e68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3e6c: 0xc079f90
    ctx->pc = 0x1F3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E74u);
    ctx->pc = 0x1E7E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7E40_0x1e7e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E74u; }
    }
    if (ctx->pc != 0x1F3E74u) { return; }
    ctx->pc = 0x1F3E74u;
    // 0x1f3e74: 0x102d
    ctx->pc = 0x1f3e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e78: 0x3c0e82d
    ctx->pc = 0x1f3e78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e7c: 0xdfbe0010
    ctx->pc = 0x1f3e7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3e80: 0xdfbf0018
    ctx->pc = 0x1f3e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3e84: 0x27bd0020
    ctx->pc = 0x1f3e84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3e88: 0x3e00008
    ctx->pc = 0x1F3E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3E90u;
}
