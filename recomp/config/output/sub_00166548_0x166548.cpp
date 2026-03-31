#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166548
// Address: 0x166548 - 0x166710
void sub_00166548_0x166548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166548u;

    // 0x166548: 0x3e00008
    ctx->pc = 0x166548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166550u;
    // 0x166550: 0x3e00008
    ctx->pc = 0x166550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166554u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166558u;
    // 0x166558: 0x27bdfff0
    ctx->pc = 0x166558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16655c: 0x24050006
    ctx->pc = 0x16655cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x166560: 0xffb00000
    ctx->pc = 0x166560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166564: 0xffbf0008
    ctx->pc = 0x166564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x166568: 0xc05d58a
    ctx->pc = 0x166568u;
    SET_GPR_U32(ctx, 31, 0x166570u);
    ctx->pc = 0x16656Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166570u; }
    }
    if (ctx->pc != 0x166570u) { return; }
    ctx->pc = 0x166570u;
    // 0x166570: 0x200202d
    ctx->pc = 0x166570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166574: 0x24050003
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x166578: 0x24060005
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16657c: 0x382d
    ctx->pc = 0x16657cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166580: 0x10400003
    ctx->pc = 0x166580u;
    {
        const bool branch_taken_0x166580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166584u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166580) {
            ctx->pc = 0x166590u;
            goto label_166590;
        }
    }
    ctx->pc = 0x166588u;
    // 0x166588: 0xc05def8
    ctx->pc = 0x166588u;
    SET_GPR_U32(ctx, 31, 0x166590u);
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166590u; }
    }
    if (ctx->pc != 0x166590u) { return; }
    ctx->pc = 0x166590u;
label_166590:
    // 0x166590: 0xdfb00000
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166594: 0xdfbf0008
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166598: 0x3e00008
    ctx->pc = 0x166598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16659Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1665A0u;
    // 0x1665a0: 0x27bdfff0
    ctx->pc = 0x1665a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1665a4: 0x24050006
    ctx->pc = 0x1665a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1665a8: 0xffb00000
    ctx->pc = 0x1665a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1665ac: 0xffbf0008
    ctx->pc = 0x1665acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1665b0: 0xc05d58a
    ctx->pc = 0x1665B0u;
    SET_GPR_U32(ctx, 31, 0x1665B8u);
    ctx->pc = 0x1665B4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1665B8u; }
    }
    if (ctx->pc != 0x1665B8u) { return; }
    ctx->pc = 0x1665B8u;
    // 0x1665b8: 0x200202d
    ctx->pc = 0x1665b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665bc: 0x24050003
    ctx->pc = 0x1665bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1665c0: 0x24060006
    ctx->pc = 0x1665c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1665c4: 0x382d
    ctx->pc = 0x1665c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665c8: 0x10400003
    ctx->pc = 0x1665C8u;
    {
        const bool branch_taken_0x1665c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1665CCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1665c8) {
            ctx->pc = 0x1665D8u;
            goto label_1665d8;
        }
    }
    ctx->pc = 0x1665D0u;
    // 0x1665d0: 0xc05def8
    ctx->pc = 0x1665D0u;
    SET_GPR_U32(ctx, 31, 0x1665D8u);
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1665D8u; }
    }
    if (ctx->pc != 0x1665D8u) { return; }
    ctx->pc = 0x1665D8u;
label_1665d8:
    // 0x1665d8: 0xdfb00000
    ctx->pc = 0x1665d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1665dc: 0xdfbf0008
    ctx->pc = 0x1665dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1665e0: 0x3e00008
    ctx->pc = 0x1665E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1665E8u;
    // 0x1665e8: 0x27bdfff0
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1665ec: 0x24050006
    ctx->pc = 0x1665ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1665f0: 0xffb00000
    ctx->pc = 0x1665f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1665f4: 0xffbf0008
    ctx->pc = 0x1665f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1665f8: 0xc05d58a
    ctx->pc = 0x1665F8u;
    SET_GPR_U32(ctx, 31, 0x166600u);
    ctx->pc = 0x1665FCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166600u; }
    }
    if (ctx->pc != 0x166600u) { return; }
    ctx->pc = 0x166600u;
    // 0x166600: 0x200202d
    ctx->pc = 0x166600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166604: 0x24050003
    ctx->pc = 0x166604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x166608: 0x24060007
    ctx->pc = 0x166608u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x16660c: 0x382d
    ctx->pc = 0x16660cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166610: 0x10400003
    ctx->pc = 0x166610u;
    {
        const bool branch_taken_0x166610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166614u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166610) {
            ctx->pc = 0x166620u;
            goto label_166620;
        }
    }
    ctx->pc = 0x166618u;
    // 0x166618: 0xc05def8
    ctx->pc = 0x166618u;
    SET_GPR_U32(ctx, 31, 0x166620u);
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166620u; }
    }
    if (ctx->pc != 0x166620u) { return; }
    ctx->pc = 0x166620u;
