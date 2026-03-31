#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013AF00
// Address: 0x13af00 - 0x13af98
void sub_0013AF00_0x13af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13af00u;

    // 0x13af00: 0x27bdfff0
    ctx->pc = 0x13af00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af04: 0xffbf0000
    ctx->pc = 0x13af04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af08: 0xdfbf0000
    ctx->pc = 0x13af08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af0c: 0x804e08e
    ctx->pc = 0x13AF0Cu;
    ctx->pc = 0x13AF10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x138238u;
    entry_138238_0x138278(rdram, ctx, runtime); return;
    ctx->pc = 0x13AF14u;
    // 0x13af14: 0x0
    ctx->pc = 0x13af14u;
    // NOP
    // 0x13af18: 0x27bdfff0
    ctx->pc = 0x13af18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af1c: 0xffbf0000
    ctx->pc = 0x13af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af20: 0xdfbf0000
    ctx->pc = 0x13af20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af24: 0x804e09e
    ctx->pc = 0x13AF24u;
    ctx->pc = 0x13AF28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x138278u;
    entry_138278_0x138288(rdram, ctx, runtime); return;
    ctx->pc = 0x13AF2Cu;
    // 0x13af2c: 0x0
    ctx->pc = 0x13af2cu;
    // NOP
    // 0x13af30: 0x27bdfff0
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af34: 0xffbf0000
    ctx->pc = 0x13af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af38: 0xdfbf0000
    ctx->pc = 0x13af38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af3c: 0x804e0a2
    ctx->pc = 0x13AF3Cu;
    ctx->pc = 0x13AF40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x138288u;
    entry_138288_0x1382e0(rdram, ctx, runtime); return;
    ctx->pc = 0x13AF44u;
    // 0x13af44: 0x0
    ctx->pc = 0x13af44u;
    // NOP
    // 0x13af48: 0x27bdfff0
    ctx->pc = 0x13af48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af4c: 0xffbf0000
    ctx->pc = 0x13af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af50: 0xdfbf0000
    ctx->pc = 0x13af50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af54: 0x804e0b8
    ctx->pc = 0x13AF54u;
    ctx->pc = 0x13AF58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1382E0u;
    entry_1382e0_0x1382f0(rdram, ctx, runtime); return;
    ctx->pc = 0x13AF5Cu;
    // 0x13af5c: 0x0
    ctx->pc = 0x13af5cu;
    // NOP
    // 0x13af60: 0x27bdfff0
    ctx->pc = 0x13af60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af64: 0x3c020022
    ctx->pc = 0x13af64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13af68: 0xffbf0000
    ctx->pc = 0x13af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af6c: 0x2442da78
    ctx->pc = 0x13af6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957688));
    // 0x13af70: 0x202d
    ctx->pc = 0x13af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af74: 0xc04f286
    ctx->pc = 0x13AF74u;
    SET_GPR_U32(ctx, 31, 0x13AF7Cu);
    ctx->pc = 0x13AF78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13CA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA18_0x13ca18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AF7Cu; }
    }
    if (ctx->pc != 0x13AF7Cu) { return; }
    ctx->pc = 0x13AF7Cu;
    // 0x13af7c: 0xc04f2aa
    ctx->pc = 0x13AF7Cu;
    SET_GPR_U32(ctx, 31, 0x13AF84u);
    ctx->pc = 0x13AF80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAA8_0x13caa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AF84u; }
    }
    if (ctx->pc != 0x13AF84u) { return; }
    ctx->pc = 0x13AF84u;
    // 0x13af84: 0x3c020022
    ctx->pc = 0x13af84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13af88: 0xdfbf0000
    ctx->pc = 0x13af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af8c: 0x2442da88
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957704));
    // 0x13af90: 0x3e00008
    ctx->pc = 0x13AF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AF94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13AF98u;
}
