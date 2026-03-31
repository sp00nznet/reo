#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C04E0
// Address: 0x1c04e0 - 0x1c0710
void sub_001C04E0_0x1c04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c04e0u;

    // 0x1c04e0: 0x27bdffe0
    ctx->pc = 0x1c04e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c04e4: 0x3c060023
    ctx->pc = 0x1c04e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x1c04e8: 0xffbf0010
    ctx->pc = 0x1c04e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c04ec: 0x3c010032
    ctx->pc = 0x1c04ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c04f0: 0x7fb00000
    ctx->pc = 0x1c04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c04f4: 0x24c65160
    ctx->pc = 0x1c04f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20832));
    // 0x1c04f8: 0x8c276cf0
    ctx->pc = 0x1c04f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 27888)));
    // 0x1c04fc: 0x24030002
    ctx->pc = 0x1c04fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0500: 0x2402ffff
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0504: 0x73880
    ctx->pc = 0x1c0504u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c0508: 0x3c010032
    ctx->pc = 0x1c0508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c050c: 0xc73021
    ctx->pc = 0x1c050cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c0510: 0x8cd00000
    ctx->pc = 0x1c0510u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0514: 0xac236ce8
    ctx->pc = 0x1c0514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27880), GPR_U32(ctx, 3));
    // 0x1c0518: 0x3c010032
    ctx->pc = 0x1c0518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c051c: 0xac226c74
    ctx->pc = 0x1c051cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27764), GPR_U32(ctx, 2));
    // 0x1c0520: 0x3c010032
    ctx->pc = 0x1c0520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0524: 0xac206c50
    ctx->pc = 0x1c0524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27728), GPR_U32(ctx, 0));
    // 0x1c0528: 0x3c010032
    ctx->pc = 0x1c0528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c052c: 0xac206c54
    ctx->pc = 0x1c052cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27732), GPR_U32(ctx, 0));
    // 0x1c0530: 0x3c010032
    ctx->pc = 0x1c0530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0534: 0xac246c64
    ctx->pc = 0x1c0534u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27748), GPR_U32(ctx, 4));
    // 0x1c0538: 0x3c010032
    ctx->pc = 0x1c0538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c053c: 0x3c040032
    ctx->pc = 0x1c053cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c0540: 0xac256cec
    ctx->pc = 0x1c0540u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27884), GPR_U32(ctx, 5));
    // 0x1c0544: 0x24846c94
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27796));
    // 0x1c0548: 0x8e060010
    ctx->pc = 0x1c0548u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c054c: 0x3c050025
    ctx->pc = 0x1c054cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c0550: 0x24a50640
    ctx->pc = 0x1c0550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1600));
    // 0x1c0554: 0xc042a0c
    ctx->pc = 0x1C0554u;
    SET_GPR_U32(ctx, 31, 0x1C055Cu);
    ctx->pc = 0x1C0558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C055Cu; }
    }
    if (ctx->pc != 0x1C055Cu) { return; }
    ctx->pc = 0x1C055Cu;
    // 0x1c055c: 0x8e030018
    ctx->pc = 0x1c055cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c0560: 0x3c010032
    ctx->pc = 0x1c0560u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0564: 0xac236cd8
    ctx->pc = 0x1c0564u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27864), GPR_U32(ctx, 3));
    // 0x1c0568: 0xdfbf0010
    ctx->pc = 0x1c0568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c056c: 0x7bb00000
    ctx->pc = 0x1c056cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0570: 0x3e00008
    ctx->pc = 0x1C0570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C05B8u: goto label_1c05b8;
            case 0x1C05F0u: goto label_1c05f0;
            case 0x1C05FCu: goto label_1c05fc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C0618u: goto label_1c0618;
            case 0x1C0650u: goto label_1c0650;
            case 0x1C0670u: goto label_1c0670;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06A0u: goto label_1c06a0;
            case 0x1C06B0u: goto label_1c06b0;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C06E0u: goto label_1c06e0;
            case 0x1C06ECu: goto label_1c06ec;
            case 0x1C06F0u: goto label_1c06f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0578u;
    // 0x1c0578: 0x0
    ctx->pc = 0x1c0578u;
    // NOP
    // 0x1c057c: 0x0
    ctx->pc = 0x1c057cu;
    // NOP
    // 0x1c0580: 0x27bdffe0
    ctx->pc = 0x1c0580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0584: 0x24020002
    ctx->pc = 0x1c0584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0588: 0xffbf0010
    ctx->pc = 0x1c0588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c058c: 0x7fb00000
    ctx->pc = 0x1c058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0590: 0x8c830000
    ctx->pc = 0x1c0590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0594: 0x10620046
    ctx->pc = 0x1C0594u;
    {
        const bool branch_taken_0x1c0594 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C0598u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c0594) {
            ctx->pc = 0x1C06B0u;
            goto label_1c06b0;
        }
    }
    ctx->pc = 0x1C059Cu;
    // 0x1c059c: 0x24020001
    ctx->pc = 0x1c059cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c05a0: 0x1062001d
    ctx->pc = 0x1C05A0u;
    {
        const bool branch_taken_0x1c05a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c05a0) {
            ctx->pc = 0x1C0618u;
            goto label_1c0618;
        }
    }
    ctx->pc = 0x1C05A8u;
    // 0x1c05a8: 0x10600003
    ctx->pc = 0x1C05A8u;
    {
        const bool branch_taken_0x1c05a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c05a8) {
            ctx->pc = 0x1C05B8u;
            goto label_1c05b8;
        }
    }
    ctx->pc = 0x1C05B0u;
    // 0x1c05b0: 0x1000004f
    ctx->pc = 0x1C05B0u;
    {
        const bool branch_taken_0x1c05b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C05B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c05b0) {
            ctx->pc = 0x1C06F0u;
            goto label_1c06f0;
        }
    }
    ctx->pc = 0x1C05B8u;
