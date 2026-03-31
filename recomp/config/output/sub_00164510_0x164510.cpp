#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164510
// Address: 0x164510 - 0x164540
void sub_00164510_0x164510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164510u;

    // 0x164510: 0x27bdfff0
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164514: 0xffbf0000
    ctx->pc = 0x164514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164518: 0xc04c16e
    ctx->pc = 0x164518u;
    SET_GPR_U32(ctx, 31, 0x164520u);
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164520u; }
    }
    if (ctx->pc != 0x164520u) { return; }
    ctx->pc = 0x164520u;
    // 0x164520: 0x38420004
    ctx->pc = 0x164520u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
    // 0x164524: 0xdfbf0000
    ctx->pc = 0x164524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164528: 0x2c420001
    ctx->pc = 0x164528u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x16452c: 0x3e00008
    ctx->pc = 0x16452Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164534u;
    // 0x164534: 0x0
    ctx->pc = 0x164534u;
    // NOP
    // 0x164538: 0x3e00008
    ctx->pc = 0x164538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164540u;
}
