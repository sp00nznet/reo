#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F1C58
// Address: 0x1f1c58 - 0x1f1c94
void sub_001F1C58_0x1f1c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f1c58u;

    // 0x1f1c58: 0x27bdffe0
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1c5c: 0xffbe0010
    ctx->pc = 0x1f1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f1c60: 0xffbf0018
    ctx->pc = 0x1f1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f1c64: 0x3a0f02d
    ctx->pc = 0x1f1c64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c68: 0xafc40000
    ctx->pc = 0x1f1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f1c6c: 0x8fc40000
    ctx->pc = 0x1f1c6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f1c70: 0xc079f90
    ctx->pc = 0x1F1C70u;
    SET_GPR_U32(ctx, 31, 0x1F1C78u);
    ctx->pc = 0x1E7E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7E40_0x1e7e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C78u; }
    }
    if (ctx->pc != 0x1F1C78u) { return; }
    ctx->pc = 0x1F1C78u;
    // 0x1f1c78: 0x102d
    ctx->pc = 0x1f1c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c7c: 0x3c0e82d
    ctx->pc = 0x1f1c7cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c80: 0xdfbe0010
    ctx->pc = 0x1f1c80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1c84: 0xdfbf0018
    ctx->pc = 0x1f1c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1c88: 0x27bd0020
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f1c8c: 0x3e00008
    ctx->pc = 0x1F1C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1C94u;
}
