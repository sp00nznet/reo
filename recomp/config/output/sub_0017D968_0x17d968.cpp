#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D968
// Address: 0x17d968 - 0x17da70
void sub_0017D968_0x17d968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d968u;

    // 0x17d968: 0x27bdffb0
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d96c: 0x3c020024
    ctx->pc = 0x17d96cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17d970: 0x3c030024
    ctx->pc = 0x17d970u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17d974: 0xffb30038
    ctx->pc = 0x17d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x17d978: 0x24531450
    ctx->pc = 0x17d978u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 5200));
    // 0x17d97c: 0xffb00020
    ctx->pc = 0x17d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17d980: 0xffb20030
    ctx->pc = 0x17d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17d984: 0xe0902d
    ctx->pc = 0x17d984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d988: 0xffb40040
    ctx->pc = 0x17d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17d98c: 0xa0a02d
    ctx->pc = 0x17d98cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d990: 0xc0802d
    ctx->pc = 0x17d990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d994: 0x260302d
    ctx->pc = 0x17d994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d998: 0x24651460
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 5216));
    // 0x17d99c: 0x3a0382d
    ctx->pc = 0x17d99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9a0: 0x27a80004
    ctx->pc = 0x17d9a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    // 0x17d9a4: 0xffb10028
    ctx->pc = 0x17d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17d9a8: 0xffbf0048
    ctx->pc = 0x17d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17d9ac: 0xc05f69c
    ctx->pc = 0x17D9ACu;
    SET_GPR_U32(ctx, 31, 0x17D9B4u);
    ctx->pc = 0x17D9B0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DA70_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9B4u; }
    }
    if (ctx->pc != 0x17D9B4u) { return; }
    ctx->pc = 0x17D9B4u;
    // 0x17d9b4: 0x3c050024
    ctx->pc = 0x17d9b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17d9b8: 0x8fa20000
    ctx->pc = 0x17d9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d9bc: 0x3c037fff
    ctx->pc = 0x17d9bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x17d9c0: 0x27a60008
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    // 0x17d9c4: 0x24a51468
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5224));
    // 0x17d9c8: 0x3463ffff
    ctx->pc = 0x17d9c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x17d9cc: 0x14400004
    ctx->pc = 0x17D9CCu;
    {
        const bool branch_taken_0x17d9cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D9D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d9cc) {
            ctx->pc = 0x17D9E0u;
            goto label_17d9e0;
        }
    }
    ctx->pc = 0x17D9D4u;
    // 0x17d9d4: 0xae000000
    ctx->pc = 0x17d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17d9d8: 0x1000001d
    ctx->pc = 0x17D9D8u;
    {
        const bool branch_taken_0x17d9d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D9DCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x17d9d8) {
            ctx->pc = 0x17DA50u;
            goto label_17da50;
        }
    }
    ctx->pc = 0x17D9E0u;
label_17d9e0:
    // 0x17d9e0: 0xc042a32
    ctx->pc = 0x17D9E0u;
    SET_GPR_U32(ctx, 31, 0x17D9E8u);
    ctx->pc = 0x10A8C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A8C8_0x10a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9E8u; }
    }
    if (ctx->pc != 0x17D9E8u) { return; }
    ctx->pc = 0x17D9E8u;
    // 0x17d9e8: 0x3c050024
    ctx->pc = 0x17d9e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17d9ec: 0x260302d
    ctx->pc = 0x17d9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9f0: 0x3a0382d
    ctx->pc = 0x17d9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9f4: 0x24a51470
    ctx->pc = 0x17d9f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5232));
    // 0x17d9f8: 0x27a80004
    ctx->pc = 0x17d9f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    // 0x17d9fc: 0xc05f69c
    ctx->pc = 0x17D9FCu;
    SET_GPR_U32(ctx, 31, 0x17DA04u);
    ctx->pc = 0x17DA00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DA70_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA04u; }
    }
    if (ctx->pc != 0x17DA04u) { return; }
    ctx->pc = 0x17DA04u;
    // 0x17da04: 0x3c050024
    ctx->pc = 0x17da04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17da08: 0x8fa30000
    ctx->pc = 0x17da08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17da0c: 0x3c027fff
    ctx->pc = 0x17da0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x17da10: 0x24a51478
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5240));
    // 0x17da14: 0x27a6000c
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 12));
    // 0x17da18: 0x27a70010
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17da1c: 0x27a80014
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 20));
    // 0x17da20: 0x14600003
    ctx->pc = 0x17DA20u;
    {
        const bool branch_taken_0x17da20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DA24u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x17da20) {
            ctx->pc = 0x17DA30u;
            goto label_17da30;
        }
    }
    ctx->pc = 0x17DA28u;
    // 0x17da28: 0x10000009
    ctx->pc = 0x17DA28u;
    {
        const bool branch_taken_0x17da28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DA2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17da28) {
            ctx->pc = 0x17DA50u;
            goto label_17da50;
        }
    }
    ctx->pc = 0x17DA30u;
label_17da30:
    // 0x17da30: 0x8fa40008
    ctx->pc = 0x17da30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17da34: 0x941018
    ctx->pc = 0x17da34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17da38: 0xc042a32
    ctx->pc = 0x17DA38u;
    SET_GPR_U32(ctx, 31, 0x17DA40u);
    ctx->pc = 0x17DA3Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x10A8C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A8C8_0x10a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA40u; }
    }
    if (ctx->pc != 0x17DA40u) { return; }
    ctx->pc = 0x17DA40u;
    // 0x17da40: 0x8fa30010
    ctx->pc = 0x17da40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17da44: 0x8fa20014
    ctx->pc = 0x17da44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17da48: 0xae030000
    ctx->pc = 0x17da48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17da4c: 0xae420000
    ctx->pc = 0x17da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17da50:
    // 0x17da50: 0xdfb00020
    ctx->pc = 0x17da50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17da54: 0xdfb10028
    ctx->pc = 0x17da54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17da58: 0xdfb20030
    ctx->pc = 0x17da58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17da5c: 0xdfb30038
    ctx->pc = 0x17da5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17da60: 0xdfb40040
    ctx->pc = 0x17da60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17da64: 0xdfbf0048
    ctx->pc = 0x17da64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17da68: 0x3e00008
    ctx->pc = 0x17DA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DA6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D9E0u: goto label_17d9e0;
            case 0x17DA30u: goto label_17da30;
            case 0x17DA50u: goto label_17da50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DA70u;
}
