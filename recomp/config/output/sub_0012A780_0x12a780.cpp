#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012A780
// Address: 0x12a780 - 0x12a830
void sub_0012A780_0x12a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a780u;

label_12a780:
    // 0x12a780: 0x27bdffe0
    ctx->pc = 0x12a780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12a784:
    // 0x12a784: 0xffb00000
    ctx->pc = 0x12a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12a788:
    // 0x12a788: 0x80802d
    ctx->pc = 0x12a788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12a78c:
    // 0x12a78c: 0xffb10008
    ctx->pc = 0x12a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12a790:
    // 0x12a790: 0xffbf0010
    ctx->pc = 0x12a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12a794:
    // 0x12a794: 0x16000008
label_12a798:
    if (ctx->pc == 0x12A798u) {
        ctx->pc = 0x12A798u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x12A79Cu;
        goto label_12a79c;
    }
    ctx->pc = 0x12A794u;
    {
        const bool branch_taken_0x12a794 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12A798u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        if (branch_taken_0x12a794) {
            ctx->pc = 0x12A7B8u;
            goto label_12a7b8;
        }
    }
    ctx->pc = 0x12A79Cu;
label_12a79c:
    // 0x12a79c: 0x3c040024
    ctx->pc = 0x12a79cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_12a7a0:
    // 0x12a7a0: 0xdfb00000
    ctx->pc = 0x12a7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12a7a4:
    // 0x12a7a4: 0xdfb10008
    ctx->pc = 0x12a7a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12a7a8:
    // 0x12a7a8: 0x2484a398
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943640));
label_12a7ac:
    // 0x12a7ac: 0xdfbf0010
    ctx->pc = 0x12a7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12a7b0:
    // 0x12a7b0: 0x804a034
label_12a7b4:
    if (ctx->pc == 0x12A7B4u) {
        ctx->pc = 0x12A7B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12A7B8u;
        goto label_12a7b8;
    }
    ctx->pc = 0x12A7B0u;
    ctx->pc = 0x12A7B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x12A7B8u;
label_12a7b8:
    // 0x12a7b8: 0xc04c766
label_12a7bc:
    if (ctx->pc == 0x12A7BCu) {
        ctx->pc = 0x12A7C0u;
        goto label_12a7c0;
    }
    ctx->pc = 0x12A7B8u;
    SET_GPR_U32(ctx, 31, 0x12A7C0u);
    ctx->pc = 0x131D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D98_0x131d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7C0u; }
    }
    if (ctx->pc != 0x12A7C0u) { return; }
    ctx->pc = 0x12A7C0u;
label_12a7c0:
    // 0x12a7c0: 0xc049938
label_12a7c4:
    if (ctx->pc == 0x12A7C4u) {
        ctx->pc = 0x12A7C8u;
        goto label_12a7c8;
    }
    ctx->pc = 0x12A7C0u;
    SET_GPR_U32(ctx, 31, 0x12A7C8u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7C8u; }
    }
    if (ctx->pc != 0x12A7C8u) { return; }
    ctx->pc = 0x12A7C8u;
label_12a7c8:
    // 0x12a7c8: 0x8e050010
    ctx->pc = 0x12a7c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_12a7cc:
    // 0x12a7cc: 0xc04c6d8
label_12a7d0:
    if (ctx->pc == 0x12A7D0u) {
        ctx->pc = 0x12A7D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A7D4u;
        goto label_12a7d4;
    }
    ctx->pc = 0x12A7CCu;
    SET_GPR_U32(ctx, 31, 0x12A7D4u);
    ctx->pc = 0x12A7D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131B60_0x131b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7D4u; }
    }
    if (ctx->pc != 0x12A7D4u) { return; }
    ctx->pc = 0x12A7D4u;
label_12a7d4:
    // 0x12a7d4: 0x8e040014
    ctx->pc = 0x12a7d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_12a7d8:
    // 0x12a7d8: 0x8c830000
    ctx->pc = 0x12a7d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a7dc:
    // 0x12a7dc: 0x8c620014
    ctx->pc = 0x12a7dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_12a7e0:
    // 0x12a7e0: 0x40f809
