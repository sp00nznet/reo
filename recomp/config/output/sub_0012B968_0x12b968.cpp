#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B968
// Address: 0x12b968 - 0x12ba38
void sub_0012B968_0x12b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b968u;

    // 0x12b968: 0x27bdffc0
    ctx->pc = 0x12b968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b96c: 0xffb60030
    ctx->pc = 0x12b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12b970: 0x3c160021
    ctx->pc = 0x12b970u;
    SET_GPR_U32(ctx, 22, ((uint32_t)33 << 16));
    // 0x12b974: 0xffb00000
    ctx->pc = 0x12b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b978: 0x26c30540
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 1344));
    // 0x12b97c: 0xffb10008
    ctx->pc = 0x12b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b980: 0xffb20010
    ctx->pc = 0x12b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b984: 0xffb30018
    ctx->pc = 0x12b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12b988: 0xffb40020
    ctx->pc = 0x12b988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12b98c: 0xffb50028
    ctx->pc = 0x12b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12b990: 0xffbf0038
    ctx->pc = 0x12b990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12b994: 0xdc620000
    ctx->pc = 0x12b994u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b998: 0x14400015
    ctx->pc = 0x12B998u;
    {
        const bool branch_taken_0x12b998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12B99Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
        if (branch_taken_0x12b998) {
            ctx->pc = 0x12B9F0u;
            goto label_12b9f0;
        }
    }
    ctx->pc = 0x12B9A0u;
    // 0x12b9a0: 0x3c140021
    ctx->pc = 0x12b9a0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x12b9a4: 0x60982d
    ctx->pc = 0x12b9a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9a8: 0x26b20538
    ctx->pc = 0x12b9a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1336));
    // 0x12b9ac: 0x24110001
    ctx->pc = 0x12b9acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b9b0: 0x269004ec
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 1260));
    // 0x12b9b4: 0x0
    ctx->pc = 0x12b9b4u;
    // NOP
label_12b9b8:
    // 0x12b9b8: 0xfe510000
    ctx->pc = 0x12b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x12b9bc: 0x24050001
    ctx->pc = 0x12b9bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b9c0: 0xc04512c
    ctx->pc = 0x12B9C0u;
    SET_GPR_U32(ctx, 31, 0x12B9C8u);
    ctx->pc = 0x12B9C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9C8u; }
    }
    if (ctx->pc != 0x12B9C8u) { return; }
    ctx->pc = 0x12B9C8u;
    // 0x12b9c8: 0xc045154
    ctx->pc = 0x12B9C8u;
    SET_GPR_U32(ctx, 31, 0x12B9D0u);
    ctx->pc = 0x12B9CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114550_0x114550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9D0u; }
    }
    if (ctx->pc != 0x12B9D0u) { return; }
    ctx->pc = 0x12B9D0u;
    // 0x12b9d0: 0xc04516c
    ctx->pc = 0x12B9D0u;
    SET_GPR_U32(ctx, 31, 0x12B9D8u);
    ctx->pc = 0x12B9D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1145B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001145B0_0x1145b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9D8u; }
    }
    if (ctx->pc != 0x12B9D8u) { return; }
    ctx->pc = 0x12B9D8u;
    // 0x12b9d8: 0xde630000
    ctx->pc = 0x12b9d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12b9dc: 0x1060fff6
    ctx->pc = 0x12B9DCu;
    {
        const bool branch_taken_0x12b9dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B9E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1344));
        if (branch_taken_0x12b9dc) {
            ctx->pc = 0x12B9B8u;
            goto label_12b9b8;
        }
    }
    ctx->pc = 0x12B9E4u;
    // 0x12b9e4: 0x10000005
    ctx->pc = 0x12B9E4u;
    {
        const bool branch_taken_0x12b9e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B9E8u;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x12b9e4) {
            ctx->pc = 0x12B9FCu;
            goto label_12b9fc;
        }
    }
    ctx->pc = 0x12B9ECu;
    // 0x12b9ec: 0x0
    ctx->pc = 0x12b9ecu;
    // NOP
label_12b9f0:
    // 0x12b9f0: 0x3c140021
    ctx->pc = 0x12b9f0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x12b9f4: 0x26c20540
    ctx->pc = 0x12b9f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1344));
    // 0x12b9f8: 0xdfb60030
    ctx->pc = 0x12b9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12b9fc:
    // 0x12b9fc: 0x26a30538
    ctx->pc = 0x12b9fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 1336));
    // 0x12ba00: 0xdfb50028
    ctx->pc = 0x12ba00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ba04: 0x268404ec
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 1260));
    // 0x12ba08: 0xdfb40020
    ctx->pc = 0x12ba08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ba0c: 0xdfb00000
    ctx->pc = 0x12ba0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba10: 0xdfb10008
    ctx->pc = 0x12ba10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ba14: 0xdfb20010
    ctx->pc = 0x12ba14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ba18: 0xdfb30018
    ctx->pc = 0x12ba18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba1c: 0xdfbf0038
    ctx->pc = 0x12ba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ba20: 0xfc400000
    ctx->pc = 0x12ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x12ba24: 0xfc600000
    ctx->pc = 0x12ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x12ba28: 0xac800000
    ctx->pc = 0x12ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12ba2c: 0x3e00008
    ctx->pc = 0x12BA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B9B8u: goto label_12b9b8;
            case 0x12B9F0u: goto label_12b9f0;
            case 0x12B9FCu: goto label_12b9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BA34u;
    // 0x12ba34: 0x0
    ctx->pc = 0x12ba34u;
    // NOP
}
