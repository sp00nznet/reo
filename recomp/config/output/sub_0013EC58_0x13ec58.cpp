#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013EC58
// Address: 0x13ec58 - 0x13ed28
void sub_0013EC58_0x13ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ec58u;

label_13ec58:
    // 0x13ec58: 0x3e00008
label_13ec5c:
    if (ctx->pc == 0x13EC5Cu) {
        ctx->pc = 0x13EC5Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x13EC60u;
        goto label_13ec60;
    }
    ctx->pc = 0x13EC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC5Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EC58u: goto label_13ec58;
            case 0x13EC5Cu: goto label_13ec5c;
            case 0x13EC60u: goto label_13ec60;
            case 0x13EC64u: goto label_13ec64;
            case 0x13EC68u: goto label_13ec68;
            case 0x13EC6Cu: goto label_13ec6c;
            case 0x13EC70u: goto label_13ec70;
            case 0x13EC74u: goto label_13ec74;
            case 0x13EC78u: goto label_13ec78;
            case 0x13EC7Cu: goto label_13ec7c;
            case 0x13EC80u: goto label_13ec80;
            case 0x13EC84u: goto label_13ec84;
            case 0x13EC88u: goto label_13ec88;
            case 0x13EC8Cu: goto label_13ec8c;
            case 0x13EC90u: goto label_13ec90;
            case 0x13EC94u: goto label_13ec94;
            case 0x13EC98u: goto label_13ec98;
            case 0x13EC9Cu: goto label_13ec9c;
            case 0x13ECA0u: goto label_13eca0;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECA8u: goto label_13eca8;
            case 0x13ECACu: goto label_13ecac;
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
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EC60u;
label_13ec60:
    // 0x13ec60: 0x27bdfff0
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ec64:
    // 0x13ec64: 0x3c040024
    ctx->pc = 0x13ec64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13ec68:
    // 0x13ec68: 0xffbf0000
    ctx->pc = 0x13ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ec6c:
    // 0x13ec6c: 0x2484d848
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957128));
label_13ec70:
    // 0x13ec70: 0xdfbf0000
    ctx->pc = 0x13ec70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ec74:
    // 0x13ec74: 0x8045a12
label_13ec78:
    if (ctx->pc == 0x13EC78u) {
        ctx->pc = 0x13EC78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13EC7Cu;
        goto label_13ec7c;
    }
    ctx->pc = 0x13EC74u;
    ctx->pc = 0x13EC78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13EC7Cu;
label_13ec7c:
    // 0x13ec7c: 0x0
    ctx->pc = 0x13ec7cu;
    // NOP
label_13ec80:
    // 0x13ec80: 0x27bdfff0
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ec84:
    // 0x13ec84: 0x3c040024
    ctx->pc = 0x13ec84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13ec88:
    // 0x13ec88: 0xffbf0000
    ctx->pc = 0x13ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ec8c:
    // 0x13ec8c: 0x2484d870
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957168));
label_13ec90:
    // 0x13ec90: 0xdfbf0000
    ctx->pc = 0x13ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ec94:
    // 0x13ec94: 0x8045a12
label_13ec98:
    if (ctx->pc == 0x13EC98u) {
        ctx->pc = 0x13EC98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13EC9Cu;
        goto label_13ec9c;
    }
    ctx->pc = 0x13EC94u;
    ctx->pc = 0x13EC98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13EC9Cu;
label_13ec9c:
    // 0x13ec9c: 0x0
    ctx->pc = 0x13ec9cu;
    // NOP
label_13eca0:
    // 0x13eca0: 0x3402bb80
    ctx->pc = 0x13eca0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
label_13eca4:
    // 0x13eca4: 0xaca00000
    ctx->pc = 0x13eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_13eca8:
    // 0x13eca8: 0x3e00008
