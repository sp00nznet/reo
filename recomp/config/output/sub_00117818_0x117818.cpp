#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117818
// Address: 0x117818 - 0x1179e8
void sub_00117818_0x117818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117818u;

    // 0x117818: 0x27bdff90
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11781c: 0xffb10030
    ctx->pc = 0x11781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x117820: 0xffb30050
    ctx->pc = 0x117820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x117824: 0x80882d
    ctx->pc = 0x117824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117828: 0xffb20040
    ctx->pc = 0x117828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11782c: 0x3c040026
    ctx->pc = 0x11782cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x117830: 0xffb00020
    ctx->pc = 0x117830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x117834: 0xa0982d
    ctx->pc = 0x117834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117838: 0xffbf0060
    ctx->pc = 0x117838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11783c: 0xc0902d
    ctx->pc = 0x11783cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117840: 0xae200010
    ctx->pc = 0x117840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x117844: 0x2484c9c0
    ctx->pc = 0x117844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
    // 0x117848: 0xc045c92
    ctx->pc = 0x117848u;
    SET_GPR_U32(ctx, 31, 0x117850u);
    ctx->pc = 0x11784Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x117248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117248_0x117248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117850u; }
    }
    if (ctx->pc != 0x117850u) { return; }
    ctx->pc = 0x117850u;
    // 0x117850: 0x40802d
    ctx->pc = 0x117850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117854: 0x12000039
    ctx->pc = 0x117854u;
    {
        const bool branch_taken_0x117854 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x117858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x117854) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x11785Cu;
    // 0x11785c: 0x8e020018
    ctx->pc = 0x11785cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x117860: 0x32430001
    ctx->pc = 0x117860u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 1));
    // 0x117864: 0xae300000
    ctx->pc = 0x117864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x117868: 0xae220004
    ctx->pc = 0x117868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11786c: 0xae130020
    ctx->pc = 0x11786cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x117870: 0xae100014
    ctx->pc = 0x117870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x117874: 0x14600022
    ctx->pc = 0x117874u;
    {
        const bool branch_taken_0x117874 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x117878u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        if (branch_taken_0x117874) {
            ctx->pc = 0x117900u;
            goto label_117900;
        }
    }
    ctx->pc = 0x11787Cu;
    // 0x11787c: 0x24020001
    ctx->pc = 0x11787cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x117880: 0xafa00008
    ctx->pc = 0x117880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x117884: 0xafa20004
    ctx->pc = 0x117884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x117888: 0xc045188
    ctx->pc = 0x117888u;
    SET_GPR_U32(ctx, 31, 0x117890u);
    ctx->pc = 0x11788Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117890u; }
    }
    if (ctx->pc != 0x117890u) { return; }
    ctx->pc = 0x117890u;
    // 0x117890: 0x4410005
    ctx->pc = 0x117890u;
    {
        const bool branch_taken_0x117890 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117894u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x117890) {
            ctx->pc = 0x1178A8u;
            goto label_1178a8;
        }
    }
    ctx->pc = 0x117898u;
    // 0x117898: 0xc045cbc
    ctx->pc = 0x117898u;
    SET_GPR_U32(ctx, 31, 0x1178A0u);
    ctx->pc = 0x11789Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178A0u; }
    }
    if (ctx->pc != 0x1178A0u) { return; }
    ctx->pc = 0x1178A0u;
    // 0x1178a0: 0x10000026
    ctx->pc = 0x1178A0u;
    {
        const bool branch_taken_0x1178a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1178A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x1178a0) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x1178A8u;
