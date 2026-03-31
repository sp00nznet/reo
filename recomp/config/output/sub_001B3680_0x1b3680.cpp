#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B3680
// Address: 0x1b3680 - 0x1b3830
void sub_001B3680_0x1b3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b3680u;

    // 0x1b3680: 0x27bdff40
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b3684: 0x24030005
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3688: 0xffbf0040
    ctx->pc = 0x1b3688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b368c: 0x28620008
    ctx->pc = 0x1b368cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1b3690: 0x7fb30030
    ctx->pc = 0x1b3690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3694: 0x7fb20020
    ctx->pc = 0x1b3694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3698: 0x80982d
    ctx->pc = 0x1b3698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b369c: 0x7fb10010
    ctx->pc = 0x1b369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b36a0: 0xa0902d
    ctx->pc = 0x1b36a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36a4: 0x7fb00000
    ctx->pc = 0x1b36a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b36a8: 0xc0882d
    ctx->pc = 0x1b36a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36ac: 0xafa80098
    ctx->pc = 0x1b36acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
    // 0x1b36b0: 0xe0802d
    ctx->pc = 0x1b36b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36b4: 0xffa900a8
    ctx->pc = 0x1b36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x1b36b8: 0xffaa00b0
    ctx->pc = 0x1b36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x1b36bc: 0x14400003
    ctx->pc = 0x1B36BCu;
    {
        const bool branch_taken_0x1b36bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B36C0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
        if (branch_taken_0x1b36bc) {
            ctx->pc = 0x1B36CCu;
            goto label_1b36cc;
        }
    }
    ctx->pc = 0x1B36C4u;
    // 0x1b36c4: 0x10000004
    ctx->pc = 0x1B36C4u;
    {
        const bool branch_taken_0x1b36c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B36C8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b36c4) {
            ctx->pc = 0x1B36D8u;
            goto label_1b36d8;
        }
    }
    ctx->pc = 0x1B36CCu;
