#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E230
// Address: 0x18e230 - 0x18e3b0
void sub_0018E230_0x18e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e230u;

    // 0x18e230: 0x27bdff50
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18e234: 0xffbf0050
    ctx->pc = 0x18e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18e238: 0x7fb40040
    ctx->pc = 0x18e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18e23c: 0x7fb30030
    ctx->pc = 0x18e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e240: 0x80a02d
    ctx->pc = 0x18e240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e244: 0x7fb20020
    ctx->pc = 0x18e244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e248: 0x7fb10010
    ctx->pc = 0x18e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e24c: 0x7fb00000
    ctx->pc = 0x18e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e250: 0xc067448
    ctx->pc = 0x18E250u;
    SET_GPR_U32(ctx, 31, 0x18E258u);
    ctx->pc = 0x18E254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D120_0x19d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E258u; }
    }
    if (ctx->pc != 0x18E258u) { return; }
    ctx->pc = 0x18E258u;
    // 0x18e258: 0x40982d
    ctx->pc = 0x18e258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e25c: 0x27a40060
    ctx->pc = 0x18e25cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x18e260: 0x3042ffff
    ctx->pc = 0x18e260u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x18e264: 0x2445ffff
    ctx->pc = 0x18e264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e268: 0x518c0
    ctx->pc = 0x18e268u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x18e26c: 0x3c02002a
    ctx->pc = 0x18e26cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x18e270: 0x651823
    ctx->pc = 0x18e270u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18e274: 0x24428680
    ctx->pc = 0x18e274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x18e278: 0x318c0
    ctx->pc = 0x18e278u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x18e27c: 0x280282d
    ctx->pc = 0x18e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e280: 0xc06931c
    ctx->pc = 0x18E280u;
    SET_GPR_U32(ctx, 31, 0x18E288u);
    ctx->pc = 0x18E284u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A4C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4C70_0x1a4c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E288u; }
    }
    if (ctx->pc != 0x18E288u) { return; }
    ctx->pc = 0x18E288u;
    // 0x18e288: 0x27b10074
    ctx->pc = 0x18e288u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 116));
    // 0x18e28c: 0x24020003
    ctx->pc = 0x18e28cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e290: 0x8e230000
    ctx->pc = 0x18e290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e294: 0x10620003
    ctx->pc = 0x18E294u;
    {
        const bool branch_taken_0x18e294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x18E298u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
        if (branch_taken_0x18e294) {
            ctx->pc = 0x18E2A4u;
            goto label_18e2a4;
        }
    }
    ctx->pc = 0x18E29Cu;
    // 0x18e29c: 0x1000003b
    ctx->pc = 0x18E29Cu;
    {
        const bool branch_taken_0x18e29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E2A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e29c) {
            ctx->pc = 0x18E38Cu;
            goto label_18e38c;
        }
    }
    ctx->pc = 0x18E2A4u;
label_18e2a4:
    // 0x18e2a4: 0x24050001
    ctx->pc = 0x18e2a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e2a8: 0x260302d
    ctx->pc = 0x18e2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2ac: 0xc0672cc
    ctx->pc = 0x18E2ACu;
    SET_GPR_U32(ctx, 31, 0x18E2B4u);
    ctx->pc = 0x18E2B0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB30_0x19cb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2B4u; }
    }
    if (ctx->pc != 0x18E2B4u) { return; }
    ctx->pc = 0x18E2B4u;
    // 0x18e2b4: 0x8e440008
    ctx->pc = 0x18e2b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18e2b8: 0xc063714
    ctx->pc = 0x18E2B8u;
    SET_GPR_U32(ctx, 31, 0x18E2C0u);
    ctx->pc = 0x18E2BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2C0u; }
    }
    if (ctx->pc != 0x18E2C0u) { return; }
    ctx->pc = 0x18E2C0u;
    // 0x18e2c0: 0xae420024
    ctx->pc = 0x18e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x18e2c4: 0xc063728
    ctx->pc = 0x18E2C4u;
    SET_GPR_U32(ctx, 31, 0x18E2CCu);
    ctx->pc = 0x18E2C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2CCu; }
    }
    if (ctx->pc != 0x18E2CCu) { return; }
    ctx->pc = 0x18E2CCu;
    // 0x18e2cc: 0x280202d
    ctx->pc = 0x18e2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2d0: 0xc069354
    ctx->pc = 0x18E2D0u;
    SET_GPR_U32(ctx, 31, 0x18E2D8u);
    ctx->pc = 0x18E2D4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A4D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4D50_0x1a4d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2D8u; }
    }
    if (ctx->pc != 0x18E2D8u) { return; }
    ctx->pc = 0x18E2D8u;
    // 0x18e2d8: 0x8e240000
    ctx->pc = 0x18e2d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e2dc: 0x24030003
    ctx->pc = 0x18e2dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e2e0: 0x10830003
    ctx->pc = 0x18E2E0u;
    {
        const bool branch_taken_0x18e2e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x18E2E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e2e0) {
            ctx->pc = 0x18E2F0u;
            goto label_18e2f0;
        }
    }
    ctx->pc = 0x18E2E8u;
    // 0x18e2e8: 0x10000023
    ctx->pc = 0x18E2E8u;
    {
        const bool branch_taken_0x18e2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E2ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e2e8) {
            ctx->pc = 0x18E378u;
            goto label_18e378;
        }
    }
    ctx->pc = 0x18E2F0u;
