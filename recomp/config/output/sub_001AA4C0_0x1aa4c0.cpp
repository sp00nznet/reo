#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AA4C0
// Address: 0x1aa4c0 - 0x1aaad0
void sub_001AA4C0_0x1aa4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aa4c0u;

    // 0x1aa4c0: 0x27bdfe30
    ctx->pc = 0x1aa4c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1aa4c4: 0x30a700ff
    ctx->pc = 0x1aa4c4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), 255));
    // 0x1aa4c8: 0xffbf0070
    ctx->pc = 0x1aa4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1aa4cc: 0x308200ff
    ctx->pc = 0x1aa4ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
    // 0x1aa4d0: 0x7fb60060
    ctx->pc = 0x1aa4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aa4d4: 0x30c800ff
    ctx->pc = 0x1aa4d4u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 6), 255));
    // 0x1aa4d8: 0x7fb50050
    ctx->pc = 0x1aa4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aa4dc: 0x3c050025
    ctx->pc = 0x1aa4dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa4e0: 0x7fb40040
    ctx->pc = 0x1aa4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aa4e4: 0x3c010032
    ctx->pc = 0x1aa4e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa4e8: 0x7fb30030
    ctx->pc = 0x1aa4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aa4ec: 0x27a40080
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aa4f0: 0x7fb20020
    ctx->pc = 0x1aa4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa4f4: 0x40302d
    ctx->pc = 0x1aa4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4f8: 0x7fb10010
    ctx->pc = 0x1aa4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa4fc: 0x7fb00000
    ctx->pc = 0x1aa4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa500: 0x8c34440c
    ctx->pc = 0x1aa500u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aa504: 0xc042a0c
    ctx->pc = 0x1AA504u;
    SET_GPR_U32(ctx, 31, 0x1AA50Cu);
    ctx->pc = 0x1AA508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955024));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA50Cu; }
    }
    if (ctx->pc != 0x1AA50Cu) { return; }
    ctx->pc = 0x1AA50Cu;
    // 0x1aa50c: 0x27a40080
    ctx->pc = 0x1aa50cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aa510: 0xc06a8f8
    ctx->pc = 0x1AA510u;
    SET_GPR_U32(ctx, 31, 0x1AA518u);
    ctx->pc = 0x1AA514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA518u; }
    }
    if (ctx->pc != 0x1AA518u) { return; }
    ctx->pc = 0x1AA518u;
    // 0x1aa518: 0x1840007c
    ctx->pc = 0x1AA518u;
    {
        const bool branch_taken_0x1aa518 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AA51Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
        if (branch_taken_0x1aa518) {
            ctx->pc = 0x1AA70Cu;
            goto label_1aa70c;
        }
    }
    ctx->pc = 0x1AA520u;
    // 0x1aa520: 0x280282d
    ctx->pc = 0x1aa520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa524: 0xc041eac
    ctx->pc = 0x1AA524u;
    SET_GPR_U32(ctx, 31, 0x1AA52Cu);
    ctx->pc = 0x1AA528u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA52Cu; }
    }
    if (ctx->pc != 0x1AA52Cu) { return; }
    ctx->pc = 0x1AA52Cu;
    // 0x1aa52c: 0x3c010057
    ctx->pc = 0x1aa52cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x1aa530: 0x3c030018
    ctx->pc = 0x1aa530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
    // 0x1aa534: 0x902597b8
    ctx->pc = 0x1aa534u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294940600)));
    // 0x1aa538: 0x27a60184
    ctx->pc = 0x1aa538u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 388));
    // 0x1aa53c: 0x3c02000c
    ctx->pc = 0x1aa53cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)12 << 16));
    // 0x1aa540: 0xa82d
    ctx->pc = 0x1aa540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa544: 0x3c010032
    ctx->pc = 0x1aa544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa548: 0x38a50001
    ctx->pc = 0x1aa548u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x1aa54c: 0x8c24440c
    ctx->pc = 0x1aa54cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aa550: 0x3c010057
    ctx->pc = 0x1aa550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x1aa554: 0x839821
    ctx->pc = 0x1aa554u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aa558: 0xa02597b8
    ctx->pc = 0x1aa558u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940600), (uint8_t)GPR_U32(ctx, 5));
    // 0x1aa55c: 0x2629021
    ctx->pc = 0x1aa55cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1aa560: 0x8cc30000
    ctx->pc = 0x1aa560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aa564: 0x3c010057
    ctx->pc = 0x1aa564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x1aa568: 0x902297b8
    ctx->pc = 0x1aa568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294940600)));
    // 0x1aa56c: 0x2838821
    ctx->pc = 0x1aa56cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1aa570: 0x8e360000
    ctx->pc = 0x1aa570u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa574: 0x211c0
    ctx->pc = 0x1aa574u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
    // 0x1aa578: 0x24501800
    ctx->pc = 0x1aa578u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x1aa57c: 0x1000000e
    ctx->pc = 0x1AA57Cu;
    {
        const bool branch_taken_0x1aa57c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA580u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1aa57c) {
            ctx->pc = 0x1AA5B8u;
            goto label_1aa5b8;
        }
    }
    ctx->pc = 0x1AA584u;
