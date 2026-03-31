#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A4E8
// Address: 0x17a4e8 - 0x17a558
void sub_0017A4E8_0x17a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a4e8u;

label_17a4e8:
    // 0x17a4e8: 0x2484ffff
    ctx->pc = 0x17a4e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_17a4ec:
    // 0x17a4ec: 0x2c820008
    ctx->pc = 0x17a4ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 8));
label_17a4f0:
    // 0x17a4f0: 0x10400017
label_17a4f4:
    if (ctx->pc == 0x17A4F4u) {
        ctx->pc = 0x17A4F8u;
        goto label_17a4f8;
    }
    ctx->pc = 0x17A4F0u;
    {
        const bool branch_taken_0x17a4f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17a4f0) {
            ctx->pc = 0x17A550u;
            goto label_17a550;
        }
    }
    ctx->pc = 0x17A4F8u;
label_17a4f8:
    // 0x17a4f8: 0x41080
    ctx->pc = 0x17a4f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_17a4fc:
    // 0x17a4fc: 0x3c030024
    ctx->pc = 0x17a4fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_17a500:
    // 0x17a500: 0x621821
    ctx->pc = 0x17a500u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17a504:
    // 0x17a504: 0x8c630e10
    ctx->pc = 0x17a504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 3600)));
label_17a508:
    // 0x17a508: 0x600008
label_17a50c:
    if (ctx->pc == 0x17A50Cu) {
        ctx->pc = 0x17A510u;
        goto label_17a510;
    }
    ctx->pc = 0x17A508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A510u;
label_17a510:
    // 0x17a510: 0x3e00008
label_17a514:
    if (ctx->pc == 0x17A514u) {
        ctx->pc = 0x17A514u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23976));
        ctx->pc = 0x17A518u;
        goto label_17a518;
    }
    ctx->pc = 0x17A510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A514u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23976));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A518u;
label_17a518:
    // 0x17a518: 0x3e00008
label_17a51c:
    if (ctx->pc == 0x17A51Cu) {
        ctx->pc = 0x17A51Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24000));
        ctx->pc = 0x17A520u;
        goto label_17a520;
    }
    ctx->pc = 0x17A518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A51Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A520u;
label_17a520:
    // 0x17a520: 0x3e00008
label_17a524:
    if (ctx->pc == 0x17A524u) {
        ctx->pc = 0x17A524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25000));
        ctx->pc = 0x17A528u;
        goto label_17a528;
    }
    ctx->pc = 0x17A520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A528u;
label_17a528:
    // 0x17a528: 0x3e00008
label_17a52c:
    if (ctx->pc == 0x17A52Cu) {
        ctx->pc = 0x17A52Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
        ctx->pc = 0x17A530u;
        goto label_17a530;
    }
    ctx->pc = 0x17A528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A52Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A530u;
label_17a530:
    // 0x17a530: 0x3e00008
label_17a534:
    if (ctx->pc == 0x17A534u) {
        ctx->pc = 0x17A534u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x17A538u;
        goto label_17a538;
    }
    ctx->pc = 0x17A530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A534u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A538u;
label_17a538:
    // 0x17a538: 0x3e00008
label_17a53c:
    if (ctx->pc == 0x17A53Cu) {
        ctx->pc = 0x17A53Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        ctx->pc = 0x17A540u;
        goto label_17a540;
    }
    ctx->pc = 0x17A538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A53Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A540u;
label_17a540:
    // 0x17a540: 0x3e00008
label_17a544:
    if (ctx->pc == 0x17A544u) {
        ctx->pc = 0x17A544u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 59940));
        ctx->pc = 0x17A548u;
        goto label_17a548;
    }
    ctx->pc = 0x17A540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A544u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 59940));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A548u;
label_17a548:
    // 0x17a548: 0x3e00008
label_17a54c:
    if (ctx->pc == 0x17A54Cu) {
        ctx->pc = 0x17A54Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 60000));
        ctx->pc = 0x17A550u;
        goto label_17a550;
    }
    ctx->pc = 0x17A548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A54Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 60000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A550u;
label_17a550:
    // 0x17a550: 0x3e00008
label_17a554:
    if (ctx->pc == 0x17A554u) {
        ctx->pc = 0x17A554u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A558u;
        goto label_fallthrough_0x17a550;
    }
    ctx->pc = 0x17A550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A554u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A4E8u: goto label_17a4e8;
            case 0x17A4ECu: goto label_17a4ec;
            case 0x17A4F0u: goto label_17a4f0;
            case 0x17A4F4u: goto label_17a4f4;
            case 0x17A4F8u: goto label_17a4f8;
            case 0x17A4FCu: goto label_17a4fc;
            case 0x17A500u: goto label_17a500;
            case 0x17A504u: goto label_17a504;
            case 0x17A508u: goto label_17a508;
            case 0x17A50Cu: goto label_17a50c;
            case 0x17A510u: goto label_17a510;
            case 0x17A514u: goto label_17a514;
            case 0x17A518u: goto label_17a518;
            case 0x17A51Cu: goto label_17a51c;
            case 0x17A520u: goto label_17a520;
            case 0x17A524u: goto label_17a524;
            case 0x17A528u: goto label_17a528;
            case 0x17A52Cu: goto label_17a52c;
            case 0x17A530u: goto label_17a530;
            case 0x17A534u: goto label_17a534;
            case 0x17A538u: goto label_17a538;
            case 0x17A53Cu: goto label_17a53c;
            case 0x17A540u: goto label_17a540;
            case 0x17A544u: goto label_17a544;
            case 0x17A548u: goto label_17a548;
            case 0x17A54Cu: goto label_17a54c;
            case 0x17A550u: goto label_17a550;
            case 0x17A554u: goto label_17a554;
            default: break;
        }
        return;
    }
label_fallthrough_0x17a550:
    ctx->pc = 0x17A558u;
}
