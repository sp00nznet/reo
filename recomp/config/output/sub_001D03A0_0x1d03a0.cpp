#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D03A0
// Address: 0x1d03a0 - 0x1d0420
void sub_001D03A0_0x1d03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d03a0u;

    // 0x1d03a0: 0x27bdfff0
    ctx->pc = 0x1d03a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d03a4: 0x24040015
    ctx->pc = 0x1d03a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d03a8: 0xffbf0000
    ctx->pc = 0x1d03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d03ac: 0xc06bde0
    ctx->pc = 0x1D03ACu;
    SET_GPR_U32(ctx, 31, 0x1D03B4u);
    ctx->pc = 0x1D03B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03B4u; }
    }
    if (ctx->pc != 0x1D03B4u) { return; }
    ctx->pc = 0x1D03B4u;
    // 0x1d03b4: 0x24040001
    ctx->pc = 0x1d03b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d03b8: 0xc06bde0
    ctx->pc = 0x1D03B8u;
    SET_GPR_U32(ctx, 31, 0x1D03C0u);
    ctx->pc = 0x1D03BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03C0u; }
    }
    if (ctx->pc != 0x1D03C0u) { return; }
    ctx->pc = 0x1D03C0u;
    // 0x1d03c0: 0x24040012
    ctx->pc = 0x1d03c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d03c4: 0xc06bde0
    ctx->pc = 0x1D03C4u;
    SET_GPR_U32(ctx, 31, 0x1D03CCu);
    ctx->pc = 0x1D03C8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03CCu; }
    }
    if (ctx->pc != 0x1D03CCu) { return; }
    ctx->pc = 0x1D03CCu;
    // 0x1d03cc: 0x2404000c
    ctx->pc = 0x1d03ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d03d0: 0xc06bde0
    ctx->pc = 0x1D03D0u;
    SET_GPR_U32(ctx, 31, 0x1D03D8u);
    ctx->pc = 0x1D03D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03D8u; }
    }
    if (ctx->pc != 0x1D03D8u) { return; }
    ctx->pc = 0x1D03D8u;
    // 0x1d03d8: 0x24040066
    ctx->pc = 0x1d03d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1d03dc: 0xc06bde0
    ctx->pc = 0x1D03DCu;
    SET_GPR_U32(ctx, 31, 0x1D03E4u);
    ctx->pc = 0x1D03E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03E4u; }
    }
    if (ctx->pc != 0x1D03E4u) { return; }
    ctx->pc = 0x1D03E4u;
    // 0x1d03e4: 0x24040062
    ctx->pc = 0x1d03e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
    // 0x1d03e8: 0xc06bde0
    ctx->pc = 0x1D03E8u;
    SET_GPR_U32(ctx, 31, 0x1D03F0u);
    ctx->pc = 0x1D03ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03F0u; }
    }
    if (ctx->pc != 0x1D03F0u) { return; }
    ctx->pc = 0x1D03F0u;
    // 0x1d03f0: 0x202d
    ctx->pc = 0x1d03f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03f4: 0xc06bde0
    ctx->pc = 0x1D03F4u;
    SET_GPR_U32(ctx, 31, 0x1D03FCu);
    ctx->pc = 0x1D03F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03FCu; }
    }
    if (ctx->pc != 0x1D03FCu) { return; }
    ctx->pc = 0x1D03FCu;
    // 0x1d03fc: 0x24040002
    ctx->pc = 0x1d03fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0400: 0xc06bde0
    ctx->pc = 0x1D0400u;
    SET_GPR_U32(ctx, 31, 0x1D0408u);
    ctx->pc = 0x1D0404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0408u; }
    }
    if (ctx->pc != 0x1D0408u) { return; }
    ctx->pc = 0x1D0408u;
    // 0x1d0408: 0xdfbf0000
    ctx->pc = 0x1d0408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d040c: 0x3e00008
    ctx->pc = 0x1D040Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0414u;
    // 0x1d0414: 0x0
    ctx->pc = 0x1d0414u;
    // NOP
    // 0x1d0418: 0x0
    ctx->pc = 0x1d0418u;
    // NOP
    // 0x1d041c: 0x0
    ctx->pc = 0x1d041cu;
    // NOP
}
