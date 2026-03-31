#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BB160
// Address: 0x1bb160 - 0x1bb1c0
void sub_001BB160_0x1bb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bb160u;

    // 0x1bb160: 0x27bdfff0
    ctx->pc = 0x1bb160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb164: 0xffbf0000
    ctx->pc = 0x1bb164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb168: 0xc06c1bc
    ctx->pc = 0x1BB168u;
    SET_GPR_U32(ctx, 31, 0x1BB170u);
    ctx->pc = 0x1B06F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06F0_0x1b06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB170u; }
    }
    if (ctx->pc != 0x1BB170u) { return; }
    ctx->pc = 0x1BB170u;
    // 0x1bb170: 0x3c040032
    ctx->pc = 0x1bb170u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bb174: 0xc06c260
    ctx->pc = 0x1BB174u;
    SET_GPR_U32(ctx, 31, 0x1BB17Cu);
    ctx->pc = 0x1BB178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17152));
    ctx->pc = 0x1B0980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0980_0x1b0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB17Cu; }
    }
    if (ctx->pc != 0x1BB17Cu) { return; }
    ctx->pc = 0x1BB17Cu;
    // 0x1bb17c: 0x3c040032
    ctx->pc = 0x1bb17cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bb180: 0xc06c260
    ctx->pc = 0x1BB180u;
    SET_GPR_U32(ctx, 31, 0x1BB188u);
    ctx->pc = 0x1BB184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17200));
    ctx->pc = 0x1B0980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0980_0x1b0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB188u; }
    }
    if (ctx->pc != 0x1BB188u) { return; }
    ctx->pc = 0x1BB188u;
    // 0x1bb188: 0x3c040032
    ctx->pc = 0x1bb188u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bb18c: 0xc06c260
    ctx->pc = 0x1BB18Cu;
    SET_GPR_U32(ctx, 31, 0x1BB194u);
    ctx->pc = 0x1BB190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17248));
    ctx->pc = 0x1B0980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0980_0x1b0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB194u; }
    }
    if (ctx->pc != 0x1BB194u) { return; }
    ctx->pc = 0x1BB194u;
    // 0x1bb194: 0x3c040032
    ctx->pc = 0x1bb194u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bb198: 0xc06c260
    ctx->pc = 0x1BB198u;
    SET_GPR_U32(ctx, 31, 0x1BB1A0u);
    ctx->pc = 0x1BB19Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17296));
    ctx->pc = 0x1B0980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0980_0x1b0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1A0u; }
    }
    if (ctx->pc != 0x1BB1A0u) { return; }
    ctx->pc = 0x1BB1A0u;
    // 0x1bb1a0: 0xc06c36c
    ctx->pc = 0x1BB1A0u;
    SET_GPR_U32(ctx, 31, 0x1BB1A8u);
    ctx->pc = 0x1B0DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DB0_0x1b0db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1A8u; }
    }
    if (ctx->pc != 0x1BB1A8u) { return; }
    ctx->pc = 0x1BB1A8u;
    // 0x1bb1a8: 0xdfbf0000
    ctx->pc = 0x1bb1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb1ac: 0x3e00008
    ctx->pc = 0x1BB1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB1B4u;
    // 0x1bb1b4: 0x0
    ctx->pc = 0x1bb1b4u;
    // NOP
    // 0x1bb1b8: 0x0
    ctx->pc = 0x1bb1b8u;
    // NOP
    // 0x1bb1bc: 0x0
    ctx->pc = 0x1bb1bcu;
    // NOP
}
