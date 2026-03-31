#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00116810
// Address: 0x116810 - 0x116848
void sub_00116810_0x116810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x116810u;

    // 0x116810: 0x27bdff70
    ctx->pc = 0x116810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x116814: 0xffa50058
    ctx->pc = 0x116814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x116818: 0xffbf0000
    ctx->pc = 0x116818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11681c: 0x27a50058
    ctx->pc = 0x11681cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 88));
    // 0x116820: 0xffa60060
    ctx->pc = 0x116820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x116824: 0xffa70068
    ctx->pc = 0x116824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x116828: 0xffa80070
    ctx->pc = 0x116828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x11682c: 0xffa90078
    ctx->pc = 0x11682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x116830: 0xffaa0080
    ctx->pc = 0x116830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x116834: 0xc045886
    ctx->pc = 0x116834u;
    SET_GPR_U32(ctx, 31, 0x11683Cu);
    ctx->pc = 0x116838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->pc = 0x116218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116218_0x116218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11683Cu; }
    }
    if (ctx->pc != 0x11683Cu) { return; }
    ctx->pc = 0x11683Cu;
    // 0x11683c: 0xdfbf0000
    ctx->pc = 0x11683cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116840: 0x3e00008
    ctx->pc = 0x116840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116844u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116848u;
}
