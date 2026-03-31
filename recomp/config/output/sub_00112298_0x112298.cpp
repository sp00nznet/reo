#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112298
// Address: 0x112298 - 0x1122e8
void sub_00112298_0x112298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112298u;

    // 0x112298: 0x27bdffa0
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11229c: 0xffa40040
    ctx->pc = 0x11229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1122a0: 0x27a40040
    ctx->pc = 0x1122a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1122a4: 0xffa50048
    ctx->pc = 0x1122a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1122a8: 0xffb00050
    ctx->pc = 0x1122a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1122ac: 0xffbf0058
    ctx->pc = 0x1122acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1122b0: 0xc044674
    ctx->pc = 0x1122B0u;
    SET_GPR_U32(ctx, 31, 0x1122B8u);
    ctx->pc = 0x1122B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1122B8u; }
    }
    if (ctx->pc != 0x1122B8u) { return; }
    ctx->pc = 0x1122B8u;
    // 0x1122b8: 0x27b00020
    ctx->pc = 0x1122b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1122bc: 0x27a40048
    ctx->pc = 0x1122bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1122c0: 0xc044674
    ctx->pc = 0x1122C0u;
    SET_GPR_U32(ctx, 31, 0x1122C8u);
    ctx->pc = 0x1122C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1122C8u; }
    }
    if (ctx->pc != 0x1122C8u) { return; }
    ctx->pc = 0x1122C8u;
    // 0x1122c8: 0x200282d
    ctx->pc = 0x1122c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122cc: 0xc04485e
    ctx->pc = 0x1122CCu;
    SET_GPR_U32(ctx, 31, 0x1122D4u);
    ctx->pc = 0x1122D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112178u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112178_0x112178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1122D4u; }
    }
    if (ctx->pc != 0x1122D4u) { return; }
    ctx->pc = 0x1122D4u;
    // 0x1122d4: 0xdfb00050
    ctx->pc = 0x1122d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1122d8: 0xdfbf0058
    ctx->pc = 0x1122d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1122dc: 0x3e00008
    ctx->pc = 0x1122DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1122E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1122E4u;
    // 0x1122e4: 0x0
    ctx->pc = 0x1122e4u;
    // NOP
}
