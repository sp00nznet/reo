#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182398
// Address: 0x182398 - 0x182520
void sub_00182398_0x182398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182398u;

label_182398:
    // 0x182398: 0x27bdffd0
    ctx->pc = 0x182398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18239c: 0xffb10008
    ctx->pc = 0x18239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1823a0: 0xa0882d
    ctx->pc = 0x1823a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823a4: 0xffb30018
    ctx->pc = 0x1823a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1823a8: 0x80982d
    ctx->pc = 0x1823a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823ac: 0xffb00000
    ctx->pc = 0x1823acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1823b0: 0xffb20010
    ctx->pc = 0x1823b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1823b4: 0x10000044
    ctx->pc = 0x1823B4u;
    {
        const bool branch_taken_0x1823b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1823B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x1823b4) {
            ctx->pc = 0x1824C8u;
            goto label_1824c8;
        }
    }
    ctx->pc = 0x1823BCu;
    // 0x1823bc: 0x0
    ctx->pc = 0x1823bcu;
    // NOP
label_1823c0:
    // 0x1823c0: 0x4600003
    ctx->pc = 0x1823C0u;
    {
        const bool branch_taken_0x1823c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1823C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1823c0) {
            ctx->pc = 0x1823D0u;
            goto label_1823d0;
        }
    }
    ctx->pc = 0x1823C8u;
    // 0x1823c8: 0x243102a
    ctx->pc = 0x1823c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1823cc: 0x62800a
    ctx->pc = 0x1823ccu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_1823d0:
    // 0x1823d0: 0x220202d
    ctx->pc = 0x1823d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823d4: 0x260282d
    ctx->pc = 0x1823d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823d8: 0xc042d10
    ctx->pc = 0x1823D8u;
    SET_GPR_U32(ctx, 31, 0x1823E0u);
    ctx->pc = 0x1823DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823E0u; }
    }
    if (ctx->pc != 0x1823E0u) { return; }
    ctx->pc = 0x1823E0u;
    // 0x1823e0: 0x14400037
    ctx->pc = 0x1823E0u;
    {
        const bool branch_taken_0x1823e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1823E4u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x1823e0) {
            ctx->pc = 0x1824C0u;
            goto label_1824c0;
        }
    }
    ctx->pc = 0x1823E8u;
    // 0x1823e8: 0x2403003f
    ctx->pc = 0x1823e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1823ec: 0x82220000
    ctx->pc = 0x1823ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1823f0: 0x2709821
    ctx->pc = 0x1823f0u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1823f4: 0x1443000b
    ctx->pc = 0x1823F4u;
    {
        const bool branch_taken_0x1823f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1823F8u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1823f4) {
            ctx->pc = 0x182424u;
            goto label_182424;
        }
    }
    ctx->pc = 0x1823FCu;
    // 0x1823fc: 0x2404003f
    ctx->pc = 0x1823fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
label_182400:
    // 0x182400: 0x82630000
    ctx->pc = 0x182400u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x182404: 0x26730001
    ctx->pc = 0x182404u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x182408: 0x1060003e
    ctx->pc = 0x182408u;
    {
        const bool branch_taken_0x182408 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18240Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x182408) {
            ctx->pc = 0x182504u;
            goto label_182504;
        }
    }
    ctx->pc = 0x182410u;
    // 0x182410: 0x26310001
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x182414: 0x82220000
    ctx->pc = 0x182414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x182418: 0x0
    ctx->pc = 0x182418u;
    // NOP
    // 0x18241c: 0x1044fff8
    ctx->pc = 0x18241Cu;
    {
        const bool branch_taken_0x18241c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x182420u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x18241c) {
            ctx->pc = 0x182400u;
            goto label_182400;
        }
    }
    ctx->pc = 0x182424u;
label_182424:
    // 0x182424: 0x51600
    ctx->pc = 0x182424u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
    // 0x182428: 0x2403002a
    ctx->pc = 0x182428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 42));
    // 0x18242c: 0x21603
    ctx->pc = 0x18242cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x182430: 0x54430026
    ctx->pc = 0x182430u;
    {
        const bool branch_taken_0x182430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x182430) {
            ctx->pc = 0x182434u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x182438u;
    // 0x182438: 0x2402002a
    ctx->pc = 0x182438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x18243c: 0x2404003f
    ctx->pc = 0x18243cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
label_182440:
    // 0x182440: 0x26310001
    ctx->pc = 0x182440u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_182444:
    // 0x182444: 0x82230000
    ctx->pc = 0x182444u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x182448: 0x0
    ctx->pc = 0x182448u;
    // NOP
    // 0x18244c: 0x0
    ctx->pc = 0x18244cu;
    // NOP
    // 0x182450: 0x0
    ctx->pc = 0x182450u;
    // NOP
    // 0x182454: 0x1062fffa
    ctx->pc = 0x182454u;
    {
        const bool branch_taken_0x182454 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x182458u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x182454) {
            ctx->pc = 0x182440u;
            goto label_182440;
        }
    }
    ctx->pc = 0x18245Cu;
    // 0x18245c: 0x0
    ctx->pc = 0x18245cu;
    // NOP
    // 0x182460: 0x0
    ctx->pc = 0x182460u;
    // NOP
    // 0x182464: 0x0
    ctx->pc = 0x182464u;
    // NOP
    // 0x182468: 0x0
    ctx->pc = 0x182468u;
    // NOP
    // 0x18246c: 0x5064fff5
    ctx->pc = 0x18246Cu;
    {
        const bool branch_taken_0x18246c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x18246c) {
            ctx->pc = 0x182470u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x182444u;
            goto label_182444;
        }
    }
    ctx->pc = 0x182474u;
    // 0x182474: 0x10600023
    ctx->pc = 0x182474u;
    {
        const bool branch_taken_0x182474 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x182478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x182474) {
            ctx->pc = 0x182504u;
            goto label_182504;
        }
    }
    ctx->pc = 0x18247Cu;
    // 0x18247c: 0x10000008
    ctx->pc = 0x18247Cu;
    {
        const bool branch_taken_0x18247c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182480u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18247c) {
            ctx->pc = 0x1824A0u;
            goto label_1824a0;
        }
    }
    ctx->pc = 0x182484u;
    // 0x182484: 0x0
    ctx->pc = 0x182484u;
    // NOP
