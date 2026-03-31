#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135078
// Address: 0x135078 - 0x135200
void sub_00135078_0x135078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135078u;

label_135078:
    // 0x135078: 0x27bdffc0
    ctx->pc = 0x135078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_13507c:
    // 0x13507c: 0xffb00020
    ctx->pc = 0x13507cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_135080:
    // 0x135080: 0x80802d
    ctx->pc = 0x135080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135084:
    // 0x135084: 0xffb10028
    ctx->pc = 0x135084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_135088:
    // 0x135088: 0x24110001
    ctx->pc = 0x135088u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_13508c:
    // 0x13508c: 0xffbf0030
    ctx->pc = 0x13508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_135090:
    // 0x135090: 0x8e03000c
    ctx->pc = 0x135090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_135094:
    // 0x135094: 0x14710004
label_135098:
    if (ctx->pc == 0x135098u) {
        ctx->pc = 0x135098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x13509Cu;
        goto label_13509c;
    }
    ctx->pc = 0x135094u;
    {
        const bool branch_taken_0x135094 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x135098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x135094) {
            ctx->pc = 0x1350A8u;
            goto label_1350a8;
        }
    }
    ctx->pc = 0x13509Cu;
label_13509c:
    // 0x13509c: 0x24030002
    ctx->pc = 0x13509cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1350a0:
    // 0x1350a0: 0xae02000c
    ctx->pc = 0x1350a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1350a4:
    // 0x1350a4: 0x24020002
    ctx->pc = 0x1350a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1350a8:
    // 0x1350a8: 0x5462002c
label_1350ac:
    if (ctx->pc == 0x1350ACu) {
        ctx->pc = 0x1350ACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1350B0u;
        goto label_1350b0;
    }
    ctx->pc = 0x1350A8u;
    {
        const bool branch_taken_0x1350a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1350a8) {
            ctx->pc = 0x1350ACu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x13515Cu;
            goto label_13515c;
        }
    }
    ctx->pc = 0x1350B0u;
label_1350b0:
    // 0x1350b0: 0x8e020014
    ctx->pc = 0x1350b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1350b4:
    // 0x1350b4: 0x5451000e
label_1350b8:
    if (ctx->pc == 0x1350B8u) {
        ctx->pc = 0x1350B8u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->pc = 0x1350BCu;
        goto label_1350bc;
    }
    ctx->pc = 0x1350B4u;
    {
        const bool branch_taken_0x1350b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x1350b4) {
            ctx->pc = 0x1350B8u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->pc = 0x1350F0u;
            goto label_1350f0;
        }
    }
    ctx->pc = 0x1350BCu;
label_1350bc:
    // 0x1350bc: 0x8e040018
    ctx->pc = 0x1350bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1350c0:
    // 0x1350c0: 0x26070028
    ctx->pc = 0x1350c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 40));
label_1350c4:
    // 0x1350c4: 0x8e05001c
    ctx->pc = 0x1350c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1350c8:
    // 0x1350c8: 0x260a0034
    ctx->pc = 0x1350c8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 52));
label_1350cc:
    // 0x1350cc: 0x8e060020
    ctx->pc = 0x1350ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1350d0:
    // 0x1350d0: 0x86080030
    ctx->pc = 0x1350d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_1350d4:
    // 0x1350d4: 0x86090032
    ctx->pc = 0x1350d4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_1350d8:
    // 0x1350d8: 0x860b0036
    ctx->pc = 0x1350d8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1350dc:
    // 0x1350dc: 0x86020038
    ctx->pc = 0x1350dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_1350e0:
    // 0x1350e0: 0xc049db6
label_1350e4:
    if (ctx->pc == 0x1350E4u) {
        ctx->pc = 0x1350E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1350E8u;
        goto label_1350e8;
    }
    ctx->pc = 0x1350E0u;
    SET_GPR_U32(ctx, 31, 0x1350E8u);
    ctx->pc = 0x1350E4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1276D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D8_0x1276d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1350E8u; }
    }
    if (ctx->pc != 0x1350E8u) { return; }
    ctx->pc = 0x1350E8u;