label_13ecac:
    if (ctx->pc == 0x13ECACu) {
        ctx->pc = 0x13ECACu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x13ECB0u;
        goto label_13ecb0;
    }
    ctx->pc = 0x13ECA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECACu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EC58u: goto label_13ec58;
            case 0x13EC5Cu: goto label_13ec5c;
            case 0x13EC60u: goto label_13ec60;
            case 0x13EC64u: goto label_13ec64;
            case 0x13EC68u: goto label_13ec68;
            case 0x13EC6Cu: goto label_13ec6c;
            case 0x13EC70u: goto label_13ec70;
            case 0x13EC74u: goto label_13ec74;
            case 0x13EC78u: goto label_13ec78;
            case 0x13EC7Cu: goto label_13ec7c;
            case 0x13EC80u: goto label_13ec80;
            case 0x13EC84u: goto label_13ec84;
            case 0x13EC88u: goto label_13ec88;
            case 0x13EC8Cu: goto label_13ec8c;
            case 0x13EC90u: goto label_13ec90;
            case 0x13EC94u: goto label_13ec94;
            case 0x13EC98u: goto label_13ec98;
            case 0x13EC9Cu: goto label_13ec9c;
            case 0x13ECA0u: goto label_13eca0;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECA8u: goto label_13eca8;
            case 0x13ECACu: goto label_13ecac;
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
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13ECB0u;
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
            case 0x13EC58u: goto label_13ec58;
            case 0x13EC5Cu: goto label_13ec5c;
            case 0x13EC60u: goto label_13ec60;
            case 0x13EC64u: goto label_13ec64;
            case 0x13EC68u: goto label_13ec68;
            case 0x13EC6Cu: goto label_13ec6c;
            case 0x13EC70u: goto label_13ec70;
            case 0x13EC74u: goto label_13ec74;
            case 0x13EC78u: goto label_13ec78;
            case 0x13EC7Cu: goto label_13ec7c;
            case 0x13EC80u: goto label_13ec80;
            case 0x13EC84u: goto label_13ec84;
            case 0x13EC88u: goto label_13ec88;
            case 0x13EC8Cu: goto label_13ec8c;
            case 0x13EC90u: goto label_13ec90;
            case 0x13EC94u: goto label_13ec94;
            case 0x13EC98u: goto label_13ec98;
            case 0x13EC9Cu: goto label_13ec9c;
            case 0x13ECA0u: goto label_13eca0;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECA8u: goto label_13eca8;
            case 0x13ECACu: goto label_13ecac;
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
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
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
        goto label_13ecf0;
    }
    ctx->pc = 0x13ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EC58u: goto label_13ec58;
            case 0x13EC5Cu: goto label_13ec5c;
            case 0x13EC60u: goto label_13ec60;
            case 0x13EC64u: goto label_13ec64;
            case 0x13EC68u: goto label_13ec68;
            case 0x13EC6Cu: goto label_13ec6c;
            case 0x13EC70u: goto label_13ec70;
            case 0x13EC74u: goto label_13ec74;
            case 0x13EC78u: goto label_13ec78;
            case 0x13EC7Cu: goto label_13ec7c;
            case 0x13EC80u: goto label_13ec80;
            case 0x13EC84u: goto label_13ec84;
            case 0x13EC88u: goto label_13ec88;
            case 0x13EC8Cu: goto label_13ec8c;
            case 0x13EC90u: goto label_13ec90;
            case 0x13EC94u: goto label_13ec94;
            case 0x13EC98u: goto label_13ec98;
            case 0x13EC9Cu: goto label_13ec9c;
            case 0x13ECA0u: goto label_13eca0;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECA8u: goto label_13eca8;
            case 0x13ECACu: goto label_13ecac;
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
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13ECF0u;
label_13ecf0:
    // 0x13ecf0: 0x27bdfff0
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ecf4:
    // 0x13ecf4: 0xffbf0000
    ctx->pc = 0x13ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ecf8:
    // 0x13ecf8: 0x8c820008
    ctx->pc = 0x13ecf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13ecfc:
    // 0x13ecfc: 0x8c440008
    ctx->pc = 0x13ecfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ed00:
    // 0x13ed00: 0x8c830000
    ctx->pc = 0x13ed00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ed04:
    // 0x13ed04: 0x8c620024
    ctx->pc = 0x13ed04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13ed08:
    // 0x13ed08: 0x40f809
