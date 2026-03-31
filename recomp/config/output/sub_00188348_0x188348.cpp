#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188348
// Address: 0x188348 - 0x1886b8
void sub_00188348_0x188348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188348u;

    // 0x188348: 0x27bdffa0
    ctx->pc = 0x188348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18834c: 0x3c030029
    ctx->pc = 0x18834cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x188350: 0xffb60040
    ctx->pc = 0x188350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x188354: 0x80b02d
    ctx->pc = 0x188354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188358: 0x1610c0
    ctx->pc = 0x188358u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 3));
    // 0x18835c: 0xffb30028
    ctx->pc = 0x18835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x188360: 0xafa20008
    ctx->pc = 0x188360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x188364: 0x561023
    ctx->pc = 0x188364u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x188368: 0x2473b8c8
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 4294949064));
    // 0x18836c: 0xffb20020
    ctx->pc = 0x18836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x188370: 0xffb50038
    ctx->pc = 0x188370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x188374: 0xe0a82d
    ctx->pc = 0x188374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188378: 0xffb70048
    ctx->pc = 0x188378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x18837c: 0xc0b82d
    ctx->pc = 0x18837cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188380: 0xffbe0050
    ctx->pc = 0x188380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x188384: 0x26630004
    ctx->pc = 0x188384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4));
    // 0x188388: 0xffb00010
    ctx->pc = 0x188388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18838c: 0x29080
    ctx->pc = 0x18838cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 2));
    // 0x188390: 0xffb10018
    ctx->pc = 0x188390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x188394: 0x243f021
    ctx->pc = 0x188394u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x188398: 0xffb40030
    ctx->pc = 0x188398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x18839c: 0xffbf0058
    ctx->pc = 0x18839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1883a0: 0xafa50004
    ctx->pc = 0x1883a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1883a4: 0xc0623b6
    ctx->pc = 0x1883A4u;
    SET_GPR_U32(ctx, 31, 0x1883ACu);
    ctx->pc = 0x1883A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883ACu; }
    }
    if (ctx->pc != 0x1883ACu) { return; }
    ctx->pc = 0x1883ACu;
    // 0x1883ac: 0x24030003
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1883b0: 0x14430003
    ctx->pc = 0x1883B0u;
    {
        const bool branch_taken_0x1883b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1883B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x1883b0) {
            ctx->pc = 0x1883C0u;
            goto label_1883c0;
        }
    }
    ctx->pc = 0x1883B8u;
    // 0x1883b8: 0x10000053
    ctx->pc = 0x1883B8u;
    {
        const bool branch_taken_0x1883b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1883BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1883b8) {
            ctx->pc = 0x188508u;
            goto label_188508;
        }
    }
    ctx->pc = 0x1883C0u;
label_1883c0:
    // 0x1883c0: 0x243a021
    ctx->pc = 0x1883c0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1883c4: 0x8e820000
    ctx->pc = 0x1883c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1883c8: 0x551018
    ctx->pc = 0x1883c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1883cc: 0x2c422001
    ctx->pc = 0x1883ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 8193));
    // 0x1883d0: 0x14400007
    ctx->pc = 0x1883D0u;
    {
        const bool branch_taken_0x1883d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1883D4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)41 << 16));
        if (branch_taken_0x1883d0) {
            ctx->pc = 0x1883F0u;
            goto label_1883f0;
        }
    }
    ctx->pc = 0x1883D8u;
    // 0x1883d8: 0x3c040024
    ctx->pc = 0x1883d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1883dc: 0xc045a12
    ctx->pc = 0x1883DCu;
    SET_GPR_U32(ctx, 31, 0x1883E4u);
    ctx->pc = 0x1883E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6216));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883E4u; }
    }
    if (ctx->pc != 0x1883E4u) { return; }
    ctx->pc = 0x1883E4u;
    // 0x1883e4: 0x10000048
    ctx->pc = 0x1883E4u;
    {
        const bool branch_taken_0x1883e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1883E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1883e4) {
            ctx->pc = 0x188508u;
            goto label_188508;
        }
    }
    ctx->pc = 0x1883ECu;
    // 0x1883ec: 0x0
    ctx->pc = 0x1883ecu;
    // NOP