label_1178a8:
    // 0x1178a8: 0x3c048000
    ctx->pc = 0x1178a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1178ac: 0x200282d
    ctx->pc = 0x1178acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178b0: 0x34840009
    ctx->pc = 0x1178b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 9));
    // 0x1178b4: 0x24060040
    ctx->pc = 0x1178b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1178b8: 0x382d
    ctx->pc = 0x1178b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178bc: 0x402d
    ctx->pc = 0x1178bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178c0: 0xc045b82
    ctx->pc = 0x1178C0u;
    SET_GPR_U32(ctx, 31, 0x1178C8u);
    ctx->pc = 0x1178C4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178C8u; }
    }
    if (ctx->pc != 0x1178C8u) { return; }
    ctx->pc = 0x1178C8u;
    // 0x1178c8: 0x14400007
    ctx->pc = 0x1178C8u;
    {
        const bool branch_taken_0x1178c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1178c8) {
            ctx->pc = 0x1178E8u;
            goto label_1178e8;
        }
    }
    ctx->pc = 0x1178D0u;
    // 0x1178d0: 0xc045cbc
    ctx->pc = 0x1178D0u;
    SET_GPR_U32(ctx, 31, 0x1178D8u);
    ctx->pc = 0x1178D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178D8u; }
    }
    if (ctx->pc != 0x1178D8u) { return; }
    ctx->pc = 0x1178D8u;
    // 0x1178d8: 0xc04518c
    ctx->pc = 0x1178D8u;
    SET_GPR_U32(ctx, 31, 0x1178E0u);
    ctx->pc = 0x1178DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178E0u; }
    }
    if (ctx->pc != 0x1178E0u) { return; }
    ctx->pc = 0x1178E0u;
    // 0x1178e0: 0x10000016
    ctx->pc = 0x1178E0u;
    {
        const bool branch_taken_0x1178e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1178E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1178e0) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x1178E8u;
label_1178e8:
    // 0x1178e8: 0xc045198
    ctx->pc = 0x1178E8u;
    SET_GPR_U32(ctx, 31, 0x1178F0u);
    ctx->pc = 0x1178ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178F0u; }
    }
    if (ctx->pc != 0x1178F0u) { return; }
    ctx->pc = 0x1178F0u;
    // 0x1178f0: 0xc04518c
    ctx->pc = 0x1178F0u;
    SET_GPR_U32(ctx, 31, 0x1178F8u);
    ctx->pc = 0x1178F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178F8u; }
    }
    if (ctx->pc != 0x1178F8u) { return; }
    ctx->pc = 0x1178F8u;
    // 0x1178f8: 0x10000010
    ctx->pc = 0x1178F8u;
    {
        const bool branch_taken_0x1178f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1178FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1178f8) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x117900u;
label_117900:
    // 0x117900: 0x2402ffff
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117904: 0x3c048000
    ctx->pc = 0x117904u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117908: 0xae220008
    ctx->pc = 0x117908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x11790c: 0x34840009
    ctx->pc = 0x11790cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 9));
    // 0x117910: 0x200282d
    ctx->pc = 0x117910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117914: 0x24060040
    ctx->pc = 0x117914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x117918: 0x382d
    ctx->pc = 0x117918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11791c: 0x402d
    ctx->pc = 0x11791cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117920: 0xc045b82
    ctx->pc = 0x117920u;
    SET_GPR_U32(ctx, 31, 0x117928u);
    ctx->pc = 0x117924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117928u; }
    }
    if (ctx->pc != 0x117928u) { return; }
    ctx->pc = 0x117928u;
    // 0x117928: 0x14400004
    ctx->pc = 0x117928u;
    {
        const bool branch_taken_0x117928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11792Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117928) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x117930u;
    // 0x117930: 0xc045cbc
    ctx->pc = 0x117930u;
    SET_GPR_U32(ctx, 31, 0x117938u);
    ctx->pc = 0x117934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117938u; }
    }
    if (ctx->pc != 0x117938u) { return; }
    ctx->pc = 0x117938u;
    // 0x117938: 0x2402fffe
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_11793c:
    // 0x11793c: 0xdfbf0060
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117940: 0xdfb30050
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117944: 0xdfb20040
    ctx->pc = 0x117944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117948: 0xdfb10030
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11794c: 0xdfb00020
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117950: 0x3e00008
    ctx->pc = 0x117950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117954u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1178A8u: goto label_1178a8;
            case 0x1178E8u: goto label_1178e8;
            case 0x117900u: goto label_117900;
            case 0x11793Cu: goto label_11793c;
            case 0x117974u: goto label_117974;
            case 0x117978u: goto label_117978;
            case 0x1179DCu: goto label_1179dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117958u;
    // 0x117958: 0x8c850034
    ctx->pc = 0x117958u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11795c: 0x8ca60040
    ctx->pc = 0x11795cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x117960: 0x8cc2000c
    ctx->pc = 0x117960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x117964: 0x54400003
    ctx->pc = 0x117964u;
    {
        const bool branch_taken_0x117964 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x117964) {
            ctx->pc = 0x117968u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->pc = 0x117974u;
            goto label_117974;
        }
    }
    ctx->pc = 0x11796Cu;
    // 0x11796c: 0x10000002
    ctx->pc = 0x11796Cu;
    {
        const bool branch_taken_0x11796c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117970u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x11796c) {
            ctx->pc = 0x117978u;
            goto label_117978;
        }
    }
    ctx->pc = 0x117974u;