label_1350e8:
    // 0x1350e8: 0x10000019
label_1350ec:
    if (ctx->pc == 0x1350ECu) {
        ctx->pc = 0x1350ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1350F0u;
        goto label_1350f0;
    }
    ctx->pc = 0x1350E8u;
    {
        const bool branch_taken_0x1350e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1350ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1350e8) {
            ctx->pc = 0x135150u;
            goto label_135150;
        }
    }
    ctx->pc = 0x1350F0u;
label_1350f0:
    // 0x1350f0: 0x260c0034
    ctx->pc = 0x1350f0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 16), 52));
label_1350f4:
    // 0x1350f4: 0x8e040018
    ctx->pc = 0x1350f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1350f8:
    // 0x1350f8: 0x26070028
    ctx->pc = 0x1350f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 40));
label_1350fc:
    // 0x1350fc: 0x8e05001c
    ctx->pc = 0x1350fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_135100:
    // 0x135100: 0x2609002c
    ctx->pc = 0x135100u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 44));
label_135104:
    // 0x135104: 0x8e060020
    ctx->pc = 0x135104u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_135108:
    // 0x135108: 0x8e080024
    ctx->pc = 0x135108u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_13510c:
    // 0x13510c: 0x860a0030
    ctx->pc = 0x13510cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_135110:
    // 0x135110: 0x860b0032
    ctx->pc = 0x135110u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_135114:
    // 0x135114: 0x86020038
    ctx->pc = 0x135114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_135118:
    // 0x135118: 0xafa30008
    ctx->pc = 0x135118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_13511c:
    // 0x13511c: 0xafac0000
    ctx->pc = 0x13511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_135120:
    // 0x135120: 0xc049ff2
label_135124:
    if (ctx->pc == 0x135124u) {
        ctx->pc = 0x135124u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x135128u;
        goto label_135128;
    }
    ctx->pc = 0x135120u;
    SET_GPR_U32(ctx, 31, 0x135128u);
    ctx->pc = 0x135124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x127FC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00127FC8_0x127fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135128u; }
    }
    if (ctx->pc != 0x135128u) { return; }
    ctx->pc = 0x135128u;
label_135128:
    // 0x135128: 0x21fc2
    ctx->pc = 0x135128u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_13512c:
    // 0x13512c: 0xae020010
    ctx->pc = 0x13512cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_135130:
    // 0x135130: 0x431821
    ctx->pc = 0x135130u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_135134:
    // 0x135134: 0x31843
    ctx->pc = 0x135134u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_135138:
    // 0x135138: 0x31840
    ctx->pc = 0x135138u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_13513c:
    // 0x13513c: 0x431023
    ctx->pc = 0x13513cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_135140:
    // 0x135140: 0x14510004
label_135144:
    if (ctx->pc == 0x135144u) {
        ctx->pc = 0x135144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x135148u;
        goto label_135148;
    }
    ctx->pc = 0x135140u;
    {
        const bool branch_taken_0x135140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x135144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x135140) {
            ctx->pc = 0x135154u;
            goto label_135154;
        }
    }
    ctx->pc = 0x135148u;
label_135148:
    // 0x135148: 0xc04d41a
label_13514c:
    if (ctx->pc == 0x13514Cu) {
        ctx->pc = 0x135150u;
        goto label_135150;
    }
    ctx->pc = 0x135148u;
    SET_GPR_U32(ctx, 31, 0x135150u);
    ctx->pc = 0x135068u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135068_0x135068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135150u; }
    }
    if (ctx->pc != 0x135150u) { return; }
    ctx->pc = 0x135150u;
label_135150:
    // 0x135150: 0x24020003
    ctx->pc = 0x135150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_135154:
    // 0x135154: 0xae02000c
    ctx->pc = 0x135154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_135158:
    // 0x135158: 0xdfb00020
    ctx->pc = 0x135158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13515c:
    // 0x13515c: 0xdfb10028
    ctx->pc = 0x13515cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_135160:
    // 0x135160: 0xdfbf0030
    ctx->pc = 0x135160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_135164:
    // 0x135164: 0x3e00008