label_1b36cc:
    // 0x1b36cc: 0x24020008
    ctx->pc = 0x1b36ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b36d0: 0x431023
    ctx->pc = 0x1b36d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b36d4: 0x218c0
    ctx->pc = 0x1b36d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1b36d8:
    // 0x1b36d8: 0x8fa50098
    ctx->pc = 0x1b36d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36dc: 0x27a200c0
    ctx->pc = 0x1b36dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b36e0: 0x3c04002c
    ctx->pc = 0x1b36e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b36e4: 0x433023
    ctx->pc = 0x1b36e4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b36e8: 0xc043e20
    ctx->pc = 0x1B36E8u;
    SET_GPR_U32(ctx, 31, 0x1B36F0u);
    ctx->pc = 0x1B36ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941152));
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36F0u; }
    }
    if (ctx->pc != 0x1B36F0u) { return; }
    ctx->pc = 0x1B36F0u;
    // 0x1b36f0: 0xc06ce30
    ctx->pc = 0x1B36F0u;
    SET_GPR_U32(ctx, 31, 0x1B36F8u);
    ctx->pc = 0x1B36F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B38C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38C0_0x1b38c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36F8u; }
    }
    if (ctx->pc != 0x1B36F8u) { return; }
    ctx->pc = 0x1B36F8u;
    // 0x1b36f8: 0x3c020023
    ctx->pc = 0x1b36f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b36fc: 0x112040
    ctx->pc = 0x1b36fcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1b3700: 0x24424478
    ctx->pc = 0x1b3700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17528));
    // 0x1b3704: 0x441821
    ctx->pc = 0x1b3704u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3708: 0x3c020023
    ctx->pc = 0x1b3708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b370c: 0x24424479
    ctx->pc = 0x1b370cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17529));
    // 0x1b3710: 0x441021
    ctx->pc = 0x1b3710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3714: 0x90450000
    ctx->pc = 0x1b3714u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3718: 0xc06cec4
    ctx->pc = 0x1B3718u;
    SET_GPR_U32(ctx, 31, 0x1B3720u);
    ctx->pc = 0x1B371Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1B3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B10_0x1b3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3720u; }
    }
    if (ctx->pc != 0x1B3720u) { return; }
    ctx->pc = 0x1B3720u;
    // 0x1b3720: 0x260202d
    ctx->pc = 0x1b3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3724: 0xc06ce24
    ctx->pc = 0x1B3724u;
    SET_GPR_U32(ctx, 31, 0x1B372Cu);
    ctx->pc = 0x1B3728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3890_0x1b3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B372Cu; }
    }
    if (ctx->pc != 0x1B372Cu) { return; }
    ctx->pc = 0x1B372Cu;
    // 0x1b372c: 0x3c04002c
    ctx->pc = 0x1b372cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b3730: 0xc06ce48
    ctx->pc = 0x1B3730u;
    SET_GPR_U32(ctx, 31, 0x1B3738u);
    ctx->pc = 0x1B3734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941152));
    ctx->pc = 0x1B3920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3920_0x1b3920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3738u; }
    }
    if (ctx->pc != 0x1B3738u) { return; }
    ctx->pc = 0x1B3738u;
    // 0x1b3738: 0x24040008
    ctx->pc = 0x1b3738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b373c: 0xc06cec4
    ctx->pc = 0x1B373Cu;
    SET_GPR_U32(ctx, 31, 0x1B3744u);
    ctx->pc = 0x1B3740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B10_0x1b3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3744u; }
    }
    if (ctx->pc != 0x1B3744u) { return; }
    ctx->pc = 0x1B3744u;
    // 0x1b3744: 0xc06ce30
    ctx->pc = 0x1B3744u;
    SET_GPR_U32(ctx, 31, 0x1B374Cu);
    ctx->pc = 0x1B3748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1B38C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38C0_0x1b38c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B374Cu; }
    }
    if (ctx->pc != 0x1B374Cu) { return; }
    ctx->pc = 0x1B374Cu;
    // 0x1b374c: 0xdfbf0040
    ctx->pc = 0x1b374cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3750: 0x7bb30030
    ctx->pc = 0x1b3750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3754: 0x7bb20020
    ctx->pc = 0x1b3754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3758: 0x7bb10010
    ctx->pc = 0x1b3758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b375c: 0x7bb00000
    ctx->pc = 0x1b375cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3760: 0x3e00008
    ctx->pc = 0x1B3760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B36CCu: goto label_1b36cc;
            case 0x1B36D8u: goto label_1b36d8;
            case 0x1B37B4u: goto label_1b37b4;
            case 0x1B37C0u: goto label_1b37c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3768u;
    // 0x1b3768: 0x0
    ctx->pc = 0x1b3768u;
    // NOP
    // 0x1b376c: 0x0
    ctx->pc = 0x1b376cu;
    // NOP
    // 0x1b3770: 0x27bdff70
    ctx->pc = 0x1b3770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b3774: 0x24030003
    ctx->pc = 0x1b3774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3778: 0xffbf0020
    ctx->pc = 0x1b3778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b377c: 0x28620008
    ctx->pc = 0x1b377cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1b3780: 0x7fb10010
    ctx->pc = 0x1b3780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3784: 0x7fb00000
    ctx->pc = 0x1b3784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3788: 0x80882d
    ctx->pc = 0x1b3788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b378c: 0xafa60058
    ctx->pc = 0x1b378cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x1b3790: 0xa0802d
    ctx->pc = 0x1b3790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3794: 0xffa70068
    ctx->pc = 0x1b3794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x1b3798: 0xffa80070
    ctx->pc = 0x1b3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x1b379c: 0xffa90078
    ctx->pc = 0x1b379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x1b37a0: 0xffaa0080
    ctx->pc = 0x1b37a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x1b37a4: 0x14400003
    ctx->pc = 0x1B37A4u;
    {
        const bool branch_taken_0x1b37a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B37A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        if (branch_taken_0x1b37a4) {
            ctx->pc = 0x1B37B4u;
            goto label_1b37b4;
        }
    }
    ctx->pc = 0x1B37ACu;
    // 0x1b37ac: 0x10000004
    ctx->pc = 0x1B37ACu;
    {
        const bool branch_taken_0x1b37ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B37B0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b37ac) {
            ctx->pc = 0x1B37C0u;
            goto label_1b37c0;
        }
    }
    ctx->pc = 0x1B37B4u;