label_12a7e4:
    if (ctx->pc == 0x12A7E4u) {
        ctx->pc = 0x12A7E8u;
        goto label_12a7e8;
    }
    ctx->pc = 0x12A7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A7E8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A780u: goto label_12a780;
            case 0x12A784u: goto label_12a784;
            case 0x12A788u: goto label_12a788;
            case 0x12A78Cu: goto label_12a78c;
            case 0x12A790u: goto label_12a790;
            case 0x12A794u: goto label_12a794;
            case 0x12A798u: goto label_12a798;
            case 0x12A79Cu: goto label_12a79c;
            case 0x12A7A0u: goto label_12a7a0;
            case 0x12A7A4u: goto label_12a7a4;
            case 0x12A7A8u: goto label_12a7a8;
            case 0x12A7ACu: goto label_12a7ac;
            case 0x12A7B0u: goto label_12a7b0;
            case 0x12A7B4u: goto label_12a7b4;
            case 0x12A7B8u: goto label_12a7b8;
            case 0x12A7BCu: goto label_12a7bc;
            case 0x12A7C0u: goto label_12a7c0;
            case 0x12A7C4u: goto label_12a7c4;
            case 0x12A7C8u: goto label_12a7c8;
            case 0x12A7CCu: goto label_12a7cc;
            case 0x12A7D0u: goto label_12a7d0;
            case 0x12A7D4u: goto label_12a7d4;
            case 0x12A7D8u: goto label_12a7d8;
            case 0x12A7DCu: goto label_12a7dc;
            case 0x12A7E0u: goto label_12a7e0;
            case 0x12A7E4u: goto label_12a7e4;
            case 0x12A7E8u: goto label_12a7e8;
            case 0x12A7ECu: goto label_12a7ec;
            case 0x12A7F0u: goto label_12a7f0;
            case 0x12A7F4u: goto label_12a7f4;
            case 0x12A7F8u: goto label_12a7f8;
            case 0x12A7FCu: goto label_12a7fc;
            case 0x12A800u: goto label_12a800;
            case 0x12A804u: goto label_12a804;
            case 0x12A808u: goto label_12a808;
            case 0x12A80Cu: goto label_12a80c;
            case 0x12A810u: goto label_12a810;
            case 0x12A814u: goto label_12a814;
            case 0x12A818u: goto label_12a818;
            case 0x12A81Cu: goto label_12a81c;
            case 0x12A820u: goto label_12a820;
            case 0x12A824u: goto label_12a824;
            case 0x12A828u: goto label_12a828;
            case 0x12A82Cu: goto label_12a82c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A7E8u; }
            if (ctx->pc != 0x12A7E8u) { return; }
        }
    }
    ctx->pc = 0x12A7E8u;
label_12a7e8:
    // 0x12a7e8: 0x24030004
    ctx->pc = 0x12a7e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_12a7ec:
    // 0x12a7ec: 0x8605003e
    ctx->pc = 0x12a7ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_12a7f0:
    // 0x12a7f0: 0x220202d
    ctx->pc = 0x12a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a7f4:
    // 0x12a7f4: 0xa2030002
    ctx->pc = 0x12a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_12a7f8:
    // 0x12a7f8: 0xc04f4d6
label_12a7fc:
    if (ctx->pc == 0x12A7FCu) {
        ctx->pc = 0x12A7FCu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
        ctx->pc = 0x12A800u;
        goto label_12a800;
    }
    ctx->pc = 0x12A7F8u;
    SET_GPR_U32(ctx, 31, 0x12A800u);
    ctx->pc = 0x12A7FCu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    ctx->pc = 0x13D358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D358_0x13d358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A800u; }
    }
    if (ctx->pc != 0x12A800u) { return; }
    ctx->pc = 0x12A800u;
label_12a800:
    // 0x12a800: 0xc04993e
