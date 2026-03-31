#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108750
// Address: 0x108750 - 0x1088e0
void sub_00108750_0x108750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108750u;

    // 0x108750: 0x27bdffd0
    ctx->pc = 0x108750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108754: 0xffb10008
    ctx->pc = 0x108754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108758: 0xa0882d
    ctx->pc = 0x108758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10875c: 0xffb20010
    ctx->pc = 0x10875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108760: 0xc0902d
    ctx->pc = 0x108760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108764: 0xffb30018
    ctx->pc = 0x108764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x108768: 0x80982d
    ctx->pc = 0x108768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10876c: 0x240282d
    ctx->pc = 0x10876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108770: 0xffb00000
    ctx->pc = 0x108770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108774: 0xffbf0020
    ctx->pc = 0x108774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108778: 0xc0421ba
    ctx->pc = 0x108778u;
    SET_GPR_U32(ctx, 31, 0x108780u);
    ctx->pc = 0x10877Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108780u; }
    }
    if (ctx->pc != 0x108780u) { return; }
    ctx->pc = 0x108780u;
    // 0x108780: 0x40802d
    ctx->pc = 0x108780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108784: 0x16000008
    ctx->pc = 0x108784u;
    {
        const bool branch_taken_0x108784 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x108788u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108784) {
            ctx->pc = 0x1087A8u;
            goto label_1087a8;
        }
    }
    ctx->pc = 0x10878Cu;
    // 0x10878c: 0xc041f7e
    ctx->pc = 0x10878Cu;
    SET_GPR_U32(ctx, 31, 0x108794u);
    ctx->pc = 0x108790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108794u; }
    }
    if (ctx->pc != 0x108794u) { return; }
    ctx->pc = 0x108794u;
    // 0x108794: 0x24030001
    ctx->pc = 0x108794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108798: 0x40582d
    ctx->pc = 0x108798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10879c: 0xad630010
    ctx->pc = 0x10879cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x1087a0: 0x10000048
    ctx->pc = 0x1087A0u;
    {
        const bool branch_taken_0x1087a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1087A4u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x1087a0) {
            ctx->pc = 0x1088C4u;
            goto label_1088c4;
        }
    }
    ctx->pc = 0x1087A8u;
label_1087a8:
    // 0x1087a8: 0x6030005
    ctx->pc = 0x1087A8u;
    {
        const bool branch_taken_0x1087a8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1087a8) {
            ctx->pc = 0x1087ACu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1087C0u;
            goto label_1087c0;
        }
    }
    ctx->pc = 0x1087B0u;
    // 0x1087b0: 0x220582d
    ctx->pc = 0x1087b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087b4: 0x240882d
    ctx->pc = 0x1087b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087b8: 0x24100001
    ctx->pc = 0x1087b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1087bc: 0x160902d
    ctx->pc = 0x1087bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1087c0:
    // 0x1087c0: 0x8e250004
    ctx->pc = 0x1087c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1087c4: 0xc041f7e
    ctx->pc = 0x1087C4u;
    SET_GPR_U32(ctx, 31, 0x1087CCu);
    ctx->pc = 0x1087C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087CCu; }
    }
    if (ctx->pc != 0x1087CCu) { return; }
    ctx->pc = 0x1087CCu;
    // 0x1087cc: 0x26280014
    ctx->pc = 0x1087ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 20));
    // 0x1087d0: 0x40582d
    ctx->pc = 0x1087d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087d4: 0x26490014
    ctx->pc = 0x1087d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 18), 20));
    // 0x1087d8: 0xad70000c
    ctx->pc = 0x1087d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x1087dc: 0x25670014
    ctx->pc = 0x1087dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 11), 20));
    // 0x1087e0: 0x502d
    ctx->pc = 0x1087e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087e4: 0x8e2c0010
    ctx->pc = 0x1087e4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1087e8: 0x8e420010
    ctx->pc = 0x1087e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1087ec: 0xc1880
    ctx->pc = 0x1087ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 12), 2));
    // 0x1087f0: 0x21080
    ctx->pc = 0x1087f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1087f4: 0x1036821
    ctx->pc = 0x1087f4u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1087f8: 0x1223021
    ctx->pc = 0x1087f8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1087fc: 0x0
    ctx->pc = 0x1087fcu;
    // NOP
