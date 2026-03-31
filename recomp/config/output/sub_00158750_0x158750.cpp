#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158750
// Address: 0x158750 - 0x158968
void sub_00158750_0x158750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158750u;

    // 0x158750: 0x27bdffc0
    ctx->pc = 0x158750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158754: 0x182d
    ctx->pc = 0x158754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158758: 0xffb10008
    ctx->pc = 0x158758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15875c: 0x80882d
    ctx->pc = 0x15875cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158760: 0xffb20010
    ctx->pc = 0x158760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158764: 0x2259021
    ctx->pc = 0x158764u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x158768: 0x232102b
    ctx->pc = 0x158768u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x15876c: 0xffb50028
    ctx->pc = 0x15876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x158770: 0xffb00000
    ctx->pc = 0x158770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158774: 0xc0a82d
    ctx->pc = 0x158774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158778: 0xffb30018
    ctx->pc = 0x158778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15877c: 0xffb40020
    ctx->pc = 0x15877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x158780: 0xffb60030
    ctx->pc = 0x158780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x158784: 0x10400029
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158788u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x158784) {
            ctx->pc = 0x15882Cu;
            goto label_15882c;
        }
    }
    ctx->pc = 0x15878Cu;
    // 0x15878c: 0x24140001
    ctx->pc = 0x15878cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x158790: 0x24130002
    ctx->pc = 0x158790u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x158794: 0x24160003
    ctx->pc = 0x158794u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x158798: 0x82220000
    ctx->pc = 0x158798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15879c: 0x0
    ctx->pc = 0x15879cu;
    // NOP
label_1587a0:
    // 0x1587a0: 0x1074000d
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        ctx->pc = 0x1587A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x1587A8u;
    // 0x1587a8: 0x10600007
    ctx->pc = 0x1587A8u;
    {
        const bool branch_taken_0x1587a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1587a8) {
            ctx->pc = 0x1587C8u;
            goto label_1587c8;
        }
    }
    ctx->pc = 0x1587B0u;
    // 0x1587b0: 0x1073000d
    ctx->pc = 0x1587B0u;
    {
        const bool branch_taken_0x1587b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        if (branch_taken_0x1587b0) {
            ctx->pc = 0x1587E8u;
            goto label_1587e8;
        }
    }
    ctx->pc = 0x1587B8u;
    // 0x1587b8: 0x50760013
    ctx->pc = 0x1587B8u;
    {
        const bool branch_taken_0x1587b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        if (branch_taken_0x1587b8) {
            ctx->pc = 0x1587BCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294967292));
            ctx->pc = 0x158808u;
            goto label_158808;
        }
    }
    ctx->pc = 0x1587C0u;
    // 0x1587c0: 0x10000018
    ctx->pc = 0x1587C0u;
    {
        const bool branch_taken_0x1587c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1587C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        if (branch_taken_0x1587c0) {
            ctx->pc = 0x158824u;
            goto label_158824;
        }
    }
    ctx->pc = 0x1587C8u;
label_1587c8:
    // 0x1587c8: 0x50400015
    ctx->pc = 0x1587C8u;
    {
        const bool branch_taken_0x1587c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1587c8) {
            ctx->pc = 0x1587CCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x158820u;
            goto label_158820;
        }
    }
    ctx->pc = 0x1587D0u;
    // 0x1587d0: 0x10000014
    ctx->pc = 0x1587D0u;
    {
        const bool branch_taken_0x1587d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1587D4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        if (branch_taken_0x1587d0) {
            ctx->pc = 0x158824u;
            goto label_158824;
        }
    }
    ctx->pc = 0x1587D8u;
label_1587d8:
    // 0x1587d8: 0x260182d
    ctx->pc = 0x1587d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1587dc: 0x10000010
    ctx->pc = 0x1587DCu;
    {
        const bool branch_taken_0x1587dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1587E0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
        if (branch_taken_0x1587dc) {
            ctx->pc = 0x158820u;
            goto label_158820;
        }
    }
    ctx->pc = 0x1587E4u;
    // 0x1587e4: 0x0
    ctx->pc = 0x1587e4u;
    // NOP