label_1b37b4:
    // 0x1b37b4: 0x24020008
    ctx->pc = 0x1b37b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b37b8: 0x431023
    ctx->pc = 0x1b37b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b37bc: 0x218c0
    ctx->pc = 0x1b37bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1b37c0:
    // 0x1b37c0: 0x8fa50058
    ctx->pc = 0x1b37c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b37c4: 0x27a20090
    ctx->pc = 0x1b37c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b37c8: 0x3c04002c
    ctx->pc = 0x1b37c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b37cc: 0x433023
    ctx->pc = 0x1b37ccu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b37d0: 0xc043e20
    ctx->pc = 0x1B37D0u;
    SET_GPR_U32(ctx, 31, 0x1B37D8u);
    ctx->pc = 0x1B37D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943200));
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37D8u; }
    }
    if (ctx->pc != 0x1B37D8u) { return; }
    ctx->pc = 0x1B37D8u;
    // 0x1b37d8: 0xc06ce30
    ctx->pc = 0x1B37D8u;
    SET_GPR_U32(ctx, 31, 0x1B37E0u);
    ctx->pc = 0x1B37DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1B38C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38C0_0x1b38c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37E0u; }
    }
    if (ctx->pc != 0x1B37E0u) { return; }
    ctx->pc = 0x1B37E0u;
    // 0x1b37e0: 0x24040008
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b37e4: 0xc06cec4
    ctx->pc = 0x1B37E4u;
    SET_GPR_U32(ctx, 31, 0x1B37ECu);
    ctx->pc = 0x1B37E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1B3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B10_0x1b3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37ECu; }
    }
    if (ctx->pc != 0x1B37ECu) { return; }
    ctx->pc = 0x1B37ECu;
    // 0x1b37ec: 0x220202d
    ctx->pc = 0x1b37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37f0: 0xc06ce24
    ctx->pc = 0x1B37F0u;
    SET_GPR_U32(ctx, 31, 0x1B37F8u);
    ctx->pc = 0x1B37F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3890_0x1b3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37F8u; }
    }
    if (ctx->pc != 0x1B37F8u) { return; }
    ctx->pc = 0x1B37F8u;
    // 0x1b37f8: 0x3c04002c
    ctx->pc = 0x1b37f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b37fc: 0xc06ce48
    ctx->pc = 0x1B37FCu;
    SET_GPR_U32(ctx, 31, 0x1B3804u);
    ctx->pc = 0x1B3800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943200));
    ctx->pc = 0x1B3920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3920_0x1b3920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3804u; }
    }
    if (ctx->pc != 0x1B3804u) { return; }
    ctx->pc = 0x1B3804u;
    // 0x1b3804: 0x24040008
    ctx->pc = 0x1b3804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3808: 0xc06cec4
    ctx->pc = 0x1B3808u;
    SET_GPR_U32(ctx, 31, 0x1B3810u);
    ctx->pc = 0x1B380Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B10_0x1b3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3810u; }
    }
    if (ctx->pc != 0x1B3810u) { return; }
    ctx->pc = 0x1B3810u;
    // 0x1b3810: 0xdfbf0020
    ctx->pc = 0x1b3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3814: 0x7bb10010
    ctx->pc = 0x1b3814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3818: 0x7bb00000
    ctx->pc = 0x1b3818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b381c: 0x3e00008
    ctx->pc = 0x1B381Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B36CCu: goto label_1b36cc;
            case 0x1B36D8u: goto label_1b36d8;
            case 0x1B37B4u: goto label_1b37b4;
            case 0x1B37C0u: goto label_1b37c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3824u;
    // 0x1b3824: 0x0
    ctx->pc = 0x1b3824u;
    // NOP
    // 0x1b3828: 0x0
    ctx->pc = 0x1b3828u;
    // NOP
    // 0x1b382c: 0x0
    ctx->pc = 0x1b382cu;
    // NOP
}
