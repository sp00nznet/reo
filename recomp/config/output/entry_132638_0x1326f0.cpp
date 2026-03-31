#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_132638
// Address: 0x132638 - 0x1326f0
void entry_132638_0x1326f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132638u;

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
            case 0x132680u: goto label_132680;
            case 0x1326D0u: goto label_1326d0;
            case 0x1326DCu: goto label_1326dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1326F0u;
}
