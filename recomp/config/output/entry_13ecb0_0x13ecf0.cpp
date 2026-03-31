#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13ecb0
// Address: 0x13ecb0 - 0x13ecf0
void entry_13ecb0_0x13ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ecb0u;

label_13ecb0:
    // 0x13ecb0: 0x27bdfff0
    ctx->pc = 0x13ecb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ecb4:
    // 0x13ecb4: 0xffbf0000
    ctx->pc = 0x13ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ecb8:
    // 0x13ecb8: 0x8c820008
    ctx->pc = 0x13ecb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13ecbc:
    // 0x13ecbc: 0x8c440008
    ctx->pc = 0x13ecbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ecc0:
    // 0x13ecc0: 0x8c830000
    ctx->pc = 0x13ecc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ecc4:
    // 0x13ecc4: 0x8c620024
    ctx->pc = 0x13ecc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13ecc8:
    // 0x13ecc8: 0x40f809
label_13eccc:
    if (ctx->pc == 0x13ECCCu) {
        ctx->pc = 0x13ECCCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13ECD0u;
        goto label_13ecd0;
    }
    ctx->pc = 0x13ECC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13ECD0u);
        ctx->pc = 0x13ECCCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ECB0u: goto label_13ecb0;
            case 0x13ECB4u: goto label_13ecb4;
            case 0x13ECB8u: goto label_13ecb8;
            case 0x13ECBCu: goto label_13ecbc;
            case 0x13ECC0u: goto label_13ecc0;
            case 0x13ECC4u: goto label_13ecc4;
            case 0x13ECC8u: goto label_13ecc8;
            case 0x13ECCCu: goto label_13eccc;
            case 0x13ECD0u: goto label_13ecd0;
            case 0x13ECD4u: goto label_13ecd4;
            case 0x13ECD8u: goto label_13ecd8;
            case 0x13ECDCu: goto label_13ecdc;
            case 0x13ECE0u: goto label_13ece0;
            case 0x13ECE4u: goto label_13ece4;
            case 0x13ECE8u: goto label_13ece8;
            case 0x13ECECu: goto label_13ecec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13ECD0u; }
            if (ctx->pc != 0x13ECD0u) { return; }
        }
    }
    ctx->pc = 0x13ECD0u;
label_13ecd0:
    // 0x13ecd0: 0x24034000
    ctx->pc = 0x13ecd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
label_13ecd4:
    // 0x13ecd4: 0x621823
    ctx->pc = 0x13ecd4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ecd8:
    // 0x13ecd8: 0xdfbf0000
    ctx->pc = 0x13ecd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ecdc:
    // 0x13ecdc: 0x317c2
    ctx->pc = 0x13ecdcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
label_13ece0:
    // 0x13ece0: 0x621821
    ctx->pc = 0x13ece0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ece4:
    // 0x13ece4: 0x31043
    ctx->pc = 0x13ece4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_13ece8:
    // 0x13ece8: 0x3e00008
label_13ecec:
    if (ctx->pc == 0x13ECECu) {
        ctx->pc = 0x13ECECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13ECF0u;
        goto label_fallthrough_0x13ece8;
    }
    ctx->pc = 0x13ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ECB0u: goto label_13ecb0;
            case 0x13ECB4u: goto label_13ecb4;
            case 0x13ECB8u: goto label_13ecb8;
            case 0x13ECBCu: goto label_13ecbc;
            case 0x13ECC0u: goto label_13ecc0;
            case 0x13ECC4u: goto label_13ecc4;
            case 0x13ECC8u: goto label_13ecc8;
            case 0x13ECCCu: goto label_13eccc;
            case 0x13ECD0u: goto label_13ecd0;
            case 0x13ECD4u: goto label_13ecd4;
            case 0x13ECD8u: goto label_13ecd8;
            case 0x13ECDCu: goto label_13ecdc;
            case 0x13ECE0u: goto label_13ece0;
            case 0x13ECE4u: goto label_13ece4;
            case 0x13ECE8u: goto label_13ece8;
            case 0x13ECECu: goto label_13ecec;
            default: break;
        }
        return;
    }
label_fallthrough_0x13ece8:
    ctx->pc = 0x13ECF0u;
}
