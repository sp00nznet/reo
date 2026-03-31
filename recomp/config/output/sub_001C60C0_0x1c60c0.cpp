#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C60C0
// Address: 0x1c60c0 - 0x1c6310
void sub_001C60C0_0x1c60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c60c0u;

    // 0x1c60c0: 0x27bdff80
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c60c4: 0x282d
    ctx->pc = 0x1c60c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60c8: 0xffbf0070
    ctx->pc = 0x1c60c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c60cc: 0x7fb60060
    ctx->pc = 0x1c60ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c60d0: 0x7fb50050
    ctx->pc = 0x1c60d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c60d4: 0x7fb40040
    ctx->pc = 0x1c60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c60d8: 0xa82d
    ctx->pc = 0x1c60d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60dc: 0x7fb30030
    ctx->pc = 0x1c60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c60e0: 0xa02d
    ctx->pc = 0x1c60e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60e4: 0x7fb20020
    ctx->pc = 0x1c60e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c60e8: 0x7fb10010
    ctx->pc = 0x1c60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c60ec: 0x7fb00000
    ctx->pc = 0x1c60ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c60f0: 0x948601c0
    ctx->pc = 0x1c60f0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x1c60f4: 0x80802d
    ctx->pc = 0x1c60f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60f8: 0x8c8401b8
    ctx->pc = 0x1c60f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1c60fc: 0xc041f1a
    ctx->pc = 0x1C60FCu;
    SET_GPR_U32(ctx, 31, 0x1C6104u);
    ctx->pc = 0x1C6100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6104u; }
    }
    if (ctx->pc != 0x1C6104u) { return; }
    ctx->pc = 0x1C6104u;
    // 0x1c6104: 0x920201c4
    ctx->pc = 0x1c6104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x1c6108: 0x14400003
    ctx->pc = 0x1C6108u;
    {
        const bool branch_taken_0x1c6108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C610Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6108) {
            ctx->pc = 0x1C6118u;
            goto label_1c6118;
        }
    }
    ctx->pc = 0x1C6110u;
    // 0x1c6110: 0x10000074
    ctx->pc = 0x1C6110u;
    {
        const bool branch_taken_0x1c6110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6114u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1c6110) {
            ctx->pc = 0x1C62E4u;
            goto label_1c62e4;
        }
    }
    ctx->pc = 0x1C6118u;
label_1c6118:
    // 0x1c6118: 0x8e0301c8
    ctx->pc = 0x1c6118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1c611c: 0x960201c0
    ctx->pc = 0x1c611cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1c6120: 0x43082b
    ctx->pc = 0x1c6120u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6124: 0x1420001d
    ctx->pc = 0x1C6124u;
    {
        const bool branch_taken_0x1c6124 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C6128u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 424)));
        if (branch_taken_0x1c6124) {
            ctx->pc = 0x1C619Cu;
            goto label_1c619c;
        }
    }
    ctx->pc = 0x1C612Cu;
    // 0x1c612c: 0x10000015
    ctx->pc = 0x1C612Cu;
    {
        const bool branch_taken_0x1c612c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6130u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
        if (branch_taken_0x1c612c) {
            ctx->pc = 0x1C6184u;
            goto label_1c6184;
        }
    }
    ctx->pc = 0x1C6134u;