label_135168:
    if (ctx->pc == 0x135168u) {
        ctx->pc = 0x135168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x13516Cu;
        goto label_13516c;
    }
    ctx->pc = 0x135164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135078u: goto label_135078;
            case 0x13507Cu: goto label_13507c;
            case 0x135080u: goto label_135080;
            case 0x135084u: goto label_135084;
            case 0x135088u: goto label_135088;
            case 0x13508Cu: goto label_13508c;
            case 0x135090u: goto label_135090;
            case 0x135094u: goto label_135094;
            case 0x135098u: goto label_135098;
            case 0x13509Cu: goto label_13509c;
            case 0x1350A0u: goto label_1350a0;
            case 0x1350A4u: goto label_1350a4;
            case 0x1350A8u: goto label_1350a8;
            case 0x1350ACu: goto label_1350ac;
            case 0x1350B0u: goto label_1350b0;
            case 0x1350B4u: goto label_1350b4;
            case 0x1350B8u: goto label_1350b8;
            case 0x1350BCu: goto label_1350bc;
            case 0x1350C0u: goto label_1350c0;
            case 0x1350C4u: goto label_1350c4;
            case 0x1350C8u: goto label_1350c8;
            case 0x1350CCu: goto label_1350cc;
            case 0x1350D0u: goto label_1350d0;
            case 0x1350D4u: goto label_1350d4;
            case 0x1350D8u: goto label_1350d8;
            case 0x1350DCu: goto label_1350dc;
            case 0x1350E0u: goto label_1350e0;
            case 0x1350E4u: goto label_1350e4;
            case 0x1350E8u: goto label_1350e8;
            case 0x1350ECu: goto label_1350ec;
            case 0x1350F0u: goto label_1350f0;
            case 0x1350F4u: goto label_1350f4;
            case 0x1350F8u: goto label_1350f8;
            case 0x1350FCu: goto label_1350fc;
            case 0x135100u: goto label_135100;
            case 0x135104u: goto label_135104;
            case 0x135108u: goto label_135108;
            case 0x13510Cu: goto label_13510c;
            case 0x135110u: goto label_135110;
            case 0x135114u: goto label_135114;
            case 0x135118u: goto label_135118;
            case 0x13511Cu: goto label_13511c;
            case 0x135120u: goto label_135120;
            case 0x135124u: goto label_135124;
            case 0x135128u: goto label_135128;
            case 0x13512Cu: goto label_13512c;
            case 0x135130u: goto label_135130;
            case 0x135134u: goto label_135134;
            case 0x135138u: goto label_135138;
            case 0x13513Cu: goto label_13513c;
            case 0x135140u: goto label_135140;
            case 0x135144u: goto label_135144;
            case 0x135148u: goto label_135148;
            case 0x13514Cu: goto label_13514c;
            case 0x135150u: goto label_135150;
            case 0x135154u: goto label_135154;
            case 0x135158u: goto label_135158;
            case 0x13515Cu: goto label_13515c;
            case 0x135160u: goto label_135160;
            case 0x135164u: goto label_135164;
            case 0x135168u: goto label_135168;
            case 0x13516Cu: goto label_13516c;
            case 0x135170u: goto label_135170;
            case 0x135174u: goto label_135174;
            case 0x135178u: goto label_135178;
            case 0x13517Cu: goto label_13517c;
            case 0x135180u: goto label_135180;
            case 0x135184u: goto label_135184;
            case 0x135188u: goto label_135188;
            case 0x13518Cu: goto label_13518c;
            case 0x135190u: goto label_135190;
            case 0x135194u: goto label_135194;
            case 0x135198u: goto label_135198;
            case 0x13519Cu: goto label_13519c;
            case 0x1351A0u: goto label_1351a0;
            case 0x1351A4u: goto label_1351a4;
            case 0x1351A8u: goto label_1351a8;
            case 0x1351ACu: goto label_1351ac;
            case 0x1351B0u: goto label_1351b0;
            case 0x1351B4u: goto label_1351b4;
            case 0x1351B8u: goto label_1351b8;
            case 0x1351BCu: goto label_1351bc;
            case 0x1351C0u: goto label_1351c0;
            case 0x1351C4u: goto label_1351c4;
            case 0x1351C8u: goto label_1351c8;
            case 0x1351CCu: goto label_1351cc;
            case 0x1351D0u: goto label_1351d0;
            case 0x1351D4u: goto label_1351d4;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351E0u: goto label_1351e0;
            case 0x1351E4u: goto label_1351e4;
            case 0x1351E8u: goto label_1351e8;
            case 0x1351ECu: goto label_1351ec;
            case 0x1351F0u: goto label_1351f0;
            case 0x1351F4u: goto label_1351f4;
            case 0x1351F8u: goto label_1351f8;
            case 0x1351FCu: goto label_1351fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13516Cu;