label_13ed0c:
    if (ctx->pc == 0x13ED0Cu) {
        ctx->pc = 0x13ED0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13ED10u;
        goto label_13ed10;
    }
    ctx->pc = 0x13ED08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13ED10u);
        ctx->pc = 0x13ED0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EC58u: goto label_13ec58;
            case 0x13EC5Cu: goto label_13ec5c;
            case 0x13EC60u: goto label_13ec60;
            case 0x13EC64u: goto label_13ec64;
            case 0x13EC68u: goto label_13ec68;
            case 0x13EC6Cu: goto label_13ec6c;
            case 0x13EC70u: goto label_13ec70;
            case 0x13EC74u: goto label_13ec74;
            case 0x13EC78u: goto label_13ec78;
            case 0x13EC7Cu: goto label_13ec7c;
            case 0x13EC80u: goto label_13ec80;
            case 0x13EC84u: goto label_13ec84;
            case 0x13EC88u: goto label_13ec88;
            case 0x13EC8Cu: goto label_13ec8c;
            case 0x13EC90u: goto label_13ec90;
            case 0x13EC94u: goto label_13ec94;
            case 0x13EC98u: goto label_13ec98;
            case 0x13EC9Cu: goto label_13ec9c;
            case 0x13ECA0u: goto label_13eca0;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECA8u: goto label_13eca8;
            case 0x13ECACu: goto label_13ecac;
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
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13ED10u; }
            if (ctx->pc != 0x13ED10u) { return; }
        }
    }
    ctx->pc = 0x13ED10u;
label_13ed10:
    // 0x13ed10: 0x21fc2
    ctx->pc = 0x13ed10u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_13ed14:
    // 0x13ed14: 0xdfbf0000
    ctx->pc = 0x13ed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ed18:
    // 0x13ed18: 0x621821
    ctx->pc = 0x13ed18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ed1c:
    // 0x13ed1c: 0x31043
    ctx->pc = 0x13ed1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_13ed20:
    // 0x13ed20: 0x3e00008
label_13ed24:
    if (ctx->pc == 0x13ED24u) {
        ctx->pc = 0x13ED24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13ED28u;
        goto label_fallthrough_0x13ed20;
    }
    ctx->pc = 0x13ED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EC58u: goto label_13ec58;
            case 0x13EC5Cu: goto label_13ec5c;
            case 0x13EC60u: goto label_13ec60;
            case 0x13EC64u: goto label_13ec64;
            case 0x13EC68u: goto label_13ec68;
            case 0x13EC6Cu: goto label_13ec6c;
            case 0x13EC70u: goto label_13ec70;
            case 0x13EC74u: goto label_13ec74;
            case 0x13EC78u: goto label_13ec78;
            case 0x13EC7Cu: goto label_13ec7c;
            case 0x13EC80u: goto label_13ec80;
            case 0x13EC84u: goto label_13ec84;
            case 0x13EC88u: goto label_13ec88;
            case 0x13EC8Cu: goto label_13ec8c;
            case 0x13EC90u: goto label_13ec90;
            case 0x13EC94u: goto label_13ec94;
            case 0x13EC98u: goto label_13ec98;
            case 0x13EC9Cu: goto label_13ec9c;
            case 0x13ECA0u: goto label_13eca0;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECA8u: goto label_13eca8;
            case 0x13ECACu: goto label_13ecac;
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
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        return;
    }
label_fallthrough_0x13ed20:
    ctx->pc = 0x13ED28u;
}
