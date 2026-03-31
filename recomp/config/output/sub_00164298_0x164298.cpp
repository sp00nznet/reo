#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164298
// Address: 0x164298 - 0x1642b8
void sub_00164298_0x164298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164298u;

    // 0x164298: 0x27bdfff0
    ctx->pc = 0x164298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16429c: 0xffbf0000
    ctx->pc = 0x16429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1642a0: 0xc05799e
    ctx->pc = 0x1642A0u;
    SET_GPR_U32(ctx, 31, 0x1642A8u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642A8u; }
    }
    if (ctx->pc != 0x1642A8u) { return; }
    ctx->pc = 0x1642A8u;
    // 0x1642a8: 0x8c420054
    ctx->pc = 0x1642a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1642ac: 0xdfbf0000
    ctx->pc = 0x1642acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1642b0: 0x3e00008
    ctx->pc = 0x1642B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1642B8u;
}
