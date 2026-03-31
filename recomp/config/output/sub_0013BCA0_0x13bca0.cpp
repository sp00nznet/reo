#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BCA0
// Address: 0x13bca0 - 0x13bcc0
void sub_0013BCA0_0x13bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bca0u;

    // 0x13bca0: 0x27bdfff0
    ctx->pc = 0x13bca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bca4: 0xffbf0000
    ctx->pc = 0x13bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bca8: 0xc04ef0e
    ctx->pc = 0x13BCA8u;
    SET_GPR_U32(ctx, 31, 0x13BCB0u);
    ctx->pc = 0x13BC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BC38_0x13bc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BCB0u; }
    }
    if (ctx->pc != 0x13BCB0u) { return; }
    ctx->pc = 0x13BCB0u;
    // 0x13bcb0: 0xdfbf0000
    ctx->pc = 0x13bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bcb4: 0x2103f
    ctx->pc = 0x13bcb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13bcb8: 0x3e00008
    ctx->pc = 0x13BCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BCC0u;
}
