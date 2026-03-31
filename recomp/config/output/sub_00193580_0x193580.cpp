#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193580
// Address: 0x193580 - 0x1936d0
void sub_00193580_0x193580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193580u;

    // 0x193580: 0x302d
    ctx->pc = 0x193580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193584: 0x8064d64
    ctx->pc = 0x193584u;
    ctx->pc = 0x193588u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x193590u;
    goto label_193590;
    ctx->pc = 0x19358Cu;
    // 0x19358c: 0x0
    ctx->pc = 0x19358cu;
    // NOP
label_193590:
    // 0x193590: 0x27bdffa0
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x193594: 0xffbf0050
    ctx->pc = 0x193594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x193598: 0x7fb40040
    ctx->pc = 0x193598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19359c: 0x7fb30030
    ctx->pc = 0x19359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1935a0: 0x80a02d
    ctx->pc = 0x1935a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935a4: 0x7fb20020
    ctx->pc = 0x1935a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1935a8: 0xe0982d
    ctx->pc = 0x1935a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935ac: 0x7fb10010
    ctx->pc = 0x1935acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1935b0: 0xa0202d
    ctx->pc = 0x1935b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935b4: 0xc063728
    ctx->pc = 0x1935B4u;
    SET_GPR_U32(ctx, 31, 0x1935BCu);
    ctx->pc = 0x1935B8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935BCu; }
    }
    if (ctx->pc != 0x1935BCu) { return; }
    ctx->pc = 0x1935BCu;
    // 0x1935bc: 0x84520002
    ctx->pc = 0x1935bcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1935c0: 0x40882d
    ctx->pc = 0x1935c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935c4: 0x10000019
    ctx->pc = 0x1935C4u;
    {
        const bool branch_taken_0x1935c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1935C8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1935c4) {
            ctx->pc = 0x19362Cu;
            goto label_19362c;
        }
    }
    ctx->pc = 0x1935CCu;
label_1935cc:
    // 0x1935cc: 0x2403ffff
    ctx->pc = 0x1935ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1935d0: 0x2822021
    ctx->pc = 0x1935d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1935d4: 0x8c820000
    ctx->pc = 0x1935d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1935d8: 0xa45200c2
    ctx->pc = 0x1935d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 18));
    // 0x1935dc: 0x8c820000
    ctx->pc = 0x1935dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1935e0: 0xa4430180
    ctx->pc = 0x1935e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 384), (uint16_t)GPR_U32(ctx, 3));
    // 0x1935e4: 0x8c820000
    ctx->pc = 0x1935e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1935e8: 0xa4430182
    ctx->pc = 0x1935e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 386), (uint16_t)GPR_U32(ctx, 3));
    // 0x1935ec: 0x8c820000
    ctx->pc = 0x1935ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1935f0: 0xac4000cc
    ctx->pc = 0x1935f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x1935f4: 0x8c820000
    ctx->pc = 0x1935f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1935f8: 0xac4000d0
    ctx->pc = 0x1935f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x1935fc: 0x8c820000
    ctx->pc = 0x1935fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193600: 0xac4000d4
    ctx->pc = 0x193600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x193604: 0x8c820000
    ctx->pc = 0x193604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193608: 0xac4000d8
    ctx->pc = 0x193608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x19360c: 0x8c820000
    ctx->pc = 0x19360cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193610: 0xac400178
    ctx->pc = 0x193610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 0));
    // 0x193614: 0x8c820000
    ctx->pc = 0x193614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193618: 0xac40017c
    ctx->pc = 0x193618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 0));
    // 0x19361c: 0x8c820000
    ctx->pc = 0x19361cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193620: 0xc063f7c
    ctx->pc = 0x193620u;
    SET_GPR_U32(ctx, 31, 0x193628u);
    ctx->pc = 0x193624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193628u; }
    }
    if (ctx->pc != 0x193628u) { return; }
    ctx->pc = 0x193628u;
    // 0x193628: 0x26100001
    ctx->pc = 0x193628u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_19362c:
    // 0x19362c: 0x212102a
    ctx->pc = 0x19362cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x193630: 0x1440ffe6
    ctx->pc = 0x193630u;
    {
        const bool branch_taken_0x193630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193634u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x193630) {
            ctx->pc = 0x1935CCu;
            goto label_1935cc;
        }
    }
    ctx->pc = 0x193638u;
    // 0x193638: 0x10000007
    ctx->pc = 0x193638u;
    {
        const bool branch_taken_0x193638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19363Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193638) {
            ctx->pc = 0x193658u;
            goto label_193658;
        }
    }
    ctx->pc = 0x193640u;
