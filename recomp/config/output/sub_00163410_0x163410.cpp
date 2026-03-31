#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163410
// Address: 0x163410 - 0x163420
void sub_00163410_0x163410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163410u;

    // 0x163410: 0x3c020023
    ctx->pc = 0x163410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x163414: 0x3e00008
    ctx->pc = 0x163414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163418u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963024));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16341Cu;
    // 0x16341c: 0x0
    ctx->pc = 0x16341cu;
    // NOP
}
