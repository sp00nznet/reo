#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012F780
// Address: 0x12f780 - 0x12f950
void sub_0012F780_0x12f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12f780u;

    // 0x12f780: 0x27bdffe0
    ctx->pc = 0x12f780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f784: 0x3c070022
    ctx->pc = 0x12f784u;
    SET_GPR_U32(ctx, 7, ((uint32_t)34 << 16));
    // 0x12f788: 0xffb20010
    ctx->pc = 0x12f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f78c: 0x80902d
    ctx->pc = 0x12f78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f790: 0xffb00000
    ctx->pc = 0x12f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f794: 0x24e38760
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294936416));
    // 0x12f798: 0xffb10008
    ctx->pc = 0x12f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f79c: 0xa0402d
    ctx->pc = 0x12f79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7a0: 0xffbf0018
    ctx->pc = 0x12f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12f7a4: 0xc0482d
    ctx->pc = 0x12f7a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7a8: 0x80620000
    ctx->pc = 0x12f7a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f7ac: 0x1040000b
    ctx->pc = 0x12F7ACu;
    {
        const bool branch_taken_0x12f7ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F7B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f7ac) {
            ctx->pc = 0x12F7DCu;
            goto label_12f7dc;
        }
    }
    ctx->pc = 0x12F7B4u;
    // 0x12f7b4: 0x24a50001
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_12f7b8:
    // 0x12f7b8: 0x28a20008
    ctx->pc = 0x12f7b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x12f7bc: 0x10400007
    ctx->pc = 0x12F7BCu;
    {
        const bool branch_taken_0x12f7bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F7C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 752));
        if (branch_taken_0x12f7bc) {
            ctx->pc = 0x12F7DCu;
            goto label_12f7dc;
        }
    }
    ctx->pc = 0x12F7C4u;
    // 0x12f7c4: 0x80620000
    ctx->pc = 0x12f7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f7c8: 0x0
    ctx->pc = 0x12f7c8u;
    // NOP
    // 0x12f7cc: 0x0
    ctx->pc = 0x12f7ccu;
    // NOP
    // 0x12f7d0: 0x0
    ctx->pc = 0x12f7d0u;
    // NOP
    // 0x12f7d4: 0x5440fff8
    ctx->pc = 0x12F7D4u;
    {
        const bool branch_taken_0x12f7d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12f7d4) {
            ctx->pc = 0x12F7D8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x12F7B8u;
            goto label_12f7b8;
        }
    }
    ctx->pc = 0x12F7DCu;
label_12f7dc:
    // 0x12f7dc: 0x24030008
    ctx->pc = 0x12f7dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x12f7e0: 0x10a30055
    ctx->pc = 0x12F7E0u;
    {
        const bool branch_taken_0x12f7e0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x12F7E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f7e0) {
            ctx->pc = 0x12F938u;
            goto label_12f938;
        }
    }
    ctx->pc = 0x12F7E8u;
    // 0x12f7e8: 0x51040
    ctx->pc = 0x12f7e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x12f7ec: 0x24e38760
    ctx->pc = 0x12f7ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294936416));
    // 0x12f7f0: 0x451021
    ctx->pc = 0x12f7f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12f7f4: 0x302d
    ctx->pc = 0x12f7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7f8: 0x21100
    ctx->pc = 0x12f7f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x12f7fc: 0x451023
    ctx->pc = 0x12f7fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12f800: 0x21100
    ctx->pc = 0x12f800u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x12f804: 0x438821
    ctx->pc = 0x12f804u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f808: 0x1a40000b
    ctx->pc = 0x12F808u;
    {
        const bool branch_taken_0x12f808 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12F80Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x12f808) {
            ctx->pc = 0x12F838u;
            goto label_12f838;
        }
    }
    ctx->pc = 0x12F810u;
    // 0x12f810: 0x26270004
    ctx->pc = 0x12f810u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4));
    // 0x12f814: 0x0
    ctx->pc = 0x12f814u;
    // NOP
label_12f818:
    // 0x12f818: 0x61080
    ctx->pc = 0x12f818u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x12f81c: 0x24c60001
    ctx->pc = 0x12f81cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x12f820: 0x481821
    ctx->pc = 0x12f820u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x12f824: 0xe21021
    ctx->pc = 0x12f824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12f828: 0x8c640000
    ctx->pc = 0x12f828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f82c: 0xd2282a
    ctx->pc = 0x12f82cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 18)));
    // 0x12f830: 0x14a0fff9
    ctx->pc = 0x12F830u;
    {
        const bool branch_taken_0x12f830 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F834u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x12f830) {
            ctx->pc = 0x12F818u;
            goto label_12f818;
        }
    }
    ctx->pc = 0x12F838u;
