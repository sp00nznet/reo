#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B530
// Address: 0x12b530 - 0x12b610
void sub_0012B530_0x12b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b530u;

    // 0x12b530: 0x3c030021
    ctx->pc = 0x12b530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b534: 0x3e00008
    ctx->pc = 0x12B534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B538u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1112)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B53Cu;
    // 0x12b53c: 0x0
    ctx->pc = 0x12b53cu;
    // NOP
    // 0x12b540: 0x27bdfff0
    ctx->pc = 0x12b540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b544: 0xffbf0000
    ctx->pc = 0x12b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b548: 0xdfbf0000
    ctx->pc = 0x12b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b54c: 0x80507ea
    ctx->pc = 0x12B54Cu;
    ctx->pc = 0x12B550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141FA8u;
    sub_00141FA8_0x141fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x12B554u;
    // 0x12b554: 0x0
    ctx->pc = 0x12b554u;
    // NOP
    // 0x12b558: 0x27bdfff0
    ctx->pc = 0x12b558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b55c: 0xffbf0000
    ctx->pc = 0x12b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b560: 0xdfbf0000
    ctx->pc = 0x12b560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b564: 0x80507f0
    ctx->pc = 0x12B564u;
    ctx->pc = 0x12B568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141FC0u;
    sub_00141FC0_0x141fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x12B56Cu;
    // 0x12b56c: 0x0
    ctx->pc = 0x12b56cu;
    // NOP
    // 0x12b570: 0x27bdfff0
    ctx->pc = 0x12b570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b574: 0xffbf0000
    ctx->pc = 0x12b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b578: 0xdfbf0000
    ctx->pc = 0x12b578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b57c: 0x80507fc
    ctx->pc = 0x12B57Cu;
    ctx->pc = 0x12B580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141FF0u;
    sub_00141FF0_0x141ff0(rdram, ctx, runtime); return;
    ctx->pc = 0x12B584u;
    // 0x12b584: 0x0
    ctx->pc = 0x12b584u;
    // NOP
    // 0x12b588: 0x27bdfff0
    ctx->pc = 0x12b588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b58c: 0xffbf0000
    ctx->pc = 0x12b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b590: 0xdfbf0000
    ctx->pc = 0x12b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b594: 0x8050802
    ctx->pc = 0x12B594u;
    ctx->pc = 0x12B598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142008u;
    sub_00142008_0x142008(rdram, ctx, runtime); return;
    ctx->pc = 0x12B59Cu;
    // 0x12b59c: 0x0
    ctx->pc = 0x12b59cu;
    // NOP
    // 0x12b5a0: 0x27bdfff0
    ctx->pc = 0x12b5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b5a4: 0xffbf0000
    ctx->pc = 0x12b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b5a8: 0xdfbf0000
    ctx->pc = 0x12b5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b5ac: 0x8050808
    ctx->pc = 0x12B5ACu;
    ctx->pc = 0x12B5B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142020u;
    sub_00142020_0x142020(rdram, ctx, runtime); return;
    ctx->pc = 0x12B5B4u;
    // 0x12b5b4: 0x0
    ctx->pc = 0x12b5b4u;
    // NOP
    // 0x12b5b8: 0x27bdfff0
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b5bc: 0xffbf0000
    ctx->pc = 0x12b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b5c0: 0xdfbf0000
    ctx->pc = 0x12b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b5c4: 0x805080e
    ctx->pc = 0x12B5C4u;
    ctx->pc = 0x12B5C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142038u;
    sub_00142038_0x142038(rdram, ctx, runtime); return;
    ctx->pc = 0x12B5CCu;
    // 0x12b5cc: 0x0
    ctx->pc = 0x12b5ccu;
    // NOP
    // 0x12b5d0: 0x27bdfff0
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b5d4: 0xffbf0000
    ctx->pc = 0x12b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b5d8: 0xc0507ea
    ctx->pc = 0x12B5D8u;
    SET_GPR_U32(ctx, 31, 0x12B5E0u);
    ctx->pc = 0x141FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141FA8_0x141fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5E0u; }
    }
    if (ctx->pc != 0x12B5E0u) { return; }
    ctx->pc = 0x12B5E0u;
    // 0x12b5e0: 0xc0507f0
    ctx->pc = 0x12B5E0u;
    SET_GPR_U32(ctx, 31, 0x12B5E8u);
    ctx->pc = 0x141FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141FC0_0x141fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5E8u; }
    }
    if (ctx->pc != 0x12B5E8u) { return; }
    ctx->pc = 0x12B5E8u;
    // 0x12b5e8: 0xc050802
    ctx->pc = 0x12B5E8u;
    SET_GPR_U32(ctx, 31, 0x12B5F0u);
    ctx->pc = 0x142008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142008_0x142008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5F0u; }
    }
    if (ctx->pc != 0x12B5F0u) { return; }
    ctx->pc = 0x12B5F0u;
    // 0x12b5f0: 0xc050808
    ctx->pc = 0x12B5F0u;
    SET_GPR_U32(ctx, 31, 0x12B5F8u);
    ctx->pc = 0x142020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142020_0x142020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5F8u; }
    }
    if (ctx->pc != 0x12B5F8u) { return; }
    ctx->pc = 0x12B5F8u;
    // 0x12b5f8: 0xc05080e
    ctx->pc = 0x12B5F8u;
    SET_GPR_U32(ctx, 31, 0x12B600u);
    ctx->pc = 0x142038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142038_0x142038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B600u; }
    }
    if (ctx->pc != 0x12B600u) { return; }
    ctx->pc = 0x12B600u;
    // 0x12b600: 0xdfbf0000
    ctx->pc = 0x12b600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b604: 0x102d
    ctx->pc = 0x12b604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b608: 0x3e00008
    ctx->pc = 0x12B608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B610u;
}
