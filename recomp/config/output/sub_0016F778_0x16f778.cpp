#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016F778
// Address: 0x16f778 - 0x16f930
void sub_0016F778_0x16f778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16f778u;

    // 0x16f778: 0x27bdfff0
    ctx->pc = 0x16f778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f77c: 0xa0302d
    ctx->pc = 0x16f77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f780: 0xffbf0000
    ctx->pc = 0x16f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f784: 0xc059c38
    ctx->pc = 0x16F784u;
    SET_GPR_U32(ctx, 31, 0x16F78Cu);
    ctx->pc = 0x16F788u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6968)));
    ctx->pc = 0x1670E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001670E0_0x1670e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F78Cu; }
    }
    if (ctx->pc != 0x16F78Cu) { return; }
    ctx->pc = 0x16F78Cu;
    // 0x16f78c: 0xdfbf0000
    ctx->pc = 0x16f78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f790: 0x3e00008
    ctx->pc = 0x16F790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F828u: goto label_16f828;
            case 0x16F868u: goto label_16f868;
            case 0x16F918u: goto label_16f918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F798u;
    // 0x16f798: 0x27bdffe0
    ctx->pc = 0x16f798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f79c: 0x24050005
    ctx->pc = 0x16f79cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16f7a0: 0xffb10008
    ctx->pc = 0x16f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f7a4: 0x80882d
    ctx->pc = 0x16f7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7a8: 0xffb20010
    ctx->pc = 0x16f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16f7ac: 0xffb00000
    ctx->pc = 0x16f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f7b0: 0xffbf0018
    ctx->pc = 0x16f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16f7b4: 0xc05d58a
    ctx->pc = 0x16F7B4u;
    SET_GPR_U32(ctx, 31, 0x16F7BCu);
    ctx->pc = 0x16F7B8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 7936));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F7BCu; }
    }
    if (ctx->pc != 0x16F7BCu) { return; }
    ctx->pc = 0x16F7BCu;
    // 0x16f7bc: 0x240282d
    ctx->pc = 0x16f7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7c0: 0x10400055
    ctx->pc = 0x16F7C0u;
    {
        const bool branch_taken_0x16f7c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F7C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f7c0) {
            ctx->pc = 0x16F918u;
            goto label_16f918;
        }
    }
    ctx->pc = 0x16F7C8u;
    // 0x16f7c8: 0xc05be4c
    ctx->pc = 0x16F7C8u;
    SET_GPR_U32(ctx, 31, 0x16F7D0u);
    ctx->pc = 0x16F7CCu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6960), GPR_U32(ctx, 18));
    ctx->pc = 0x16F930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F930_0x16f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F7D0u; }
    }
    if (ctx->pc != 0x16F7D0u) { return; }
    ctx->pc = 0x16F7D0u;
    // 0x16f7d0: 0x14400051
    ctx->pc = 0x16F7D0u;
    {
        const bool branch_taken_0x16f7d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F7D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f7d0) {
            ctx->pc = 0x16F918u;
            goto label_16f918;
        }
    }
    ctx->pc = 0x16F7D8u;
    // 0x16f7d8: 0xc05c57c
    ctx->pc = 0x16F7D8u;
    SET_GPR_U32(ctx, 31, 0x16F7E0u);
    ctx->pc = 0x1715F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001715F0_0x1715f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F7E0u; }
    }
    if (ctx->pc != 0x16F7E0u) { return; }
    ctx->pc = 0x16F7E0u;
    // 0x16f7e0: 0xc056d28
    ctx->pc = 0x16F7E0u;
    SET_GPR_U32(ctx, 31, 0x16F7E8u);
    ctx->pc = 0x15B4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B4A0_0x15b4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F7E8u; }
    }
    if (ctx->pc != 0x16F7E8u) { return; }
    ctx->pc = 0x16F7E8u;
    // 0x16f7e8: 0x40802d
    ctx->pc = 0x16f7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7ec: 0x3c050017
    ctx->pc = 0x16f7ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x16f7f0: 0x24a5fcf8
    ctx->pc = 0x16f7f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966520));
    // 0x16f7f4: 0x200202d
    ctx->pc = 0x16f7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7f8: 0x1600000b
    ctx->pc = 0x16F7F8u;
    {
        const bool branch_taken_0x16f7f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F7FCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f7f8) {
            ctx->pc = 0x16F828u;
            goto label_16f828;
        }
    }
    ctx->pc = 0x16F800u;
    // 0x16f800: 0x220202d
    ctx->pc = 0x16f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f804: 0xdfb10008
    ctx->pc = 0x16f804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f808: 0x3c05ff00
    ctx->pc = 0x16f808u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16f80c: 0xdfb00000
    ctx->pc = 0x16f80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f810: 0xdfb20010
    ctx->pc = 0x16f810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f814: 0x34a50f0a
    ctx->pc = 0x16f814u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3850));
    // 0x16f818: 0xdfbf0018
    ctx->pc = 0x16f818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f81c: 0x805a704
    ctx->pc = 0x16F81Cu;
    ctx->pc = 0x16F820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16F824u;
    // 0x16f824: 0x0
    ctx->pc = 0x16f824u;
    // NOP