label_1aa584:
    // 0x1aa584: 0x8e250000
    ctx->pc = 0x1aa584u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa588: 0x8c2416a0
    ctx->pc = 0x1aa588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa58c: 0x260302d
    ctx->pc = 0x1aa58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa590: 0xc06a810
    ctx->pc = 0x1AA590u;
    SET_GPR_U32(ctx, 31, 0x1AA598u);
    ctx->pc = 0x1AA594u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x1AA040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA040_0x1aa040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA598u; }
    }
    if (ctx->pc != 0x1AA598u) { return; }
    ctx->pc = 0x1AA598u;
    // 0x1aa598: 0x260202d
    ctx->pc = 0x1aa598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa59c: 0xc06bd74
    ctx->pc = 0x1AA59Cu;
    SET_GPR_U32(ctx, 31, 0x1AA5A4u);
    ctx->pc = 0x1AA5A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5D0_0x1af5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5A4u; }
    }
    if (ctx->pc != 0x1AA5A4u) { return; }
    ctx->pc = 0x1AA5A4u;
    // 0x1aa5a4: 0x240202d
    ctx->pc = 0x1aa5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5a8: 0xc0733f4
    ctx->pc = 0x1AA5A8u;
    SET_GPR_U32(ctx, 31, 0x1AA5B0u);
    ctx->pc = 0x1AA5ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFD0_0x1ccfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5B0u; }
    }
    if (ctx->pc != 0x1AA5B0u) { return; }
    ctx->pc = 0x1AA5B0u;
    // 0x1aa5b0: 0x26100001
    ctx->pc = 0x1aa5b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa5b4: 0x26b50001
    ctx->pc = 0x1aa5b4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_1aa5b8:
    // 0x1aa5b8: 0x2b6102a
    ctx->pc = 0x1aa5b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 22)));
    // 0x1aa5bc: 0x1440fff1
    ctx->pc = 0x1AA5BCu;
    {
        const bool branch_taken_0x1aa5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA5C0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1aa5bc) {
            ctx->pc = 0x1AA584u;
            goto label_1aa584;
        }
    }
    ctx->pc = 0x1AA5C4u;
    // 0x1aa5c4: 0xc06372c
    ctx->pc = 0x1AA5C4u;
    SET_GPR_U32(ctx, 31, 0x1AA5CCu);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5CCu; }
    }
    if (ctx->pc != 0x1AA5CCu) { return; }
    ctx->pc = 0x1AA5CCu;
    // 0x1aa5cc: 0x3c010057
    ctx->pc = 0x1aa5ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x1aa5d0: 0x902297b8
    ctx->pc = 0x1aa5d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294940600)));
    // 0x1aa5d4: 0x211c0
    ctx->pc = 0x1aa5d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
    // 0x1aa5d8: 0xc073470
    ctx->pc = 0x1AA5D8u;
    SET_GPR_U32(ctx, 31, 0x1AA5E0u);
    ctx->pc = 0x1AA5DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 6144));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5E0u; }
    }
    if (ctx->pc != 0x1AA5E0u) { return; }
    ctx->pc = 0x1AA5E0u;
    // 0x1aa5e0: 0x3c10004a
    ctx->pc = 0x1aa5e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)74 << 16));
    // 0x1aa5e4: 0x24040080
    ctx->pc = 0x1aa5e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa5e8: 0x24050006
    ctx->pc = 0x1aa5e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa5ec: 0xc06ca9c
    ctx->pc = 0x1AA5ECu;
    SET_GPR_U32(ctx, 31, 0x1AA5F4u);
    ctx->pc = 0x1AA5F0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963024));
    ctx->pc = 0x1B2A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2A70_0x1b2a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5F4u; }
    }
    if (ctx->pc != 0x1AA5F4u) { return; }
    ctx->pc = 0x1AA5F4u;
    // 0x1aa5f4: 0xae020808
    ctx->pc = 0x1aa5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
    // 0x1aa5f8: 0x200202d
    ctx->pc = 0x1aa5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5fc: 0xae000818
    ctx->pc = 0x1aa5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 0));
    // 0x1aa600: 0x24050002
    ctx->pc = 0x1aa600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa604: 0x8fa30194
    ctx->pc = 0x1aa604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1aa608: 0x402d
    ctx->pc = 0x1aa608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa60c: 0x8fa201a4
    ctx->pc = 0x1aa60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1aa610: 0x2833021
    ctx->pc = 0x1aa610u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1aa614: 0xc073d58
    ctx->pc = 0x1AA614u;
    SET_GPR_U32(ctx, 31, 0x1AA61Cu);
    ctx->pc = 0x1AA618u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA61Cu; }
    }
    if (ctx->pc != 0x1AA61Cu) { return; }
    ctx->pc = 0x1AA61Cu;
    // 0x1aa61c: 0xc06372c
    ctx->pc = 0x1AA61Cu;
    SET_GPR_U32(ctx, 31, 0x1AA624u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA624u; }
    }
    if (ctx->pc != 0x1AA624u) { return; }
    ctx->pc = 0x1AA624u;
    // 0x1aa624: 0x3c04004a
    ctx->pc = 0x1aa624u;
    SET_GPR_U32(ctx, 4, ((uint32_t)74 << 16));
    // 0x1aa628: 0x302d
    ctx->pc = 0x1aa628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa62c: 0x24050001
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa630: 0x10000004
    ctx->pc = 0x1AA630u;
    {
        const bool branch_taken_0x1aa630 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA634u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962928));
        if (branch_taken_0x1aa630) {
            ctx->pc = 0x1AA644u;
            goto label_1aa644;
        }
    }
    ctx->pc = 0x1AA638u;
