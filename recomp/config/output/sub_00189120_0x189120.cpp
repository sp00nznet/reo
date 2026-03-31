#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189120
// Address: 0x189120 - 0x189420
void sub_00189120_0x189120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189120u;

    // 0x189120: 0x27bdffd0
    ctx->pc = 0x189120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189124: 0x3c020029
    ctx->pc = 0x189124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x189128: 0xffb00010
    ctx->pc = 0x189128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18912c: 0x24030002
    ctx->pc = 0x18912cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x189130: 0x24500c00
    ctx->pc = 0x189130u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3072));
    // 0x189134: 0xffbf0020
    ctx->pc = 0x189134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189138: 0xae030008
    ctx->pc = 0x189138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x18913c: 0x80502d
    ctx->pc = 0x18913cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189140: 0x3c040029
    ctx->pc = 0x189140u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x189144: 0x3c058000
    ctx->pc = 0x189144u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x189148: 0x8d420008
    ctx->pc = 0x189148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x18914c: 0x24840b88
    ctx->pc = 0x18914cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2952));
    // 0x189150: 0xafa00000
    ctx->pc = 0x189150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189154: 0x34a5131d
    ctx->pc = 0x189154u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4893));
    // 0x189158: 0xae020010
    ctx->pc = 0x189158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x18915c: 0x302d
    ctx->pc = 0x18915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189160: 0x200382d
    ctx->pc = 0x189160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189164: 0x24080280
    ctx->pc = 0x189164u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189168: 0x8d42000c
    ctx->pc = 0x189168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x18916c: 0x200482d
    ctx->pc = 0x18916cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189170: 0x240a0280
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189174: 0x582d
    ctx->pc = 0x189174u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189178: 0xc045e7a
    ctx->pc = 0x189178u;
    SET_GPR_U32(ctx, 31, 0x189180u);
    ctx->pc = 0x18917Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189180u; }
    }
    if (ctx->pc != 0x189180u) { return; }
    ctx->pc = 0x189180u;
    // 0x189180: 0x4430005
    ctx->pc = 0x189180u;
    {
        const bool branch_taken_0x189180 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189180) {
            ctx->pc = 0x189184u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x189198u;
            goto label_189198;
        }
    }
    ctx->pc = 0x189188u;
    // 0x189188: 0x3c040024
    ctx->pc = 0x189188u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18918c: 0xc0625f6
    ctx->pc = 0x18918Cu;
    SET_GPR_U32(ctx, 31, 0x189194u);
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6592));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189194u; }
    }
    if (ctx->pc != 0x189194u) { return; }
    ctx->pc = 0x189194u;
    // 0x189194: 0x2402ffff
    ctx->pc = 0x189194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_189198:
    // 0x189198: 0xdfbf0020
    ctx->pc = 0x189198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18919c: 0xdfb00010
    ctx->pc = 0x18919cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891a0: 0x3e00008
    ctx->pc = 0x1891A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1891A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189198u: goto label_189198;
            case 0x189208u: goto label_189208;
            case 0x189230u: goto label_189230;
            case 0x189238u: goto label_189238;
            case 0x18927Cu: goto label_18927c;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x189360u: goto label_189360;
            case 0x189388u: goto label_189388;
            case 0x189390u: goto label_189390;
            case 0x1893DCu: goto label_1893dc;
            case 0x1893ECu: goto label_1893ec;
            case 0x1893F8u: goto label_1893f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1891A8u;
    // 0x1891a8: 0x27bdffa0
    ctx->pc = 0x1891a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1891ac: 0x3c0a0029
    ctx->pc = 0x1891acu;
    SET_GPR_U32(ctx, 10, ((uint32_t)41 << 16));
    // 0x1891b0: 0xffb00010
    ctx->pc = 0x1891b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1891b4: 0xffb30040
    ctx->pc = 0x1891b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1891b8: 0x25500c00
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 10), 3072));
    // 0x1891bc: 0xffb20030
    ctx->pc = 0x1891bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1891c0: 0x120982d
    ctx->pc = 0x1891c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891c4: 0xffb10020
    ctx->pc = 0x1891c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1891c8: 0x100902d
    ctx->pc = 0x1891c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891cc: 0xffbf0050
    ctx->pc = 0x1891ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1891d0: 0xc0882d
    ctx->pc = 0x1891d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891d4: 0xad440c00
    ctx->pc = 0x1891d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 3072), GPR_U32(ctx, 4));
    // 0x1891d8: 0xae050004
    ctx->pc = 0x1891d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1891dc: 0x8e220000
    ctx->pc = 0x1891dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1891e0: 0xae020008
    ctx->pc = 0x1891e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1891e4: 0x8e430000
    ctx->pc = 0x1891e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1891e8: 0xae03000c
    ctx->pc = 0x1891e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1891ec: 0x8e220000
    ctx->pc = 0x1891ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1891f0: 0x1840000f
    ctx->pc = 0x1891F0u;
    {
        const bool branch_taken_0x1891f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1891F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1891f0) {
            ctx->pc = 0x189230u;
            goto label_189230;
        }
    }
    ctx->pc = 0x1891F8u;
    // 0x1891f8: 0x26060010
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1891fc: 0x3c080029
    ctx->pc = 0x1891fcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x189200: 0xe51021
    ctx->pc = 0x189200u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x189204: 0x0
    ctx->pc = 0x189204u;
    // NOP
