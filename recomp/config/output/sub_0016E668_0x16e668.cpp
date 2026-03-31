#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E668
// Address: 0x16e668 - 0x16e678
void sub_0016E668_0x16e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e668u;

    // 0x16e668: 0x8c820de0
    ctx->pc = 0x16e668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 3552)));
    // 0x16e66c: 0x21027
    ctx->pc = 0x16e66cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16e670: 0x3e00008
    ctx->pc = 0x16E670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E674u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E678u;
}