label_1aa638:
    // 0x1aa638: 0x861821
    ctx->pc = 0x1aa638u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa63c: 0xa06508a0
    ctx->pc = 0x1aa63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2208), (uint8_t)GPR_U32(ctx, 5));
    // 0x1aa640: 0x24c60001
    ctx->pc = 0x1aa640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1aa644:
    // 0x1aa644: 0x96030812
    ctx->pc = 0x1aa644u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2066)));
    // 0x1aa648: 0xc3182a
    ctx->pc = 0x1aa648u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x1aa64c: 0x1460fffa
    ctx->pc = 0x1AA64Cu;
    {
        const bool branch_taken_0x1aa64c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aa64c) {
            ctx->pc = 0x1AA638u;
            goto label_1aa638;
        }
    }
    ctx->pc = 0x1AA654u;
    // 0x1aa654: 0x27b001b4
    ctx->pc = 0x1aa654u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 436));
    // 0x1aa658: 0x8e030000
    ctx->pc = 0x1aa658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa65c: 0x1060002b
    ctx->pc = 0x1AA65Cu;
    {
        const bool branch_taken_0x1aa65c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA660u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x1aa65c) {
            ctx->pc = 0x1AA70Cu;
            goto label_1aa70c;
        }
    }
    ctx->pc = 0x1AA664u;
    // 0x1aa664: 0x902397b8
    ctx->pc = 0x1aa664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294940600)));
    // 0x1aa668: 0x31040
    ctx->pc = 0x1aa668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1aa66c: 0x431021
    ctx->pc = 0x1aa66cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa670: 0x21100
    ctx->pc = 0x1aa670u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa674: 0xc073470
    ctx->pc = 0x1AA674u;
    SET_GPR_U32(ctx, 31, 0x1AA67Cu);
    ctx->pc = 0x1AA678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8448));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA67Cu; }
    }
    if (ctx->pc != 0x1AA67Cu) { return; }
    ctx->pc = 0x1AA67Cu;
    // 0x1aa67c: 0x24040015
    ctx->pc = 0x1aa67cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aa680: 0xc06bde0
    ctx->pc = 0x1AA680u;
    SET_GPR_U32(ctx, 31, 0x1AA688u);
    ctx->pc = 0x1AA684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA688u; }
    }
    if (ctx->pc != 0x1AA688u) { return; }
    ctx->pc = 0x1AA688u;
    // 0x1aa688: 0x24040001
    ctx->pc = 0x1aa688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa68c: 0xc06bde0
    ctx->pc = 0x1AA68Cu;
    SET_GPR_U32(ctx, 31, 0x1AA694u);
    ctx->pc = 0x1AA690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA694u; }
    }
    if (ctx->pc != 0x1AA694u) { return; }
    ctx->pc = 0x1AA694u;
    // 0x1aa694: 0x24040012
    ctx->pc = 0x1aa694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1aa698: 0xc06bde0
    ctx->pc = 0x1AA698u;
    SET_GPR_U32(ctx, 31, 0x1AA6A0u);
    ctx->pc = 0x1AA69Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6A0u; }
    }
    if (ctx->pc != 0x1AA6A0u) { return; }
    ctx->pc = 0x1AA6A0u;
    // 0x1aa6a0: 0x24040062
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
    // 0x1aa6a4: 0xc06bde0
    ctx->pc = 0x1AA6A4u;
    SET_GPR_U32(ctx, 31, 0x1AA6ACu);
    ctx->pc = 0x1AA6A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6ACu; }
    }
    if (ctx->pc != 0x1AA6ACu) { return; }
    ctx->pc = 0x1AA6ACu;
    // 0x1aa6ac: 0x2404000c
    ctx->pc = 0x1aa6acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aa6b0: 0xc06bde0
    ctx->pc = 0x1AA6B0u;
    SET_GPR_U32(ctx, 31, 0x1AA6B8u);
    ctx->pc = 0x1AA6B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6B8u; }
    }
    if (ctx->pc != 0x1AA6B8u) { return; }
    ctx->pc = 0x1AA6B8u;
    // 0x1aa6b8: 0x24040066
    ctx->pc = 0x1aa6b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1aa6bc: 0xc06bde0
    ctx->pc = 0x1AA6BCu;
    SET_GPR_U32(ctx, 31, 0x1AA6C4u);
    ctx->pc = 0x1AA6C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6C4u; }
    }
    if (ctx->pc != 0x1AA6C4u) { return; }
    ctx->pc = 0x1AA6C4u;
    // 0x1aa6c4: 0x24040002
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa6c8: 0xc06bde0
    ctx->pc = 0x1AA6C8u;
    SET_GPR_U32(ctx, 31, 0x1AA6D0u);
    ctx->pc = 0x1AA6CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6D0u; }
    }
    if (ctx->pc != 0x1AA6D0u) { return; }
    ctx->pc = 0x1AA6D0u;
    // 0x1aa6d0: 0x3c11003c
    ctx->pc = 0x1aa6d0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x1aa6d4: 0x24040400
    ctx->pc = 0x1aa6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1aa6d8: 0x24050007
    ctx->pc = 0x1aa6d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa6dc: 0xc06ca9c
    ctx->pc = 0x1AA6DCu;
    SET_GPR_U32(ctx, 31, 0x1AA6E4u);
    ctx->pc = 0x1AA6E0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294956500));
    ctx->pc = 0x1B2A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2A70_0x1b2a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6E4u; }
    }
    if (ctx->pc != 0x1AA6E4u) { return; }
    ctx->pc = 0x1AA6E4u;
    // 0x1aa6e4: 0xae220808
    ctx->pc = 0x1aa6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2056), GPR_U32(ctx, 2));
    // 0x1aa6e8: 0x220202d
    ctx->pc = 0x1aa6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6ec: 0xae200818
    ctx->pc = 0x1aa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 0));
    // 0x1aa6f0: 0x24050002
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa6f4: 0x8e030000
    ctx->pc = 0x1aa6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa6f8: 0x402d
    ctx->pc = 0x1aa6f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6fc: 0x8fa201c4
    ctx->pc = 0x1aa6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1aa700: 0x2833021
    ctx->pc = 0x1aa700u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1aa704: 0xc073d58
    ctx->pc = 0x1AA704u;
    SET_GPR_U32(ctx, 31, 0x1AA70Cu);
    ctx->pc = 0x1AA708u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA70Cu; }
    }
    if (ctx->pc != 0x1AA70Cu) { return; }
    ctx->pc = 0x1AA70Cu;