label_189208:
    // 0x189208: 0xc52021
    ctx->pc = 0x189208u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18920c: 0x90430000
    ctx->pc = 0x18920cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189210: 0x24a50001
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x189214: 0xa0830000
    ctx->pc = 0x189214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x189218: 0x8e220000
    ctx->pc = 0x189218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18921c: 0xa2102a
    ctx->pc = 0x18921cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x189220: 0x1440fff9
    ctx->pc = 0x189220u;
    {
        const bool branch_taken_0x189220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189224u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x189220) {
            ctx->pc = 0x189208u;
            goto label_189208;
        }
    }
    ctx->pc = 0x189228u;
    // 0x189228: 0x10000003
    ctx->pc = 0x189228u;
    {
        const bool branch_taken_0x189228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18922Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 10), 3072));
        if (branch_taken_0x189228) {
            ctx->pc = 0x189238u;
            goto label_189238;
        }
    }
    ctx->pc = 0x189230u;
label_189230:
    // 0x189230: 0x3c080029
    ctx->pc = 0x189230u;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x189234: 0x25470c00
    ctx->pc = 0x189234u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 10), 3072));
label_189238:
    // 0x189238: 0x3c058000
    ctx->pc = 0x189238u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x18923c: 0x25040b88
    ctx->pc = 0x18923cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 2952));
    // 0x189240: 0xafa00000
    ctx->pc = 0x189240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189244: 0x34a51318
    ctx->pc = 0x189244u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4888));
    // 0x189248: 0x302d
    ctx->pc = 0x189248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18924c: 0x24080280
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189250: 0xe0482d
    ctx->pc = 0x189250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189254: 0x240a0280
    ctx->pc = 0x189254u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189258: 0xc045e7a
    ctx->pc = 0x189258u;
    SET_GPR_U32(ctx, 31, 0x189260u);
    ctx->pc = 0x18925Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189260u; }
    }
    if (ctx->pc != 0x189260u) { return; }
    ctx->pc = 0x189260u;
    // 0x189260: 0x4430006
    ctx->pc = 0x189260u;
    {
        const bool branch_taken_0x189260 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189260) {
            ctx->pc = 0x189264u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1040)));
            ctx->pc = 0x18927Cu;
            goto label_18927c;
        }
    }
    ctx->pc = 0x189268u;
    // 0x189268: 0x3c040024
    ctx->pc = 0x189268u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18926c: 0xc0625f6
    ctx->pc = 0x18926Cu;
    SET_GPR_U32(ctx, 31, 0x189274u);
    ctx->pc = 0x189270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6632));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189274u; }
    }
    if (ctx->pc != 0x189274u) { return; }
    ctx->pc = 0x189274u;
    // 0x189274: 0x10000017
    ctx->pc = 0x189274u;
    {
        const bool branch_taken_0x189274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189278u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189274) {
            ctx->pc = 0x1892D4u;
            goto label_1892d4;
        }
    }
    ctx->pc = 0x18927Cu;
