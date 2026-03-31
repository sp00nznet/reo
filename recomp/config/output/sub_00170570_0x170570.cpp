#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170570
// Address: 0x170570 - 0x170580
void sub_00170570_0x170570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170570u;

    // 0x170570: 0x8c831b30
    ctx->pc = 0x170570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x170574: 0x3e00008
    ctx->pc = 0x170574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170578u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17057Cu;
    // 0x17057c: 0x0
    ctx->pc = 0x17057cu;
    // NOP
}
