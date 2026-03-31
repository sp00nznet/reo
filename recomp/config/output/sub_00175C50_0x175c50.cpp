#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175C50
// Address: 0x175c50 - 0x175c98
void sub_00175C50_0x175c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175c50u;

    // 0x175c50: 0x27bdffe0
    ctx->pc = 0x175c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175c54: 0xffb00000
    ctx->pc = 0x175c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175c58: 0x80802d
    ctx->pc = 0x175c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c5c: 0xffb10008
    ctx->pc = 0x175c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175c60: 0xa0882d
    ctx->pc = 0x175c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c64: 0xffbf0010
    ctx->pc = 0x175c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175c68: 0x26040004
    ctx->pc = 0x175c68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x175c6c: 0xc05d726
    ctx->pc = 0x175C6Cu;
    SET_GPR_U32(ctx, 31, 0x175C74u);
    ctx->pc = 0x175C70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x175C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C98_0x175c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C74u; }
    }
    if (ctx->pc != 0x175C74u) { return; }
    ctx->pc = 0x175C74u;
    // 0x175c74: 0xae110020
    ctx->pc = 0x175c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x175c78: 0x24020001
    ctx->pc = 0x175c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175c7c: 0xdfbf0010
    ctx->pc = 0x175c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175c80: 0xae020024
    ctx->pc = 0x175c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x175c84: 0xdfb10008
    ctx->pc = 0x175c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175c88: 0xdfb00000
    ctx->pc = 0x175c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175c8c: 0x3e00008
    ctx->pc = 0x175C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175C94u;
    // 0x175c94: 0x0
    ctx->pc = 0x175c94u;
    // NOP
}
