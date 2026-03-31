#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001649C0
// Address: 0x1649c0 - 0x164af8
void sub_001649C0_0x1649c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1649c0u;

label_1649c0:
    // 0x1649c0: 0x27bdffe0
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1649c4: 0xffb00000
    ctx->pc = 0x1649c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1649c8: 0x80802d
    ctx->pc = 0x1649c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649cc: 0xffb10008
    ctx->pc = 0x1649ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1649d0: 0x26020cc0
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 3264));
    // 0x1649d4: 0xffb20010
    ctx->pc = 0x1649d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1649d8: 0xffbf0018
    ctx->pc = 0x1649d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1649dc: 0x8e041b74
    ctx->pc = 0x1649dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7028)));
    // 0x1649e0: 0x8c4501b4
    ctx->pc = 0x1649e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x1649e4: 0x8c4301b0
    ctx->pc = 0x1649e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1649e8: 0x14650013
    ctx->pc = 0x1649E8u;
    {
        const bool branch_taken_0x1649e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1649ECu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1649e8) {
            ctx->pc = 0x164A38u;
            goto label_164a38;
        }
    }
    ctx->pc = 0x1649F0u;
    // 0x1649f0: 0xc04c92a
    ctx->pc = 0x1649F0u;
    SET_GPR_U32(ctx, 31, 0x1649F8u);
    ctx->pc = 0x1649F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1324A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001324A8_0x1324a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649F8u; }
    }
    if (ctx->pc != 0x1649F8u) { return; }
    ctx->pc = 0x1649F8u;
    // 0x1649f8: 0x220202d
    ctx->pc = 0x1649f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649fc: 0xc04c93e
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1324F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001324F8_0x1324f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A04u; }
    }
    if (ctx->pc != 0x164A04u) { return; }
    ctx->pc = 0x164A04u;
    // 0x164a04: 0x5a40000d
    ctx->pc = 0x164A04u;
    {
        const bool branch_taken_0x164a04 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x164a04) {
            ctx->pc = 0x164A08u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x164A0Cu;
    // 0x164a0c: 0x5840000b
    ctx->pc = 0x164A0Cu;
    {
        const bool branch_taken_0x164a0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x164a0c) {
            ctx->pc = 0x164A10u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x164A3Cu;
            goto label_164a3c;
        }
    }
    ctx->pc = 0x164A14u;
    // 0x164a14: 0x200202d
    ctx->pc = 0x164a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a18: 0xdfb00000
    ctx->pc = 0x164a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164a1c: 0x240282d
    ctx->pc = 0x164a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a20: 0xdfb20010
    ctx->pc = 0x164a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164a24: 0xdfb10008
    ctx->pc = 0x164a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164a28: 0x40302d
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a2c: 0xdfbf0018
    ctx->pc = 0x164a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164a30: 0x8059fc2
    ctx->pc = 0x164A30u;
    ctx->pc = 0x164A34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x167F08u;
    entry_167f08_0x167fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x164A38u;
label_164a38:
    // 0x164a38: 0xdfb00000
    ctx->pc = 0x164a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164a3c:
    // 0x164a3c: 0xdfb10008
    ctx->pc = 0x164a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164a40: 0xdfb20010
    ctx->pc = 0x164a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164a44: 0xdfbf0018
    ctx->pc = 0x164a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164a48: 0x3e00008
    ctx->pc = 0x164A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1649C0u: goto label_1649c0;
            case 0x164A38u: goto label_164a38;
            case 0x164A3Cu: goto label_164a3c;
            case 0x164A68u: goto label_164a68;
            case 0x164AA8u: goto label_164aa8;
            case 0x164AE0u: goto label_164ae0;
            case 0x164AE4u: goto label_164ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164A50u;
    // 0x164a50: 0x27bdfff0
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164a54: 0xffbf0000
    ctx->pc = 0x164a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164a58: 0xdfbf0000
    ctx->pc = 0x164a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164a5c: 0x805929a
    ctx->pc = 0x164A5Cu;
    ctx->pc = 0x164A60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x164A68u;
    goto label_164a68;
    ctx->pc = 0x164A64u;
    // 0x164a64: 0x0
    ctx->pc = 0x164a64u;
    // NOP
