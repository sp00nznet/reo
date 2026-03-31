#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13adc8
// Address: 0x13adc8 - 0x13adf0
void entry_13adc8_0x13adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13adc8u;

    // 0x13adc8: 0x27bdffc0
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13adcc: 0xffbf0030
    ctx->pc = 0x13adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13add0: 0xc04ea80
    ctx->pc = 0x13ADD0u;
    SET_GPR_U32(ctx, 31, 0x13ADD8u);
    ctx->pc = 0x13ADD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA00_0x13aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADD8u; }
    }
    if (ctx->pc != 0x13ADD8u) { return; }
    ctx->pc = 0x13ADD8u;
    // 0x13add8: 0x8fa20000
    ctx->pc = 0x13add8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13addc: 0xdfbf0030
    ctx->pc = 0x13addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ade0: 0x2102b
    ctx->pc = 0x13ade0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13ade4: 0x3e00008
    ctx->pc = 0x13ADE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ADE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13ADECu;
    // 0x13adec: 0x0
    ctx->pc = 0x13adecu;
    // NOP
}