label_18927c:
    // 0x18927c: 0x4400016
    ctx->pc = 0x18927Cu;
    {
        const bool branch_taken_0x18927c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189280u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x18927c) {
            ctx->pc = 0x1892D8u;
            goto label_1892d8;
        }
    }
    ctx->pc = 0x189284u;
    // 0x189284: 0x8e020008
    ctx->pc = 0x189284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189288: 0xae220000
    ctx->pc = 0x189288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18928c: 0x8e03000c
    ctx->pc = 0x18928cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189290: 0xae430000
    ctx->pc = 0x189290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x189294: 0x8e02000c
    ctx->pc = 0x189294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189298: 0x1840000d
    ctx->pc = 0x189298u;
    {
        const bool branch_taken_0x189298 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18929Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189298) {
            ctx->pc = 0x1892D0u;
            goto label_1892d0;
        }
    }
    ctx->pc = 0x1892A0u;
    // 0x1892a0: 0x26060210
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 528));
    // 0x1892a4: 0xc51021
    ctx->pc = 0x1892a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1892a8:
    // 0x1892a8: 0x2652021
    ctx->pc = 0x1892a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1892ac: 0x90430000
    ctx->pc = 0x1892acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1892b0: 0x24a50001
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1892b4: 0xa0830000
    ctx->pc = 0x1892b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1892b8: 0x8e02000c
    ctx->pc = 0x1892b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1892bc: 0xa2102a
    ctx->pc = 0x1892bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1892c0: 0x1440fff9
    ctx->pc = 0x1892C0u;
    {
        const bool branch_taken_0x1892c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1892C4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        if (branch_taken_0x1892c0) {
            ctx->pc = 0x1892A8u;
            goto label_1892a8;
        }
    }
    ctx->pc = 0x1892C8u;
    // 0x1892c8: 0x10000002
    ctx->pc = 0x1892C8u;
    {
        const bool branch_taken_0x1892c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1892CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1040)));
        if (branch_taken_0x1892c8) {
            ctx->pc = 0x1892D4u;
            goto label_1892d4;
        }
    }
    ctx->pc = 0x1892D0u;
