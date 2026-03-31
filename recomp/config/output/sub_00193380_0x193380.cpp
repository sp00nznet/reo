#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193380
// Address: 0x193380 - 0x1934c0
void sub_00193380_0x193380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193380u;

    // 0x193380: 0x302d
    ctx->pc = 0x193380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193384: 0x8064ce4
    ctx->pc = 0x193384u;
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x193390u;
    goto label_193390;
    ctx->pc = 0x19338Cu;
    // 0x19338c: 0x0
    ctx->pc = 0x19338cu;
    // NOP
label_193390:
    // 0x193390: 0x27bdffa0
    ctx->pc = 0x193390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x193394: 0xffbf0050
    ctx->pc = 0x193394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x193398: 0x7fb40040
    ctx->pc = 0x193398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19339c: 0x7fb30030
    ctx->pc = 0x19339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1933a0: 0x80a02d
    ctx->pc = 0x1933a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933a4: 0x7fb20020
    ctx->pc = 0x1933a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1933a8: 0xe0982d
    ctx->pc = 0x1933a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933ac: 0x7fb10010
    ctx->pc = 0x1933acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1933b0: 0xa0202d
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b4: 0xc063728
    ctx->pc = 0x1933B4u;
    SET_GPR_U32(ctx, 31, 0x1933BCu);
    ctx->pc = 0x1933B8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1933BCu; }
    }
    if (ctx->pc != 0x1933BCu) { return; }
    ctx->pc = 0x1933BCu;
    // 0x1933bc: 0x84520002
    ctx->pc = 0x1933bcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1933c0: 0x40882d
    ctx->pc = 0x1933c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933c4: 0x10000013
    ctx->pc = 0x1933C4u;
    {
        const bool branch_taken_0x1933c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1933C8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1933c4) {
            ctx->pc = 0x193414u;
            goto label_193414;
        }
    }
    ctx->pc = 0x1933CCu;
label_1933cc:
    // 0x1933cc: 0x2402ffff
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1933d0: 0x702021
    ctx->pc = 0x1933d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1933d4: 0x41880
    ctx->pc = 0x1933d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1933d8: 0x831821
    ctx->pc = 0x1933d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1933dc: 0x31900
    ctx->pc = 0x1933dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1933e0: 0x2831821
    ctx->pc = 0x1933e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1933e4: 0xa47200c2
    ctx->pc = 0x1933e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 194), (uint16_t)GPR_U32(ctx, 18));
    // 0x1933e8: 0x24640040
    ctx->pc = 0x1933e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 64));
    // 0x1933ec: 0xa4620180
    ctx->pc = 0x1933ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1933f0: 0xa4620182
    ctx->pc = 0x1933f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 386), (uint16_t)GPR_U32(ctx, 2));
    // 0x1933f4: 0xac6000cc
    ctx->pc = 0x1933f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
    // 0x1933f8: 0xac6000d0
    ctx->pc = 0x1933f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
    // 0x1933fc: 0xac6000d4
    ctx->pc = 0x1933fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x193400: 0xac6000d8
    ctx->pc = 0x193400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
    // 0x193404: 0xac600178
    ctx->pc = 0x193404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 0));
    // 0x193408: 0xc063f7c
    ctx->pc = 0x193408u;
    SET_GPR_U32(ctx, 31, 0x193410u);
    ctx->pc = 0x19340Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 380), GPR_U32(ctx, 0));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193410u; }
    }
    if (ctx->pc != 0x193410u) { return; }
    ctx->pc = 0x193410u;
    // 0x193410: 0x26100001
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_193414:
    // 0x193414: 0x212102a
    ctx->pc = 0x193414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x193418: 0x1440ffec
    ctx->pc = 0x193418u;
    {
        const bool branch_taken_0x193418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19341Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x193418) {
            ctx->pc = 0x1933CCu;
            goto label_1933cc;
        }
    }
    ctx->pc = 0x193420u;
    // 0x193420: 0x1000000a
    ctx->pc = 0x193420u;
    {
        const bool branch_taken_0x193420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193424u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193420) {
            ctx->pc = 0x19344Cu;
            goto label_19344c;
        }
    }
    ctx->pc = 0x193428u;
