#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001650A0
// Address: 0x1650a0 - 0x1652c8
void sub_001650A0_0x1650a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1650a0u;

    // 0x1650a0: 0x27bdffa0
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1650a4: 0xffb40030
    ctx->pc = 0x1650a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1650a8: 0xa0a02d
    ctx->pc = 0x1650a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650ac: 0xffb10018
    ctx->pc = 0x1650acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1650b0: 0x280882d
    ctx->pc = 0x1650b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650b4: 0x26230024
    ctx->pc = 0x1650b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 36));
    // 0x1650b8: 0xffb20020
    ctx->pc = 0x1650b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1650bc: 0x223102b
    ctx->pc = 0x1650bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1650c0: 0xffb30028
    ctx->pc = 0x1650c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1650c4: 0xffb50038
    ctx->pc = 0x1650c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1650c8: 0xa82d
    ctx->pc = 0x1650c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650cc: 0xffb60040
    ctx->pc = 0x1650ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1650d0: 0xb02d
    ctx->pc = 0x1650d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650d4: 0xffbe0050
    ctx->pc = 0x1650d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1650d8: 0x80f02d
    ctx->pc = 0x1650d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650dc: 0xffb00010
    ctx->pc = 0x1650dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1650e0: 0x2869021
    ctx->pc = 0x1650e0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1650e4: 0xffb70048
    ctx->pc = 0x1650e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1650e8: 0x982d
    ctx->pc = 0x1650e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650ec: 0x1040001c
    ctx->pc = 0x1650ECu;
    {
        const bool branch_taken_0x1650ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1650F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        if (branch_taken_0x1650ec) {
            ctx->pc = 0x165160u;
            goto label_165160;
        }
    }
    ctx->pc = 0x1650F4u;
    // 0x1650f4: 0x60b82d
    ctx->pc = 0x1650f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650f8: 0x982d
    ctx->pc = 0x1650f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650fc: 0x0
    ctx->pc = 0x1650fcu;
    // NOP
label_165100:
    // 0x165100: 0x220802d
    ctx->pc = 0x165100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165104:
    // 0x165104: 0x212102b
    ctx->pc = 0x165104u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x165108: 0x1040000f
    ctx->pc = 0x165108u;
    {
        const bool branch_taken_0x165108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x165108) {
            ctx->pc = 0x165148u;
            goto label_165148;
        }
    }
    ctx->pc = 0x165110u;
    // 0x165110: 0x82020000
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165114: 0x443fffb
    ctx->pc = 0x165114u;
    {
        const bool branch_taken_0x165114 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x165114) {
            ctx->pc = 0x165118u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18));
            ctx->pc = 0x165104u;
            goto label_165104;
        }
    }
    ctx->pc = 0x16511Cu;
    // 0x16511c: 0x200202d
    ctx->pc = 0x16511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165120: 0x24050012
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x165124: 0x3a0302d
    ctx->pc = 0x165124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165128: 0xc04cc90
    ctx->pc = 0x165128u;
    SET_GPR_U32(ctx, 31, 0x165130u);
    ctx->pc = 0x16512Cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x133240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165130u; }
    }
    if (ctx->pc != 0x165130u) { return; }
    ctx->pc = 0x165130u;
    // 0x165130: 0x10400005
    ctx->pc = 0x165130u;
    {
        const bool branch_taken_0x165130 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x165134u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        if (branch_taken_0x165130) {
            ctx->pc = 0x165148u;
            goto label_165148;
        }
    }
    ctx->pc = 0x165138u;
    // 0x165138: 0x10400003
    ctx->pc = 0x165138u;
    {
        const bool branch_taken_0x165138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x165138) {
            ctx->pc = 0x165148u;
            goto label_165148;
        }
    }
    ctx->pc = 0x165140u;
    // 0x165140: 0x200a82d
    ctx->pc = 0x165140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165144: 0x220b02d
    ctx->pc = 0x165144u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165148:
    // 0x165148: 0x12600010
    ctx->pc = 0x165148u;
    {
        const bool branch_taken_0x165148 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x16514Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165148) {
            ctx->pc = 0x16518Cu;
            goto label_16518c;
        }
    }
    ctx->pc = 0x165150u;
    // 0x165150: 0x26310002
    ctx->pc = 0x165150u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x165154: 0x237102b
    ctx->pc = 0x165154u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x165158: 0x5440ffe9
    ctx->pc = 0x165158u;
    {
        const bool branch_taken_0x165158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x165158) {
            ctx->pc = 0x16515Cu;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x165100u;
            goto label_165100;
        }
    }
    ctx->pc = 0x165160u;
