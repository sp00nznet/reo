#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163370
// Address: 0x163370 - 0x163410
void sub_00163370_0x163370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163370u;

label_163370:
    // 0x163370: 0x27bdffe0
    ctx->pc = 0x163370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_163374:
    // 0x163374: 0xffb10008
    ctx->pc = 0x163374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163378:
    // 0x163378: 0xffb00000
    ctx->pc = 0x163378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16337c:
    // 0x16337c: 0xffb20010
    ctx->pc = 0x16337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_163380:
    // 0x163380: 0xffbf0018
    ctx->pc = 0x163380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_163384:
    // 0x163384: 0xc058d10
label_163388:
    if (ctx->pc == 0x163388u) {
        ctx->pc = 0x163388u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16338Cu;
        goto label_16338c;
    }
    ctx->pc = 0x163384u;
    SET_GPR_U32(ctx, 31, 0x16338Cu);
    ctx->pc = 0x163388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16338Cu; }
    }
    if (ctx->pc != 0x16338Cu) { return; }
    ctx->pc = 0x16338Cu;
label_16338c:
    // 0x16338c: 0x24030001
    ctx->pc = 0x16338cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_163390:
    // 0x163390: 0x5443001a
label_163394:
    if (ctx->pc == 0x163394u) {
        ctx->pc = 0x163394u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163398u;
        goto label_163398;
    }
    ctx->pc = 0x163390u;
    {
        const bool branch_taken_0x163390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x163390) {
            ctx->pc = 0x163394u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1633FCu;
            goto label_1633fc;
        }
    }
    ctx->pc = 0x163398u;
label_163398:
    // 0x163398: 0xc058d08
label_16339c:
    if (ctx->pc == 0x16339Cu) {
        ctx->pc = 0x1633A0u;
        goto label_1633a0;
    }
    ctx->pc = 0x163398u;
    SET_GPR_U32(ctx, 31, 0x1633A0u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633A0u; }
    }
    if (ctx->pc != 0x1633A0u) { return; }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0x8e300014
    ctx->pc = 0x1633a0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1633a4:
    // 0x1633a4: 0x12000014
label_1633a8:
    if (ctx->pc == 0x1633A8u) {
        ctx->pc = 0x1633A8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1633ACu;
        goto label_1633ac;
    }
    ctx->pc = 0x1633A4u;
    {
        const bool branch_taken_0x1633a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1633A8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x1633a4) {
            ctx->pc = 0x1633F8u;
            goto label_1633f8;
        }
    }
    ctx->pc = 0x1633ACu;
label_1633ac:
    // 0x1633ac: 0xc058dfa
label_1633b0:
    if (ctx->pc == 0x1633B0u) {
        ctx->pc = 0x1633B4u;
        goto label_1633b4;
    }
    ctx->pc = 0x1633ACu;
    SET_GPR_U32(ctx, 31, 0x1633B4u);
    ctx->pc = 0x1637E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001637E8_0x1637e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633B4u; }
    }
    if (ctx->pc != 0x1633B4u) { return; }
    ctx->pc = 0x1633B4u;
label_1633b4:
    // 0x1633b4: 0xc058bd2
label_1633b8:
    if (ctx->pc == 0x1633B8u) {
        ctx->pc = 0x1633B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1633BCu;
        goto label_1633bc;
    }
    ctx->pc = 0x1633B4u;
    SET_GPR_U32(ctx, 31, 0x1633BCu);
    ctx->pc = 0x1633B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162F48_0x162f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633BCu; }
    }
    if (ctx->pc != 0x1633BCu) { return; }
    ctx->pc = 0x1633BCu;
label_1633bc:
    // 0x1633bc: 0xae200000
    ctx->pc = 0x1633bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1633c0:
    // 0x1633c0: 0xc058baa
label_1633c4:
    if (ctx->pc == 0x1633C4u) {
        ctx->pc = 0x1633C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1633C8u;
        goto label_1633c8;
    }
    ctx->pc = 0x1633C0u;
    SET_GPR_U32(ctx, 31, 0x1633C8u);
    ctx->pc = 0x1633C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162EA8_0x162ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633C8u; }
    }
    if (ctx->pc != 0x1633C8u) { return; }
    ctx->pc = 0x1633C8u;
label_1633c8:
    // 0x1633c8: 0x8e430000
    ctx->pc = 0x1633c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1633cc:
    // 0x1633cc: 0x8c62000c
    ctx->pc = 0x1633ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1633d0:
    // 0x1633d0: 0x40f809
