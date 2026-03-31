#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ADC00
// Address: 0x1adc00 - 0x1adf50
void sub_001ADC00_0x1adc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1adc00u;

    // 0x1adc00: 0x27bdffa0
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1adc04: 0x3c01002c
    ctx->pc = 0x1adc04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1adc08: 0xffbf0050
    ctx->pc = 0x1adc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1adc0c: 0x7fb40040
    ctx->pc = 0x1adc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1adc10: 0x7fb30030
    ctx->pc = 0x1adc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1adc14: 0x7fb20020
    ctx->pc = 0x1adc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1adc18: 0x7fb10010
    ctx->pc = 0x1adc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adc1c: 0x7fb00000
    ctx->pc = 0x1adc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adc20: 0x8c228d50
    ctx->pc = 0x1adc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x1adc24: 0x10400005
    ctx->pc = 0x1ADC24u;
    {
        const bool branch_taken_0x1adc24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1adc24) {
            ctx->pc = 0x1ADC3Cu;
            goto label_1adc3c;
        }
    }
    ctx->pc = 0x1ADC2Cu;
    // 0x1adc2c: 0xc06b878
    ctx->pc = 0x1ADC2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC34u);
    ctx->pc = 0x1AE1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE1E0_0x1ae1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC34u; }
    }
    if (ctx->pc != 0x1ADC34u) { return; }
    ctx->pc = 0x1ADC34u;
    // 0x1adc34: 0x100000aa
    ctx->pc = 0x1ADC34u;
    {
        const bool branch_taken_0x1adc34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1adc34) {
            ctx->pc = 0x1ADEE0u;
            goto label_1adee0;
        }
    }
    ctx->pc = 0x1ADC3Cu;
label_1adc3c:
    // 0x1adc3c: 0x3c03002c
    ctx->pc = 0x1adc3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1adc40: 0x24638d58
    ctx->pc = 0x1adc40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937944));
label_1adc44:
    // 0x1adc44: 0x41080
    ctx->pc = 0x1adc44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1adc48: 0x621021
    ctx->pc = 0x1adc48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1adc4c: 0x2484ffff
    ctx->pc = 0x1adc4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1adc50: 0xac400000
    ctx->pc = 0x1adc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1adc54: 0x0
    ctx->pc = 0x1adc54u;
    // NOP
    // 0x1adc58: 0x481fffa
    ctx->pc = 0x1ADC58u;
    {
        const bool branch_taken_0x1adc58 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1adc58) {
            ctx->pc = 0x1ADC44u;
            goto label_1adc44;
        }
    }
    ctx->pc = 0x1ADC60u;
    // 0x1adc60: 0x3c04002c
    ctx->pc = 0x1adc60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1adc64: 0x282d
    ctx->pc = 0x1adc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc68: 0x24848d70
    ctx->pc = 0x1adc68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937968));
    // 0x1adc6c: 0xc041f1a
    ctx->pc = 0x1ADC6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC74u);
    ctx->pc = 0x1ADC70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 72));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC74u; }
    }
    if (ctx->pc != 0x1ADC74u) { return; }
    ctx->pc = 0x1ADC74u;
    // 0x1adc74: 0x3c04002c
    ctx->pc = 0x1adc74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1adc78: 0xc06bde8
    ctx->pc = 0x1ADC78u;
    SET_GPR_U32(ctx, 31, 0x1ADC80u);
    ctx->pc = 0x1ADC7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937960));
    ctx->pc = 0x1AF7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF7A0_0x1af7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC80u; }
    }
    if (ctx->pc != 0x1ADC80u) { return; }
    ctx->pc = 0x1ADC80u;
    // 0x1adc80: 0x902d
    ctx->pc = 0x1adc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc84: 0x121840
    ctx->pc = 0x1adc84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 1));
