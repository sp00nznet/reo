#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172480
// Address: 0x172480 - 0x1724a0
void sub_00172480_0x172480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172480u;

    // 0x172480: 0x27bdfff0
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172484: 0xffbf0000
    ctx->pc = 0x172484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172488: 0xdfbf0000
    ctx->pc = 0x172488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17248c: 0x805d766
    ctx->pc = 0x17248Cu;
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175D98u;
    entry_175d98_0x175e00(rdram, ctx, runtime); return;
    ctx->pc = 0x172494u;
    // 0x172494: 0x0
    ctx->pc = 0x172494u;
    // NOP
    // 0x172498: 0x3e00008
    ctx->pc = 0x172498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1724A0u;
}
