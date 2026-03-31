#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167FC0
// Address: 0x167fc0 - 0x1681e8
void sub_00167FC0_0x167fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167fc0u;

    // 0x167fc0: 0x27bdffc0
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167fc4: 0xffb20020
    ctx->pc = 0x167fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167fc8: 0x80902d
    ctx->pc = 0x167fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fcc: 0xffb00010
    ctx->pc = 0x167fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167fd0: 0x26500cc0
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 3264));
    // 0x167fd4: 0x3a0202d
    ctx->pc = 0x167fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fd8: 0xffb10018
    ctx->pc = 0x167fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167fdc: 0xffb30028
    ctx->pc = 0x167fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x167fe0: 0xa0982d
    ctx->pc = 0x167fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fe4: 0xffb40030
    ctx->pc = 0x167fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x167fe8: 0xffbf0038
    ctx->pc = 0x167fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x167fec: 0xc05a7b2
    ctx->pc = 0x167FECu;
    SET_GPR_U32(ctx, 31, 0x167FF4u);
    ctx->pc = 0x167FF0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FF4u; }
    }
    if (ctx->pc != 0x167FF4u) { return; }
    ctx->pc = 0x167FF4u;
    // 0x167ff4: 0x8e0301b4
    ctx->pc = 0x167ff4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x167ff8: 0x8e0201b0
    ctx->pc = 0x167ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x167ffc: 0x431023
    ctx->pc = 0x167ffcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168000: 0x1c400005
    ctx->pc = 0x168000u;
    {
        const bool branch_taken_0x168000 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x168004u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168000) {
            ctx->pc = 0x168018u;
            goto label_168018;
        }
    }
    ctx->pc = 0x168008u;
    // 0x168008: 0x2402ffff
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16800c: 0xa02d
    ctx->pc = 0x16800cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168010: 0x10000013
    ctx->pc = 0x168010u;
    {
        const bool branch_taken_0x168010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168014u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x168010) {
            ctx->pc = 0x168060u;
            goto label_168060;
        }
    }
    ctx->pc = 0x168018u;
