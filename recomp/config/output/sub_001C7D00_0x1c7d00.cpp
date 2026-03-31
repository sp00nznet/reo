#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7D00
// Address: 0x1c7d00 - 0x1c7d30
void sub_001C7D00_0x1c7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7d00u;

    // 0x1c7d00: 0x27bdffe0
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7d04: 0xffbf0010
    ctx->pc = 0x1c7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7d08: 0x7fb00000
    ctx->pc = 0x1c7d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7d0c: 0xc072250
    ctx->pc = 0x1C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D14u);
    ctx->pc = 0x1C7D10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8940_0x1c8940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D14u; }
    }
    if (ctx->pc != 0x1C7D14u) { return; }
    ctx->pc = 0x1C7D14u;
    // 0x1c7d14: 0xae000014
    ctx->pc = 0x1c7d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c7d18: 0xdfbf0010
    ctx->pc = 0x1c7d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7d1c: 0x7bb00000
    ctx->pc = 0x1c7d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7d20: 0x3e00008
    ctx->pc = 0x1C7D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7D28u;
    // 0x1c7d28: 0x0
    ctx->pc = 0x1c7d28u;
    // NOP
    // 0x1c7d2c: 0x0
    ctx->pc = 0x1c7d2cu;
    // NOP
}