label_117974:
    // 0x117974: 0xac45003c
    ctx->pc = 0x117974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_117978:
    // 0x117978: 0xacc50010
    ctx->pc = 0x117978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x11797c: 0x8c820014
    ctx->pc = 0x11797cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x117980: 0x8c83001c
    ctx->pc = 0x117980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x117984: 0xaca20020
    ctx->pc = 0x117984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x117988: 0xaca3001c
    ctx->pc = 0x117988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x11798c: 0x8c820020
    ctx->pc = 0x11798cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x117990: 0xaca20024
    ctx->pc = 0x117990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x117994: 0x8c830024
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x117998: 0xaca3000c
    ctx->pc = 0x117998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x11799c: 0x8c820028
    ctx->pc = 0x11799cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1179a0: 0xaca20028
    ctx->pc = 0x1179a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1179a4: 0x8c83002c
    ctx->pc = 0x1179a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1179a8: 0xaca3002c
    ctx->pc = 0x1179a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1179ac: 0x8c820030
    ctx->pc = 0x1179acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1179b0: 0xaca20030
    ctx->pc = 0x1179b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1179b4: 0x8c830010
    ctx->pc = 0x1179b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1179b8: 0xaca30034
    ctx->pc = 0x1179b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1179bc: 0x8cc40000
    ctx->pc = 0x1179bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1179c0: 0x4800006
    ctx->pc = 0x1179C0u;
    {
        const bool branch_taken_0x1179c0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1179c0) {
            ctx->pc = 0x1179DCu;
            goto label_1179dc;
        }
    }
    ctx->pc = 0x1179C8u;
    // 0x1179c8: 0x8cc20004
    ctx->pc = 0x1179c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1179cc: 0x14400003
    ctx->pc = 0x1179CCu;
    {
        const bool branch_taken_0x1179cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1179cc) {
            ctx->pc = 0x1179DCu;
            goto label_1179dc;
        }
    }
    ctx->pc = 0x1179D4u;
    // 0x1179d4: 0x8045534
    ctx->pc = 0x1179D4u;
    ctx->pc = 0x1154D0u;
    sub_001154D0_0x1154d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1179DCu;
label_1179dc:
    // 0x1179dc: 0x3e00008
    ctx->pc = 0x1179DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1178A8u: goto label_1178a8;
            case 0x1178E8u: goto label_1178e8;
            case 0x117900u: goto label_117900;
            case 0x11793Cu: goto label_11793c;
            case 0x117974u: goto label_117974;
            case 0x117978u: goto label_117978;
            case 0x1179DCu: goto label_1179dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1179E4u;
    // 0x1179e4: 0x0
    ctx->pc = 0x1179e4u;
    // NOP
}