label_16f828:
    // 0x16f828: 0xc056392
    ctx->pc = 0x16F828u;
    SET_GPR_U32(ctx, 31, 0x16F830u);
    ctx->pc = 0x158E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158E48_0x158e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F830u; }
    }
    if (ctx->pc != 0x16F830u) { return; }
    ctx->pc = 0x16F830u;
    // 0x16f830: 0x1040000d
    ctx->pc = 0x16F830u;
    {
        const bool branch_taken_0x16f830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F834u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f830) {
            ctx->pc = 0x16F868u;
            goto label_16f868;
        }
    }
    ctx->pc = 0x16F838u;
    // 0x16f838: 0xc05bfaa
    ctx->pc = 0x16F838u;
    SET_GPR_U32(ctx, 31, 0x16F840u);
    ctx->pc = 0x16F83Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16FEA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FEA8_0x16fea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F840u; }
    }
    if (ctx->pc != 0x16F840u) { return; }
    ctx->pc = 0x16F840u;
    // 0x16f840: 0x220202d
    ctx->pc = 0x16f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f844: 0x3c05ff00
    ctx->pc = 0x16f844u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16f848: 0xdfb00000
    ctx->pc = 0x16f848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f84c: 0xdfb10008
    ctx->pc = 0x16f84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f850: 0x34a50f0b
    ctx->pc = 0x16f850u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3851));
    // 0x16f854: 0xdfb20010
    ctx->pc = 0x16f854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f858: 0xdfbf0018
    ctx->pc = 0x16f858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f85c: 0x805a704
    ctx->pc = 0x16F85Cu;
    ctx->pc = 0x16F860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16F864u;
    // 0x16f864: 0x0
    ctx->pc = 0x16f864u;
    // NOP
