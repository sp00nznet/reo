#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C3150
// Address: 0x1c3150 - 0x1c3590
void sub_001C3150_0x1c3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c3150u;

label_1c3150:
    // 0x1c3150: 0x27bdffe0
    ctx->pc = 0x1c3150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c3154:
    // 0x1c3154: 0xffbf0010
    ctx->pc = 0x1c3154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c3158:
    // 0x1c3158: 0x7fb00000
    ctx->pc = 0x1c3158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c315c:
    // 0x1c315c: 0x80820002
    ctx->pc = 0x1c315cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c3160:
    // 0x1c3160: 0x2c410006
    ctx->pc = 0x1c3160u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 6));
label_1c3164:
    // 0x1c3164: 0x102000fe
label_1c3168:
    if (ctx->pc == 0x1C3168u) {
        ctx->pc = 0x1C3168u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C316Cu;
        goto label_1c316c;
    }
    ctx->pc = 0x1C3164u;
    {
        const bool branch_taken_0x1c3164 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3168u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3164) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C316Cu;
label_1c316c:
    // 0x1c316c: 0x3c030025
    ctx->pc = 0x1c316cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
label_1c3170:
    // 0x1c3170: 0x21080
    ctx->pc = 0x1c3170u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1c3174:
    // 0x1c3174: 0x24632d00
    ctx->pc = 0x1c3174u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11520));
label_1c3178:
    // 0x1c3178: 0x431021
    ctx->pc = 0x1c3178u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c317c:
    // 0x1c317c: 0x8c420000
    ctx->pc = 0x1c317cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3180:
    // 0x1c3180: 0x400008
label_1c3184:
    if (ctx->pc == 0x1C3184u) {
        ctx->pc = 0x1C3188u;
        goto label_1c3188;
    }
    ctx->pc = 0x1C3180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3150u: goto label_1c3150;
            case 0x1C3154u: goto label_1c3154;
            case 0x1C3158u: goto label_1c3158;
            case 0x1C315Cu: goto label_1c315c;
            case 0x1C3160u: goto label_1c3160;
            case 0x1C3164u: goto label_1c3164;
            case 0x1C3168u: goto label_1c3168;
            case 0x1C316Cu: goto label_1c316c;
            case 0x1C3170u: goto label_1c3170;
            case 0x1C3174u: goto label_1c3174;
            case 0x1C3178u: goto label_1c3178;
            case 0x1C317Cu: goto label_1c317c;
            case 0x1C3180u: goto label_1c3180;
            case 0x1C3184u: goto label_1c3184;
            case 0x1C3188u: goto label_1c3188;
            case 0x1C318Cu: goto label_1c318c;
            case 0x1C3190u: goto label_1c3190;
            case 0x1C3194u: goto label_1c3194;
            case 0x1C3198u: goto label_1c3198;
            case 0x1C319Cu: goto label_1c319c;
            case 0x1C31A0u: goto label_1c31a0;
            case 0x1C31A4u: goto label_1c31a4;
            case 0x1C31A8u: goto label_1c31a8;
            case 0x1C31ACu: goto label_1c31ac;
            case 0x1C31B0u: goto label_1c31b0;
            case 0x1C31B4u: goto label_1c31b4;
            case 0x1C31B8u: goto label_1c31b8;
            case 0x1C31BCu: goto label_1c31bc;
            case 0x1C31C0u: goto label_1c31c0;
            case 0x1C31C4u: goto label_1c31c4;
            case 0x1C31C8u: goto label_1c31c8;
            case 0x1C31CCu: goto label_1c31cc;
            case 0x1C31D0u: goto label_1c31d0;
            case 0x1C31D4u: goto label_1c31d4;
            case 0x1C31D8u: goto label_1c31d8;
            case 0x1C31DCu: goto label_1c31dc;
            case 0x1C31E0u: goto label_1c31e0;
            case 0x1C31E4u: goto label_1c31e4;
            case 0x1C31E8u: goto label_1c31e8;
            case 0x1C31ECu: goto label_1c31ec;
            case 0x1C31F0u: goto label_1c31f0;
            case 0x1C31F4u: goto label_1c31f4;
            case 0x1C31F8u: goto label_1c31f8;
            case 0x1C31FCu: goto label_1c31fc;
            case 0x1C3200u: goto label_1c3200;
            case 0x1C3204u: goto label_1c3204;
            case 0x1C3208u: goto label_1c3208;
            case 0x1C320Cu: goto label_1c320c;
            case 0x1C3210u: goto label_1c3210;
            case 0x1C3214u: goto label_1c3214;
            case 0x1C3218u: goto label_1c3218;
            case 0x1C321Cu: goto label_1c321c;
            case 0x1C3220u: goto label_1c3220;
            case 0x1C3224u: goto label_1c3224;
            case 0x1C3228u: goto label_1c3228;
            case 0x1C322Cu: goto label_1c322c;
            case 0x1C3230u: goto label_1c3230;
            case 0x1C3234u: goto label_1c3234;
            case 0x1C3238u: goto label_1c3238;
            case 0x1C323Cu: goto label_1c323c;
            case 0x1C3240u: goto label_1c3240;
            case 0x1C3244u: goto label_1c3244;
            case 0x1C3248u: goto label_1c3248;
            case 0x1C324Cu: goto label_1c324c;
            case 0x1C3250u: goto label_1c3250;
            case 0x1C3254u: goto label_1c3254;
            case 0x1C3258u: goto label_1c3258;
            case 0x1C325Cu: goto label_1c325c;
            case 0x1C3260u: goto label_1c3260;
            case 0x1C3264u: goto label_1c3264;
            case 0x1C3268u: goto label_1c3268;
            case 0x1C326Cu: goto label_1c326c;
            case 0x1C3270u: goto label_1c3270;
            case 0x1C3274u: goto label_1c3274;
            case 0x1C3278u: goto label_1c3278;
            case 0x1C327Cu: goto label_1c327c;
            case 0x1C3280u: goto label_1c3280;
            case 0x1C3284u: goto label_1c3284;
            case 0x1C3288u: goto label_1c3288;
            case 0x1C328Cu: goto label_1c328c;
            case 0x1C3290u: goto label_1c3290;
            case 0x1C3294u: goto label_1c3294;
            case 0x1C3298u: goto label_1c3298;
            case 0x1C329Cu: goto label_1c329c;
            case 0x1C32A0u: goto label_1c32a0;
            case 0x1C32A4u: goto label_1c32a4;
            case 0x1C32A8u: goto label_1c32a8;
            case 0x1C32ACu: goto label_1c32ac;
            case 0x1C32B0u: goto label_1c32b0;
            case 0x1C32B4u: goto label_1c32b4;
            case 0x1C32B8u: goto label_1c32b8;
            case 0x1C32BCu: goto label_1c32bc;
            case 0x1C32C0u: goto label_1c32c0;
            case 0x1C32C4u: goto label_1c32c4;
            case 0x1C32C8u: goto label_1c32c8;
            case 0x1C32CCu: goto label_1c32cc;
            case 0x1C32D0u: goto label_1c32d0;
            case 0x1C32D4u: goto label_1c32d4;
            case 0x1C32D8u: goto label_1c32d8;
            case 0x1C32DCu: goto label_1c32dc;
            case 0x1C32E0u: goto label_1c32e0;
            case 0x1C32E4u: goto label_1c32e4;
            case 0x1C32E8u: goto label_1c32e8;
            case 0x1C32ECu: goto label_1c32ec;
            case 0x1C32F0u: goto label_1c32f0;
            case 0x1C32F4u: goto label_1c32f4;
            case 0x1C32F8u: goto label_1c32f8;
            case 0x1C32FCu: goto label_1c32fc;
            case 0x1C3300u: goto label_1c3300;
            case 0x1C3304u: goto label_1c3304;
            case 0x1C3308u: goto label_1c3308;
            case 0x1C330Cu: goto label_1c330c;
            case 0x1C3310u: goto label_1c3310;
            case 0x1C3314u: goto label_1c3314;
            case 0x1C3318u: goto label_1c3318;
            case 0x1C331Cu: goto label_1c331c;
            case 0x1C3320u: goto label_1c3320;
            case 0x1C3324u: goto label_1c3324;
            case 0x1C3328u: goto label_1c3328;
            case 0x1C332Cu: goto label_1c332c;
            case 0x1C3330u: goto label_1c3330;
            case 0x1C3334u: goto label_1c3334;
            case 0x1C3338u: goto label_1c3338;
            case 0x1C333Cu: goto label_1c333c;
            case 0x1C3340u: goto label_1c3340;
            case 0x1C3344u: goto label_1c3344;
            case 0x1C3348u: goto label_1c3348;
            case 0x1C334Cu: goto label_1c334c;
            case 0x1C3350u: goto label_1c3350;
            case 0x1C3354u: goto label_1c3354;
            case 0x1C3358u: goto label_1c3358;
            case 0x1C335Cu: goto label_1c335c;
            case 0x1C3360u: goto label_1c3360;
            case 0x1C3364u: goto label_1c3364;
            case 0x1C3368u: goto label_1c3368;
            case 0x1C336Cu: goto label_1c336c;
            case 0x1C3370u: goto label_1c3370;
            case 0x1C3374u: goto label_1c3374;
            case 0x1C3378u: goto label_1c3378;
            case 0x1C337Cu: goto label_1c337c;
            case 0x1C3380u: goto label_1c3380;
            case 0x1C3384u: goto label_1c3384;
            case 0x1C3388u: goto label_1c3388;
            case 0x1C338Cu: goto label_1c338c;
            case 0x1C3390u: goto label_1c3390;
            case 0x1C3394u: goto label_1c3394;
            case 0x1C3398u: goto label_1c3398;
            case 0x1C339Cu: goto label_1c339c;
            case 0x1C33A0u: goto label_1c33a0;
            case 0x1C33A4u: goto label_1c33a4;
            case 0x1C33A8u: goto label_1c33a8;
            case 0x1C33ACu: goto label_1c33ac;
            case 0x1C33B0u: goto label_1c33b0;
            case 0x1C33B4u: goto label_1c33b4;
            case 0x1C33B8u: goto label_1c33b8;
            case 0x1C33BCu: goto label_1c33bc;
            case 0x1C33C0u: goto label_1c33c0;
            case 0x1C33C4u: goto label_1c33c4;
            case 0x1C33C8u: goto label_1c33c8;
            case 0x1C33CCu: goto label_1c33cc;
            case 0x1C33D0u: goto label_1c33d0;
            case 0x1C33D4u: goto label_1c33d4;
            case 0x1C33D8u: goto label_1c33d8;
            case 0x1C33DCu: goto label_1c33dc;
            case 0x1C33E0u: goto label_1c33e0;
            case 0x1C33E4u: goto label_1c33e4;
            case 0x1C33E8u: goto label_1c33e8;
            case 0x1C33ECu: goto label_1c33ec;
            case 0x1C33F0u: goto label_1c33f0;
            case 0x1C33F4u: goto label_1c33f4;
            case 0x1C33F8u: goto label_1c33f8;
            case 0x1C33FCu: goto label_1c33fc;
            case 0x1C3400u: goto label_1c3400;
            case 0x1C3404u: goto label_1c3404;
            case 0x1C3408u: goto label_1c3408;
            case 0x1C340Cu: goto label_1c340c;
            case 0x1C3410u: goto label_1c3410;
            case 0x1C3414u: goto label_1c3414;
            case 0x1C3418u: goto label_1c3418;
            case 0x1C341Cu: goto label_1c341c;
            case 0x1C3420u: goto label_1c3420;
            case 0x1C3424u: goto label_1c3424;
            case 0x1C3428u: goto label_1c3428;
            case 0x1C342Cu: goto label_1c342c;
            case 0x1C3430u: goto label_1c3430;
            case 0x1C3434u: goto label_1c3434;
            case 0x1C3438u: goto label_1c3438;
            case 0x1C343Cu: goto label_1c343c;
            case 0x1C3440u: goto label_1c3440;
            case 0x1C3444u: goto label_1c3444;
            case 0x1C3448u: goto label_1c3448;
            case 0x1C344Cu: goto label_1c344c;
            case 0x1C3450u: goto label_1c3450;
            case 0x1C3454u: goto label_1c3454;
            case 0x1C3458u: goto label_1c3458;
            case 0x1C345Cu: goto label_1c345c;
            case 0x1C3460u: goto label_1c3460;
            case 0x1C3464u: goto label_1c3464;
            case 0x1C3468u: goto label_1c3468;
            case 0x1C346Cu: goto label_1c346c;
            case 0x1C3470u: goto label_1c3470;
            case 0x1C3474u: goto label_1c3474;
            case 0x1C3478u: goto label_1c3478;
            case 0x1C347Cu: goto label_1c347c;
            case 0x1C3480u: goto label_1c3480;
            case 0x1C3484u: goto label_1c3484;
            case 0x1C3488u: goto label_1c3488;
            case 0x1C348Cu: goto label_1c348c;
            case 0x1C3490u: goto label_1c3490;
            case 0x1C3494u: goto label_1c3494;
            case 0x1C3498u: goto label_1c3498;
            case 0x1C349Cu: goto label_1c349c;
            case 0x1C34A0u: goto label_1c34a0;
            case 0x1C34A4u: goto label_1c34a4;
            case 0x1C34A8u: goto label_1c34a8;
            case 0x1C34ACu: goto label_1c34ac;
            case 0x1C34B0u: goto label_1c34b0;
            case 0x1C34B4u: goto label_1c34b4;
            case 0x1C34B8u: goto label_1c34b8;
            case 0x1C34BCu: goto label_1c34bc;
            case 0x1C34C0u: goto label_1c34c0;
            case 0x1C34C4u: goto label_1c34c4;
            case 0x1C34C8u: goto label_1c34c8;
            case 0x1C34CCu: goto label_1c34cc;
            case 0x1C34D0u: goto label_1c34d0;
            case 0x1C34D4u: goto label_1c34d4;
            case 0x1C34D8u: goto label_1c34d8;
            case 0x1C34DCu: goto label_1c34dc;
            case 0x1C34E0u: goto label_1c34e0;
            case 0x1C34E4u: goto label_1c34e4;
            case 0x1C34E8u: goto label_1c34e8;
            case 0x1C34ECu: goto label_1c34ec;
            case 0x1C34F0u: goto label_1c34f0;
            case 0x1C34F4u: goto label_1c34f4;
            case 0x1C34F8u: goto label_1c34f8;
            case 0x1C34FCu: goto label_1c34fc;
            case 0x1C3500u: goto label_1c3500;
            case 0x1C3504u: goto label_1c3504;
            case 0x1C3508u: goto label_1c3508;
            case 0x1C350Cu: goto label_1c350c;
            case 0x1C3510u: goto label_1c3510;
            case 0x1C3514u: goto label_1c3514;
            case 0x1C3518u: goto label_1c3518;
            case 0x1C351Cu: goto label_1c351c;
            case 0x1C3520u: goto label_1c3520;
            case 0x1C3524u: goto label_1c3524;
            case 0x1C3528u: goto label_1c3528;
            case 0x1C352Cu: goto label_1c352c;
            case 0x1C3530u: goto label_1c3530;
            case 0x1C3534u: goto label_1c3534;
            case 0x1C3538u: goto label_1c3538;
            case 0x1C353Cu: goto label_1c353c;
            case 0x1C3540u: goto label_1c3540;
            case 0x1C3544u: goto label_1c3544;
            case 0x1C3548u: goto label_1c3548;
            case 0x1C354Cu: goto label_1c354c;
            case 0x1C3550u: goto label_1c3550;
            case 0x1C3554u: goto label_1c3554;
            case 0x1C3558u: goto label_1c3558;
            case 0x1C355Cu: goto label_1c355c;
            case 0x1C3560u: goto label_1c3560;
            case 0x1C3564u: goto label_1c3564;
            case 0x1C3568u: goto label_1c3568;
            case 0x1C356Cu: goto label_1c356c;
            case 0x1C3570u: goto label_1c3570;
            case 0x1C3574u: goto label_1c3574;
            case 0x1C3578u: goto label_1c3578;
            case 0x1C357Cu: goto label_1c357c;
            case 0x1C3580u: goto label_1c3580;
            case 0x1C3584u: goto label_1c3584;
            case 0x1C3588u: goto label_1c3588;
            case 0x1C358Cu: goto label_1c358c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3188u;