label_13516c:
    // 0x13516c: 0x0
    ctx->pc = 0x13516cu;
    // NOP
label_135170:
    // 0x135170: 0x27bdffe0
    ctx->pc = 0x135170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_135174:
    // 0x135174: 0x3c020022
    ctx->pc = 0x135174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_135178:
    // 0x135178: 0xffbf0018
    ctx->pc = 0x135178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13517c:
    // 0x13517c: 0xffb00000
    ctx->pc = 0x13517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135180:
    // 0x135180: 0x2450b7b8
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294948792));
label_135184:
    // 0x135184: 0xffb10008
    ctx->pc = 0x135184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135188:
    // 0x135188: 0x2411000f
    ctx->pc = 0x135188u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
label_13518c:
    // 0x13518c: 0xffb20010
    ctx->pc = 0x13518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_135190:
    // 0x135190: 0x24120001
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_135194:
    // 0x135194: 0x0
    ctx->pc = 0x135194u;
    // NOP
label_135198:
    // 0x135198: 0x8e020000
    ctx->pc = 0x135198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13519c:
    // 0x13519c: 0x54520004
label_1351a0:
    if (ctx->pc == 0x1351A0u) {
        ctx->pc = 0x1351A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1351A4u;
        goto label_1351a4;
    }
    ctx->pc = 0x13519Cu;
    {
        const bool branch_taken_0x13519c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x13519c) {
            ctx->pc = 0x1351A0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x1351B0u;
            goto label_1351b0;
        }
    }
    ctx->pc = 0x1351A4u;
label_1351a4:
    // 0x1351a4: 0xc04d41e
label_1351a8:
    if (ctx->pc == 0x1351A8u) {
        ctx->pc = 0x1351A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1351ACu;
        goto label_1351ac;
    }
    ctx->pc = 0x1351A4u;
    SET_GPR_U32(ctx, 31, 0x1351ACu);
    ctx->pc = 0x1351A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135078u;
    goto label_135078;
    ctx->pc = 0x1351ACu;
label_1351ac:
    // 0x1351ac: 0x2631ffff
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_1351b0:
    // 0x1351b0: 0x621fff9
label_1351b4:
    if (ctx->pc == 0x1351B4u) {
        ctx->pc = 0x1351B4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x1351B8u;
        goto label_1351b8;
    }
    ctx->pc = 0x1351B0u;
    {
        const bool branch_taken_0x1351b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1351B4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 60));
        if (branch_taken_0x1351b0) {
            ctx->pc = 0x135198u;
            goto label_135198;
        }
    }
    ctx->pc = 0x1351B8u;
label_1351b8:
    // 0x1351b8: 0xdfb00000
    ctx->pc = 0x1351b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1351bc:
    // 0x1351bc: 0xdfb10008
    ctx->pc = 0x1351bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1351c0:
    // 0x1351c0: 0xdfb20010
    ctx->pc = 0x1351c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1351c4:
    // 0x1351c4: 0xdfbf0018
    ctx->pc = 0x1351c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1351c8:
    // 0x1351c8: 0x3e00008