label_1883f0:
    // 0x1883f0: 0x282d
    ctx->pc = 0x1883f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883f4: 0x2630b900
    ctx->pc = 0x1883f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294949120));
    // 0x1883f8: 0x24062080
    ctx->pc = 0x1883f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x1883fc: 0xc041f1a
    ctx->pc = 0x1883FCu;
    SET_GPR_U32(ctx, 31, 0x188404u);
    ctx->pc = 0x188400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188404u; }
    }
    if (ctx->pc != 0x188404u) { return; }
    ctx->pc = 0x188404u;
    // 0x188404: 0xae170000
    ctx->pc = 0x188404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x188408: 0x2721021
    ctx->pc = 0x188408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x18840c: 0x3c120023
    ctx->pc = 0x18840cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x188410: 0x40182d
    ctx->pc = 0x188410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188414: 0x8c47000c
    ctx->pc = 0x188414u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x188418: 0x8c620010
    ctx->pc = 0x188418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18841c: 0x60482d
    ctx->pc = 0x18841cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188420: 0x8e880000
    ctx->pc = 0x188420u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x188424: 0x24140001
    ctx->pc = 0x188424u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188428: 0x47001a
    ctx->pc = 0x188428u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x18842c: 0x8fa50004
    ctx->pc = 0x18842cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x188430: 0xae020010
    ctx->pc = 0x188430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x188434: 0x26040028
    ctx->pc = 0x188434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    // 0x188438: 0xae07000c
    ctx->pc = 0x188438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x18843c: 0x3c0982d
    ctx->pc = 0x18843cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188440: 0xae080008
    ctx->pc = 0x188440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x188444: 0x3c170018
    ctx->pc = 0x188444u;
    SET_GPR_U32(ctx, 23, ((uint32_t)24 << 16));
    // 0x188448: 0xae150004
    ctx->pc = 0x188448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x18844c: 0x50e00001
    ctx->pc = 0x18844Cu;
    {
        const bool branch_taken_0x18844c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x18844c) {
            ctx->pc = 0x188450u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188454u;
label_188454:
    // 0x188454: 0x1812
    ctx->pc = 0x188454u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x188458: 0x1150018
    ctx->pc = 0x188458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x18845c: 0x2462ffff
    ctx->pc = 0x18845cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188460: 0x2463fffe
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x188464: 0xae020014
    ctx->pc = 0x188464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x188468: 0x8d220014
    ctx->pc = 0x188468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x18846c: 0xae030018
    ctx->pc = 0x18846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x188470: 0x3012
    ctx->pc = 0x188470u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x188474: 0xae020024
    ctx->pc = 0x188474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x188478: 0xae00001c
    ctx->pc = 0x188478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x18847c: 0xae000020
    ctx->pc = 0x18847cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x188480: 0x3c100029
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 16, ((uint32_t)41 << 16));
    // 0x188484: 0xc041eac
    ctx->pc = 0x188484u;
    SET_GPR_U32(ctx, 31, 0x18848Cu);
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294957440));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18848Cu; }
    }
    if (ctx->pc != 0x18848Cu) { return; }
    ctx->pc = 0x18848Cu;
    // 0x18848c: 0x282d
    ctx->pc = 0x18848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188490: 0x24060100
    ctx->pc = 0x188490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x188494: 0x200202d
    ctx->pc = 0x188494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188498: 0x24022080
    ctx->pc = 0x188498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x18849c: 0xc041f1a
    ctx->pc = 0x18849Cu;
    SET_GPR_U32(ctx, 31, 0x1884A4u);
    ctx->pc = 0x1884A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884A4u; }
    }
    if (ctx->pc != 0x1884A4u) { return; }
    ctx->pc = 0x1884A4u;
    // 0x1884a4: 0x200202d
    ctx->pc = 0x1884a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884a8: 0xc0453c6
    ctx->pc = 0x1884A8u;
    SET_GPR_U32(ctx, 31, 0x1884B0u);
    ctx->pc = 0x1884ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884B0u; }
    }
    if (ctx->pc != 0x1884B0u) { return; }
    ctx->pc = 0x1884B0u;
    // 0x1884b0: 0x24020002
    ctx->pc = 0x1884b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1884b4: 0xae42fd24
    ctx->pc = 0x1884b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966564), GPR_U32(ctx, 2));
    // 0x1884b8: 0x8e640000
    ctx->pc = 0x1884b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1884bc: 0x0
    ctx->pc = 0x1884bcu;
    // NOP