label_1c6134:
    // 0x1c6134: 0x92320003
    ctx->pc = 0x1c6134u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1c6138: 0x6410004
    ctx->pc = 0x1C6138u;
    {
        const bool branch_taken_0x1c6138 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C613Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x1c6138) {
            ctx->pc = 0x1C614Cu;
            goto label_1c614c;
        }
    }
    ctx->pc = 0x1C6140u;
    // 0x1c6140: 0x10600002
    ctx->pc = 0x1C6140u;
    {
        const bool branch_taken_0x1c6140 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6140) {
            ctx->pc = 0x1C614Cu;
            goto label_1c614c;
        }
    }
    ctx->pc = 0x1C6148u;
    // 0x1c6148: 0x2463fffc
    ctx->pc = 0x1c6148u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_1c614c:
    // 0x1c614c: 0x10600003
    ctx->pc = 0x1C614Cu;
    {
        const bool branch_taken_0x1c614c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c614c) {
            ctx->pc = 0x1C615Cu;
            goto label_1c615c;
        }
    }
    ctx->pc = 0x1C6154u;
    // 0x1c6154: 0x431023
    ctx->pc = 0x1c6154u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6158: 0x2429021
    ctx->pc = 0x1c6158u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1c615c:
    // 0x1c615c: 0x8e0401bc
    ctx->pc = 0x1c615cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1c6160: 0x220282d
    ctx->pc = 0x1c6160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6164: 0xc041eac
    ctx->pc = 0x1C6164u;
    SET_GPR_U32(ctx, 31, 0x1C616Cu);
    ctx->pc = 0x1C6168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C616Cu; }
    }
    if (ctx->pc != 0x1C616Cu) { return; }
    ctx->pc = 0x1C616Cu;
    // 0x1c616c: 0x8e0201bc
    ctx->pc = 0x1c616cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1c6170: 0x521021
    ctx->pc = 0x1c6170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6174: 0xae0201bc
    ctx->pc = 0x1c6174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x1c6178: 0x960201b4
    ctx->pc = 0x1c6178u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c617c: 0x2228821
    ctx->pc = 0x1c617cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c6180: 0x8e0201ac
    ctx->pc = 0x1c6180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_1c6184:
    // 0x1c6184: 0x222102b
    ctx->pc = 0x1c6184u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c6188: 0x1440ffea
    ctx->pc = 0x1C6188u;
    {
        const bool branch_taken_0x1c6188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6188) {
            ctx->pc = 0x1C6134u;
            goto label_1c6134;
        }
    }
    ctx->pc = 0x1C6190u;
    // 0x1c6190: 0xae0001c8
    ctx->pc = 0x1c6190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x1c6194: 0x10000038
    ctx->pc = 0x1C6194u;
    {
        const bool branch_taken_0x1c6194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6198u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 452), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c6194) {
            ctx->pc = 0x1C6278u;
            goto label_1c6278;
        }
    }
    ctx->pc = 0x1C619Cu;
label_1c619c:
    // 0x1c619c: 0x24160004
    ctx->pc = 0x1c619cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4));
label_1c61a0:
    // 0x1c61a0: 0x1000002e
    ctx->pc = 0x1C61A0u;
    {
        const bool branch_taken_0x1c61a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C61A4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 424)));
        if (branch_taken_0x1c61a0) {
            ctx->pc = 0x1C625Cu;
            goto label_1c625c;
        }
    }
    ctx->pc = 0x1C61A8u;
label_1c61a8:
    // 0x1c61a8: 0x92220002
    ctx->pc = 0x1c61a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c61ac: 0x3042000f
    ctx->pc = 0x1c61acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1c61b0: 0x14560028
    ctx->pc = 0x1C61B0u;
    {
        const bool branch_taken_0x1c61b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x1c61b0) {
            ctx->pc = 0x1C6254u;
            goto label_1c6254;
        }
    }
    ctx->pc = 0x1C61B8u;
    // 0x1c61b8: 0x92320003
    ctx->pc = 0x1c61b8u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1c61bc: 0x6410004
    ctx->pc = 0x1C61BCu;
    {
        const bool branch_taken_0x1c61bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C61C0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x1c61bc) {
            ctx->pc = 0x1C61D0u;
            goto label_1c61d0;
        }
    }
    ctx->pc = 0x1C61C4u;
    // 0x1c61c4: 0x10600002
    ctx->pc = 0x1C61C4u;
    {
        const bool branch_taken_0x1c61c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c61c4) {
            ctx->pc = 0x1C61D0u;
            goto label_1c61d0;
        }
    }
    ctx->pc = 0x1C61CCu;
    // 0x1c61cc: 0x2463fffc
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_1c61d0:
    // 0x1c61d0: 0x10600003
    ctx->pc = 0x1C61D0u;
    {
        const bool branch_taken_0x1c61d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C61D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c61d0) {
            ctx->pc = 0x1C61E0u;
            goto label_1c61e0;
        }
    }
    ctx->pc = 0x1C61D8u;
    // 0x1c61d8: 0x431023
    ctx->pc = 0x1c61d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c61dc: 0x2429021
    ctx->pc = 0x1c61dcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1c61e0:
    // 0x1c61e0: 0x960201c0
    ctx->pc = 0x1c61e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1c61e4: 0x2921821
    ctx->pc = 0x1c61e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1c61e8: 0x43082b
    ctx->pc = 0x1c61e8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c61ec: 0x14200011
    ctx->pc = 0x1C61ECu;
    {
        const bool branch_taken_0x1c61ec = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C61F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 4));
        if (branch_taken_0x1c61ec) {
            ctx->pc = 0x1C6234u;
            goto label_1c6234;
        }
    }
    ctx->pc = 0x1C61F4u;
    // 0x1c61f4: 0x8e0401bc
    ctx->pc = 0x1c61f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1c61f8: 0x220282d
    ctx->pc = 0x1c61f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61fc: 0xc041eac
    ctx->pc = 0x1C61FCu;
    SET_GPR_U32(ctx, 31, 0x1C6204u);
    ctx->pc = 0x1C6200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6204u; }
    }
    if (ctx->pc != 0x1C6204u) { return; }
    ctx->pc = 0x1C6204u;
    // 0x1c6204: 0xa2200002
    ctx->pc = 0x1c6204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6208: 0x292a021
    ctx->pc = 0x1c6208u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1c620c: 0x8e0201bc
    ctx->pc = 0x1c620cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1c6210: 0x521021
    ctx->pc = 0x1c6210u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6214: 0xae0201bc
    ctx->pc = 0x1c6214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x1c6218: 0x8e0201c8
    ctx->pc = 0x1c6218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1c621c: 0x521023
    ctx->pc = 0x1c621cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6220: 0xae0201c8
    ctx->pc = 0x1c6220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
    // 0x1c6224: 0x920201c4
    ctx->pc = 0x1c6224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x1c6228: 0x2442ffff
    ctx->pc = 0x1c6228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c622c: 0x10000009
    ctx->pc = 0x1C622Cu;
    {
        const bool branch_taken_0x1c622c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6230u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 452), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c622c) {
            ctx->pc = 0x1C6254u;
            goto label_1c6254;
        }
    }
    ctx->pc = 0x1C6234u;
