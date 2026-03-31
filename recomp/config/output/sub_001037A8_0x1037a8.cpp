#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001037A8
// Address: 0x1037a8 - 0x103898
void sub_001037A8_0x1037a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1037a8u;

label_1037a8:
    // 0x1037a8: 0x27bdfff0
    ctx->pc = 0x1037a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1037ac:
    // 0x1037ac: 0x282d
    ctx->pc = 0x1037acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1037b0:
    // 0x1037b0: 0xffbf0000
    ctx->pc = 0x1037b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1037b4:
    // 0x1037b4: 0x2406000a
    ctx->pc = 0x1037b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_1037b8:
    // 0x1037b8: 0xdfbf0000
    ctx->pc = 0x1037b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1037bc:
    // 0x1037bc: 0x80432c6
label_1037c0:
    if (ctx->pc == 0x1037C0u) {
        ctx->pc = 0x1037C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1037C4u;
        goto label_1037c4;
    }
    ctx->pc = 0x1037BCu;
    ctx->pc = 0x1037C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10CB18u;
    sub_0010CB18_0x10cb18(rdram, ctx, runtime); return;
    ctx->pc = 0x1037C4u;
label_1037c4:
    // 0x1037c4: 0x0
    ctx->pc = 0x1037c4u;
    // NOP
label_1037c8:
    // 0x1037c8: 0x27bdffb0
    ctx->pc = 0x1037c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1037cc:
    // 0x1037cc: 0xffb20010
    ctx->pc = 0x1037ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1037d0:
    // 0x1037d0: 0xc0902d
    ctx->pc = 0x1037d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1037d4:
    // 0x1037d4: 0xffb30018
    ctx->pc = 0x1037d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1037d8:
    // 0x1037d8: 0xe0982d
    ctx->pc = 0x1037d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1037dc:
    // 0x1037dc: 0xffb40020
    ctx->pc = 0x1037dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1037e0:
    // 0x1037e0: 0xa02d
    ctx->pc = 0x1037e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1037e4:
    // 0x1037e4: 0xffb50028
    ctx->pc = 0x1037e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1037e8:
    // 0x1037e8: 0x100a82d
    ctx->pc = 0x1037e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1037ec:
    // 0x1037ec: 0xffb60030
    ctx->pc = 0x1037ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1037f0:
    // 0x1037f0: 0xa0b02d
    ctx->pc = 0x1037f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1037f4:
    // 0x1037f4: 0xffb70038
    ctx->pc = 0x1037f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1037f8:
    // 0x1037f8: 0x80b82d
    ctx->pc = 0x1037f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1037fc:
    // 0x1037fc: 0xffb00000
    ctx->pc = 0x1037fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_103800:
    // 0x103800: 0xffb10008
    ctx->pc = 0x103800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_103804:
    // 0x103804: 0x12400017
label_103808:
    if (ctx->pc == 0x103808u) {
        ctx->pc = 0x103808u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x10380Cu;
        goto label_10380c;
    }
    ctx->pc = 0x103804u;
    {
        const bool branch_taken_0x103804 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x103808u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x103804) {
            ctx->pc = 0x103864u;
            goto label_103864;
        }
    }
    ctx->pc = 0x10380Cu;
label_10380c:
    // 0x10380c: 0x12600016
label_103810:
    if (ctx->pc == 0x103810u) {
        ctx->pc = 0x103810u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103814u;
        goto label_103814;
    }
    ctx->pc = 0x10380Cu;
    {
        const bool branch_taken_0x10380c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x103810u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10380c) {
            ctx->pc = 0x103868u;
            goto label_103868;
        }
    }
    ctx->pc = 0x103814u;
label_103814:
    // 0x103814: 0x12400015
label_103818:
    if (ctx->pc == 0x103818u) {
        ctx->pc = 0x103818u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x10381Cu;
        goto label_10381c;
    }
    ctx->pc = 0x103814u;
    {
        const bool branch_taken_0x103814 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x103818u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x103814) {
            ctx->pc = 0x10386Cu;
            goto label_10386c;
        }
    }
    ctx->pc = 0x10381Cu;
label_10381c:
    // 0x10381c: 0x2921021
    ctx->pc = 0x10381cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_103820:
    // 0x103820: 0x2e0202d
    ctx->pc = 0x103820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_103824:
    // 0x103824: 0x28842
    ctx->pc = 0x103824u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 2), 1));
label_103828:
    // 0x103828: 0x2331018
    ctx->pc = 0x103828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_10382c:
    // 0x10382c: 0x568021
    ctx->pc = 0x10382cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_103830:
    // 0x103830: 0x2a0f809
