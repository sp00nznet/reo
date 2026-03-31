#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_128828
// Address: 0x128828 - 0x128860
void entry_128828_0x128860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128828u;

    // 0x128828: 0xe0102d
    ctx->pc = 0x128828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12882c: 0x382d
    ctx->pc = 0x12882cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128830: 0x27bdffe0
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128834: 0x100502d
    ctx->pc = 0x128834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128838: 0x120582d
    ctx->pc = 0x128838u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12883c: 0x40482d
    ctx->pc = 0x12883cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128840: 0x402d
    ctx->pc = 0x128840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128844: 0x24020001
    ctx->pc = 0x128844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128848: 0xffbf0010
    ctx->pc = 0x128848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12884c: 0xc04a218
    ctx->pc = 0x12884Cu;
    SET_GPR_U32(ctx, 31, 0x128854u);
    ctx->pc = 0x128850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x128860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128860_0x128860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128854u; }
    }
    if (ctx->pc != 0x128854u) { return; }
    ctx->pc = 0x128854u;
    // 0x128854: 0xdfbf0010
    ctx->pc = 0x128854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128858: 0x3e00008
    ctx->pc = 0x128858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12885Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128860u;
}