label_1c6234:
    // 0x1c6234: 0x14400006
    ctx->pc = 0x1C6234u;
    {
        const bool branch_taken_0x1c6234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6234) {
            ctx->pc = 0x1C6250u;
            goto label_1c6250;
        }
    }
    ctx->pc = 0x1C623Cu;
    // 0x1c623c: 0x16a00005
    ctx->pc = 0x1C623Cu;
    {
        const bool branch_taken_0x1c623c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c623c) {
            ctx->pc = 0x1C6254u;
            goto label_1c6254;
        }
    }
    ctx->pc = 0x1C6244u;
    // 0x1c6244: 0x220982d
    ctx->pc = 0x1c6244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6248: 0x10000002
    ctx->pc = 0x1C6248u;
    {
        const bool branch_taken_0x1c6248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C624Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1c6248) {
            ctx->pc = 0x1C6254u;
            goto label_1c6254;
        }
    }
    ctx->pc = 0x1C6250u;
label_1c6250:
    // 0x1c6250: 0xa2200002
    ctx->pc = 0x1c6250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c6254:
    // 0x1c6254: 0x960201b4
    ctx->pc = 0x1c6254u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c6258: 0x2228821
    ctx->pc = 0x1c6258u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c625c:
    // 0x1c625c: 0x8e0201ac
    ctx->pc = 0x1c625cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x1c6260: 0x51082b
    ctx->pc = 0x1c6260u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c6264: 0x1020ffd0
    ctx->pc = 0x1C6264u;
    {
        const bool branch_taken_0x1c6264 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6264) {
            ctx->pc = 0x1C61A8u;
            goto label_1c61a8;
        }
    }
    ctx->pc = 0x1C626Cu;
    // 0x1c626c: 0x26d6ffff
    ctx->pc = 0x1c626cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c6270: 0x1ec0ffcb
    ctx->pc = 0x1C6270u;
    {
        const bool branch_taken_0x1c6270 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x1c6270) {
            ctx->pc = 0x1C61A0u;
            goto label_1c61a0;
        }
    }
    ctx->pc = 0x1C6278u;
label_1c6278:
    // 0x1c6278: 0x12600017
    ctx->pc = 0x1C6278u;
    {
        const bool branch_taken_0x1c6278 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6278) {
            ctx->pc = 0x1C62D8u;
            goto label_1c62d8;
        }
    }
    ctx->pc = 0x1C6280u;
    // 0x1c6280: 0x1000000f
    ctx->pc = 0x1C6280u;
    {
        const bool branch_taken_0x1c6280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6284u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 424)));
        if (branch_taken_0x1c6280) {
            ctx->pc = 0x1C62C0u;
            goto label_1c62c0;
        }
    }
    ctx->pc = 0x1C6288u;
