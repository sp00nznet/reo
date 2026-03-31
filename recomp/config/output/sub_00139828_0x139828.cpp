#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139828
// Address: 0x139828 - 0x1399f8
void sub_00139828_0x139828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139828u;

    // 0x139828: 0x27bdfff0
    ctx->pc = 0x139828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13982c: 0xffb00000
    ctx->pc = 0x13982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139830: 0xffbf0008
    ctx->pc = 0x139830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x139834: 0xc042c56
    ctx->pc = 0x139834u;
    SET_GPR_U32(ctx, 31, 0x13983Cu);
    ctx->pc = 0x139838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13983Cu; }
    }
    if (ctx->pc != 0x13983Cu) { return; }
    ctx->pc = 0x13983Cu;
    // 0x13983c: 0x40382d
    ctx->pc = 0x13983cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139840: 0x10e00013
    ctx->pc = 0x139840u;
    {
        const bool branch_taken_0x139840 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x139844u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139840) {
            ctx->pc = 0x139890u;
            goto label_139890;
        }
    }
    ctx->pc = 0x139848u;
    // 0x139848: 0x2409002f
    ctx->pc = 0x139848u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 47));
    // 0x13984c: 0x2408005c
    ctx->pc = 0x13984cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 92));
    // 0x139850: 0x2062021
    ctx->pc = 0x139850u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x139854: 0x0
    ctx->pc = 0x139854u;
    // NOP
label_139858:
    // 0x139858: 0x24c60001
    ctx->pc = 0x139858u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x13985c: 0x80820000
    ctx->pc = 0x13985cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x139860: 0xc7282b
    ctx->pc = 0x139860u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x139864: 0x14490003
    ctx->pc = 0x139864u;
    {
        const bool branch_taken_0x139864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        ctx->pc = 0x139868u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x139864) {
            ctx->pc = 0x139874u;
            goto label_139874;
        }
    }
    ctx->pc = 0x13986Cu;
    // 0x13986c: 0xa0880000
    ctx->pc = 0x13986cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x139870: 0x100182d
    ctx->pc = 0x139870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_139874:
    // 0x139874: 0x2462ff9f
    ctx->pc = 0x139874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x139878: 0x2c42001a
    ctx->pc = 0x139878u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x13987c: 0x10400002
    ctx->pc = 0x13987Cu;
    {
        const bool branch_taken_0x13987c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x139880u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967264));
        if (branch_taken_0x13987c) {
            ctx->pc = 0x139888u;
            goto label_139888;
        }
    }
    ctx->pc = 0x139884u;
    // 0x139884: 0xa0820000
    ctx->pc = 0x139884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_139888:
    // 0x139888: 0x14a0fff3
    ctx->pc = 0x139888u;
    {
        const bool branch_taken_0x139888 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x13988Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        if (branch_taken_0x139888) {
            ctx->pc = 0x139858u;
            goto label_139858;
        }
    }
    ctx->pc = 0x139890u;
