#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f058
// Address: 0x13f058 - 0x13f080
void entry_13f058_0x13f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f058u;

    // 0x13f058: 0x28c3fff1
    ctx->pc = 0x13f058u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 4294967281));
    // 0x13f05c: 0x2402fff1
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x13f060: 0xc3100a
    ctx->pc = 0x13f060u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x13f064: 0x2406000f
    ctx->pc = 0x13f064u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x13f068: 0x52880
    ctx->pc = 0x13f068u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f06c: 0x28430010
    ctx->pc = 0x13f06cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 16));
    // 0x13f070: 0xa42821
    ctx->pc = 0x13f070u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13f074: 0xc3100a
    ctx->pc = 0x13f074u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x13f078: 0x3e00008
    ctx->pc = 0x13F078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F07Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F080u;
}
