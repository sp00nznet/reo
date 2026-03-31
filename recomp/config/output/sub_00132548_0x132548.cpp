#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132548
// Address: 0x132548 - 0x1326f0
void sub_00132548_0x132548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132548u;

    // 0x132548: 0x27bdfff0
    ctx->pc = 0x132548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13254c: 0x14800006
    ctx->pc = 0x13254Cu;
    {
        const bool branch_taken_0x13254c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132550u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13254c) {
            ctx->pc = 0x132568u;
            goto label_132568;
        }
    }
    ctx->pc = 0x132554u;
    // 0x132554: 0x3c040024
    ctx->pc = 0x132554u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132558: 0xc04a034
    ctx->pc = 0x132558u;
    SET_GPR_U32(ctx, 31, 0x132560u);
    ctx->pc = 0x13255Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946808));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132560u; }
    }
    if (ctx->pc != 0x132560u) { return; }
    ctx->pc = 0x132560u;
    // 0x132560: 0x10000009
    ctx->pc = 0x132560u;
    {
        const bool branch_taken_0x132560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x132560) {
            ctx->pc = 0x132588u;
            goto label_132588;
        }
    }
    ctx->pc = 0x132568u;
label_132568:
    // 0x132568: 0x80820001
    ctx->pc = 0x132568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x13256c: 0x28420002
    ctx->pc = 0x13256cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x132570: 0x54400005
    ctx->pc = 0x132570u;
    {
        const bool branch_taken_0x132570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x132570) {
            ctx->pc = 0x132574u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x132588u;
            goto label_132588;
        }
    }
    ctx->pc = 0x132578u;
    // 0x132578: 0x8c840004
    ctx->pc = 0x132578u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13257c: 0xdfbf0000
    ctx->pc = 0x13257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132580: 0x804b5ea
    ctx->pc = 0x132580u;
    ctx->pc = 0x132584u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12D7A8u;
    sub_0012D7A8_0x12d7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x132588u;
label_132588:
    // 0x132588: 0xdfbf0000
    ctx->pc = 0x132588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13258c: 0x3e00008
    ctx->pc = 0x13258Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132568u: goto label_132568;
            case 0x132588u: goto label_132588;
            case 0x1325B8u: goto label_1325b8;
            case 0x1325D8u: goto label_1325d8;
            case 0x132608u: goto label_132608;
            case 0x132628u: goto label_132628;
            case 0x132680u: goto label_132680;
            case 0x1326D0u: goto label_1326d0;
            case 0x1326DCu: goto label_1326dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132594u;
    // 0x132594: 0x0
    ctx->pc = 0x132594u;
    // NOP
    // 0x132598: 0x27bdfff0
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13259c: 0x14800006
    ctx->pc = 0x13259Cu;
    {
        const bool branch_taken_0x13259c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1325A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13259c) {
            ctx->pc = 0x1325B8u;
            goto label_1325b8;
        }
    }
    ctx->pc = 0x1325A4u;
    // 0x1325a4: 0x3c040024
    ctx->pc = 0x1325a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1325a8: 0xc04a034
    ctx->pc = 0x1325A8u;
    SET_GPR_U32(ctx, 31, 0x1325B0u);
    ctx->pc = 0x1325ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946856));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325B0u; }
    }
    if (ctx->pc != 0x1325B0u) { return; }
    ctx->pc = 0x1325B0u;
    // 0x1325b0: 0x10000009
    ctx->pc = 0x1325B0u;
    {
        const bool branch_taken_0x1325b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1325B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1325b0) {
            ctx->pc = 0x1325D8u;
            goto label_1325d8;
        }
    }
    ctx->pc = 0x1325B8u;
label_1325b8:
    // 0x1325b8: 0x80820001
    ctx->pc = 0x1325b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1325bc: 0x28420002
    ctx->pc = 0x1325bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1325c0: 0x54400005
    ctx->pc = 0x1325C0u;
    {
        const bool branch_taken_0x1325c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1325c0) {
            ctx->pc = 0x1325C4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1325D8u;
            goto label_1325d8;
        }
    }
    ctx->pc = 0x1325C8u;
    // 0x1325c8: 0x8c840004
    ctx->pc = 0x1325c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1325cc: 0xdfbf0000
    ctx->pc = 0x1325ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325d0: 0x804b684
    ctx->pc = 0x1325D0u;
    ctx->pc = 0x1325D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12DA10u;
    entry_12da10_0x12da18(rdram, ctx, runtime); return;
    ctx->pc = 0x1325D8u;
