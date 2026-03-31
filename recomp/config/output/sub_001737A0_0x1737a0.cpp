#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001737A0
// Address: 0x1737a0 - 0x173808
void sub_001737A0_0x1737a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1737a0u;

    // 0x1737a0: 0x27bdfff0
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1737a4: 0x282d
    ctx->pc = 0x1737a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737a8: 0x24060010
    ctx->pc = 0x1737a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1737ac: 0xffb00000
    ctx->pc = 0x1737acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1737b0: 0xffbf0008
    ctx->pc = 0x1737b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1737b4: 0xc0558b4
    ctx->pc = 0x1737B4u;
    SET_GPR_U32(ctx, 31, 0x1737BCu);
    ctx->pc = 0x1737B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737BCu; }
    }
    if (ctx->pc != 0x1737BCu) { return; }
    ctx->pc = 0x1737BCu;
    // 0x1737bc: 0x2403ffff
    ctx->pc = 0x1737bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1737c0: 0x24020001
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1737c4: 0xae03002c
    ctx->pc = 0x1737c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1737c8: 0xae02001c
    ctx->pc = 0x1737c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1737cc: 0xae000000
    ctx->pc = 0x1737ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1737d0: 0xae000004
    ctx->pc = 0x1737d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1737d4: 0xae000008
    ctx->pc = 0x1737d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1737d8: 0xae00000c
    ctx->pc = 0x1737d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1737dc: 0xae000010
    ctx->pc = 0x1737dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1737e0: 0xae000014
    ctx->pc = 0x1737e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1737e4: 0xae000018
    ctx->pc = 0x1737e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1737e8: 0xae000020
    ctx->pc = 0x1737e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1737ec: 0xae030024
    ctx->pc = 0x1737ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1737f0: 0xae030028
    ctx->pc = 0x1737f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1737f4: 0xdfbf0008
    ctx->pc = 0x1737f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1737f8: 0xdfb00000
    ctx->pc = 0x1737f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1737fc: 0x3e00008
    ctx->pc = 0x1737FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173800u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173804u;
    // 0x173804: 0x0
    ctx->pc = 0x173804u;
    // NOP
}