label_12a804:
    if (ctx->pc == 0x12A804u) {
        ctx->pc = 0x12A808u;
        goto label_12a808;
    }
    ctx->pc = 0x12A800u;
    SET_GPR_U32(ctx, 31, 0x12A808u);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A808u; }
    }
    if (ctx->pc != 0x12A808u) { return; }
    ctx->pc = 0x12A808u;
label_12a808:
    // 0x12a808: 0xc04f3c4
label_12a80c:
    if (ctx->pc == 0x12A80Cu) {
        ctx->pc = 0x12A80Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A810u;
        goto label_12a810;
    }
    ctx->pc = 0x12A808u;
    SET_GPR_U32(ctx, 31, 0x12A810u);
    ctx->pc = 0x12A80Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF10_0x13cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A810u; }
    }
    if (ctx->pc != 0x12A810u) { return; }
    ctx->pc = 0x12A810u;
label_12a810:
    // 0x12a810: 0x24020001
    ctx->pc = 0x12a810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12a814:
    // 0x12a814: 0xa2020098
    ctx->pc = 0x12a814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 2));
label_12a818:
    // 0x12a818: 0xdfb10008
    ctx->pc = 0x12a818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12a81c:
    // 0x12a81c: 0xdfb00000
    ctx->pc = 0x12a81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12a820:
    // 0x12a820: 0xdfbf0010
    ctx->pc = 0x12a820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12a824:
    // 0x12a824: 0x3e00008
label_12a828:
    if (ctx->pc == 0x12A828u) {
        ctx->pc = 0x12A828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12A82Cu;
        goto label_12a82c;
    }
    ctx->pc = 0x12A824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A780u: goto label_12a780;
            case 0x12A784u: goto label_12a784;
            case 0x12A788u: goto label_12a788;
            case 0x12A78Cu: goto label_12a78c;
            case 0x12A790u: goto label_12a790;
            case 0x12A794u: goto label_12a794;
            case 0x12A798u: goto label_12a798;
            case 0x12A79Cu: goto label_12a79c;
            case 0x12A7A0u: goto label_12a7a0;
            case 0x12A7A4u: goto label_12a7a4;
            case 0x12A7A8u: goto label_12a7a8;
            case 0x12A7ACu: goto label_12a7ac;
            case 0x12A7B0u: goto label_12a7b0;
            case 0x12A7B4u: goto label_12a7b4;
            case 0x12A7B8u: goto label_12a7b8;
            case 0x12A7BCu: goto label_12a7bc;
            case 0x12A7C0u: goto label_12a7c0;
            case 0x12A7C4u: goto label_12a7c4;
            case 0x12A7C8u: goto label_12a7c8;
            case 0x12A7CCu: goto label_12a7cc;
            case 0x12A7D0u: goto label_12a7d0;
            case 0x12A7D4u: goto label_12a7d4;
            case 0x12A7D8u: goto label_12a7d8;
            case 0x12A7DCu: goto label_12a7dc;
            case 0x12A7E0u: goto label_12a7e0;
            case 0x12A7E4u: goto label_12a7e4;
            case 0x12A7E8u: goto label_12a7e8;
            case 0x12A7ECu: goto label_12a7ec;
            case 0x12A7F0u: goto label_12a7f0;
            case 0x12A7F4u: goto label_12a7f4;
            case 0x12A7F8u: goto label_12a7f8;
            case 0x12A7FCu: goto label_12a7fc;
            case 0x12A800u: goto label_12a800;
            case 0x12A804u: goto label_12a804;
            case 0x12A808u: goto label_12a808;
            case 0x12A80Cu: goto label_12a80c;
            case 0x12A810u: goto label_12a810;
            case 0x12A814u: goto label_12a814;
            case 0x12A818u: goto label_12a818;
            case 0x12A81Cu: goto label_12a81c;
            case 0x12A820u: goto label_12a820;
            case 0x12A824u: goto label_12a824;
            case 0x12A828u: goto label_12a828;
            case 0x12A82Cu: goto label_12a82c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A82Cu;
label_12a82c:
    // 0x12a82c: 0x0
    ctx->pc = 0x12a82cu;
    // NOP
}