label_182488:
    // 0x182488: 0x260202d
    ctx->pc = 0x182488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18248c: 0xc0608e6
    ctx->pc = 0x18248Cu;
    SET_GPR_U32(ctx, 31, 0x182494u);
    ctx->pc = 0x182490u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x182398u;
    goto label_182398;
    ctx->pc = 0x182494u;
label_182494:
    // 0x182494: 0x1052001c
    ctx->pc = 0x182494u;
    {
        const bool branch_taken_0x182494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x182498u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x182494) {
            ctx->pc = 0x182508u;
            goto label_182508;
        }
    }
    ctx->pc = 0x18249Cu;
    // 0x18249c: 0x92250000
    ctx->pc = 0x18249cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1824a0:
    // 0x1824a0: 0x52e00
    ctx->pc = 0x1824a0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1824a4: 0x260202d
    ctx->pc = 0x1824a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824a8: 0xc060866
    ctx->pc = 0x1824A8u;
    SET_GPR_U32(ctx, 31, 0x1824B0u);
    ctx->pc = 0x1824ACu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->pc = 0x182198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182198_0x182198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824B0u; }
    }
    if (ctx->pc != 0x1824B0u) { return; }
    ctx->pc = 0x1824B0u;
    // 0x1824b0: 0x220282d
    ctx->pc = 0x1824b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824b4: 0x40802d
    ctx->pc = 0x1824b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824b8: 0x601fff3
    ctx->pc = 0x1824B8u;
    {
        const bool branch_taken_0x1824b8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1824BCu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x1824b8) {
            ctx->pc = 0x182488u;
            goto label_182488;
        }
    }
    ctx->pc = 0x1824C0u;
label_1824c0:
    // 0x1824c0: 0x10000010
    ctx->pc = 0x1824C0u;
    {
        const bool branch_taken_0x1824c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1824C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1824c0) {
            ctx->pc = 0x182504u;
            goto label_182504;
        }
    }
    ctx->pc = 0x1824C8u;
label_1824c8:
    // 0x1824c8: 0x2405003f
    ctx->pc = 0x1824c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
label_1824cc:
    // 0x1824cc: 0xc060866
    ctx->pc = 0x1824CCu;
    SET_GPR_U32(ctx, 31, 0x1824D4u);
    ctx->pc = 0x1824D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182198_0x182198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824D4u; }
    }
    if (ctx->pc != 0x1824D4u) { return; }
    ctx->pc = 0x1824D4u;
    // 0x1824d4: 0x220202d
    ctx->pc = 0x1824d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824d8: 0x2405002a
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 42));
    // 0x1824dc: 0xc060866
    ctx->pc = 0x1824DCu;
    SET_GPR_U32(ctx, 31, 0x1824E4u);
    ctx->pc = 0x1824E0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182198_0x182198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824E4u; }
    }
    if (ctx->pc != 0x1824E4u) { return; }
    ctx->pc = 0x1824E4u;
    // 0x1824e4: 0x641ffb6
    ctx->pc = 0x1824E4u;
    {
        const bool branch_taken_0x1824e4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1824E8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1824e4) {
            ctx->pc = 0x1823C0u;
            goto label_1823c0;
        }
    }
    ctx->pc = 0x1824ECu;
    // 0x1824ec: 0x461ffb8
    ctx->pc = 0x1824ECu;
    {
        const bool branch_taken_0x1824ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1824F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1824ec) {
            ctx->pc = 0x1823D0u;
            goto label_1823d0;
        }
    }
    ctx->pc = 0x1824F4u;
    // 0x1824f4: 0x220202d
    ctx->pc = 0x1824f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824f8: 0xc042b9e
    ctx->pc = 0x1824F8u;
    SET_GPR_U32(ctx, 31, 0x182500u);
    ctx->pc = 0x1824FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182500u; }
    }
    if (ctx->pc != 0x182500u) { return; }
    ctx->pc = 0x182500u;
    // 0x182500: 0x2c420001
    ctx->pc = 0x182500u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_182504:
    // 0x182504: 0xdfb00000
    ctx->pc = 0x182504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182508:
    // 0x182508: 0xdfb10008
    ctx->pc = 0x182508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18250c: 0xdfb20010
    ctx->pc = 0x18250cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182510: 0xdfb30018
    ctx->pc = 0x182510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182514: 0xdfbf0020
    ctx->pc = 0x182514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182518: 0x3e00008
    ctx->pc = 0x182518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18251Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182398u: goto label_182398;
            case 0x1823C0u: goto label_1823c0;
            case 0x1823D0u: goto label_1823d0;
            case 0x182400u: goto label_182400;
            case 0x182424u: goto label_182424;
            case 0x182440u: goto label_182440;
            case 0x182444u: goto label_182444;
            case 0x182488u: goto label_182488;
            case 0x182494u: goto label_182494;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824C0u: goto label_1824c0;
            case 0x1824C8u: goto label_1824c8;
            case 0x1824CCu: goto label_1824cc;
            case 0x182504u: goto label_182504;
            case 0x182508u: goto label_182508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182520u;
}