label_1884c0:
    // 0x1884c0: 0x3a0302d
    ctx->pc = 0x1884c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884c4: 0x8e45fd24
    ctx->pc = 0x1884c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294966564)));
    // 0x1884c8: 0x2627b900
    ctx->pc = 0x1884c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294949120));
    // 0x1884cc: 0xc062560
    ctx->pc = 0x1884CCu;
    SET_GPR_U32(ctx, 31, 0x1884D4u);
    ctx->pc = 0x1884D0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 23), 30728));
    ctx->pc = 0x189580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189580_0x189580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884D4u; }
    }
    if (ctx->pc != 0x1884D4u) { return; }
    ctx->pc = 0x1884D4u;
    // 0x1884d4: 0x5454fffa
    ctx->pc = 0x1884D4u;
    {
        const bool branch_taken_0x1884d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x1884d4) {
            ctx->pc = 0x1884D8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x1884C0u;
            goto label_1884c0;
        }
    }
    ctx->pc = 0x1884DCu;
    // 0x1884dc: 0x8fa30008
    ctx->pc = 0x1884dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1884e0: 0x3c040029
    ctx->pc = 0x1884e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x1884e4: 0x761023
    ctx->pc = 0x1884e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1884e8: 0x2483b8c8
    ctx->pc = 0x1884e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1884ec: 0x21080
    ctx->pc = 0x1884ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1884f0: 0x621821
    ctx->pc = 0x1884f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1884f4: 0xc061db2
    ctx->pc = 0x1884F4u;
    SET_GPR_U32(ctx, 31, 0x1884FCu);
    ctx->pc = 0x1884F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1876C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001876C8_0x1876c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884FCu; }
    }
    if (ctx->pc != 0x1884FCu) { return; }
    ctx->pc = 0x1884FCu;
    // 0x1884fc: 0x8c430008
    ctx->pc = 0x1884fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188500: 0x102d
    ctx->pc = 0x188500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188504: 0x2a3100b
    ctx->pc = 0x188504u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 21));
