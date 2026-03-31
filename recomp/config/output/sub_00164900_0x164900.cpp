#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164900
// Address: 0x164900 - 0x1649c0
void sub_00164900_0x164900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164900u;

    // 0x164900: 0x8c830000
    ctx->pc = 0x164900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164904: 0x3c050027
    ctx->pc = 0x164904u;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x164908: 0x24a50750
    ctx->pc = 0x164908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1872));
    // 0x16490c: 0x8c820008
    ctx->pc = 0x16490cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x164910: 0xaca30000
    ctx->pc = 0x164910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x164914: 0x2406ffe0
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x164918: 0x2442001f
    ctx->pc = 0x164918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x16491c: 0x8c830004
    ctx->pc = 0x16491cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x164920: 0x461024
    ctx->pc = 0x164920u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164924: 0xaca20008
    ctx->pc = 0x164924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x164928: 0xaca30004
    ctx->pc = 0x164928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x16492c: 0x8c820018
    ctx->pc = 0x16492cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x164930: 0x8c83000c
    ctx->pc = 0x164930u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x164934: 0x2442001f
    ctx->pc = 0x164934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x164938: 0xaca3000c
    ctx->pc = 0x164938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x16493c: 0x461024
    ctx->pc = 0x16493cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164940: 0xaca20018
    ctx->pc = 0x164940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x164944: 0x8c830010
    ctx->pc = 0x164944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x164948: 0xaca30010
    ctx->pc = 0x164948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x16494c: 0x8c820014
    ctx->pc = 0x16494cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x164950: 0x3e00008
    ctx->pc = 0x164950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164954u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164958u;
    // 0x164958: 0x27bdfff0
    ctx->pc = 0x164958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16495c: 0xffbf0000
    ctx->pc = 0x16495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164960: 0xc04a87a
    ctx->pc = 0x164960u;
    SET_GPR_U32(ctx, 31, 0x164968u);
    ctx->pc = 0x12A1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A1E8_0x12a1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164968u; }
    }
    if (ctx->pc != 0x164968u) { return; }
    ctx->pc = 0x164968u;
    // 0x164968: 0xc04b246
    ctx->pc = 0x164968u;
    SET_GPR_U32(ctx, 31, 0x164970u);
    ctx->pc = 0x12C918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C918_0x12c918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164970u; }
    }
    if (ctx->pc != 0x164970u) { return; }
    ctx->pc = 0x164970u;
    // 0x164970: 0x3c040027
    ctx->pc = 0x164970u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x164974: 0x282d
    ctx->pc = 0x164974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164978: 0x24840750
    ctx->pc = 0x164978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1872));
    // 0x16497c: 0xc0558b4
    ctx->pc = 0x16497Cu;
    SET_GPR_U32(ctx, 31, 0x164984u);
    ctx->pc = 0x164980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164984u; }
    }
    if (ctx->pc != 0x164984u) { return; }
    ctx->pc = 0x164984u;
    // 0x164984: 0x102d
    ctx->pc = 0x164984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164988: 0xdfbf0000
    ctx->pc = 0x164988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16498c: 0x3e00008
    ctx->pc = 0x16498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164990u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164994u;
    // 0x164994: 0x0
    ctx->pc = 0x164994u;
    // NOP
    // 0x164998: 0x27bdfff0
    ctx->pc = 0x164998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16499c: 0xffbf0000
    ctx->pc = 0x16499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1649a0: 0xc04b24c
    ctx->pc = 0x1649A0u;
    SET_GPR_U32(ctx, 31, 0x1649A8u);
    ctx->pc = 0x12C930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C930_0x12c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649A8u; }
    }
    if (ctx->pc != 0x1649A8u) { return; }
    ctx->pc = 0x1649A8u;
    // 0x1649a8: 0xc04a8e2
    ctx->pc = 0x1649A8u;
    SET_GPR_U32(ctx, 31, 0x1649B0u);
    ctx->pc = 0x12A388u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A388_0x12a388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649B0u; }
    }
    if (ctx->pc != 0x1649B0u) { return; }
    ctx->pc = 0x1649B0u;
    // 0x1649b0: 0x102d
    ctx->pc = 0x1649b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649b4: 0xdfbf0000
    ctx->pc = 0x1649b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1649b8: 0x3e00008
    ctx->pc = 0x1649B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1649BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1649C0u;
}
