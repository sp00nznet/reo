#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015C890
// Address: 0x15c890 - 0x15c8c0
void sub_0015C890_0x15c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15c890u;

    // 0x15c890: 0x248200bc
    ctx->pc = 0x15c890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 188));
    // 0x15c894: 0xc73023
    ctx->pc = 0x15c894u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15c898: 0xa71821
    ctx->pc = 0x15c898u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15c89c: 0xac8700dc
    ctx->pc = 0x15c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 7));
    // 0x15c8a0: 0xac8000e4
    ctx->pc = 0x15c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x15c8a4: 0xac8500d8
    ctx->pc = 0x15c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x15c8a8: 0xac8000e0
    ctx->pc = 0x15c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x15c8ac: 0xac8200d4
    ctx->pc = 0x15c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x15c8b0: 0xac460004
    ctx->pc = 0x15c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x15c8b4: 0xac470008
    ctx->pc = 0x15c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x15c8b8: 0x3e00008
    ctx->pc = 0x15C8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C8BCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C8C0u;
}
