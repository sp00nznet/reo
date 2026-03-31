#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114CE0
// Address: 0x114ce0 - 0x114d08
void sub_00114CE0_0x114ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114ce0u;

    // 0x114ce0: 0x27bdfff0
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114ce4: 0xffbf0000
    ctx->pc = 0x114ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114ce8: 0xc0413bc
    ctx->pc = 0x114CE8u;
    SET_GPR_U32(ctx, 31, 0x114CF0u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CF0u; }
    }
    if (ctx->pc != 0x114CF0u) { return; }
    ctx->pc = 0x114CF0u;
    // 0x114cf0: 0x24030005
    ctx->pc = 0x114cf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x114cf4: 0xdfbf0000
    ctx->pc = 0x114cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114cf8: 0xac430000
    ctx->pc = 0x114cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x114cfc: 0x2402ffff
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114d00: 0x3e00008
    ctx->pc = 0x114D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114D04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114D08u;
}
