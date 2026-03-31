#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AC650
// Address: 0x1ac650 - 0x1ac710
void sub_001AC650_0x1ac650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ac650u;

    // 0x1ac650: 0x27bdfff0
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac654: 0x3c050025
    ctx->pc = 0x1ac654u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ac658: 0xffbf0000
    ctx->pc = 0x1ac658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac65c: 0x202d
    ctx->pc = 0x1ac65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac660: 0xc06a25c
    ctx->pc = 0x1AC660u;
    SET_GPR_U32(ctx, 31, 0x1AC668u);
    ctx->pc = 0x1AC664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966752));
    ctx->pc = 0x1A8970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC668u; }
    }
    if (ctx->pc != 0x1AC668u) { return; }
    ctx->pc = 0x1AC668u;
    // 0x1ac668: 0xc073098
    ctx->pc = 0x1AC668u;
    SET_GPR_U32(ctx, 31, 0x1AC670u);
    ctx->pc = 0x1CC260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC260_0x1cc260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC670u; }
    }
    if (ctx->pc != 0x1AC670u) { return; }
    ctx->pc = 0x1AC670u;
    // 0x1ac670: 0xc04a87a
    ctx->pc = 0x1AC670u;
    SET_GPR_U32(ctx, 31, 0x1AC678u);
    ctx->pc = 0x12A1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A1E8_0x12a1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC678u; }
    }
    if (ctx->pc != 0x1AC678u) { return; }
    ctx->pc = 0x1AC678u;
    // 0x1ac678: 0x3c04001b
    ctx->pc = 0x1ac678u;
    SET_GPR_U32(ctx, 4, ((uint32_t)27 << 16));
    // 0x1ac67c: 0x282d
    ctx->pc = 0x1ac67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac680: 0xc04ad88
    ctx->pc = 0x1AC680u;
    SET_GPR_U32(ctx, 31, 0x1AC688u);
    ctx->pc = 0x1AC684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952512));
    ctx->pc = 0x12B620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B620_0x12b620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC688u; }
    }
    if (ctx->pc != 0x1AC688u) { return; }
    ctx->pc = 0x1AC688u;
    // 0x1ac688: 0x24020001
    ctx->pc = 0x1ac688u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac68c: 0x3c010032
    ctx->pc = 0x1ac68cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ac690: 0x2404ffff
    ctx->pc = 0x1ac690u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac694: 0xc06a338
    ctx->pc = 0x1AC694u;
    SET_GPR_U32(ctx, 31, 0x1AC69Cu);
    ctx->pc = 0x1AC698u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17367), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A8CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8CE0_0x1a8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC69Cu; }
    }
    if (ctx->pc != 0x1AC69Cu) { return; }
    ctx->pc = 0x1AC69Cu;
    // 0x1ac69c: 0xc06a61c
    ctx->pc = 0x1AC69Cu;
    SET_GPR_U32(ctx, 31, 0x1AC6A4u);
    ctx->pc = 0x1A9870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9870_0x1a9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6A4u; }
    }
    if (ctx->pc != 0x1AC6A4u) { return; }
    ctx->pc = 0x1AC6A4u;
    // 0x1ac6a4: 0xc06ad3c
    ctx->pc = 0x1AC6A4u;
    SET_GPR_U32(ctx, 31, 0x1AC6ACu);
    ctx->pc = 0x1AB4F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB4F0_0x1ab4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6ACu; }
    }
    if (ctx->pc != 0x1AC6ACu) { return; }
    ctx->pc = 0x1AC6ACu;
    // 0x1ac6ac: 0xdfbf0000
    ctx->pc = 0x1ac6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac6b0: 0x3e00008
    ctx->pc = 0x1AC6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC6B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC6B8u;
    // 0x1ac6b8: 0x0
    ctx->pc = 0x1ac6b8u;
    // NOP
    // 0x1ac6bc: 0x0
    ctx->pc = 0x1ac6bcu;
    // NOP
    // 0x1ac6c0: 0x3e00008
    ctx->pc = 0x1AC6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC6C8u;
    // 0x1ac6c8: 0x0
    ctx->pc = 0x1ac6c8u;
    // NOP
    // 0x1ac6cc: 0x0
    ctx->pc = 0x1ac6ccu;
    // NOP
    // 0x1ac6d0: 0x27bdfff0
    ctx->pc = 0x1ac6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac6d4: 0xffbf0000
    ctx->pc = 0x1ac6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac6d8: 0xc069c78
    ctx->pc = 0x1AC6D8u;
    SET_GPR_U32(ctx, 31, 0x1AC6E0u);
    ctx->pc = 0x1A71E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A71E0_0x1a71e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6E0u; }
    }
    if (ctx->pc != 0x1AC6E0u) { return; }
    ctx->pc = 0x1AC6E0u;
    // 0x1ac6e0: 0x24040010
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac6e4: 0xc069fec
    ctx->pc = 0x1AC6E4u;
    SET_GPR_U32(ctx, 31, 0x1AC6ECu);
    ctx->pc = 0x1AC6E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A7FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7FB0_0x1a7fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6ECu; }
    }
    if (ctx->pc != 0x1AC6ECu) { return; }
    ctx->pc = 0x1AC6ECu;
    // 0x1ac6ec: 0x3c01002b
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ac6f0: 0xc06b570
    ctx->pc = 0x1AC6F0u;
    SET_GPR_U32(ctx, 31, 0x1AC6F8u);
    ctx->pc = 0x1AC6F4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 0));
    ctx->pc = 0x1AD5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD5C0_0x1ad5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6F8u; }
    }
    if (ctx->pc != 0x1AC6F8u) { return; }
    ctx->pc = 0x1AC6F8u;
    // 0x1ac6f8: 0xdfbf0000
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac6fc: 0x24020001
    ctx->pc = 0x1ac6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac700: 0x3e00008
    ctx->pc = 0x1AC700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC708u;
    // 0x1ac708: 0x0
    ctx->pc = 0x1ac708u;
    // NOP
    // 0x1ac70c: 0x0
    ctx->pc = 0x1ac70cu;
    // NOP
}