label_1adc88:
    // 0x1adc88: 0x3c02002c
    ctx->pc = 0x1adc88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adc8c: 0x721821
    ctx->pc = 0x1adc8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1adc90: 0x24428d70
    ctx->pc = 0x1adc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x1adc94: 0x318c0
    ctx->pc = 0x1adc94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1adc98: 0x432821
    ctx->pc = 0x1adc98u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adc9c: 0x16400014
    ctx->pc = 0x1ADC9Cu;
    {
        const bool branch_taken_0x1adc9c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ADCA0u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1adc9c) {
            ctx->pc = 0x1ADCF0u;
            goto label_1adcf0;
        }
    }
    ctx->pc = 0x1ADCA4u;
    // 0x1adca4: 0x3c010032
    ctx->pc = 0x1adca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1adca8: 0x3c0242c8
    ctx->pc = 0x1adca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1adcac: 0x902443c9
    ctx->pc = 0x1adcacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17353)));
    // 0x1adcb0: 0x44820000
    ctx->pc = 0x1adcb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1adcb4: 0x24030064
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1adcb8: 0x411c0
    ctx->pc = 0x1adcb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1adcbc: 0x442023
    ctx->pc = 0x1adcbcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1adcc0: 0x83001a
    ctx->pc = 0x1adcc0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1adcc4: 0x44840800
    ctx->pc = 0x1adcc4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1adcc8: 0x0
    ctx->pc = 0x1adcc8u;
    // NOP
    // 0x1adccc: 0x46800860
    ctx->pc = 0x1adcccu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1adcd0: 0x46000803
    ctx->pc = 0x1adcd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1adcd4: 0x1012
    ctx->pc = 0x1adcd4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1adcd8: 0xaca20008
    ctx->pc = 0x1adcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1adcdc: 0xaca20004
    ctx->pc = 0x1adcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1adce0: 0x0
    ctx->pc = 0x1adce0u;
    // NOP
    // 0x1adce4: 0x0
    ctx->pc = 0x1adce4u;
    // NOP
    // 0x1adce8: 0x10000011
    ctx->pc = 0x1ADCE8u;
    {
        const bool branch_taken_0x1adce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADCECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        if (branch_taken_0x1adce8) {
            ctx->pc = 0x1ADD30u;
            goto label_1add30;
        }
    }
    ctx->pc = 0x1ADCF0u;