label_188508:
    // 0x188508: 0xdfb00010
    ctx->pc = 0x188508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18850c: 0xdfb10018
    ctx->pc = 0x18850cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188510: 0xdfb20020
    ctx->pc = 0x188510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188514: 0xdfb30028
    ctx->pc = 0x188514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188518: 0xdfb40030
    ctx->pc = 0x188518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18851c: 0xdfb50038
    ctx->pc = 0x18851cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x188520: 0xdfb60040
    ctx->pc = 0x188520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188524: 0xdfb70048
    ctx->pc = 0x188524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188528: 0xdfbe0050
    ctx->pc = 0x188528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18852c: 0xdfbf0058
    ctx->pc = 0x18852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x188530: 0x3e00008
    ctx->pc = 0x188530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1883C0u: goto label_1883c0;
            case 0x1883F0u: goto label_1883f0;
            case 0x188454u: goto label_188454;
            case 0x1884C0u: goto label_1884c0;
            case 0x188508u: goto label_188508;
            case 0x1885A8u: goto label_1885a8;
            case 0x188640u: goto label_188640;
            case 0x188684u: goto label_188684;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188538u;
    // 0x188538: 0x27bdffa0
    ctx->pc = 0x188538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18853c: 0x3c020029
    ctx->pc = 0x18853cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188540: 0xffb40030
    ctx->pc = 0x188540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x188544: 0x80a02d
    ctx->pc = 0x188544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188548: 0xffb10018
    ctx->pc = 0x188548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x18854c: 0x1488c0
    ctx->pc = 0x18854cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 3));
    // 0x188550: 0xffb30028
    ctx->pc = 0x188550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x188554: 0x2453b8c8
    ctx->pc = 0x188554u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x188558: 0x2341023
    ctx->pc = 0x188558u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x18855c: 0xffb20020
    ctx->pc = 0x18855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x188560: 0xffb50038
    ctx->pc = 0x188560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x188564: 0xa0a82d
    ctx->pc = 0x188564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188568: 0xffb60040
    ctx->pc = 0x188568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x18856c: 0x26630004
    ctx->pc = 0x18856cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4));
    // 0x188570: 0xffbe0050
    ctx->pc = 0x188570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x188574: 0xc0f02d
    ctx->pc = 0x188574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188578: 0xffb00010
    ctx->pc = 0x188578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18857c: 0x29080
    ctx->pc = 0x18857cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 2));
    // 0x188580: 0xffb70048
    ctx->pc = 0x188580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x188584: 0x243b021
    ctx->pc = 0x188584u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x188588: 0xffbf0058
    ctx->pc = 0x188588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x18858c: 0xc0623b6
    ctx->pc = 0x18858Cu;
    SET_GPR_U32(ctx, 31, 0x188594u);
    ctx->pc = 0x188590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188594u; }
    }
    if (ctx->pc != 0x188594u) { return; }
    ctx->pc = 0x188594u;
    // 0x188594: 0x24030003
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x188598: 0x14430003
    ctx->pc = 0x188598u;
    {
        const bool branch_taken_0x188598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18859Cu;
        SET_GPR_U32(ctx, 23, ((uint32_t)41 << 16));
        if (branch_taken_0x188598) {
            ctx->pc = 0x1885A8u;
            goto label_1885a8;
        }
    }
    ctx->pc = 0x1885A0u;
    // 0x1885a0: 0x10000038
    ctx->pc = 0x1885A0u;
    {
        const bool branch_taken_0x1885a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1885A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1885a0) {
            ctx->pc = 0x188684u;
            goto label_188684;
        }
    }
    ctx->pc = 0x1885A8u;
label_1885a8:
    // 0x1885a8: 0x282d
    ctx->pc = 0x1885a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885ac: 0x26f0b900
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 23), 4294949120));
    // 0x1885b0: 0x24062080
    ctx->pc = 0x1885b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x1885b4: 0xc041f1a
    ctx->pc = 0x1885B4u;
    SET_GPR_U32(ctx, 31, 0x1885BCu);
    ctx->pc = 0x1885B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885BCu; }
    }
    if (ctx->pc != 0x1885BCu) { return; }
    ctx->pc = 0x1885BCu;
    // 0x1885bc: 0xae150000
    ctx->pc = 0x1885bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1885c0: 0x2723021
    ctx->pc = 0x1885c0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1885c4: 0x3c120023
    ctx->pc = 0x1885c4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1885c8: 0xc0102d
    ctx->pc = 0x1885c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885cc: 0x3c040029
    ctx->pc = 0x1885ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x1885d0: 0x40182d
    ctx->pc = 0x1885d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885d4: 0x8c470008
    ctx->pc = 0x1885d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1885d8: 0x60282d
    ctx->pc = 0x1885d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885dc: 0x8cc20014
    ctx->pc = 0x1885dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1885e0: 0x8c68000c
    ctx->pc = 0x1885e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1885e4: 0x2484d980
    ctx->pc = 0x1885e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957440));
    // 0x1885e8: 0x8ca30010
    ctx->pc = 0x1885e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1885ec: 0x282d
    ctx->pc = 0x1885ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885f0: 0xae020024
    ctx->pc = 0x1885f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1885f4: 0x24022080
    ctx->pc = 0x1885f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x1885f8: 0x24060100
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1885fc: 0xae030010
    ctx->pc = 0x1885fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x188600: 0xae070008
    ctx->pc = 0x188600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x188604: 0x2c0982d
    ctx->pc = 0x188604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188608: 0xae08000c
    ctx->pc = 0x188608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x18860c: 0x24150001
    ctx->pc = 0x18860cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188610: 0xafa20000
    ctx->pc = 0x188610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x188614: 0x3c160018
    ctx->pc = 0x188614u;
    SET_GPR_U32(ctx, 22, ((uint32_t)24 << 16));
    // 0x188618: 0xae1e0004
    ctx->pc = 0x188618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 30));
    // 0x18861c: 0xae000014
    ctx->pc = 0x18861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x188620: 0xae000018
    ctx->pc = 0x188620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x188624: 0xae00001c
    ctx->pc = 0x188624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x188628: 0xc041f1a
    ctx->pc = 0x188628u;
    SET_GPR_U32(ctx, 31, 0x188630u);
    ctx->pc = 0x18862Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188630u; }
    }
    if (ctx->pc != 0x188630u) { return; }
    ctx->pc = 0x188630u;
    // 0x188630: 0x2403000b
    ctx->pc = 0x188630u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x188634: 0xae43fd24
    ctx->pc = 0x188634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966564), GPR_U32(ctx, 3));
    // 0x188638: 0x8e640000
    ctx->pc = 0x188638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18863c: 0x0
    ctx->pc = 0x18863cu;
    // NOP
