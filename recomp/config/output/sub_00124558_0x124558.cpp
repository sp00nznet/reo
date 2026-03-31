#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124558
// Address: 0x124558 - 0x1247a0
void sub_00124558_0x124558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124558u;

label_124558:
    // 0x124558: 0x3c020021
    ctx->pc = 0x124558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12455c: 0x27bdffd0
    ctx->pc = 0x12455cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124560: 0x8c43b93c
    ctx->pc = 0x124560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949180)));
    // 0x124564: 0xffb00000
    ctx->pc = 0x124564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124568: 0xa0802d
    ctx->pc = 0x124568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12456c: 0xffb10008
    ctx->pc = 0x12456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124570: 0x80882d
    ctx->pc = 0x124570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124574: 0xffb20010
    ctx->pc = 0x124574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124578: 0xc0902d
    ctx->pc = 0x124578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12457c: 0xffb30018
    ctx->pc = 0x12457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124580: 0xe0982d
    ctx->pc = 0x124580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124584: 0xffb40020
    ctx->pc = 0x124584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124588: 0x100a02d
    ctx->pc = 0x124588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12458c: 0x14600003
    ctx->pc = 0x12458Cu;
    {
        const bool branch_taken_0x12458c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x124590u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x12458c) {
            ctx->pc = 0x12459Cu;
            goto label_12459c;
        }
    }
    ctx->pc = 0x124594u;
    // 0x124594: 0xc049146
    ctx->pc = 0x124594u;
    SET_GPR_U32(ctx, 31, 0x12459Cu);
    ctx->pc = 0x124518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124518_0x124518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12459Cu; }
    }
    if (ctx->pc != 0x12459Cu) { return; }
    ctx->pc = 0x12459Cu;
label_12459c:
    // 0x12459c: 0xa6400000
    ctx->pc = 0x12459cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1245a0: 0xa6600000
    ctx->pc = 0x1245a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1245a4: 0x16200003
    ctx->pc = 0x1245A4u;
    {
        const bool branch_taken_0x1245a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1245A8u;
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1245a4) {
            ctx->pc = 0x1245B4u;
            goto label_1245b4;
        }
    }
    ctx->pc = 0x1245ACu;
    // 0x1245ac: 0x1a00004f
    ctx->pc = 0x1245ACu;
    {
        const bool branch_taken_0x1245ac = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1245B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1245ac) {
            ctx->pc = 0x1246ECu;
            goto label_1246ec;
        }
    }
    ctx->pc = 0x1245B4u;
label_1245b4:
    // 0x1245b4: 0x3c0b0024
    ctx->pc = 0x1245b4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)36 << 16));
    // 0x1245b8: 0x382d
    ctx->pc = 0x1245b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245bc: 0x25629360
    ctx->pc = 0x1245bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 4294939488));
    // 0x1245c0: 0x1a000018
    ctx->pc = 0x1245C0u;
    {
        const bool branch_taken_0x1245c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1245C4u;
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        if (branch_taken_0x1245c0) {
            ctx->pc = 0x124624u;
            goto label_124624;
        }
    }
    ctx->pc = 0x1245C8u;
    // 0x1245c8: 0x40402d
    ctx->pc = 0x1245c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245cc: 0x0
    ctx->pc = 0x1245ccu;
    // NOP