label_1adcf0:
    // 0x1adcf0: 0x3c010032
    ctx->pc = 0x1adcf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1adcf4: 0x3c0242c8
    ctx->pc = 0x1adcf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1adcf8: 0x902443ca
    ctx->pc = 0x1adcf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17354)));
    // 0x1adcfc: 0x44820000
    ctx->pc = 0x1adcfcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1add00: 0x24030064
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1add04: 0x411c0
    ctx->pc = 0x1add04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1add08: 0x442023
    ctx->pc = 0x1add08u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1add0c: 0x83001a
    ctx->pc = 0x1add0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1add10: 0x44840800
    ctx->pc = 0x1add10u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1add14: 0x0
    ctx->pc = 0x1add14u;
    // NOP
    // 0x1add18: 0x46800860
    ctx->pc = 0x1add18u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1add1c: 0x46000803
    ctx->pc = 0x1add1cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1add20: 0x1012
    ctx->pc = 0x1add20u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1add24: 0xaca20008
    ctx->pc = 0x1add24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1add28: 0xaca20004
    ctx->pc = 0x1add28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1add2c: 0xe4a00010
    ctx->pc = 0x1add2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1add30:
    // 0x1add30: 0x3c020023
    ctx->pc = 0x1add30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1add34: 0xaca0000c
    ctx->pc = 0x1add34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1add38: 0x24424260
    ctx->pc = 0x1add38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16992));
    // 0x1add3c: 0x24030002
    ctx->pc = 0x1add3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1add40: 0x521021
    ctx->pc = 0x1add40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1add44: 0x80420000
    ctx->pc = 0x1add44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1add48: 0xa0a20001
    ctx->pc = 0x1add48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1add4c: 0x80a20001
    ctx->pc = 0x1add4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1add50: 0x14430020
    ctx->pc = 0x1ADD50u;
    {
        const bool branch_taken_0x1add50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1ADD54u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1add50) {
            ctx->pc = 0x1ADDD4u;
            goto label_1addd4;
        }
    }
    ctx->pc = 0x1ADD58u;
    // 0x1add58: 0x22140
    ctx->pc = 0x1add58u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1add5c: 0x2403002c
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x1add60: 0x822023
    ctx->pc = 0x1add60u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1add64: 0x42080
    ctx->pc = 0x1add64u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1add68: 0x822821
    ctx->pc = 0x1add68u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1add6c: 0x52100
    ctx->pc = 0x1add6cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1add70: 0x852823
    ctx->pc = 0x1add70u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1add74: 0x52080
    ctx->pc = 0x1add74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1add78: 0xa42021
    ctx->pc = 0x1add78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1add7c: 0x421c0
    ctx->pc = 0x1add7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1add80: 0x83001a
    ctx->pc = 0x1add80u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1add84: 0x0
    ctx->pc = 0x1add84u;
    // NOP
    // 0x1add88: 0x0
    ctx->pc = 0x1add88u;
    // NOP
    // 0x1add8c: 0x2012
    ctx->pc = 0x1add8cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1add90: 0x41880
    ctx->pc = 0x1add90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1add94: 0x641821
    ctx->pc = 0x1add94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1add98: 0x24640800
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1add9c: 0x4810003
    ctx->pc = 0x1ADD9Cu;
    {
        const bool branch_taken_0x1add9c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1ADDA0u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 11));
        if (branch_taken_0x1add9c) {
            ctx->pc = 0x1ADDACu;
            goto label_1addac;
        }
    }
    ctx->pc = 0x1ADDA4u;
    // 0x1adda4: 0x248307ff
    ctx->pc = 0x1adda4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x1adda8: 0x31ac3
    ctx->pc = 0x1adda8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1addac:
    // 0x1addac: 0x322c0
    ctx->pc = 0x1addacu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 11));
    // 0x1addb0: 0x219c0
    ctx->pc = 0x1addb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 7));
    // 0x1addb4: 0x24840024
    ctx->pc = 0x1addb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 36));
    // 0x1addb8: 0x621821
    ctx->pc = 0x1addb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1addbc: 0x31840
    ctx->pc = 0x1addbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1addc0: 0x621021
    ctx->pc = 0x1addc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1addc4: 0x21180
    ctx->pc = 0x1addc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1addc8: 0x441021
    ctx->pc = 0x1addc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1addcc: 0x1000001e
    ctx->pc = 0x1ADDCCu;
    {
        const bool branch_taken_0x1addcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADDD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 64));
        if (branch_taken_0x1addcc) {
            ctx->pc = 0x1ADE48u;
            goto label_1ade48;
        }
    }
    ctx->pc = 0x1ADDD4u;
