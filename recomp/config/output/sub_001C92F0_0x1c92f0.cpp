#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C92F0
// Address: 0x1c92f0 - 0x1c9530
void sub_001C92F0_0x1c92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c92f0u;

    // 0x1c92f0: 0x27bdff80
    ctx->pc = 0x1c92f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c92f4: 0x24020001
    ctx->pc = 0x1c92f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c92f8: 0xffbf0060
    ctx->pc = 0x1c92f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c92fc: 0x7fb50050
    ctx->pc = 0x1c92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c9300: 0x7fb40040
    ctx->pc = 0x1c9300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c9304: 0x7fb30030
    ctx->pc = 0x1c9304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c9308: 0x80a02d
    ctx->pc = 0x1c9308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c930c: 0x7fb20020
    ctx->pc = 0x1c930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9310: 0xa0982d
    ctx->pc = 0x1c9310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9314: 0x7fb10010
    ctx->pc = 0x1c9314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9318: 0xc0902d
    ctx->pc = 0x1c9318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c931c: 0x7fb00000
    ctx->pc = 0x1c931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9320: 0x80830000
    ctx->pc = 0x1c9320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9324: 0x10620036
    ctx->pc = 0x1C9324u;
    {
        const bool branch_taken_0x1c9324 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C9328u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9324) {
            ctx->pc = 0x1C9400u;
            goto label_1c9400;
        }
    }
    ctx->pc = 0x1C932Cu;
    // 0x1c932c: 0x10600003
    ctx->pc = 0x1C932Cu;
    {
        const bool branch_taken_0x1c932c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9330u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c932c) {
            ctx->pc = 0x1C933Cu;
            goto label_1c933c;
        }
    }
    ctx->pc = 0x1C9334u;
    // 0x1c9334: 0x10000072
    ctx->pc = 0x1C9334u;
    {
        const bool branch_taken_0x1c9334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9338u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9334) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C933Cu;
label_1c933c:
    // 0x1c933c: 0xc072428
    ctx->pc = 0x1C933Cu;
    SET_GPR_U32(ctx, 31, 0x1C9344u);
    ctx->pc = 0x1C90A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C90A0_0x1c90a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9344u; }
    }
    if (ctx->pc != 0x1C9344u) { return; }
    ctx->pc = 0x1C9344u;
    // 0x1c9344: 0xae420000
    ctx->pc = 0x1c9344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1c9348: 0x8e420000
    ctx->pc = 0x1c9348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c934c: 0x10400005
    ctx->pc = 0x1C934Cu;
    {
        const bool branch_taken_0x1c934c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9350u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c934c) {
            ctx->pc = 0x1C9364u;
            goto label_1c9364;
        }
    }
    ctx->pc = 0x1C9354u;
    // 0x1c9354: 0xa2800000
    ctx->pc = 0x1c9354u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9358: 0x24020001
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c935c: 0x10000068
    ctx->pc = 0x1C935Cu;
    {
        const bool branch_taken_0x1c935c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9360u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c935c) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C9364u;
label_1c9364:
    // 0x1c9364: 0x10000014
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9368u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C93B8u;
            goto label_1c93b8;
        }
    }
    ctx->pc = 0x1C936Cu;
