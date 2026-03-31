#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BAC20
// Address: 0x1bac20 - 0x1badf0
void sub_001BAC20_0x1bac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bac20u;

    // 0x1bac20: 0x27bdfff0
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac24: 0x3c010032
    ctx->pc = 0x1bac24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac28: 0xffbf0000
    ctx->pc = 0x1bac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bac2c: 0x24020001
    ctx->pc = 0x1bac2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bac30: 0xa0204475
    ctx->pc = 0x1bac30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17525), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac34: 0x3c010032
    ctx->pc = 0x1bac34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac38: 0xa02043c7
    ctx->pc = 0x1bac38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17351), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac3c: 0x3c010032
    ctx->pc = 0x1bac3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac40: 0xa02243cf
    ctx->pc = 0x1bac40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17359), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac44: 0x3c010032
    ctx->pc = 0x1bac44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac48: 0xa02243cc
    ctx->pc = 0x1bac48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17356), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac4c: 0x3c010032
    ctx->pc = 0x1bac4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac50: 0xa02243c3
    ctx->pc = 0x1bac50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17347), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac54: 0x3c010032
    ctx->pc = 0x1bac54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac58: 0xa02243c4
    ctx->pc = 0x1bac58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17348), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac5c: 0x3c010032
    ctx->pc = 0x1bac5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac60: 0xa02043c8
    ctx->pc = 0x1bac60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17352), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac64: 0x3c010032
    ctx->pc = 0x1bac64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac68: 0xa02243c2
    ctx->pc = 0x1bac68u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17346), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac6c: 0x3c010032
    ctx->pc = 0x1bac6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac70: 0xa02043c1
    ctx->pc = 0x1bac70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17345), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac74: 0x3c010032
    ctx->pc = 0x1bac74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac78: 0xa02243c6
    ctx->pc = 0x1bac78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17350), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac7c: 0x3c010032
    ctx->pc = 0x1bac7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac80: 0xa02243fd
    ctx->pc = 0x1bac80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17405), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac84: 0x3c010032
    ctx->pc = 0x1bac84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac88: 0xa02243cb
    ctx->pc = 0x1bac88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17355), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bac8c: 0x3c010032
    ctx->pc = 0x1bac8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac90: 0x802741a0
    ctx->pc = 0x1bac90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16800)));
    // 0x1bac94: 0x3c010032
    ctx->pc = 0x1bac94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bac98: 0x802641a1
    ctx->pc = 0x1bac98u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16801)));
    // 0x1bac9c: 0x3c010032
    ctx->pc = 0x1bac9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1baca0: 0x802541a2
    ctx->pc = 0x1baca0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16802)));
    // 0x1baca4: 0x3c010032
    ctx->pc = 0x1baca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1baca8: 0x802441a3
    ctx->pc = 0x1baca8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16803)));
    // 0x1bacac: 0x3c010032
    ctx->pc = 0x1bacacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacb0: 0x802341a4
    ctx->pc = 0x1bacb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16804)));
    // 0x1bacb4: 0x3c010032
    ctx->pc = 0x1bacb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacb8: 0x802241a6
    ctx->pc = 0x1bacb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16806)));
    // 0x1bacbc: 0x3c010032
    ctx->pc = 0x1bacbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacc0: 0xa02743c5
    ctx->pc = 0x1bacc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17349), (uint8_t)GPR_U32(ctx, 7));
    // 0x1bacc4: 0x3c010032
    ctx->pc = 0x1bacc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacc8: 0xa02643c9
    ctx->pc = 0x1bacc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17353), (uint8_t)GPR_U32(ctx, 6));
    // 0x1baccc: 0x3c010032
    ctx->pc = 0x1bacccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacd0: 0xa02543ca
    ctx->pc = 0x1bacd0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17354), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bacd4: 0x3c010032
    ctx->pc = 0x1bacd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacd8: 0xa02443ec
    ctx->pc = 0x1bacd8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17388), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bacdc: 0x3c010032
    ctx->pc = 0x1bacdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bace0: 0xa02343ef
    ctx->pc = 0x1bace0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17391), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bace4: 0x3c010032
    ctx->pc = 0x1bace4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bace8: 0xa02243ed
    ctx->pc = 0x1bace8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17389), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bacec: 0x3c010032
    ctx->pc = 0x1bacecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacf0: 0x802341a7
    ctx->pc = 0x1bacf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16807)));
    // 0x1bacf4: 0x3c010032
    ctx->pc = 0x1bacf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bacf8: 0x802241a5
    ctx->pc = 0x1bacf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16805)));
    // 0x1bacfc: 0x3c010032
    ctx->pc = 0x1bacfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad00: 0xa02343ee
    ctx->pc = 0x1bad00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17390), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bad04: 0x3c010032
    ctx->pc = 0x1bad04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad08: 0xc06bb90
    ctx->pc = 0x1BAD08u;
    SET_GPR_U32(ctx, 31, 0x1BAD10u);
    ctx->pc = 0x1BAD0Cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17392), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AEE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEE40_0x1aee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD10u; }
    }
    if (ctx->pc != 0x1BAD10u) { return; }
    ctx->pc = 0x1BAD10u;
    // 0x1bad10: 0x3c010032
    ctx->pc = 0x1bad10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad14: 0x3402ffff
    ctx->pc = 0x1bad14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1bad18: 0xa02043f2
    ctx->pc = 0x1bad18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17394), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad1c: 0x2404001b
    ctx->pc = 0x1bad1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 27));
    // 0x1bad20: 0x3c010032
    ctx->pc = 0x1bad20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad24: 0xa42243da
    ctx->pc = 0x1bad24u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17370), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bad28: 0x3c010032
    ctx->pc = 0x1bad28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad2c: 0xa02043d8
    ctx->pc = 0x1bad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17368), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad30: 0x3c010032
    ctx->pc = 0x1bad30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad34: 0xa02043d9
    ctx->pc = 0x1bad34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17369), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad38: 0x3c010032
    ctx->pc = 0x1bad38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad3c: 0xa42043dc
    ctx->pc = 0x1bad3cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17372), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bad40: 0x3c010032
    ctx->pc = 0x1bad40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad44: 0xa42043de
    ctx->pc = 0x1bad44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17374), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bad48: 0x3c010032
    ctx->pc = 0x1bad48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad4c: 0xa42043e0
    ctx->pc = 0x1bad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17376), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bad50: 0x3c010032
    ctx->pc = 0x1bad50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad54: 0xa42043e2
    ctx->pc = 0x1bad54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17378), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bad58: 0x3c010032
    ctx->pc = 0x1bad58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad5c: 0xa42043e4
    ctx->pc = 0x1bad5cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17380), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bad60: 0x3c010032
    ctx->pc = 0x1bad60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad64: 0xa42043e6
    ctx->pc = 0x1bad64u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17382), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bad68: 0x3c010032
    ctx->pc = 0x1bad68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad6c: 0xa02043e8
    ctx->pc = 0x1bad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17384), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad70: 0x3c010032
    ctx->pc = 0x1bad70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad74: 0xa02043e9
    ctx->pc = 0x1bad74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17385), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad78: 0x3c010032
    ctx->pc = 0x1bad78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad7c: 0xa02043ea
    ctx->pc = 0x1bad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17386), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad80: 0x3c010032
    ctx->pc = 0x1bad80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad84: 0xa02043fa
    ctx->pc = 0x1bad84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17402), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad88: 0x3c010032
    ctx->pc = 0x1bad88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bad8c: 0xc06e0ac
    ctx->pc = 0x1BAD8Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD94u);
    ctx->pc = 0x1BAD90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17403), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B82B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82B0_0x1b82b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD94u; }
    }
    if (ctx->pc != 0x1BAD94u) { return; }
    ctx->pc = 0x1BAD94u;
    // 0x1bad94: 0xc06e0ac
    ctx->pc = 0x1BAD94u;
    SET_GPR_U32(ctx, 31, 0x1BAD9Cu);
    ctx->pc = 0x1BAD98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x1B82B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82B0_0x1b82b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD9Cu; }
    }
    if (ctx->pc != 0x1BAD9Cu) { return; }
    ctx->pc = 0x1BAD9Cu;
    // 0x1bad9c: 0xc06e0ac
    ctx->pc = 0x1BAD9Cu;
    SET_GPR_U32(ctx, 31, 0x1BADA4u);
    ctx->pc = 0x1BADA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 81));
    ctx->pc = 0x1B82B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82B0_0x1b82b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADA4u; }
    }
    if (ctx->pc != 0x1BADA4u) { return; }
    ctx->pc = 0x1BADA4u;
    // 0x1bada4: 0xc06e0ac
    ctx->pc = 0x1BADA4u;
    SET_GPR_U32(ctx, 31, 0x1BADACu);
    ctx->pc = 0x1BADA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    ctx->pc = 0x1B82B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82B0_0x1b82b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADACu; }
    }
    if (ctx->pc != 0x1BADACu) { return; }
    ctx->pc = 0x1BADACu;
    // 0x1badac: 0x3c010032
    ctx->pc = 0x1badacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1badb0: 0x802443ed
    ctx->pc = 0x1badb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17389)));
    // 0x1badb4: 0x3c010032
    ctx->pc = 0x1badb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1badb8: 0xc06bde4
    ctx->pc = 0x1BADB8u;
    SET_GPR_U32(ctx, 31, 0x1BADC0u);
    ctx->pc = 0x1BADBCu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17390)));
    ctx->pc = 0x1AF790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF790_0x1af790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADC0u; }
    }
    if (ctx->pc != 0x1BADC0u) { return; }
    ctx->pc = 0x1BADC0u;
    // 0x1badc0: 0x3c010032
    ctx->pc = 0x1badc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1badc4: 0xc06e1b0
    ctx->pc = 0x1BADC4u;
    SET_GPR_U32(ctx, 31, 0x1BADCCu);
    ctx->pc = 0x1BADC8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17349)));
    ctx->pc = 0x1B86C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B86C0_0x1b86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADCCu; }
    }
    if (ctx->pc != 0x1BADCCu) { return; }
    ctx->pc = 0x1BADCCu;
    // 0x1badcc: 0x3c010032
    ctx->pc = 0x1badccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1badd0: 0xc06e1bc
    ctx->pc = 0x1BADD0u;
    SET_GPR_U32(ctx, 31, 0x1BADD8u);
    ctx->pc = 0x1BADD4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17354)));
    ctx->pc = 0x1B86F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B86F0_0x1b86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADD8u; }
    }
    if (ctx->pc != 0x1BADD8u) { return; }
    ctx->pc = 0x1BADD8u;
    // 0x1badd8: 0x3c010032
    ctx->pc = 0x1badd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1baddc: 0xc06e1e0
    ctx->pc = 0x1BADDCu;
    SET_GPR_U32(ctx, 31, 0x1BADE4u);
    ctx->pc = 0x1BADE0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17353)));
    ctx->pc = 0x1B8780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8780_0x1b8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADE4u; }
    }
    if (ctx->pc != 0x1BADE4u) { return; }
    ctx->pc = 0x1BADE4u;
    // 0x1bade4: 0xdfbf0000
    ctx->pc = 0x1bade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bade8: 0x3e00008
    ctx->pc = 0x1BADE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BADECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BADF0u;
}