label_1c05b8:
    // 0x1c05b8: 0xc06fe10
    ctx->pc = 0x1C05B8u;
    SET_GPR_U32(ctx, 31, 0x1C05C0u);
    ctx->pc = 0x1BF840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF840_0x1bf840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C05C0u; }
    }
    if (ctx->pc != 0x1C05C0u) { return; }
    ctx->pc = 0x1C05C0u;
    // 0x1c05c0: 0x24030002
    ctx->pc = 0x1c05c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c05c4: 0x10430010
    ctx->pc = 0x1C05C4u;
    {
        const bool branch_taken_0x1c05c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C05C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c05c4) {
            ctx->pc = 0x1C0608u;
            goto label_1c0608;
        }
    }
    ctx->pc = 0x1C05CCu;
    // 0x1c05cc: 0x1043000e
    ctx->pc = 0x1C05CCu;
    {
        const bool branch_taken_0x1c05cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c05cc) {
            ctx->pc = 0x1C0608u;
            goto label_1c0608;
        }
    }
    ctx->pc = 0x1C05D4u;
    // 0x1c05d4: 0x24030003
    ctx->pc = 0x1c05d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c05d8: 0x10430008
    ctx->pc = 0x1C05D8u;
    {
        const bool branch_taken_0x1c05d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c05d8) {
            ctx->pc = 0x1C05FCu;
            goto label_1c05fc;
        }
    }
    ctx->pc = 0x1C05E0u;
    // 0x1c05e0: 0x10400003
    ctx->pc = 0x1C05E0u;
    {
        const bool branch_taken_0x1c05e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c05e0) {
            ctx->pc = 0x1C05F0u;
            goto label_1c05f0;
        }
    }
    ctx->pc = 0x1C05E8u;
    // 0x1c05e8: 0x10000040
    ctx->pc = 0x1C05E8u;
    {
        const bool branch_taken_0x1c05e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c05e8) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C05F0u;
label_1c05f0:
    // 0x1c05f0: 0x2402ff01
    ctx->pc = 0x1c05f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x1c05f4: 0x1000003d
    ctx->pc = 0x1C05F4u;
    {
        const bool branch_taken_0x1c05f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C05F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c05f4) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C05FCu;
