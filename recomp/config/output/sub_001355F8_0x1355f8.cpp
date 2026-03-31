#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001355F8
// Address: 0x1355f8 - 0x135730
void sub_001355F8_0x1355f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1355f8u;

    // 0x1355f8: 0x27bdfff0
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1355fc: 0xffb00000
    ctx->pc = 0x1355fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135600: 0xffbf0008
    ctx->pc = 0x135600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x135604: 0xc042c56
    ctx->pc = 0x135604u;
    SET_GPR_U32(ctx, 31, 0x13560Cu);
    ctx->pc = 0x135608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13560Cu; }
    }
    if (ctx->pc != 0x13560Cu) { return; }
    ctx->pc = 0x13560Cu;
    // 0x13560c: 0x24420001
    ctx->pc = 0x13560cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x135610: 0x1040000d
    ctx->pc = 0x135610u;
    {
        const bool branch_taken_0x135610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x135614u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135610) {
            ctx->pc = 0x135648u;
            goto label_135648;
        }
    }
    ctx->pc = 0x135618u;
    // 0x135618: 0x40382d
    ctx->pc = 0x135618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13561c: 0x2062021
    ctx->pc = 0x13561cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_135620:
    // 0x135620: 0x24c60001
    ctx->pc = 0x135620u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x135624: 0x90820000
    ctx->pc = 0x135624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135628: 0x2443ffe0
    ctx->pc = 0x135628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x13562c: 0x2442ff9f
    ctx->pc = 0x13562cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x135630: 0x2c42001a
    ctx->pc = 0x135630u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x135634: 0x10400002
    ctx->pc = 0x135634u;
    {
        const bool branch_taken_0x135634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x135638u;
        SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        if (branch_taken_0x135634) {
            ctx->pc = 0x135640u;
            goto label_135640;
        }
    }
    ctx->pc = 0x13563Cu;
    // 0x13563c: 0xa0830000
    ctx->pc = 0x13563cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_135640:
    // 0x135640: 0x14a0fff7
    ctx->pc = 0x135640u;
    {
        const bool branch_taken_0x135640 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x135644u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        if (branch_taken_0x135640) {
            ctx->pc = 0x135620u;
            goto label_135620;
        }
    }
    ctx->pc = 0x135648u;
label_135648:
    // 0x135648: 0xdfb00000
    ctx->pc = 0x135648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13564c: 0xdfbf0008
    ctx->pc = 0x13564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135650: 0x3e00008
    ctx->pc = 0x135650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135620u: goto label_135620;
            case 0x135640u: goto label_135640;
            case 0x135648u: goto label_135648;
            case 0x1356B0u: goto label_1356b0;
            case 0x1356C0u: goto label_1356c0;
            case 0x1356E0u: goto label_1356e0;
            case 0x135708u: goto label_135708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135658u;
    // 0x135658: 0x27bdffc0
    ctx->pc = 0x135658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13565c: 0xffb20010
    ctx->pc = 0x13565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135660: 0x80902d
    ctx->pc = 0x135660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135664: 0xffb00000
    ctx->pc = 0x135664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135668: 0xffb10008
    ctx->pc = 0x135668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13566c: 0xffb30018
    ctx->pc = 0x13566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x135670: 0xffb40020
    ctx->pc = 0x135670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x135674: 0xffb50028
    ctx->pc = 0x135674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x135678: 0x16400011
    ctx->pc = 0x135678u;
    {
        const bool branch_taken_0x135678 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x13567Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x135678) {
            ctx->pc = 0x1356C0u;
            goto label_1356c0;
        }
    }
    ctx->pc = 0x135680u;
    // 0x135680: 0x3c040024
    ctx->pc = 0x135680u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x135684: 0xdfb00000
    ctx->pc = 0x135684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135688: 0xdfb10008
    ctx->pc = 0x135688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13568c: 0x2484b828
    ctx->pc = 0x13568cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948904));
    // 0x135690: 0xdfb20010
    ctx->pc = 0x135690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135694: 0xdfb30018
    ctx->pc = 0x135694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135698: 0xdfb40020
    ctx->pc = 0x135698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13569c: 0xdfb50028
    ctx->pc = 0x13569cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1356a0: 0xdfbf0030
    ctx->pc = 0x1356a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1356a4: 0x804d480
    ctx->pc = 0x1356A4u;
    ctx->pc = 0x1356A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x1356ACu;
    // 0x1356ac: 0x0
    ctx->pc = 0x1356acu;
    // NOP