label_139890:
    // 0x139890: 0xdfb00000
    ctx->pc = 0x139890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139894: 0xdfbf0008
    ctx->pc = 0x139894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139898: 0x3e00008
    ctx->pc = 0x139898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13989Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139858u: goto label_139858;
            case 0x139874u: goto label_139874;
            case 0x139888u: goto label_139888;
            case 0x139890u: goto label_139890;
            case 0x139910u: goto label_139910;
            case 0x139914u: goto label_139914;
            case 0x139918u: goto label_139918;
            case 0x139950u: goto label_139950;
            case 0x1399C0u: goto label_1399c0;
            case 0x1399CCu: goto label_1399cc;
            case 0x1399E0u: goto label_1399e0;
            case 0x1399E4u: goto label_1399e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1398A0u;
    // 0x1398a0: 0x27bdffb0
    ctx->pc = 0x1398a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1398a4: 0x102d
    ctx->pc = 0x1398a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398a8: 0xffb00030
    ctx->pc = 0x1398a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1398ac: 0x80802d
    ctx->pc = 0x1398acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398b0: 0xffb10038
    ctx->pc = 0x1398b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1398b4: 0x12000017
    ctx->pc = 0x1398B4u;
    {
        const bool branch_taken_0x1398b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1398B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x1398b4) {
            ctx->pc = 0x139914u;
            goto label_139914;
        }
    }
    ctx->pc = 0x1398BCu;
    // 0x1398bc: 0xc04ea80
    ctx->pc = 0x1398BCu;
    SET_GPR_U32(ctx, 31, 0x1398C4u);
    ctx->pc = 0x1398C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA00_0x13aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398C4u; }
    }
    if (ctx->pc != 0x1398C4u) { return; }
    ctx->pc = 0x1398C4u;
    // 0x1398c4: 0x3c030022
    ctx->pc = 0x1398c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1398c8: 0x8fa20004
    ctx->pc = 0x1398c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1398cc: 0x2471d7a0
    ctx->pc = 0x1398ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294956960));
    // 0x1398d0: 0x200202d
    ctx->pc = 0x1398d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398d4: 0x1440000e
    ctx->pc = 0x1398D4u;
    {
        const bool branch_taken_0x1398d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1398D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1398d4) {
            ctx->pc = 0x139910u;
            goto label_139910;
        }
    }
    ctx->pc = 0x1398DCu;
    // 0x1398dc: 0xc04e892
    ctx->pc = 0x1398DCu;
    SET_GPR_U32(ctx, 31, 0x1398E4u);
    ctx->pc = 0x13A248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A248_0x13a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398E4u; }
    }
    if (ctx->pc != 0x1398E4u) { return; }
    ctx->pc = 0x1398E4u;
    // 0x1398e4: 0xc04e082
    ctx->pc = 0x1398E4u;
    SET_GPR_U32(ctx, 31, 0x1398ECu);
    ctx->pc = 0x1398E8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33024));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398ECu; }
    }
    if (ctx->pc != 0x1398ECu) { return; }
    ctx->pc = 0x1398ECu;
    // 0x1398ec: 0xc04035e
    ctx->pc = 0x1398ECu;
    SET_GPR_U32(ctx, 31, 0x1398F4u);
    ctx->pc = 0x1398F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398F4u; }
    }
    if (ctx->pc != 0x1398F4u) { return; }
    ctx->pc = 0x1398F4u;
    // 0x1398f4: 0xc04e082
    ctx->pc = 0x1398F4u;
    SET_GPR_U32(ctx, 31, 0x1398FCu);
    ctx->pc = 0x1398F8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33025));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398FCu; }
    }
    if (ctx->pc != 0x1398FCu) { return; }
    ctx->pc = 0x1398FCu;
    // 0x1398fc: 0x220282d
    ctx->pc = 0x1398fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139900: 0xc04e58a
    ctx->pc = 0x139900u;
    SET_GPR_U32(ctx, 31, 0x139908u);
    ctx->pc = 0x139904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139628_0x139628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139908u; }
    }
    if (ctx->pc != 0x139908u) { return; }
    ctx->pc = 0x139908u;
    // 0x139908: 0x10400003
    ctx->pc = 0x139908u;
    {
        const bool branch_taken_0x139908 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13990Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x139908) {
            ctx->pc = 0x139918u;
            goto label_139918;
        }
    }
    ctx->pc = 0x139910u;
label_139910:
    // 0x139910: 0x24020001
    ctx->pc = 0x139910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_139914:
    // 0x139914: 0xdfb00030
    ctx->pc = 0x139914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_139918:
    // 0x139918: 0xdfb10038
    ctx->pc = 0x139918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13991c: 0xdfbf0040
    ctx->pc = 0x13991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139920: 0x3e00008
    ctx->pc = 0x139920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139858u: goto label_139858;
            case 0x139874u: goto label_139874;
            case 0x139888u: goto label_139888;
            case 0x139890u: goto label_139890;
            case 0x139910u: goto label_139910;
            case 0x139914u: goto label_139914;
            case 0x139918u: goto label_139918;
            case 0x139950u: goto label_139950;
            case 0x1399C0u: goto label_1399c0;
            case 0x1399CCu: goto label_1399cc;
            case 0x1399E0u: goto label_1399e0;
            case 0x1399E4u: goto label_1399e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139928u;
    // 0x139928: 0x27bdffb0
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13992c: 0xffb00030
    ctx->pc = 0x13992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x139930: 0x80802d
    ctx->pc = 0x139930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139934: 0xffb10038
    ctx->pc = 0x139934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x139938: 0x16000005
    ctx->pc = 0x139938u;
    {
        const bool branch_taken_0x139938 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13993Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x139938) {
            ctx->pc = 0x139950u;
            goto label_139950;
        }
    }
    ctx->pc = 0x139940u;
    // 0x139940: 0x3c050024
    ctx->pc = 0x139940u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x139944: 0x10000021
    ctx->pc = 0x139944u;
    {
        const bool branch_taken_0x139944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139948u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953608));
        if (branch_taken_0x139944) {
            ctx->pc = 0x1399CCu;
            goto label_1399cc;
        }
    }
    ctx->pc = 0x13994Cu;
    // 0x13994c: 0x0
    ctx->pc = 0x13994cu;
    // NOP
