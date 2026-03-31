#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F45D0
// Address: 0x1f45d0 - 0x1f4600
void sub_001F45D0_0x1f45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f45d0u;

    // 0x1f45d0: 0x27bdffe0
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f45d4: 0xffbf0000
    ctx->pc = 0x1f45d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f45d8: 0xafa40018
    ctx->pc = 0x1f45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f45dc: 0xa7a5001c
    ctx->pc = 0x1f45dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f45e0: 0x27a40018
    ctx->pc = 0x1f45e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f45e4: 0xc075a3c
    ctx->pc = 0x1F45E4u;
    SET_GPR_U32(ctx, 31, 0x1F45ECu);
    ctx->pc = 0x1F45E8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1D68F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D68F0_0x1d68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45ECu; }
    }
    if (ctx->pc != 0x1F45ECu) { return; }
    ctx->pc = 0x1F45ECu;
    // 0x1f45ec: 0xdfbf0000
    ctx->pc = 0x1f45ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f45f0: 0x3e00008
    ctx->pc = 0x1F45F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F45F8u;
    // 0x1f45f8: 0x0
    ctx->pc = 0x1f45f8u;
    // NOP
    // 0x1f45fc: 0x0
    ctx->pc = 0x1f45fcu;
    // NOP
}
