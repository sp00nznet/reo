#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1235e8
// Address: 0x1235e8 - 0x123700
void entry_1235e8_0x123700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1235e8u;

    // 0x1235e8: 0x27bdffa0
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1235ec: 0xffb00020
    ctx->pc = 0x1235ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1235f0: 0x80802d
    ctx->pc = 0x1235f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235f4: 0xffb50048
    ctx->pc = 0x1235f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1235f8: 0x24150001
    ctx->pc = 0x1235f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1235fc: 0xffb10028
    ctx->pc = 0x1235fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x123600: 0x2611000e
    ctx->pc = 0x123600u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14));
    // 0x123604: 0xffb20030
    ctx->pc = 0x123604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x123608: 0x2612000f
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 15));
    // 0x12360c: 0xffb30038
    ctx->pc = 0x12360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x123610: 0x26130010
    ctx->pc = 0x123610u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 16));
    // 0x123614: 0xffb40040
    ctx->pc = 0x123614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123618: 0x2614000d
    ctx->pc = 0x123618u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 13));
    // 0x12361c: 0xffbf0050
    ctx->pc = 0x12361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x123620: 0xa0202d
    ctx->pc = 0x123620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123624: 0xa6150002
    ctx->pc = 0x123624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x123628: 0x26020018
    ctx->pc = 0x123628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
    // 0x12362c: 0xc0282d
    ctx->pc = 0x12362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123630: 0x27a60010
    ctx->pc = 0x123630u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x123634: 0x2607000c
    ctx->pc = 0x123634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    // 0x123638: 0x280402d
    ctx->pc = 0x123638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12363c: 0x240482d
    ctx->pc = 0x12363cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123640: 0x220502d
    ctx->pc = 0x123640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123644: 0x260b0014
    ctx->pc = 0x123644u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
    // 0x123648: 0xafa20000
    ctx->pc = 0x123648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12364c: 0xc048d36
    ctx->pc = 0x12364Cu;
    SET_GPR_U32(ctx, 31, 0x123654u);
    ctx->pc = 0x123650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    ctx->pc = 0x1234D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001234D8_0x1234d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123654u; }
    }
    if (ctx->pc != 0x123654u) { return; }
    ctx->pc = 0x123654u;
    // 0x123654: 0x4410004
    ctx->pc = 0x123654u;
    {
        const bool branch_taken_0x123654 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x123658u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x123654) {
            ctx->pc = 0x123668u;
            goto label_123668;
        }
    }
    ctx->pc = 0x12365Cu;
    // 0x12365c: 0x1000001f
    ctx->pc = 0x12365Cu;
    {
        const bool branch_taken_0x12365c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123660u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12365c) {
            ctx->pc = 0x1236DCu;
            goto label_1236dc;
        }
    }
    ctx->pc = 0x123664u;
    // 0x123664: 0x0
    ctx->pc = 0x123664u;
    // NOP
label_123668:
    // 0x123668: 0xae000034
    ctx->pc = 0x123668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x12366c: 0xae000030
    ctx->pc = 0x12366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x123670: 0xae00002c
    ctx->pc = 0x123670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x123674: 0xae000028
    ctx->pc = 0x123674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x123678: 0xae000020
    ctx->pc = 0x123678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x12367c: 0xa600001c
    ctx->pc = 0x12367cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x123680: 0xa6000026
    ctx->pc = 0x123680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x123684: 0xa6000024
    ctx->pc = 0x123684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x123688: 0x8e04003c
    ctx->pc = 0x123688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x12368c: 0x82220000
    ctx->pc = 0x12368cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123690: 0x8e050040
    ctx->pc = 0x123690u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x123694: 0xae020050
    ctx->pc = 0x123694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x123698: 0x24020003
    ctx->pc = 0x123698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12369c: 0x8e060044
    ctx->pc = 0x12369cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1236a0: 0x82430000
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1236a4: 0xae04005c
    ctx->pc = 0x1236a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x1236a8: 0xae030054
    ctx->pc = 0x1236a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1236ac: 0xa6020098
    ctx->pc = 0x1236acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1236b0: 0x8e630000
    ctx->pc = 0x1236b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1236b4: 0xae050060
    ctx->pc = 0x1236b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x1236b8: 0xae030058
    ctx->pc = 0x1236b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1236bc: 0xae060064
    ctx->pc = 0x1236bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x1236c0: 0xae00008c
    ctx->pc = 0x1236c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1236c4: 0xae000088
    ctx->pc = 0x1236c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1236c8: 0x82820000
    ctx->pc = 0x1236c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1236cc: 0x54470002
    ctx->pc = 0x1236CCu;
    {
        const bool branch_taken_0x1236cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x1236cc) {
            ctx->pc = 0x1236D0u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1236D8u;
            goto label_1236d8;
        }
    }
    ctx->pc = 0x1236D4u;
    // 0x1236d4: 0xa615009a
    ctx->pc = 0x1236d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 21));
label_1236d8:
    // 0x1236d8: 0x87a20010
    ctx->pc = 0x1236d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_1236dc:
    // 0x1236dc: 0xdfb00020
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1236e0: 0xdfb10028
    ctx->pc = 0x1236e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1236e4: 0xdfb20030
    ctx->pc = 0x1236e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1236e8: 0xdfb30038
    ctx->pc = 0x1236e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1236ec: 0xdfb40040
    ctx->pc = 0x1236ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1236f0: 0xdfb50048
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1236f4: 0xdfbf0050
    ctx->pc = 0x1236f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1236f8: 0x3e00008
    ctx->pc = 0x1236F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123668u: goto label_123668;
            case 0x1236D8u: goto label_1236d8;
            case 0x1236DCu: goto label_1236dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123700u;
}