label_1245d0:
    // 0x1245d0: 0x2271821
    ctx->pc = 0x1245d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1245d4: 0x24e70001
    ctx->pc = 0x1245d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1245d8: 0x80620000
    ctx->pc = 0x1245d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1245dc: 0xf0302a
    ctx->pc = 0x1245dcu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x1245e0: 0x21040
    ctx->pc = 0x1245e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1245e4: 0x481021
    ctx->pc = 0x1245e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1245e8: 0x84430100
    ctx->pc = 0x1245e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1245ec: 0x1431818
    ctx->pc = 0x1245ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1245f0: 0x246503ff
    ctx->pc = 0x1245f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1245f4: 0x28640000
    ctx->pc = 0x1245f4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x1245f8: 0x60102d
    ctx->pc = 0x1245f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245fc: 0xa4100b
    ctx->pc = 0x1245fcu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x124600: 0x21283
    ctx->pc = 0x124600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x124604: 0x21280
    ctx->pc = 0x124604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x124608: 0x621823
    ctx->pc = 0x124608u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12460c: 0x31840
    ctx->pc = 0x12460cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x124610: 0x681821
    ctx->pc = 0x124610u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x124614: 0x14c0ffee
    ctx->pc = 0x124614u;
    {
        const bool branch_taken_0x124614 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x124618u;
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x124614) {
            ctx->pc = 0x1245D0u;
            goto label_1245d0;
        }
    }
    ctx->pc = 0x12461Cu;
    // 0x12461c: 0x25629360
    ctx->pc = 0x12461cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 4294939488));
    // 0x124620: 0x382d
    ctx->pc = 0x124620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124624:
    // 0x124624: 0x1a000015
    ctx->pc = 0x124624u;
    {
        const bool branch_taken_0x124624 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x124628u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        if (branch_taken_0x124624) {
            ctx->pc = 0x12467Cu;
            goto label_12467c;
        }
    }
    ctx->pc = 0x12462Cu;
    // 0x12462c: 0x40482d
    ctx->pc = 0x12462cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124630:
    // 0x124630: 0x2271821
    ctx->pc = 0x124630u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x124634: 0x24e70001
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x124638: 0x80620000
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12463c: 0xf0302a
    ctx->pc = 0x12463cu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x124640: 0x21040
    ctx->pc = 0x124640u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x124644: 0x491021
    ctx->pc = 0x124644u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x124648: 0x84430100
    ctx->pc = 0x124648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x12464c: 0x1031818
    ctx->pc = 0x12464cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x124650: 0x246503ff
    ctx->pc = 0x124650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x124654: 0x28640000
    ctx->pc = 0x124654u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x124658: 0x60102d
    ctx->pc = 0x124658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12465c: 0xa4100b
    ctx->pc = 0x12465cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x124660: 0x21283
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x124664: 0x21280
    ctx->pc = 0x124664u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x124668: 0x621823
    ctx->pc = 0x124668u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12466c: 0x31840
    ctx->pc = 0x12466cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x124670: 0x691821
    ctx->pc = 0x124670u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x124674: 0x14c0ffee
    ctx->pc = 0x124674u;
    {
        const bool branch_taken_0x124674 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x124678u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x124674) {
            ctx->pc = 0x124630u;
            goto label_124630;
        }
    }
    ctx->pc = 0x12467Cu;
label_12467c:
    // 0x12467c: 0x25629360
    ctx->pc = 0x12467cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 4294939488));
    // 0x124680: 0x382d
    ctx->pc = 0x124680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124684: 0x1a000015
    ctx->pc = 0x124684u;
    {
        const bool branch_taken_0x124684 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x124688u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        if (branch_taken_0x124684) {
            ctx->pc = 0x1246DCu;
            goto label_1246dc;
        }
    }
    ctx->pc = 0x12468Cu;
    // 0x12468c: 0x40482d
    ctx->pc = 0x12468cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124690:
    // 0x124690: 0x2271821
    ctx->pc = 0x124690u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x124694: 0x24e70001
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x124698: 0x80620000
    ctx->pc = 0x124698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12469c: 0xf0302a
    ctx->pc = 0x12469cu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x1246a0: 0x21040
    ctx->pc = 0x1246a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1246a4: 0x491021
    ctx->pc = 0x1246a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1246a8: 0x84430100
    ctx->pc = 0x1246a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1246ac: 0x831818
    ctx->pc = 0x1246acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1246b0: 0x28640000
    ctx->pc = 0x1246b0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x1246b4: 0x246503ff
    ctx->pc = 0x1246b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1246b8: 0x60102d
    ctx->pc = 0x1246b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246bc: 0xa4100b
    ctx->pc = 0x1246bcu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x1246c0: 0x21283
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1246c4: 0x21280
    ctx->pc = 0x1246c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x1246c8: 0x621823
    ctx->pc = 0x1246c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1246cc: 0x31840
    ctx->pc = 0x1246ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1246d0: 0x691821
    ctx->pc = 0x1246d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1246d4: 0x14c0ffee
    ctx->pc = 0x1246D4u;
    {
        const bool branch_taken_0x1246d4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1246D8u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1246d4) {
            ctx->pc = 0x124690u;
            goto label_124690;
        }
    }
    ctx->pc = 0x1246DCu;
