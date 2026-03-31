#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C54E0
// Address: 0x1c54e0 - 0x1c5500
void sub_001C54E0_0x1c54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c54e0u;

    // 0x1c54e0: 0x80282d
    ctx->pc = 0x1c54e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54e4: 0x24064234
    ctx->pc = 0x1c54e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16948));
    // 0x1c54e8: 0x3c040032
    ctx->pc = 0x1c54e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c54ec: 0x8041eac
    ctx->pc = 0x1C54ECu;
    ctx->pc = 0x1C54F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    ctx->pc = 0x107AB0u;
    sub_00107AB0_0x107ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C54F4u;
    // 0x1c54f4: 0x0
    ctx->pc = 0x1c54f4u;
    // NOP
    // 0x1c54f8: 0x0
    ctx->pc = 0x1c54f8u;
    // NOP
    // 0x1c54fc: 0x0
    ctx->pc = 0x1c54fcu;
    // NOP
}