label_1351cc:
    if (ctx->pc == 0x1351CCu) {
        ctx->pc = 0x1351CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1351D0u;
        goto label_1351d0;
    }
    ctx->pc = 0x1351C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1351CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135078u: goto label_135078;
            case 0x13507Cu: goto label_13507c;
            case 0x135080u: goto label_135080;
            case 0x135084u: goto label_135084;
            case 0x135088u: goto label_135088;
            case 0x13508Cu: goto label_13508c;
            case 0x135090u: goto label_135090;
            case 0x135094u: goto label_135094;
            case 0x135098u: goto label_135098;
            case 0x13509Cu: goto label_13509c;
            case 0x1350A0u: goto label_1350a0;
            case 0x1350A4u: goto label_1350a4;
            case 0x1350A8u: goto label_1350a8;
            case 0x1350ACu: goto label_1350ac;
            case 0x1350B0u: goto label_1350b0;
            case 0x1350B4u: goto label_1350b4;
            case 0x1350B8u: goto label_1350b8;
            case 0x1350BCu: goto label_1350bc;
            case 0x1350C0u: goto label_1350c0;
            case 0x1350C4u: goto label_1350c4;
            case 0x1350C8u: goto label_1350c8;
            case 0x1350CCu: goto label_1350cc;
            case 0x1350D0u: goto label_1350d0;
            case 0x1350D4u: goto label_1350d4;
            case 0x1350D8u: goto label_1350d8;
            case 0x1350DCu: goto label_1350dc;
            case 0x1350E0u: goto label_1350e0;
            case 0x1350E4u: goto label_1350e4;
            case 0x1350E8u: goto label_1350e8;
            case 0x1350ECu: goto label_1350ec;
            case 0x1350F0u: goto label_1350f0;
            case 0x1350F4u: goto label_1350f4;
            case 0x1350F8u: goto label_1350f8;
            case 0x1350FCu: goto label_1350fc;
            case 0x135100u: goto label_135100;
            case 0x135104u: goto label_135104;
            case 0x135108u: goto label_135108;
            case 0x13510Cu: goto label_13510c;
            case 0x135110u: goto label_135110;
            case 0x135114u: goto label_135114;
            case 0x135118u: goto label_135118;
            case 0x13511Cu: goto label_13511c;
            case 0x135120u: goto label_135120;
            case 0x135124u: goto label_135124;
            case 0x135128u: goto label_135128;
            case 0x13512Cu: goto label_13512c;
            case 0x135130u: goto label_135130;
            case 0x135134u: goto label_135134;
            case 0x135138u: goto label_135138;
            case 0x13513Cu: goto label_13513c;
            case 0x135140u: goto label_135140;
            case 0x135144u: goto label_135144;
            case 0x135148u: goto label_135148;
            case 0x13514Cu: goto label_13514c;
            case 0x135150u: goto label_135150;
            case 0x135154u: goto label_135154;
            case 0x135158u: goto label_135158;
            case 0x13515Cu: goto label_13515c;
            case 0x135160u: goto label_135160;
            case 0x135164u: goto label_135164;
            case 0x135168u: goto label_135168;
            case 0x13516Cu: goto label_13516c;
            case 0x135170u: goto label_135170;
            case 0x135174u: goto label_135174;
            case 0x135178u: goto label_135178;
            case 0x13517Cu: goto label_13517c;
            case 0x135180u: goto label_135180;
            case 0x135184u: goto label_135184;
            case 0x135188u: goto label_135188;
            case 0x13518Cu: goto label_13518c;
            case 0x135190u: goto label_135190;
            case 0x135194u: goto label_135194;
            case 0x135198u: goto label_135198;
            case 0x13519Cu: goto label_13519c;
            case 0x1351A0u: goto label_1351a0;
            case 0x1351A4u: goto label_1351a4;
            case 0x1351A8u: goto label_1351a8;
            case 0x1351ACu: goto label_1351ac;
            case 0x1351B0u: goto label_1351b0;
            case 0x1351B4u: goto label_1351b4;
            case 0x1351B8u: goto label_1351b8;
            case 0x1351BCu: goto label_1351bc;
            case 0x1351C0u: goto label_1351c0;
            case 0x1351C4u: goto label_1351c4;
            case 0x1351C8u: goto label_1351c8;
            case 0x1351CCu: goto label_1351cc;
            case 0x1351D0u: goto label_1351d0;
            case 0x1351D4u: goto label_1351d4;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351E0u: goto label_1351e0;
            case 0x1351E4u: goto label_1351e4;
            case 0x1351E8u: goto label_1351e8;
            case 0x1351ECu: goto label_1351ec;
            case 0x1351F0u: goto label_1351f0;
            case 0x1351F4u: goto label_1351f4;
            case 0x1351F8u: goto label_1351f8;
            case 0x1351FCu: goto label_1351fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1351D0u;