label_1c3188:
    // 0x1c3188: 0x24060001
    ctx->pc = 0x1c3188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1c318c:
    // 0x1c318c: 0x24020008
    ctx->pc = 0x1c318cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1c3190:
    // 0x1c3190: 0xa2060002
    ctx->pc = 0x1c3190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 6));
label_1c3194:
    // 0x1c3194: 0xae02002c
    ctx->pc = 0x1c3194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3198:
    // 0x1c3198: 0x8e0500e8
    ctx->pc = 0x1c3198u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1c319c:
    // 0x1c319c: 0xc0701c4
label_1c31a0:
    if (ctx->pc == 0x1C31A0u) {
        ctx->pc = 0x1C31A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1C31A4u;
        goto label_1c31a4;
    }
    ctx->pc = 0x1C319Cu;
    SET_GPR_U32(ctx, 31, 0x1C31A4u);
    ctx->pc = 0x1C31A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C0710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0710_0x1c0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31A4u; }
    }
    if (ctx->pc != 0x1C31A4u) { return; }
    ctx->pc = 0x1C31A4u;
label_1c31a4:
    // 0x1c31a4: 0xc070498
label_1c31a8:
    if (ctx->pc == 0x1C31A8u) {
        ctx->pc = 0x1C31ACu;
        goto label_1c31ac;
    }
    ctx->pc = 0x1C31A4u;
    SET_GPR_U32(ctx, 31, 0x1C31ACu);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31ACu; }
    }
    if (ctx->pc != 0x1C31ACu) { return; }
    ctx->pc = 0x1C31ACu;
label_1c31ac:
    // 0x1c31ac: 0x2403ffff
    ctx->pc = 0x1c31acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c31b0:
    // 0x1c31b0: 0x104300ec
label_1c31b4:
    if (ctx->pc == 0x1C31B4u) {
        ctx->pc = 0x1C31B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C31B8u;
        goto label_1c31b8;
    }
    ctx->pc = 0x1C31B0u;
    {
        const bool branch_taken_0x1c31b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C31B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c31b0) {
            ctx->pc = 0x1C3564u;
            goto label_1c3564;
        }
    }
    ctx->pc = 0x1C31B8u;