label_1aa70c:
    // 0x1aa70c: 0xdfbf0070
    ctx->pc = 0x1aa70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aa710: 0x7bb60060
    ctx->pc = 0x1aa710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aa714: 0x7bb50050
    ctx->pc = 0x1aa714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa718: 0x7bb40040
    ctx->pc = 0x1aa718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa71c: 0x7bb30030
    ctx->pc = 0x1aa71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa720: 0x7bb20020
    ctx->pc = 0x1aa720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa724: 0x7bb10010
    ctx->pc = 0x1aa724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa728: 0x7bb00000
    ctx->pc = 0x1aa728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa72c: 0x3e00008
    ctx->pc = 0x1AA72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA584u: goto label_1aa584;
            case 0x1AA5B8u: goto label_1aa5b8;
            case 0x1AA638u: goto label_1aa638;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA70Cu: goto label_1aa70c;
            case 0x1AA78Cu: goto label_1aa78c;
            case 0x1AA7B4u: goto label_1aa7b4;
            case 0x1AA7D8u: goto label_1aa7d8;
            case 0x1AA804u: goto label_1aa804;
            case 0x1AA820u: goto label_1aa820;
            case 0x1AA83Cu: goto label_1aa83c;
            case 0x1AA860u: goto label_1aa860;
            case 0x1AA888u: goto label_1aa888;
            case 0x1AA8A4u: goto label_1aa8a4;
            case 0x1AA8A8u: goto label_1aa8a8;
            case 0x1AA8E0u: goto label_1aa8e0;
            case 0x1AA8E4u: goto label_1aa8e4;
            case 0x1AA914u: goto label_1aa914;
            case 0x1AA940u: goto label_1aa940;
            case 0x1AAA2Cu: goto label_1aaa2c;
            case 0x1AAAA4u: goto label_1aaaa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA734u;
    // 0x1aa734: 0x0
    ctx->pc = 0x1aa734u;
    // NOP
    // 0x1aa738: 0x0
    ctx->pc = 0x1aa738u;
    // NOP
    // 0x1aa73c: 0x0
    ctx->pc = 0x1aa73cu;
    // NOP
    // 0x1aa740: 0x27bdfdf0
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1aa744: 0xffbf0080
    ctx->pc = 0x1aa744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1aa748: 0x7fb70070
    ctx->pc = 0x1aa748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1aa74c: 0x7fb60060
    ctx->pc = 0x1aa74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aa750: 0x7fb50050
    ctx->pc = 0x1aa750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aa754: 0x7fb40040
    ctx->pc = 0x1aa754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aa758: 0xa0a82d
    ctx->pc = 0x1aa758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa75c: 0x7fb30030
    ctx->pc = 0x1aa75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aa760: 0x7fb20020
    ctx->pc = 0x1aa760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa764: 0x7fb10010
    ctx->pc = 0x1aa764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa768: 0x7fb00000
    ctx->pc = 0x1aa768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa76c: 0x90a20003
    ctx->pc = 0x1aa76cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1aa770: 0x28420014
    ctx->pc = 0x1aa770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 20));
    // 0x1aa774: 0x14400005
    ctx->pc = 0x1AA774u;
    {
        const bool branch_taken_0x1aa774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA778u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aa774) {
            ctx->pc = 0x1AA78Cu;
            goto label_1aa78c;
        }
    }
    ctx->pc = 0x1AA77Cu;
    // 0x1aa77c: 0x8ea20034
    ctx->pc = 0x1aa77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1aa780: 0xac401460
    ctx->pc = 0x1aa780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5216), GPR_U32(ctx, 0));
    // 0x1aa784: 0x8ea20034
    ctx->pc = 0x1aa784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1aa788: 0xac401464
    ctx->pc = 0x1aa788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5220), GPR_U32(ctx, 0));
label_1aa78c:
    // 0x1aa78c: 0x3c010032
    ctx->pc = 0x1aa78cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa790: 0x96a40bb4
    ctx->pc = 0x1aa790u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2996)));
    // 0x1aa794: 0x10800022
    ctx->pc = 0x1AA794u;
    {
        const bool branch_taken_0x1aa794 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA798u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
        if (branch_taken_0x1aa794) {
            ctx->pc = 0x1AA820u;
            goto label_1aa820;
        }
    }
    ctx->pc = 0x1AA79Cu;
    // 0x1aa79c: 0x92a3054d
    ctx->pc = 0x1aa79cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1357)));
    // 0x1aa7a0: 0x24020001
    ctx->pc = 0x1aa7a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa7a4: 0x10620003
    ctx->pc = 0x1AA7A4u;
    {
        const bool branch_taken_0x1aa7a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1aa7a4) {
            ctx->pc = 0x1AA7B4u;
            goto label_1aa7b4;
        }
    }
    ctx->pc = 0x1AA7ACu;
    // 0x1aa7ac: 0x1000000a
    ctx->pc = 0x1AA7ACu;
    {
        const bool branch_taken_0x1aa7ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA7B0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x1aa7ac) {
            ctx->pc = 0x1AA7D8u;
            goto label_1aa7d8;
        }
    }
    ctx->pc = 0x1AA7B4u;
label_1aa7b4:
    // 0x1aa7b4: 0x92a70b98
    ctx->pc = 0x1aa7b4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
    // 0x1aa7b8: 0x3c050025
    ctx->pc = 0x1aa7b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa7bc: 0x3c060025
    ctx->pc = 0x1aa7bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa7c0: 0x27a40090
    ctx->pc = 0x1aa7c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa7c4: 0x24a5d030
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955056));
    // 0x1aa7c8: 0xc042a0c
    ctx->pc = 0x1AA7C8u;
    SET_GPR_U32(ctx, 31, 0x1AA7D0u);
    ctx->pc = 0x1AA7CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7D0u; }
    }
    if (ctx->pc != 0x1AA7D0u) { return; }
    ctx->pc = 0x1AA7D0u;
    // 0x1aa7d0: 0x10000035
    ctx->pc = 0x1AA7D0u;
    {
        const bool branch_taken_0x1aa7d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA7D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x1aa7d0) {
            ctx->pc = 0x1AA8A8u;
            goto label_1aa8a8;
        }
    }
    ctx->pc = 0x1AA7D8u;
