#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164270
// Address: 0x164270 - 0x164298
void sub_00164270_0x164270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164270u;

    // 0x164270: 0x27bdfff0
    ctx->pc = 0x164270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164274: 0xffb00000
    ctx->pc = 0x164274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164278: 0xffbf0008
    ctx->pc = 0x164278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16427c: 0xc05799e
    ctx->pc = 0x16427Cu;
    SET_GPR_U32(ctx, 31, 0x164284u);
    ctx->pc = 0x164280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164284u; }
    }
    if (ctx->pc != 0x164284u) { return; }
    ctx->pc = 0x164284u;
    // 0x164284: 0xac500054
    ctx->pc = 0x164284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 16));
    // 0x164288: 0xdfbf0008
    ctx->pc = 0x164288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16428c: 0xdfb00000
    ctx->pc = 0x16428cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164290: 0x3e00008
    ctx->pc = 0x164290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164294u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164298u;
}