label_1892d0:
    // 0x1892d0: 0x8e020410
    ctx->pc = 0x1892d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_1892d4:
    // 0x1892d4: 0xdfbf0050
    ctx->pc = 0x1892d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1892d8:
    // 0x1892d8: 0xdfb30040
    ctx->pc = 0x1892d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1892dc: 0xdfb20030
    ctx->pc = 0x1892dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1892e0: 0xdfb10020
    ctx->pc = 0x1892e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1892e4: 0xdfb00010
    ctx->pc = 0x1892e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1892e8: 0x3e00008
    ctx->pc = 0x1892E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1892ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189198u: goto label_189198;
            case 0x189208u: goto label_189208;
            case 0x189230u: goto label_189230;
            case 0x189238u: goto label_189238;
            case 0x18927Cu: goto label_18927c;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x189360u: goto label_189360;
            case 0x189388u: goto label_189388;
            case 0x189390u: goto label_189390;
            case 0x1893DCu: goto label_1893dc;
            case 0x1893ECu: goto label_1893ec;
            case 0x1893F8u: goto label_1893f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1892F0u;
    // 0x1892f0: 0x27bdff80
    ctx->pc = 0x1892f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1892f4: 0xffb50060
    ctx->pc = 0x1892f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1892f8: 0xffb10020
    ctx->pc = 0x1892f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1892fc: 0x3c150029
    ctx->pc = 0x1892fcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)41 << 16));
    // 0x189300: 0x80882d
    ctx->pc = 0x189300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189304: 0xffb40050
    ctx->pc = 0x189304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x189308: 0xffb30040
    ctx->pc = 0x189308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x18930c: 0xe0a02d
    ctx->pc = 0x18930cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189310: 0xffb00010
    ctx->pc = 0x189310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x189314: 0xc0982d
    ctx->pc = 0x189314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189318: 0x8ea44140
    ctx->pc = 0x189318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    // 0x18931c: 0xffb20030
    ctx->pc = 0x18931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x189320: 0xffbf0070
    ctx->pc = 0x189320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x189324: 0xc045198
    ctx->pc = 0x189324u;
    SET_GPR_U32(ctx, 31, 0x18932Cu);
    ctx->pc = 0x189328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18932Cu; }
    }
    if (ctx->pc != 0x18932Cu) { return; }
    ctx->pc = 0x18932Cu;
    // 0x18932c: 0x3c070029
    ctx->pc = 0x18932cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x189330: 0xacf10c00
    ctx->pc = 0x189330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3072), GPR_U32(ctx, 17));
    // 0x189334: 0x24f20c00
    ctx->pc = 0x189334u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 7), 3072));
    // 0x189338: 0xae500004
    ctx->pc = 0x189338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x18933c: 0x8e620000
    ctx->pc = 0x18933cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189340: 0xae420008
    ctx->pc = 0x189340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x189344: 0x8e630000
    ctx->pc = 0x189344u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189348: 0x1860000f
    ctx->pc = 0x189348u;
    {
        const bool branch_taken_0x189348 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18934Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189348) {
            ctx->pc = 0x189388u;
            goto label_189388;
        }
    }
    ctx->pc = 0x189350u;
    // 0x189350: 0x2646000c
    ctx->pc = 0x189350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 12));
    // 0x189354: 0x3c080029
    ctx->pc = 0x189354u;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x189358: 0x2851021
    ctx->pc = 0x189358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x18935c: 0x0
    ctx->pc = 0x18935cu;
    // NOP
label_189360:
    // 0x189360: 0xc52021
    ctx->pc = 0x189360u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x189364: 0x90430000
    ctx->pc = 0x189364u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189368: 0x24a50001
    ctx->pc = 0x189368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x18936c: 0xa0830000
    ctx->pc = 0x18936cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x189370: 0x8e620000
    ctx->pc = 0x189370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189374: 0xa2102a
    ctx->pc = 0x189374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x189378: 0x1440fff9
    ctx->pc = 0x189378u;
    {
        const bool branch_taken_0x189378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18937Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        if (branch_taken_0x189378) {
            ctx->pc = 0x189360u;
            goto label_189360;
        }
    }
    ctx->pc = 0x189380u;
    // 0x189380: 0x10000003
    ctx->pc = 0x189380u;
    {
        const bool branch_taken_0x189380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189384u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3072));
        if (branch_taken_0x189380) {
            ctx->pc = 0x189390u;
            goto label_189390;
        }
    }
    ctx->pc = 0x189388u;
label_189388:
    // 0x189388: 0x3c080029
    ctx->pc = 0x189388u;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x18938c: 0x24e70c00
    ctx->pc = 0x18938cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3072));