label_103834:
    if (ctx->pc == 0x103834u) {
        ctx->pc = 0x103834u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103838u;
        goto label_103838;
    }
    ctx->pc = 0x103830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x103838u);
        ctx->pc = 0x103834u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1037A8u: goto label_1037a8;
            case 0x1037ACu: goto label_1037ac;
            case 0x1037B0u: goto label_1037b0;
            case 0x1037B4u: goto label_1037b4;
            case 0x1037B8u: goto label_1037b8;
            case 0x1037BCu: goto label_1037bc;
            case 0x1037C0u: goto label_1037c0;
            case 0x1037C4u: goto label_1037c4;
            case 0x1037C8u: goto label_1037c8;
            case 0x1037CCu: goto label_1037cc;
            case 0x1037D0u: goto label_1037d0;
            case 0x1037D4u: goto label_1037d4;
            case 0x1037D8u: goto label_1037d8;
            case 0x1037DCu: goto label_1037dc;
            case 0x1037E0u: goto label_1037e0;
            case 0x1037E4u: goto label_1037e4;
            case 0x1037E8u: goto label_1037e8;
            case 0x1037ECu: goto label_1037ec;
            case 0x1037F0u: goto label_1037f0;
            case 0x1037F4u: goto label_1037f4;
            case 0x1037F8u: goto label_1037f8;
            case 0x1037FCu: goto label_1037fc;
            case 0x103800u: goto label_103800;
            case 0x103804u: goto label_103804;
            case 0x103808u: goto label_103808;
            case 0x10380Cu: goto label_10380c;
            case 0x103810u: goto label_103810;
            case 0x103814u: goto label_103814;
            case 0x103818u: goto label_103818;
            case 0x10381Cu: goto label_10381c;
            case 0x103820u: goto label_103820;
            case 0x103824u: goto label_103824;
            case 0x103828u: goto label_103828;
            case 0x10382Cu: goto label_10382c;
            case 0x103830u: goto label_103830;
            case 0x103834u: goto label_103834;
            case 0x103838u: goto label_103838;
            case 0x10383Cu: goto label_10383c;
            case 0x103840u: goto label_103840;
            case 0x103844u: goto label_103844;
            case 0x103848u: goto label_103848;
            case 0x10384Cu: goto label_10384c;
            case 0x103850u: goto label_103850;
            case 0x103854u: goto label_103854;
            case 0x103858u: goto label_103858;
            case 0x10385Cu: goto label_10385c;
            case 0x103860u: goto label_103860;
            case 0x103864u: goto label_103864;
            case 0x103868u: goto label_103868;
            case 0x10386Cu: goto label_10386c;
            case 0x103870u: goto label_103870;
            case 0x103874u: goto label_103874;
            case 0x103878u: goto label_103878;
            case 0x10387Cu: goto label_10387c;
            case 0x103880u: goto label_103880;
            case 0x103884u: goto label_103884;
            case 0x103888u: goto label_103888;
            case 0x10388Cu: goto label_10388c;
            case 0x103890u: goto label_103890;
            case 0x103894u: goto label_103894;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x103838u; }
            if (ctx->pc != 0x103838u) { return; }
        }
    }
    ctx->pc = 0x103838u;
label_103838:
    // 0x103838: 0x40182d
    ctx->pc = 0x103838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10383c:
    // 0x10383c: 0x4610004
label_103840:
    if (ctx->pc == 0x103840u) {
        ctx->pc = 0x103840u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x103844u;
        goto label_103844;
    }
    ctx->pc = 0x10383Cu;
    {
        const bool branch_taken_0x10383c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x103840u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10383c) {
            ctx->pc = 0x103850u;
            goto label_103850;
        }
    }
    ctx->pc = 0x103844u;
label_103844:
    // 0x103844: 0x10000004
label_103848:
    if (ctx->pc == 0x103848u) {
        ctx->pc = 0x103848u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10384Cu;
        goto label_10384c;
    }
    ctx->pc = 0x103844u;
    {
        const bool branch_taken_0x103844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103848u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103844) {
            ctx->pc = 0x103858u;
            goto label_103858;
        }
    }
    ctx->pc = 0x10384Cu;
label_10384c:
    // 0x10384c: 0x0
    ctx->pc = 0x10384cu;
    // NOP
label_103850:
    // 0x103850: 0x18600005
label_103854:
    if (ctx->pc == 0x103854u) {
        ctx->pc = 0x103854u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x103858u;
        goto label_103858;
    }
    ctx->pc = 0x103850u;
    {
        const bool branch_taken_0x103850 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x103854u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x103850) {
            ctx->pc = 0x103868u;
            goto label_103868;
        }
    }
    ctx->pc = 0x103858u;