label_1c31b8:
    // 0x1c31b8: 0x2403ff05
    ctx->pc = 0x1c31b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967045));
label_1c31bc:
    // 0x1c31bc: 0x1043002d
label_1c31c0:
    if (ctx->pc == 0x1C31C0u) {
        ctx->pc = 0x1C31C4u;
        goto label_1c31c4;
    }
    ctx->pc = 0x1C31BCu;
    {
        const bool branch_taken_0x1c31bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c31bc) {
            ctx->pc = 0x1C3274u;
            goto label_1c3274;
        }
    }
    ctx->pc = 0x1C31C4u;
label_1c31c4:
    // 0x1c31c4: 0x1040001f
label_1c31c8:
    if (ctx->pc == 0x1C31C8u) {
        ctx->pc = 0x1C31C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
        ctx->pc = 0x1C31CCu;
        goto label_1c31cc;
    }
    ctx->pc = 0x1C31C4u;
    {
        const bool branch_taken_0x1c31c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C31C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
        if (branch_taken_0x1c31c4) {
            ctx->pc = 0x1C3244u;
            goto label_1c3244;
        }
    }
    ctx->pc = 0x1C31CCu;
label_1c31cc:
    // 0x1c31cc: 0x10430016
label_1c31d0:
    if (ctx->pc == 0x1C31D0u) {
        ctx->pc = 0x1C31D4u;
        goto label_1c31d4;
    }
    ctx->pc = 0x1C31CCu;
    {
        const bool branch_taken_0x1c31cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c31cc) {
            ctx->pc = 0x1C3228u;
            goto label_1c3228;
        }
    }
    ctx->pc = 0x1C31D4u;
label_1c31d4:
    // 0x1c31d4: 0x2403ff00
    ctx->pc = 0x1c31d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c31d8:
    // 0x1c31d8: 0x1043000c
label_1c31dc:
    if (ctx->pc == 0x1C31DCu) {
        ctx->pc = 0x1C31DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
        ctx->pc = 0x1C31E0u;
        goto label_1c31e0;
    }
    ctx->pc = 0x1C31D8u;
    {
        const bool branch_taken_0x1c31d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C31DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
        if (branch_taken_0x1c31d8) {
            ctx->pc = 0x1C320Cu;
            goto label_1c320c;
        }
    }
    ctx->pc = 0x1C31E0u;
label_1c31e0:
    // 0x1c31e0: 0x10430003
label_1c31e4:
    if (ctx->pc == 0x1C31E4u) {
        ctx->pc = 0x1C31E8u;
        goto label_1c31e8;
    }
    ctx->pc = 0x1C31E0u;
    {
        const bool branch_taken_0x1c31e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c31e0) {
            ctx->pc = 0x1C31F0u;
            goto label_1c31f0;
        }
    }
    ctx->pc = 0x1C31E8u;
label_1c31e8:
    // 0x1c31e8: 0x10000029
label_1c31ec:
    if (ctx->pc == 0x1C31ECu) {
        ctx->pc = 0x1C31ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1C31F0u;
        goto label_1c31f0;
    }
    ctx->pc = 0x1C31E8u;
    {
        const bool branch_taken_0x1c31e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C31ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c31e8) {
            ctx->pc = 0x1C3290u;
            goto label_1c3290;
        }
    }
    ctx->pc = 0x1C31F0u;
label_1c31f0:
    // 0x1c31f0: 0x24020007
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_1c31f4:
    // 0x1c31f4: 0x24030004
    ctx->pc = 0x1c31f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c31f8:
    // 0x1c31f8: 0xae02002c
    ctx->pc = 0x1c31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c31fc:
    // 0x1c31fc: 0x24020001
    ctx->pc = 0x1c31fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3200:
    // 0x1c3200: 0xa2030002
    ctx->pc = 0x1c3200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c3204:
    // 0x1c3204: 0x100000d6
label_1c3208:
    if (ctx->pc == 0x1C3208u) {
        ctx->pc = 0x1C3208u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x1C320Cu;
        goto label_1c320c;
    }
    ctx->pc = 0x1C3204u;
    {
        const bool branch_taken_0x1c3204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3208u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3204) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C320Cu;
label_1c320c:
    // 0x1c320c: 0x24020009
    ctx->pc = 0x1c320cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_1c3210:
    // 0x1c3210: 0x24030004
    ctx->pc = 0x1c3210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c3214:
    // 0x1c3214: 0xae02002c
    ctx->pc = 0x1c3214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3218:
    // 0x1c3218: 0x24020001
    ctx->pc = 0x1c3218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c321c:
    // 0x1c321c: 0xa2030002
    ctx->pc = 0x1c321cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c3220:
    // 0x1c3220: 0x100000cf
label_1c3224:
    if (ctx->pc == 0x1C3224u) {
        ctx->pc = 0x1C3224u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3228u;
        goto label_1c3228;
    }
    ctx->pc = 0x1C3220u;
    {
        const bool branch_taken_0x1c3220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3224u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3220) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3228u;
label_1c3228:
    // 0x1c3228: 0x24020007
    ctx->pc = 0x1c3228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_1c322c:
    // 0x1c322c: 0x24030004
    ctx->pc = 0x1c322cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c3230:
    // 0x1c3230: 0xae02002c
    ctx->pc = 0x1c3230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3234:
    // 0x1c3234: 0x24020001
    ctx->pc = 0x1c3234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3238:
    // 0x1c3238: 0xa2030002
    ctx->pc = 0x1c3238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c323c:
    // 0x1c323c: 0x100000c8
label_1c3240:
    if (ctx->pc == 0x1C3240u) {
        ctx->pc = 0x1C3240u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3244u;
        goto label_1c3244;
    }
    ctx->pc = 0x1C323Cu;
    {
        const bool branch_taken_0x1c323c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3240u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c323c) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3244u;
label_1c3244:
    // 0x1c3244: 0x24020022
    ctx->pc = 0x1c3244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
label_1c3248:
    // 0x1c3248: 0x24030001
    ctx->pc = 0x1c3248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c324c:
    // 0x1c324c: 0xae02002c
    ctx->pc = 0x1c324cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3250:
    // 0x1c3250: 0xae030030
    ctx->pc = 0x1c3250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1c3254:
    // 0x1c3254: 0x24020005
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c3258:
    // 0x1c3258: 0xae030038
    ctx->pc = 0x1c3258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_1c325c:
    // 0x1c325c: 0xae020010
    ctx->pc = 0x1c325cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c3260:
    // 0x1c3260: 0x82020002
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1c3264:
    // 0x1c3264: 0x24420001
    ctx->pc = 0x1c3264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c3268:
    // 0x1c3268: 0xa2020002
    ctx->pc = 0x1c3268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c326c:
    // 0x1c326c: 0x100000bc
label_1c3270:
    if (ctx->pc == 0x1C3270u) {
        ctx->pc = 0x1C3270u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C3274u;
        goto label_1c3274;
    }
    ctx->pc = 0x1C326Cu;
    {
        const bool branch_taken_0x1c326c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3270u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c326c) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3274u;
label_1c3274:
    // 0x1c3274: 0x24020009
    ctx->pc = 0x1c3274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_1c3278:
    // 0x1c3278: 0x24030004
    ctx->pc = 0x1c3278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c327c:
    // 0x1c327c: 0xae02002c
    ctx->pc = 0x1c327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3280:
    // 0x1c3280: 0x24020001
    ctx->pc = 0x1c3280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3284:
    // 0x1c3284: 0xa2030002
    ctx->pc = 0x1c3284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c3288:
    // 0x1c3288: 0x100000b5
label_1c328c:
    if (ctx->pc == 0x1C328Cu) {
        ctx->pc = 0x1C328Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3290u;
        goto label_1c3290;
    }
    ctx->pc = 0x1C3288u;
    {
        const bool branch_taken_0x1c3288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C328Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3288) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3290u;
label_1c3290:
    // 0x1c3290: 0x304300ff
    ctx->pc = 0x1c3290u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_1c3294:
    // 0x1c3294: 0xa2040002
    ctx->pc = 0x1c3294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c3298:
    // 0x1c3298: 0x24020003
    ctx->pc = 0x1c3298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c329c:
    // 0x1c329c: 0xae030034
    ctx->pc = 0x1c329cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_1c32a0:
    // 0x1c32a0: 0x8e030034
    ctx->pc = 0x1c32a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c32a4:
    // 0x1c32a4: 0x1062000f
label_1c32a8:
    if (ctx->pc == 0x1C32A8u) {
        ctx->pc = 0x1C32ACu;
        goto label_1c32ac;
    }
    ctx->pc = 0x1C32A4u;
    {
        const bool branch_taken_0x1c32a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c32a4) {
            ctx->pc = 0x1C32E4u;
            goto label_1c32e4;
        }
    }
    ctx->pc = 0x1C32ACu;
label_1c32ac:
    // 0x1c32ac: 0x1064000e
label_1c32b0:
    if (ctx->pc == 0x1C32B0u) {
        ctx->pc = 0x1C32B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1C32B4u;
        goto label_1c32b4;
    }
    ctx->pc = 0x1C32ACu;
    {
        const bool branch_taken_0x1c32ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C32B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1c32ac) {
            ctx->pc = 0x1C32E8u;
            goto label_1c32e8;
        }
    }
    ctx->pc = 0x1C32B4u;