label_193428:
    // 0x193428: 0x220282d
    ctx->pc = 0x193428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19342c: 0x501821
    ctx->pc = 0x19342cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x193430: 0x200302d
    ctx->pc = 0x193430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193434: 0x31080
    ctx->pc = 0x193434u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x193438: 0x621021
    ctx->pc = 0x193438u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19343c: 0x21100
    ctx->pc = 0x19343cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x193440: 0xc064ef4
    ctx->pc = 0x193440u;
    SET_GPR_U32(ctx, 31, 0x193448u);
    ctx->pc = 0x193444u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x193BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193BD0_0x193bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193448u; }
    }
    if (ctx->pc != 0x193448u) { return; }
    ctx->pc = 0x193448u;
    // 0x193448: 0x26100001
    ctx->pc = 0x193448u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_19344c:
    // 0x19344c: 0x212102a
    ctx->pc = 0x19344cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x193450: 0x1440fff5
    ctx->pc = 0x193450u;
    {
        const bool branch_taken_0x193450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193454u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x193450) {
            ctx->pc = 0x193428u;
            goto label_193428;
        }
    }
    ctx->pc = 0x193458u;
    // 0x193458: 0x280202d
    ctx->pc = 0x193458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19345c: 0x280282d
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193460: 0xc064d30
    ctx->pc = 0x193460u;
    SET_GPR_U32(ctx, 31, 0x193468u);
    ctx->pc = 0x193464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1934C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001934C0_0x1934c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193468u; }
    }
    if (ctx->pc != 0x193468u) { return; }
    ctx->pc = 0x193468u;
    // 0x193468: 0x24020001
    ctx->pc = 0x193468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19346c: 0x12620009
    ctx->pc = 0x19346Cu;
    {
        const bool branch_taken_0x19346c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x193470u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19346c) {
            ctx->pc = 0x193494u;
            goto label_193494;
        }
    }
    ctx->pc = 0x193474u;
    // 0x193474: 0x12600003
    ctx->pc = 0x193474u;
    {
        const bool branch_taken_0x193474 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x193478u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193474) {
            ctx->pc = 0x193484u;
            goto label_193484;
        }
    }
    ctx->pc = 0x19347Cu;
    // 0x19347c: 0x10000008
    ctx->pc = 0x19347Cu;
    {
        const bool branch_taken_0x19347c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193480u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x19347c) {
            ctx->pc = 0x1934A0u;
            goto label_1934a0;
        }
    }
    ctx->pc = 0x193484u;
label_193484:
    // 0x193484: 0xc064ddc
    ctx->pc = 0x193484u;
    SET_GPR_U32(ctx, 31, 0x19348Cu);
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193770_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19348Cu; }
    }
    if (ctx->pc != 0x19348Cu) { return; }
    ctx->pc = 0x19348Cu;
    // 0x19348c: 0x10000003
    ctx->pc = 0x19348Cu;
    {
        const bool branch_taken_0x19348c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19348c) {
            ctx->pc = 0x19349Cu;
            goto label_19349c;
        }
    }
    ctx->pc = 0x193494u;
label_193494:
    // 0x193494: 0xc064e20
    ctx->pc = 0x193494u;
    SET_GPR_U32(ctx, 31, 0x19349Cu);
    ctx->pc = 0x193880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193880_0x193880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19349Cu; }
    }
    if (ctx->pc != 0x19349Cu) { return; }
    ctx->pc = 0x19349Cu;
label_19349c:
    // 0x19349c: 0xdfbf0050
    ctx->pc = 0x19349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1934a0:
    // 0x1934a0: 0x24020001
    ctx->pc = 0x1934a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1934a4: 0x7bb40040
    ctx->pc = 0x1934a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1934a8: 0x7bb30030
    ctx->pc = 0x1934a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1934ac: 0x7bb20020
    ctx->pc = 0x1934acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1934b0: 0x7bb10010
    ctx->pc = 0x1934b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1934b4: 0x7bb00000
    ctx->pc = 0x1934b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1934b8: 0x3e00008
    ctx->pc = 0x1934B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1934BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193390u: goto label_193390;
            case 0x1933CCu: goto label_1933cc;
            case 0x193414u: goto label_193414;
            case 0x193428u: goto label_193428;
            case 0x19344Cu: goto label_19344c;
            case 0x193484u: goto label_193484;
            case 0x193494u: goto label_193494;
            case 0x19349Cu: goto label_19349c;
            case 0x1934A0u: goto label_1934a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1934C0u;
}
