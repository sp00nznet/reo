#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012A158
// Address: 0x12a158 - 0x12a1a8
void sub_0012A158_0x12a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a158u;

label_12a158:
    // 0x12a158: 0x27bdfff0
    ctx->pc = 0x12a158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a15c: 0xffbf0000
    ctx->pc = 0x12a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a160: 0xc04f410
    ctx->pc = 0x12A160u;
    SET_GPR_U32(ctx, 31, 0x12A168u);
    ctx->pc = 0x13D040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D040_0x13d040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A168u; }
    }
    if (ctx->pc != 0x12A168u) { return; }
    ctx->pc = 0x12A168u;
    // 0x12a168: 0xdfbf0000
    ctx->pc = 0x12a168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a16c: 0x102d
    ctx->pc = 0x12a16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a170: 0x3e00008
    ctx->pc = 0x12A170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A158u: goto label_12a158;
            case 0x12A198u: goto label_12a198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A178u;
    // 0x12a178: 0x27bdfff0
    ctx->pc = 0x12a178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a17c: 0xffbf0000
    ctx->pc = 0x12a17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a180: 0xc04a86a
    ctx->pc = 0x12A180u;
    SET_GPR_U32(ctx, 31, 0x12A188u);
    ctx->pc = 0x12A184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A1A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A1A8_0x12a1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A188u; }
    }
    if (ctx->pc != 0x12A188u) { return; }
    ctx->pc = 0x12A188u;
    // 0x12a188: 0xc04a872
    ctx->pc = 0x12A188u;
    SET_GPR_U32(ctx, 31, 0x12A190u);
    ctx->pc = 0x12A18Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A1C8_0x12a1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A190u; }
    }
    if (ctx->pc != 0x12A190u) { return; }
    ctx->pc = 0x12A190u;
    // 0x12a190: 0xc04a856
    ctx->pc = 0x12A190u;
    SET_GPR_U32(ctx, 31, 0x12A198u);
    ctx->pc = 0x12A194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A158u;
    goto label_12a158;
    ctx->pc = 0x12A198u;
label_12a198:
    // 0x12a198: 0x102d
    ctx->pc = 0x12a198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a19c: 0xdfbf0000
    ctx->pc = 0x12a19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a1a0: 0x3e00008
    ctx->pc = 0x12A1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A1A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A158u: goto label_12a158;
            case 0x12A198u: goto label_12a198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A1A8u;
}