label_108800:
    // 0x108800: 0x8d050000
    ctx->pc = 0x108800u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x108804: 0x25080004
    ctx->pc = 0x108804u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x108808: 0x8d220000
    ctx->pc = 0x108808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10880c: 0x25290004
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x108810: 0x30a3ffff
    ctx->pc = 0x108810u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x108814: 0x52c02
    ctx->pc = 0x108814u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    // 0x108818: 0x3044ffff
    ctx->pc = 0x108818u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x10881c: 0x21402
    ctx->pc = 0x10881cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x108820: 0x641823
    ctx->pc = 0x108820u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x108824: 0xa22823
    ctx->pc = 0x108824u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x108828: 0x6a1821
    ctx->pc = 0x108828u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10882c: 0x126102b
    ctx->pc = 0x10882cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x108830: 0x35403
    ctx->pc = 0x108830u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x108834: 0xa4e30000
    ctx->pc = 0x108834u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x108838: 0xaa2821
    ctx->pc = 0x108838u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x10883c: 0xa4e50002
    ctx->pc = 0x10883cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x108840: 0x24e70004
    ctx->pc = 0x108840u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x108844: 0x1440ffee
    ctx->pc = 0x108844u;
    {
        const bool branch_taken_0x108844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108848u;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x108844) {
            ctx->pc = 0x108800u;
            goto label_108800;
        }
    }
    ctx->pc = 0x10884Cu;
    // 0x10884c: 0x10d102b
    ctx->pc = 0x10884cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x108850: 0x5040000f
    ctx->pc = 0x108850u;
    {
        const bool branch_taken_0x108850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x108850) {
            ctx->pc = 0x108854u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->pc = 0x108890u;
            goto label_108890;
        }
    }
    ctx->pc = 0x108858u;
label_108858:
    // 0x108858: 0x8d020000
    ctx->pc = 0x108858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10885c: 0x25080004
    ctx->pc = 0x10885cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x108860: 0x10d202b
    ctx->pc = 0x108860u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x108864: 0x3043ffff
    ctx->pc = 0x108864u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x108868: 0x21402
    ctx->pc = 0x108868u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x10886c: 0x6a1821
    ctx->pc = 0x10886cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x108870: 0x35403
    ctx->pc = 0x108870u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x108874: 0xa4e30000
    ctx->pc = 0x108874u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x108878: 0x4a2821
    ctx->pc = 0x108878u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x10887c: 0xa4e50002
    ctx->pc = 0x10887cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x108880: 0x24e70004
    ctx->pc = 0x108880u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x108884: 0x1480fff4
    ctx->pc = 0x108884u;
    {
        const bool branch_taken_0x108884 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x108888u;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x108884) {
            ctx->pc = 0x108858u;
            goto label_108858;
        }
    }
    ctx->pc = 0x10888Cu;
    // 0x10888c: 0x24e7fffc
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
label_108890:
    // 0x108890: 0x8ce20000
    ctx->pc = 0x108890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108894: 0x5440000a
    ctx->pc = 0x108894u;
    {
        const bool branch_taken_0x108894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x108894) {
            ctx->pc = 0x108898u;
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->pc = 0x1088C0u;
            goto label_1088c0;
        }
    }
    ctx->pc = 0x10889Cu;
    // 0x10889c: 0x0
    ctx->pc = 0x10889cu;
    // NOP
label_1088a0:
    // 0x1088a0: 0x24e7fffc
    ctx->pc = 0x1088a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1088a4: 0x8ce20000
    ctx->pc = 0x1088a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1088a8: 0x0
    ctx->pc = 0x1088a8u;
    // NOP
    // 0x1088ac: 0x0
    ctx->pc = 0x1088acu;
    // NOP
    // 0x1088b0: 0x0
    ctx->pc = 0x1088b0u;
    // NOP
    // 0x1088b4: 0x1040fffa
    ctx->pc = 0x1088B4u;
    {
        const bool branch_taken_0x1088b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1088B8u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967295));
        if (branch_taken_0x1088b4) {
            ctx->pc = 0x1088A0u;
            goto label_1088a0;
        }
    }
    ctx->pc = 0x1088BCu;
    // 0x1088bc: 0xad6c0010
    ctx->pc = 0x1088bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_1088c0:
    // 0x1088c0: 0x160102d
    ctx->pc = 0x1088c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1088c4:
    // 0x1088c4: 0xdfb00000
    ctx->pc = 0x1088c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088c8: 0xdfb10008
    ctx->pc = 0x1088c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1088cc: 0xdfb20010
    ctx->pc = 0x1088ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088d0: 0xdfb30018
    ctx->pc = 0x1088d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1088d4: 0xdfbf0020
    ctx->pc = 0x1088d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1088d8: 0x3e00008
    ctx->pc = 0x1088D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1088DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1087A8u: goto label_1087a8;
            case 0x1087C0u: goto label_1087c0;
            case 0x108800u: goto label_108800;
            case 0x108858u: goto label_108858;
            case 0x108890u: goto label_108890;
            case 0x1088A0u: goto label_1088a0;
            case 0x1088C0u: goto label_1088c0;
            case 0x1088C4u: goto label_1088c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1088E0u;
}