label_1c32b4:
    // 0x1c32b4: 0x24020002
    ctx->pc = 0x1c32b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1c32b8:
    // 0x1c32b8: 0x10620008
label_1c32bc:
    if (ctx->pc == 0x1C32BCu) {
        ctx->pc = 0x1C32BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1C32C0u;
        goto label_1c32c0;
    }
    ctx->pc = 0x1C32B8u;
    {
        const bool branch_taken_0x1c32b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C32BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1c32b8) {
            ctx->pc = 0x1C32DCu;
            goto label_1c32dc;
        }
    }
    ctx->pc = 0x1C32C0u;
label_1c32c0:
    // 0x1c32c0: 0x24020001
    ctx->pc = 0x1c32c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c32c4:
    // 0x1c32c4: 0x10620003
label_1c32c8:
    if (ctx->pc == 0x1C32C8u) {
        ctx->pc = 0x1C32C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1C32CCu;
        goto label_1c32cc;
    }
    ctx->pc = 0x1C32C4u;
    {
        const bool branch_taken_0x1c32c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C32C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c32c4) {
            ctx->pc = 0x1C32D4u;
            goto label_1c32d4;
        }
    }
    ctx->pc = 0x1C32CCu;
label_1c32cc:
    // 0x1c32cc: 0x100000a4
label_1c32d0:
    if (ctx->pc == 0x1C32D0u) {
        ctx->pc = 0x1C32D4u;
        goto label_1c32d4;
    }
    ctx->pc = 0x1C32CCu;
    {
        const bool branch_taken_0x1c32cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c32cc) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C32D4u;
label_1c32d4:
    // 0x1c32d4: 0x100000a2
label_1c32d8:
    if (ctx->pc == 0x1C32D8u) {
        ctx->pc = 0x1C32D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C32DCu;
        goto label_1c32dc;
    }
    ctx->pc = 0x1C32D4u;
    {
        const bool branch_taken_0x1c32d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C32D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c32d4) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C32DCu;
label_1c32dc:
    // 0x1c32dc: 0x100000a0
label_1c32e0:
    if (ctx->pc == 0x1C32E0u) {
        ctx->pc = 0x1C32E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C32E4u;
        goto label_1c32e4;
    }
    ctx->pc = 0x1C32DCu;
    {
        const bool branch_taken_0x1c32dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C32E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c32dc) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C32E4u;
label_1c32e4:
    // 0x1c32e4: 0x24020007
    ctx->pc = 0x1c32e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_1c32e8:
    // 0x1c32e8: 0x1000009d
label_1c32ec:
    if (ctx->pc == 0x1C32ECu) {
        ctx->pc = 0x1C32ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C32F0u;
        goto label_1c32f0;
    }
    ctx->pc = 0x1C32E8u;
    {
        const bool branch_taken_0x1c32e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C32ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c32e8) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C32F0u;
label_1c32f0:
    // 0x1c32f0: 0x82030003
    ctx->pc = 0x1c32f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c32f4:
    // 0x1c32f4: 0x24020001
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c32f8:
    // 0x1c32f8: 0x1062000c
label_1c32fc:
    if (ctx->pc == 0x1C32FCu) {
        ctx->pc = 0x1C32FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3300u;
        goto label_1c3300;
    }
    ctx->pc = 0x1C32F8u;
    {
        const bool branch_taken_0x1c32f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C32FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c32f8) {
            ctx->pc = 0x1C332Cu;
            goto label_1c332c;
        }
    }
    ctx->pc = 0x1C3300u;
label_1c3300:
    // 0x1c3300: 0x10600003
label_1c3304:
    if (ctx->pc == 0x1C3304u) {
        ctx->pc = 0x1C3308u;
        goto label_1c3308;
    }
    ctx->pc = 0x1C3300u;
    {
        const bool branch_taken_0x1c3300 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3300) {
            ctx->pc = 0x1C3310u;
            goto label_1c3310;
        }
    }
    ctx->pc = 0x1C3308u;
label_1c3308:
    // 0x1c3308: 0x10000095
label_1c330c:
    if (ctx->pc == 0x1C330Cu) {
        ctx->pc = 0x1C3310u;
        goto label_1c3310;
    }
    ctx->pc = 0x1C3308u;
    {
        const bool branch_taken_0x1c3308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3308) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3310u;
label_1c3310:
    // 0x1c3310: 0xc070114
label_1c3314:
    if (ctx->pc == 0x1C3314u) {
        ctx->pc = 0x1C3318u;
        goto label_1c3318;
    }
    ctx->pc = 0x1C3310u;
    SET_GPR_U32(ctx, 31, 0x1C3318u);
    ctx->pc = 0x1C0450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0450_0x1c0450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3318u; }
    }
    if (ctx->pc != 0x1C3318u) { return; }
    ctx->pc = 0x1C3318u;
label_1c3318:
    // 0x1c3318: 0xae0000e0
    ctx->pc = 0x1c3318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1c331c:
    // 0x1c331c: 0x82020003
    ctx->pc = 0x1c331cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c3320:
    // 0x1c3320: 0x24420001
    ctx->pc = 0x1c3320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c3324:
    // 0x1c3324: 0x1000008e
label_1c3328:
    if (ctx->pc == 0x1C3328u) {
        ctx->pc = 0x1C3328u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C332Cu;
        goto label_1c332c;
    }
    ctx->pc = 0x1C3324u;
    {
        const bool branch_taken_0x1c3324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3328u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c3324) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C332Cu;
label_1c332c:
    // 0x1c332c: 0xc07049c
label_1c3330:
    if (ctx->pc == 0x1C3330u) {
        ctx->pc = 0x1C3334u;
        goto label_1c3334;
    }
    ctx->pc = 0x1C332Cu;
    SET_GPR_U32(ctx, 31, 0x1C3334u);
    ctx->pc = 0x1C1270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1270_0x1c1270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3334u; }
    }
    if (ctx->pc != 0x1C3334u) { return; }
    ctx->pc = 0x1C3334u;
label_1c3334:
    // 0x1c3334: 0x14400009
label_1c3338:
    if (ctx->pc == 0x1C3338u) {
        ctx->pc = 0x1C3338u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C333Cu;
        goto label_1c333c;
    }
    ctx->pc = 0x1C3334u;
    {
        const bool branch_taken_0x1c3334 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C3338u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c3334) {
            ctx->pc = 0x1C335Cu;
            goto label_1c335c;
        }
    }
    ctx->pc = 0x1C333Cu;
label_1c333c:
    // 0x1c333c: 0x24030005
    ctx->pc = 0x1c333cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c3340:
    // 0x1c3340: 0xae0400e0
    ctx->pc = 0x1c3340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
label_1c3344:
    // 0x1c3344: 0x24020004
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1c3348:
    // 0x1c3348: 0xae03002c
    ctx->pc = 0x1c3348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c334c:
    // 0x1c334c: 0xa2020002
    ctx->pc = 0x1c334cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c3350:
    // 0x1c3350: 0xae040034
    ctx->pc = 0x1c3350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_1c3354:
    // 0x1c3354: 0x10000082
label_1c3358:
    if (ctx->pc == 0x1C3358u) {
        ctx->pc = 0x1C3358u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1C335Cu;
        goto label_1c335c;
    }
    ctx->pc = 0x1C3354u;
    {
        const bool branch_taken_0x1c3354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3358u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x1c3354) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C335Cu;
label_1c335c:
    // 0x1c335c: 0x9603000a
    ctx->pc = 0x1c335cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1c3360:
    // 0x1c3360: 0x30620010
    ctx->pc = 0x1c3360u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1c3364:
    // 0x1c3364: 0x10400012
label_1c3368:
    if (ctx->pc == 0x1C3368u) {
        ctx->pc = 0x1C336Cu;
        goto label_1c336c;
    }
    ctx->pc = 0x1C3364u;
    {
        const bool branch_taken_0x1c3364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3364) {
            ctx->pc = 0x1C33B0u;
            goto label_1c33b0;
        }
    }
    ctx->pc = 0x1C336Cu;
label_1c336c:
    // 0x1c336c: 0xc07165c
label_1c3370:
    if (ctx->pc == 0x1C3370u) {
        ctx->pc = 0x1C3374u;
        goto label_1c3374;
    }
    ctx->pc = 0x1C336Cu;
    SET_GPR_U32(ctx, 31, 0x1C3374u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3374u; }
    }
    if (ctx->pc != 0x1C3374u) { return; }
    ctx->pc = 0x1C3374u;
label_1c3374:
    // 0x1c3374: 0xae000030
    ctx->pc = 0x1c3374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1c3378:
    // 0x1c3378: 0x8e020038
    ctx->pc = 0x1c3378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c337c:
    // 0x1c337c: 0x1440000a
label_1c3380:
    if (ctx->pc == 0x1C3380u) {
        ctx->pc = 0x1C3380u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3384u;
        goto label_1c3384;
    }
    ctx->pc = 0x1C337Cu;
    {
        const bool branch_taken_0x1c337c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C3380u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c337c) {
            ctx->pc = 0x1C33A8u;
            goto label_1c33a8;
        }
    }
    ctx->pc = 0x1C3384u;