label_1c936c:
    // 0x1c936c: 0x3c020034
    ctx->pc = 0x1c936cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1c9370: 0x701821
    ctx->pc = 0x1c9370u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c9374: 0x2442d170
    ctx->pc = 0x1c9374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955376));
    // 0x1c9378: 0x31880
    ctx->pc = 0x1c9378u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c937c: 0x220282d
    ctx->pc = 0x1c937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9380: 0x43a821
    ctx->pc = 0x1c9380u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9384: 0x24060100
    ctx->pc = 0x1c9384u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c9388: 0xc042d10
    ctx->pc = 0x1C9388u;
    SET_GPR_U32(ctx, 31, 0x1C9390u);
    ctx->pc = 0x1C938Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9390u; }
    }
    if (ctx->pc != 0x1C9390u) { return; }
    ctx->pc = 0x1C9390u;
    // 0x1c9390: 0x14400007
    ctx->pc = 0x1C9390u;
    {
        const bool branch_taken_0x1c9390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c9390) {
            ctx->pc = 0x1C93B0u;
            goto label_1c93b0;
        }
    }
    ctx->pc = 0x1C9398u;
    // 0x1c9398: 0xa2800000
    ctx->pc = 0x1c9398u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c939c: 0x24020001
    ctx->pc = 0x1c939cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c93a0: 0xa6600000
    ctx->pc = 0x1c93a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c93a4: 0x8ea30100
    ctx->pc = 0x1c93a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x1c93a8: 0x10000055
    ctx->pc = 0x1C93A8u;
    {
        const bool branch_taken_0x1c93a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C93ACu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1c93a8) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C93B0u;
label_1c93b0:
    // 0x1c93b0: 0x26100001
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c93b4: 0x2a020008
    ctx->pc = 0x1c93b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
label_1c93b8:
    // 0x1c93b8: 0x1440ffec
    ctx->pc = 0x1C93B8u;
    {
        const bool branch_taken_0x1c93b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C93BCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x1c93b8) {
            ctx->pc = 0x1C936Cu;
            goto label_1c936c;
        }
    }
    ctx->pc = 0x1C93C0u;
    // 0x1c93c0: 0xc075b30
    ctx->pc = 0x1C93C0u;
    SET_GPR_U32(ctx, 31, 0x1C93C8u);
    ctx->pc = 0x1C93C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D6CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6CC0_0x1d6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C93C8u; }
    }
    if (ctx->pc != 0x1C93C8u) { return; }
    ctx->pc = 0x1C93C8u;
    // 0x1c93c8: 0x3c010034
    ctx->pc = 0x1c93c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c93cc: 0xa422d990
    ctx->pc = 0x1c93ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957456), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c93d0: 0x3c010034
    ctx->pc = 0x1c93d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c93d4: 0x2402ffff
    ctx->pc = 0x1c93d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c93d8: 0x8423d990
    ctx->pc = 0x1c93d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957456)));
    // 0x1c93dc: 0x14620003
    ctx->pc = 0x1C93DCu;
    {
        const bool branch_taken_0x1c93dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c93dc) {
            ctx->pc = 0x1C93ECu;
            goto label_1c93ec;
        }
    }
    ctx->pc = 0x1C93E4u;
    // 0x1c93e4: 0x10000047
    ctx->pc = 0x1C93E4u;
    {
        const bool branch_taken_0x1c93e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C93E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1c93e4) {
            ctx->pc = 0x1C9504u;
            goto label_1c9504;
        }
    }
    ctx->pc = 0x1C93ECu;
label_1c93ec:
    // 0x1c93ec: 0x82820000
    ctx->pc = 0x1c93ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c93f0: 0x24420001
    ctx->pc = 0x1c93f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c93f4: 0xa2820000
    ctx->pc = 0x1c93f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c93f8: 0x10000040
    ctx->pc = 0x1C93F8u;
    {
        const bool branch_taken_0x1c93f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C93FCu;
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c93f8) {
            ctx->pc = 0x1C94FCu;
            goto label_1c94fc;
        }
    }
    ctx->pc = 0x1C9400u;