label_103858:
    // 0x103858: 0x292102b
    ctx->pc = 0x103858u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_10385c:
    // 0x10385c: 0x1440fff0
label_103860:
    if (ctx->pc == 0x103860u) {
        ctx->pc = 0x103860u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x103864u;
        goto label_103864;
    }
    ctx->pc = 0x10385Cu;
    {
        const bool branch_taken_0x10385c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x103860u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x10385c) {
            ctx->pc = 0x103820u;
            goto label_103820;
        }
    }
    ctx->pc = 0x103864u;
label_103864:
    // 0x103864: 0x102d
    ctx->pc = 0x103864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103868:
    // 0x103868: 0xdfb00000
    ctx->pc = 0x103868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10386c:
    // 0x10386c: 0xdfb10008
    ctx->pc = 0x10386cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103870:
    // 0x103870: 0xdfb20010
    ctx->pc = 0x103870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103874:
    // 0x103874: 0xdfb30018
    ctx->pc = 0x103874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_103878:
    // 0x103878: 0xdfb40020
    ctx->pc = 0x103878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10387c:
    // 0x10387c: 0xdfb50028
    ctx->pc = 0x10387cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_103880:
    // 0x103880: 0xdfb60030
    ctx->pc = 0x103880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_103884:
    // 0x103884: 0xdfb70038
    ctx->pc = 0x103884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_103888:
    // 0x103888: 0xdfbf0040
    ctx->pc = 0x103888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10388c:
    // 0x10388c: 0x3e00008
label_103890:
    if (ctx->pc == 0x103890u) {
        ctx->pc = 0x103890u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x103894u;
        goto label_103894;
    }
    ctx->pc = 0x10388Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103890u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1037A8u: goto label_1037a8;
            case 0x1037ACu: goto label_1037ac;
            case 0x1037B0u: goto label_1037b0;
            case 0x1037B4u: goto label_1037b4;
            case 0x1037B8u: goto label_1037b8;
            case 0x1037BCu: goto label_1037bc;
            case 0x1037C0u: goto label_1037c0;
            case 0x1037C4u: goto label_1037c4;
            case 0x1037C8u: goto label_1037c8;
            case 0x1037CCu: goto label_1037cc;
            case 0x1037D0u: goto label_1037d0;
            case 0x1037D4u: goto label_1037d4;
            case 0x1037D8u: goto label_1037d8;
            case 0x1037DCu: goto label_1037dc;
            case 0x1037E0u: goto label_1037e0;
            case 0x1037E4u: goto label_1037e4;
            case 0x1037E8u: goto label_1037e8;
            case 0x1037ECu: goto label_1037ec;
            case 0x1037F0u: goto label_1037f0;
            case 0x1037F4u: goto label_1037f4;
            case 0x1037F8u: goto label_1037f8;
            case 0x1037FCu: goto label_1037fc;
            case 0x103800u: goto label_103800;
            case 0x103804u: goto label_103804;
            case 0x103808u: goto label_103808;
            case 0x10380Cu: goto label_10380c;
            case 0x103810u: goto label_103810;
            case 0x103814u: goto label_103814;
            case 0x103818u: goto label_103818;
            case 0x10381Cu: goto label_10381c;
            case 0x103820u: goto label_103820;
            case 0x103824u: goto label_103824;
            case 0x103828u: goto label_103828;
            case 0x10382Cu: goto label_10382c;
            case 0x103830u: goto label_103830;
            case 0x103834u: goto label_103834;
            case 0x103838u: goto label_103838;
            case 0x10383Cu: goto label_10383c;
            case 0x103840u: goto label_103840;
            case 0x103844u: goto label_103844;
            case 0x103848u: goto label_103848;
            case 0x10384Cu: goto label_10384c;
            case 0x103850u: goto label_103850;
            case 0x103854u: goto label_103854;
            case 0x103858u: goto label_103858;
            case 0x10385Cu: goto label_10385c;
            case 0x103860u: goto label_103860;
            case 0x103864u: goto label_103864;
            case 0x103868u: goto label_103868;
            case 0x10386Cu: goto label_10386c;
            case 0x103870u: goto label_103870;
            case 0x103874u: goto label_103874;
            case 0x103878u: goto label_103878;
            case 0x10387Cu: goto label_10387c;
            case 0x103880u: goto label_103880;
            case 0x103884u: goto label_103884;
            case 0x103888u: goto label_103888;
            case 0x10388Cu: goto label_10388c;
            case 0x103890u: goto label_103890;
            case 0x103894u: goto label_103894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103894u;
label_103894:
    // 0x103894: 0x0
    ctx->pc = 0x103894u;
    // NOP
}