label_1c3384:
    // 0x1c3384: 0x8e0500ec
    ctx->pc = 0x1c3384u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1c3388:
    // 0x1c3388: 0xc070138
label_1c338c:
    if (ctx->pc == 0x1C338Cu) {
        ctx->pc = 0x1C338Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1C3390u;
        goto label_1c3390;
    }
    ctx->pc = 0x1C3388u;
    SET_GPR_U32(ctx, 31, 0x1C3390u);
    ctx->pc = 0x1C338Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C04E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C04E0_0x1c04e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3390u; }
    }
    if (ctx->pc != 0x1C3390u) { return; }
    ctx->pc = 0x1C3390u;
label_1c3390:
    // 0x1c3390: 0x82030002
    ctx->pc = 0x1c3390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1c3394:
    // 0x1c3394: 0x24020003
    ctx->pc = 0x1c3394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c3398:
    // 0x1c3398: 0x24630001
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1c339c:
    // 0x1c339c: 0xa2030002
    ctx->pc = 0x1c339cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c33a0:
    // 0x1c33a0: 0x1000006f
label_1c33a4:
    if (ctx->pc == 0x1C33A4u) {
        ctx->pc = 0x1C33A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C33A8u;
        goto label_1c33a8;
    }
    ctx->pc = 0x1C33A0u;
    {
        const bool branch_taken_0x1c33a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C33A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c33a0) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C33A8u;
label_1c33a8:
    // 0x1c33a8: 0x10000074
label_1c33ac:
    if (ctx->pc == 0x1C33ACu) {
        ctx->pc = 0x1C33ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C33B0u;
        goto label_1c33b0;
    }
    ctx->pc = 0x1C33A8u;
    {
        const bool branch_taken_0x1c33a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C33ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c33a8) {
            ctx->pc = 0x1C357Cu;
            goto label_1c357c;
        }
    }
    ctx->pc = 0x1C33B0u;
label_1c33b0:
    // 0x1c33b0: 0x8e020010
    ctx->pc = 0x1c33b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c33b4:
    // 0x1c33b4: 0x10400004
label_1c33b8:
    if (ctx->pc == 0x1C33B8u) {
        ctx->pc = 0x1C33BCu;
        goto label_1c33bc;
    }
    ctx->pc = 0x1C33B4u;
    {
        const bool branch_taken_0x1c33b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c33b4) {
            ctx->pc = 0x1C33C8u;
            goto label_1c33c8;
        }
    }
    ctx->pc = 0x1C33BCu;
label_1c33bc:
    // 0x1c33bc: 0x2442ffff
    ctx->pc = 0x1c33bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c33c0:
    // 0x1c33c0: 0x10000067
label_1c33c4:
    if (ctx->pc == 0x1C33C4u) {
        ctx->pc = 0x1C33C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C33C8u;
        goto label_1c33c8;
    }
    ctx->pc = 0x1C33C0u;
    {
        const bool branch_taken_0x1c33c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C33C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c33c0) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C33C8u;
label_1c33c8:
    // 0x1c33c8: 0x30620008
    ctx->pc = 0x1c33c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_1c33cc:
    // 0x1c33cc: 0x10400005
label_1c33d0:
    if (ctx->pc == 0x1C33D0u) {
        ctx->pc = 0x1C33D0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1C33D4u;
        goto label_1c33d4;
    }
    ctx->pc = 0x1C33CCu;
    {
        const bool branch_taken_0x1c33cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C33D0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1c33cc) {
            ctx->pc = 0x1C33E4u;
            goto label_1c33e4;
        }
    }
    ctx->pc = 0x1C33D4u;
label_1c33d4:
    // 0x1c33d4: 0x8e020038
    ctx->pc = 0x1c33d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c33d8:
    // 0x1c33d8: 0x10400008
label_1c33dc:
    if (ctx->pc == 0x1C33DCu) {
        ctx->pc = 0x1C33E0u;
        goto label_1c33e0;
    }
    ctx->pc = 0x1C33D8u;
    {
        const bool branch_taken_0x1c33d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c33d8) {
            ctx->pc = 0x1C33FCu;
            goto label_1c33fc;
        }
    }
    ctx->pc = 0x1C33E0u;
label_1c33e0:
    // 0x1c33e0: 0x30620004
    ctx->pc = 0x1c33e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_1c33e4:
    // 0x1c33e4: 0x1040005e
label_1c33e8:
    if (ctx->pc == 0x1C33E8u) {
        ctx->pc = 0x1C33ECu;
        goto label_1c33ec;
    }
    ctx->pc = 0x1C33E4u;
    {
        const bool branch_taken_0x1c33e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c33e4) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C33ECu;
label_1c33ec:
    // 0x1c33ec: 0x8e030038
    ctx->pc = 0x1c33ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c33f0:
    // 0x1c33f0: 0x24020001
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c33f4:
    // 0x1c33f4: 0x1462005a
label_1c33f8:
    if (ctx->pc == 0x1C33F8u) {
        ctx->pc = 0x1C33FCu;
        goto label_1c33fc;
    }
    ctx->pc = 0x1C33F4u;
    {
        const bool branch_taken_0x1c33f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c33f4) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C33FCu;
label_1c33fc:
    // 0x1c33fc: 0xc071660
label_1c3400:
    if (ctx->pc == 0x1C3400u) {
        ctx->pc = 0x1C3404u;
        goto label_1c3404;
    }
    ctx->pc = 0x1C33FCu;
    SET_GPR_U32(ctx, 31, 0x1C3404u);
    ctx->pc = 0x1C5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5980_0x1c5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3404u; }
    }
    if (ctx->pc != 0x1C3404u) { return; }
    ctx->pc = 0x1C3404u;
label_1c3404:
    // 0x1c3404: 0x8e030038
    ctx->pc = 0x1c3404u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c3408:
    // 0x1c3408: 0x24020005
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c340c:
    // 0x1c340c: 0x38630001
    ctx->pc = 0x1c340cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
label_1c3410:
    // 0x1c3410: 0xae030038
    ctx->pc = 0x1c3410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_1c3414:
    // 0x1c3414: 0x10000052
label_1c3418:
    if (ctx->pc == 0x1C3418u) {
        ctx->pc = 0x1C3418u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C341Cu;
        goto label_1c341c;
    }
    ctx->pc = 0x1C3414u;
    {
        const bool branch_taken_0x1c3414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3418u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3414) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C341Cu;
label_1c341c:
    // 0x1c341c: 0xc070498
label_1c3420:
    if (ctx->pc == 0x1C3420u) {
        ctx->pc = 0x1C3424u;
        goto label_1c3424;
    }
    ctx->pc = 0x1C341Cu;
    SET_GPR_U32(ctx, 31, 0x1C3424u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3424u; }
    }
    if (ctx->pc != 0x1C3424u) { return; }
    ctx->pc = 0x1C3424u;
label_1c3424:
    // 0x1c3424: 0x2403ffff
    ctx->pc = 0x1c3424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c3428:
    // 0x1c3428: 0x10430039
label_1c342c:
    if (ctx->pc == 0x1C342Cu) {
        ctx->pc = 0x1C3430u;
        goto label_1c3430;
    }
    ctx->pc = 0x1C3428u;
    {
        const bool branch_taken_0x1c3428 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3428) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3430u;
label_1c3430:
    // 0x1c3430: 0x2403ff00
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c3434:
    // 0x1c3434: 0x10430018
label_1c3438:
    if (ctx->pc == 0x1C3438u) {
        ctx->pc = 0x1C3438u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1C343Cu;
        goto label_1c343c;
    }
    ctx->pc = 0x1C3434u;
    {
        const bool branch_taken_0x1c3434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C3438u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c3434) {
            ctx->pc = 0x1C3498u;
            goto label_1c3498;
        }
    }
    ctx->pc = 0x1C343Cu;
label_1c343c:
    // 0x1c343c: 0x10400003
label_1c3440:
    if (ctx->pc == 0x1C3440u) {
        ctx->pc = 0x1C3440u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3444u;
        goto label_1c3444;
    }
    ctx->pc = 0x1C343Cu;
    {
        const bool branch_taken_0x1c343c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3440u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c343c) {
            ctx->pc = 0x1C344Cu;
            goto label_1c344c;
        }
    }
    ctx->pc = 0x1C3444u;
label_1c3444:
    // 0x1c3444: 0x10000019
label_1c3448:
    if (ctx->pc == 0x1C3448u) {
        ctx->pc = 0x1C3448u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1C344Cu;
        goto label_1c344c;
    }
    ctx->pc = 0x1C3444u;
    {
        const bool branch_taken_0x1c3444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3448u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c3444) {
            ctx->pc = 0x1C34ACu;
            goto label_1c34ac;
        }
    }
    ctx->pc = 0x1C344Cu;
label_1c344c:
    // 0x1c344c: 0xc071570
label_1c3450:
    if (ctx->pc == 0x1C3450u) {
        ctx->pc = 0x1C3454u;
        goto label_1c3454;
    }
    ctx->pc = 0x1C344Cu;
    SET_GPR_U32(ctx, 31, 0x1C3454u);
    ctx->pc = 0x1C55C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3454u; }
    }
    if (ctx->pc != 0x1C3454u) { return; }
    ctx->pc = 0x1C3454u;