label_1587e8:
    // 0x1587e8: 0x14540003
    ctx->pc = 0x1587E8u;
    {
        const bool branch_taken_0x1587e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x1587e8) {
            ctx->pc = 0x1587F8u;
            goto label_1587f8;
        }
    }
    ctx->pc = 0x1587F0u;
    // 0x1587f0: 0x1000000b
    ctx->pc = 0x1587F0u;
    {
        const bool branch_taken_0x1587f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1587F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1587f0) {
            ctx->pc = 0x158820u;
            goto label_158820;
        }
    }
    ctx->pc = 0x1587F8u;
label_1587f8:
    // 0x1587f8: 0x1040000a
    ctx->pc = 0x1587F8u;
    {
        const bool branch_taken_0x1587f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1587FCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        if (branch_taken_0x1587f8) {
            ctx->pc = 0x158824u;
            goto label_158824;
        }
    }
    ctx->pc = 0x158800u;
    // 0x158800: 0x10000008
    ctx->pc = 0x158800u;
    {
        const bool branch_taken_0x158800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x158804u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158800) {
            ctx->pc = 0x158824u;
            goto label_158824;
        }
    }
    ctx->pc = 0x158808u;
label_158808:
    // 0x158808: 0xc05616e
    ctx->pc = 0x158808u;
    SET_GPR_U32(ctx, 31, 0x158810u);
    ctx->pc = 0x15880Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158810u; }
    }
    if (ctx->pc != 0x158810u) { return; }
    ctx->pc = 0x158810u;
    // 0x158810: 0x2a21824
    ctx->pc = 0x158810u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x158814: 0x14600006
    ctx->pc = 0x158814u;
    {
        const bool branch_taken_0x158814 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x158818u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158814) {
            ctx->pc = 0x158830u;
            goto label_158830;
        }
    }
    ctx->pc = 0x15881Cu;
    // 0x15881c: 0x182d
    ctx->pc = 0x15881cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158820:
    // 0x158820: 0x232102b
    ctx->pc = 0x158820u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_158824:
    // 0x158824: 0x5440ffde
    ctx->pc = 0x158824u;
    {
        const bool branch_taken_0x158824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x158824) {
            ctx->pc = 0x158828u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x1587A0u;
            goto label_1587a0;
        }
    }
    ctx->pc = 0x15882Cu;