label_1addd4:
    // 0x1addd4: 0x22140
    ctx->pc = 0x1addd4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1addd8: 0x2403002c
    ctx->pc = 0x1addd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x1adddc: 0x822023
    ctx->pc = 0x1adddcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1adde0: 0x42080
    ctx->pc = 0x1adde0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1adde4: 0x822821
    ctx->pc = 0x1adde4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1adde8: 0x52100
    ctx->pc = 0x1adde8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1addec: 0x852823
    ctx->pc = 0x1addecu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1addf0: 0x52080
    ctx->pc = 0x1addf0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1addf4: 0xa42021
    ctx->pc = 0x1addf4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1addf8: 0x42180
    ctx->pc = 0x1addf8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
    // 0x1addfc: 0x83001a
    ctx->pc = 0x1addfcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1ade00: 0x0
    ctx->pc = 0x1ade00u;
    // NOP
    // 0x1ade04: 0x0
    ctx->pc = 0x1ade04u;
    // NOP
    // 0x1ade08: 0x1812
    ctx->pc = 0x1ade08u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1ade0c: 0x31880
    ctx->pc = 0x1ade0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ade10: 0x24640800
    ctx->pc = 0x1ade10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1ade14: 0x4810003
    ctx->pc = 0x1ADE14u;
    {
        const bool branch_taken_0x1ade14 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1ADE18u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 11));
        if (branch_taken_0x1ade14) {
            ctx->pc = 0x1ADE24u;
            goto label_1ade24;
        }
    }
    ctx->pc = 0x1ADE1Cu;
    // 0x1ade1c: 0x248307ff
    ctx->pc = 0x1ade1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x1ade20: 0x31ac3
    ctx->pc = 0x1ade20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1ade24:
    // 0x1ade24: 0x322c0
    ctx->pc = 0x1ade24u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 11));
    // 0x1ade28: 0x219c0
    ctx->pc = 0x1ade28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 7));
    // 0x1ade2c: 0x24840024
    ctx->pc = 0x1ade2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 36));
    // 0x1ade30: 0x621821
    ctx->pc = 0x1ade30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ade34: 0x31840
    ctx->pc = 0x1ade34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ade38: 0x621021
    ctx->pc = 0x1ade38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ade3c: 0x21180
    ctx->pc = 0x1ade3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ade40: 0x441021
    ctx->pc = 0x1ade40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ade44: 0x24510040
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 64));
label_1ade48:
    // 0x1ade48: 0x3c02002c
    ctx->pc = 0x1ade48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ade4c: 0x129880
    ctx->pc = 0x1ade4cu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ade50: 0x24428db8
    ctx->pc = 0x1ade50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938040));
    // 0x1ade54: 0x220202d
    ctx->pc = 0x1ade54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade58: 0xc06bdc4
    ctx->pc = 0x1ADE58u;
    SET_GPR_U32(ctx, 31, 0x1ADE60u);
    ctx->pc = 0x1ADE5Cu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1AF710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF710_0x1af710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE60u; }
    }
    if (ctx->pc != 0x1ADE60u) { return; }
    ctx->pc = 0x1ADE60u;
    // 0x1ade60: 0xae820000
    ctx->pc = 0x1ade60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1ade64: 0x3c02002c
    ctx->pc = 0x1ade64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ade68: 0x24428dc8
    ctx->pc = 0x1ade68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1ade6c: 0x539821
    ctx->pc = 0x1ade6cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1ade70:
    // 0x1ade70: 0x82040000
    ctx->pc = 0x1ade70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ade74: 0x8e850000
    ctx->pc = 0x1ade74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ade78: 0xc04c578
    ctx->pc = 0x1ADE78u;
    SET_GPR_U32(ctx, 31, 0x1ADE80u);
    ctx->pc = 0x1ADE7Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1315E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001315E0_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE80u; }
    }
    if (ctx->pc != 0x1ADE80u) { return; }
    ctx->pc = 0x1ADE80u;
    // 0x1ade80: 0xae620000
    ctx->pc = 0x1ade80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1ade84: 0x1040fffa
    ctx->pc = 0x1ADE84u;
    {
        const bool branch_taken_0x1ade84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ade84) {
            ctx->pc = 0x1ADE70u;
            goto label_1ade70;
        }
    }
    ctx->pc = 0x1ADE8Cu;
    // 0x1ade8c: 0x82030000
    ctx->pc = 0x1ade8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ade90: 0x24020002
    ctx->pc = 0x1ade90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ade94: 0x14620004
    ctx->pc = 0x1ADE94u;
    {
        const bool branch_taken_0x1ade94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1ade94) {
            ctx->pc = 0x1ADEA8u;
            goto label_1adea8;
        }
    }
    ctx->pc = 0x1ADE9Cu;
    // 0x1ade9c: 0x8e640000
    ctx->pc = 0x1ade9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1adea0: 0xc04ca5e
    ctx->pc = 0x1ADEA0u;
    SET_GPR_U32(ctx, 31, 0x1ADEA8u);
    ctx->pc = 0x1ADEA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x132978u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132978_0x132978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEA8u; }
    }
    if (ctx->pc != 0x1ADEA8u) { return; }
    ctx->pc = 0x1ADEA8u;
