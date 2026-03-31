#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B4A0
// Address: 0x15b4a0 - 0x15b4f8
void sub_0015B4A0_0x15b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b4a0u;

    // 0x15b4a0: 0x27bdfff0
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b4a4: 0xffb00000
    ctx->pc = 0x15b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b4a8: 0xffbf0008
    ctx->pc = 0x15b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15b4ac: 0xc056d3e
    ctx->pc = 0x15B4ACu;
    SET_GPR_U32(ctx, 31, 0x15B4B4u);
    ctx->pc = 0x15B4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B4F8_0x15b4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4B4u; }
    }
    if (ctx->pc != 0x15B4B4u) { return; }
    ctx->pc = 0x15B4B4u;
    // 0x15b4b4: 0x40802d
    ctx->pc = 0x15b4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4b8: 0x240503c4
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 964));
    // 0x15b4bc: 0x1200000a
    ctx->pc = 0x15B4BCu;
    {
        const bool branch_taken_0x15b4bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B4C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15b4bc) {
            ctx->pc = 0x15B4E8u;
            goto label_15b4e8;
        }
    }
    ctx->pc = 0x15B4C4u;
    // 0x15b4c4: 0xc056da4
    ctx->pc = 0x15B4C4u;
    SET_GPR_U32(ctx, 31, 0x15B4CCu);
    ctx->pc = 0x15B690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B690_0x15b690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4CCu; }
    }
    if (ctx->pc != 0x15B4CCu) { return; }
    ctx->pc = 0x15B4CCu;
    // 0x15b4cc: 0xc056d52
    ctx->pc = 0x15B4CCu;
    SET_GPR_U32(ctx, 31, 0x15B4D4u);
    ctx->pc = 0x15B4D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B548_0x15b548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4D4u; }
    }
    if (ctx->pc != 0x15B4D4u) { return; }
    ctx->pc = 0x15B4D4u;
    // 0x15b4d4: 0x40802d
    ctx->pc = 0x15b4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4d8: 0xc056e08
    ctx->pc = 0x15B4D8u;
    SET_GPR_U32(ctx, 31, 0x15B4E0u);
    ctx->pc = 0x15B4DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B820_0x15b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4E0u; }
    }
    if (ctx->pc != 0x15B4E0u) { return; }
    ctx->pc = 0x15B4E0u;
    // 0x15b4e0: 0xae020380
    ctx->pc = 0x15b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
    // 0x15b4e4: 0x200102d
    ctx->pc = 0x15b4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b4e8:
    // 0x15b4e8: 0xdfb00000
    ctx->pc = 0x15b4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b4ec: 0xdfbf0008
    ctx->pc = 0x15b4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b4f0: 0x3e00008
    ctx->pc = 0x15B4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B4F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B4E8u: goto label_15b4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B4F8u;
}