label_1aa7d8:
    // 0x1aa7d8: 0x28e1000a
    ctx->pc = 0x1aa7d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 10));
    // 0x1aa7dc: 0x10200009
    ctx->pc = 0x1AA7DCu;
    {
        const bool branch_taken_0x1aa7dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA7E0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1aa7dc) {
            ctx->pc = 0x1AA804u;
            goto label_1aa804;
        }
    }
    ctx->pc = 0x1AA7E4u;
    // 0x1aa7e4: 0x3c050025
    ctx->pc = 0x1aa7e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa7e8: 0x3c060025
    ctx->pc = 0x1aa7e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa7ec: 0x27a40090
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa7f0: 0x24a5d050
    ctx->pc = 0x1aa7f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955088));
    // 0x1aa7f4: 0xc042a0c
    ctx->pc = 0x1AA7F4u;
    SET_GPR_U32(ctx, 31, 0x1AA7FCu);
    ctx->pc = 0x1AA7F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7FCu; }
    }
    if (ctx->pc != 0x1AA7FCu) { return; }
    ctx->pc = 0x1AA7FCu;
    // 0x1aa7fc: 0x10000029
    ctx->pc = 0x1AA7FCu;
    {
        const bool branch_taken_0x1aa7fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa7fc) {
            ctx->pc = 0x1AA8A4u;
            goto label_1aa8a4;
        }
    }
    ctx->pc = 0x1AA804u;
label_1aa804:
    // 0x1aa804: 0x3c060025
    ctx->pc = 0x1aa804u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa808: 0x27a40090
    ctx->pc = 0x1aa808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa80c: 0x24a5d060
    ctx->pc = 0x1aa80cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955104));
    // 0x1aa810: 0xc042a0c
    ctx->pc = 0x1AA810u;
    SET_GPR_U32(ctx, 31, 0x1AA818u);
    ctx->pc = 0x1AA814u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA818u; }
    }
    if (ctx->pc != 0x1AA818u) { return; }
    ctx->pc = 0x1AA818u;
    // 0x1aa818: 0x10000022
    ctx->pc = 0x1AA818u;
    {
        const bool branch_taken_0x1aa818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa818) {
            ctx->pc = 0x1AA8A4u;
            goto label_1aa8a4;
        }
    }
    ctx->pc = 0x1AA820u;
label_1aa820:
    // 0x1aa820: 0x92a3054d
    ctx->pc = 0x1aa820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1357)));
    // 0x1aa824: 0x1060000e
    ctx->pc = 0x1AA824u;
    {
        const bool branch_taken_0x1aa824 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA828u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1aa824) {
            ctx->pc = 0x1AA860u;
            goto label_1aa860;
        }
    }
    ctx->pc = 0x1AA82Cu;
    // 0x1aa82c: 0x10620003
    ctx->pc = 0x1AA82Cu;
    {
        const bool branch_taken_0x1aa82c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1aa82c) {
            ctx->pc = 0x1AA83Cu;
            goto label_1aa83c;
        }
    }
    ctx->pc = 0x1AA834u;
    // 0x1aa834: 0x10000014
    ctx->pc = 0x1AA834u;
    {
        const bool branch_taken_0x1aa834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA838u;
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
        if (branch_taken_0x1aa834) {
            ctx->pc = 0x1AA888u;
            goto label_1aa888;
        }
    }
    ctx->pc = 0x1AA83Cu;
label_1aa83c:
    // 0x1aa83c: 0x92a70b98
    ctx->pc = 0x1aa83cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
    // 0x1aa840: 0x3c050025
    ctx->pc = 0x1aa840u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa844: 0x3c060025
    ctx->pc = 0x1aa844u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa848: 0x27a40090
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa84c: 0x24a5d030
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955056));
    // 0x1aa850: 0xc042a0c
    ctx->pc = 0x1AA850u;
    SET_GPR_U32(ctx, 31, 0x1AA858u);
    ctx->pc = 0x1AA854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA858u; }
    }
    if (ctx->pc != 0x1AA858u) { return; }
    ctx->pc = 0x1AA858u;
    // 0x1aa858: 0x10000012
    ctx->pc = 0x1AA858u;
    {
        const bool branch_taken_0x1aa858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa858) {
            ctx->pc = 0x1AA8A4u;
            goto label_1aa8a4;
        }
    }
    ctx->pc = 0x1AA860u;
label_1aa860:
    // 0x1aa860: 0x92a70b98
    ctx->pc = 0x1aa860u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
    // 0x1aa864: 0x3c050025
    ctx->pc = 0x1aa864u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa868: 0x92a80bbc
    ctx->pc = 0x1aa868u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3004)));
    // 0x1aa86c: 0x3c060025
    ctx->pc = 0x1aa86cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa870: 0x27a40090
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa874: 0x24a5d070
    ctx->pc = 0x1aa874u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955120));
    // 0x1aa878: 0xc042a0c
    ctx->pc = 0x1AA878u;
    SET_GPR_U32(ctx, 31, 0x1AA880u);
    ctx->pc = 0x1AA87Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA880u; }
    }
    if (ctx->pc != 0x1AA880u) { return; }
    ctx->pc = 0x1AA880u;
    // 0x1aa880: 0x10000008
    ctx->pc = 0x1AA880u;
    {
        const bool branch_taken_0x1aa880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa880) {
            ctx->pc = 0x1AA8A4u;
            goto label_1aa8a4;
        }
    }
    ctx->pc = 0x1AA888u;
