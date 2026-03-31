#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7600
// Address: 0x1d7600 - 0x1d7630
void sub_001D7600_0x1d7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7600u;

    // 0x1d7600: 0x27bdffe0
    ctx->pc = 0x1d7600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7604: 0x24850004
    ctx->pc = 0x1d7604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d7608: 0xffbf0000
    ctx->pc = 0x1d7608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d760c: 0xc0763b8
    ctx->pc = 0x1D760Cu;
    SET_GPR_U32(ctx, 31, 0x1D7614u);
    ctx->pc = 0x1D7610u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x1D8EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8EE0_0x1d8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7614u; }
    }
    if (ctx->pc != 0x1D7614u) { return; }
    ctx->pc = 0x1D7614u;
    // 0x1d7614: 0xdfbf0000
    ctx->pc = 0x1d7614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7618: 0x2143c
    ctx->pc = 0x1d7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d761c: 0x2143f
    ctx->pc = 0x1d761cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7620: 0x3e00008
    ctx->pc = 0x1D7620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7628u;
    // 0x1d7628: 0x0
    ctx->pc = 0x1d7628u;
    // NOP
    // 0x1d762c: 0x0
    ctx->pc = 0x1d762cu;
    // NOP
}