label_166620:
    // 0x166620: 0xdfb00000
    ctx->pc = 0x166620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166624: 0xdfbf0008
    ctx->pc = 0x166624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166628: 0x3e00008
    ctx->pc = 0x166628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16662Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166630u;
    // 0x166630: 0x27bdffe0
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166634: 0xffb10008
    ctx->pc = 0x166634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166638: 0xa0882d
    ctx->pc = 0x166638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16663c: 0x24050006
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x166640: 0xffb00000
    ctx->pc = 0x166640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166644: 0xffbf0010
    ctx->pc = 0x166644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166648: 0xc05d58a
    ctx->pc = 0x166648u;
    SET_GPR_U32(ctx, 31, 0x166650u);
    ctx->pc = 0x16664Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166650u; }
    }
    if (ctx->pc != 0x166650u) { return; }
    ctx->pc = 0x166650u;
    // 0x166650: 0x200202d
    ctx->pc = 0x166650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166654: 0x220382d
    ctx->pc = 0x166654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166658: 0x24050003
    ctx->pc = 0x166658u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16665c: 0x24060008
    ctx->pc = 0x16665cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x166660: 0x10400003
    ctx->pc = 0x166660u;
    {
        const bool branch_taken_0x166660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166664u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166660) {
            ctx->pc = 0x166670u;
            goto label_166670;
        }
    }
    ctx->pc = 0x166668u;
    // 0x166668: 0xc05def8
    ctx->pc = 0x166668u;
    SET_GPR_U32(ctx, 31, 0x166670u);
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166670u; }
    }
    if (ctx->pc != 0x166670u) { return; }
    ctx->pc = 0x166670u;
label_166670:
    // 0x166670: 0xdfb00000
    ctx->pc = 0x166670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166674: 0xdfb10008
    ctx->pc = 0x166674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166678: 0xdfbf0010
    ctx->pc = 0x166678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16667c: 0x3e00008
    ctx->pc = 0x16667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166684u;
    // 0x166684: 0x0
    ctx->pc = 0x166684u;
    // NOP
    // 0x166688: 0x27bdfff0
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16668c: 0x3c05ff00
    ctx->pc = 0x16668cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166690: 0xffbf0000
    ctx->pc = 0x166690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166694: 0x34a50a01
    ctx->pc = 0x166694u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    // 0x166698: 0xdfbf0000
    ctx->pc = 0x166698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16669c: 0x805a704
    ctx->pc = 0x16669Cu;
    ctx->pc = 0x1666A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1666A4u;
    // 0x1666a4: 0x0
    ctx->pc = 0x1666a4u;
    // NOP
    // 0x1666a8: 0x27bdfff0
    ctx->pc = 0x1666a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1666ac: 0x3c05ff00
    ctx->pc = 0x1666acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1666b0: 0xffbf0000
    ctx->pc = 0x1666b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1666b4: 0x34a50a01
    ctx->pc = 0x1666b4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    // 0x1666b8: 0xdfbf0000
    ctx->pc = 0x1666b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666bc: 0x805a704
    ctx->pc = 0x1666BCu;
    ctx->pc = 0x1666C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1666C4u;
    // 0x1666c4: 0x0
    ctx->pc = 0x1666c4u;
    // NOP
    // 0x1666c8: 0x27bdfff0
    ctx->pc = 0x1666c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1666cc: 0x3c05ff00
    ctx->pc = 0x1666ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1666d0: 0xffbf0000
    ctx->pc = 0x1666d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1666d4: 0x34a50a01
    ctx->pc = 0x1666d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    // 0x1666d8: 0xdfbf0000
    ctx->pc = 0x1666d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666dc: 0x805a704
    ctx->pc = 0x1666DCu;
    ctx->pc = 0x1666E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1666E4u;
    // 0x1666e4: 0x0
    ctx->pc = 0x1666e4u;
    // NOP
    // 0x1666e8: 0x27bdfff0
    ctx->pc = 0x1666e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1666ec: 0x3c05ff00
    ctx->pc = 0x1666ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1666f0: 0xffbf0000
    ctx->pc = 0x1666f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1666f4: 0x34a50a01
    ctx->pc = 0x1666f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    // 0x1666f8: 0xdfbf0000
    ctx->pc = 0x1666f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666fc: 0x805a704
    ctx->pc = 0x1666FCu;
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166704u;
    // 0x166704: 0x0
    ctx->pc = 0x166704u;
    // NOP
    // 0x166708: 0x3e00008
    ctx->pc = 0x166708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16670Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166590u: goto label_166590;
            case 0x1665D8u: goto label_1665d8;
            case 0x166620u: goto label_166620;
            case 0x166670u: goto label_166670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166710u;
}
