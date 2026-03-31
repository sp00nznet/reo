#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011D908
// Address: 0x11d908 - 0x11d960
void sub_0011D908_0x11d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d908u;

    // 0x11d908: 0x27bdfff0
    ctx->pc = 0x11d908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d90c: 0xffbf0000
    ctx->pc = 0x11d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d910: 0xc0475b4
    ctx->pc = 0x11D910u;
    SET_GPR_U32(ctx, 31, 0x11D918u);
    ctx->pc = 0x11D6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6D0_0x11d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D918u; }
    }
    if (ctx->pc != 0x11D918u) { return; }
    ctx->pc = 0x11D918u;
    // 0x11d918: 0xc0475fe
    ctx->pc = 0x11D918u;
    SET_GPR_U32(ctx, 31, 0x11D920u);
    ctx->pc = 0x11D7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D7F8_0x11d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D920u; }
    }
    if (ctx->pc != 0x11D920u) { return; }
    ctx->pc = 0x11D920u;
    // 0x11d920: 0xc04777a
    ctx->pc = 0x11D920u;
    SET_GPR_U32(ctx, 31, 0x11D928u);
    ctx->pc = 0x11DDE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DDE8_0x11dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D928u; }
    }
    if (ctx->pc != 0x11D928u) { return; }
    ctx->pc = 0x11D928u;
    // 0x11d928: 0xc0477d8
    ctx->pc = 0x11D928u;
    SET_GPR_U32(ctx, 31, 0x11D930u);
    ctx->pc = 0x11D92Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x11DF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DF60_0x11df60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D930u; }
    }
    if (ctx->pc != 0x11D930u) { return; }
    ctx->pc = 0x11D930u;
    // 0x11d930: 0xc047868
    ctx->pc = 0x11D930u;
    SET_GPR_U32(ctx, 31, 0x11D938u);
    ctx->pc = 0x11E1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E1A0_0x11e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D938u; }
    }
    if (ctx->pc != 0x11D938u) { return; }
    ctx->pc = 0x11D938u;
    // 0x11d938: 0xc0454fe
    ctx->pc = 0x11D938u;
    SET_GPR_U32(ctx, 31, 0x11D940u);
    ctx->pc = 0x1153F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001153F8_0x1153f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D940u; }
    }
    if (ctx->pc != 0x11D940u) { return; }
    ctx->pc = 0x11D940u;
    // 0x11d940: 0xc04768c
    ctx->pc = 0x11D940u;
    SET_GPR_U32(ctx, 31, 0x11D948u);
    ctx->pc = 0x11DA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DA30_0x11da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D948u; }
    }
    if (ctx->pc != 0x11D948u) { return; }
    ctx->pc = 0x11D948u;
    // 0x11d948: 0xc0473c2
    ctx->pc = 0x11D948u;
    SET_GPR_U32(ctx, 31, 0x11D950u);
    ctx->pc = 0x11CF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CF08_0x11cf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D950u; }
    }
    if (ctx->pc != 0x11D950u) { return; }
    ctx->pc = 0x11D950u;
    // 0x11d950: 0xdfbf0000
    ctx->pc = 0x11d950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d954: 0x8047d86
    ctx->pc = 0x11D954u;
    ctx->pc = 0x11D958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x11F618u;
    entry_11f618_0x11f7d0(rdram, ctx, runtime); return;
    ctx->pc = 0x11D95Cu;
    // 0x11d95c: 0x0
    ctx->pc = 0x11d95cu;
    // NOP
}
