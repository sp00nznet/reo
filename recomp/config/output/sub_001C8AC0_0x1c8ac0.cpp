#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8AC0
// Address: 0x1c8ac0 - 0x1c8b20
void sub_001C8AC0_0x1c8ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8ac0u;

    // 0x1c8ac0: 0x27bdffe0
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8ac4: 0x24060004
    ctx->pc = 0x1c8ac4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8ac8: 0xffbf0000
    ctx->pc = 0x1c8ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8acc: 0xc072274
    ctx->pc = 0x1C8ACCu;
    SET_GPR_U32(ctx, 31, 0x1C8AD4u);
    ctx->pc = 0x1C8AD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x1C89D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89D0_0x1c89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AD4u; }
    }
    if (ctx->pc != 0x1C8AD4u) { return; }
    ctx->pc = 0x1C8AD4u;
    // 0x1c8ad4: 0x8fa2001c
    ctx->pc = 0x1c8ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c8ad8: 0xdfbf0000
    ctx->pc = 0x1c8ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8adc: 0x3e00008
    ctx->pc = 0x1C8ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8AE4u;
    // 0x1c8ae4: 0x0
    ctx->pc = 0x1c8ae4u;
    // NOP
    // 0x1c8ae8: 0x0
    ctx->pc = 0x1c8ae8u;
    // NOP
    // 0x1c8aec: 0x0
    ctx->pc = 0x1c8aecu;
    // NOP
    // 0x1c8af0: 0x27bdffe0
    ctx->pc = 0x1c8af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8af4: 0x24060002
    ctx->pc = 0x1c8af4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8af8: 0xffbf0000
    ctx->pc = 0x1c8af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8afc: 0xa7a5001e
    ctx->pc = 0x1c8afcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c8b00: 0xc072258
    ctx->pc = 0x1C8B00u;
    SET_GPR_U32(ctx, 31, 0x1C8B08u);
    ctx->pc = 0x1C8B04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 30));
    ctx->pc = 0x1C8960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8960_0x1c8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B08u; }
    }
    if (ctx->pc != 0x1C8B08u) { return; }
    ctx->pc = 0x1C8B08u;
    // 0x1c8b08: 0xdfbf0000
    ctx->pc = 0x1c8b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8b0c: 0x3e00008
    ctx->pc = 0x1C8B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8B10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8B14u;
    // 0x1c8b14: 0x0
    ctx->pc = 0x1c8b14u;
    // NOP
    // 0x1c8b18: 0x0
    ctx->pc = 0x1c8b18u;
    // NOP
    // 0x1c8b1c: 0x0
    ctx->pc = 0x1c8b1cu;
    // NOP
}