label_139950:
    // 0x139950: 0xc04ea80
    ctx->pc = 0x139950u;
    SET_GPR_U32(ctx, 31, 0x139958u);
    ctx->pc = 0x139954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA00_0x13aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139958u; }
    }
    if (ctx->pc != 0x139958u) { return; }
    ctx->pc = 0x139958u;
    // 0x139958: 0x3c030022
    ctx->pc = 0x139958u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13995c: 0x8fa20004
    ctx->pc = 0x13995cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139960: 0x2471d7a0
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294956960));
    // 0x139964: 0x200202d
    ctx->pc = 0x139964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139968: 0x1440001e
    ctx->pc = 0x139968u;
    {
        const bool branch_taken_0x139968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13996Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139968) {
            ctx->pc = 0x1399E4u;
            goto label_1399e4;
        }
    }
    ctx->pc = 0x139970u;
    // 0x139970: 0xc04e892
    ctx->pc = 0x139970u;
    SET_GPR_U32(ctx, 31, 0x139978u);
    ctx->pc = 0x13A248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A248_0x13a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139978u; }
    }
    if (ctx->pc != 0x139978u) { return; }
    ctx->pc = 0x139978u;
    // 0x139978: 0xc04e082
    ctx->pc = 0x139978u;
    SET_GPR_U32(ctx, 31, 0x139980u);
    ctx->pc = 0x13997Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33280));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139980u; }
    }
    if (ctx->pc != 0x139980u) { return; }
    ctx->pc = 0x139980u;
    // 0x139980: 0xc04035e
    ctx->pc = 0x139980u;
    SET_GPR_U32(ctx, 31, 0x139988u);
    ctx->pc = 0x139984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139988u; }
    }
    if (ctx->pc != 0x139988u) { return; }
    ctx->pc = 0x139988u;
    // 0x139988: 0xc04e082
    ctx->pc = 0x139988u;
    SET_GPR_U32(ctx, 31, 0x139990u);
    ctx->pc = 0x13998Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33281));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139990u; }
    }
    if (ctx->pc != 0x139990u) { return; }
    ctx->pc = 0x139990u;
    // 0x139990: 0x220282d
    ctx->pc = 0x139990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139994: 0xc04e58a
    ctx->pc = 0x139994u;
    SET_GPR_U32(ctx, 31, 0x13999Cu);
    ctx->pc = 0x139998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139628_0x139628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13999Cu; }
    }
    if (ctx->pc != 0x13999Cu) { return; }
    ctx->pc = 0x13999Cu;
    // 0x13999c: 0x14400010
    ctx->pc = 0x13999Cu;
    {
        const bool branch_taken_0x13999c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1399A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x13999c) {
            ctx->pc = 0x1399E0u;
            goto label_1399e0;
        }
    }
    ctx->pc = 0x1399A4u;
    // 0x1399a4: 0x3c020022
    ctx->pc = 0x1399a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1399a8: 0x8c43d8e8
    ctx->pc = 0x1399a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x1399ac: 0x10640004
    ctx->pc = 0x1399ACu;
    {
        const bool branch_taken_0x1399ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1399B0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1399ac) {
            ctx->pc = 0x1399C0u;
            goto label_1399c0;
        }
    }
    ctx->pc = 0x1399B4u;
    // 0x1399b4: 0x220282d
    ctx->pc = 0x1399b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399b8: 0xc045a12
    ctx->pc = 0x1399B8u;
    SET_GPR_U32(ctx, 31, 0x1399C0u);
    ctx->pc = 0x1399BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953656));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399C0u; }
    }
    if (ctx->pc != 0x1399C0u) { return; }
    ctx->pc = 0x1399C0u;
label_1399c0:
    // 0x1399c0: 0x3c050024
    ctx->pc = 0x1399c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1399c4: 0x202d
    ctx->pc = 0x1399c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399c8: 0x24a5cae0
    ctx->pc = 0x1399c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953696));
label_1399cc:
    // 0x1399cc: 0xc04e57e
    ctx->pc = 0x1399CCu;
    SET_GPR_U32(ctx, 31, 0x1399D4u);
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399D4u; }
    }
    if (ctx->pc != 0x1399D4u) { return; }
    ctx->pc = 0x1399D4u;
    // 0x1399d4: 0x10000003
    ctx->pc = 0x1399D4u;
    {
        const bool branch_taken_0x1399d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1399D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1399d4) {
            ctx->pc = 0x1399E4u;
            goto label_1399e4;
        }
    }
    ctx->pc = 0x1399DCu;
    // 0x1399dc: 0x0
    ctx->pc = 0x1399dcu;
    // NOP
label_1399e0:
    // 0x1399e0: 0x8fa20004
    ctx->pc = 0x1399e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1399e4:
    // 0x1399e4: 0xdfb00030
    ctx->pc = 0x1399e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1399e8: 0xdfb10038
    ctx->pc = 0x1399e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1399ec: 0xdfbf0040
    ctx->pc = 0x1399ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1399f0: 0x3e00008
    ctx->pc = 0x1399F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1399F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139858u: goto label_139858;
            case 0x139874u: goto label_139874;
            case 0x139888u: goto label_139888;
            case 0x139890u: goto label_139890;
            case 0x139910u: goto label_139910;
            case 0x139914u: goto label_139914;
            case 0x139918u: goto label_139918;
            case 0x139950u: goto label_139950;
            case 0x1399C0u: goto label_1399c0;
            case 0x1399CCu: goto label_1399cc;
            case 0x1399E0u: goto label_1399e0;
            case 0x1399E4u: goto label_1399e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1399F8u;
}