label_188640:
    // 0x188640: 0x3a0302d
    ctx->pc = 0x188640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188644: 0x8e45fd24
    ctx->pc = 0x188644u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294966564)));
    // 0x188648: 0x26e7b900
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 4294949120));
    // 0x18864c: 0xc062560
    ctx->pc = 0x18864Cu;
    SET_GPR_U32(ctx, 31, 0x188654u);
    ctx->pc = 0x188650u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 22), 30728));
    ctx->pc = 0x189580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189580_0x189580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188654u; }
    }
    if (ctx->pc != 0x188654u) { return; }
    ctx->pc = 0x188654u;
    // 0x188654: 0x5455fffa
    ctx->pc = 0x188654u;
    {
        const bool branch_taken_0x188654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x188654) {
            ctx->pc = 0x188658u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x188640u;
            goto label_188640;
        }
    }
    ctx->pc = 0x18865Cu;
    // 0x18865c: 0x3c040029
    ctx->pc = 0x18865cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x188660: 0x2341023
    ctx->pc = 0x188660u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x188664: 0x2483b8c8
    ctx->pc = 0x188664u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x188668: 0x21080
    ctx->pc = 0x188668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x18866c: 0x621821
    ctx->pc = 0x18866cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188670: 0xc061db2
    ctx->pc = 0x188670u;
    SET_GPR_U32(ctx, 31, 0x188678u);
    ctx->pc = 0x188674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1876C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001876C8_0x1876c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188678u; }
    }
    if (ctx->pc != 0x188678u) { return; }
    ctx->pc = 0x188678u;
    // 0x188678: 0x8c430008
    ctx->pc = 0x188678u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18867c: 0x102d
    ctx->pc = 0x18867cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188680: 0x3c3100b
    ctx->pc = 0x188680u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 30));
label_188684:
    // 0x188684: 0xdfb00010
    ctx->pc = 0x188684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188688: 0xdfb10018
    ctx->pc = 0x188688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18868c: 0xdfb20020
    ctx->pc = 0x18868cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188690: 0xdfb30028
    ctx->pc = 0x188690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188694: 0xdfb40030
    ctx->pc = 0x188694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188698: 0xdfb50038
    ctx->pc = 0x188698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18869c: 0xdfb60040
    ctx->pc = 0x18869cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1886a0: 0xdfb70048
    ctx->pc = 0x1886a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1886a4: 0xdfbe0050
    ctx->pc = 0x1886a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1886a8: 0xdfbf0058
    ctx->pc = 0x1886a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1886ac: 0x3e00008
    ctx->pc = 0x1886ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1883C0u: goto label_1883c0;
            case 0x1883F0u: goto label_1883f0;
            case 0x188454u: goto label_188454;
            case 0x1884C0u: goto label_1884c0;
            case 0x188508u: goto label_188508;
            case 0x1885A8u: goto label_1885a8;
            case 0x188640u: goto label_188640;
            case 0x188684u: goto label_188684;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1886B4u;
    // 0x1886b4: 0x0
    ctx->pc = 0x1886b4u;
    // NOP
}
