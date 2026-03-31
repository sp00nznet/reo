#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174580
// Address: 0x174580 - 0x1745f0
void sub_00174580_0x174580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174580u;

    // 0x174580: 0x27bdfff0
    ctx->pc = 0x174580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174584: 0x282d
    ctx->pc = 0x174584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174588: 0xffb00000
    ctx->pc = 0x174588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17458c: 0x80802d
    ctx->pc = 0x17458cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174590: 0xffbf0008
    ctx->pc = 0x174590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174594: 0xc0558b4
    ctx->pc = 0x174594u;
    SET_GPR_U32(ctx, 31, 0x17459Cu);
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 881));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17459Cu; }
    }
    if (ctx->pc != 0x17459Cu) { return; }
    ctx->pc = 0x17459Cu;
    // 0x17459c: 0xc05d17c
    ctx->pc = 0x17459Cu;
    SET_GPR_U32(ctx, 31, 0x1745A4u);
    ctx->pc = 0x1745A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1745F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001745F0_0x1745f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745A4u; }
    }
    if (ctx->pc != 0x1745A4u) { return; }
    ctx->pc = 0x1745A4u;
    // 0x1745a4: 0xae000d94
    ctx->pc = 0x1745a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 0));
    // 0x1745a8: 0x2402ffff
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1745ac: 0x2403fff8
    ctx->pc = 0x1745acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1745b0: 0x24040001
    ctx->pc = 0x1745b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1745b4: 0xae020dc0
    ctx->pc = 0x1745b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 2));
    // 0x1745b8: 0xae030db4
    ctx->pc = 0x1745b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 3));
    // 0x1745bc: 0xae040db8
    ctx->pc = 0x1745bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 4));
    // 0x1745c0: 0xae000d98
    ctx->pc = 0x1745c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 0));
    // 0x1745c4: 0xae030d9c
    ctx->pc = 0x1745c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
    // 0x1745c8: 0xae040da0
    ctx->pc = 0x1745c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 4));
    // 0x1745cc: 0xae020da4
    ctx->pc = 0x1745ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3492), GPR_U32(ctx, 2));
    // 0x1745d0: 0xae020da8
    ctx->pc = 0x1745d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
    // 0x1745d4: 0xae000dac
    ctx->pc = 0x1745d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 0));
    // 0x1745d8: 0xae000db0
    ctx->pc = 0x1745d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 0));
    // 0x1745dc: 0xae000dbc
    ctx->pc = 0x1745dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 0));
    // 0x1745e0: 0xdfbf0008
    ctx->pc = 0x1745e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1745e4: 0xdfb00000
    ctx->pc = 0x1745e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745e8: 0x3e00008
    ctx->pc = 0x1745E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1745ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1745F0u;
}
