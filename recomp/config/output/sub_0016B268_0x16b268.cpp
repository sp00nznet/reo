#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B268
// Address: 0x16b268 - 0x16b2b8
void sub_0016B268_0x16b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b268u;

    // 0x16b268: 0x27bdffe0
    ctx->pc = 0x16b268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b26c: 0xffb00010
    ctx->pc = 0x16b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16b270: 0x80802d
    ctx->pc = 0x16b270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b274: 0x3a0282d
    ctx->pc = 0x16b274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b278: 0xffbf0018
    ctx->pc = 0x16b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16b27c: 0xc05ad4e
    ctx->pc = 0x16B27Cu;
    SET_GPR_U32(ctx, 31, 0x16B284u);
    ctx->pc = 0x16B280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x16B538u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B538_0x16b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B284u; }
    }
    if (ctx->pc != 0x16B284u) { return; }
    ctx->pc = 0x16B284u;
    // 0x16b284: 0xc05acae
    ctx->pc = 0x16B284u;
    SET_GPR_U32(ctx, 31, 0x16B28Cu);
    ctx->pc = 0x16B288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B2B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B2B8_0x16b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B28Cu; }
    }
    if (ctx->pc != 0x16B28Cu) { return; }
    ctx->pc = 0x16B28Cu;
    // 0x16b28c: 0xc05ad7a
    ctx->pc = 0x16B28Cu;
    SET_GPR_U32(ctx, 31, 0x16B294u);
    ctx->pc = 0x16B290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B5E8_0x16b5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B294u; }
    }
    if (ctx->pc != 0x16B294u) { return; }
    ctx->pc = 0x16B294u;
    // 0x16b294: 0xc05ad1c
    ctx->pc = 0x16B294u;
    SET_GPR_U32(ctx, 31, 0x16B29Cu);
    ctx->pc = 0x16B298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B470_0x16b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B29Cu; }
    }
    if (ctx->pc != 0x16B29Cu) { return; }
    ctx->pc = 0x16B29Cu;
    // 0x16b29c: 0xc05ada0
    ctx->pc = 0x16B29Cu;
    SET_GPR_U32(ctx, 31, 0x16B2A4u);
    ctx->pc = 0x16B2A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B680u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B680_0x16b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2A4u; }
    }
    if (ctx->pc != 0x16B2A4u) { return; }
    ctx->pc = 0x16B2A4u;
    // 0x16b2a4: 0xdfb00010
    ctx->pc = 0x16b2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b2a8: 0xdfbf0018
    ctx->pc = 0x16b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b2ac: 0x3e00008
    ctx->pc = 0x16B2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B2B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B2B4u;
    // 0x16b2b4: 0x0
    ctx->pc = 0x16b2b4u;
    // NOP
}
