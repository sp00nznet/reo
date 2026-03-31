#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128410
// Address: 0x128410 - 0x1284d0
void sub_00128410_0x128410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128410u;

    // 0x128410: 0x27bdfff0
    ctx->pc = 0x128410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128414: 0x3c030021
    ctx->pc = 0x128414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x128418: 0xffbf0000
    ctx->pc = 0x128418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12841c: 0x2463c8bc
    ctx->pc = 0x12841cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953148));
    // 0x128420: 0x8c620000
    ctx->pc = 0x128420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128424: 0x2442ffff
    ctx->pc = 0x128424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128428: 0x14400025
    ctx->pc = 0x128428u;
    {
        const bool branch_taken_0x128428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x128428) {
            ctx->pc = 0x1284C0u;
            goto label_1284c0;
        }
    }
    ctx->pc = 0x128430u;
    // 0x128430: 0xc04a502
    ctx->pc = 0x128430u;
    SET_GPR_U32(ctx, 31, 0x128438u);
    ctx->pc = 0x129408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129408_0x129408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128438u; }
    }
    if (ctx->pc != 0x128438u) { return; }
    ctx->pc = 0x128438u;
    // 0x128438: 0x3c0a0021
    ctx->pc = 0x128438u;
    SET_GPR_U32(ctx, 10, ((uint32_t)33 << 16));
    // 0x12843c: 0x3c040021
    ctx->pc = 0x12843cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x128440: 0x3c030021
    ctx->pc = 0x128440u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x128444: 0x3c070021
    ctx->pc = 0x128444u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x128448: 0x3c080021
    ctx->pc = 0x128448u;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x12844c: 0x3c090021
    ctx->pc = 0x12844cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)33 << 16));
    // 0x128450: 0x282d
    ctx->pc = 0x128450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128454: 0x2484d208
    ctx->pc = 0x128454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955528));
    // 0x128458: 0x24060020
    ctx->pc = 0x128458u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x12845c: 0x2402ffff
    ctx->pc = 0x12845cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128460: 0xac60d230
    ctx->pc = 0x128460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955568), GPR_U32(ctx, 0));
    // 0x128464: 0xad42d234
    ctx->pc = 0x128464u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294955572), GPR_U32(ctx, 2));
    // 0x128468: 0xace0d22c
    ctx->pc = 0x128468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955564), GPR_U32(ctx, 0));
    // 0x12846c: 0xad00d100
    ctx->pc = 0x12846cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294955264), GPR_U32(ctx, 0));
    // 0x128470: 0xc041f1a
    ctx->pc = 0x128470u;
    SET_GPR_U32(ctx, 31, 0x128478u);
    ctx->pc = 0x128474u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294955560), GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128478u; }
    }
    if (ctx->pc != 0x128478u) { return; }
    ctx->pc = 0x128478u;
    // 0x128478: 0x3c040021
    ctx->pc = 0x128478u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x12847c: 0x240500ff
    ctx->pc = 0x12847cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x128480: 0x2484d108
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955272));
    // 0x128484: 0xc041f1a
    ctx->pc = 0x128484u;
    SET_GPR_U32(ctx, 31, 0x12848Cu);
    ctx->pc = 0x128488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12848Cu; }
    }
    if (ctx->pc != 0x12848Cu) { return; }
    ctx->pc = 0x12848Cu;
    // 0x12848c: 0x3c040021
    ctx->pc = 0x12848cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x128490: 0x2484cd00
    ctx->pc = 0x128490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954240));
    // 0x128494: 0x282d
    ctx->pc = 0x128494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128498: 0xc041f1a
    ctx->pc = 0x128498u;
    SET_GPR_U32(ctx, 31, 0x1284A0u);
    ctx->pc = 0x12849Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284A0u; }
    }
    if (ctx->pc != 0x1284A0u) { return; }
    ctx->pc = 0x1284A0u;
    // 0x1284a0: 0x3c040021
    ctx->pc = 0x1284a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x1284a4: 0xdfbf0000
    ctx->pc = 0x1284a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1284a8: 0x2484c8c0
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953152));
    // 0x1284ac: 0x282d
    ctx->pc = 0x1284acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284b0: 0x24060440
    ctx->pc = 0x1284b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1284b4: 0x8041f1a
    ctx->pc = 0x1284B4u;
    ctx->pc = 0x1284B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1284BCu;
    // 0x1284bc: 0x0
    ctx->pc = 0x1284bcu;
    // NOP
label_1284c0:
    // 0x1284c0: 0xdfbf0000
    ctx->pc = 0x1284c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1284c4: 0x3e00008
    ctx->pc = 0x1284C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1284C0u: goto label_1284c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1284CCu;
    // 0x1284cc: 0x0
    ctx->pc = 0x1284ccu;
    // NOP
}
