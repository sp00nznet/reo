#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012BA38
// Address: 0x12ba38 - 0x12bb08
void sub_0012BA38_0x12ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12ba38u;

    // 0x12ba38: 0x27bdffc0
    ctx->pc = 0x12ba38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12ba3c: 0xffb60030
    ctx->pc = 0x12ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12ba40: 0x3c160021
    ctx->pc = 0x12ba40u;
    SET_GPR_U32(ctx, 22, ((uint32_t)33 << 16));
    // 0x12ba44: 0xffb00000
    ctx->pc = 0x12ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ba48: 0x26c30520
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 1312));
    // 0x12ba4c: 0xffb10008
    ctx->pc = 0x12ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ba50: 0xffb20010
    ctx->pc = 0x12ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ba54: 0xffb30018
    ctx->pc = 0x12ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ba58: 0xffb40020
    ctx->pc = 0x12ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ba5c: 0xffb50028
    ctx->pc = 0x12ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12ba60: 0xffbf0038
    ctx->pc = 0x12ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12ba64: 0xdc620000
    ctx->pc = 0x12ba64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ba68: 0x14400015
    ctx->pc = 0x12BA68u;
    {
        const bool branch_taken_0x12ba68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12BA6Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
        if (branch_taken_0x12ba68) {
            ctx->pc = 0x12BAC0u;
            goto label_12bac0;
        }
    }
    ctx->pc = 0x12BA70u;
    // 0x12ba70: 0x3c140021
    ctx->pc = 0x12ba70u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x12ba74: 0x60982d
    ctx->pc = 0x12ba74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba78: 0x26b20518
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1304));
    // 0x12ba7c: 0x24110001
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba80: 0x269004e0
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 1248));
    // 0x12ba84: 0x0
    ctx->pc = 0x12ba84u;
    // NOP
label_12ba88:
    // 0x12ba88: 0xfe510000
    ctx->pc = 0x12ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x12ba8c: 0x24050001
    ctx->pc = 0x12ba8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba90: 0xc04512c
    ctx->pc = 0x12BA90u;
    SET_GPR_U32(ctx, 31, 0x12BA98u);
    ctx->pc = 0x12BA94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA98u; }
    }
    if (ctx->pc != 0x12BA98u) { return; }
    ctx->pc = 0x12BA98u;
    // 0x12ba98: 0xc045154
    ctx->pc = 0x12BA98u;
    SET_GPR_U32(ctx, 31, 0x12BAA0u);
    ctx->pc = 0x12BA9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114550_0x114550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAA0u; }
    }
    if (ctx->pc != 0x12BAA0u) { return; }
    ctx->pc = 0x12BAA0u;
    // 0x12baa0: 0xc04516c
    ctx->pc = 0x12BAA0u;
    SET_GPR_U32(ctx, 31, 0x12BAA8u);
    ctx->pc = 0x12BAA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1145B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001145B0_0x1145b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAA8u; }
    }
    if (ctx->pc != 0x12BAA8u) { return; }
    ctx->pc = 0x12BAA8u;
    // 0x12baa8: 0xde630000
    ctx->pc = 0x12baa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12baac: 0x1060fff6
    ctx->pc = 0x12BAACu;
    {
        const bool branch_taken_0x12baac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12BAB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1312));
        if (branch_taken_0x12baac) {
            ctx->pc = 0x12BA88u;
            goto label_12ba88;
        }
    }
    ctx->pc = 0x12BAB4u;
    // 0x12bab4: 0x10000005
    ctx->pc = 0x12BAB4u;
    {
        const bool branch_taken_0x12bab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12BAB8u;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x12bab4) {
            ctx->pc = 0x12BACCu;
            goto label_12bacc;
        }
    }
    ctx->pc = 0x12BABCu;
    // 0x12babc: 0x0
    ctx->pc = 0x12babcu;
    // NOP
label_12bac0:
    // 0x12bac0: 0x3c140021
    ctx->pc = 0x12bac0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x12bac4: 0x26c20520
    ctx->pc = 0x12bac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1312));
    // 0x12bac8: 0xdfb60030
    ctx->pc = 0x12bac8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12bacc:
    // 0x12bacc: 0x26a30518
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 1304));
    // 0x12bad0: 0xdfb50028
    ctx->pc = 0x12bad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12bad4: 0x268404e0
    ctx->pc = 0x12bad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 1248));
    // 0x12bad8: 0xdfb40020
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12badc: 0xdfb00000
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bae0: 0xdfb10008
    ctx->pc = 0x12bae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bae4: 0xdfb20010
    ctx->pc = 0x12bae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bae8: 0xdfb30018
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12baec: 0xdfbf0038
    ctx->pc = 0x12baecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12baf0: 0xfc400000
    ctx->pc = 0x12baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x12baf4: 0xfc600000
    ctx->pc = 0x12baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x12baf8: 0xac800000
    ctx->pc = 0x12baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12bafc: 0x3e00008
    ctx->pc = 0x12BAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BA88u: goto label_12ba88;
            case 0x12BAC0u: goto label_12bac0;
            case 0x12BACCu: goto label_12bacc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BB04u;
    // 0x12bb04: 0x0
    ctx->pc = 0x12bb04u;
    // NOP
}
