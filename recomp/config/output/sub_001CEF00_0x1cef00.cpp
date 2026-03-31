#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CEF00
// Address: 0x1cef00 - 0x1cf090
void sub_001CEF00_0x1cef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cef00u;

    // 0x1cef00: 0x27bdffd0
    ctx->pc = 0x1cef00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cef04: 0xffbf0020
    ctx->pc = 0x1cef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cef08: 0x7fb10010
    ctx->pc = 0x1cef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cef0c: 0x7fb00000
    ctx->pc = 0x1cef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cef10: 0x80882d
    ctx->pc = 0x1cef10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef14: 0x14c00014
    ctx->pc = 0x1CEF14u;
    {
        const bool branch_taken_0x1cef14 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEF18u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cef14) {
            ctx->pc = 0x1CEF68u;
            goto label_1cef68;
        }
    }
    ctx->pc = 0x1CEF1Cu;
    // 0x1cef1c: 0x8e040000
    ctx->pc = 0x1cef1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cef20: 0x8e250000
    ctx->pc = 0x1cef20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cef24: 0xc041eac
    ctx->pc = 0x1CEF24u;
    SET_GPR_U32(ctx, 31, 0x1CEF2Cu);
    ctx->pc = 0x1CEF28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF2Cu; }
    }
    if (ctx->pc != 0x1CEF2Cu) { return; }
    ctx->pc = 0x1CEF2Cu;
    // 0x1cef2c: 0x9222081c
    ctx->pc = 0x1cef2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1cef30: 0x14400006
    ctx->pc = 0x1CEF30u;
    {
        const bool branch_taken_0x1cef30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEF34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x1cef30) {
            ctx->pc = 0x1CEF4Cu;
            goto label_1cef4c;
        }
    }
    ctx->pc = 0x1CEF38u;
    // 0x1cef38: 0x8e040004
    ctx->pc = 0x1cef38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cef3c: 0x8e250004
    ctx->pc = 0x1cef3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cef40: 0xc041eac
    ctx->pc = 0x1CEF40u;
    SET_GPR_U32(ctx, 31, 0x1CEF48u);
    ctx->pc = 0x1CEF44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF48u; }
    }
    if (ctx->pc != 0x1CEF48u) { return; }
    ctx->pc = 0x1CEF48u;
    // 0x1cef48: 0x26040008
    ctx->pc = 0x1cef48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
label_1cef4c:
    // 0x1cef4c: 0x26250008
    ctx->pc = 0x1cef4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8));
    // 0x1cef50: 0xc041eac
    ctx->pc = 0x1CEF50u;
    SET_GPR_U32(ctx, 31, 0x1CEF58u);
    ctx->pc = 0x1CEF54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF58u; }
    }
    if (ctx->pc != 0x1CEF58u) { return; }
    ctx->pc = 0x1CEF58u;
    // 0x1cef58: 0x8e040818
    ctx->pc = 0x1cef58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x1cef5c: 0x8e250818
    ctx->pc = 0x1cef5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 2072)));
    // 0x1cef60: 0xc041eac
    ctx->pc = 0x1CEF60u;
    SET_GPR_U32(ctx, 31, 0x1CEF68u);
    ctx->pc = 0x1CEF64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2112));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF68u; }
    }
    if (ctx->pc != 0x1CEF68u) { return; }
    ctx->pc = 0x1CEF68u;
label_1cef68:
    // 0x1cef68: 0x8e040808
    ctx->pc = 0x1cef68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2056)));
    // 0x1cef6c: 0x8e250808
    ctx->pc = 0x1cef6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 2056)));
    // 0x1cef70: 0xc041eac
    ctx->pc = 0x1CEF70u;
    SET_GPR_U32(ctx, 31, 0x1CEF78u);
    ctx->pc = 0x1CEF74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4864));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF78u; }
    }
    if (ctx->pc != 0x1CEF78u) { return; }
    ctx->pc = 0x1CEF78u;
    // 0x1cef78: 0x8e23080c
    ctx->pc = 0x1cef78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2060)));
    // 0x1cef7c: 0xae03080c
    ctx->pc = 0x1cef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 3));
    // 0x1cef80: 0x96230810
    ctx->pc = 0x1cef80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2064)));
    // 0x1cef84: 0xa6030810
    ctx->pc = 0x1cef84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2064), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cef88: 0x96230812
    ctx->pc = 0x1cef88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2066)));
    // 0x1cef8c: 0xa6030812
    ctx->pc = 0x1cef8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2066), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cef90: 0x96230814
    ctx->pc = 0x1cef90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x1cef94: 0xa6030814
    ctx->pc = 0x1cef94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2068), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cef98: 0x96230816
    ctx->pc = 0x1cef98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2070)));
    // 0x1cef9c: 0xa6030816
    ctx->pc = 0x1cef9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2070), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cefa0: 0x9223081c
    ctx->pc = 0x1cefa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1cefa4: 0xa203081c
    ctx->pc = 0x1cefa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2076), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cefa8: 0xae20080c
    ctx->pc = 0x1cefa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 0));
    // 0x1cefac: 0xdfbf0020
    ctx->pc = 0x1cefacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cefb0: 0x7bb10010
    ctx->pc = 0x1cefb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cefb4: 0x7bb00000
    ctx->pc = 0x1cefb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cefb8: 0x3e00008
    ctx->pc = 0x1CEFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEFBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEF4Cu: goto label_1cef4c;
            case 0x1CEF68u: goto label_1cef68;
            case 0x1CEFECu: goto label_1cefec;
            case 0x1CF00Cu: goto label_1cf00c;
            case 0x1CF040u: goto label_1cf040;
            case 0x1CF05Cu: goto label_1cf05c;
            case 0x1CF060u: goto label_1cf060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEFC0u;
    // 0x1cefc0: 0x27bdffb0
    ctx->pc = 0x1cefc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cefc4: 0xffbf0040
    ctx->pc = 0x1cefc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cefc8: 0x7fb30030
    ctx->pc = 0x1cefc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cefcc: 0x7fb20020
    ctx->pc = 0x1cefccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cefd0: 0xa0982d
    ctx->pc = 0x1cefd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefd4: 0x7fb10010
    ctx->pc = 0x1cefd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cefd8: 0x3c120034
    ctx->pc = 0x1cefd8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x1cefdc: 0x7fb00000
    ctx->pc = 0x1cefdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cefe0: 0x26521430
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 5168));
    // 0x1cefe4: 0x808027
    ctx->pc = 0x1cefe4u;
    SET_GPR_U32(ctx, 16, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1cefe8: 0x882d
    ctx->pc = 0x1cefe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cefec:
    // 0x1cefec: 0x92430000
    ctx->pc = 0x1cefecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ceff0: 0x1060001a
    ctx->pc = 0x1CEFF0u;
    {
        const bool branch_taken_0x1ceff0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEFF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ceff0) {
            ctx->pc = 0x1CF05Cu;
            goto label_1cf05c;
        }
    }
    ctx->pc = 0x1CEFF8u;
    // 0x1ceff8: 0x12630004
    ctx->pc = 0x1CEFF8u;
    {
        const bool branch_taken_0x1ceff8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ceff8) {
            ctx->pc = 0x1CF00Cu;
            goto label_1cf00c;
        }
    }
    ctx->pc = 0x1CF000u;
    // 0x1cf000: 0x92430008
    ctx->pc = 0x1cf000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cf004: 0x14730015
    ctx->pc = 0x1CF004u;
    {
        const bool branch_taken_0x1cf004 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        if (branch_taken_0x1cf004) {
            ctx->pc = 0x1CF05Cu;
            goto label_1cf05c;
        }
    }
    ctx->pc = 0x1CF00Cu;