label_15882c:
    // 0x15882c: 0x102d
    ctx->pc = 0x15882cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158830:
    // 0x158830: 0xdfb00000
    ctx->pc = 0x158830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158834: 0xdfb10008
    ctx->pc = 0x158834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158838: 0xdfb20010
    ctx->pc = 0x158838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15883c: 0xdfb30018
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158840: 0xdfb40020
    ctx->pc = 0x158840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158844: 0xdfb50028
    ctx->pc = 0x158844u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158848: 0xdfb60030
    ctx->pc = 0x158848u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15884c: 0xdfbf0038
    ctx->pc = 0x15884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x158850: 0x3e00008
    ctx->pc = 0x158850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1587A0u: goto label_1587a0;
            case 0x1587C8u: goto label_1587c8;
            case 0x1587D8u: goto label_1587d8;
            case 0x1587E8u: goto label_1587e8;
            case 0x1587F8u: goto label_1587f8;
            case 0x158808u: goto label_158808;
            case 0x158820u: goto label_158820;
            case 0x158824u: goto label_158824;
            case 0x15882Cu: goto label_15882c;
            case 0x158830u: goto label_158830;
            case 0x1588A8u: goto label_1588a8;
            case 0x1588D8u: goto label_1588d8;
            case 0x1588E8u: goto label_1588e8;
            case 0x1588F8u: goto label_1588f8;
            case 0x158908u: goto label_158908;
            case 0x158918u: goto label_158918;
            case 0x158930u: goto label_158930;
            case 0x158934u: goto label_158934;
            case 0x15893Cu: goto label_15893c;
            case 0x158940u: goto label_158940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158858u;
    // 0x158858: 0x27bdffc0
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15885c: 0x182d
    ctx->pc = 0x15885cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158860: 0xffb00000
    ctx->pc = 0x158860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158864: 0xa0802d
    ctx->pc = 0x158864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158868: 0xffb20010
    ctx->pc = 0x158868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15886c: 0x2069021
    ctx->pc = 0x15886cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x158870: 0x212102b
    ctx->pc = 0x158870u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x158874: 0xffb10008
    ctx->pc = 0x158874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158878: 0xffb50028
    ctx->pc = 0x158878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15887c: 0xe0a82d
    ctx->pc = 0x15887cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158880: 0xffb30018
    ctx->pc = 0x158880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x158884: 0x80882d
    ctx->pc = 0x158884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158888: 0xffb40020
    ctx->pc = 0x158888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15888c: 0xffb60030
    ctx->pc = 0x15888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x158890: 0x1040002a
    ctx->pc = 0x158890u;
    {
        const bool branch_taken_0x158890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158894u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x158890) {
            ctx->pc = 0x15893Cu;
            goto label_15893c;
        }
    }
    ctx->pc = 0x158898u;
    // 0x158898: 0x24140001
    ctx->pc = 0x158898u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15889c: 0x24130002
    ctx->pc = 0x15889cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1588a0: 0x24160003
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1588a4: 0x82020000
    ctx->pc = 0x1588a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1588a8:
    // 0x1588a8: 0x26100001
    ctx->pc = 0x1588a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1588ac: 0xa2220000
    ctx->pc = 0x1588acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1588b0: 0x1074000d
    ctx->pc = 0x1588B0u;
    {
        const bool branch_taken_0x1588b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        ctx->pc = 0x1588B4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1588b0) {
            ctx->pc = 0x1588E8u;
            goto label_1588e8;
        }
    }
    ctx->pc = 0x1588B8u;
    // 0x1588b8: 0x10600007
    ctx->pc = 0x1588B8u;
    {
        const bool branch_taken_0x1588b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1588b8) {
            ctx->pc = 0x1588D8u;
            goto label_1588d8;
        }
    }
    ctx->pc = 0x1588C0u;
    // 0x1588c0: 0x1073000d
    ctx->pc = 0x1588C0u;
    {
        const bool branch_taken_0x1588c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        if (branch_taken_0x1588c0) {
            ctx->pc = 0x1588F8u;
            goto label_1588f8;
        }
    }
    ctx->pc = 0x1588C8u;
    // 0x1588c8: 0x10760013
    ctx->pc = 0x1588C8u;
    {
        const bool branch_taken_0x1588c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        if (branch_taken_0x1588c8) {
            ctx->pc = 0x158918u;
            goto label_158918;
        }
    }
    ctx->pc = 0x1588D0u;
    // 0x1588d0: 0x10000018
    ctx->pc = 0x1588D0u;
    {
        const bool branch_taken_0x1588d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1588D4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x1588d0) {
            ctx->pc = 0x158934u;
            goto label_158934;
        }
    }
    ctx->pc = 0x1588D8u;
label_1588d8:
    // 0x1588d8: 0x50400015
    ctx->pc = 0x1588D8u;
    {
        const bool branch_taken_0x1588d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1588d8) {
            ctx->pc = 0x1588DCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x158930u;
            goto label_158930;
        }
    }
    ctx->pc = 0x1588E0u;
    // 0x1588e0: 0x10000014
    ctx->pc = 0x1588E0u;
    {
        const bool branch_taken_0x1588e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1588E4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x1588e0) {
            ctx->pc = 0x158934u;
            goto label_158934;
        }
    }
    ctx->pc = 0x1588E8u;
label_1588e8:
    // 0x1588e8: 0x260182d
    ctx->pc = 0x1588e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588ec: 0x10000010
    ctx->pc = 0x1588ECu;
    {
        const bool branch_taken_0x1588ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1588F0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
        if (branch_taken_0x1588ec) {
            ctx->pc = 0x158930u;
            goto label_158930;
        }
    }
    ctx->pc = 0x1588F4u;
    // 0x1588f4: 0x0
    ctx->pc = 0x1588f4u;
    // NOP
