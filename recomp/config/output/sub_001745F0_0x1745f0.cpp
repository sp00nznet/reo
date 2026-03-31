#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001745F0
// Address: 0x1745f0 - 0x174830
void sub_001745F0_0x1745f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1745f0u;

    // 0x1745f0: 0x27bdffd0
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1745f4: 0xffb00000
    ctx->pc = 0x1745f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1745f8: 0x80802d
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745fc: 0xffb10008
    ctx->pc = 0x1745fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174600: 0x261108a0
    ctx->pc = 0x174600u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2208));
    // 0x174604: 0xffb20010
    ctx->pc = 0x174604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174608: 0x26120cfc
    ctx->pc = 0x174608u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3324));
    // 0x17460c: 0xffb30018
    ctx->pc = 0x17460cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x174610: 0x26130ac4
    ctx->pc = 0x174610u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 2756));
    // 0x174614: 0xffbf0020
    ctx->pc = 0x174614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174618: 0x2604000c
    ctx->pc = 0x174618u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x17461c: 0xae000000
    ctx->pc = 0x17461cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x174620: 0xae000004
    ctx->pc = 0x174620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x174624: 0xc05a3d8
    ctx->pc = 0x174624u;
    SET_GPR_U32(ctx, 31, 0x17462Cu);
    ctx->pc = 0x174628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x168F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F60_0x168f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17462Cu; }
    }
    if (ctx->pc != 0x17462Cu) { return; }
    ctx->pc = 0x17462Cu;
    // 0x17462c: 0xae200000
    ctx->pc = 0x17462cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x174630: 0xae200020
    ctx->pc = 0x174630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x174634: 0x3c057fff
    ctx->pc = 0x174634u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x174638: 0xae200004
    ctx->pc = 0x174638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x17463c: 0x26040ad0
    ctx->pc = 0x17463cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2768));
    // 0x174640: 0xae200008
    ctx->pc = 0x174640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x174644: 0x34a5ffff
    ctx->pc = 0x174644u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x174648: 0xae20000c
    ctx->pc = 0x174648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x17464c: 0xae200010
    ctx->pc = 0x17464cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x174650: 0xae200014
    ctx->pc = 0x174650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x174654: 0xae200018
    ctx->pc = 0x174654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x174658: 0xae20001c
    ctx->pc = 0x174658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x17465c: 0xae600008
    ctx->pc = 0x17465cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x174660: 0xae600000
    ctx->pc = 0x174660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x174664: 0xc05d714
    ctx->pc = 0x174664u;
    SET_GPR_U32(ctx, 31, 0x17466Cu);
    ctx->pc = 0x174668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x175C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C50_0x175c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17466Cu; }
    }
    if (ctx->pc != 0x17466Cu) { return; }
    ctx->pc = 0x17466Cu;
    // 0x17466c: 0xae400000
    ctx->pc = 0x17466cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x174670: 0x24020001
    ctx->pc = 0x174670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174674: 0xae400004
    ctx->pc = 0x174674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x174678: 0xae420008
    ctx->pc = 0x174678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x17467c: 0xae40000c
    ctx->pc = 0x17467cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x174680: 0xae400010
    ctx->pc = 0x174680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x174684: 0xae400014
    ctx->pc = 0x174684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x174688: 0xdfb00000
    ctx->pc = 0x174688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17468c: 0xdfb10008
    ctx->pc = 0x17468cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174690: 0xdfb20010
    ctx->pc = 0x174690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174694: 0xdfb30018
    ctx->pc = 0x174694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174698: 0xdfbf0020
    ctx->pc = 0x174698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17469c: 0x3e00008
    ctx->pc = 0x17469Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1746E8u: goto label_1746e8;
            case 0x174740u: goto label_174740;
            case 0x1747A0u: goto label_1747a0;
            case 0x174808u: goto label_174808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1746A4u;
    // 0x1746a4: 0x0
    ctx->pc = 0x1746a4u;
    // NOP
    // 0x1746a8: 0x27bdffe0
    ctx->pc = 0x1746a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1746ac: 0xffb00000
    ctx->pc = 0x1746acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1746b0: 0x80802d
    ctx->pc = 0x1746b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746b4: 0xffb10008
    ctx->pc = 0x1746b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1746b8: 0xffbf0010
    ctx->pc = 0x1746b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1746bc: 0xc05a78c
    ctx->pc = 0x1746BCu;
    SET_GPR_U32(ctx, 31, 0x1746C4u);
    ctx->pc = 0x1746C0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746C4u; }
    }
    if (ctx->pc != 0x1746C4u) { return; }
    ctx->pc = 0x1746C4u;
    // 0x1746c4: 0x3c05ff00
    ctx->pc = 0x1746c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1746c8: 0x10400007
    ctx->pc = 0x1746C8u;
    {
        const bool branch_taken_0x1746c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1746CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1746c8) {
            ctx->pc = 0x1746E8u;
            goto label_1746e8;
        }
    }
    ctx->pc = 0x1746D0u;
    // 0x1746d0: 0xdfb00000
    ctx->pc = 0x1746d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746d4: 0x34a50151
    ctx->pc = 0x1746d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 337));
    // 0x1746d8: 0xdfb10008
    ctx->pc = 0x1746d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1746dc: 0xdfbf0010
    ctx->pc = 0x1746dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746e0: 0x805a704
    ctx->pc = 0x1746E0u;
    ctx->pc = 0x1746E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1746E8u;
