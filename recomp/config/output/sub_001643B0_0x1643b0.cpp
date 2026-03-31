#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001643B0
// Address: 0x1643b0 - 0x164408
void sub_001643B0_0x1643b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1643b0u;

    // 0x1643b0: 0x27bdfff0
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1643b4: 0xffb00000
    ctx->pc = 0x1643b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1643b8: 0xffbf0008
    ctx->pc = 0x1643b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1643bc: 0xc057e9e
    ctx->pc = 0x1643BCu;
    SET_GPR_U32(ctx, 31, 0x1643C4u);
    ctx->pc = 0x1643C0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FA78_0x15fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643C4u; }
    }
    if (ctx->pc != 0x1643C4u) { return; }
    ctx->pc = 0x1643C4u;
    // 0x1643c4: 0x200202d
    ctx->pc = 0x1643c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643c8: 0xc0590ca
    ctx->pc = 0x1643C8u;
    SET_GPR_U32(ctx, 31, 0x1643D0u);
    ctx->pc = 0x1643CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x164328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164328_0x164328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643D0u; }
    }
    if (ctx->pc != 0x1643D0u) { return; }
    ctx->pc = 0x1643D0u;
    // 0x1643d0: 0xc058dfa
    ctx->pc = 0x1643D0u;
    SET_GPR_U32(ctx, 31, 0x1643D8u);
    ctx->pc = 0x1637E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001637E8_0x1637e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643D8u; }
    }
    if (ctx->pc != 0x1643D8u) { return; }
    ctx->pc = 0x1643D8u;
    // 0x1643d8: 0x200202d
    ctx->pc = 0x1643d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643dc: 0xc0590ca
    ctx->pc = 0x1643DCu;
    SET_GPR_U32(ctx, 31, 0x1643E4u);
    ctx->pc = 0x1643E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164328_0x164328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643E4u; }
    }
    if (ctx->pc != 0x1643E4u) { return; }
    ctx->pc = 0x1643E4u;
    // 0x1643e4: 0xc057ea4
    ctx->pc = 0x1643E4u;
    SET_GPR_U32(ctx, 31, 0x1643ECu);
    ctx->pc = 0x15FA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FA90_0x15fa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643ECu; }
    }
    if (ctx->pc != 0x1643ECu) { return; }
    ctx->pc = 0x1643ECu;
    // 0x1643ec: 0xdfbf0008
    ctx->pc = 0x1643ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1643f0: 0x200202d
    ctx->pc = 0x1643f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643f4: 0xdfb00000
    ctx->pc = 0x1643f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643f8: 0x8058e16
    ctx->pc = 0x1643F8u;
    ctx->pc = 0x1643FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163858u;
    entry_163858_0x163880(rdram, ctx, runtime); return;
    ctx->pc = 0x164400u;
    // 0x164400: 0x3e00008
    ctx->pc = 0x164400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164404u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164408u;
}
