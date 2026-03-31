#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167DD0
// Address: 0x167dd0 - 0x167df0
void sub_00167DD0_0x167dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167dd0u;

    // 0x167dd0: 0x27bdfff0
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167dd4: 0xffbf0000
    ctx->pc = 0x167dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167dd8: 0xc05d58a
    ctx->pc = 0x167DD8u;
    SET_GPR_U32(ctx, 31, 0x167DE0u);
    ctx->pc = 0x167DDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DE0u; }
    }
    if (ctx->pc != 0x167DE0u) { return; }
    ctx->pc = 0x167DE0u;
    // 0x167de0: 0xdfbf0000
    ctx->pc = 0x167de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167de4: 0x2102b
    ctx->pc = 0x167de4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x167de8: 0x3e00008
    ctx->pc = 0x167DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167DECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167DF0u;
}