label_165160:
    // 0x165160: 0x1260000a
    ctx->pc = 0x165160u;
    {
        const bool branch_taken_0x165160 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x165164u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165160) {
            ctx->pc = 0x16518Cu;
            goto label_16518c;
        }
    }
    ctx->pc = 0x165168u;
    // 0x165168: 0x56c00007
    ctx->pc = 0x165168u;
    {
        const bool branch_taken_0x165168 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x165168) {
            ctx->pc = 0x16516Cu;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x165188u;
            goto label_165188;
        }
    }
    ctx->pc = 0x165170u;
    // 0x165170: 0x3c05ff00
    ctx->pc = 0x165170u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x165174: 0x3c0202d
    ctx->pc = 0x165174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165178: 0xc05a704
    ctx->pc = 0x165178u;
    SET_GPR_U32(ctx, 31, 0x165180u);
    ctx->pc = 0x16517Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3082));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165180u; }
    }
    if (ctx->pc != 0x165180u) { return; }
    ctx->pc = 0x165180u;
    // 0x165180: 0x10000002
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x165184u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165180) {
            ctx->pc = 0x16518Cu;
            goto label_16518c;
        }
    }
    ctx->pc = 0x165188u;
label_165188:
    // 0x165188: 0x220102d
    ctx->pc = 0x165188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16518c:
    // 0x16518c: 0xdfb00010
    ctx->pc = 0x16518cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165190: 0xdfb10018
    ctx->pc = 0x165190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165194: 0xdfb20020
    ctx->pc = 0x165194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165198: 0xdfb30028
    ctx->pc = 0x165198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16519c: 0xdfb40030
    ctx->pc = 0x16519cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1651a0: 0xdfb50038
    ctx->pc = 0x1651a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1651a4: 0xdfb60040
    ctx->pc = 0x1651a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1651a8: 0xdfb70048
    ctx->pc = 0x1651a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1651ac: 0xdfbe0050
    ctx->pc = 0x1651acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1651b0: 0xdfbf0058
    ctx->pc = 0x1651b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1651b4: 0x3e00008
    ctx->pc = 0x1651B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1651B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165100u: goto label_165100;
            case 0x165104u: goto label_165104;
            case 0x165148u: goto label_165148;
            case 0x165160u: goto label_165160;
            case 0x165188u: goto label_165188;
            case 0x16518Cu: goto label_16518c;
            case 0x165218u: goto label_165218;
            case 0x165220u: goto label_165220;
            case 0x165224u: goto label_165224;
            case 0x16525Cu: goto label_16525c;
            case 0x165290u: goto label_165290;
            case 0x1652A4u: goto label_1652a4;
            case 0x1652A8u: goto label_1652a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1651BCu;
    // 0x1651bc: 0x0
    ctx->pc = 0x1651bcu;
    // NOP
    // 0x1651c0: 0x27bdffb0
    ctx->pc = 0x1651c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1651c4: 0xffb50038
    ctx->pc = 0x1651c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1651c8: 0xe0a82d
    ctx->pc = 0x1651c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651cc: 0xffb00010
    ctx->pc = 0x1651ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1651d0: 0xa0802d
    ctx->pc = 0x1651d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651d4: 0xffb20020
    ctx->pc = 0x1651d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1651d8: 0xc0902d
    ctx->pc = 0x1651d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651dc: 0xffb40030
    ctx->pc = 0x1651dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1651e0: 0x80a02d
    ctx->pc = 0x1651e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651e4: 0xffb10018
    ctx->pc = 0x1651e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1651e8: 0xffb30028
    ctx->pc = 0x1651e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1651ec: 0xffbf0040
    ctx->pc = 0x1651ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1651f0: 0xaea00000
    ctx->pc = 0x1651f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1651f4: 0xc05a660
    ctx->pc = 0x1651F4u;
    SET_GPR_U32(ctx, 31, 0x1651FCu);
    ctx->pc = 0x1651F8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 7028)));
    ctx->pc = 0x169980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169980_0x169980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651FCu; }
    }
    if (ctx->pc != 0x1651FCu) { return; }
    ctx->pc = 0x1651FCu;
    // 0x1651fc: 0x2842006c
    ctx->pc = 0x1651fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 108));
    // 0x165200: 0x14400005
    ctx->pc = 0x165200u;
    {
        const bool branch_taken_0x165200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x165204u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165200) {
            ctx->pc = 0x165218u;
            goto label_165218;
        }
    }
    ctx->pc = 0x165208u;
    // 0x165208: 0x3c020016
    ctx->pc = 0x165208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
    // 0x16520c: 0x24424fe8
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20456));
    // 0x165210: 0x10000024
    ctx->pc = 0x165210u;
    {
        const bool branch_taken_0x165210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x165214u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x165210) {
            ctx->pc = 0x1652A4u;
            goto label_1652a4;
        }
    }
    ctx->pc = 0x165218u;
