#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B8B8
// Address: 0x16b8b8 - 0x16b990
void sub_0016B8B8_0x16b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b8b8u;

    // 0x16b8b8: 0x3c027fff
    ctx->pc = 0x16b8b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x16b8bc: 0x2403ffff
    ctx->pc = 0x16b8bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b8c0: 0x3442ffff
    ctx->pc = 0x16b8c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16b8c4: 0xac83002c
    ctx->pc = 0x16b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x16b8c8: 0xac82001c
    ctx->pc = 0x16b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x16b8cc: 0x24060043
    ctx->pc = 0x16b8ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 67));
    // 0x16b8d0: 0xac800000
    ctx->pc = 0x16b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16b8d4: 0x24850140
    ctx->pc = 0x16b8d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 320));
    // 0x16b8d8: 0xac800004
    ctx->pc = 0x16b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x16b8dc: 0xac800008
    ctx->pc = 0x16b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x16b8e0: 0xac82000c
    ctx->pc = 0x16b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16b8e4: 0xac820010
    ctx->pc = 0x16b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x16b8e8: 0xac800014
    ctx->pc = 0x16b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x16b8ec: 0xac820018
    ctx->pc = 0x16b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x16b8f0: 0xac830020
    ctx->pc = 0x16b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x16b8f4: 0xac830024
    ctx->pc = 0x16b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x16b8f8: 0xac830028
    ctx->pc = 0x16b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x16b8fc: 0xac800030
    ctx->pc = 0x16b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_16b900:
    // 0x16b900: 0x24c6ffff
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x16b904: 0xaca00000
    ctx->pc = 0x16b904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x16b908: 0x0
    ctx->pc = 0x16b908u;
    // NOP
    // 0x16b90c: 0x0
    ctx->pc = 0x16b90cu;
    // NOP
    // 0x16b910: 0x0
    ctx->pc = 0x16b910u;
    // NOP
    // 0x16b914: 0x4c1fffa
    ctx->pc = 0x16B914u;
    {
        const bool branch_taken_0x16b914 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16B918u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967292));
        if (branch_taken_0x16b914) {
            ctx->pc = 0x16B900u;
            goto label_16b900;
        }
    }
    ctx->pc = 0x16B91Cu;
    // 0x16b91c: 0xac800148
    ctx->pc = 0x16b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 0));
    // 0x16b920: 0x3e00008
    ctx->pc = 0x16B920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B924u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B900u: goto label_16b900;
            case 0x16B980u: goto label_16b980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B928u;
    // 0x16b928: 0x27bdfff0
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b92c: 0xffbf0000
    ctx->pc = 0x16b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b930: 0xdfbf0000
    ctx->pc = 0x16b930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b934: 0x805a704
    ctx->pc = 0x16B934u;
    ctx->pc = 0x16B938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16B93Cu;
    // 0x16b93c: 0x0
    ctx->pc = 0x16b93cu;
    // NOP
    // 0x16b940: 0x27bdfff0
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b944: 0xffb00000
    ctx->pc = 0x16b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b948: 0x80802d
    ctx->pc = 0x16b948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b94c: 0xffbf0008
    ctx->pc = 0x16b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b950: 0x8e021aec
    ctx->pc = 0x16b950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6892)));
    // 0x16b954: 0xc05ae64
    ctx->pc = 0x16B954u;
    SET_GPR_U32(ctx, 31, 0x16B95Cu);
    ctx->pc = 0x16B958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x16B990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B990_0x16b990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B95Cu; }
    }
    if (ctx->pc != 0x16B95Cu) { return; }
    ctx->pc = 0x16B95Cu;
    // 0x16b95c: 0x3c05ff00
    ctx->pc = 0x16b95cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16b960: 0x10400007
    ctx->pc = 0x16B960u;
    {
        const bool branch_taken_0x16b960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B964u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b960) {
            ctx->pc = 0x16B980u;
            goto label_16b980;
        }
    }
    ctx->pc = 0x16B968u;
    // 0x16b968: 0xdfb00000
    ctx->pc = 0x16b968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b96c: 0x34a50d0a
    ctx->pc = 0x16b96cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3338));
    // 0x16b970: 0xdfbf0008
    ctx->pc = 0x16b970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b974: 0x805a704
    ctx->pc = 0x16B974u;
    ctx->pc = 0x16B978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16B97Cu;
    // 0x16b97c: 0x0
    ctx->pc = 0x16b97cu;
    // NOP
label_16b980:
    // 0x16b980: 0xdfb00000
    ctx->pc = 0x16b980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b984: 0xdfbf0008
    ctx->pc = 0x16b984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b988: 0x3e00008
    ctx->pc = 0x16B988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B98Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B900u: goto label_16b900;
            case 0x16B980u: goto label_16b980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B990u;
}