label_1c9400:
    // 0x1c9400: 0x3c010034
    ctx->pc = 0x1c9400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9404: 0x8424d990
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957456)));
    // 0x1c9408: 0xc075b58
    ctx->pc = 0x1C9408u;
    SET_GPR_U32(ctx, 31, 0x1C9410u);
    ctx->pc = 0x1C940Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 124));
    ctx->pc = 0x1D6D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6D60_0x1d6d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9410u; }
    }
    if (ctx->pc != 0x1C9410u) { return; }
    ctx->pc = 0x1C9410u;
    // 0x1c9410: 0x24030001
    ctx->pc = 0x1c9410u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9414: 0x10430015
    ctx->pc = 0x1C9414u;
    {
        const bool branch_taken_0x1c9414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C9418u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c9414) {
            ctx->pc = 0x1C946Cu;
            goto label_1c946c;
        }
    }
    ctx->pc = 0x1C941Cu;
    // 0x1c941c: 0x2403ffff
    ctx->pc = 0x1c941cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9420: 0x1043000b
    ctx->pc = 0x1C9420u;
    {
        const bool branch_taken_0x1c9420 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c9420) {
            ctx->pc = 0x1C9450u;
            goto label_1c9450;
        }
    }
    ctx->pc = 0x1C9428u;
    // 0x1c9428: 0x2403fffe
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c942c: 0x10430008
    ctx->pc = 0x1C942Cu;
    {
        const bool branch_taken_0x1c942c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c942c) {
            ctx->pc = 0x1C9450u;
            goto label_1c9450;
        }
    }
    ctx->pc = 0x1C9434u;
    // 0x1c9434: 0x2403fffd
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c9438: 0x10430003
    ctx->pc = 0x1C9438u;
    {
        const bool branch_taken_0x1c9438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c9438) {
            ctx->pc = 0x1C9448u;
            goto label_1c9448;
        }
    }
    ctx->pc = 0x1C9440u;
    // 0x1c9440: 0x10000003
    ctx->pc = 0x1C9440u;
    {
        const bool branch_taken_0x1c9440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9440) {
            ctx->pc = 0x1C9450u;
            goto label_1c9450;
        }
    }
    ctx->pc = 0x1C9448u;
label_1c9448:
    // 0x1c9448: 0x1000002d
    ctx->pc = 0x1C9448u;
    {
        const bool branch_taken_0x1c9448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C944Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9448) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C9450u;
label_1c9450:
    // 0x1c9450: 0x3c010034
    ctx->pc = 0x1c9450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9454: 0xc075b44
    ctx->pc = 0x1C9454u;
    SET_GPR_U32(ctx, 31, 0x1C945Cu);
    ctx->pc = 0x1C9458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957456)));
    ctx->pc = 0x1D6D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6D10_0x1d6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C945Cu; }
    }
    if (ctx->pc != 0x1C945Cu) { return; }
    ctx->pc = 0x1C945Cu;
    // 0x1c945c: 0xa2800000
    ctx->pc = 0x1c945cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9460: 0x2402ffff
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9464: 0x10000026
    ctx->pc = 0x1C9464u;
    {
        const bool branch_taken_0x1c9464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9468u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c9464) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C946Cu;
