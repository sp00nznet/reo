#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C0370
// Address: 0x1c0370 - 0x1c03a0
void sub_001C0370_0x1c0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c0370u;

    // 0x1c0370: 0x3c010032
    ctx->pc = 0x1c0370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0374: 0xac246cf0
    ctx->pc = 0x1c0374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27888), GPR_U32(ctx, 4));
    // 0x1c0378: 0x3c010032
    ctx->pc = 0x1c0378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c037c: 0xac206c50
    ctx->pc = 0x1c037cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27728), GPR_U32(ctx, 0));
    // 0x1c0380: 0x3c010032
    ctx->pc = 0x1c0380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0384: 0xac206c54
    ctx->pc = 0x1c0384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27732), GPR_U32(ctx, 0));
    // 0x1c0388: 0x3c010032
    ctx->pc = 0x1c0388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c038c: 0x3e00008
    ctx->pc = 0x1C038Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0390u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 27880), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0394u;
    // 0x1c0394: 0x0
    ctx->pc = 0x1c0394u;
    // NOP
    // 0x1c0398: 0x0
    ctx->pc = 0x1c0398u;
    // NOP
    // 0x1c039c: 0x0
    ctx->pc = 0x1c039cu;
    // NOP
}
