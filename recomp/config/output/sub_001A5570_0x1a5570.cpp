#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5570
// Address: 0x1a5570 - 0x1a5790
void sub_001A5570_0x1a5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5570u;

    // 0x1a5570: 0x27bdffd0
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5574: 0xffbf0020
    ctx->pc = 0x1a5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5578: 0x7fb10010
    ctx->pc = 0x1a5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a557c: 0x7fb00000
    ctx->pc = 0x1a557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5580: 0xa0882d
    ctx->pc = 0x1a5580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5584: 0x80802d
    ctx->pc = 0x1a5584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5588: 0xc0695ec
    ctx->pc = 0x1A5588u;
    SET_GPR_U32(ctx, 31, 0x1A5590u);
    ctx->pc = 0x1A558Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A57B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A57B0_0x1a57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5590u; }
    }
    if (ctx->pc != 0x1A5590u) { return; }
    ctx->pc = 0x1A5590u;
    // 0x1a5590: 0x14400003
    ctx->pc = 0x1A5590u;
    {
        const bool branch_taken_0x1a5590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5594u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5590) {
            ctx->pc = 0x1A55A0u;
            goto label_1a55a0;
        }
    }
    ctx->pc = 0x1A5598u;
    // 0x1a5598: 0x10000075
    ctx->pc = 0x1A5598u;
    {
        const bool branch_taken_0x1a5598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A559Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5598) {
            ctx->pc = 0x1A5770u;
            goto label_1a5770;
        }
    }
    ctx->pc = 0x1A55A0u;
label_1a55a0:
    // 0x1a55a0: 0xc069630
    ctx->pc = 0x1A55A0u;
    SET_GPR_U32(ctx, 31, 0x1A55A8u);
    ctx->pc = 0x1A55A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A58C0_0x1a58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55A8u; }
    }
    if (ctx->pc != 0x1A55A8u) { return; }
    ctx->pc = 0x1A55A8u;
    // 0x1a55a8: 0x90430011
    ctx->pc = 0x1a55a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a55ac: 0x28610008
    ctx->pc = 0x1a55acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1a55b0: 0x14200003
    ctx->pc = 0x1A55B0u;
    {
        const bool branch_taken_0x1a55b0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a55b0) {
            ctx->pc = 0x1A55C0u;
            goto label_1a55c0;
        }
    }
    ctx->pc = 0x1A55B8u;
    // 0x1a55b8: 0x1000006d
    ctx->pc = 0x1A55B8u;
    {
        const bool branch_taken_0x1a55b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A55BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a55b8) {
            ctx->pc = 0x1A5770u;
            goto label_1a5770;
        }
    }
    ctx->pc = 0x1A55C0u;
label_1a55c0:
    // 0x1a55c0: 0xae000000
    ctx->pc = 0x1a55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a55c4: 0x24040003
    ctx->pc = 0x1a55c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a55c8: 0x90450012
    ctx->pc = 0x1a55c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1a55cc: 0x10a4002f
    ctx->pc = 0x1A55CCu;
    {
        const bool branch_taken_0x1a55cc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x1A55D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a55cc) {
            ctx->pc = 0x1A568Cu;
            goto label_1a568c;
        }
    }
    ctx->pc = 0x1A55D4u;
    // 0x1a55d4: 0x24030002
    ctx->pc = 0x1a55d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a55d8: 0x10a30019
    ctx->pc = 0x1A55D8u;
    {
        const bool branch_taken_0x1a55d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A55DCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a55d8) {
            ctx->pc = 0x1A5640u;
            goto label_1a5640;
        }
    }
    ctx->pc = 0x1A55E0u;
    // 0x1a55e0: 0x10a70003
    ctx->pc = 0x1A55E0u;
    {
        const bool branch_taken_0x1a55e0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 7));
        if (branch_taken_0x1a55e0) {
            ctx->pc = 0x1A55F0u;
            goto label_1a55f0;
        }
    }
    ctx->pc = 0x1A55E8u;
    // 0x1a55e8: 0x1000003c
    ctx->pc = 0x1A55E8u;
    {
        const bool branch_taken_0x1a55e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A55ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a55e8) {
            ctx->pc = 0x1A56DCu;
            goto label_1a56dc;
        }
    }
    ctx->pc = 0x1A55F0u;
