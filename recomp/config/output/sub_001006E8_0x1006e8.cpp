#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001006E8
// Address: 0x1006e8 - 0x1007c0
void sub_001006E8_0x1006e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1006e8u;

label_1006e8:
    // 0x1006e8: 0x27bdffc0
    ctx->pc = 0x1006e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1006ec:
    // 0x1006ec: 0x3c020020
    ctx->pc = 0x1006ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
label_1006f0:
    // 0x1006f0: 0xffb20020
    ctx->pc = 0x1006f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1006f4:
    // 0x1006f4: 0xffb00000
    ctx->pc = 0x1006f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1006f8:
    // 0x1006f8: 0x80902d
    ctx->pc = 0x1006f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1006fc:
    // 0x1006fc: 0x8c437940
    ctx->pc = 0x1006fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 31040)));
label_100700:
    // 0x100700: 0xa0802d
    ctx->pc = 0x100700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_100704:
    // 0x100704: 0xffbf0030
    ctx->pc = 0x100704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_100708:
    // 0x100708: 0x4610003
label_10070c:
    if (ctx->pc == 0x10070Cu) {
        ctx->pc = 0x10070Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x100710u;
        goto label_100710;
    }
    ctx->pc = 0x100708u;
    {
        const bool branch_taken_0x100708 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10070Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x100708) {
            ctx->pc = 0x100718u;
            goto label_100718;
        }
    }
    ctx->pc = 0x100710u;
label_100710:
    // 0x100710: 0xc0401f0
label_100714:
    if (ctx->pc == 0x100714u) {
        ctx->pc = 0x100718u;
        goto label_100718;
    }
    ctx->pc = 0x100710u;
    SET_GPR_U32(ctx, 31, 0x100718u);
    ctx->pc = 0x1007C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C0_0x1007c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100718u; }
    }
    if (ctx->pc != 0x100718u) { return; }
    ctx->pc = 0x100718u;
label_100718:
    // 0x100718: 0xc047598
label_10071c:
    if (ctx->pc == 0x10071Cu) {
        ctx->pc = 0x100720u;
        goto label_100720;
    }
    ctx->pc = 0x100718u;
    SET_GPR_U32(ctx, 31, 0x100720u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100720u; }
    }
    if (ctx->pc != 0x100720u) { return; }
    ctx->pc = 0x100720u;
label_100720:
    // 0x100720: 0x3c050026
    ctx->pc = 0x100720u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_100724:
    // 0x100724: 0x3c040026
    ctx->pc = 0x100724u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
label_100728:
    // 0x100728: 0x8cb19f88
    ctx->pc = 0x100728u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 4294942600)));
label_10072c:
    // 0x10072c: 0x3c030026
    ctx->pc = 0x10072cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_100730:
    // 0x100730: 0xac909f90
    ctx->pc = 0x100730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942608), GPR_U32(ctx, 16));
label_100734:
    // 0x100734: 0xacb29f88
    ctx->pc = 0x100734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942600), GPR_U32(ctx, 18));
label_100738:
    // 0x100738: 0xac7c9f8c
    ctx->pc = 0x100738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942604), GPR_U32(ctx, 28));
label_10073c:
    // 0x10073c: 0x10400004
label_100740:
    if (ctx->pc == 0x100740u) {
        ctx->pc = 0x100740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100744u;
        goto label_100744;
    }
    ctx->pc = 0x10073Cu;
    {
        const bool branch_taken_0x10073c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x100740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10073c) {
            ctx->pc = 0x100750u;
            goto label_100750;
        }
    }
    ctx->pc = 0x100744u;
label_100744:
    // 0x100744: 0xc0475ae
label_100748:
    if (ctx->pc == 0x100748u) {
        ctx->pc = 0x10074Cu;
        goto label_10074c;
    }
    ctx->pc = 0x100744u;
    SET_GPR_U32(ctx, 31, 0x10074Cu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10074Cu; }
    }
    if (ctx->pc != 0x10074Cu) { return; }
    ctx->pc = 0x10074Cu;
label_10074c:
    // 0x10074c: 0x220102d
    ctx->pc = 0x10074cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100750:
    // 0x100750: 0xdfbf0030
    ctx->pc = 0x100750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_100754:
    // 0x100754: 0xdfb20020
    ctx->pc = 0x100754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_100758:
    // 0x100758: 0xdfb10010
    ctx->pc = 0x100758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10075c:
    // 0x10075c: 0xdfb00000
    ctx->pc = 0x10075cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100760:
    // 0x100760: 0x3e00008