label_12f838:
    // 0x12f838: 0x3c107fff
    ctx->pc = 0x12f838u;
    SET_GPR_U32(ctx, 16, ((uint32_t)32767 << 16));
    // 0x12f83c: 0xae29000c
    ctx->pc = 0x12f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 9));
    // 0x12f840: 0xa2200001
    ctx->pc = 0x12f840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f844: 0x282d
    ctx->pc = 0x12f844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f848: 0xae200028
    ctx->pc = 0x12f848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x12f84c: 0x24060004
    ctx->pc = 0x12f84cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f850: 0xae20002c
    ctx->pc = 0x12f850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x12f854: 0x24070004
    ctx->pc = 0x12f854u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f858: 0xae200030
    ctx->pc = 0x12f858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x12f85c: 0x202d
    ctx->pc = 0x12f85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f860: 0xc049be0
    ctx->pc = 0x12F860u;
    SET_GPR_U32(ctx, 31, 0x12F868u);
    ctx->pc = 0x12F864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    ctx->pc = 0x126F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126F80_0x126f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F868u; }
    }
    if (ctx->pc != 0x12F868u) { return; }
    ctx->pc = 0x12F868u;
    // 0x12f868: 0x24030004
    ctx->pc = 0x12f868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f86c: 0x24050080
    ctx->pc = 0x12f86cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
    // 0x12f870: 0x24060003
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f874: 0xa3001a
    ctx->pc = 0x12f874u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12f878: 0x3407ac44
    ctx->pc = 0x12f878u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 44100));
    // 0x12f87c: 0x24080012
    ctx->pc = 0x12f87cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 18));
    // 0x12f880: 0x24090004
    ctx->pc = 0x12f880u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f884: 0x240a01f4
    ctx->pc = 0x12f884u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 500));
    // 0x12f888: 0x240b0020
    ctx->pc = 0x12f888u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 32));
    // 0x12f88c: 0xae26004c
    ctx->pc = 0x12f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
    // 0x12f890: 0x24040020
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x12f894: 0xae27005c
    ctx->pc = 0x12f894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 7));
    // 0x12f898: 0xae280050
    ctx->pc = 0x12f898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 8));
    // 0x12f89c: 0xae230054
    ctx->pc = 0x12f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x12f8a0: 0xae220048
    ctx->pc = 0x12f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x12f8a4: 0xae320058
    ctx->pc = 0x12f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
    // 0x12f8a8: 0x51200001
    ctx->pc = 0x12F8A8u;
    {
        const bool branch_taken_0x12f8a8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x12f8a8) {
            ctx->pc = 0x12F8ACu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12F8B0u;
            goto label_12f8b0;
        }
    }
    ctx->pc = 0x12F8B0u;
label_12f8b0:
    // 0x12f8b0: 0xae2a0064
    ctx->pc = 0x12f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 10));
    // 0x12f8b4: 0xae300060
    ctx->pc = 0x12f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
    // 0x12f8b8: 0xae200068
    ctx->pc = 0x12f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x12f8bc: 0xae20006c
    ctx->pc = 0x12f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x12f8c0: 0xae200070
    ctx->pc = 0x12f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x12f8c4: 0xae200074
    ctx->pc = 0x12f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x12f8c8: 0xae200078
    ctx->pc = 0x12f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x12f8cc: 0xae20007c
    ctx->pc = 0x12f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x12f8d0: 0xae200038
    ctx->pc = 0x12f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x12f8d4: 0xae20003c
    ctx->pc = 0x12f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x12f8d8: 0x2812
    ctx->pc = 0x12f8d8u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x12f8dc: 0xae250044
    ctx->pc = 0x12f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
    // 0x12f8e0: 0xc04b8a0
    ctx->pc = 0x12F8E0u;
    SET_GPR_U32(ctx, 31, 0x12F8E8u);
    ctx->pc = 0x12F8E4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
    ctx->pc = 0x12E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E280_0x12e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8E8u; }
    }
    if (ctx->pc != 0x12F8E8u) { return; }
    ctx->pc = 0x12F8E8u;
    // 0x12f8e8: 0x8e240044
    ctx->pc = 0x12f8e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x12f8ec: 0xc04b8a0
    ctx->pc = 0x12F8ECu;
    SET_GPR_U32(ctx, 31, 0x12F8F4u);
    ctx->pc = 0x12F8F0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x12E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E280_0x12e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8F4u; }
    }
    if (ctx->pc != 0x12F8F4u) { return; }
    ctx->pc = 0x12F8F4u;
    // 0x12f8f4: 0xa62002cc
    ctx->pc = 0x12f8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 716), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f8f8: 0x2403ff80
    ctx->pc = 0x12f8f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x12f8fc: 0xae220084
    ctx->pc = 0x12f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x12f900: 0xa62302ec
    ctx->pc = 0x12f900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 748), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f904: 0x262402d7
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 727));
    // 0x12f908: 0xa62302ea
    ctx->pc = 0x12f908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 746), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f90c: 0x282d
    ctx->pc = 0x12f90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f910: 0xa62002c8
    ctx->pc = 0x12f910u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 712), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f914: 0x24060010
    ctx->pc = 0x12f914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x12f918: 0xa62002ce
    ctx->pc = 0x12f918u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 718), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f91c: 0xa62002ca
    ctx->pc = 0x12f91cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 714), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f920: 0xa22002d6
    ctx->pc = 0x12f920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f924: 0xc041f1a
    ctx->pc = 0x12F924u;
    SET_GPR_U32(ctx, 31, 0x12F92Cu);
    ctx->pc = 0x12F928u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 744), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F92Cu; }
    }
    if (ctx->pc != 0x12F92Cu) { return; }
    ctx->pc = 0x12F92Cu;
    // 0x12f92c: 0x24030001
    ctx->pc = 0x12f92cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f930: 0xa2230000
    ctx->pc = 0x12f930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f934: 0x220102d
    ctx->pc = 0x12f934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f938:
    // 0x12f938: 0xdfb00000
    ctx->pc = 0x12f938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f93c: 0xdfb10008
    ctx->pc = 0x12f93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f940: 0xdfb20010
    ctx->pc = 0x12f940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f944: 0xdfbf0018
    ctx->pc = 0x12f944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f948: 0x3e00008
    ctx->pc = 0x12F948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F7B8u: goto label_12f7b8;
            case 0x12F7DCu: goto label_12f7dc;
            case 0x12F818u: goto label_12f818;
            case 0x12F838u: goto label_12f838;
            case 0x12F8B0u: goto label_12f8b0;
            case 0x12F938u: goto label_12f938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F950u;
}
