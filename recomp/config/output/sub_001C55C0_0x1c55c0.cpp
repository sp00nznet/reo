#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C55C0
// Address: 0x1c55c0 - 0x1c5630
void sub_001C55C0_0x1c55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c55c0u;

    // 0x1c55c0: 0x27bdffd0
    ctx->pc = 0x1c55c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c55c4: 0xffbf0020
    ctx->pc = 0x1c55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c55c8: 0x7fb10010
    ctx->pc = 0x1c55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c55cc: 0x7fb00000
    ctx->pc = 0x1c55ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c55d0: 0x8c8400ec
    ctx->pc = 0x1c55d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1c55d4: 0x24910008
    ctx->pc = 0x1c55d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c55d8: 0xc0715d8
    ctx->pc = 0x1C55D8u;
    SET_GPR_U32(ctx, 31, 0x1C55E0u);
    ctx->pc = 0x1C55DCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 264));
    ctx->pc = 0x1C5760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5760_0x1c5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55E0u; }
    }
    if (ctx->pc != 0x1C55E0u) { return; }
    ctx->pc = 0x1C55E0u;
    // 0x1c55e0: 0x4410003
    ctx->pc = 0x1C55E0u;
    {
        const bool branch_taken_0x1c55e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C55E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c55e0) {
            ctx->pc = 0x1C55F0u;
            goto label_1c55f0;
        }
    }
    ctx->pc = 0x1C55E8u;
    // 0x1c55e8: 0x1000000a
    ctx->pc = 0x1C55E8u;
    {
        const bool branch_taken_0x1c55e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C55ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1c55e8) {
            ctx->pc = 0x1C5614u;
            goto label_1c5614;
        }
    }
    ctx->pc = 0x1C55F0u;
label_1c55f0:
    // 0x1c55f0: 0xc071520
    ctx->pc = 0x1C55F0u;
    SET_GPR_U32(ctx, 31, 0x1C55F8u);
    ctx->pc = 0x1C5480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5480_0x1c5480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55F8u; }
    }
    if (ctx->pc != 0x1C55F8u) { return; }
    ctx->pc = 0x1C55F8u;
    // 0x1c55f8: 0xc071538
    ctx->pc = 0x1C55F8u;
    SET_GPR_U32(ctx, 31, 0x1C5600u);
    ctx->pc = 0x1C55FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C54E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C54E0_0x1c54e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5600u; }
    }
    if (ctx->pc != 0x1C5600u) { return; }
    ctx->pc = 0x1C5600u;
    // 0x1c5600: 0xc071540
    ctx->pc = 0x1C5600u;
    SET_GPR_U32(ctx, 31, 0x1C5608u);
    ctx->pc = 0x1C5604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5500_0x1c5500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5608u; }
    }
    if (ctx->pc != 0x1C5608u) { return; }
    ctx->pc = 0x1C5608u;
    // 0x1c5608: 0xc071548
    ctx->pc = 0x1C5608u;
    SET_GPR_U32(ctx, 31, 0x1C5610u);
    ctx->pc = 0x1C560Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5520_0x1c5520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5610u; }
    }
    if (ctx->pc != 0x1C5610u) { return; }
    ctx->pc = 0x1C5610u;
    // 0x1c5610: 0x102d
    ctx->pc = 0x1c5610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5614:
    // 0x1c5614: 0xdfbf0020
    ctx->pc = 0x1c5614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5618: 0x7bb10010
    ctx->pc = 0x1c5618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c561c: 0x7bb00000
    ctx->pc = 0x1c561cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5620: 0x3e00008
    ctx->pc = 0x1C5620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C55F0u: goto label_1c55f0;
            case 0x1C5614u: goto label_1c5614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5628u;
    // 0x1c5628: 0x0
    ctx->pc = 0x1c5628u;
    // NOP
    // 0x1c562c: 0x0
    ctx->pc = 0x1c562cu;
    // NOP
}