label_1c3454:
    // 0x1c3454: 0x14400008
label_1c3458:
    if (ctx->pc == 0x1C3458u) {
        ctx->pc = 0x1C3458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1C345Cu;
        goto label_1c345c;
    }
    ctx->pc = 0x1C3454u;
    {
        const bool branch_taken_0x1c3454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C3458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c3454) {
            ctx->pc = 0x1C3478u;
            goto label_1c3478;
        }
    }
    ctx->pc = 0x1C345Cu;
label_1c345c:
    // 0x1c345c: 0x24020020
    ctx->pc = 0x1c345cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1c3460:
    // 0x1c3460: 0xc0704a4
label_1c3464:
    if (ctx->pc == 0x1C3464u) {
        ctx->pc = 0x1C3464u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3468u;
        goto label_1c3468;
    }
    ctx->pc = 0x1C3460u;
    SET_GPR_U32(ctx, 31, 0x1C3468u);
    ctx->pc = 0x1C3464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C1290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1290_0x1c1290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3468u; }
    }
    if (ctx->pc != 0x1C3468u) { return; }
    ctx->pc = 0x1C3468u;
label_1c3468:
    // 0x1c3468: 0xae000034
    ctx->pc = 0x1c3468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1c346c:
    // 0x1c346c: 0x24020005
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c3470:
    // 0x1c3470: 0x10000027
label_1c3474:
    if (ctx->pc == 0x1C3474u) {
        ctx->pc = 0x1C3474u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C3478u;
        goto label_1c3478;
    }
    ctx->pc = 0x1C3470u;
    {
        const bool branch_taken_0x1c3470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3474u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c3470) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3478u;
label_1c3478:
    // 0x1c3478: 0x24030005
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c347c:
    // 0x1c347c: 0xae04002c
    ctx->pc = 0x1c347cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
label_1c3480:
    // 0x1c3480: 0x24020001
    ctx->pc = 0x1c3480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3484:
    // 0x1c3484: 0xae030034
    ctx->pc = 0x1c3484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_1c3488:
    // 0x1c3488: 0xae020034
    ctx->pc = 0x1c3488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c348c:
    // 0x1c348c: 0xae0200e0
    ctx->pc = 0x1c348cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_1c3490:
    // 0x1c3490: 0x1000001f
label_1c3494:
    if (ctx->pc == 0x1C3494u) {
        ctx->pc = 0x1C3494u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1C3498u;
        goto label_1c3498;
    }
    ctx->pc = 0x1C3490u;
    {
        const bool branch_taken_0x1c3490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3494u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1c3490) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3498u;
label_1c3498:
    // 0x1c3498: 0x24020001
    ctx->pc = 0x1c3498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c349c:
    // 0x1c349c: 0xa2030002
    ctx->pc = 0x1c349cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c34a0:
    // 0x1c34a0: 0xae020034
    ctx->pc = 0x1c34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c34a4:
    // 0x1c34a4: 0x1000001a
label_1c34a8:
    if (ctx->pc == 0x1C34A8u) {
        ctx->pc = 0x1C34A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x1C34ACu;
        goto label_1c34ac;
    }
    ctx->pc = 0x1C34A4u;
    {
        const bool branch_taken_0x1c34a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C34A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x1c34a4) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C34ACu;
label_1c34ac:
    // 0x1c34ac: 0x304200ff
    ctx->pc = 0x1c34acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1c34b0:
    // 0x1c34b0: 0xa2040002
    ctx->pc = 0x1c34b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c34b4:
    // 0x1c34b4: 0xae020034
    ctx->pc = 0x1c34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c34b8:
    // 0x1c34b8: 0x8e030034
    ctx->pc = 0x1c34b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c34bc:
    // 0x1c34bc: 0x10640012
label_1c34c0:
    if (ctx->pc == 0x1C34C0u) {
        ctx->pc = 0x1C34C4u;
        goto label_1c34c4;
    }
    ctx->pc = 0x1C34BCu;
    {
        const bool branch_taken_0x1c34bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1c34bc) {
            ctx->pc = 0x1C3508u;
            goto label_1c3508;
        }
    }
    ctx->pc = 0x1C34C4u;
label_1c34c4:
    // 0x1c34c4: 0x24020003
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c34c8:
    // 0x1c34c8: 0x1062000d
label_1c34cc:
    if (ctx->pc == 0x1C34CCu) {
        ctx->pc = 0x1C34CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C34D0u;
        goto label_1c34d0;
    }
    ctx->pc = 0x1C34C8u;
    {
        const bool branch_taken_0x1c34c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C34CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c34c8) {
            ctx->pc = 0x1C3500u;
            goto label_1c3500;
        }
    }
    ctx->pc = 0x1C34D0u;
label_1c34d0:
    // 0x1c34d0: 0x10620008
label_1c34d4:
    if (ctx->pc == 0x1C34D4u) {
        ctx->pc = 0x1C34D8u;
        goto label_1c34d8;
    }
    ctx->pc = 0x1C34D0u;
    {
        const bool branch_taken_0x1c34d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c34d0) {
            ctx->pc = 0x1C34F4u;
            goto label_1c34f4;
        }
    }
    ctx->pc = 0x1C34D8u;
label_1c34d8:
    // 0x1c34d8: 0x24020001
    ctx->pc = 0x1c34d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c34dc:
    // 0x1c34dc: 0x10620003
label_1c34e0:
    if (ctx->pc == 0x1C34E0u) {
        ctx->pc = 0x1C34E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1C34E4u;
        goto label_1c34e4;
    }
    ctx->pc = 0x1C34DCu;
    {
        const bool branch_taken_0x1c34dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C34E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c34dc) {
            ctx->pc = 0x1C34ECu;
            goto label_1c34ec;
        }
    }
    ctx->pc = 0x1C34E4u;
label_1c34e4:
    // 0x1c34e4: 0x1000000a
label_1c34e8:
    if (ctx->pc == 0x1C34E8u) {
        ctx->pc = 0x1C34ECu;
        goto label_1c34ec;
    }
    ctx->pc = 0x1C34E4u;
    {
        const bool branch_taken_0x1c34e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c34e4) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C34ECu;
label_1c34ec:
    // 0x1c34ec: 0x10000008
label_1c34f0:
    if (ctx->pc == 0x1C34F0u) {
        ctx->pc = 0x1C34F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C34F4u;
        goto label_1c34f4;
    }
    ctx->pc = 0x1C34ECu;
    {
        const bool branch_taken_0x1c34ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C34F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c34ec) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C34F4u;
label_1c34f4:
    // 0x1c34f4: 0x24020006
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_1c34f8:
    // 0x1c34f8: 0x10000005
label_1c34fc:
    if (ctx->pc == 0x1C34FCu) {
        ctx->pc = 0x1C34FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3500u;
        goto label_1c3500;
    }
    ctx->pc = 0x1C34F8u;
    {
        const bool branch_taken_0x1c34f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C34FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c34f8) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3500u;
label_1c3500:
    // 0x1c3500: 0x10000003
label_1c3504:
    if (ctx->pc == 0x1C3504u) {
        ctx->pc = 0x1C3504u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x1C3508u;
        goto label_1c3508;
    }
    ctx->pc = 0x1C3500u;
    {
        const bool branch_taken_0x1c3500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3504u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        if (branch_taken_0x1c3500) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3508u;
label_1c3508:
    // 0x1c3508: 0x24020017
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
label_1c350c:
    // 0x1c350c: 0xae02002c
    ctx->pc = 0x1c350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3510:
    // 0x1c3510: 0x3c010029
    ctx->pc = 0x1c3510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_1c3514:
    // 0x1c3514: 0x8c224170
    ctx->pc = 0x1c3514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
label_1c3518:
    // 0x1c3518: 0x10000011
label_1c351c:
    if (ctx->pc == 0x1C351Cu) {
        ctx->pc = 0x1C351Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3520u;
        goto label_1c3520;
    }
    ctx->pc = 0x1C3518u;
    {
        const bool branch_taken_0x1c3518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C351Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3518) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3520u;
label_1c3520:
    // 0x1c3520: 0x9602000a
    ctx->pc = 0x1c3520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1c3524:
    // 0x1c3524: 0x3042fff0
    ctx->pc = 0x1c3524u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
label_1c3528:
    // 0x1c3528: 0x1040000d
label_1c352c:
    if (ctx->pc == 0x1C352Cu) {
        ctx->pc = 0x1C352Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C3530u;
        goto label_1c3530;
    }
    ctx->pc = 0x1C3528u;
    {
        const bool branch_taken_0x1c3528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C352Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c3528) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3530u;
label_1c3530:
    // 0x1c3530: 0xc07165c
label_1c3534:
    if (ctx->pc == 0x1C3534u) {
        ctx->pc = 0x1C3534u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C3538u;
        goto label_1c3538;
    }
    ctx->pc = 0x1C3530u;
    SET_GPR_U32(ctx, 31, 0x1C3538u);
    ctx->pc = 0x1C3534u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3538u; }
    }
    if (ctx->pc != 0x1C3538u) { return; }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x1000000f
