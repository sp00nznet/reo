#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011B8B0
// Address: 0x11b8b0 - 0x11b9a0
void sub_0011B8B0_0x11b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b8b0u;

    // 0x11b8b0: 0x3c030021
    ctx->pc = 0x11b8b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11b8b4: 0x27bdffd0
    ctx->pc = 0x11b8b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b8b8: 0x8c629df8
    ctx->pc = 0x11b8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942200)));
    // 0x11b8bc: 0x80282d
    ctx->pc = 0x11b8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8c0: 0xffbf0020
    ctx->pc = 0x11b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b8c4: 0x4400011
    ctx->pc = 0x11B8C4u;
    {
        const bool branch_taken_0x11b8c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11B8C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x11b8c4) {
            ctx->pc = 0x11B90Cu;
            goto label_11b90c;
        }
    }
    ctx->pc = 0x11B8CCu;
    // 0x11b8cc: 0x3c070026
    ctx->pc = 0x11b8ccu;
    SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
    // 0x11b8d0: 0x3c040026
    ctx->pc = 0x11b8d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11b8d4: 0xace5e2c0
    ctx->pc = 0x11b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294959808), GPR_U32(ctx, 5));
    // 0x11b8d8: 0x3c100026
    ctx->pc = 0x11b8d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x11b8dc: 0x2484e240
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959680));
    // 0x11b8e0: 0x24e7e2c0
    ctx->pc = 0x11b8e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294959808));
    // 0x11b8e4: 0xafa00000
    ctx->pc = 0x11b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b8e8: 0x24050001
    ctx->pc = 0x11b8e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b8ec: 0x302d
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8f0: 0x24080004
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b8f4: 0x2609e280
    ctx->pc = 0x11b8f4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 4294959744));
    // 0x11b8f8: 0x240a0004
    ctx->pc = 0x11b8f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b8fc: 0xc045e7a
    ctx->pc = 0x11B8FCu;
    SET_GPR_U32(ctx, 31, 0x11B904u);
    ctx->pc = 0x11B900u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B904u; }
    }
    if (ctx->pc != 0x11B904u) { return; }
    ctx->pc = 0x11B904u;
    // 0x11b904: 0x4410002
    ctx->pc = 0x11B904u;
    {
        const bool branch_taken_0x11b904 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B908u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959744)));
        if (branch_taken_0x11b904) {
            ctx->pc = 0x11B910u;
            goto label_11b910;
        }
    }
    ctx->pc = 0x11B90Cu;
label_11b90c:
    // 0x11b90c: 0x102d
    ctx->pc = 0x11b90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b910:
    // 0x11b910: 0xdfbf0020
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b914: 0xdfb00010
    ctx->pc = 0x11b914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b918: 0x3e00008
    ctx->pc = 0x11B918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B91Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B910u: goto label_11b910;
            case 0x11B990u: goto label_11b990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B920u;
    // 0x11b920: 0x3c020021
    ctx->pc = 0x11b920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11b924: 0x27bdffd0
    ctx->pc = 0x11b924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b928: 0x8c439df8
    ctx->pc = 0x11b928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942200)));
    // 0x11b92c: 0x80382d
    ctx->pc = 0x11b92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b930: 0xffbf0020
    ctx->pc = 0x11b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b934: 0xffb00010
    ctx->pc = 0x11b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11b938: 0x4600015
    ctx->pc = 0x11B938u;
    {
        const bool branch_taken_0x11b938 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11B93Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11b938) {
            ctx->pc = 0x11B990u;
            goto label_11b990;
        }
    }
    ctx->pc = 0x11B940u;
    // 0x11b940: 0x3c020026
    ctx->pc = 0x11b940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x11b944: 0x3c040026
    ctx->pc = 0x11b944u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11b948: 0x2443e2c0
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294959808));
    // 0x11b94c: 0xac45e2c0
    ctx->pc = 0x11b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959808), GPR_U32(ctx, 5));
    // 0x11b950: 0xac670004
    ctx->pc = 0x11b950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x11b954: 0x3c100026
    ctx->pc = 0x11b954u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x11b958: 0xac660008
    ctx->pc = 0x11b958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x11b95c: 0x2484e240
    ctx->pc = 0x11b95cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959680));
    // 0x11b960: 0x60382d
    ctx->pc = 0x11b960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b964: 0x24050004
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b968: 0xafa00000
    ctx->pc = 0x11b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b96c: 0x302d
    ctx->pc = 0x11b96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b970: 0x2408000c
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
    // 0x11b974: 0x2609e280
    ctx->pc = 0x11b974u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 4294959744));
    // 0x11b978: 0x240a0004
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b97c: 0xc045e7a
    ctx->pc = 0x11B97Cu;
    SET_GPR_U32(ctx, 31, 0x11B984u);
    ctx->pc = 0x11B980u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B984u; }
    }
    if (ctx->pc != 0x11B984u) { return; }
    ctx->pc = 0x11B984u;
    // 0x11b984: 0x4410002
    ctx->pc = 0x11B984u;
    {
        const bool branch_taken_0x11b984 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B988u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959744)));
        if (branch_taken_0x11b984) {
            ctx->pc = 0x11B990u;
            goto label_11b990;
        }
    }
    ctx->pc = 0x11B98Cu;
    // 0x11b98c: 0x102d
    ctx->pc = 0x11b98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b990:
    // 0x11b990: 0xdfbf0020
    ctx->pc = 0x11b990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b994: 0xdfb00010
    ctx->pc = 0x11b994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b998: 0x3e00008
    ctx->pc = 0x11B998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B99Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B90Cu: goto label_11b90c;
            case 0x11B910u: goto label_11b910;
            case 0x11B990u: goto label_11b990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B9A0u;
}