label_1aa888:
    // 0x1aa888: 0x3c050025
    ctx->pc = 0x1aa888u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa88c: 0x92a80bbc
    ctx->pc = 0x1aa88cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3004)));
    // 0x1aa890: 0x3c060025
    ctx->pc = 0x1aa890u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa894: 0x27a40090
    ctx->pc = 0x1aa894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aa898: 0x24a5d090
    ctx->pc = 0x1aa898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955152));
    // 0x1aa89c: 0xc042a0c
    ctx->pc = 0x1AA89Cu;
    SET_GPR_U32(ctx, 31, 0x1AA8A4u);
    ctx->pc = 0x1AA8A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8A4u; }
    }
    if (ctx->pc != 0x1AA8A4u) { return; }
    ctx->pc = 0x1AA8A4u;
label_1aa8a4:
    // 0x1aa8a4: 0x27a40090
    ctx->pc = 0x1aa8a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
label_1aa8a8:
    // 0x1aa8a8: 0xc06a920
    ctx->pc = 0x1AA8A8u;
    SET_GPR_U32(ctx, 31, 0x1AA8B0u);
    ctx->pc = 0x1AA8ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA480_0x1aa480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8B0u; }
    }
    if (ctx->pc != 0x1AA8B0u) { return; }
    ctx->pc = 0x1AA8B0u;
    // 0x1aa8b0: 0x1840007c
    ctx->pc = 0x1AA8B0u;
    {
        const bool branch_taken_0x1aa8b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AA8B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 400));
        if (branch_taken_0x1aa8b0) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AA8B8u;
    // 0x1aa8b8: 0x260282d
    ctx->pc = 0x1aa8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8bc: 0xc041eac
    ctx->pc = 0x1AA8BCu;
    SET_GPR_U32(ctx, 31, 0x1AA8C4u);
    ctx->pc = 0x1AA8C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8C4u; }
    }
    if (ctx->pc != 0x1AA8C4u) { return; }
    ctx->pc = 0x1AA8C4u;
    // 0x1aa8c4: 0x92a3054d
    ctx->pc = 0x1aa8c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1357)));
    // 0x1aa8c8: 0x24020001
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa8cc: 0x14620004
    ctx->pc = 0x1AA8CCu;
    {
        const bool branch_taken_0x1aa8cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AA8D0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x1aa8cc) {
            ctx->pc = 0x1AA8E0u;
            goto label_1aa8e0;
        }
    }
    ctx->pc = 0x1AA8D4u;
    // 0x1aa8d4: 0x1010c0
    ctx->pc = 0x1aa8d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1aa8d8: 0x10000002
    ctx->pc = 0x1AA8D8u;
    {
        const bool branch_taken_0x1aa8d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA8DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4352));
        if (branch_taken_0x1aa8d8) {
            ctx->pc = 0x1AA8E4u;
            goto label_1aa8e4;
        }
    }
    ctx->pc = 0x1AA8E0u;
label_1aa8e0:
    // 0x1aa8e0: 0x24501000
    ctx->pc = 0x1aa8e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4096));
label_1aa8e4:
    // 0x1aa8e4: 0xc073470
    ctx->pc = 0x1AA8E4u;
    SET_GPR_U32(ctx, 31, 0x1AA8ECu);
    ctx->pc = 0x1AA8E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8ECu; }
    }
    if (ctx->pc != 0x1AA8ECu) { return; }
    ctx->pc = 0x1AA8ECu;
    // 0x1aa8ec: 0x8fa30194
    ctx->pc = 0x1aa8ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1aa8f0: 0x1060006c
    ctx->pc = 0x1AA8F0u;
    {
        const bool branch_taken_0x1aa8f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA8F4u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 412)));
        if (branch_taken_0x1aa8f0) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AA8F8u;
    // 0x1aa8f8: 0x2638821
    ctx->pc = 0x1aa8f8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1aa8fc: 0x3c010032
    ctx->pc = 0x1aa8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa900: 0x8c23440c
    ctx->pc = 0x1aa900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aa904: 0x3c020018
    ctx->pc = 0x1aa904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x1aa908: 0xa02d
    ctx->pc = 0x1aa908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa90c: 0x1000000c
    ctx->pc = 0x1AA90Cu;
    {
        const bool branch_taken_0x1aa90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA910u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1aa90c) {
            ctx->pc = 0x1AA940u;
            goto label_1aa940;
        }
    }
    ctx->pc = 0x1AA914u;