label_1c946c:
    // 0x1c946c: 0xc075b44
    ctx->pc = 0x1C946Cu;
    SET_GPR_U32(ctx, 31, 0x1C9474u);
    ctx->pc = 0x1C9470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957456)));
    ctx->pc = 0x1D6D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6D10_0x1d6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9474u; }
    }
    if (ctx->pc != 0x1C9474u) { return; }
    ctx->pc = 0x1C9474u;
    // 0x1c9474: 0xa2800000
    ctx->pc = 0x1c9474u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9478: 0x3c020034
    ctx->pc = 0x1c9478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1c947c: 0xa6600000
    ctx->pc = 0x1c947cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c9480: 0x3c010034
    ctx->pc = 0x1c9480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9484: 0x8fa3007c
    ctx->pc = 0x1c9484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c9488: 0x2442d170
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955376));
    // 0x1c948c: 0x220282d
    ctx->pc = 0x1c948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9490: 0x24060100
    ctx->pc = 0x1c9490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c9494: 0xae430000
    ctx->pc = 0x1c9494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1c9498: 0x8c24d160
    ctx->pc = 0x1c9498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294955360)));
    // 0x1c949c: 0x41980
    ctx->pc = 0x1c949cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 6));
    // 0x1c94a0: 0x641821
    ctx->pc = 0x1c94a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c94a4: 0x31880
    ctx->pc = 0x1c94a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c94a8: 0x438021
    ctx->pc = 0x1c94a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c94ac: 0xc042d7e
    ctx->pc = 0x1C94ACu;
    SET_GPR_U32(ctx, 31, 0x1C94B4u);
    ctx->pc = 0x1C94B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94B4u; }
    }
    if (ctx->pc != 0x1C94B4u) { return; }
    ctx->pc = 0x1C94B4u;
    // 0x1c94b4: 0x8fa2007c
    ctx->pc = 0x1c94b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c94b8: 0x3c010034
    ctx->pc = 0x1c94b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c94bc: 0xae020100
    ctx->pc = 0x1c94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x1c94c0: 0x8c22d160
    ctx->pc = 0x1c94c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294955360)));
    // 0x1c94c4: 0x24420001
    ctx->pc = 0x1c94c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c94c8: 0x3c010034
    ctx->pc = 0x1c94c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c94cc: 0xac22d160
    ctx->pc = 0x1c94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955360), GPR_U32(ctx, 2));
    // 0x1c94d0: 0x3c010034
    ctx->pc = 0x1c94d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c94d4: 0x8c23d160
    ctx->pc = 0x1c94d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294955360)));
    // 0x1c94d8: 0x4610004
    ctx->pc = 0x1C94D8u;
    {
        const bool branch_taken_0x1c94d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C94DCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
        if (branch_taken_0x1c94d8) {
            ctx->pc = 0x1C94ECu;
            goto label_1c94ec;
        }
    }
    ctx->pc = 0x1C94E0u;
    // 0x1c94e0: 0x10400002
    ctx->pc = 0x1C94E0u;
    {
        const bool branch_taken_0x1c94e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c94e0) {
            ctx->pc = 0x1C94ECu;
            goto label_1c94ec;
        }
    }
    ctx->pc = 0x1C94E8u;
    // 0x1c94e8: 0x2442fff8
    ctx->pc = 0x1c94e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c94ec:
    // 0x1c94ec: 0x3c010034
    ctx->pc = 0x1c94ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c94f0: 0xac22d160
    ctx->pc = 0x1c94f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955360), GPR_U32(ctx, 2));
    // 0x1c94f4: 0x10000002
    ctx->pc = 0x1C94F4u;
    {
        const bool branch_taken_0x1c94f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C94F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c94f4) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C94FCu;
label_1c94fc:
    // 0x1c94fc: 0x102d
    ctx->pc = 0x1c94fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9500:
    // 0x1c9500: 0xdfbf0060
    ctx->pc = 0x1c9500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c9504:
    // 0x1c9504: 0x7bb50050
    ctx->pc = 0x1c9504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9508: 0x7bb40040
    ctx->pc = 0x1c9508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c950c: 0x7bb30030
    ctx->pc = 0x1c950cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9510: 0x7bb20020
    ctx->pc = 0x1c9510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9514: 0x7bb10010
    ctx->pc = 0x1c9514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9518: 0x7bb00000
    ctx->pc = 0x1c9518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c951c: 0x3e00008
    ctx->pc = 0x1C951Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9520u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C933Cu: goto label_1c933c;
            case 0x1C9364u: goto label_1c9364;
            case 0x1C936Cu: goto label_1c936c;
            case 0x1C93B0u: goto label_1c93b0;
            case 0x1C93B8u: goto label_1c93b8;
            case 0x1C93ECu: goto label_1c93ec;
            case 0x1C9400u: goto label_1c9400;
            case 0x1C9448u: goto label_1c9448;
            case 0x1C9450u: goto label_1c9450;
            case 0x1C946Cu: goto label_1c946c;
            case 0x1C94ECu: goto label_1c94ec;
            case 0x1C94FCu: goto label_1c94fc;
            case 0x1C9500u: goto label_1c9500;
            case 0x1C9504u: goto label_1c9504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9524u;
    // 0x1c9524: 0x0
    ctx->pc = 0x1c9524u;
    // NOP
    // 0x1c9528: 0x0
    ctx->pc = 0x1c9528u;
    // NOP
    // 0x1c952c: 0x0
    ctx->pc = 0x1c952cu;
    // NOP
}