label_100764:
    if (ctx->pc == 0x100764u) {
        ctx->pc = 0x100764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x100768u;
        goto label_100768;
    }
    ctx->pc = 0x100760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1006E8u: goto label_1006e8;
            case 0x1006ECu: goto label_1006ec;
            case 0x1006F0u: goto label_1006f0;
            case 0x1006F4u: goto label_1006f4;
            case 0x1006F8u: goto label_1006f8;
            case 0x1006FCu: goto label_1006fc;
            case 0x100700u: goto label_100700;
            case 0x100704u: goto label_100704;
            case 0x100708u: goto label_100708;
            case 0x10070Cu: goto label_10070c;
            case 0x100710u: goto label_100710;
            case 0x100714u: goto label_100714;
            case 0x100718u: goto label_100718;
            case 0x10071Cu: goto label_10071c;
            case 0x100720u: goto label_100720;
            case 0x100724u: goto label_100724;
            case 0x100728u: goto label_100728;
            case 0x10072Cu: goto label_10072c;
            case 0x100730u: goto label_100730;
            case 0x100734u: goto label_100734;
            case 0x100738u: goto label_100738;
            case 0x10073Cu: goto label_10073c;
            case 0x100740u: goto label_100740;
            case 0x100744u: goto label_100744;
            case 0x100748u: goto label_100748;
            case 0x10074Cu: goto label_10074c;
            case 0x100750u: goto label_100750;
            case 0x100754u: goto label_100754;
            case 0x100758u: goto label_100758;
            case 0x10075Cu: goto label_10075c;
            case 0x100760u: goto label_100760;
            case 0x100764u: goto label_100764;
            case 0x100768u: goto label_100768;
            case 0x10076Cu: goto label_10076c;
            case 0x100770u: goto label_100770;
            case 0x100774u: goto label_100774;
            case 0x100778u: goto label_100778;
            case 0x10077Cu: goto label_10077c;
            case 0x100780u: goto label_100780;
            case 0x100784u: goto label_100784;
            case 0x100788u: goto label_100788;
            case 0x10078Cu: goto label_10078c;
            case 0x100790u: goto label_100790;
            case 0x100794u: goto label_100794;
            case 0x100798u: goto label_100798;
            case 0x10079Cu: goto label_10079c;
            case 0x1007A0u: goto label_1007a0;
            case 0x1007A4u: goto label_1007a4;
            case 0x1007A8u: goto label_1007a8;
            case 0x1007ACu: goto label_1007ac;
            case 0x1007B0u: goto label_1007b0;
            case 0x1007B4u: goto label_1007b4;
            case 0x1007B8u: goto label_1007b8;
            case 0x1007BCu: goto label_1007bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100768u;
label_100768:
    // 0x100768: 0x3c020026
    ctx->pc = 0x100768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_10076c:
    // 0x10076c: 0x27bdffe0
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_100770:
    // 0x100770: 0x8c459f88
    ctx->pc = 0x100770u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294942600)));
label_100774:
    // 0x100774: 0xffbf0010
    ctx->pc = 0x100774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100778:
    // 0x100778: 0x10a0000c
label_10077c:
    if (ctx->pc == 0x10077Cu) {
        ctx->pc = 0x10077Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x100780u;
        goto label_100780;
    }
    ctx->pc = 0x100778u;
    {
        const bool branch_taken_0x100778 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10077Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x100778) {
            ctx->pc = 0x1007ACu;
            goto label_1007ac;
        }
    }
    ctx->pc = 0x100780u;
label_100780:
    // 0x100780: 0x3c020020
    ctx->pc = 0x100780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
label_100784:
    // 0x100784: 0x8c437924
    ctx->pc = 0x100784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 31012)));
label_100788:
    // 0x100788: 0x14600009
label_10078c:
    if (ctx->pc == 0x10078Cu) {
        ctx->pc = 0x10078Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x100790u;
        goto label_100790;
    }
    ctx->pc = 0x100788u;
    {
        const bool branch_taken_0x100788 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10078Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x100788) {
            ctx->pc = 0x1007B0u;
            goto label_1007b0;
        }
    }
    ctx->pc = 0x100790u;
label_100790:
    // 0x100790: 0x3c020026
    ctx->pc = 0x100790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_100794:
    // 0x100794: 0x380802d
    ctx->pc = 0x100794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_100798:
    // 0x100798: 0x8c5c9f8c
    ctx->pc = 0x100798u;
    SET_GPR_U32(ctx, 28, READ32(ADD32(GPR_U32(ctx, 2), 4294942604)));
label_10079c:
    // 0x10079c: 0x3c030026
    ctx->pc = 0x10079cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_1007a0:
    // 0x1007a0: 0xa0f809