label_1c05fc:
    // 0x1c05fc: 0x2402ff02
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x1c0600: 0x1000003a
    ctx->pc = 0x1C0600u;
    {
        const bool branch_taken_0x1c0600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0604u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0600) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C0608u;
label_1c0608:
    // 0x1c0608: 0x8e020000
    ctx->pc = 0x1c0608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c060c: 0x24420001
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0610: 0x10000036
    ctx->pc = 0x1C0610u;
    {
        const bool branch_taken_0x1c0610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0614u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0610) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C0618u;
label_1c0618:
    // 0x1c0618: 0xc06fe94
    ctx->pc = 0x1C0618u;
    SET_GPR_U32(ctx, 31, 0x1C0620u);
    ctx->pc = 0x1BFA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFA50_0x1bfa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0620u; }
    }
    if (ctx->pc != 0x1C0620u) { return; }
    ctx->pc = 0x1C0620u;
    // 0x1c0620: 0x24030003
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0624: 0x1043001e
    ctx->pc = 0x1C0624u;
    {
        const bool branch_taken_0x1c0624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C0628u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c0624) {
            ctx->pc = 0x1C06A0u;
            goto label_1c06a0;
        }
    }
    ctx->pc = 0x1C062Cu;
    // 0x1c062c: 0x10430018
    ctx->pc = 0x1C062Cu;
    {
        const bool branch_taken_0x1c062c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c062c) {
            ctx->pc = 0x1C0690u;
            goto label_1c0690;
        }
    }
    ctx->pc = 0x1C0634u;
    // 0x1c0634: 0x24030001
    ctx->pc = 0x1c0634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0638: 0x10430011
    ctx->pc = 0x1C0638u;
    {
        const bool branch_taken_0x1c0638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0638) {
            ctx->pc = 0x1C0680u;
            goto label_1c0680;
        }
    }
    ctx->pc = 0x1C0640u;
    // 0x1c0640: 0x10400003
    ctx->pc = 0x1C0640u;
    {
        const bool branch_taken_0x1c0640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0644u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c0640) {
            ctx->pc = 0x1C0650u;
            goto label_1c0650;
        }
    }
    ctx->pc = 0x1C0648u;
    // 0x1c0648: 0x10000028
    ctx->pc = 0x1C0648u;
    {
        const bool branch_taken_0x1c0648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0648) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C0650u;
label_1c0650:
    // 0x1c0650: 0x8e020088
    ctx->pc = 0x1c0650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1c0654: 0x8c236ac0
    ctx->pc = 0x1c0654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x1c0658: 0x10620005
    ctx->pc = 0x1C0658u;
    {
        const bool branch_taken_0x1c0658 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c0658) {
            ctx->pc = 0x1C0670u;
            goto label_1c0670;
        }
    }
    ctx->pc = 0x1C0660u;
    // 0x1c0660: 0xae000000
    ctx->pc = 0x1c0660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c0664: 0x2402ff05
    ctx->pc = 0x1c0664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x1c0668: 0x10000020
    ctx->pc = 0x1C0668u;
    {
        const bool branch_taken_0x1c0668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C066Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0668) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C0670u;
label_1c0670:
    // 0x1c0670: 0x8e020000
    ctx->pc = 0x1c0670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0674: 0x24420001
    ctx->pc = 0x1c0674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0678: 0x1000001c
    ctx->pc = 0x1C0678u;
    {
        const bool branch_taken_0x1c0678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C067Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0678) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C0680u;
label_1c0680:
    // 0x1c0680: 0xae000000
    ctx->pc = 0x1c0680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c0684: 0x2402ff03
    ctx->pc = 0x1c0684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x1c0688: 0x10000018
    ctx->pc = 0x1C0688u;
    {
        const bool branch_taken_0x1c0688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C068Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0688) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C0690u;
label_1c0690:
    // 0x1c0690: 0xae000000
    ctx->pc = 0x1c0690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c0694: 0x2402ff01
    ctx->pc = 0x1c0694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x1c0698: 0x10000014
    ctx->pc = 0x1C0698u;
    {
        const bool branch_taken_0x1c0698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C069Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0698) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C06A0u;
