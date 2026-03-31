#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141800
// Address: 0x141800 - 0x1418a8
void sub_00141800_0x141800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141800u;

label_141800:
    // 0x141800: 0x27bdff80
    ctx->pc = 0x141800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_141804:
    // 0x141804: 0xffb00000
    ctx->pc = 0x141804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141808:
    // 0x141808: 0x3c100023
    ctx->pc = 0x141808u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
label_14180c:
    // 0x14180c: 0x2610a638
    ctx->pc = 0x14180cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294944312));
label_141810:
    // 0x141810: 0xffb10008
    ctx->pc = 0x141810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141814:
    // 0x141814: 0xffa50048
    ctx->pc = 0x141814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_141818:
    // 0x141818: 0x282d
    ctx->pc = 0x141818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14181c:
    // 0x14181c: 0xffa60050
    ctx->pc = 0x14181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
label_141820:
    // 0x141820: 0x24060080
    ctx->pc = 0x141820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
label_141824:
    // 0x141824: 0x80882d
    ctx->pc = 0x141824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141828:
    // 0x141828: 0x200202d
    ctx->pc = 0x141828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14182c:
    // 0x14182c: 0xffbf0010
    ctx->pc = 0x14182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141830:
    // 0x141830: 0xffa70058
    ctx->pc = 0x141830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
label_141834:
    // 0x141834: 0xffa80060
    ctx->pc = 0x141834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
label_141838:
    // 0x141838: 0xffa90068
    ctx->pc = 0x141838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
label_14183c:
    // 0x14183c: 0xffaa0070
    ctx->pc = 0x14183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
label_141840:
    // 0x141840: 0xffab0078
    ctx->pc = 0x141840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
label_141844:
    // 0x141844: 0xe7ac0028
    ctx->pc = 0x141844u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_141848:
    // 0x141848: 0xe7ad002c
    ctx->pc = 0x141848u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_14184c:
    // 0x14184c: 0xe7ae0030
    ctx->pc = 0x14184cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_141850:
    // 0x141850: 0xe7af0034
    ctx->pc = 0x141850u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_141854:
    // 0x141854: 0xe7b00038
    ctx->pc = 0x141854u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_141858:
    // 0x141858: 0xe7b1003c
    ctx->pc = 0x141858u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_14185c:
    // 0x14185c: 0xe7b20040
    ctx->pc = 0x14185cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_141860:
    // 0x141860: 0xc041f1a
label_141864:
    if (ctx->pc == 0x141864u) {
        ctx->pc = 0x141864u;
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->pc = 0x141868u;
        goto label_141868;
    }
    ctx->pc = 0x141860u;
    SET_GPR_U32(ctx, 31, 0x141868u);
    ctx->pc = 0x141864u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141868u; }
    }
    if (ctx->pc != 0x141868u) { return; }
    ctx->pc = 0x141868u;
label_141868:
    // 0x141868: 0x27a60048
    ctx->pc = 0x141868u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 72));
label_14186c:
    // 0x14186c: 0x220282d
    ctx->pc = 0x14186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141870:
    // 0x141870: 0xc043e20
label_141874:
    if (ctx->pc == 0x141874u) {
        ctx->pc = 0x141874u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141878u;
        goto label_141878;
    }
    ctx->pc = 0x141870u;
    SET_GPR_U32(ctx, 31, 0x141878u);
    ctx->pc = 0x141874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141878u; }
    }
    if (ctx->pc != 0x141878u) { return; }
    ctx->pc = 0x141878u;
label_141878:
    // 0x141878: 0x3c020026
    ctx->pc = 0x141878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_14187c:
    // 0x14187c: 0x244249f0
    ctx->pc = 0x14187cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18928));
label_141880:
    // 0x141880: 0x8c430000
    ctx->pc = 0x141880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141884:
    // 0x141884: 0x10600003
label_141888:
    if (ctx->pc == 0x141888u) {
        ctx->pc = 0x141888u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14188Cu;
        goto label_14188c;
    }
    ctx->pc = 0x141884u;
    {
        const bool branch_taken_0x141884 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x141888u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x141884) {
            ctx->pc = 0x141894u;
            goto label_141894;
        }
    }
    ctx->pc = 0x14188Cu;
label_14188c:
    // 0x14188c: 0x60f809
