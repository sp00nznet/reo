#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177DD8
// Address: 0x177dd8 - 0x177df0
void sub_00177DD8_0x177dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177dd8u;

    // 0x177dd8: 0xdca20000
    ctx->pc = 0x177dd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177ddc: 0xfc820138
    ctx->pc = 0x177ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 312), GPR_U64(ctx, 2));
    // 0x177de0: 0xdca30008
    ctx->pc = 0x177de0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x177de4: 0x3e00008
    ctx->pc = 0x177DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DE8u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 320), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DECu;
    // 0x177dec: 0x0
    ctx->pc = 0x177decu;
    // NOP
}