label_164a68:
    // 0x164a68: 0x27bdffd0
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164a6c: 0x24050006
    ctx->pc = 0x164a6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x164a70: 0xffb10018
    ctx->pc = 0x164a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x164a74: 0xffb00010
    ctx->pc = 0x164a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x164a78: 0xffbf0020
    ctx->pc = 0x164a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164a7c: 0xc05d58a
    ctx->pc = 0x164A7Cu;
    SET_GPR_U32(ctx, 31, 0x164A84u);
    ctx->pc = 0x164A80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A84u; }
    }
    if (ctx->pc != 0x164A84u) { return; }
    ctx->pc = 0x164A84u;
    // 0x164a84: 0x10400017
    ctx->pc = 0x164A84u;
    {
        const bool branch_taken_0x164a84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164A88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164a84) {
            ctx->pc = 0x164AE4u;
            goto label_164ae4;
        }
    }
    ctx->pc = 0x164A8Cu;
    // 0x164a8c: 0xc05957e
    ctx->pc = 0x164A8Cu;
    SET_GPR_U32(ctx, 31, 0x164A94u);
    ctx->pc = 0x1655F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001655F8_0x1655f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A94u; }
    }
    if (ctx->pc != 0x164A94u) { return; }
    ctx->pc = 0x164A94u;
    // 0x164a94: 0x24030001
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a98: 0x14430003
    ctx->pc = 0x164A98u;
    {
        const bool branch_taken_0x164a98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x164A9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164a98) {
            ctx->pc = 0x164AA8u;
            goto label_164aa8;
        }
    }
    ctx->pc = 0x164AA0u;
    // 0x164aa0: 0x10000010
    ctx->pc = 0x164AA0u;
    {
        const bool branch_taken_0x164aa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164AA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164aa0) {
            ctx->pc = 0x164AE4u;
            goto label_164ae4;
        }
    }
    ctx->pc = 0x164AA8u;
label_164aa8:
    // 0x164aa8: 0xc0592be
    ctx->pc = 0x164AA8u;
    SET_GPR_U32(ctx, 31, 0x164AB0u);
    ctx->pc = 0x164AACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164AF8_0x164af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AB0u; }
    }
    if (ctx->pc != 0x164AB0u) { return; }
    ctx->pc = 0x164AB0u;
    // 0x164ab0: 0x220202d
    ctx->pc = 0x164ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ab4: 0xc0594c6
    ctx->pc = 0x164AB4u;
    SET_GPR_U32(ctx, 31, 0x164ABCu);
    ctx->pc = 0x164AB8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165318_0x165318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164ABCu; }
    }
    if (ctx->pc != 0x164ABCu) { return; }
    ctx->pc = 0x164ABCu;
    // 0x164abc: 0x8fa50000
    ctx->pc = 0x164abcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164ac0: 0xc0594fa
    ctx->pc = 0x164AC0u;
    SET_GPR_U32(ctx, 31, 0x164AC8u);
    ctx->pc = 0x164AC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1653E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001653E8_0x1653e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AC8u; }
    }
    if (ctx->pc != 0x164AC8u) { return; }
    ctx->pc = 0x164AC8u;
    // 0x164ac8: 0xc05958c
    ctx->pc = 0x164AC8u;
    SET_GPR_U32(ctx, 31, 0x164AD0u);
    ctx->pc = 0x164ACCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165630_0x165630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AD0u; }
    }
    if (ctx->pc != 0x164AD0u) { return; }
    ctx->pc = 0x164AD0u;
    // 0x164ad0: 0xc0595c4
    ctx->pc = 0x164AD0u;
    SET_GPR_U32(ctx, 31, 0x164AD8u);
    ctx->pc = 0x164AD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165710_0x165710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AD8u; }
    }
    if (ctx->pc != 0x164AD8u) { return; }
    ctx->pc = 0x164AD8u;
    // 0x164ad8: 0xc059270
    ctx->pc = 0x164AD8u;
    SET_GPR_U32(ctx, 31, 0x164AE0u);
    ctx->pc = 0x164ADCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1649C0u;
    goto label_1649c0;
    ctx->pc = 0x164AE0u;
label_164ae0:
    // 0x164ae0: 0x200102d
    ctx->pc = 0x164ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164ae4:
    // 0x164ae4: 0xdfb00010
    ctx->pc = 0x164ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164ae8: 0xdfb10018
    ctx->pc = 0x164ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164aec: 0xdfbf0020
    ctx->pc = 0x164aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164af0: 0x3e00008
    ctx->pc = 0x164AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164AF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1649C0u: goto label_1649c0;
            case 0x164A38u: goto label_164a38;
            case 0x164A3Cu: goto label_164a3c;
            case 0x164A68u: goto label_164a68;
            case 0x164AA8u: goto label_164aa8;
            case 0x164AE0u: goto label_164ae0;
            case 0x164AE4u: goto label_164ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164AF8u;
}