label_1c6288:
    // 0x1c6288: 0x92620002
    ctx->pc = 0x1c6288u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1c628c: 0x3042000f
    ctx->pc = 0x1c628cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1c6290: 0x28420004
    ctx->pc = 0x1c6290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1c6294: 0x14400008
    ctx->pc = 0x1C6294u;
    {
        const bool branch_taken_0x1c6294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6294) {
            ctx->pc = 0x1C62B8u;
            goto label_1c62b8;
        }
    }
    ctx->pc = 0x1C629Cu;
    // 0x1c629c: 0x960601b4
    ctx->pc = 0x1c629cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c62a0: 0x220202d
    ctx->pc = 0x1c62a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62a4: 0xc041eac
    ctx->pc = 0x1C62A4u;
    SET_GPR_U32(ctx, 31, 0x1C62ACu);
    ctx->pc = 0x1C62A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62ACu; }
    }
    if (ctx->pc != 0x1C62ACu) { return; }
    ctx->pc = 0x1C62ACu;
    // 0x1c62ac: 0xa2600002
    ctx->pc = 0x1c62acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c62b0: 0x960201b4
    ctx->pc = 0x1c62b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c62b4: 0x2228821
    ctx->pc = 0x1c62b4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c62b8:
    // 0x1c62b8: 0x960201b4
    ctx->pc = 0x1c62b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c62bc: 0x2629821
    ctx->pc = 0x1c62bcu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1c62c0:
    // 0x1c62c0: 0x8e0201ac
    ctx->pc = 0x1c62c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x1c62c4: 0x262102b
    ctx->pc = 0x1c62c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c62c8: 0x1440ffef
    ctx->pc = 0x1C62C8u;
    {
        const bool branch_taken_0x1c62c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c62c8) {
            ctx->pc = 0x1C6288u;
            goto label_1c6288;
        }
    }
    ctx->pc = 0x1C62D0u;
    // 0x1c62d0: 0x10000002
    ctx->pc = 0x1C62D0u;
    {
        const bool branch_taken_0x1c62d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C62D4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 17));
        if (branch_taken_0x1c62d0) {
            ctx->pc = 0x1C62DCu;
            goto label_1c62dc;
        }
    }
    ctx->pc = 0x1C62D8u;
label_1c62d8:
    // 0x1c62d8: 0xae0001ac
    ctx->pc = 0x1c62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_1c62dc:
    // 0x1c62dc: 0x24020001
    ctx->pc = 0x1c62dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c62e0: 0xdfbf0070
    ctx->pc = 0x1c62e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c62e4:
    // 0x1c62e4: 0x7bb60060
    ctx->pc = 0x1c62e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c62e8: 0x7bb50050
    ctx->pc = 0x1c62e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c62ec: 0x7bb40040
    ctx->pc = 0x1c62ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c62f0: 0x7bb30030
    ctx->pc = 0x1c62f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c62f4: 0x7bb20020
    ctx->pc = 0x1c62f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c62f8: 0x7bb10010
    ctx->pc = 0x1c62f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c62fc: 0x7bb00000
    ctx->pc = 0x1c62fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6300: 0x3e00008
    ctx->pc = 0x1C6300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6118u: goto label_1c6118;
            case 0x1C6134u: goto label_1c6134;
            case 0x1C614Cu: goto label_1c614c;
            case 0x1C615Cu: goto label_1c615c;
            case 0x1C6184u: goto label_1c6184;
            case 0x1C619Cu: goto label_1c619c;
            case 0x1C61A0u: goto label_1c61a0;
            case 0x1C61A8u: goto label_1c61a8;
            case 0x1C61D0u: goto label_1c61d0;
            case 0x1C61E0u: goto label_1c61e0;
            case 0x1C6234u: goto label_1c6234;
            case 0x1C6250u: goto label_1c6250;
            case 0x1C6254u: goto label_1c6254;
            case 0x1C625Cu: goto label_1c625c;
            case 0x1C6278u: goto label_1c6278;
            case 0x1C6288u: goto label_1c6288;
            case 0x1C62B8u: goto label_1c62b8;
            case 0x1C62C0u: goto label_1c62c0;
            case 0x1C62D8u: goto label_1c62d8;
            case 0x1C62DCu: goto label_1c62dc;
            case 0x1C62E4u: goto label_1c62e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6308u;
    // 0x1c6308: 0x0
    ctx->pc = 0x1c6308u;
    // NOP
    // 0x1c630c: 0x0
    ctx->pc = 0x1c630cu;
    // NOP
}