label_18e2f0:
    // 0x18e2f0: 0x27a40068
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x18e2f4: 0x27a3006c
    ctx->pc = 0x18e2f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 108));
    // 0x18e2f8: 0x10000019
    ctx->pc = 0x18E2F8u;
    {
        const bool branch_taken_0x18e2f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E2FCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 100));
        if (branch_taken_0x18e2f8) {
            ctx->pc = 0x18E360u;
            goto label_18e360;
        }
    }
    ctx->pc = 0x18E300u;
label_18e300:
    // 0x18e300: 0x10000012
    ctx->pc = 0x18E300u;
    {
        const bool branch_taken_0x18e300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E304u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e300) {
            ctx->pc = 0x18E34Cu;
            goto label_18e34c;
        }
    }
    ctx->pc = 0x18E308u;
label_18e308:
    // 0x18e308: 0x8c880000
    ctx->pc = 0x18e308u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e30c: 0x8e260000
    ctx->pc = 0x18e30cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e310: 0x8c670000
    ctx->pc = 0x18e310u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e314: 0x2508ffff
    ctx->pc = 0x18e314u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x18e318: 0x1054023
    ctx->pc = 0x18e318u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18e31c: 0x71463018
    ctx->pc = 0x18e31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x18e320: 0xe83818
    ctx->pc = 0x18e320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x18e324: 0x463021
    ctx->pc = 0x18e324u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18e328: 0x254a0001
    ctx->pc = 0x18e328u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x18e32c: 0xc73021
    ctx->pc = 0x18e32cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18e330: 0x90c80000
    ctx->pc = 0x18e330u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e334: 0x90c70001
    ctx->pc = 0x18e334u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x18e338: 0x90c60002
    ctx->pc = 0x18e338u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18e33c: 0xa2460000
    ctx->pc = 0x18e33cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x18e340: 0xa2470001
    ctx->pc = 0x18e340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x18e344: 0xa2480002
    ctx->pc = 0x18e344u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x18e348: 0x26520003
    ctx->pc = 0x18e348u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 3));
label_18e34c:
    // 0x18e34c: 0x8d260000
    ctx->pc = 0x18e34cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18e350: 0x146302a
    ctx->pc = 0x18e350u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 6)));
    // 0x18e354: 0x14c0ffec
    ctx->pc = 0x18E354u;
    {
        const bool branch_taken_0x18e354 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e354) {
            ctx->pc = 0x18E308u;
            goto label_18e308;
        }
    }
    ctx->pc = 0x18E35Cu;
    // 0x18e35c: 0x24a50001
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_18e360:
    // 0x18e360: 0x8c860000
    ctx->pc = 0x18e360u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e364: 0xa6302a
    ctx->pc = 0x18e364u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x18e368: 0x14c0ffe5
    ctx->pc = 0x18E368u;
    {
        const bool branch_taken_0x18e368 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e368) {
            ctx->pc = 0x18E300u;
            goto label_18e300;
        }
    }
    ctx->pc = 0x18E370u;
    // 0x18e370: 0x10000003
    ctx->pc = 0x18E370u;
    {
        const bool branch_taken_0x18e370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E374u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e370) {
            ctx->pc = 0x18E380u;
            goto label_18e380;
        }
    }
    ctx->pc = 0x18E378u;
label_18e378:
    // 0x18e378: 0x10000005
    ctx->pc = 0x18E378u;
    {
        const bool branch_taken_0x18e378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E37Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x18e378) {
            ctx->pc = 0x18E390u;
            goto label_18e390;
        }
    }
    ctx->pc = 0x18E380u;
label_18e380:
    // 0x18e380: 0xc067350
    ctx->pc = 0x18E380u;
    SET_GPR_U32(ctx, 31, 0x18E388u);
    ctx->pc = 0x18E384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CD40_0x19cd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E388u; }
    }
    if (ctx->pc != 0x18E388u) { return; }
    ctx->pc = 0x18E388u;
    // 0x18e388: 0x260102d
    ctx->pc = 0x18e388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18e38c:
    // 0x18e38c: 0xdfbf0050
    ctx->pc = 0x18e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18e390:
    // 0x18e390: 0x7bb40040
    ctx->pc = 0x18e390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e394: 0x7bb30030
    ctx->pc = 0x18e394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e398: 0x7bb20020
    ctx->pc = 0x18e398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e39c: 0x7bb10010
    ctx->pc = 0x18e39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e3a0: 0x7bb00000
    ctx->pc = 0x18e3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3a4: 0x3e00008
    ctx->pc = 0x18E3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E2A4u: goto label_18e2a4;
            case 0x18E2F0u: goto label_18e2f0;
            case 0x18E300u: goto label_18e300;
            case 0x18E308u: goto label_18e308;
            case 0x18E34Cu: goto label_18e34c;
            case 0x18E360u: goto label_18e360;
            case 0x18E378u: goto label_18e378;
            case 0x18E380u: goto label_18e380;
            case 0x18E38Cu: goto label_18e38c;
            case 0x18E390u: goto label_18e390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E3ACu;
    // 0x18e3ac: 0x0
    ctx->pc = 0x18e3acu;
    // NOP
}
