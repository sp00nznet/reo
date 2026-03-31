#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001656E8
// Address: 0x1656e8 - 0x165710
void sub_001656E8_0x1656e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1656e8u;

    // 0x1656e8: 0x27bdfff0
    ctx->pc = 0x1656e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1656ec: 0xffbf0000
    ctx->pc = 0x1656ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1656f0: 0xc04c7be
    ctx->pc = 0x1656F0u;
    SET_GPR_U32(ctx, 31, 0x1656F8u);
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1656F8u; }
    }
    if (ctx->pc != 0x1656F8u) { return; }
    ctx->pc = 0x1656F8u;
    // 0x1656f8: 0x2c420002
    ctx->pc = 0x1656f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1656fc: 0xdfbf0000
    ctx->pc = 0x1656fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165700: 0x2c420001
    ctx->pc = 0x165700u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x165704: 0x3e00008
    ctx->pc = 0x165704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16570Cu;
    // 0x16570c: 0x0
    ctx->pc = 0x16570cu;
    // NOP
}