label_1a55f0:
    // 0x1a55f0: 0xae030014
    ctx->pc = 0x1a55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a55f4: 0x24060005
    ctx->pc = 0x1a55f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a55f8: 0xae060018
    ctx->pc = 0x1a55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x1a55fc: 0x2405000a
    ctx->pc = 0x1a55fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a5600: 0xae05001c
    ctx->pc = 0x1a5600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1a5604: 0x2404001f
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a5608: 0xae040020
    ctx->pc = 0x1a5608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1a560c: 0x2403000f
    ctx->pc = 0x1a560cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a5610: 0xae060024
    ctx->pc = 0x1a5610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x1a5614: 0xae060028
    ctx->pc = 0x1a5614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1a5618: 0xae04002c
    ctx->pc = 0x1a5618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1a561c: 0xae060030
    ctx->pc = 0x1a561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x1a5620: 0xae000034
    ctx->pc = 0x1a5620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a5624: 0xae040038
    ctx->pc = 0x1a5624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1a5628: 0xae07003c
    ctx->pc = 0x1a5628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 7));
    // 0x1a562c: 0xae030040
    ctx->pc = 0x1a562cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1a5630: 0xae070044
    ctx->pc = 0x1a5630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 7));
    // 0x1a5634: 0xae00001c
    ctx->pc = 0x1a5634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a5638: 0x1000002a
    ctx->pc = 0x1A5638u;
    {
        const bool branch_taken_0x1a5638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A563Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
        if (branch_taken_0x1a5638) {
            ctx->pc = 0x1A56E4u;
            goto label_1a56e4;
        }
    }
    ctx->pc = 0x1A5640u;
label_1a5640:
    // 0x1a5640: 0xae040014
    ctx->pc = 0x1a5640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1a5644: 0x24050008
    ctx->pc = 0x1a5644u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a5648: 0xae050018
    ctx->pc = 0x1a5648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1a564c: 0x24040010
    ctx->pc = 0x1a564cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a5650: 0xae04001c
    ctx->pc = 0x1a5650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1a5654: 0x240300ff
    ctx->pc = 0x1a5654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5658: 0xae030020
    ctx->pc = 0x1a5658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a565c: 0xae050024
    ctx->pc = 0x1a565cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1a5660: 0xae050028
    ctx->pc = 0x1a5660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x1a5664: 0xae03002c
    ctx->pc = 0x1a5664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1a5668: 0xae050030
    ctx->pc = 0x1a5668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1a566c: 0xae000034
    ctx->pc = 0x1a566cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a5670: 0xae030038
    ctx->pc = 0x1a5670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1a5674: 0xae00003c
    ctx->pc = 0x1a5674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1a5678: 0xae000040
    ctx->pc = 0x1a5678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1a567c: 0xae000044
    ctx->pc = 0x1a567cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a5680: 0xae00001c
    ctx->pc = 0x1a5680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a5684: 0x10000017
    ctx->pc = 0x1A5684u;
    {
        const bool branch_taken_0x1a5684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5688u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        if (branch_taken_0x1a5684) {
            ctx->pc = 0x1A56E4u;
            goto label_1a56e4;
        }
    }
    ctx->pc = 0x1A568Cu;
label_1a568c:
    // 0x1a568c: 0x24060008
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a5690: 0xae030014
    ctx->pc = 0x1a5690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a5694: 0x24050010
    ctx->pc = 0x1a5694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a5698: 0xae060018
    ctx->pc = 0x1a5698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x1a569c: 0x240400ff
    ctx->pc = 0x1a569cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a56a0: 0xae05001c
    ctx->pc = 0x1a56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1a56a4: 0x24030018
    ctx->pc = 0x1a56a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a56a8: 0xae040020
    ctx->pc = 0x1a56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1a56ac: 0xae060024
    ctx->pc = 0x1a56acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x1a56b0: 0xae060028
    ctx->pc = 0x1a56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1a56b4: 0xae04002c
    ctx->pc = 0x1a56b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1a56b8: 0xae060030
    ctx->pc = 0x1a56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x1a56bc: 0xae000034
    ctx->pc = 0x1a56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a56c0: 0xae040038
    ctx->pc = 0x1a56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1a56c4: 0xae06003c
    ctx->pc = 0x1a56c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x1a56c8: 0xae030040
    ctx->pc = 0x1a56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1a56cc: 0xae040044
    ctx->pc = 0x1a56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1a56d0: 0xae00001c
    ctx->pc = 0x1a56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a56d4: 0x10000003
    ctx->pc = 0x1A56D4u;
    {
        const bool branch_taken_0x1a56d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A56D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
        if (branch_taken_0x1a56d4) {
            ctx->pc = 0x1A56E4u;
            goto label_1a56e4;
        }
    }
    ctx->pc = 0x1A56DCu;
label_1a56dc:
    // 0x1a56dc: 0x10000025
    ctx->pc = 0x1A56DCu;
    {
        const bool branch_taken_0x1a56dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A56E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1a56dc) {
            ctx->pc = 0x1A5774u;
            goto label_1a5774;
        }
    }
    ctx->pc = 0x1A56E4u;
