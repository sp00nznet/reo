#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_128760
// Address: 0x128760 - 0x1287a8
void entry_128760_0x1287a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128760u;

    // 0x128760: 0xc0182d
    ctx->pc = 0x128760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128764: 0x302d
    ctx->pc = 0x128764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128768: 0xe0602d
    ctx->pc = 0x128768u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12876c: 0xa0102d
    ctx->pc = 0x12876cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128770: 0x27bdffe0
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128774: 0x100502d
    ctx->pc = 0x128774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128778: 0x120582d
    ctx->pc = 0x128778u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12877c: 0x180482d
    ctx->pc = 0x12877cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128780: 0x282d
    ctx->pc = 0x128780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128784: 0x40382d
    ctx->pc = 0x128784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128788: 0x60402d
    ctx->pc = 0x128788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12878c: 0xffbf0010
    ctx->pc = 0x12878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128790: 0xc04a218
    ctx->pc = 0x128790u;
    SET_GPR_U32(ctx, 31, 0x128798u);
    ctx->pc = 0x128794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x128860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128860_0x128860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128798u; }
    }
    if (ctx->pc != 0x128798u) { return; }
    ctx->pc = 0x128798u;
    // 0x128798: 0xdfbf0010
    ctx->pc = 0x128798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12879c: 0x3e00008
    ctx->pc = 0x12879Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1287A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1287A4u;
    // 0x1287a4: 0x0
    ctx->pc = 0x1287a4u;
    // NOP
}
