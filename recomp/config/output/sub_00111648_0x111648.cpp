#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111648
// Address: 0x111648 - 0x111770
void sub_00111648_0x111648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111648u;

    // 0x111648: 0x27bdffe0
    ctx->pc = 0x111648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11164c: 0xffb10008
    ctx->pc = 0x11164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x111650: 0xffb00000
    ctx->pc = 0x111650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111654: 0xffb20010
    ctx->pc = 0x111654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x111658: 0xffbf0018
    ctx->pc = 0x111658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11165c: 0xc04462e
    ctx->pc = 0x11165Cu;
    SET_GPR_U32(ctx, 31, 0x111664u);
    ctx->pc = 0x1118B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118B8_0x1118b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111664u; }
    }
    if (ctx->pc != 0x111664u) { return; }
    ctx->pc = 0x111664u;
    // 0x111664: 0x40882d
    ctx->pc = 0x111664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111668: 0x282d
    ctx->pc = 0x111668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11166c: 0x220202d
    ctx->pc = 0x11166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111670: 0xc0448a6
    ctx->pc = 0x111670u;
    SET_GPR_U32(ctx, 31, 0x111678u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111678u; }
    }
    if (ctx->pc != 0x111678u) { return; }
    ctx->pc = 0x111678u;
    // 0x111678: 0x220202d
    ctx->pc = 0x111678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11167c: 0x3405f7c0
    ctx->pc = 0x11167cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 63424));
    // 0x111680: 0x52bbc
    ctx->pc = 0x111680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x111684: 0x4400034
    ctx->pc = 0x111684u;
    {
        const bool branch_taken_0x111684 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x111688u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111684) {
            ctx->pc = 0x111758u;
            goto label_111758;
        }
    }
    ctx->pc = 0x11168Cu;
    // 0x11168c: 0xc04476c
    ctx->pc = 0x11168Cu;
    SET_GPR_U32(ctx, 31, 0x111694u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111694u; }
    }
    if (ctx->pc != 0x111694u) { return; }
    ctx->pc = 0x111694u;
    // 0x111694: 0x40202d
    ctx->pc = 0x111694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111698: 0xc044932
    ctx->pc = 0x111698u;
    SET_GPR_U32(ctx, 31, 0x1116A0u);
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116A0u; }
    }
    if (ctx->pc != 0x1116A0u) { return; }
    ctx->pc = 0x1116A0u;
    // 0x1116a0: 0x2803c
    ctx->pc = 0x1116a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1116a4: 0x32020001
    ctx->pc = 0x1116a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
    // 0x1116a8: 0x10207a
    ctx->pc = 0x1116a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x1116ac: 0x6000006
    ctx->pc = 0x1116ACu;
    {
        const bool branch_taken_0x1116ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1116B0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x1116ac) {
            ctx->pc = 0x1116C8u;
            goto label_1116c8;
        }
    }
    ctx->pc = 0x1116B4u;
    // 0x1116b4: 0xc0444ca
    ctx->pc = 0x1116B4u;
    SET_GPR_U32(ctx, 31, 0x1116BCu);
    ctx->pc = 0x1116B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116BCu; }
    }
    if (ctx->pc != 0x1116BCu) { return; }
    ctx->pc = 0x1116BCu;
    // 0x1116bc: 0x10000008
    ctx->pc = 0x1116BCu;
    {
        const bool branch_taken_0x1116bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1116bc) {
            ctx->pc = 0x1116E0u;
            goto label_1116e0;
        }
    }
    ctx->pc = 0x1116C4u;
    // 0x1116c4: 0x0
    ctx->pc = 0x1116c4u;
    // NOP