label_1588f8:
    // 0x1588f8: 0x14540003
    ctx->pc = 0x1588F8u;
    {
        const bool branch_taken_0x1588f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x1588f8) {
            ctx->pc = 0x158908u;
            goto label_158908;
        }
    }
    ctx->pc = 0x158900u;
    // 0x158900: 0x1000000b
    ctx->pc = 0x158900u;
    {
        const bool branch_taken_0x158900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x158904u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x158900) {
            ctx->pc = 0x158930u;
            goto label_158930;
        }
    }
    ctx->pc = 0x158908u;
label_158908:
    // 0x158908: 0x1040000a
    ctx->pc = 0x158908u;
    {
        const bool branch_taken_0x158908 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15890Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x158908) {
            ctx->pc = 0x158934u;
            goto label_158934;
        }
    }
    ctx->pc = 0x158910u;
    // 0x158910: 0x10000008
    ctx->pc = 0x158910u;
    {
        const bool branch_taken_0x158910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x158914u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158910) {
            ctx->pc = 0x158934u;
            goto label_158934;
        }
    }
    ctx->pc = 0x158918u;
label_158918:
    // 0x158918: 0xc05616e
    ctx->pc = 0x158918u;
    SET_GPR_U32(ctx, 31, 0x158920u);
    ctx->pc = 0x15891Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158920u; }
    }
    if (ctx->pc != 0x158920u) { return; }
    ctx->pc = 0x158920u;
    // 0x158920: 0x2a21824
    ctx->pc = 0x158920u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x158924: 0x14600006
    ctx->pc = 0x158924u;
    {
        const bool branch_taken_0x158924 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x158928u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158924) {
            ctx->pc = 0x158940u;
            goto label_158940;
        }
    }
    ctx->pc = 0x15892Cu;
    // 0x15892c: 0x182d
    ctx->pc = 0x15892cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158930:
    // 0x158930: 0x212102b
    ctx->pc = 0x158930u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_158934:
    // 0x158934: 0x5440ffdc
    ctx->pc = 0x158934u;
    {
        const bool branch_taken_0x158934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x158934) {
            ctx->pc = 0x158938u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1588A8u;
            goto label_1588a8;
        }
    }
    ctx->pc = 0x15893Cu;
label_15893c:
    // 0x15893c: 0x200102d
    ctx->pc = 0x15893cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158940:
    // 0x158940: 0xdfb00000
    ctx->pc = 0x158940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158944: 0xdfb10008
    ctx->pc = 0x158944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158948: 0xdfb20010
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15894c: 0xdfb30018
    ctx->pc = 0x15894cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158950: 0xdfb40020
    ctx->pc = 0x158950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158954: 0xdfb50028
    ctx->pc = 0x158954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158958: 0xdfb60030
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15895c: 0xdfbf0038
    ctx->pc = 0x15895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x158960: 0x3e00008
    ctx->pc = 0x158960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158964u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1587A0u: goto label_1587a0;
            case 0x1587C8u: goto label_1587c8;
            case 0x1587D8u: goto label_1587d8;
            case 0x1587E8u: goto label_1587e8;
            case 0x1587F8u: goto label_1587f8;
            case 0x158808u: goto label_158808;
            case 0x158820u: goto label_158820;
            case 0x158824u: goto label_158824;
            case 0x15882Cu: goto label_15882c;
            case 0x158830u: goto label_158830;
            case 0x1588A8u: goto label_1588a8;
            case 0x1588D8u: goto label_1588d8;
            case 0x1588E8u: goto label_1588e8;
            case 0x1588F8u: goto label_1588f8;
            case 0x158908u: goto label_158908;
            case 0x158918u: goto label_158918;
            case 0x158930u: goto label_158930;
            case 0x158934u: goto label_158934;
            case 0x15893Cu: goto label_15893c;
            case 0x158940u: goto label_158940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158968u;
}