label_1c353c:
    if (ctx->pc == 0x1C353Cu) {
        ctx->pc = 0x1C353Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3540u;
        goto label_1c3540;
    }
    ctx->pc = 0x1C3538u;
    {
        const bool branch_taken_0x1c3538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C353Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3538) {
            ctx->pc = 0x1C3578u;
            goto label_1c3578;
        }
    }
    ctx->pc = 0x1C3540u;
label_1c3540:
    // 0x1c3540: 0x9602000a
    ctx->pc = 0x1c3540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1c3544:
    // 0x1c3544: 0x3042fff0
    ctx->pc = 0x1c3544u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
label_1c3548:
    // 0x1c3548: 0x10400005
label_1c354c:
    if (ctx->pc == 0x1C354Cu) {
        ctx->pc = 0x1C3550u;
        goto label_1c3550;
    }
    ctx->pc = 0x1C3548u;
    {
        const bool branch_taken_0x1c3548 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3548) {
            ctx->pc = 0x1C3560u;
            goto label_1c3560;
        }
    }
    ctx->pc = 0x1C3550u;
label_1c3550:
    // 0x1c3550: 0xc07165c
label_1c3554:
    if (ctx->pc == 0x1C3554u) {
        ctx->pc = 0x1C3558u;
        goto label_1c3558;
    }
    ctx->pc = 0x1C3550u;
    SET_GPR_U32(ctx, 31, 0x1C3558u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3558u; }
    }
    if (ctx->pc != 0x1C3558u) { return; }
    ctx->pc = 0x1C3558u;
label_1c3558:
    // 0x1c3558: 0x10000007
label_1c355c:
    if (ctx->pc == 0x1C355Cu) {
        ctx->pc = 0x1C355Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3560u;
        goto label_1c3560;
    }
    ctx->pc = 0x1C3558u;
    {
        const bool branch_taken_0x1c3558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C355Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3558) {
            ctx->pc = 0x1C3578u;
            goto label_1c3578;
        }
    }
    ctx->pc = 0x1C3560u;
label_1c3560:
    // 0x1c3560: 0x200202d
    ctx->pc = 0x1c3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3564:
    // 0x1c3564: 0xc0713c4
label_1c3568:
    if (ctx->pc == 0x1C3568u) {
        ctx->pc = 0x1C356Cu;
        goto label_1c356c;
    }
    ctx->pc = 0x1C3564u;
    SET_GPR_U32(ctx, 31, 0x1C356Cu);
    ctx->pc = 0x1C4F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4F10_0x1c4f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C356Cu; }
    }
    if (ctx->pc != 0x1C356Cu) { return; }
    ctx->pc = 0x1C356Cu;
label_1c356c:
    // 0x1c356c: 0xc07146c
label_1c3570:
    if (ctx->pc == 0x1C3570u) {
        ctx->pc = 0x1C3570u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3574u;
        goto label_1c3574;
    }
    ctx->pc = 0x1C356Cu;
    SET_GPR_U32(ctx, 31, 0x1C3574u);
    ctx->pc = 0x1C3570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C51B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C51B0_0x1c51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3574u; }
    }
    if (ctx->pc != 0x1C3574u) { return; }
    ctx->pc = 0x1C3574u;
label_1c3574:
    // 0x1c3574: 0x24020001
    ctx->pc = 0x1c3574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3578:
    // 0x1c3578: 0xdfbf0010
    ctx->pc = 0x1c3578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c357c:
    // 0x1c357c: 0x7bb00000
    ctx->pc = 0x1c357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3580:
    // 0x1c3580: 0x3e00008