label_168018:
    // 0x168018: 0x8e0201a8
    ctx->pc = 0x168018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x16801c: 0x24140001
    ctx->pc = 0x16801cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x168020: 0xae220000
    ctx->pc = 0x168020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x168024: 0x8e0301b4
    ctx->pc = 0x168024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x168028: 0x28650000
    ctx->pc = 0x168028u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 0));
    // 0x16802c: 0x2466001f
    ctx->pc = 0x16802cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 31));
    // 0x168030: 0x60102d
    ctx->pc = 0x168030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168034: 0xc5100b
    ctx->pc = 0x168034u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x168038: 0x21143
    ctx->pc = 0x168038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x16803c: 0x21140
    ctx->pc = 0x16803cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x168040: 0x621823
    ctx->pc = 0x168040u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168044: 0x31880
    ctx->pc = 0x168044u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x168048: 0x721821
    ctx->pc = 0x168048u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16804c: 0x8c650e78
    ctx->pc = 0x16804cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 3704)));
    // 0x168050: 0xae650000
    ctx->pc = 0x168050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x168054: 0x8e0201b4
    ctx->pc = 0x168054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x168058: 0x24420001
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16805c: 0xae0201b4
    ctx->pc = 0x16805cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_168060:
    // 0x168060: 0xc05a7b8
    ctx->pc = 0x168060u;
    SET_GPR_U32(ctx, 31, 0x168068u);
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168068u; }
    }
    if (ctx->pc != 0x168068u) { return; }
    ctx->pc = 0x168068u;
    // 0x168068: 0x280102d
    ctx->pc = 0x168068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16806c: 0xdfb00010
    ctx->pc = 0x16806cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168070: 0xdfb10018
    ctx->pc = 0x168070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168074: 0xdfb20020
    ctx->pc = 0x168074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168078: 0xdfb30028
    ctx->pc = 0x168078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16807c: 0xdfb40030
    ctx->pc = 0x16807cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168080: 0xdfbf0038
    ctx->pc = 0x168080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x168084: 0x3e00008
    ctx->pc = 0x168084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168018u: goto label_168018;
            case 0x168060u: goto label_168060;
            case 0x1680F0u: goto label_1680f0;
            case 0x168140u: goto label_168140;
            case 0x168194u: goto label_168194;
            case 0x1681B8u: goto label_1681b8;
            case 0x1681BCu: goto label_1681bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16808Cu;
    // 0x16808c: 0x0
    ctx->pc = 0x16808cu;
    // NOP
    // 0x168090: 0x27bdffa0
    ctx->pc = 0x168090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x168094: 0xffb00010
    ctx->pc = 0x168094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168098: 0x80802d
    ctx->pc = 0x168098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16809c: 0xffb30028
    ctx->pc = 0x16809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1680a0: 0xa0982d
    ctx->pc = 0x1680a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680a4: 0xffb40030
    ctx->pc = 0x1680a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1680a8: 0xc0a02d
    ctx->pc = 0x1680a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680ac: 0xffb70048
    ctx->pc = 0x1680acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1680b0: 0xffb10018
    ctx->pc = 0x1680b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1680b4: 0xffb20020
    ctx->pc = 0x1680b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1680b8: 0xffb50038
    ctx->pc = 0x1680b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1680bc: 0xffb60040
    ctx->pc = 0x1680bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1680c0: 0xffbe0050
    ctx->pc = 0x1680c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1680c4: 0xffbf0058
    ctx->pc = 0x1680c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1680c8: 0xc05a78c
    ctx->pc = 0x1680C8u;
    SET_GPR_U32(ctx, 31, 0x1680D0u);
    ctx->pc = 0x1680CCu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680D0u; }
    }
    if (ctx->pc != 0x1680D0u) { return; }
    ctx->pc = 0x1680D0u;
    // 0x1680d0: 0x10400007
    ctx->pc = 0x1680D0u;
    {
        const bool branch_taken_0x1680d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1680D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1680d0) {
            ctx->pc = 0x1680F0u;
            goto label_1680f0;
        }
    }
    ctx->pc = 0x1680D8u;
    // 0x1680d8: 0x3c05ff00
    ctx->pc = 0x1680d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1680dc: 0xc05a704
    ctx->pc = 0x1680DCu;
    SET_GPR_U32(ctx, 31, 0x1680E4u);
    ctx->pc = 0x1680E0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 354));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680E4u; }
    }
    if (ctx->pc != 0x1680E4u) { return; }
    ctx->pc = 0x1680E4u;
    // 0x1680e4: 0x10000035
    ctx->pc = 0x1680E4u;
    {
        const bool branch_taken_0x1680e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1680E8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1680e4) {
            ctx->pc = 0x1681BCu;
            goto label_1681bc;
        }
    }
    ctx->pc = 0x1680ECu;
    // 0x1680ec: 0x0
    ctx->pc = 0x1680ecu;
    // NOP
label_1680f0:
    // 0x1680f0: 0x8e160dc8
    ctx->pc = 0x1680f0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 3528)));
    // 0x1680f4: 0x26110cc0
    ctx->pc = 0x1680f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 3264));
    // 0x1680f8: 0xaee00000
    ctx->pc = 0x1680f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1680fc: 0x200202d
    ctx->pc = 0x1680fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168100: 0x260282d
    ctx->pc = 0x168100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168104: 0xc05d884
    ctx->pc = 0x168104u;
    SET_GPR_U32(ctx, 31, 0x16810Cu);
    ctx->pc = 0x168108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176210_0x176210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16810Cu; }
    }
    if (ctx->pc != 0x16810Cu) { return; }
    ctx->pc = 0x16810Cu;
    // 0x16810c: 0x8e230120
    ctx->pc = 0x16810cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x168110: 0x40f02d
    ctx->pc = 0x168110u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168114: 0x10600028
    ctx->pc = 0x168114u;
    {
        const bool branch_taken_0x168114 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x168118u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168114) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x16811Cu;
    // 0x16811c: 0x8e840000
    ctx->pc = 0x16811cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168120: 0x24030001
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x168124: 0x10830024
    ctx->pc = 0x168124u;
    {
        const bool branch_taken_0x168124 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x168128u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168124) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x16812Cu;
    // 0x16812c: 0xc05a7b2
    ctx->pc = 0x16812Cu;
    SET_GPR_U32(ctx, 31, 0x168134u);
    ctx->pc = 0x168130u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 3272));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168134u; }
    }
    if (ctx->pc != 0x168134u) { return; }
    ctx->pc = 0x168134u;
    // 0x168134: 0x8e300124
    ctx->pc = 0x168134u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x168138: 0x882d
    ctx->pc = 0x168138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16813c: 0x0
    ctx->pc = 0x16813cu;
    // NOP