label_189390:
    // 0x189390: 0x3c058000
    ctx->pc = 0x189390u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x189394: 0x25040b88
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 2952));
    // 0x189398: 0xafa00000
    ctx->pc = 0x189398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18939c: 0x34a51319
    ctx->pc = 0x18939cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4889));
    // 0x1893a0: 0x302d
    ctx->pc = 0x1893a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893a4: 0x24080280
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1893a8: 0xe0482d
    ctx->pc = 0x1893a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893ac: 0x240a0280
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1893b0: 0xc045e7a
    ctx->pc = 0x1893B0u;
    SET_GPR_U32(ctx, 31, 0x1893B8u);
    ctx->pc = 0x1893B4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893B8u; }
    }
    if (ctx->pc != 0x1893B8u) { return; }
    ctx->pc = 0x1893B8u;
    // 0x1893b8: 0x4430008
    ctx->pc = 0x1893B8u;
    {
        const bool branch_taken_0x1893b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1893b8) {
            ctx->pc = 0x1893BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 524)));
            ctx->pc = 0x1893DCu;
            goto label_1893dc;
        }
    }
    ctx->pc = 0x1893C0u;
    // 0x1893c0: 0x3c040024
    ctx->pc = 0x1893c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1893c4: 0xc0625f6
    ctx->pc = 0x1893C4u;
    SET_GPR_U32(ctx, 31, 0x1893CCu);
    ctx->pc = 0x1893C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6664));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893CCu; }
    }
    if (ctx->pc != 0x1893CCu) { return; }
    ctx->pc = 0x1893CCu;
    // 0x1893cc: 0xc045190
    ctx->pc = 0x1893CCu;
    SET_GPR_U32(ctx, 31, 0x1893D4u);
    ctx->pc = 0x1893D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893D4u; }
    }
    if (ctx->pc != 0x1893D4u) { return; }
    ctx->pc = 0x1893D4u;
    // 0x1893d4: 0x10000008
    ctx->pc = 0x1893D4u;
    {
        const bool branch_taken_0x1893d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1893D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1893d4) {
            ctx->pc = 0x1893F8u;
            goto label_1893f8;
        }
    }
    ctx->pc = 0x1893DCu;
label_1893dc:
    // 0x1893dc: 0x4400003
    ctx->pc = 0x1893DCu;
    {
        const bool branch_taken_0x1893dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1893dc) {
            ctx->pc = 0x1893ECu;
            goto label_1893ec;
        }
    }
    ctx->pc = 0x1893E4u;
    // 0x1893e4: 0x8e420008
    ctx->pc = 0x1893e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1893e8: 0xae620000
    ctx->pc = 0x1893e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1893ec:
    // 0x1893ec: 0xc045190
    ctx->pc = 0x1893ECu;
    SET_GPR_U32(ctx, 31, 0x1893F4u);
    ctx->pc = 0x1893F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893F4u; }
    }
    if (ctx->pc != 0x1893F4u) { return; }
    ctx->pc = 0x1893F4u;
    // 0x1893f4: 0x8e42020c
    ctx->pc = 0x1893f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_1893f8:
    // 0x1893f8: 0xdfbf0070
    ctx->pc = 0x1893f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1893fc: 0xdfb50060
    ctx->pc = 0x1893fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189400: 0xdfb40050
    ctx->pc = 0x189400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189404: 0xdfb30040
    ctx->pc = 0x189404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189408: 0xdfb20030
    ctx->pc = 0x189408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18940c: 0xdfb10020
    ctx->pc = 0x18940cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189410: 0xdfb00010
    ctx->pc = 0x189410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189414: 0x3e00008
    ctx->pc = 0x189414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189198u: goto label_189198;
            case 0x189208u: goto label_189208;
            case 0x189230u: goto label_189230;
            case 0x189238u: goto label_189238;
            case 0x18927Cu: goto label_18927c;
            case 0x1892A8u: goto label_1892a8;
            case 0x1892D0u: goto label_1892d0;
            case 0x1892D4u: goto label_1892d4;
            case 0x1892D8u: goto label_1892d8;
            case 0x189360u: goto label_189360;
            case 0x189388u: goto label_189388;
            case 0x189390u: goto label_189390;
            case 0x1893DCu: goto label_1893dc;
            case 0x1893ECu: goto label_1893ec;
            case 0x1893F8u: goto label_1893f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18941Cu;
    // 0x18941c: 0x0
    ctx->pc = 0x18941cu;
    // NOP
}