label_1007a4:
    if (ctx->pc == 0x1007A4u) {
        ctx->pc = 0x1007A4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294942608)));
        ctx->pc = 0x1007A8u;
        goto label_1007a8;
    }
    ctx->pc = 0x1007A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1007A8u);
        ctx->pc = 0x1007A4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294942608)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1006E8u: goto label_1006e8;
            case 0x1006ECu: goto label_1006ec;
            case 0x1006F0u: goto label_1006f0;
            case 0x1006F4u: goto label_1006f4;
            case 0x1006F8u: goto label_1006f8;
            case 0x1006FCu: goto label_1006fc;
            case 0x100700u: goto label_100700;
            case 0x100704u: goto label_100704;
            case 0x100708u: goto label_100708;
            case 0x10070Cu: goto label_10070c;
            case 0x100710u: goto label_100710;
            case 0x100714u: goto label_100714;
            case 0x100718u: goto label_100718;
            case 0x10071Cu: goto label_10071c;
            case 0x100720u: goto label_100720;
            case 0x100724u: goto label_100724;
            case 0x100728u: goto label_100728;
            case 0x10072Cu: goto label_10072c;
            case 0x100730u: goto label_100730;
            case 0x100734u: goto label_100734;
            case 0x100738u: goto label_100738;
            case 0x10073Cu: goto label_10073c;
            case 0x100740u: goto label_100740;
            case 0x100744u: goto label_100744;
            case 0x100748u: goto label_100748;
            case 0x10074Cu: goto label_10074c;
            case 0x100750u: goto label_100750;
            case 0x100754u: goto label_100754;
            case 0x100758u: goto label_100758;
            case 0x10075Cu: goto label_10075c;
            case 0x100760u: goto label_100760;
            case 0x100764u: goto label_100764;
            case 0x100768u: goto label_100768;
            case 0x10076Cu: goto label_10076c;
            case 0x100770u: goto label_100770;
            case 0x100774u: goto label_100774;
            case 0x100778u: goto label_100778;
            case 0x10077Cu: goto label_10077c;
            case 0x100780u: goto label_100780;
            case 0x100784u: goto label_100784;
            case 0x100788u: goto label_100788;
            case 0x10078Cu: goto label_10078c;
            case 0x100790u: goto label_100790;
            case 0x100794u: goto label_100794;
            case 0x100798u: goto label_100798;
            case 0x10079Cu: goto label_10079c;
            case 0x1007A0u: goto label_1007a0;
            case 0x1007A4u: goto label_1007a4;
            case 0x1007A8u: goto label_1007a8;
            case 0x1007ACu: goto label_1007ac;
            case 0x1007B0u: goto label_1007b0;
            case 0x1007B4u: goto label_1007b4;
            case 0x1007B8u: goto label_1007b8;
            case 0x1007BCu: goto label_1007bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1007A8u; }
            if (ctx->pc != 0x1007A8u) { return; }
        }
    }
    ctx->pc = 0x1007A8u;
label_1007a8:
    // 0x1007a8: 0x200e02d
    ctx->pc = 0x1007a8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1007ac:
    // 0x1007ac: 0xdfbf0010
    ctx->pc = 0x1007acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1007b0:
    // 0x1007b0: 0xdfb00000
    ctx->pc = 0x1007b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1007b4:
    // 0x1007b4: 0x3e00008
label_1007b8:
    if (ctx->pc == 0x1007B8u) {
        ctx->pc = 0x1007B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1007BCu;
        goto label_1007bc;
    }
    ctx->pc = 0x1007B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1007B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1006E8u: goto label_1006e8;
            case 0x1006ECu: goto label_1006ec;
            case 0x1006F0u: goto label_1006f0;
            case 0x1006F4u: goto label_1006f4;
            case 0x1006F8u: goto label_1006f8;
            case 0x1006FCu: goto label_1006fc;
            case 0x100700u: goto label_100700;
            case 0x100704u: goto label_100704;
            case 0x100708u: goto label_100708;
            case 0x10070Cu: goto label_10070c;
            case 0x100710u: goto label_100710;
            case 0x100714u: goto label_100714;
            case 0x100718u: goto label_100718;
            case 0x10071Cu: goto label_10071c;
            case 0x100720u: goto label_100720;
            case 0x100724u: goto label_100724;
            case 0x100728u: goto label_100728;
            case 0x10072Cu: goto label_10072c;
            case 0x100730u: goto label_100730;
            case 0x100734u: goto label_100734;
            case 0x100738u: goto label_100738;
            case 0x10073Cu: goto label_10073c;
            case 0x100740u: goto label_100740;
            case 0x100744u: goto label_100744;
            case 0x100748u: goto label_100748;
            case 0x10074Cu: goto label_10074c;
            case 0x100750u: goto label_100750;
            case 0x100754u: goto label_100754;
            case 0x100758u: goto label_100758;
            case 0x10075Cu: goto label_10075c;
            case 0x100760u: goto label_100760;
            case 0x100764u: goto label_100764;
            case 0x100768u: goto label_100768;
            case 0x10076Cu: goto label_10076c;
            case 0x100770u: goto label_100770;
            case 0x100774u: goto label_100774;
            case 0x100778u: goto label_100778;
            case 0x10077Cu: goto label_10077c;
            case 0x100780u: goto label_100780;
            case 0x100784u: goto label_100784;
            case 0x100788u: goto label_100788;
            case 0x10078Cu: goto label_10078c;
            case 0x100790u: goto label_100790;
            case 0x100794u: goto label_100794;
            case 0x100798u: goto label_100798;
            case 0x10079Cu: goto label_10079c;
            case 0x1007A0u: goto label_1007a0;
            case 0x1007A4u: goto label_1007a4;
            case 0x1007A8u: goto label_1007a8;
            case 0x1007ACu: goto label_1007ac;
            case 0x1007B0u: goto label_1007b0;
            case 0x1007B4u: goto label_1007b4;
            case 0x1007B8u: goto label_1007b8;
            case 0x1007BCu: goto label_1007bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1007BCu;
label_1007bc:
    // 0x1007bc: 0x0
    ctx->pc = 0x1007bcu;
    // NOP
}