label_1116c8:
    // 0x1116c8: 0xc0444ca
    ctx->pc = 0x1116C8u;
    SET_GPR_U32(ctx, 31, 0x1116D0u);
    ctx->pc = 0x111328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111328_0x111328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116D0u; }
    }
    if (ctx->pc != 0x1116D0u) { return; }
    ctx->pc = 0x1116D0u;
    // 0x1116d0: 0x40202d
    ctx->pc = 0x1116d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d4: 0x80282d
    ctx->pc = 0x1116d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d8: 0xc04473c
    ctx->pc = 0x1116D8u;
    SET_GPR_U32(ctx, 31, 0x1116E0u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116E0u; }
    }
    if (ctx->pc != 0x1116E0u) { return; }
    ctx->pc = 0x1116E0u;
label_1116e0:
    // 0x1116e0: 0x220202d
    ctx->pc = 0x1116e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116e4: 0x40282d
    ctx->pc = 0x1116e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116e8: 0xc044752
    ctx->pc = 0x1116E8u;
    SET_GPR_U32(ctx, 31, 0x1116F0u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116F0u; }
    }
    if (ctx->pc != 0x1116F0u) { return; }
    ctx->pc = 0x1116F0u;
    // 0x1116f0: 0x902d
    ctx->pc = 0x1116f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116f4: 0x40882d
    ctx->pc = 0x1116f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116f8: 0x240282d
    ctx->pc = 0x1116f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116fc: 0x220202d
    ctx->pc = 0x1116fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111700: 0xc0448a6
    ctx->pc = 0x111700u;
    SET_GPR_U32(ctx, 31, 0x111708u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111708u; }
    }
    if (ctx->pc != 0x111708u) { return; }
    ctx->pc = 0x111708u;
    // 0x111708: 0x220202d
    ctx->pc = 0x111708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11170c: 0x220282d
    ctx->pc = 0x11170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111710: 0x441000b
    ctx->pc = 0x111710u;
    {
        const bool branch_taken_0x111710 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x111710) {
            ctx->pc = 0x111740u;
            goto label_111740;
        }
    }
    ctx->pc = 0x111718u;
    // 0x111718: 0x240202d
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11171c: 0xc044752
    ctx->pc = 0x11171Cu;
    SET_GPR_U32(ctx, 31, 0x111724u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111724u; }
    }
    if (ctx->pc != 0x111724u) { return; }
    ctx->pc = 0x111724u;
    // 0x111724: 0x40202d
    ctx->pc = 0x111724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111728: 0xc044932
    ctx->pc = 0x111728u;
    SET_GPR_U32(ctx, 31, 0x111730u);
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111730u; }
    }
    if (ctx->pc != 0x111730u) { return; }
    ctx->pc = 0x111730u;
    // 0x111730: 0x2103c
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111734: 0x2103e
    ctx->pc = 0x111734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111738: 0x10000006
    ctx->pc = 0x111738u;
    {
        const bool branch_taken_0x111738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11173Cu;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        if (branch_taken_0x111738) {
            ctx->pc = 0x111754u;
            goto label_111754;
        }
    }
    ctx->pc = 0x111740u;
label_111740:
    // 0x111740: 0xc044932
    ctx->pc = 0x111740u;
    SET_GPR_U32(ctx, 31, 0x111748u);
    ctx->pc = 0x1124C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001124C8_0x1124c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111748u; }
    }
    if (ctx->pc != 0x111748u) { return; }
    ctx->pc = 0x111748u;
    // 0x111748: 0x2103c
    ctx->pc = 0x111748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11174c: 0x2103e
    ctx->pc = 0x11174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111750: 0x202802d
    ctx->pc = 0x111750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_111754:
    // 0x111754: 0x200102d
    ctx->pc = 0x111754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111758:
    // 0x111758: 0xdfb00000
    ctx->pc = 0x111758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11175c: 0xdfb10008
    ctx->pc = 0x11175cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111760: 0xdfb20010
    ctx->pc = 0x111760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111764: 0xdfbf0018
    ctx->pc = 0x111764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111768: 0x3e00008
    ctx->pc = 0x111768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11176Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1116C8u: goto label_1116c8;
            case 0x1116E0u: goto label_1116e0;
            case 0x111740u: goto label_111740;
            case 0x111754u: goto label_111754;
            case 0x111758u: goto label_111758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111770u;
}