label_1aa914:
    // 0x1aa914: 0x8e360000
    ctx->pc = 0x1aa914u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa918: 0x26240004
    ctx->pc = 0x1aa918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aa91c: 0xc06bd74
    ctx->pc = 0x1AA91Cu;
    SET_GPR_U32(ctx, 31, 0x1AA924u);
    ctx->pc = 0x1AA920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5D0_0x1af5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA924u; }
    }
    if (ctx->pc != 0x1AA924u) { return; }
    ctx->pc = 0x1AA924u;
    // 0x1aa924: 0x240202d
    ctx->pc = 0x1aa924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa928: 0xc0733f4
    ctx->pc = 0x1AA928u;
    SET_GPR_U32(ctx, 31, 0x1AA930u);
    ctx->pc = 0x1AA92Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFD0_0x1ccfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA930u; }
    }
    if (ctx->pc != 0x1AA930u) { return; }
    ctx->pc = 0x1AA930u;
    // 0x1aa930: 0x26220004
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aa934: 0x26100001
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa938: 0x568821
    ctx->pc = 0x1aa938u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1aa93c: 0x26940001
    ctx->pc = 0x1aa93cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1aa940:
    // 0x1aa940: 0x297102a
    ctx->pc = 0x1aa940u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 23)));
    // 0x1aa944: 0x1440fff3
    ctx->pc = 0x1AA944u;
    {
        const bool branch_taken_0x1aa944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aa944) {
            ctx->pc = 0x1AA914u;
            goto label_1aa914;
        }
    }
    ctx->pc = 0x1AA94Cu;
    // 0x1aa94c: 0xc06372c
    ctx->pc = 0x1AA94Cu;
    SET_GPR_U32(ctx, 31, 0x1AA954u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA954u; }
    }
    if (ctx->pc != 0x1AA954u) { return; }
    ctx->pc = 0x1AA954u;
    // 0x1aa954: 0x27b101a4
    ctx->pc = 0x1aa954u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 420));
    // 0x1aa958: 0x8e230000
    ctx->pc = 0x1aa958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa95c: 0x10600051
    ctx->pc = 0x1AA95Cu;
    {
        const bool branch_taken_0x1aa95c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA960u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 436));
        if (branch_taken_0x1aa95c) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AA964u;
    // 0x1aa964: 0x8e030000
    ctx->pc = 0x1aa964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa968: 0x1060004e
    ctx->pc = 0x1AA968u;
    {
        const bool branch_taken_0x1aa968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa968) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AA970u;
    // 0x1aa970: 0x92a50b98
    ctx->pc = 0x1aa970u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
    // 0x1aa974: 0x92a60bbc
    ctx->pc = 0x1aa974u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3004)));
    // 0x1aa978: 0xc074108
    ctx->pc = 0x1AA978u;
    SET_GPR_U32(ctx, 31, 0x1AA980u);
    ctx->pc = 0x1AA97Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D0420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0420_0x1d0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA980u; }
    }
    if (ctx->pc != 0x1AA980u) { return; }
    ctx->pc = 0x1AA980u;
    // 0x1aa980: 0x8e020000
    ctx->pc = 0x1aa980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa984: 0x3c04004b
    ctx->pc = 0x1aa984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)75 << 16));
    // 0x1aa988: 0x92aa0003
    ctx->pc = 0x1aa988u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1aa98c: 0x24091468
    ctx->pc = 0x1aa98cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 5224));
    // 0x1aa990: 0x8e230000
    ctx->pc = 0x1aa990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa994: 0x2484e330
    ctx->pc = 0x1aa994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959920));
    // 0x1aa998: 0x24050002
    ctx->pc = 0x1aa998u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa99c: 0x402d
    ctx->pc = 0x1aa99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9a0: 0x2623821
    ctx->pc = 0x1aa9a0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1aa9a4: 0x1491018
    ctx->pc = 0x1aa9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1aa9a8: 0x2633021
    ctx->pc = 0x1aa9a8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1aa9ac: 0xc073d58
    ctx->pc = 0x1AA9ACu;
    SET_GPR_U32(ctx, 31, 0x1AA9B4u);
    ctx->pc = 0x1AA9B0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9B4u; }
    }
    if (ctx->pc != 0x1AA9B4u) { return; }
    ctx->pc = 0x1AA9B4u;
    // 0x1aa9b4: 0xc06372c
    ctx->pc = 0x1AA9B4u;
    SET_GPR_U32(ctx, 31, 0x1AA9BCu);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9BCu; }
    }
    if (ctx->pc != 0x1AA9BCu) { return; }
    ctx->pc = 0x1AA9BCu;
    // 0x1aa9bc: 0x92a50b98
    ctx->pc = 0x1aa9bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
    // 0x1aa9c0: 0xc19a9d4
    ctx->pc = 0x1AA9C0u;
    SET_GPR_U32(ctx, 31, 0x1AA9C8u);
    ctx->pc = 0x1AA9C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x66A750u;
    {
        auto targetFn = runtime->lookupFunction(0x66A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9C8u; }
        if (ctx->pc != 0x1AA9C8u) { return; }
    }
    ctx->pc = 0x1AA9C8u;
    // 0x1aa9c8: 0x96a30bb4
    ctx->pc = 0x1aa9c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2996)));
    // 0x1aa9cc: 0x14600035
    ctx->pc = 0x1AA9CCu;
    {
        const bool branch_taken_0x1aa9cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA9D0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1aa9cc) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AA9D4u;
    // 0x1aa9d4: 0x8c234470
    ctx->pc = 0x1aa9d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17520)));
    // 0x1aa9d8: 0x3c010057
    ctx->pc = 0x1aa9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x1aa9dc: 0xac23aef8
    ctx->pc = 0x1aa9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946552), GPR_U32(ctx, 3));
    // 0x1aa9e0: 0x3c010057
    ctx->pc = 0x1aa9e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x1aa9e4: 0x8c23aef8
    ctx->pc = 0x1aa9e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x1aa9e8: 0x10600010
    ctx->pc = 0x1AA9E8u;
    {
        const bool branch_taken_0x1aa9e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa9e8) {
            ctx->pc = 0x1AAA2Cu;
            goto label_1aaa2c;
        }
    }
    ctx->pc = 0x1AA9F0u;
    // 0x1aa9f0: 0x8fa401d4
    ctx->pc = 0x1aa9f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1aa9f4: 0x1080000d
    ctx->pc = 0x1AA9F4u;
    {
        const bool branch_taken_0x1aa9f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa9f4) {
            ctx->pc = 0x1AAA2Cu;
            goto label_1aaa2c;
        }
    }
    ctx->pc = 0x1AA9FCu;
    // 0x1aa9fc: 0x92a20003
    ctx->pc = 0x1aa9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1aaa00: 0x24061324
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4900));
    // 0x1aaa04: 0x2642821
    ctx->pc = 0x1aaa04u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1aaa08: 0x461018
    ctx->pc = 0x1aaa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1aaa0c: 0x628021
    ctx->pc = 0x1aaa0cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aaa10: 0xc0636ec
    ctx->pc = 0x1AAA10u;
    SET_GPR_U32(ctx, 31, 0x1AAA18u);
    ctx->pc = 0x1AAA14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA18u; }
    }
    if (ctx->pc != 0x1AAA18u) { return; }
    ctx->pc = 0x1AAA18u;
    // 0x1aaa18: 0x8ea30034
    ctx->pc = 0x1aaa18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1aaa1c: 0x26040074
    ctx->pc = 0x1aaa1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 116));
    // 0x1aaa20: 0xac701460
    ctx->pc = 0x1aaa20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5216), GPR_U32(ctx, 16));
    // 0x1aaa24: 0x8ea30034
    ctx->pc = 0x1aaa24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1aaa28: 0xac641464
    ctx->pc = 0x1aaa28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5220), GPR_U32(ctx, 4));