label_1c06a0:
    // 0x1c06a0: 0xae000000
    ctx->pc = 0x1c06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c06a4: 0x2402ff00
    ctx->pc = 0x1c06a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c06a8: 0x10000010
    ctx->pc = 0x1C06A8u;
    {
        const bool branch_taken_0x1c06a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C06ACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c06a8) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C06B0u;
label_1c06b0:
    // 0x1c06b0: 0xc06fed0
    ctx->pc = 0x1C06B0u;
    SET_GPR_U32(ctx, 31, 0x1C06B8u);
    ctx->pc = 0x1BFB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB40_0x1bfb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C06B8u; }
    }
    if (ctx->pc != 0x1C06B8u) { return; }
    ctx->pc = 0x1C06B8u;
    // 0x1c06b8: 0x24030001
    ctx->pc = 0x1c06b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c06bc: 0x10430008
    ctx->pc = 0x1C06BCu;
    {
        const bool branch_taken_0x1c06bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c06bc) {
            ctx->pc = 0x1C06E0u;
            goto label_1c06e0;
        }
    }
    ctx->pc = 0x1C06C4u;
    // 0x1c06c4: 0x10400003
    ctx->pc = 0x1C06C4u;
    {
        const bool branch_taken_0x1c06c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c06c4) {
            ctx->pc = 0x1C06D4u;
            goto label_1c06d4;
        }
    }
    ctx->pc = 0x1C06CCu;
    // 0x1c06cc: 0x10000007
    ctx->pc = 0x1C06CCu;
    {
        const bool branch_taken_0x1c06cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c06cc) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C06D4u;
label_1c06d4:
    // 0x1c06d4: 0xae000000
    ctx->pc = 0x1c06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c06d8: 0x10000004
    ctx->pc = 0x1C06D8u;
    {
        const bool branch_taken_0x1c06d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C06DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1c06d8) {
            ctx->pc = 0x1C06ECu;
            goto label_1c06ec;
        }
    }
    ctx->pc = 0x1C06E0u;
label_1c06e0:
    // 0x1c06e0: 0xae000000
    ctx->pc = 0x1c06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c06e4: 0x2402ff00
    ctx->pc = 0x1c06e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c06e8: 0xae020024
    ctx->pc = 0x1c06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1c06ec:
    // 0x1c06ec: 0x200202d
    ctx->pc = 0x1c06ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c06f0:
    // 0x1c06f0: 0xc070108
    ctx->pc = 0x1C06F0u;
    SET_GPR_U32(ctx, 31, 0x1C06F8u);
    ctx->pc = 0x1C0420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0420_0x1c0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C06F8u; }
    }
    if (ctx->pc != 0x1C06F8u) { return; }
    ctx->pc = 0x1C06F8u;
    // 0x1c06f8: 0xdfbf0010
    ctx->pc = 0x1c06f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c06fc: 0x7bb00000
    ctx->pc = 0x1c06fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0700: 0x3e00008
    ctx->pc = 0x1C0700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C05B8u: goto label_1c05b8;
            case 0x1C05F0u: goto label_1c05f0;
            case 0x1C05FCu: goto label_1c05fc;
            case 0x1C0608u: goto label_1c0608;
            case 0x1C0618u: goto label_1c0618;
            case 0x1C0650u: goto label_1c0650;
            case 0x1C0670u: goto label_1c0670;
            case 0x1C0680u: goto label_1c0680;
            case 0x1C0690u: goto label_1c0690;
            case 0x1C06A0u: goto label_1c06a0;
            case 0x1C06B0u: goto label_1c06b0;
            case 0x1C06D4u: goto label_1c06d4;
            case 0x1C06E0u: goto label_1c06e0;
            case 0x1C06ECu: goto label_1c06ec;
            case 0x1C06F0u: goto label_1c06f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0708u;
    // 0x1c0708: 0x0
    ctx->pc = 0x1c0708u;
    // NOP
    // 0x1c070c: 0x0
    ctx->pc = 0x1c070cu;
    // NOP
}