label_1246dc:
    // 0x1246dc: 0xa64a0000
    ctx->pc = 0x1246dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1246e0: 0x102d
    ctx->pc = 0x1246e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246e4: 0xa6680000
    ctx->pc = 0x1246e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1246e8: 0xa6840000
    ctx->pc = 0x1246e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_1246ec:
    // 0x1246ec: 0xdfb00000
    ctx->pc = 0x1246ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1246f0: 0xdfb10008
    ctx->pc = 0x1246f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1246f4: 0xdfb20010
    ctx->pc = 0x1246f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1246f8: 0xdfb30018
    ctx->pc = 0x1246f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1246fc: 0xdfb40020
    ctx->pc = 0x1246fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124700: 0xdfbf0028
    ctx->pc = 0x124700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124704: 0x3e00008
    ctx->pc = 0x124704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124558u: goto label_124558;
            case 0x12459Cu: goto label_12459c;
            case 0x1245B4u: goto label_1245b4;
            case 0x1245D0u: goto label_1245d0;
            case 0x124624u: goto label_124624;
            case 0x124630u: goto label_124630;
            case 0x12467Cu: goto label_12467c;
            case 0x124690u: goto label_124690;
            case 0x1246DCu: goto label_1246dc;
            case 0x1246ECu: goto label_1246ec;
            case 0x124744u: goto label_124744;
            case 0x124760u: goto label_124760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12470Cu;
    // 0x12470c: 0x0
    ctx->pc = 0x12470cu;
    // NOP
    // 0x124710: 0x3c020021
    ctx->pc = 0x124710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x124714: 0x27bdffe0
    ctx->pc = 0x124714u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124718: 0x8c43b93c
    ctx->pc = 0x124718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294949180)));
    // 0x12471c: 0xffb00000
    ctx->pc = 0x12471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124720: 0x80802d
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124724: 0xffb10008
    ctx->pc = 0x124724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124728: 0xa0882d
    ctx->pc = 0x124728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12472c: 0xffb20010
    ctx->pc = 0x12472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124730: 0xc0902d
    ctx->pc = 0x124730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124734: 0x14600003
    ctx->pc = 0x124734u;
    {
        const bool branch_taken_0x124734 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x124738u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x124734) {
            ctx->pc = 0x124744u;
            goto label_124744;
        }
    }
    ctx->pc = 0x12473Cu;
    // 0x12473c: 0xc049146
    ctx->pc = 0x12473Cu;
    SET_GPR_U32(ctx, 31, 0x124744u);
    ctx->pc = 0x124518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124518_0x124518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124744u; }
    }
    if (ctx->pc != 0x124744u) { return; }
    ctx->pc = 0x124744u;
label_124744:
    // 0x124744: 0x3c040024
    ctx->pc = 0x124744u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x124748: 0x200302d
    ctx->pc = 0x124748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12474c: 0x220382d
    ctx->pc = 0x12474cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124750: 0x240402d
    ctx->pc = 0x124750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124754: 0x24849b60
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941536));
    // 0x124758: 0xc049156
    ctx->pc = 0x124758u;
    SET_GPR_U32(ctx, 31, 0x124760u);
    ctx->pc = 0x12475Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x124558u;
    goto label_124558;
    ctx->pc = 0x124760u;
label_124760:
    // 0x124760: 0x102d
    ctx->pc = 0x124760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124764: 0xdfb00000
    ctx->pc = 0x124764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124768: 0xdfb10008
    ctx->pc = 0x124768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12476c: 0xdfb20010
    ctx->pc = 0x12476cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124770: 0xdfbf0018
    ctx->pc = 0x124770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124774: 0x3e00008
    ctx->pc = 0x124774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124558u: goto label_124558;
            case 0x12459Cu: goto label_12459c;
            case 0x1245B4u: goto label_1245b4;
            case 0x1245D0u: goto label_1245d0;
            case 0x124624u: goto label_124624;
            case 0x124630u: goto label_124630;
            case 0x12467Cu: goto label_12467c;
            case 0x124690u: goto label_124690;
            case 0x1246DCu: goto label_1246dc;
            case 0x1246ECu: goto label_1246ec;
            case 0x124744u: goto label_124744;
            case 0x124760u: goto label_124760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12477Cu;
    // 0x12477c: 0x0
    ctx->pc = 0x12477cu;
    // NOP
    // 0x124780: 0x94a70000
    ctx->pc = 0x124780u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x124784: 0x102d
    ctx->pc = 0x124784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124788: 0x94850000
    ctx->pc = 0x124788u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12478c: 0x94c30000
    ctx->pc = 0x12478cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x124790: 0xa72818
    ctx->pc = 0x124790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x124794: 0x651821
    ctx->pc = 0x124794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x124798: 0x3e00008
    ctx->pc = 0x124798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12479Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124558u: goto label_124558;
            case 0x12459Cu: goto label_12459c;
            case 0x1245B4u: goto label_1245b4;
            case 0x1245D0u: goto label_1245d0;
            case 0x124624u: goto label_124624;
            case 0x124630u: goto label_124630;
            case 0x12467Cu: goto label_12467c;
            case 0x124690u: goto label_124690;
            case 0x1246DCu: goto label_1246dc;
            case 0x1246ECu: goto label_1246ec;
            case 0x124744u: goto label_124744;
            case 0x124760u: goto label_124760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1247A0u;
}
