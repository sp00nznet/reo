#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012DAC0
// Address: 0x12dac0 - 0x12dae0
void sub_0012DAC0_0x12dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12dac0u;

    // 0x12dac0: 0x3c040022
    ctx->pc = 0x12dac0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x12dac4: 0x102d
    ctx->pc = 0x12dac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dac8: 0x24848748
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936392));
    // 0x12dacc: 0x8c830000
    ctx->pc = 0x12daccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12dad0: 0x24630001
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x12dad4: 0x3e00008
    ctx->pc = 0x12DAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAD8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DADCu;
    // 0x12dadc: 0x0
    ctx->pc = 0x12dadcu;
    // NOP
}