label_1746e8:
    // 0x1746e8: 0xae112ab0
    ctx->pc = 0x1746e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10928), GPR_U32(ctx, 17));
    // 0x1746ec: 0xdfb00000
    ctx->pc = 0x1746ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746f0: 0xdfb10008
    ctx->pc = 0x1746f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1746f4: 0xdfbf0010
    ctx->pc = 0x1746f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746f8: 0x3e00008
    ctx->pc = 0x1746F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1746E8u: goto label_1746e8;
            case 0x174740u: goto label_174740;
            case 0x1747A0u: goto label_1747a0;
            case 0x174808u: goto label_174808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174700u;
    // 0x174700: 0x27bdffe0
    ctx->pc = 0x174700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174704: 0xffb00000
    ctx->pc = 0x174704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174708: 0x80802d
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17470c: 0xffb10008
    ctx->pc = 0x17470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174710: 0xffbf0010
    ctx->pc = 0x174710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174714: 0xc05a78c
    ctx->pc = 0x174714u;
    SET_GPR_U32(ctx, 31, 0x17471Cu);
    ctx->pc = 0x174718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17471Cu; }
    }
    if (ctx->pc != 0x17471Cu) { return; }
    ctx->pc = 0x17471Cu;
    // 0x17471c: 0x3c05ff00
    ctx->pc = 0x17471cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174720: 0x10400007
    ctx->pc = 0x174720u;
    {
        const bool branch_taken_0x174720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174720) {
            ctx->pc = 0x174740u;
            goto label_174740;
        }
    }
    ctx->pc = 0x174728u;
    // 0x174728: 0xdfb00000
    ctx->pc = 0x174728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17472c: 0x34a50152
    ctx->pc = 0x17472cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 338));
    // 0x174730: 0xdfb10008
    ctx->pc = 0x174730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174734: 0xdfbf0010
    ctx->pc = 0x174734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174738: 0x805a704
    ctx->pc = 0x174738u;
    ctx->pc = 0x17473Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174740u;
label_174740:
    // 0x174740: 0x8e032ab0
    ctx->pc = 0x174740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x174744: 0xdfb00000
    ctx->pc = 0x174744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174748: 0xac710dac
    ctx->pc = 0x174748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3500), GPR_U32(ctx, 17));
    // 0x17474c: 0xdfbf0010
    ctx->pc = 0x17474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174750: 0xdfb10008
    ctx->pc = 0x174750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174754: 0x3e00008
    ctx->pc = 0x174754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174758u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1746E8u: goto label_1746e8;
            case 0x174740u: goto label_174740;
            case 0x1747A0u: goto label_1747a0;
            case 0x174808u: goto label_174808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17475Cu;
    // 0x17475c: 0x0
    ctx->pc = 0x17475cu;
    // NOP
    // 0x174760: 0x27bdfff0
    ctx->pc = 0x174760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174764: 0xffb00000
    ctx->pc = 0x174764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174768: 0xffbf0008
    ctx->pc = 0x174768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17476c: 0xc05a78c
    ctx->pc = 0x17476Cu;
    SET_GPR_U32(ctx, 31, 0x174774u);
    ctx->pc = 0x174770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174774u; }
    }
    if (ctx->pc != 0x174774u) { return; }
    ctx->pc = 0x174774u;
    // 0x174774: 0x3c05ff00
    ctx->pc = 0x174774u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174778: 0x200202d
    ctx->pc = 0x174778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17477c: 0x24060001
    ctx->pc = 0x17477cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174780: 0x10400007
    ctx->pc = 0x174780u;
    {
        const bool branch_taken_0x174780 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174784u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 339));
        if (branch_taken_0x174780) {
            ctx->pc = 0x1747A0u;
            goto label_1747a0;
        }
    }
    ctx->pc = 0x174788u;
    // 0x174788: 0xdfb00000
    ctx->pc = 0x174788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17478c: 0x202d
    ctx->pc = 0x17478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174790: 0xdfbf0008
    ctx->pc = 0x174790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174794: 0x805a704
    ctx->pc = 0x174794u;
    ctx->pc = 0x174798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17479Cu;
    // 0x17479c: 0x0
    ctx->pc = 0x17479cu;
    // NOP
