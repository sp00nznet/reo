#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1287a8
// Address: 0x1287a8 - 0x1287e0
void entry_1287a8_0x1287e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1287a8u;

    // 0x1287a8: 0xe0102d
    ctx->pc = 0x1287a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287ac: 0x382d
    ctx->pc = 0x1287acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287b0: 0x27bdffe0
    ctx->pc = 0x1287b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1287b4: 0x100502d
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287b8: 0x120582d
    ctx->pc = 0x1287b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287bc: 0x40482d
    ctx->pc = 0x1287bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287c0: 0x402d
    ctx->pc = 0x1287c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287c4: 0xffbf0010
    ctx->pc = 0x1287c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1287c8: 0xc04a218
    ctx->pc = 0x1287C8u;
    SET_GPR_U32(ctx, 31, 0x1287D0u);
    ctx->pc = 0x1287CCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x128860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128860_0x128860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287D0u; }
    }
    if (ctx->pc != 0x1287D0u) { return; }
    ctx->pc = 0x1287D0u;
    // 0x1287d0: 0xdfbf0010
    ctx->pc = 0x1287d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1287d4: 0x3e00008
    ctx->pc = 0x1287D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1287D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1287DCu;
    // 0x1287dc: 0x0
    ctx->pc = 0x1287dcu;
    // NOP
}