label_165218:
    // 0x165218: 0x10000002
    ctx->pc = 0x165218u;
    {
        const bool branch_taken_0x165218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16521Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967278));
        if (branch_taken_0x165218) {
            ctx->pc = 0x165224u;
            goto label_165224;
        }
    }
    ctx->pc = 0x165220u;
label_165220:
    // 0x165220: 0x26310012
    ctx->pc = 0x165220u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 18));
label_165224:
    // 0x165224: 0x232102a
    ctx->pc = 0x165224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x165228: 0x5040000c
    ctx->pc = 0x165228u;
    {
        const bool branch_taken_0x165228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x165228) {
            ctx->pc = 0x16522Cu;
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
            ctx->pc = 0x16525Cu;
            goto label_16525c;
        }
    }
    ctx->pc = 0x165230u;
    // 0x165230: 0x3c050024
    ctx->pc = 0x165230u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x165234: 0x200202d
    ctx->pc = 0x165234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165238: 0x24a505e0
    ctx->pc = 0x165238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1504));
    // 0x16523c: 0xc041e86
    ctx->pc = 0x16523Cu;
    SET_GPR_U32(ctx, 31, 0x165244u);
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165244u; }
    }
    if (ctx->pc != 0x165244u) { return; }
    ctx->pc = 0x165244u;
    // 0x165244: 0x1040fff6
    ctx->pc = 0x165244u;
    {
        const bool branch_taken_0x165244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x165248u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18));
        if (branch_taken_0x165244) {
            ctx->pc = 0x165220u;
            goto label_165220;
        }
    }
    ctx->pc = 0x16524Cu;
    // 0x16524c: 0x3c020016
    ctx->pc = 0x16524cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
    // 0x165250: 0x24424fe8
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20456));
    // 0x165254: 0xae62003c
    ctx->pc = 0x165254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x165258: 0xaeb10000
    ctx->pc = 0x165258u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_16525c:
    // 0x16525c: 0x280202d
    ctx->pc = 0x16525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165260: 0x3a0282d
    ctx->pc = 0x165260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165264: 0xc0594b2
    ctx->pc = 0x165264u;
    SET_GPR_U32(ctx, 31, 0x16526Cu);
    ctx->pc = 0x165268u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1652C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001652C8_0x1652c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16526Cu; }
    }
    if (ctx->pc != 0x16526Cu) { return; }
    ctx->pc = 0x16526Cu;
    // 0x16526c: 0x1440000e
    ctx->pc = 0x16526Cu;
    {
        const bool branch_taken_0x16526c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x165270u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16526c) {
            ctx->pc = 0x1652A8u;
            goto label_1652a8;
        }
    }
    ctx->pc = 0x165274u;
    // 0x165274: 0x8fa30000
    ctx->pc = 0x165274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165278: 0x310c0
    ctx->pc = 0x165278u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x16527c: 0x431021
    ctx->pc = 0x16527cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165280: 0x21040
    ctx->pc = 0x165280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x165284: 0x222001a
    ctx->pc = 0x165284u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x165288: 0x50400001
    ctx->pc = 0x165288u;
    {
        const bool branch_taken_0x165288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x165288) {
            ctx->pc = 0x16528Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x165290u;
            goto label_165290;
        }
    }
    ctx->pc = 0x165290u;
label_165290:
    // 0x165290: 0x8e630038
    ctx->pc = 0x165290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x165294: 0x2012
    ctx->pc = 0x165294u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x165298: 0x42140
    ctx->pc = 0x165298u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x16529c: 0x641821
    ctx->pc = 0x16529cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1652a0: 0xae630038
    ctx->pc = 0x1652a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
label_1652a4:
    // 0x1652a4: 0xdfb00010
    ctx->pc = 0x1652a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1652a8:
    // 0x1652a8: 0xdfb10018
    ctx->pc = 0x1652a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1652ac: 0xdfb20020
    ctx->pc = 0x1652acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1652b0: 0xdfb30028
    ctx->pc = 0x1652b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1652b4: 0xdfb40030
    ctx->pc = 0x1652b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1652b8: 0xdfb50038
    ctx->pc = 0x1652b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1652bc: 0xdfbf0040
    ctx->pc = 0x1652bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1652c0: 0x3e00008
    ctx->pc = 0x1652C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165100u: goto label_165100;
            case 0x165104u: goto label_165104;
            case 0x165148u: goto label_165148;
            case 0x165160u: goto label_165160;
            case 0x165188u: goto label_165188;
            case 0x16518Cu: goto label_16518c;
            case 0x165218u: goto label_165218;
            case 0x165220u: goto label_165220;
            case 0x165224u: goto label_165224;
            case 0x16525Cu: goto label_16525c;
            case 0x165290u: goto label_165290;
            case 0x1652A4u: goto label_1652a4;
            case 0x1652A8u: goto label_1652a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1652C8u;
}
