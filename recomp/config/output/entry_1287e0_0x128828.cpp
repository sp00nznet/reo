#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1287e0
// Address: 0x1287e0 - 0x128828
void entry_1287e0_0x128828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1287e0u;

    // 0x1287e0: 0xc0182d
    ctx->pc = 0x1287e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287e4: 0x302d
    ctx->pc = 0x1287e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287e8: 0xe0602d
    ctx->pc = 0x1287e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287ec: 0xa0102d
    ctx->pc = 0x1287ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287f0: 0x27bdffe0
    ctx->pc = 0x1287f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1287f4: 0x40382d
    ctx->pc = 0x1287f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287f8: 0x100502d
    ctx->pc = 0x1287f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287fc: 0x60402d
    ctx->pc = 0x1287fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128800: 0x120582d
    ctx->pc = 0x128800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128804: 0x180482d
    ctx->pc = 0x128804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128808: 0x282d
    ctx->pc = 0x128808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12880c: 0x24020001
    ctx->pc = 0x12880cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128810: 0xffbf0010
    ctx->pc = 0x128810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128814: 0xc04a218
    ctx->pc = 0x128814u;
    SET_GPR_U32(ctx, 31, 0x12881Cu);
    ctx->pc = 0x128818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x128860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128860_0x128860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12881Cu; }
    }
    if (ctx->pc != 0x12881Cu) { return; }
    ctx->pc = 0x12881Cu;
    // 0x12881c: 0xdfbf0010
    ctx->pc = 0x12881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128820: 0x3e00008
    ctx->pc = 0x128820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128828u;
}