label_1325d8:
    // 0x1325d8: 0xdfbf0000
    ctx->pc = 0x1325d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325dc: 0x3e00008
    ctx->pc = 0x1325DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132568u: goto label_132568;
            case 0x132588u: goto label_132588;
            case 0x1325B8u: goto label_1325b8;
            case 0x1325D8u: goto label_1325d8;
            case 0x132608u: goto label_132608;
            case 0x132628u: goto label_132628;
            case 0x132680u: goto label_132680;
            case 0x1326D0u: goto label_1326d0;
            case 0x1326DCu: goto label_1326dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1325E4u;
    // 0x1325e4: 0x0
    ctx->pc = 0x1325e4u;
    // NOP
    // 0x1325e8: 0x27bdfff0
    ctx->pc = 0x1325e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1325ec: 0x14800006
    ctx->pc = 0x1325ECu;
    {
        const bool branch_taken_0x1325ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1325F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1325ec) {
            ctx->pc = 0x132608u;
            goto label_132608;
        }
    }
    ctx->pc = 0x1325F4u;
    // 0x1325f4: 0x3c040024
    ctx->pc = 0x1325f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1325f8: 0xc04a034
    ctx->pc = 0x1325F8u;
    SET_GPR_U32(ctx, 31, 0x132600u);
    ctx->pc = 0x1325FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946904));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132600u; }
    }
    if (ctx->pc != 0x132600u) { return; }
    ctx->pc = 0x132600u;
    // 0x132600: 0x10000009
    ctx->pc = 0x132600u;
    {
        const bool branch_taken_0x132600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132604u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x132600) {
            ctx->pc = 0x132628u;
            goto label_132628;
        }
    }
    ctx->pc = 0x132608u;
label_132608:
    // 0x132608: 0x80820001
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x13260c: 0x28420002
    ctx->pc = 0x13260cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x132610: 0x54400005
    ctx->pc = 0x132610u;
    {
        const bool branch_taken_0x132610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x132610) {
            ctx->pc = 0x132614u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x132628u;
            goto label_132628;
        }
    }
    ctx->pc = 0x132618u;
    // 0x132618: 0x8c840004
    ctx->pc = 0x132618u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13261c: 0xdfbf0000
    ctx->pc = 0x13261cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132620: 0x804b686
    ctx->pc = 0x132620u;
    ctx->pc = 0x132624u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12DA18u;
    entry_12da18_0x12da30(rdram, ctx, runtime); return;
    ctx->pc = 0x132628u;
label_132628:
    // 0x132628: 0xdfbf0000
    ctx->pc = 0x132628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13262c: 0x3e00008
    ctx->pc = 0x13262Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132568u: goto label_132568;
            case 0x132588u: goto label_132588;
            case 0x1325B8u: goto label_1325b8;
            case 0x1325D8u: goto label_1325d8;
            case 0x132608u: goto label_132608;
            case 0x132628u: goto label_132628;
            case 0x132680u: goto label_132680;
            case 0x1326D0u: goto label_1326d0;
            case 0x1326DCu: goto label_1326dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132634u;
    // 0x132634: 0x0
    ctx->pc = 0x132634u;
    // NOP
    // 0x132638: 0x27bdffe0
    ctx->pc = 0x132638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13263c: 0xffb00000
    ctx->pc = 0x13263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132640: 0x80802d
    ctx->pc = 0x132640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132644: 0xffb10008
    ctx->pc = 0x132644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132648: 0xa0882d
    ctx->pc = 0x132648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13264c: 0xffb20010
    ctx->pc = 0x13264cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132650: 0xc0902d
    ctx->pc = 0x132650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132654: 0x1600000a
    ctx->pc = 0x132654u;
    {
        const bool branch_taken_0x132654 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x132658u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x132654) {
            ctx->pc = 0x132680u;
            goto label_132680;
        }
    }
    ctx->pc = 0x13265Cu;
    // 0x13265c: 0x3c040024
    ctx->pc = 0x13265cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x132660: 0xdfb00000
    ctx->pc = 0x132660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132664: 0xdfb10008
    ctx->pc = 0x132664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132668: 0x2484b088
    ctx->pc = 0x132668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946952));
    // 0x13266c: 0xdfb20010
    ctx->pc = 0x13266cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132670: 0xdfbf0018
    ctx->pc = 0x132670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132674: 0x804a034
    ctx->pc = 0x132674u;
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x13267Cu;
    // 0x13267c: 0x0
    ctx->pc = 0x13267cu;
    // NOP