label_168140:
    // 0x168140: 0x2a220020
    ctx->pc = 0x168140u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 32));
    // 0x168144: 0x10400013
    ctx->pc = 0x168144u;
    {
        const bool branch_taken_0x168144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168148u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x168144) {
            ctx->pc = 0x168194u;
            goto label_168194;
        }
    }
    ctx->pc = 0x16814Cu;
    // 0x16814c: 0x2604001f
    ctx->pc = 0x16814cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 31));
    // 0x168150: 0x2a030000
    ctx->pc = 0x168150u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 0));
    // 0x168154: 0x200102d
    ctx->pc = 0x168154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168158: 0x8e850000
    ctx->pc = 0x168158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16815c: 0x83100b
    ctx->pc = 0x16815cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x168160: 0x2c0302d
    ctx->pc = 0x168160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168164: 0x21143
    ctx->pc = 0x168164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x168168: 0x21140
    ctx->pc = 0x168168u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x16816c: 0x2021023
    ctx->pc = 0x16816cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x168170: 0x21080
    ctx->pc = 0x168170u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x168174: 0x551021
    ctx->pc = 0x168174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x168178: 0xc056ea0
    ctx->pc = 0x168178u;
    SET_GPR_U32(ctx, 31, 0x168180u);
    ctx->pc = 0x16817Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168180u; }
    }
    if (ctx->pc != 0x168180u) { return; }
    ctx->pc = 0x168180u;
    // 0x168180: 0x40902d
    ctx->pc = 0x168180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168184: 0x8e620000
    ctx->pc = 0x168184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x168188: 0x52102a
    ctx->pc = 0x168188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x16818c: 0x5440ffec
    ctx->pc = 0x16818Cu;
    {
        const bool branch_taken_0x16818c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16818c) {
            ctx->pc = 0x168190u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x168140u;
            goto label_168140;
        }
    }
    ctx->pc = 0x168194u;
label_168194:
    // 0x168194: 0xaef00000
    ctx->pc = 0x168194u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x168198: 0x3a0202d
    ctx->pc = 0x168198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16819c: 0x8e620000
    ctx->pc = 0x16819cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1681a0: 0x521023
    ctx->pc = 0x1681a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1681a4: 0x28430000
    ctx->pc = 0x1681a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x1681a8: 0x3100b
    ctx->pc = 0x1681a8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1681ac: 0xc05a7b8
    ctx->pc = 0x1681ACu;
    SET_GPR_U32(ctx, 31, 0x1681B4u);
    ctx->pc = 0x1681B0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681B4u; }
    }
    if (ctx->pc != 0x1681B4u) { return; }
    ctx->pc = 0x1681B4u;
    // 0x1681b4: 0x3c0102d
    ctx->pc = 0x1681b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1681b8:
    // 0x1681b8: 0xdfb00010
    ctx->pc = 0x1681b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1681bc:
    // 0x1681bc: 0xdfb10018
    ctx->pc = 0x1681bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1681c0: 0xdfb20020
    ctx->pc = 0x1681c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1681c4: 0xdfb30028
    ctx->pc = 0x1681c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1681c8: 0xdfb40030
    ctx->pc = 0x1681c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1681cc: 0xdfb50038
    ctx->pc = 0x1681ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1681d0: 0xdfb60040
    ctx->pc = 0x1681d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1681d4: 0xdfb70048
    ctx->pc = 0x1681d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1681d8: 0xdfbe0050
    ctx->pc = 0x1681d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1681dc: 0xdfbf0058
    ctx->pc = 0x1681dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1681e0: 0x3e00008
    ctx->pc = 0x1681E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168018u: goto label_168018;
            case 0x168060u: goto label_168060;
            case 0x1680F0u: goto label_1680f0;
            case 0x168140u: goto label_168140;
            case 0x168194u: goto label_168194;
            case 0x1681B8u: goto label_1681b8;
            case 0x1681BCu: goto label_1681bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1681E8u;
}
