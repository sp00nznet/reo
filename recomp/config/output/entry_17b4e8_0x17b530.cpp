#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17b4e8
// Address: 0x17b4e8 - 0x17b530
void entry_17b4e8_0x17b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b4e8u;

    // 0x17b4e8: 0x27bdffb0
    ctx->pc = 0x17b4e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b4ec: 0xa0102d
    ctx->pc = 0x17b4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4f0: 0xffbf0040
    ctx->pc = 0x17b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17b4f4: 0x3a0202d
    ctx->pc = 0x17b4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4f8: 0x27a50020
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b4fc: 0x8c480048
    ctx->pc = 0x17b4fcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17b500: 0x8c470044
    ctx->pc = 0x17b500u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17b504: 0x8c430004
    ctx->pc = 0x17b504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17b508: 0xafa70024
    ctx->pc = 0x17b508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x17b50c: 0xafa60020
    ctx->pc = 0x17b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x17b510: 0xafa30000
    ctx->pc = 0x17b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b514: 0xafa80028
    ctx->pc = 0x17b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x17b518: 0xafa70004
    ctx->pc = 0x17b518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17b51c: 0xc053fd4
    ctx->pc = 0x17B51Cu;
    SET_GPR_U32(ctx, 31, 0x17B524u);
    ctx->pc = 0x17B520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->pc = 0x14FF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014FF50_0x14ff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B524u; }
    }
    if (ctx->pc != 0x17B524u) { return; }
    ctx->pc = 0x17B524u;
    // 0x17b524: 0xdfbf0040
    ctx->pc = 0x17b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b528: 0x3e00008
    ctx->pc = 0x17B528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B52Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B530u;
}