label_1356b0:
    // 0x1356b0: 0x26a2fffc
    ctx->pc = 0x1356b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x1356b4: 0x2621021
    ctx->pc = 0x1356b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1356b8: 0x10000013
    ctx->pc = 0x1356B8u;
    {
        const bool branch_taken_0x1356b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1356BCu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1356b8) {
            ctx->pc = 0x135708u;
            goto label_135708;
        }
    }
    ctx->pc = 0x1356C0u;
label_1356c0:
    // 0x1356c0: 0xc042c56
    ctx->pc = 0x1356C0u;
    SET_GPR_U32(ctx, 31, 0x1356C8u);
    ctx->pc = 0x1356C4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1356C8u; }
    }
    if (ctx->pc != 0x1356C8u) { return; }
    ctx->pc = 0x1356C8u;
    // 0x1356c8: 0x40a02d
    ctx->pc = 0x1356c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356cc: 0x3c020026
    ctx->pc = 0x1356ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1356d0: 0x2451206c
    ctx->pc = 0x1356d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 8300));
    // 0x1356d4: 0x220a82d
    ctx->pc = 0x1356d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356d8: 0x220282d
    ctx->pc = 0x1356d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356dc: 0x0
    ctx->pc = 0x1356dcu;
    // NOP
label_1356e0:
    // 0x1356e0: 0x26310010
    ctx->pc = 0x1356e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1356e4: 0x240202d
    ctx->pc = 0x1356e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356e8: 0x280302d
    ctx->pc = 0x1356e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356ec: 0x109900
    ctx->pc = 0x1356ecu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 16), 4));
    // 0x1356f0: 0xc042d10
    ctx->pc = 0x1356F0u;
    SET_GPR_U32(ctx, 31, 0x1356F8u);
    ctx->pc = 0x1356F4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1356F8u; }
    }
    if (ctx->pc != 0x1356F8u) { return; }
    ctx->pc = 0x1356F8u;
    // 0x1356f8: 0x1040ffed
    ctx->pc = 0x1356F8u;
    {
        const bool branch_taken_0x1356f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1356FCu;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x1356f8) {
            ctx->pc = 0x1356B0u;
            goto label_1356b0;
        }
    }
    ctx->pc = 0x135700u;
    // 0x135700: 0x1460fff7
    ctx->pc = 0x135700u;
    {
        const bool branch_taken_0x135700 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x135704u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135700) {
            ctx->pc = 0x1356E0u;
            goto label_1356e0;
        }
    }
    ctx->pc = 0x135708u;
label_135708:
    // 0x135708: 0xdfb00000
    ctx->pc = 0x135708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13570c: 0xdfb10008
    ctx->pc = 0x13570cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135710: 0xdfb20010
    ctx->pc = 0x135710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135714: 0xdfb30018
    ctx->pc = 0x135714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135718: 0xdfb40020
    ctx->pc = 0x135718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13571c: 0xdfb50028
    ctx->pc = 0x13571cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135720: 0xdfbf0030
    ctx->pc = 0x135720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135724: 0x3e00008
    ctx->pc = 0x135724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135620u: goto label_135620;
            case 0x135640u: goto label_135640;
            case 0x135648u: goto label_135648;
            case 0x1356B0u: goto label_1356b0;
            case 0x1356C0u: goto label_1356c0;
            case 0x1356E0u: goto label_1356e0;
            case 0x135708u: goto label_135708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13572Cu;
    // 0x13572c: 0x0
    ctx->pc = 0x13572cu;
    // NOP
}