label_1aaa2c:
    // 0x1aaa2c: 0x92a4054d
    ctx->pc = 0x1aaa2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1357)));
    // 0x1aaa30: 0x24030001
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaa34: 0x1483001b
    ctx->pc = 0x1AAA34u;
    {
        const bool branch_taken_0x1aaa34 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AAA38u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 484));
        if (branch_taken_0x1aaa34) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AAA3Cu;
    // 0x1aaa3c: 0x8e030000
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aaa40: 0x10600018
    ctx->pc = 0x1AAA40u;
    {
        const bool branch_taken_0x1aaa40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aaa40) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AAA48u;
    // 0x1aaa48: 0x92a50b98
    ctx->pc = 0x1aaa48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2968)));
    // 0x1aaa4c: 0xc07416c
    ctx->pc = 0x1AAA4Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA54u);
    ctx->pc = 0x1AAA50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D05B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D05B0_0x1d05b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA54u; }
    }
    if (ctx->pc != 0x1AAA54u) { return; }
    ctx->pc = 0x1AAA54u;
    // 0x1aaa54: 0x92a60003
    ctx->pc = 0x1aaa54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1aaa58: 0x3c04003f
    ctx->pc = 0x1aaa58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)63 << 16));
    // 0x1aaa5c: 0x2484a380
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943616));
    // 0x1aaa60: 0x24030001
    ctx->pc = 0x1aaa60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaa64: 0x62980
    ctx->pc = 0x1aaa64u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 6));
    // 0x1aaa68: 0xa62821
    ctx->pc = 0x1aaa68u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1aaa6c: 0x528c0
    ctx->pc = 0x1aaa6cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1aaa70: 0xa62821
    ctx->pc = 0x1aaa70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1aaa74: 0x52880
    ctx->pc = 0x1aaa74u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aaa78: 0x852821
    ctx->pc = 0x1aaa78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aaa7c: 0x80a40000
    ctx->pc = 0x1aaa7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aaa80: 0x14830008
    ctx->pc = 0x1AAA80u;
    {
        const bool branch_taken_0x1aaa80 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1aaa80) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AAA88u;
    // 0x1aaa88: 0x8e020000
    ctx->pc = 0x1aaa88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aaa8c: 0x24a40004
    ctx->pc = 0x1aaa8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aaa90: 0x24050002
    ctx->pc = 0x1aaa90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aaa94: 0x382d
    ctx->pc = 0x1aaa94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa98: 0x402d
    ctx->pc = 0x1aaa98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa9c: 0xc073d58
    ctx->pc = 0x1AAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1AAAA4u);
    ctx->pc = 0x1AAAA0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAA4u; }
    }
    if (ctx->pc != 0x1AAAA4u) { return; }
    ctx->pc = 0x1AAAA4u;
label_1aaaa4:
    // 0x1aaaa4: 0xdfbf0080
    ctx->pc = 0x1aaaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aaaa8: 0x7bb70070
    ctx->pc = 0x1aaaa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aaaac: 0x7bb60060
    ctx->pc = 0x1aaaacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aaab0: 0x7bb50050
    ctx->pc = 0x1aaab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aaab4: 0x7bb40040
    ctx->pc = 0x1aaab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aaab8: 0x7bb30030
    ctx->pc = 0x1aaab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaabc: 0x7bb20020
    ctx->pc = 0x1aaabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaac0: 0x7bb10010
    ctx->pc = 0x1aaac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaac4: 0x7bb00000
    ctx->pc = 0x1aaac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaac8: 0x3e00008
    ctx->pc = 0x1AAAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAACCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA584u: goto label_1aa584;
            case 0x1AA5B8u: goto label_1aa5b8;
            case 0x1AA638u: goto label_1aa638;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA70Cu: goto label_1aa70c;
            case 0x1AA78Cu: goto label_1aa78c;
            case 0x1AA7B4u: goto label_1aa7b4;
            case 0x1AA7D8u: goto label_1aa7d8;
            case 0x1AA804u: goto label_1aa804;
            case 0x1AA820u: goto label_1aa820;
            case 0x1AA83Cu: goto label_1aa83c;
            case 0x1AA860u: goto label_1aa860;
            case 0x1AA888u: goto label_1aa888;
            case 0x1AA8A4u: goto label_1aa8a4;
            case 0x1AA8A8u: goto label_1aa8a8;
            case 0x1AA8E0u: goto label_1aa8e0;
            case 0x1AA8E4u: goto label_1aa8e4;
            case 0x1AA914u: goto label_1aa914;
            case 0x1AA940u: goto label_1aa940;
            case 0x1AAA2Cu: goto label_1aaa2c;
            case 0x1AAAA4u: goto label_1aaaa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AAAD0u;
}
