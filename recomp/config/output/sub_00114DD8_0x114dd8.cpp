#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114DD8
// Address: 0x114dd8 - 0x114df8
void sub_00114DD8_0x114dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114dd8u;

    // 0x114dd8: 0x24022000
    ctx->pc = 0x114dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x114ddc: 0xfca00048
    ctx->pc = 0x114ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x114de0: 0xaca20004
    ctx->pc = 0x114de0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x114de4: 0x3e00008
    ctx->pc = 0x114DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114DE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114DECu;
    // 0x114dec: 0x0
    ctx->pc = 0x114decu;
    // NOP
    // 0x114df0: 0x3e00008
    ctx->pc = 0x114DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114DF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114DF8u;
}