label_1adea8:
    // 0x1adea8: 0x8e640000
    ctx->pc = 0x1adea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1adeac: 0xc04caf2
    ctx->pc = 0x1ADEACu;
    SET_GPR_U32(ctx, 31, 0x1ADEB4u);
    ctx->pc = 0x1ADEB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x132BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BC8_0x132bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEB4u; }
    }
    if (ctx->pc != 0x1ADEB4u) { return; }
    ctx->pc = 0x1ADEB4u;
    // 0x1adeb4: 0x8e640000
    ctx->pc = 0x1adeb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1adeb8: 0xc04ca2e
    ctx->pc = 0x1ADEB8u;
    SET_GPR_U32(ctx, 31, 0x1ADEC0u);
    ctx->pc = 0x1ADEBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x1328B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001328B8_0x1328b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEC0u; }
    }
    if (ctx->pc != 0x1ADEC0u) { return; }
    ctx->pc = 0x1ADEC0u;
    // 0x1adec0: 0x26520001
    ctx->pc = 0x1adec0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1adec4: 0x2a420003
    ctx->pc = 0x1adec4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 3));
    // 0x1adec8: 0x1440ff6f
    ctx->pc = 0x1ADEC8u;
    {
        const bool branch_taken_0x1adec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ADECCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1adec8) {
            ctx->pc = 0x1ADC88u;
            goto label_1adc88;
        }
    }
    ctx->pc = 0x1ADED0u;
    // 0x1aded0: 0x24030001
    ctx->pc = 0x1aded0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aded4: 0x3c01002c
    ctx->pc = 0x1aded4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1aded8: 0x102d
    ctx->pc = 0x1aded8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adedc: 0xac238d50
    ctx->pc = 0x1adedcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937936), GPR_U32(ctx, 3));
label_1adee0:
    // 0x1adee0: 0xdfbf0050
    ctx->pc = 0x1adee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adee4: 0x7bb40040
    ctx->pc = 0x1adee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adee8: 0x7bb30030
    ctx->pc = 0x1adee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adeec: 0x7bb20020
    ctx->pc = 0x1adeecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adef0: 0x7bb10010
    ctx->pc = 0x1adef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adef4: 0x7bb00000
    ctx->pc = 0x1adef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adef8: 0x3e00008
    ctx->pc = 0x1ADEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADC3Cu: goto label_1adc3c;
            case 0x1ADC44u: goto label_1adc44;
            case 0x1ADC88u: goto label_1adc88;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADD30u: goto label_1add30;
            case 0x1ADDACu: goto label_1addac;
            case 0x1ADDD4u: goto label_1addd4;
            case 0x1ADE24u: goto label_1ade24;
            case 0x1ADE48u: goto label_1ade48;
            case 0x1ADE70u: goto label_1ade70;
            case 0x1ADEA8u: goto label_1adea8;
            case 0x1ADEE0u: goto label_1adee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADF00u;
    // 0x1adf00: 0x41040
    ctx->pc = 0x1adf00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1adf04: 0x3c06002c
    ctx->pc = 0x1adf04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1adf08: 0x441021
    ctx->pc = 0x1adf08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1adf0c: 0x41880
    ctx->pc = 0x1adf0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1adf10: 0x220c0
    ctx->pc = 0x1adf10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1adf14: 0x27bdfff0
    ctx->pc = 0x1adf14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1adf18: 0x24c68d70
    ctx->pc = 0x1adf18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937968));
    // 0x1adf1c: 0x3c02002c
    ctx->pc = 0x1adf1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1adf20: 0x24428dc8
    ctx->pc = 0x1adf20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1adf24: 0xffbf0000
    ctx->pc = 0x1adf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adf28: 0x24050001
    ctx->pc = 0x1adf28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adf2c: 0xc42021
    ctx->pc = 0x1adf2cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1adf30: 0x431021
    ctx->pc = 0x1adf30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adf34: 0xa0850000
    ctx->pc = 0x1adf34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1adf38: 0xc04cb94
    ctx->pc = 0x1ADF38u;
    SET_GPR_U32(ctx, 31, 0x1ADF40u);
    ctx->pc = 0x1ADF3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x132E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E50_0x132e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF40u; }
    }
    if (ctx->pc != 0x1ADF40u) { return; }
    ctx->pc = 0x1ADF40u;
    // 0x1adf40: 0xdfbf0000
    ctx->pc = 0x1adf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adf44: 0x102d
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf48: 0x3e00008
    ctx->pc = 0x1ADF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADC3Cu: goto label_1adc3c;
            case 0x1ADC44u: goto label_1adc44;
            case 0x1ADC88u: goto label_1adc88;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADD30u: goto label_1add30;
            case 0x1ADDACu: goto label_1addac;
            case 0x1ADDD4u: goto label_1addd4;
            case 0x1ADE24u: goto label_1ade24;
            case 0x1ADE48u: goto label_1ade48;
            case 0x1ADE70u: goto label_1ade70;
            case 0x1ADEA8u: goto label_1adea8;
            case 0x1ADEE0u: goto label_1adee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADF50u;
}
