#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124860
// Address: 0x124860 - 0x1249a0
void sub_00124860_0x124860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124860u;

    // 0x124860: 0x27bdffd0
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124864: 0x3c080021
    ctx->pc = 0x124864u;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x124868: 0xffb10008
    ctx->pc = 0x124868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12486c: 0xc0882d
    ctx->pc = 0x12486cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124870: 0xffb20010
    ctx->pc = 0x124870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124874: 0xe0902d
    ctx->pc = 0x124874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124878: 0xffb30018
    ctx->pc = 0x124878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12487c: 0xa0982d
    ctx->pc = 0x12487cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124880: 0xffb40020
    ctx->pc = 0x124880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124884: 0x80a02d
    ctx->pc = 0x124884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124888: 0xffb00000
    ctx->pc = 0x124888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12488c: 0x2503b958
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 4294949208));
    // 0x124890: 0xffbf0028
    ctx->pc = 0x124890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124894: 0x84620000
    ctx->pc = 0x124894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124898: 0x1040000c
    ctx->pc = 0x124898u;
    {
        const bool branch_taken_0x124898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12489Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124898) {
            ctx->pc = 0x1248CCu;
            goto label_1248cc;
        }
    }
    ctx->pc = 0x1248A0u;
    // 0x1248a0: 0x24e70001
    ctx->pc = 0x1248a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1248a4: 0x0
    ctx->pc = 0x1248a4u;
    // NOP
label_1248a8:
    // 0x1248a8: 0x28e20010
    ctx->pc = 0x1248a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 16));
    // 0x1248ac: 0x10400007
    ctx->pc = 0x1248ACu;
    {
        const bool branch_taken_0x1248ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1248B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 228));
        if (branch_taken_0x1248ac) {
            ctx->pc = 0x1248CCu;
            goto label_1248cc;
        }
    }
    ctx->pc = 0x1248B4u;
    // 0x1248b4: 0x84620000
    ctx->pc = 0x1248b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1248b8: 0x0
    ctx->pc = 0x1248b8u;
    // NOP
    // 0x1248bc: 0x0
    ctx->pc = 0x1248bcu;
    // NOP
    // 0x1248c0: 0x0
    ctx->pc = 0x1248c0u;
    // NOP
    // 0x1248c4: 0x5440fff8
    ctx->pc = 0x1248C4u;
    {
        const bool branch_taken_0x1248c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1248c4) {
            ctx->pc = 0x1248C8u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1248A8u;
            goto label_1248a8;
        }
    }
    ctx->pc = 0x1248CCu;
label_1248cc:
    // 0x1248cc: 0x24030010
    ctx->pc = 0x1248ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1248d0: 0x10e3002b
    ctx->pc = 0x1248D0u;
    {
        const bool branch_taken_0x1248d0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 3));
        ctx->pc = 0x1248D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1248d0) {
            ctx->pc = 0x124980u;
            goto label_124980;
        }
    }
    ctx->pc = 0x1248D8u;
    // 0x1248d8: 0x710c0
    ctx->pc = 0x1248d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 3));
    // 0x1248dc: 0x2503b958
    ctx->pc = 0x1248dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 4294949208));
    // 0x1248e0: 0x471023
    ctx->pc = 0x1248e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1248e4: 0x282d
    ctx->pc = 0x1248e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e8: 0x210c0
    ctx->pc = 0x1248e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1248ec: 0x240600e4
    ctx->pc = 0x1248ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 228));
    // 0x1248f0: 0x471021
    ctx->pc = 0x1248f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1248f4: 0x21080
    ctx->pc = 0x1248f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1248f8: 0x438021
    ctx->pc = 0x1248f8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1248fc: 0xc041f1a
    ctx->pc = 0x1248FCu;
    SET_GPR_U32(ctx, 31, 0x124904u);
    ctx->pc = 0x124900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124904u; }
    }
    if (ctx->pc != 0x124904u) { return; }
    ctx->pc = 0x124904u;
    // 0x124904: 0x24030001
    ctx->pc = 0x124904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x124908: 0xc04d378
    ctx->pc = 0x124908u;
    SET_GPR_U32(ctx, 31, 0x124910u);
    ctx->pc = 0x12490Cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x134DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134DE0_0x134de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124910u; }
    }
    if (ctx->pc != 0x124910u) { return; }
    ctx->pc = 0x124910u;
    // 0x124910: 0x14400005
    ctx->pc = 0x124910u;
    {
        const bool branch_taken_0x124910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x124914u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x124910) {
            ctx->pc = 0x124928u;
            goto label_124928;
        }
    }
    ctx->pc = 0x124918u;
    // 0x124918: 0xc049268
    ctx->pc = 0x124918u;
    SET_GPR_U32(ctx, 31, 0x124920u);
    ctx->pc = 0x12491Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1249A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001249A0_0x1249a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124920u; }
    }
    if (ctx->pc != 0x124920u) { return; }
    ctx->pc = 0x124920u;
    // 0x124920: 0x10000017
    ctx->pc = 0x124920u;
    {
        const bool branch_taken_0x124920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124924u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124920) {
            ctx->pc = 0x124980u;
            goto label_124980;
        }
    }
    ctx->pc = 0x124928u;
label_124928:
    // 0x124928: 0x3c020012
    ctx->pc = 0x124928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18 << 16));
    // 0x12492c: 0x3c030012
    ctx->pc = 0x12492cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)18 << 16));
    // 0x124930: 0x2407ff80
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x124934: 0x24424810
    ctx->pc = 0x124934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18448));
    // 0x124938: 0x24634840
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18496));
    // 0x12493c: 0xae140038
    ctx->pc = 0x12493cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x124940: 0xae13003c
    ctx->pc = 0x124940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    // 0x124944: 0x260400cc
    ctx->pc = 0x124944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 204));
    // 0x124948: 0xae110040
    ctx->pc = 0x124948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x12494c: 0x282d
    ctx->pc = 0x12494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124950: 0xae120044
    ctx->pc = 0x124950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x124954: 0x24060010
    ctx->pc = 0x124954u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x124958: 0xae020078
    ctx->pc = 0x124958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x12495c: 0xae030080
    ctx->pc = 0x12495cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x124960: 0xa60700e0
    ctx->pc = 0x124960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x124964: 0xae10007c
    ctx->pc = 0x124964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x124968: 0xae100084
    ctx->pc = 0x124968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 16));
    // 0x12496c: 0xae0000c8
    ctx->pc = 0x12496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x124970: 0xa60000dc
    ctx->pc = 0x124970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x124974: 0xc041f1a
    ctx->pc = 0x124974u;
    SET_GPR_U32(ctx, 31, 0x12497Cu);
    ctx->pc = 0x124978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 222), (uint16_t)GPR_U32(ctx, 7));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12497Cu; }
    }
    if (ctx->pc != 0x12497Cu) { return; }
    ctx->pc = 0x12497Cu;
    // 0x12497c: 0x200102d
    ctx->pc = 0x12497cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124980:
    // 0x124980: 0xdfb00000
    ctx->pc = 0x124980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124984: 0xdfb10008
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124988: 0xdfb20010
    ctx->pc = 0x124988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12498c: 0xdfb30018
    ctx->pc = 0x12498cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124990: 0xdfb40020
    ctx->pc = 0x124990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124994: 0xdfbf0028
    ctx->pc = 0x124994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124998: 0x3e00008
    ctx->pc = 0x124998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12499Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1248A8u: goto label_1248a8;
            case 0x1248CCu: goto label_1248cc;
            case 0x124928u: goto label_124928;
            case 0x124980u: goto label_124980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1249A0u;
}