label_193640:
    // 0x193640: 0x220282d
    ctx->pc = 0x193640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193644: 0x2821021
    ctx->pc = 0x193644u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193648: 0x8c440000
    ctx->pc = 0x193648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19364c: 0xc064ef4
    ctx->pc = 0x19364Cu;
    SET_GPR_U32(ctx, 31, 0x193654u);
    ctx->pc = 0x193650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193BD0_0x193bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193654u; }
    }
    if (ctx->pc != 0x193654u) { return; }
    ctx->pc = 0x193654u;
    // 0x193654: 0x26100001
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_193658:
    // 0x193658: 0x212102a
    ctx->pc = 0x193658u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x19365c: 0x1440fff8
    ctx->pc = 0x19365Cu;
    {
        const bool branch_taken_0x19365c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193660u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x19365c) {
            ctx->pc = 0x193640u;
            goto label_193640;
        }
    }
    ctx->pc = 0x193664u;
    // 0x193664: 0x8e850000
    ctx->pc = 0x193664u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x193668: 0x280202d
    ctx->pc = 0x193668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19366c: 0xc064db4
    ctx->pc = 0x19366Cu;
    SET_GPR_U32(ctx, 31, 0x193674u);
    ctx->pc = 0x193670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1936D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001936D0_0x1936d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193674u; }
    }
    if (ctx->pc != 0x193674u) { return; }
    ctx->pc = 0x193674u;
    // 0x193674: 0x24020001
    ctx->pc = 0x193674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193678: 0x12620009
    ctx->pc = 0x193678u;
    {
        const bool branch_taken_0x193678 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x193678) {
            ctx->pc = 0x1936A0u;
            goto label_1936a0;
        }
    }
    ctx->pc = 0x193680u;
    // 0x193680: 0x12600003
    ctx->pc = 0x193680u;
    {
        const bool branch_taken_0x193680 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x193680) {
            ctx->pc = 0x193690u;
            goto label_193690;
        }
    }
    ctx->pc = 0x193688u;
    // 0x193688: 0x10000008
    ctx->pc = 0x193688u;
    {
        const bool branch_taken_0x193688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19368Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x193688) {
            ctx->pc = 0x1936ACu;
            goto label_1936ac;
        }
    }
    ctx->pc = 0x193690u;
label_193690:
    // 0x193690: 0xc064ddc
    ctx->pc = 0x193690u;
    SET_GPR_U32(ctx, 31, 0x193698u);
    ctx->pc = 0x193694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193770_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193698u; }
    }
    if (ctx->pc != 0x193698u) { return; }
    ctx->pc = 0x193698u;
    // 0x193698: 0x10000003
    ctx->pc = 0x193698u;
    {
        const bool branch_taken_0x193698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193698) {
            ctx->pc = 0x1936A8u;
            goto label_1936a8;
        }
    }
    ctx->pc = 0x1936A0u;
label_1936a0:
    // 0x1936a0: 0xc064e20
    ctx->pc = 0x1936A0u;
    SET_GPR_U32(ctx, 31, 0x1936A8u);
    ctx->pc = 0x1936A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x193880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193880_0x193880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936A8u; }
    }
    if (ctx->pc != 0x1936A8u) { return; }
    ctx->pc = 0x1936A8u;
label_1936a8:
    // 0x1936a8: 0xdfbf0050
    ctx->pc = 0x1936a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1936ac:
    // 0x1936ac: 0x24020001
    ctx->pc = 0x1936acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1936b0: 0x7bb40040
    ctx->pc = 0x1936b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1936b4: 0x7bb30030
    ctx->pc = 0x1936b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1936b8: 0x7bb20020
    ctx->pc = 0x1936b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936bc: 0x7bb10010
    ctx->pc = 0x1936bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1936c0: 0x7bb00000
    ctx->pc = 0x1936c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1936c4: 0x3e00008
    ctx->pc = 0x1936C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1936C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193590u: goto label_193590;
            case 0x1935CCu: goto label_1935cc;
            case 0x19362Cu: goto label_19362c;
            case 0x193640u: goto label_193640;
            case 0x193658u: goto label_193658;
            case 0x193690u: goto label_193690;
            case 0x1936A0u: goto label_1936a0;
            case 0x1936A8u: goto label_1936a8;
            case 0x1936ACu: goto label_1936ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1936CCu;
    // 0x1936cc: 0x0
    ctx->pc = 0x1936ccu;
    // NOP
}