label_141890:
    if (ctx->pc == 0x141890u) {
        ctx->pc = 0x141890u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x141894u;
        goto label_141894;
    }
    ctx->pc = 0x14188Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141894u);
        ctx->pc = 0x141890u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141800u: goto label_141800;
            case 0x141804u: goto label_141804;
            case 0x141808u: goto label_141808;
            case 0x14180Cu: goto label_14180c;
            case 0x141810u: goto label_141810;
            case 0x141814u: goto label_141814;
            case 0x141818u: goto label_141818;
            case 0x14181Cu: goto label_14181c;
            case 0x141820u: goto label_141820;
            case 0x141824u: goto label_141824;
            case 0x141828u: goto label_141828;
            case 0x14182Cu: goto label_14182c;
            case 0x141830u: goto label_141830;
            case 0x141834u: goto label_141834;
            case 0x141838u: goto label_141838;
            case 0x14183Cu: goto label_14183c;
            case 0x141840u: goto label_141840;
            case 0x141844u: goto label_141844;
            case 0x141848u: goto label_141848;
            case 0x14184Cu: goto label_14184c;
            case 0x141850u: goto label_141850;
            case 0x141854u: goto label_141854;
            case 0x141858u: goto label_141858;
            case 0x14185Cu: goto label_14185c;
            case 0x141860u: goto label_141860;
            case 0x141864u: goto label_141864;
            case 0x141868u: goto label_141868;
            case 0x14186Cu: goto label_14186c;
            case 0x141870u: goto label_141870;
            case 0x141874u: goto label_141874;
            case 0x141878u: goto label_141878;
            case 0x14187Cu: goto label_14187c;
            case 0x141880u: goto label_141880;
            case 0x141884u: goto label_141884;
            case 0x141888u: goto label_141888;
            case 0x14188Cu: goto label_14188c;
            case 0x141890u: goto label_141890;
            case 0x141894u: goto label_141894;
            case 0x141898u: goto label_141898;
            case 0x14189Cu: goto label_14189c;
            case 0x1418A0u: goto label_1418a0;
            case 0x1418A4u: goto label_1418a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141894u; }
            if (ctx->pc != 0x141894u) { return; }
        }
    }
    ctx->pc = 0x141894u;
label_141894:
    // 0x141894: 0xdfb00000
    ctx->pc = 0x141894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141898:
    // 0x141898: 0xdfb10008
    ctx->pc = 0x141898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14189c:
    // 0x14189c: 0xdfbf0010
    ctx->pc = 0x14189cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1418a0:
    // 0x1418a0: 0x3e00008
label_1418a4:
    if (ctx->pc == 0x1418A4u) {
        ctx->pc = 0x1418A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1418A8u;
        goto label_fallthrough_0x1418a0;
    }
    ctx->pc = 0x1418A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141800u: goto label_141800;
            case 0x141804u: goto label_141804;
            case 0x141808u: goto label_141808;
            case 0x14180Cu: goto label_14180c;
            case 0x141810u: goto label_141810;
            case 0x141814u: goto label_141814;
            case 0x141818u: goto label_141818;
            case 0x14181Cu: goto label_14181c;
            case 0x141820u: goto label_141820;
            case 0x141824u: goto label_141824;
            case 0x141828u: goto label_141828;
            case 0x14182Cu: goto label_14182c;
            case 0x141830u: goto label_141830;
            case 0x141834u: goto label_141834;
            case 0x141838u: goto label_141838;
            case 0x14183Cu: goto label_14183c;
            case 0x141840u: goto label_141840;
            case 0x141844u: goto label_141844;
            case 0x141848u: goto label_141848;
            case 0x14184Cu: goto label_14184c;
            case 0x141850u: goto label_141850;
            case 0x141854u: goto label_141854;
            case 0x141858u: goto label_141858;
            case 0x14185Cu: goto label_14185c;
            case 0x141860u: goto label_141860;
            case 0x141864u: goto label_141864;
            case 0x141868u: goto label_141868;
            case 0x14186Cu: goto label_14186c;
            case 0x141870u: goto label_141870;
            case 0x141874u: goto label_141874;
            case 0x141878u: goto label_141878;
            case 0x14187Cu: goto label_14187c;
            case 0x141880u: goto label_141880;
            case 0x141884u: goto label_141884;
            case 0x141888u: goto label_141888;
            case 0x14188Cu: goto label_14188c;
            case 0x141890u: goto label_141890;
            case 0x141894u: goto label_141894;
            case 0x141898u: goto label_141898;
            case 0x14189Cu: goto label_14189c;
            case 0x1418A0u: goto label_1418a0;
            case 0x1418A4u: goto label_1418a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1418a0:
    ctx->pc = 0x1418A8u;
}