label_1a56e4:
    // 0x1a56e4: 0x90440013
    ctx->pc = 0x1a56e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1a56e8: 0x24030005
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a56ec: 0x1083000f
    ctx->pc = 0x1A56ECu;
    {
        const bool branch_taken_0x1a56ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A56F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a56ec) {
            ctx->pc = 0x1A572Cu;
            goto label_1a572c;
        }
    }
    ctx->pc = 0x1A56F4u;
    // 0x1a56f4: 0x10830003
    ctx->pc = 0x1A56F4u;
    {
        const bool branch_taken_0x1a56f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a56f4) {
            ctx->pc = 0x1A5704u;
            goto label_1a5704;
        }
    }
    ctx->pc = 0x1A56FCu;
    // 0x1a56fc: 0x10000015
    ctx->pc = 0x1A56FCu;
    {
        const bool branch_taken_0x1a56fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5700u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a56fc) {
            ctx->pc = 0x1A5754u;
            goto label_1a5754;
        }
    }
    ctx->pc = 0x1A5704u;
label_1a5704:
    // 0x1a5704: 0x9443000e
    ctx->pc = 0x1a5704u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1a5708: 0x24020010
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a570c: 0x10620003
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A571Cu;
            goto label_1a571c;
        }
    }
    ctx->pc = 0x1A5714u;
    // 0x1a5714: 0x10000016
    ctx->pc = 0x1A5714u;
    {
        const bool branch_taken_0x1a5714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5718u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5714) {
            ctx->pc = 0x1A5770u;
            goto label_1a5770;
        }
    }
    ctx->pc = 0x1A571Cu;
label_1a571c:
    // 0x1a571c: 0xae020004
    ctx->pc = 0x1a571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a5720: 0x24020001
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5724: 0x1000000d
    ctx->pc = 0x1A5724u;
    {
        const bool branch_taken_0x1a5724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5728u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1a5724) {
            ctx->pc = 0x1A575Cu;
            goto label_1a575c;
        }
    }
    ctx->pc = 0x1A572Cu;
label_1a572c:
    // 0x1a572c: 0x9443000e
    ctx->pc = 0x1a572cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1a5730: 0x24020100
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a5734: 0x10620003
    ctx->pc = 0x1A5734u;
    {
        const bool branch_taken_0x1a5734 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a5734) {
            ctx->pc = 0x1A5744u;
            goto label_1a5744;
        }
    }
    ctx->pc = 0x1A573Cu;
    // 0x1a573c: 0x1000000c
    ctx->pc = 0x1A573Cu;
    {
        const bool branch_taken_0x1a573c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a573c) {
            ctx->pc = 0x1A5770u;
            goto label_1a5770;
        }
    }
    ctx->pc = 0x1A5744u;
label_1a5744:
    // 0x1a5744: 0xae020004
    ctx->pc = 0x1a5744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a5748: 0x24020001
    ctx->pc = 0x1a5748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a574c: 0x10000003
    ctx->pc = 0x1A574Cu;
    {
        const bool branch_taken_0x1a574c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5750u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1a574c) {
            ctx->pc = 0x1A575Cu;
            goto label_1a575c;
        }
    }
    ctx->pc = 0x1A5754u;
label_1a5754:
    // 0x1a5754: 0x10000006
    ctx->pc = 0x1A5754u;
    {
        const bool branch_taken_0x1a5754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5754) {
            ctx->pc = 0x1A5770u;
            goto label_1a5770;
        }
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0x8e040014
    ctx->pc = 0x1a575cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a5760: 0x24020001
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5764: 0x8e030004
    ctx->pc = 0x1a5764u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5768: 0x831818
    ctx->pc = 0x1a5768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1a576c: 0xae03000c
    ctx->pc = 0x1a576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a5770:
    // 0x1a5770: 0xdfbf0020
    ctx->pc = 0x1a5770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5774:
    // 0x1a5774: 0x7bb10010
    ctx->pc = 0x1a5774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5778: 0x7bb00000
    ctx->pc = 0x1a5778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a577c: 0x3e00008
    ctx->pc = 0x1A577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A55A0u: goto label_1a55a0;
            case 0x1A55C0u: goto label_1a55c0;
            case 0x1A55F0u: goto label_1a55f0;
            case 0x1A5640u: goto label_1a5640;
            case 0x1A568Cu: goto label_1a568c;
            case 0x1A56DCu: goto label_1a56dc;
            case 0x1A56E4u: goto label_1a56e4;
            case 0x1A5704u: goto label_1a5704;
            case 0x1A571Cu: goto label_1a571c;
            case 0x1A572Cu: goto label_1a572c;
            case 0x1A5744u: goto label_1a5744;
            case 0x1A5754u: goto label_1a5754;
            case 0x1A575Cu: goto label_1a575c;
            case 0x1A5770u: goto label_1a5770;
            case 0x1A5774u: goto label_1a5774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5784u;
    // 0x1a5784: 0x0
    ctx->pc = 0x1a5784u;
    // NOP
    // 0x1a5788: 0x0
    ctx->pc = 0x1a5788u;
    // NOP
    // 0x1a578c: 0x0
    ctx->pc = 0x1a578cu;
    // NOP
}