label_132680:
    // 0x132680: 0xc04b654
    ctx->pc = 0x132680u;
    SET_GPR_U32(ctx, 31, 0x132688u);
    ctx->pc = 0x132684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12D950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D950_0x12d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132688u; }
    }
    if (ctx->pc != 0x132688u) { return; }
    ctx->pc = 0x132688u;
    // 0x132688: 0x3c040024
    ctx->pc = 0x132688u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13268c: 0x2403ff80
    ctx->pc = 0x13268cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x132690: 0x113840
    ctx->pc = 0x132690u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 1));
    // 0x132694: 0x431826
    ctx->pc = 0x132694u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132698: 0xf03821
    ctx->pc = 0x132698u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x13269c: 0x3100a
    ctx->pc = 0x13269cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1326a0: 0x220282d
    ctx->pc = 0x1326a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326a4: 0x521021
    ctx->pc = 0x1326a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1326a8: 0x240302d
    ctx->pc = 0x1326a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326ac: 0xa4e20042
    ctx->pc = 0x1326acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x1326b0: 0x82020003
    ctx->pc = 0x1326b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1326b4: 0x222102a
    ctx->pc = 0x1326b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1326b8: 0x10400005
    ctx->pc = 0x1326B8u;
    {
        const bool branch_taken_0x1326b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1326BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947000));
        if (branch_taken_0x1326b8) {
            ctx->pc = 0x1326D0u;
            goto label_1326d0;
        }
    }
    ctx->pc = 0x1326C0u;
    // 0x1326c0: 0xc04b204
    ctx->pc = 0x1326C0u;
    SET_GPR_U32(ctx, 31, 0x1326C8u);
    ctx->pc = 0x1326C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1326C8u; }
    }
    if (ctx->pc != 0x1326C8u) { return; }
    ctx->pc = 0x1326C8u;
    // 0x1326c8: 0x10000004
    ctx->pc = 0x1326C8u;
    {
        const bool branch_taken_0x1326c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1326CCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1326c8) {
            ctx->pc = 0x1326DCu;
            goto label_1326dc;
        }
    }
    ctx->pc = 0x1326D0u;
label_1326d0:
    // 0x1326d0: 0xc04a034
    ctx->pc = 0x1326D0u;
    SET_GPR_U32(ctx, 31, 0x1326D8u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1326D8u; }
    }
    if (ctx->pc != 0x1326D8u) { return; }
    ctx->pc = 0x1326D8u;
    // 0x1326d8: 0xdfb00000
    ctx->pc = 0x1326d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1326dc:
    // 0x1326dc: 0xdfb10008
    ctx->pc = 0x1326dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1326e0: 0xdfb20010
    ctx->pc = 0x1326e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1326e4: 0xdfbf0018
    ctx->pc = 0x1326e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1326e8: 0x3e00008
    ctx->pc = 0x1326E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1326ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132568u: goto label_132568;
            case 0x132588u: goto label_132588;
            case 0x1325B8u: goto label_1325b8;
            case 0x1325D8u: goto label_1325d8;
            case 0x132608u: goto label_132608;
            case 0x132628u: goto label_132628;
            case 0x132680u: goto label_132680;
            case 0x1326D0u: goto label_1326d0;
            case 0x1326DCu: goto label_1326dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1326F0u;
}
