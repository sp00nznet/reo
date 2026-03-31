#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F7160
// Address: 0x1f7160 - 0x1f71e0
void sub_001F7160_0x1f7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f7160u;

    // 0x1f7160: 0x27bdffe0
    ctx->pc = 0x1f7160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7164: 0x3c040036
    ctx->pc = 0x1f7164u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1f7168: 0xffbf0010
    ctx->pc = 0x1f7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f716c: 0x2484f080
    ctx->pc = 0x1f716cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x1f7170: 0x7fb00000
    ctx->pc = 0x1f7170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7174: 0x282d
    ctx->pc = 0x1f7174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7178: 0x3c100037
    ctx->pc = 0x1f7178u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x1f717c: 0x34068000
    ctx->pc = 0x1f717cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1f7180: 0xc041f1a
    ctx->pc = 0x1F7180u;
    SET_GPR_U32(ctx, 31, 0x1F7188u);
    ctx->pc = 0x1F7184u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963328));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7188u; }
    }
    if (ctx->pc != 0x1F7188u) { return; }
    ctx->pc = 0x1F7188u;
    // 0x1f7188: 0x3c040036
    ctx->pc = 0x1f7188u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1f718c: 0x282d
    ctx->pc = 0x1f718cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7190: 0x24847080
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28800));
    // 0x1f7194: 0xc041f1a
    ctx->pc = 0x1F7194u;
    SET_GPR_U32(ctx, 31, 0x1F719Cu);
    ctx->pc = 0x1F7198u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F719Cu; }
    }
    if (ctx->pc != 0x1F719Cu) { return; }
    ctx->pc = 0x1F719Cu;
    // 0x1f719c: 0x3c050031
    ctx->pc = 0x1f719cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x1f71a0: 0x200202d
    ctx->pc = 0x1f71a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71a4: 0x24a565a8
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26024));
    // 0x1f71a8: 0xc042d7e
    ctx->pc = 0x1F71A8u;
    SET_GPR_U32(ctx, 31, 0x1F71B0u);
    ctx->pc = 0x1F71ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71B0u; }
    }
    if (ctx->pc != 0x1F71B0u) { return; }
    ctx->pc = 0x1F71B0u;
    // 0x1f71b0: 0x3c050026
    ctx->pc = 0x1f71b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1f71b4: 0x2604000a
    ctx->pc = 0x1f71b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10));
    // 0x1f71b8: 0x24a59bf8
    ctx->pc = 0x1f71b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941688));
    // 0x1f71bc: 0xc042d7e
    ctx->pc = 0x1F71BCu;
    SET_GPR_U32(ctx, 31, 0x1F71C4u);
    ctx->pc = 0x1F71C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71C4u; }
    }
    if (ctx->pc != 0x1F71C4u) { return; }
    ctx->pc = 0x1F71C4u;
    // 0x1f71c4: 0xae000014
    ctx->pc = 0x1f71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1f71c8: 0xdfbf0010
    ctx->pc = 0x1f71c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f71cc: 0x7bb00000
    ctx->pc = 0x1f71ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f71d0: 0x3e00008
    ctx->pc = 0x1F71D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F71D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F71D8u;
    // 0x1f71d8: 0x0
    ctx->pc = 0x1f71d8u;
    // NOP
    // 0x1f71dc: 0x0
    ctx->pc = 0x1f71dcu;
    // NOP
}