label_1cf00c:
    // 0x1cf00c: 0x92430003
    ctx->pc = 0x1cf00cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1cf010: 0x320400ff
    ctx->pc = 0x1cf010u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 255));
    // 0x1cf014: 0x641824
    ctx->pc = 0x1cf014u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cf018: 0xa2430003
    ctx->pc = 0x1cf018u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf01c: 0x92430003
    ctx->pc = 0x1cf01cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1cf020: 0x14600007
    ctx->pc = 0x1CF020u;
    {
        const bool branch_taken_0x1cf020 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf020) {
            ctx->pc = 0x1CF040u;
            goto label_1cf040;
        }
    }
    ctx->pc = 0x1CF028u;
    // 0x1cf028: 0x24020001
    ctx->pc = 0x1cf028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf02c: 0x240202d
    ctx->pc = 0x1cf02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf030: 0xc073b90
    ctx->pc = 0x1CF030u;
    SET_GPR_U32(ctx, 31, 0x1CF038u);
    ctx->pc = 0x1CF034u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CEE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE40_0x1cee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF038u; }
    }
    if (ctx->pc != 0x1CF038u) { return; }
    ctx->pc = 0x1CF038u;
    // 0x1cf038: 0x10000009
    ctx->pc = 0x1CF038u;
    {
        const bool branch_taken_0x1cf038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF03Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1cf038) {
            ctx->pc = 0x1CF060u;
            goto label_1cf060;
        }
    }
    ctx->pc = 0x1CF040u;
label_1cf040:
    // 0x1cf040: 0x92430000
    ctx->pc = 0x1cf040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cf044: 0x2463ffff
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cf048: 0xa2430000
    ctx->pc = 0x1cf048u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf04c: 0x92430000
    ctx->pc = 0x1cf04cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cf050: 0x14600002
    ctx->pc = 0x1CF050u;
    {
        const bool branch_taken_0x1cf050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF054u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf050) {
            ctx->pc = 0x1CF05Cu;
            goto label_1cf05c;
        }
    }
    ctx->pc = 0x1CF058u;
    // 0x1cf058: 0xa2430000
    ctx->pc = 0x1cf058u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cf05c:
    // 0x1cf05c: 0x26310001
    ctx->pc = 0x1cf05cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1cf060:
    // 0x1cf060: 0x2a230010
    ctx->pc = 0x1cf060u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 16));
    // 0x1cf064: 0x1460ffe1
    ctx->pc = 0x1CF064u;
    {
        const bool branch_taken_0x1cf064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF068u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        if (branch_taken_0x1cf064) {
            ctx->pc = 0x1CEFECu;
            goto label_1cefec;
        }
    }
    ctx->pc = 0x1CF06Cu;
    // 0x1cf06c: 0xdfbf0040
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf070: 0x7bb30030
    ctx->pc = 0x1cf070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf074: 0x7bb20020
    ctx->pc = 0x1cf074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf078: 0x7bb10010
    ctx->pc = 0x1cf078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf07c: 0x7bb00000
    ctx->pc = 0x1cf07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf080: 0x3e00008
    ctx->pc = 0x1CF080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEF4Cu: goto label_1cef4c;
            case 0x1CEF68u: goto label_1cef68;
            case 0x1CEFECu: goto label_1cefec;
            case 0x1CF00Cu: goto label_1cf00c;
            case 0x1CF040u: goto label_1cf040;
            case 0x1CF05Cu: goto label_1cf05c;
            case 0x1CF060u: goto label_1cf060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF088u;
    // 0x1cf088: 0x0
    ctx->pc = 0x1cf088u;
    // NOP
    // 0x1cf08c: 0x0
    ctx->pc = 0x1cf08cu;
    // NOP
}