label_1633d4:
    if (ctx->pc == 0x1633D4u) {
        ctx->pc = 0x1633D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1633D8u;
        goto label_1633d8;
    }
    ctx->pc = 0x1633D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1633D8u);
        ctx->pc = 0x1633D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163370u: goto label_163370;
            case 0x163374u: goto label_163374;
            case 0x163378u: goto label_163378;
            case 0x16337Cu: goto label_16337c;
            case 0x163380u: goto label_163380;
            case 0x163384u: goto label_163384;
            case 0x163388u: goto label_163388;
            case 0x16338Cu: goto label_16338c;
            case 0x163390u: goto label_163390;
            case 0x163394u: goto label_163394;
            case 0x163398u: goto label_163398;
            case 0x16339Cu: goto label_16339c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633A4u: goto label_1633a4;
            case 0x1633A8u: goto label_1633a8;
            case 0x1633ACu: goto label_1633ac;
            case 0x1633B0u: goto label_1633b0;
            case 0x1633B4u: goto label_1633b4;
            case 0x1633B8u: goto label_1633b8;
            case 0x1633BCu: goto label_1633bc;
            case 0x1633C0u: goto label_1633c0;
            case 0x1633C4u: goto label_1633c4;
            case 0x1633C8u: goto label_1633c8;
            case 0x1633CCu: goto label_1633cc;
            case 0x1633D0u: goto label_1633d0;
            case 0x1633D4u: goto label_1633d4;
            case 0x1633D8u: goto label_1633d8;
            case 0x1633DCu: goto label_1633dc;
            case 0x1633E0u: goto label_1633e0;
            case 0x1633E4u: goto label_1633e4;
            case 0x1633E8u: goto label_1633e8;
            case 0x1633ECu: goto label_1633ec;
            case 0x1633F0u: goto label_1633f0;
            case 0x1633F4u: goto label_1633f4;
            case 0x1633F8u: goto label_1633f8;
            case 0x1633FCu: goto label_1633fc;
            case 0x163400u: goto label_163400;
            case 0x163404u: goto label_163404;
            case 0x163408u: goto label_163408;
            case 0x16340Cu: goto label_16340c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1633D8u; }
            if (ctx->pc != 0x1633D8u) { return; }
        }
    }
    ctx->pc = 0x1633D8u;
label_1633d8:
    // 0x1633d8: 0xae200014
    ctx->pc = 0x1633d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1633dc:
    // 0x1633dc: 0xdfb00000
    ctx->pc = 0x1633dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1633e0:
    // 0x1633e0: 0xdfb10008
    ctx->pc = 0x1633e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1633e4:
    // 0x1633e4: 0xdfb20010
    ctx->pc = 0x1633e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1633e8:
    // 0x1633e8: 0xdfbf0018
    ctx->pc = 0x1633e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1633ec:
    // 0x1633ec: 0x8058b62
label_1633f0:
    if (ctx->pc == 0x1633F0u) {
        ctx->pc = 0x1633F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1633F4u;
        goto label_1633f4;
    }
    ctx->pc = 0x1633ECu;
    ctx->pc = 0x1633F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x162D88u;
    entry_162d88_0x162de8(rdram, ctx, runtime); return;
    ctx->pc = 0x1633F4u;
label_1633f4:
    // 0x1633f4: 0x0
    ctx->pc = 0x1633f4u;
    // NOP
label_1633f8:
    // 0x1633f8: 0xdfb00000
    ctx->pc = 0x1633f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1633fc:
    // 0x1633fc: 0xdfb10008
    ctx->pc = 0x1633fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163400:
    // 0x163400: 0xdfb20010
    ctx->pc = 0x163400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163404:
    // 0x163404: 0xdfbf0018
    ctx->pc = 0x163404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163408:
    // 0x163408: 0x3e00008
label_16340c:
    if (ctx->pc == 0x16340Cu) {
        ctx->pc = 0x16340Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x163410u;
        goto label_fallthrough_0x163408;
    }
    ctx->pc = 0x163408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16340Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163370u: goto label_163370;
            case 0x163374u: goto label_163374;
            case 0x163378u: goto label_163378;
            case 0x16337Cu: goto label_16337c;
            case 0x163380u: goto label_163380;
            case 0x163384u: goto label_163384;
            case 0x163388u: goto label_163388;
            case 0x16338Cu: goto label_16338c;
            case 0x163390u: goto label_163390;
            case 0x163394u: goto label_163394;
            case 0x163398u: goto label_163398;
            case 0x16339Cu: goto label_16339c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633A4u: goto label_1633a4;
            case 0x1633A8u: goto label_1633a8;
            case 0x1633ACu: goto label_1633ac;
            case 0x1633B0u: goto label_1633b0;
            case 0x1633B4u: goto label_1633b4;
            case 0x1633B8u: goto label_1633b8;
            case 0x1633BCu: goto label_1633bc;
            case 0x1633C0u: goto label_1633c0;
            case 0x1633C4u: goto label_1633c4;
            case 0x1633C8u: goto label_1633c8;
            case 0x1633CCu: goto label_1633cc;
            case 0x1633D0u: goto label_1633d0;
            case 0x1633D4u: goto label_1633d4;
            case 0x1633D8u: goto label_1633d8;
            case 0x1633DCu: goto label_1633dc;
            case 0x1633E0u: goto label_1633e0;
            case 0x1633E4u: goto label_1633e4;
            case 0x1633E8u: goto label_1633e8;
            case 0x1633ECu: goto label_1633ec;
            case 0x1633F0u: goto label_1633f0;
            case 0x1633F4u: goto label_1633f4;
            case 0x1633F8u: goto label_1633f8;
            case 0x1633FCu: goto label_1633fc;
            case 0x163400u: goto label_163400;
            case 0x163404u: goto label_163404;
            case 0x163408u: goto label_163408;
            case 0x16340Cu: goto label_16340c;
            default: break;
        }
        return;
    }
label_fallthrough_0x163408:
    ctx->pc = 0x163410u;
}
