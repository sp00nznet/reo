#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173B00
// Address: 0x173b00 - 0x173b28
void sub_00173B00_0x173b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173b00u;

    // 0x173b00: 0x27bdfff0
    ctx->pc = 0x173b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173b04: 0x24050007
    ctx->pc = 0x173b04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x173b08: 0x24060006
    ctx->pc = 0x173b08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x173b0c: 0x382d
    ctx->pc = 0x173b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b10: 0xffbf0000
    ctx->pc = 0x173b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173b14: 0xc05def8
    ctx->pc = 0x173B14u;
    SET_GPR_U32(ctx, 31, 0x173B1Cu);
    ctx->pc = 0x173B18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B1Cu; }
    }
    if (ctx->pc != 0x173B1Cu) { return; }
    ctx->pc = 0x173B1Cu;
    // 0x173b1c: 0xdfbf0000
    ctx->pc = 0x173b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b20: 0x3e00008
    ctx->pc = 0x173B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173B28u;
}