label_1351d0:
    // 0x1351d0: 0x3c020022
    ctx->pc = 0x1351d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1351d4:
    // 0x1351d4: 0x27bdfff0
    ctx->pc = 0x1351d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1351d8:
    // 0x1351d8: 0x8c43bb7c
    ctx->pc = 0x1351d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949756)));
label_1351dc:
    // 0x1351dc: 0x10600004
label_1351e0:
    if (ctx->pc == 0x1351E0u) {
        ctx->pc = 0x1351E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1351E4u;
        goto label_1351e4;
    }
    ctx->pc = 0x1351DCu;
    {
        const bool branch_taken_0x1351dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1351E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1351dc) {
            ctx->pc = 0x1351F0u;
            goto label_1351f0;
        }
    }
    ctx->pc = 0x1351E4u;
label_1351e4:
    // 0x1351e4: 0x3c020022
    ctx->pc = 0x1351e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_1351e8:
    // 0x1351e8: 0x60f809
label_1351ec:
    if (ctx->pc == 0x1351ECu) {
        ctx->pc = 0x1351ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949760)));
        ctx->pc = 0x1351F0u;
        goto label_1351f0;
    }
    ctx->pc = 0x1351E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1351F0u);
        ctx->pc = 0x1351ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949760)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135078u: goto label_135078;
            case 0x13507Cu: goto label_13507c;
            case 0x135080u: goto label_135080;
            case 0x135084u: goto label_135084;
            case 0x135088u: goto label_135088;
            case 0x13508Cu: goto label_13508c;
            case 0x135090u: goto label_135090;
            case 0x135094u: goto label_135094;
            case 0x135098u: goto label_135098;
            case 0x13509Cu: goto label_13509c;
            case 0x1350A0u: goto label_1350a0;
            case 0x1350A4u: goto label_1350a4;
            case 0x1350A8u: goto label_1350a8;
            case 0x1350ACu: goto label_1350ac;
            case 0x1350B0u: goto label_1350b0;
            case 0x1350B4u: goto label_1350b4;
            case 0x1350B8u: goto label_1350b8;
            case 0x1350BCu: goto label_1350bc;
            case 0x1350C0u: goto label_1350c0;
            case 0x1350C4u: goto label_1350c4;
            case 0x1350C8u: goto label_1350c8;
            case 0x1350CCu: goto label_1350cc;
            case 0x1350D0u: goto label_1350d0;
            case 0x1350D4u: goto label_1350d4;
            case 0x1350D8u: goto label_1350d8;
            case 0x1350DCu: goto label_1350dc;
            case 0x1350E0u: goto label_1350e0;
            case 0x1350E4u: goto label_1350e4;
            case 0x1350E8u: goto label_1350e8;
            case 0x1350ECu: goto label_1350ec;
            case 0x1350F0u: goto label_1350f0;
            case 0x1350F4u: goto label_1350f4;
            case 0x1350F8u: goto label_1350f8;
            case 0x1350FCu: goto label_1350fc;
            case 0x135100u: goto label_135100;
            case 0x135104u: goto label_135104;
            case 0x135108u: goto label_135108;
            case 0x13510Cu: goto label_13510c;
            case 0x135110u: goto label_135110;
            case 0x135114u: goto label_135114;
            case 0x135118u: goto label_135118;
            case 0x13511Cu: goto label_13511c;
            case 0x135120u: goto label_135120;
            case 0x135124u: goto label_135124;
            case 0x135128u: goto label_135128;
            case 0x13512Cu: goto label_13512c;
            case 0x135130u: goto label_135130;
            case 0x135134u: goto label_135134;
            case 0x135138u: goto label_135138;
            case 0x13513Cu: goto label_13513c;
            case 0x135140u: goto label_135140;
            case 0x135144u: goto label_135144;
            case 0x135148u: goto label_135148;
            case 0x13514Cu: goto label_13514c;
            case 0x135150u: goto label_135150;
            case 0x135154u: goto label_135154;
            case 0x135158u: goto label_135158;
            case 0x13515Cu: goto label_13515c;
            case 0x135160u: goto label_135160;
            case 0x135164u: goto label_135164;
            case 0x135168u: goto label_135168;
            case 0x13516Cu: goto label_13516c;
            case 0x135170u: goto label_135170;
            case 0x135174u: goto label_135174;
            case 0x135178u: goto label_135178;
            case 0x13517Cu: goto label_13517c;
            case 0x135180u: goto label_135180;
            case 0x135184u: goto label_135184;
            case 0x135188u: goto label_135188;
            case 0x13518Cu: goto label_13518c;
            case 0x135190u: goto label_135190;
            case 0x135194u: goto label_135194;
            case 0x135198u: goto label_135198;
            case 0x13519Cu: goto label_13519c;
            case 0x1351A0u: goto label_1351a0;
            case 0x1351A4u: goto label_1351a4;
            case 0x1351A8u: goto label_1351a8;
            case 0x1351ACu: goto label_1351ac;
            case 0x1351B0u: goto label_1351b0;
            case 0x1351B4u: goto label_1351b4;
            case 0x1351B8u: goto label_1351b8;
            case 0x1351BCu: goto label_1351bc;
            case 0x1351C0u: goto label_1351c0;
            case 0x1351C4u: goto label_1351c4;
            case 0x1351C8u: goto label_1351c8;
            case 0x1351CCu: goto label_1351cc;
            case 0x1351D0u: goto label_1351d0;
            case 0x1351D4u: goto label_1351d4;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351E0u: goto label_1351e0;
            case 0x1351E4u: goto label_1351e4;
            case 0x1351E8u: goto label_1351e8;
            case 0x1351ECu: goto label_1351ec;
            case 0x1351F0u: goto label_1351f0;
            case 0x1351F4u: goto label_1351f4;
            case 0x1351F8u: goto label_1351f8;
            case 0x1351FCu: goto label_1351fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1351F0u; }
            if (ctx->pc != 0x1351F0u) { return; }
        }
    }
    ctx->pc = 0x1351F0u;