label_1747a0:
    // 0x1747a0: 0xc05d518
    ctx->pc = 0x1747A0u;
    SET_GPR_U32(ctx, 31, 0x1747A8u);
    ctx->pc = 0x1747A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747A8u; }
    }
    if (ctx->pc != 0x1747A8u) { return; }
    ctx->pc = 0x1747A8u;
    // 0x1747a8: 0x200202d
    ctx->pc = 0x1747a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747ac: 0xdfbf0008
    ctx->pc = 0x1747acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1747b0: 0xdfb00000
    ctx->pc = 0x1747b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1747b4: 0x805c8b0
    ctx->pc = 0x1747B4u;
    ctx->pc = 0x1747B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1722C0u;
    sub_001722C0_0x1722c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1747BCu;
    // 0x1747bc: 0x0
    ctx->pc = 0x1747bcu;
    // NOP
    // 0x1747c0: 0x27bdffe0
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1747c4: 0xffb00000
    ctx->pc = 0x1747c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1747c8: 0xa0802d
    ctx->pc = 0x1747c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747cc: 0xffb10008
    ctx->pc = 0x1747ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1747d0: 0x80882d
    ctx->pc = 0x1747d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747d4: 0xffbf0010
    ctx->pc = 0x1747d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1747d8: 0xc05a78c
    ctx->pc = 0x1747D8u;
    SET_GPR_U32(ctx, 31, 0x1747E0u);
    ctx->pc = 0x1747DCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747E0u; }
    }
    if (ctx->pc != 0x1747E0u) { return; }
    ctx->pc = 0x1747E0u;
    // 0x1747e0: 0x3c05ff00
    ctx->pc = 0x1747e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1747e4: 0x10400008
    ctx->pc = 0x1747E4u;
    {
        const bool branch_taken_0x1747e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1747E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1747e4) {
            ctx->pc = 0x174808u;
            goto label_174808;
        }
    }
    ctx->pc = 0x1747ECu;
    // 0x1747ec: 0xdfb00000
    ctx->pc = 0x1747ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1747f0: 0x34a50154
    ctx->pc = 0x1747f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 340));
    // 0x1747f4: 0xdfb10008
    ctx->pc = 0x1747f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1747f8: 0xdfbf0010
    ctx->pc = 0x1747f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1747fc: 0x805a704
    ctx->pc = 0x1747FCu;
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174804u;
    // 0x174804: 0x0
    ctx->pc = 0x174804u;
    // NOP
label_174808:
    // 0x174808: 0x8e242ab0
    ctx->pc = 0x174808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x17480c: 0xc05d20c
    ctx->pc = 0x17480Cu;
    SET_GPR_U32(ctx, 31, 0x174814u);
    ctx->pc = 0x174810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174830_0x174830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174814u; }
    }
    if (ctx->pc != 0x174814u) { return; }
    ctx->pc = 0x174814u;
    // 0x174814: 0x102d
    ctx->pc = 0x174814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174818: 0xdfb00000
    ctx->pc = 0x174818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17481c: 0xdfb10008
    ctx->pc = 0x17481cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174820: 0xdfbf0010
    ctx->pc = 0x174820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174824: 0x3e00008
    ctx->pc = 0x174824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1746E8u: goto label_1746e8;
            case 0x174740u: goto label_174740;
            case 0x1747A0u: goto label_1747a0;
            case 0x174808u: goto label_174808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17482Cu;
    // 0x17482c: 0x0
    ctx->pc = 0x17482cu;
    // NOP
}