label_1c3584:
    if (ctx->pc == 0x1C3584u) {
        ctx->pc = 0x1C3584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C3588u;
        goto label_1c3588;
    }
    ctx->pc = 0x1C3580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3150u: goto label_1c3150;
            case 0x1C3154u: goto label_1c3154;
            case 0x1C3158u: goto label_1c3158;
            case 0x1C315Cu: goto label_1c315c;
            case 0x1C3160u: goto label_1c3160;
            case 0x1C3164u: goto label_1c3164;
            case 0x1C3168u: goto label_1c3168;
            case 0x1C316Cu: goto label_1c316c;
            case 0x1C3170u: goto label_1c3170;
            case 0x1C3174u: goto label_1c3174;
            case 0x1C3178u: goto label_1c3178;
            case 0x1C317Cu: goto label_1c317c;
            case 0x1C3180u: goto label_1c3180;
            case 0x1C3184u: goto label_1c3184;
            case 0x1C3188u: goto label_1c3188;
            case 0x1C318Cu: goto label_1c318c;
            case 0x1C3190u: goto label_1c3190;
            case 0x1C3194u: goto label_1c3194;
            case 0x1C3198u: goto label_1c3198;
            case 0x1C319Cu: goto label_1c319c;
            case 0x1C31A0u: goto label_1c31a0;
            case 0x1C31A4u: goto label_1c31a4;
            case 0x1C31A8u: goto label_1c31a8;
            case 0x1C31ACu: goto label_1c31ac;
            case 0x1C31B0u: goto label_1c31b0;
            case 0x1C31B4u: goto label_1c31b4;
            case 0x1C31B8u: goto label_1c31b8;
            case 0x1C31BCu: goto label_1c31bc;
            case 0x1C31C0u: goto label_1c31c0;
            case 0x1C31C4u: goto label_1c31c4;
            case 0x1C31C8u: goto label_1c31c8;
            case 0x1C31CCu: goto label_1c31cc;
            case 0x1C31D0u: goto label_1c31d0;
            case 0x1C31D4u: goto label_1c31d4;
            case 0x1C31D8u: goto label_1c31d8;
            case 0x1C31DCu: goto label_1c31dc;
            case 0x1C31E0u: goto label_1c31e0;
            case 0x1C31E4u: goto label_1c31e4;
            case 0x1C31E8u: goto label_1c31e8;
            case 0x1C31ECu: goto label_1c31ec;
            case 0x1C31F0u: goto label_1c31f0;
            case 0x1C31F4u: goto label_1c31f4;
            case 0x1C31F8u: goto label_1c31f8;
            case 0x1C31FCu: goto label_1c31fc;
            case 0x1C3200u: goto label_1c3200;
            case 0x1C3204u: goto label_1c3204;
            case 0x1C3208u: goto label_1c3208;
            case 0x1C320Cu: goto label_1c320c;
            case 0x1C3210u: goto label_1c3210;
            case 0x1C3214u: goto label_1c3214;
            case 0x1C3218u: goto label_1c3218;
            case 0x1C321Cu: goto label_1c321c;
            case 0x1C3220u: goto label_1c3220;
            case 0x1C3224u: goto label_1c3224;
            case 0x1C3228u: goto label_1c3228;
            case 0x1C322Cu: goto label_1c322c;
            case 0x1C3230u: goto label_1c3230;
            case 0x1C3234u: goto label_1c3234;
            case 0x1C3238u: goto label_1c3238;
            case 0x1C323Cu: goto label_1c323c;
            case 0x1C3240u: goto label_1c3240;
            case 0x1C3244u: goto label_1c3244;
            case 0x1C3248u: goto label_1c3248;
            case 0x1C324Cu: goto label_1c324c;
            case 0x1C3250u: goto label_1c3250;
            case 0x1C3254u: goto label_1c3254;
            case 0x1C3258u: goto label_1c3258;
            case 0x1C325Cu: goto label_1c325c;
            case 0x1C3260u: goto label_1c3260;
            case 0x1C3264u: goto label_1c3264;
            case 0x1C3268u: goto label_1c3268;
            case 0x1C326Cu: goto label_1c326c;
            case 0x1C3270u: goto label_1c3270;
            case 0x1C3274u: goto label_1c3274;
            case 0x1C3278u: goto label_1c3278;
            case 0x1C327Cu: goto label_1c327c;
            case 0x1C3280u: goto label_1c3280;
            case 0x1C3284u: goto label_1c3284;
            case 0x1C3288u: goto label_1c3288;
            case 0x1C328Cu: goto label_1c328c;
            case 0x1C3290u: goto label_1c3290;
            case 0x1C3294u: goto label_1c3294;
            case 0x1C3298u: goto label_1c3298;
            case 0x1C329Cu: goto label_1c329c;
            case 0x1C32A0u: goto label_1c32a0;
            case 0x1C32A4u: goto label_1c32a4;
            case 0x1C32A8u: goto label_1c32a8;
            case 0x1C32ACu: goto label_1c32ac;
            case 0x1C32B0u: goto label_1c32b0;
            case 0x1C32B4u: goto label_1c32b4;
            case 0x1C32B8u: goto label_1c32b8;
            case 0x1C32BCu: goto label_1c32bc;
            case 0x1C32C0u: goto label_1c32c0;
            case 0x1C32C4u: goto label_1c32c4;
            case 0x1C32C8u: goto label_1c32c8;
            case 0x1C32CCu: goto label_1c32cc;
            case 0x1C32D0u: goto label_1c32d0;
            case 0x1C32D4u: goto label_1c32d4;
            case 0x1C32D8u: goto label_1c32d8;
            case 0x1C32DCu: goto label_1c32dc;
            case 0x1C32E0u: goto label_1c32e0;
            case 0x1C32E4u: goto label_1c32e4;
            case 0x1C32E8u: goto label_1c32e8;
            case 0x1C32ECu: goto label_1c32ec;
            case 0x1C32F0u: goto label_1c32f0;
            case 0x1C32F4u: goto label_1c32f4;
            case 0x1C32F8u: goto label_1c32f8;
            case 0x1C32FCu: goto label_1c32fc;
            case 0x1C3300u: goto label_1c3300;
            case 0x1C3304u: goto label_1c3304;
            case 0x1C3308u: goto label_1c3308;
            case 0x1C330Cu: goto label_1c330c;
            case 0x1C3310u: goto label_1c3310;
            case 0x1C3314u: goto label_1c3314;
            case 0x1C3318u: goto label_1c3318;
            case 0x1C331Cu: goto label_1c331c;
            case 0x1C3320u: goto label_1c3320;
            case 0x1C3324u: goto label_1c3324;
            case 0x1C3328u: goto label_1c3328;
            case 0x1C332Cu: goto label_1c332c;
            case 0x1C3330u: goto label_1c3330;
            case 0x1C3334u: goto label_1c3334;
            case 0x1C3338u: goto label_1c3338;
            case 0x1C333Cu: goto label_1c333c;
            case 0x1C3340u: goto label_1c3340;
            case 0x1C3344u: goto label_1c3344;
            case 0x1C3348u: goto label_1c3348;
            case 0x1C334Cu: goto label_1c334c;
            case 0x1C3350u: goto label_1c3350;
            case 0x1C3354u: goto label_1c3354;
            case 0x1C3358u: goto label_1c3358;
            case 0x1C335Cu: goto label_1c335c;
            case 0x1C3360u: goto label_1c3360;
            case 0x1C3364u: goto label_1c3364;
            case 0x1C3368u: goto label_1c3368;
            case 0x1C336Cu: goto label_1c336c;
            case 0x1C3370u: goto label_1c3370;
            case 0x1C3374u: goto label_1c3374;
            case 0x1C3378u: goto label_1c3378;
            case 0x1C337Cu: goto label_1c337c;
            case 0x1C3380u: goto label_1c3380;
            case 0x1C3384u: goto label_1c3384;
            case 0x1C3388u: goto label_1c3388;
            case 0x1C338Cu: goto label_1c338c;
            case 0x1C3390u: goto label_1c3390;
            case 0x1C3394u: goto label_1c3394;
            case 0x1C3398u: goto label_1c3398;
            case 0x1C339Cu: goto label_1c339c;
            case 0x1C33A0u: goto label_1c33a0;
            case 0x1C33A4u: goto label_1c33a4;
            case 0x1C33A8u: goto label_1c33a8;
            case 0x1C33ACu: goto label_1c33ac;
            case 0x1C33B0u: goto label_1c33b0;
            case 0x1C33B4u: goto label_1c33b4;
            case 0x1C33B8u: goto label_1c33b8;
            case 0x1C33BCu: goto label_1c33bc;
            case 0x1C33C0u: goto label_1c33c0;
            case 0x1C33C4u: goto label_1c33c4;
            case 0x1C33C8u: goto label_1c33c8;
            case 0x1C33CCu: goto label_1c33cc;
            case 0x1C33D0u: goto label_1c33d0;
            case 0x1C33D4u: goto label_1c33d4;
            case 0x1C33D8u: goto label_1c33d8;
            case 0x1C33DCu: goto label_1c33dc;
            case 0x1C33E0u: goto label_1c33e0;
            case 0x1C33E4u: goto label_1c33e4;
            case 0x1C33E8u: goto label_1c33e8;
            case 0x1C33ECu: goto label_1c33ec;
            case 0x1C33F0u: goto label_1c33f0;
            case 0x1C33F4u: goto label_1c33f4;
            case 0x1C33F8u: goto label_1c33f8;
            case 0x1C33FCu: goto label_1c33fc;
            case 0x1C3400u: goto label_1c3400;
            case 0x1C3404u: goto label_1c3404;
            case 0x1C3408u: goto label_1c3408;
            case 0x1C340Cu: goto label_1c340c;
            case 0x1C3410u: goto label_1c3410;
            case 0x1C3414u: goto label_1c3414;
            case 0x1C3418u: goto label_1c3418;
            case 0x1C341Cu: goto label_1c341c;
            case 0x1C3420u: goto label_1c3420;
            case 0x1C3424u: goto label_1c3424;
            case 0x1C3428u: goto label_1c3428;
            case 0x1C342Cu: goto label_1c342c;
            case 0x1C3430u: goto label_1c3430;
            case 0x1C3434u: goto label_1c3434;
            case 0x1C3438u: goto label_1c3438;
            case 0x1C343Cu: goto label_1c343c;
            case 0x1C3440u: goto label_1c3440;
            case 0x1C3444u: goto label_1c3444;
            case 0x1C3448u: goto label_1c3448;
            case 0x1C344Cu: goto label_1c344c;
            case 0x1C3450u: goto label_1c3450;
            case 0x1C3454u: goto label_1c3454;
            case 0x1C3458u: goto label_1c3458;
            case 0x1C345Cu: goto label_1c345c;
            case 0x1C3460u: goto label_1c3460;
            case 0x1C3464u: goto label_1c3464;
            case 0x1C3468u: goto label_1c3468;
            case 0x1C346Cu: goto label_1c346c;
            case 0x1C3470u: goto label_1c3470;
            case 0x1C3474u: goto label_1c3474;
            case 0x1C3478u: goto label_1c3478;
            case 0x1C347Cu: goto label_1c347c;
            case 0x1C3480u: goto label_1c3480;
            case 0x1C3484u: goto label_1c3484;
            case 0x1C3488u: goto label_1c3488;
            case 0x1C348Cu: goto label_1c348c;
            case 0x1C3490u: goto label_1c3490;
            case 0x1C3494u: goto label_1c3494;
            case 0x1C3498u: goto label_1c3498;
            case 0x1C349Cu: goto label_1c349c;
            case 0x1C34A0u: goto label_1c34a0;
            case 0x1C34A4u: goto label_1c34a4;
            case 0x1C34A8u: goto label_1c34a8;
            case 0x1C34ACu: goto label_1c34ac;
            case 0x1C34B0u: goto label_1c34b0;
            case 0x1C34B4u: goto label_1c34b4;
            case 0x1C34B8u: goto label_1c34b8;
            case 0x1C34BCu: goto label_1c34bc;
            case 0x1C34C0u: goto label_1c34c0;
            case 0x1C34C4u: goto label_1c34c4;
            case 0x1C34C8u: goto label_1c34c8;
            case 0x1C34CCu: goto label_1c34cc;
            case 0x1C34D0u: goto label_1c34d0;
            case 0x1C34D4u: goto label_1c34d4;
            case 0x1C34D8u: goto label_1c34d8;
            case 0x1C34DCu: goto label_1c34dc;
            case 0x1C34E0u: goto label_1c34e0;
            case 0x1C34E4u: goto label_1c34e4;
            case 0x1C34E8u: goto label_1c34e8;
            case 0x1C34ECu: goto label_1c34ec;
            case 0x1C34F0u: goto label_1c34f0;
            case 0x1C34F4u: goto label_1c34f4;
            case 0x1C34F8u: goto label_1c34f8;
            case 0x1C34FCu: goto label_1c34fc;
            case 0x1C3500u: goto label_1c3500;
            case 0x1C3504u: goto label_1c3504;
            case 0x1C3508u: goto label_1c3508;
            case 0x1C350Cu: goto label_1c350c;
            case 0x1C3510u: goto label_1c3510;
            case 0x1C3514u: goto label_1c3514;
            case 0x1C3518u: goto label_1c3518;
            case 0x1C351Cu: goto label_1c351c;
            case 0x1C3520u: goto label_1c3520;
            case 0x1C3524u: goto label_1c3524;
            case 0x1C3528u: goto label_1c3528;
            case 0x1C352Cu: goto label_1c352c;
            case 0x1C3530u: goto label_1c3530;
            case 0x1C3534u: goto label_1c3534;
            case 0x1C3538u: goto label_1c3538;
            case 0x1C353Cu: goto label_1c353c;
            case 0x1C3540u: goto label_1c3540;
            case 0x1C3544u: goto label_1c3544;
            case 0x1C3548u: goto label_1c3548;
            case 0x1C354Cu: goto label_1c354c;
            case 0x1C3550u: goto label_1c3550;
            case 0x1C3554u: goto label_1c3554;
            case 0x1C3558u: goto label_1c3558;
            case 0x1C355Cu: goto label_1c355c;
            case 0x1C3560u: goto label_1c3560;
            case 0x1C3564u: goto label_1c3564;
            case 0x1C3568u: goto label_1c3568;
            case 0x1C356Cu: goto label_1c356c;
            case 0x1C3570u: goto label_1c3570;
            case 0x1C3574u: goto label_1c3574;
            case 0x1C3578u: goto label_1c3578;
            case 0x1C357Cu: goto label_1c357c;
            case 0x1C3580u: goto label_1c3580;
            case 0x1C3584u: goto label_1c3584;
            case 0x1C3588u: goto label_1c3588;
            case 0x1C358Cu: goto label_1c358c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3588u;
label_1c3588:
    // 0x1c3588: 0x0
    ctx->pc = 0x1c3588u;
    // NOP
label_1c358c:
    // 0x1c358c: 0x0
    ctx->pc = 0x1c358cu;
    // NOP
}