label_1351f0:
    // 0x1351f0: 0xdfbf0000
    ctx->pc = 0x1351f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1351f4:
    // 0x1351f4: 0x3e00008
label_1351f8:
    if (ctx->pc == 0x1351F8u) {
        ctx->pc = 0x1351F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1351FCu;
        goto label_1351fc;
    }
    ctx->pc = 0x1351F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1351F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135078u: goto label_135078;
            case 0x13507Cu: goto label_13507c;
            case 0x135080u: goto label_135080;
            case 0x135084u: goto label_135084;
            case 0x135088u: goto label_135088;
            case 0x13508Cu: goto label_13508c;
            case 0x135090u: goto label_135090;
            case 0x135094u: goto label_135094;
            case 0x135098u: goto label_135098;
            case 0x13509Cu: goto label_13509c;
            case 0x1350A0u: goto label_1350a0;
            case 0x1350A4u: goto label_1350a4;
            case 0x1350A8u: goto label_1350a8;
            case 0x1350ACu: goto label_1350ac;
            case 0x1350B0u: goto label_1350b0;
            case 0x1350B4u: goto label_1350b4;
            case 0x1350B8u: goto label_1350b8;
            case 0x1350BCu: goto label_1350bc;
            case 0x1350C0u: goto label_1350c0;
            case 0x1350C4u: goto label_1350c4;
            case 0x1350C8u: goto label_1350c8;
            case 0x1350CCu: goto label_1350cc;
            case 0x1350D0u: goto label_1350d0;
            case 0x1350D4u: goto label_1350d4;
            case 0x1350D8u: goto label_1350d8;
            case 0x1350DCu: goto label_1350dc;
            case 0x1350E0u: goto label_1350e0;
            case 0x1350E4u: goto label_1350e4;
            case 0x1350E8u: goto label_1350e8;
            case 0x1350ECu: goto label_1350ec;
            case 0x1350F0u: goto label_1350f0;
            case 0x1350F4u: goto label_1350f4;
            case 0x1350F8u: goto label_1350f8;
            case 0x1350FCu: goto label_1350fc;
            case 0x135100u: goto label_135100;
            case 0x135104u: goto label_135104;
            case 0x135108u: goto label_135108;
            case 0x13510Cu: goto label_13510c;
            case 0x135110u: goto label_135110;
            case 0x135114u: goto label_135114;
            case 0x135118u: goto label_135118;
            case 0x13511Cu: goto label_13511c;
            case 0x135120u: goto label_135120;
            case 0x135124u: goto label_135124;
            case 0x135128u: goto label_135128;
            case 0x13512Cu: goto label_13512c;
            case 0x135130u: goto label_135130;
            case 0x135134u: goto label_135134;
            case 0x135138u: goto label_135138;
            case 0x13513Cu: goto label_13513c;
            case 0x135140u: goto label_135140;
            case 0x135144u: goto label_135144;
            case 0x135148u: goto label_135148;
            case 0x13514Cu: goto label_13514c;
            case 0x135150u: goto label_135150;
            case 0x135154u: goto label_135154;
            case 0x135158u: goto label_135158;
            case 0x13515Cu: goto label_13515c;
            case 0x135160u: goto label_135160;
            case 0x135164u: goto label_135164;
            case 0x135168u: goto label_135168;
            case 0x13516Cu: goto label_13516c;
            case 0x135170u: goto label_135170;
            case 0x135174u: goto label_135174;
            case 0x135178u: goto label_135178;
            case 0x13517Cu: goto label_13517c;
            case 0x135180u: goto label_135180;
            case 0x135184u: goto label_135184;
            case 0x135188u: goto label_135188;
            case 0x13518Cu: goto label_13518c;
            case 0x135190u: goto label_135190;
            case 0x135194u: goto label_135194;
            case 0x135198u: goto label_135198;
            case 0x13519Cu: goto label_13519c;
            case 0x1351A0u: goto label_1351a0;
            case 0x1351A4u: goto label_1351a4;
            case 0x1351A8u: goto label_1351a8;
            case 0x1351ACu: goto label_1351ac;
            case 0x1351B0u: goto label_1351b0;
            case 0x1351B4u: goto label_1351b4;
            case 0x1351B8u: goto label_1351b8;
            case 0x1351BCu: goto label_1351bc;
            case 0x1351C0u: goto label_1351c0;
            case 0x1351C4u: goto label_1351c4;
            case 0x1351C8u: goto label_1351c8;
            case 0x1351CCu: goto label_1351cc;
            case 0x1351D0u: goto label_1351d0;
            case 0x1351D4u: goto label_1351d4;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351E0u: goto label_1351e0;
            case 0x1351E4u: goto label_1351e4;
            case 0x1351E8u: goto label_1351e8;
            case 0x1351ECu: goto label_1351ec;
            case 0x1351F0u: goto label_1351f0;
            case 0x1351F4u: goto label_1351f4;
            case 0x1351F8u: goto label_1351f8;
            case 0x1351FCu: goto label_1351fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1351FCu;
label_1351fc:
    // 0x1351fc: 0x0
    ctx->pc = 0x1351fcu;
    // NOP
}