label_16f868:
    // 0x16f868: 0xc05d58a
    ctx->pc = 0x16F868u;
    SET_GPR_U32(ctx, 31, 0x16F870u);
    ctx->pc = 0x16F86Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F870u; }
    }
    if (ctx->pc != 0x16F870u) { return; }
    ctx->pc = 0x16F870u;
    // 0x16f870: 0x200202d
    ctx->pc = 0x16f870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f874: 0x40302d
    ctx->pc = 0x16f874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f878: 0xc056daa
    ctx->pc = 0x16F878u;
    SET_GPR_U32(ctx, 31, 0x16F880u);
    ctx->pc = 0x16F87Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F880u; }
    }
    if (ctx->pc != 0x16F880u) { return; }
    ctx->pc = 0x16F880u;
    // 0x16f880: 0x220202d
    ctx->pc = 0x16f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f884: 0xc05d58a
    ctx->pc = 0x16F884u;
    SET_GPR_U32(ctx, 31, 0x16F88Cu);
    ctx->pc = 0x16F888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F88Cu; }
    }
    if (ctx->pc != 0x16F88Cu) { return; }
    ctx->pc = 0x16F88Cu;
    // 0x16f88c: 0x200202d
    ctx->pc = 0x16f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f890: 0x24050002
    ctx->pc = 0x16f890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f894: 0xc056daa
    ctx->pc = 0x16F894u;
    SET_GPR_U32(ctx, 31, 0x16F89Cu);
    ctx->pc = 0x16F898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F89Cu; }
    }
    if (ctx->pc != 0x16F89Cu) { return; }
    ctx->pc = 0x16F89Cu;
    // 0x16f89c: 0x200202d
    ctx->pc = 0x16f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8a0: 0x24050003
    ctx->pc = 0x16f8a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16f8a4: 0xc056daa
    ctx->pc = 0x16F8A4u;
    SET_GPR_U32(ctx, 31, 0x16F8ACu);
    ctx->pc = 0x16F8A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8ACu; }
    }
    if (ctx->pc != 0x16F8ACu) { return; }
    ctx->pc = 0x16F8ACu;
    // 0x16f8ac: 0x200202d
    ctx->pc = 0x16f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8b0: 0x24050004
    ctx->pc = 0x16f8b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16f8b4: 0xc056daa
    ctx->pc = 0x16F8B4u;
    SET_GPR_U32(ctx, 31, 0x16F8BCu);
    ctx->pc = 0x16F8B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8BCu; }
    }
    if (ctx->pc != 0x16F8BCu) { return; }
    ctx->pc = 0x16F8BCu;
    // 0x16f8bc: 0x200202d
    ctx->pc = 0x16f8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8c0: 0x24050005
    ctx->pc = 0x16f8c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16f8c4: 0xc056daa
    ctx->pc = 0x16F8C4u;
    SET_GPR_U32(ctx, 31, 0x16F8CCu);
    ctx->pc = 0x16F8C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8CCu; }
    }
    if (ctx->pc != 0x16F8CCu) { return; }
    ctx->pc = 0x16F8CCu;
    // 0x16f8cc: 0x200202d
    ctx->pc = 0x16f8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8d0: 0x8e260038
    ctx->pc = 0x16f8d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x16f8d4: 0xc056daa
    ctx->pc = 0x16F8D4u;
    SET_GPR_U32(ctx, 31, 0x16F8DCu);
    ctx->pc = 0x16F8D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8DCu; }
    }
    if (ctx->pc != 0x16F8DCu) { return; }
    ctx->pc = 0x16F8DCu;
    // 0x16f8dc: 0x200202d
    ctx->pc = 0x16f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8e0: 0x3c067fff
    ctx->pc = 0x16f8e0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
    // 0x16f8e4: 0x24050007
    ctx->pc = 0x16f8e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f8e8: 0xc056daa
    ctx->pc = 0x16F8E8u;
    SET_GPR_U32(ctx, 31, 0x16F8F0u);
    ctx->pc = 0x16F8ECu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8F0u; }
    }
    if (ctx->pc != 0x16F8F0u) { return; }
    ctx->pc = 0x16F8F0u;
    // 0x16f8f0: 0x200202d
    ctx->pc = 0x16f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8f4: 0x24050008
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16f8f8: 0xc056daa
    ctx->pc = 0x16F8F8u;
    SET_GPR_U32(ctx, 31, 0x16F900u);
    ctx->pc = 0x16F8FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F900u; }
    }
    if (ctx->pc != 0x16F900u) { return; }
    ctx->pc = 0x16F900u;
    // 0x16f900: 0x200202d
    ctx->pc = 0x16f900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f904: 0x24050009
    ctx->pc = 0x16f904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x16f908: 0xc056daa
    ctx->pc = 0x16F908u;
    SET_GPR_U32(ctx, 31, 0x16F910u);
    ctx->pc = 0x16F90Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F910u; }
    }
    if (ctx->pc != 0x16F910u) { return; }
    ctx->pc = 0x16F910u;
    // 0x16f910: 0xae500000
    ctx->pc = 0x16f910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x16f914: 0x102d
    ctx->pc = 0x16f914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f918:
    // 0x16f918: 0xdfb00000
    ctx->pc = 0x16f918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f91c: 0xdfb10008
    ctx->pc = 0x16f91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f920: 0xdfb20010
    ctx->pc = 0x16f920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f924: 0xdfbf0018
    ctx->pc = 0x16f924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f928: 0x3e00008
    ctx->pc = 0x16F928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F92Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F828u: goto label_16f828;
            case 0x16F868u: goto label_16f868;
            case 0x16F918u: goto label_16f918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F930u;
}
