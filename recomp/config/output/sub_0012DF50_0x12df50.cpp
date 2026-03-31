#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012DF50
// Address: 0x12df50 - 0x12e138
void sub_0012DF50_0x12df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12df50u;

label_12df50:
    // 0x12df50: 0x27bdffc0
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_12df54:
    // 0x12df54: 0xffb00010
    ctx->pc = 0x12df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_12df58:
    // 0x12df58: 0xffb10018
    ctx->pc = 0x12df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_12df5c:
    // 0x12df5c: 0xa0882d
    ctx->pc = 0x12df5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12df60:
    // 0x12df60: 0xffb20020
    ctx->pc = 0x12df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_12df64:
    // 0x12df64: 0xc0902d
    ctx->pc = 0x12df64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12df68:
    // 0x12df68: 0xffb30028
    ctx->pc = 0x12df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_12df6c:
    // 0x12df6c: 0x80982d
    ctx->pc = 0x12df6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12df70:
    // 0x12df70: 0xffb40030
    ctx->pc = 0x12df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_12df74:
    // 0x12df74: 0xe0a02d
    ctx->pc = 0x12df74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12df78:
    // 0x12df78: 0xffbf0038
    ctx->pc = 0x12df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_12df7c:
    // 0x12df7c: 0x2328018
    ctx->pc = 0x12df7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
label_12df80:
    // 0x12df80: 0x282d
    ctx->pc = 0x12df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12df84:
    // 0x12df84: 0x280202d
    ctx->pc = 0x12df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12df88:
    // 0x12df88: 0x8e820000
    ctx->pc = 0x12df88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12df8c:
    // 0x12df8c: 0x3a0382d
    ctx->pc = 0x12df8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12df90:
    // 0x12df90: 0x8c430018
    ctx->pc = 0x12df90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12df94:
    // 0x12df94: 0x60f809
label_12df98:
    if (ctx->pc == 0x12DF98u) {
        ctx->pc = 0x12DF98u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12DF9Cu;
        goto label_12df9c;
    }
    ctx->pc = 0x12DF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12DF9Cu);
        ctx->pc = 0x12DF98u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF50u: goto label_12df50;
            case 0x12DF54u: goto label_12df54;
            case 0x12DF58u: goto label_12df58;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF60u: goto label_12df60;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF70u: goto label_12df70;
            case 0x12DF74u: goto label_12df74;
            case 0x12DF78u: goto label_12df78;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF80u: goto label_12df80;
            case 0x12DF84u: goto label_12df84;
            case 0x12DF88u: goto label_12df88;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF90u: goto label_12df90;
            case 0x12DF94u: goto label_12df94;
            case 0x12DF98u: goto label_12df98;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFA4u: goto label_12dfa4;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFB0u: goto label_12dfb0;
            case 0x12DFB4u: goto label_12dfb4;
            case 0x12DFB8u: goto label_12dfb8;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12DFC8u: goto label_12dfc8;
            case 0x12DFCCu: goto label_12dfcc;
            case 0x12DFD0u: goto label_12dfd0;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFD8u: goto label_12dfd8;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12DFE0u: goto label_12dfe0;
            case 0x12DFE4u: goto label_12dfe4;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFF0u: goto label_12dff0;
            case 0x12DFF4u: goto label_12dff4;
            case 0x12DFF8u: goto label_12dff8;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E000u: goto label_12e000;
            case 0x12E004u: goto label_12e004;
            case 0x12E008u: goto label_12e008;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E010u: goto label_12e010;
            case 0x12E014u: goto label_12e014;
            case 0x12E018u: goto label_12e018;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E020u: goto label_12e020;
            case 0x12E024u: goto label_12e024;
            case 0x12E028u: goto label_12e028;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E030u: goto label_12e030;
            case 0x12E034u: goto label_12e034;
            case 0x12E038u: goto label_12e038;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E040u: goto label_12e040;
            case 0x12E044u: goto label_12e044;
            case 0x12E048u: goto label_12e048;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E050u: goto label_12e050;
            case 0x12E054u: goto label_12e054;
            case 0x12E058u: goto label_12e058;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E060u: goto label_12e060;
            case 0x12E064u: goto label_12e064;
            case 0x12E068u: goto label_12e068;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E070u: goto label_12e070;
            case 0x12E074u: goto label_12e074;
            case 0x12E078u: goto label_12e078;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E080u: goto label_12e080;
            case 0x12E084u: goto label_12e084;
            case 0x12E088u: goto label_12e088;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E090u: goto label_12e090;
            case 0x12E094u: goto label_12e094;
            case 0x12E098u: goto label_12e098;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0A4u: goto label_12e0a4;
            case 0x12E0A8u: goto label_12e0a8;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B0u: goto label_12e0b0;
            case 0x12E0B4u: goto label_12e0b4;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0C0u: goto label_12e0c0;
            case 0x12E0C4u: goto label_12e0c4;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0CCu: goto label_12e0cc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0D4u: goto label_12e0d4;
            case 0x12E0D8u: goto label_12e0d8;
            case 0x12E0DCu: goto label_12e0dc;
            case 0x12E0E0u: goto label_12e0e0;
            case 0x12E0E4u: goto label_12e0e4;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E0ECu: goto label_12e0ec;
            case 0x12E0F0u: goto label_12e0f0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E0FCu: goto label_12e0fc;
            case 0x12E100u: goto label_12e100;
            case 0x12E104u: goto label_12e104;
            case 0x12E108u: goto label_12e108;
            case 0x12E10Cu: goto label_12e10c;
            case 0x12E110u: goto label_12e110;
            case 0x12E114u: goto label_12e114;
            case 0x12E118u: goto label_12e118;
            case 0x12E11Cu: goto label_12e11c;
            case 0x12E120u: goto label_12e120;
            case 0x12E124u: goto label_12e124;
            case 0x12E128u: goto label_12e128;
            case 0x12E12Cu: goto label_12e12c;
            case 0x12E130u: goto label_12e130;
            case 0x12E134u: goto label_12e134;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12DF9Cu; }
            if (ctx->pc != 0x12DF9Cu) { return; }
        }
    }
    ctx->pc = 0x12DF9Cu;
label_12df9c:
    // 0x12df9c: 0x8fa20004
    ctx->pc = 0x12df9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12dfa0:
    // 0x12dfa0: 0x50102a
    ctx->pc = 0x12dfa0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_12dfa4:
    // 0x12dfa4: 0x1040000a
label_12dfa8:
    if (ctx->pc == 0x12DFA8u) {
        ctx->pc = 0x12DFA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x12DFACu;
        goto label_12dfac;
    }
    ctx->pc = 0x12DFA4u;
    {
        const bool branch_taken_0x12dfa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DFA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x12dfa4) {
            ctx->pc = 0x12DFD0u;
            goto label_12dfd0;
        }
    }
    ctx->pc = 0x12DFACu;
label_12dfac:
    // 0x12dfac: 0x8e830000
    ctx->pc = 0x12dfacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12dfb0:
    // 0x12dfb0: 0x280202d
    ctx->pc = 0x12dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12dfb4:
    // 0x12dfb4: 0x282d
    ctx->pc = 0x12dfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12dfb8:
    // 0x12dfb8: 0x8c62001c
    ctx->pc = 0x12dfb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12dfbc:
    // 0x12dfbc: 0x40f809
label_12dfc0:
    if (ctx->pc == 0x12DFC0u) {
        ctx->pc = 0x12DFC0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12DFC4u;
        goto label_12dfc4;
    }
    ctx->pc = 0x12DFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12DFC4u);
        ctx->pc = 0x12DFC0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF50u: goto label_12df50;
            case 0x12DF54u: goto label_12df54;
            case 0x12DF58u: goto label_12df58;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF60u: goto label_12df60;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF70u: goto label_12df70;
            case 0x12DF74u: goto label_12df74;
            case 0x12DF78u: goto label_12df78;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF80u: goto label_12df80;
            case 0x12DF84u: goto label_12df84;
            case 0x12DF88u: goto label_12df88;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF90u: goto label_12df90;
            case 0x12DF94u: goto label_12df94;
            case 0x12DF98u: goto label_12df98;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFA4u: goto label_12dfa4;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFB0u: goto label_12dfb0;
            case 0x12DFB4u: goto label_12dfb4;
            case 0x12DFB8u: goto label_12dfb8;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12DFC8u: goto label_12dfc8;
            case 0x12DFCCu: goto label_12dfcc;
            case 0x12DFD0u: goto label_12dfd0;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFD8u: goto label_12dfd8;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12DFE0u: goto label_12dfe0;
            case 0x12DFE4u: goto label_12dfe4;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFF0u: goto label_12dff0;
            case 0x12DFF4u: goto label_12dff4;
            case 0x12DFF8u: goto label_12dff8;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E000u: goto label_12e000;
            case 0x12E004u: goto label_12e004;
            case 0x12E008u: goto label_12e008;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E010u: goto label_12e010;
            case 0x12E014u: goto label_12e014;
            case 0x12E018u: goto label_12e018;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E020u: goto label_12e020;
            case 0x12E024u: goto label_12e024;
            case 0x12E028u: goto label_12e028;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E030u: goto label_12e030;
            case 0x12E034u: goto label_12e034;
            case 0x12E038u: goto label_12e038;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E040u: goto label_12e040;
            case 0x12E044u: goto label_12e044;
            case 0x12E048u: goto label_12e048;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E050u: goto label_12e050;
            case 0x12E054u: goto label_12e054;
            case 0x12E058u: goto label_12e058;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E060u: goto label_12e060;
            case 0x12E064u: goto label_12e064;
            case 0x12E068u: goto label_12e068;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E070u: goto label_12e070;
            case 0x12E074u: goto label_12e074;
            case 0x12E078u: goto label_12e078;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E080u: goto label_12e080;
            case 0x12E084u: goto label_12e084;
            case 0x12E088u: goto label_12e088;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E090u: goto label_12e090;
            case 0x12E094u: goto label_12e094;
            case 0x12E098u: goto label_12e098;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0A4u: goto label_12e0a4;
            case 0x12E0A8u: goto label_12e0a8;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B0u: goto label_12e0b0;
            case 0x12E0B4u: goto label_12e0b4;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0C0u: goto label_12e0c0;
            case 0x12E0C4u: goto label_12e0c4;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0CCu: goto label_12e0cc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0D4u: goto label_12e0d4;
            case 0x12E0D8u: goto label_12e0d8;
            case 0x12E0DCu: goto label_12e0dc;
            case 0x12E0E0u: goto label_12e0e0;
            case 0x12E0E4u: goto label_12e0e4;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E0ECu: goto label_12e0ec;
            case 0x12E0F0u: goto label_12e0f0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E0FCu: goto label_12e0fc;
            case 0x12E100u: goto label_12e100;
            case 0x12E104u: goto label_12e104;
            case 0x12E108u: goto label_12e108;
            case 0x12E10Cu: goto label_12e10c;
            case 0x12E110u: goto label_12e110;
            case 0x12E114u: goto label_12e114;
            case 0x12E118u: goto label_12e118;
            case 0x12E11Cu: goto label_12e11c;
            case 0x12E120u: goto label_12e120;
            case 0x12E124u: goto label_12e124;
            case 0x12E128u: goto label_12e128;
            case 0x12E12Cu: goto label_12e12c;
            case 0x12E130u: goto label_12e130;
            case 0x12E134u: goto label_12e134;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12DFC4u; }
            if (ctx->pc != 0x12DFC4u) { return; }
        }
    }
    ctx->pc = 0x12DFC4u;
label_12dfc4:
    // 0x12dfc4: 0x10000049
label_12dfc8:
    if (ctx->pc == 0x12DFC8u) {
        ctx->pc = 0x12DFC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12DFCCu;
        goto label_12dfcc;
    }
    ctx->pc = 0x12DFC4u;
    {
        const bool branch_taken_0x12dfc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DFC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12dfc4) {
            ctx->pc = 0x12E0ECu;
            goto label_12e0ec;
        }
    }
    ctx->pc = 0x12DFCCu;
label_12dfcc:
    // 0x12dfcc: 0x0
    ctx->pc = 0x12dfccu;
    // NOP
label_12dfd0:
    // 0x12dfd0: 0x16220019
label_12dfd4:
    if (ctx->pc == 0x12DFD4u) {
        ctx->pc = 0x12DFD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x12DFD8u;
        goto label_12dfd8;
    }
    ctx->pc = 0x12DFD0u;
    {
        const bool branch_taken_0x12dfd0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12DFD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x12dfd0) {
            ctx->pc = 0x12E038u;
            goto label_12e038;
        }
    }
    ctx->pc = 0x12DFD8u;
label_12dfd8:
    // 0x12dfd8: 0x260382d
    ctx->pc = 0x12dfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12dfdc:
    // 0x12dfdc: 0x8fa60000
    ctx->pc = 0x12dfdcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12dfe0:
    // 0x12dfe0: 0x1a40003b
label_12dfe4:
    if (ctx->pc == 0x12DFE4u) {
        ctx->pc = 0x12DFE4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12DFE8u;
        goto label_12dfe8;
    }
    ctx->pc = 0x12DFE0u;
    {
        const bool branch_taken_0x12dfe0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12DFE4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12dfe0) {
            ctx->pc = 0x12E0D0u;
            goto label_12e0d0;
        }
    }
    ctx->pc = 0x12DFE8u;
label_12dfe8:
    // 0x12dfe8: 0x3c0900ff
    ctx->pc = 0x12dfe8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)255 << 16));
label_12dfec:
    // 0x12dfec: 0x0
    ctx->pc = 0x12dfecu;
    // NOP
label_12dff0:
    // 0x12dff0: 0x8ce40000
    ctx->pc = 0x12dff0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_12dff4:
    // 0x12dff4: 0x24e70004
    ctx->pc = 0x12dff4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_12dff8:
    // 0x12dff8: 0x25080001
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_12dffc:
    // 0x12dffc: 0x42a03
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 8));
label_12e000:
    // 0x12e000: 0x41a00
    ctx->pc = 0x12e000u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 8));
label_12e004:
    // 0x12e004: 0x41602
    ctx->pc = 0x12e004u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 24));
label_12e008:
    // 0x12e008: 0x42600
    ctx->pc = 0x12e008u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_12e00c:
    // 0x12e00c: 0x691824
    ctx->pc = 0x12e00cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_12e010:
    // 0x12e010: 0x30a5ff00
    ctx->pc = 0x12e010u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
label_12e014:
    // 0x12e014: 0x441025
    ctx->pc = 0x12e014u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12e018:
    // 0x12e018: 0x112202a
    ctx->pc = 0x12e018u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 18)));
label_12e01c:
    // 0x12e01c: 0x651825
    ctx->pc = 0x12e01cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12e020:
    // 0x12e020: 0x431025
    ctx->pc = 0x12e020u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12e024:
    // 0x12e024: 0xacc20000
    ctx->pc = 0x12e024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_12e028:
    // 0x12e028: 0x1480fff1
label_12e02c:
    if (ctx->pc == 0x12E02Cu) {
        ctx->pc = 0x12E02Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x12E030u;
        goto label_12e030;
    }
    ctx->pc = 0x12E028u;
    {
        const bool branch_taken_0x12e028 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E02Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x12e028) {
            ctx->pc = 0x12DFF0u;
            goto label_12dff0;
        }
    }
    ctx->pc = 0x12E030u;
label_12e030:
    // 0x12e030: 0x10000028
label_12e034:
    if (ctx->pc == 0x12E034u) {
        ctx->pc = 0x12E034u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x12E038u;
        goto label_12e038;
    }
    ctx->pc = 0x12E030u;
    {
        const bool branch_taken_0x12e030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E034u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x12e030) {
            ctx->pc = 0x12E0D4u;
            goto label_12e0d4;
        }
    }
    ctx->pc = 0x12E038u;
label_12e038:
    // 0x12e038: 0x16220015
label_12e03c:
    if (ctx->pc == 0x12E03Cu) {
        ctx->pc = 0x12E03Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12E040u;
        goto label_12e040;
    }
    ctx->pc = 0x12E038u;
    {
        const bool branch_taken_0x12e038 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12E03Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12e038) {
            ctx->pc = 0x12E090u;
            goto label_12e090;
        }
    }
    ctx->pc = 0x12E040u;
label_12e040:
    // 0x12e040: 0x260282d
    ctx->pc = 0x12e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e044:
    // 0x12e044: 0x8fa60000
    ctx->pc = 0x12e044u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12e048:
    // 0x12e048: 0x1a400021
label_12e04c:
    if (ctx->pc == 0x12E04Cu) {
        ctx->pc = 0x12E04Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E050u;
        goto label_12e050;
    }
    ctx->pc = 0x12E048u;
    {
        const bool branch_taken_0x12e048 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12E04Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e048) {
            ctx->pc = 0x12E0D0u;
            goto label_12e0d0;
        }
    }
    ctx->pc = 0x12E050u;
label_12e050:
    // 0x12e050: 0x2407ff00
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967040));
label_12e054:
    // 0x12e054: 0x0
    ctx->pc = 0x12e054u;
    // NOP
label_12e058:
    // 0x12e058: 0x94a20000
    ctx->pc = 0x12e058u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_12e05c:
    // 0x12e05c: 0x25080001
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_12e060:
    // 0x12e060: 0x90a30001
    ctx->pc = 0x12e060u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_12e064:
    // 0x12e064: 0x24a50002
    ctx->pc = 0x12e064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_12e068:
    // 0x12e068: 0x21200
    ctx->pc = 0x12e068u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_12e06c:
    // 0x12e06c: 0x112202a
    ctx->pc = 0x12e06cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 18)));
label_12e070:
    // 0x12e070: 0x471024
    ctx->pc = 0x12e070u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_12e074:
    // 0x12e074: 0x621825
    ctx->pc = 0x12e074u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12e078:
    // 0x12e078: 0xa4c30000
    ctx->pc = 0x12e078u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_12e07c:
    // 0x12e07c: 0x1480fff6
label_12e080:
    if (ctx->pc == 0x12E080u) {
        ctx->pc = 0x12E080u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x12E084u;
        goto label_12e084;
    }
    ctx->pc = 0x12E07Cu;
    {
        const bool branch_taken_0x12e07c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E080u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x12e07c) {
            ctx->pc = 0x12E058u;
            goto label_12e058;
        }
    }
    ctx->pc = 0x12E084u;
label_12e084:
    // 0x12e084: 0x10000013
label_12e088:
    if (ctx->pc == 0x12E088u) {
        ctx->pc = 0x12E088u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x12E08Cu;
        goto label_12e08c;
    }
    ctx->pc = 0x12E084u;
    {
        const bool branch_taken_0x12e084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E088u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x12e084) {
            ctx->pc = 0x12E0D4u;
            goto label_12e0d4;
        }
    }
    ctx->pc = 0x12E08Cu;
label_12e08c:
    // 0x12e08c: 0x0
    ctx->pc = 0x12e08cu;
    // NOP
label_12e090:
    // 0x12e090: 0x16220007
label_12e094:
    if (ctx->pc == 0x12E094u) {
        ctx->pc = 0x12E094u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x12E098u;
        goto label_12e098;
    }
    ctx->pc = 0x12E090u;
    {
        const bool branch_taken_0x12e090 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12E094u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12e090) {
            ctx->pc = 0x12E0B0u;
            goto label_12e0b0;
        }
    }
    ctx->pc = 0x12E098u;
label_12e098:
    // 0x12e098: 0x260282d
    ctx->pc = 0x12e098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e09c:
    // 0x12e09c: 0xc041eac
label_12e0a0:
    if (ctx->pc == 0x12E0A0u) {
        ctx->pc = 0x12E0A0u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 18), 65535));
        ctx->pc = 0x12E0A4u;
        goto label_12e0a4;
    }
    ctx->pc = 0x12E09Cu;
    SET_GPR_U32(ctx, 31, 0x12E0A4u);
    ctx->pc = 0x12E0A0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 18), 65535));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0A4u; }
    }
    if (ctx->pc != 0x12E0A4u) { return; }
    ctx->pc = 0x12E0A4u;
label_12e0a4:
    // 0x12e0a4: 0x1000000b
label_12e0a8:
    if (ctx->pc == 0x12E0A8u) {
        ctx->pc = 0x12E0A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x12E0ACu;
        goto label_12e0ac;
    }
    ctx->pc = 0x12E0A4u;
    {
        const bool branch_taken_0x12e0a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E0A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x12e0a4) {
            ctx->pc = 0x12E0D4u;
            goto label_12e0d4;
        }
    }
    ctx->pc = 0x12E0ACu;
label_12e0ac:
    // 0x12e0ac: 0x0
    ctx->pc = 0x12e0acu;
    // NOP
label_12e0b0:
    // 0x12e0b0: 0x0
    ctx->pc = 0x12e0b0u;
    // NOP
label_12e0b4:
    // 0x12e0b4: 0x0
    ctx->pc = 0x12e0b4u;
    // NOP
label_12e0b8:
    // 0x12e0b8: 0x0
    ctx->pc = 0x12e0b8u;
    // NOP
label_12e0bc:
    // 0x12e0bc: 0x0
    ctx->pc = 0x12e0bcu;
    // NOP
label_12e0c0:
    // 0x12e0c0: 0x0
    ctx->pc = 0x12e0c0u;
    // NOP
label_12e0c4:
    // 0x12e0c4: 0x1000fffa
label_12e0c8:
    if (ctx->pc == 0x12E0C8u) {
        ctx->pc = 0x12E0CCu;
        goto label_12e0cc;
    }
    ctx->pc = 0x12E0C4u;
    {
        const bool branch_taken_0x12e0c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e0c4) {
            ctx->pc = 0x12E0B0u;
            goto label_12e0b0;
        }
    }
    ctx->pc = 0x12E0CCu;
label_12e0cc:
    // 0x12e0cc: 0x0
    ctx->pc = 0x12e0ccu;
    // NOP
label_12e0d0:
    // 0x12e0d0: 0x8e830000
    ctx->pc = 0x12e0d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12e0d4:
    // 0x12e0d4: 0x280202d
    ctx->pc = 0x12e0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12e0d8:
    // 0x12e0d8: 0x24050001
    ctx->pc = 0x12e0d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12e0dc:
    // 0x12e0dc: 0x8c620020
    ctx->pc = 0x12e0dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12e0e0:
    // 0x12e0e0: 0x40f809
label_12e0e4:
    if (ctx->pc == 0x12E0E4u) {
        ctx->pc = 0x12E0E4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12E0E8u;
        goto label_12e0e8;
    }
    ctx->pc = 0x12E0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E0E8u);
        ctx->pc = 0x12E0E4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF50u: goto label_12df50;
            case 0x12DF54u: goto label_12df54;
            case 0x12DF58u: goto label_12df58;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF60u: goto label_12df60;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF70u: goto label_12df70;
            case 0x12DF74u: goto label_12df74;
            case 0x12DF78u: goto label_12df78;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF80u: goto label_12df80;
            case 0x12DF84u: goto label_12df84;
            case 0x12DF88u: goto label_12df88;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF90u: goto label_12df90;
            case 0x12DF94u: goto label_12df94;
            case 0x12DF98u: goto label_12df98;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFA4u: goto label_12dfa4;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFB0u: goto label_12dfb0;
            case 0x12DFB4u: goto label_12dfb4;
            case 0x12DFB8u: goto label_12dfb8;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12DFC8u: goto label_12dfc8;
            case 0x12DFCCu: goto label_12dfcc;
            case 0x12DFD0u: goto label_12dfd0;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFD8u: goto label_12dfd8;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12DFE0u: goto label_12dfe0;
            case 0x12DFE4u: goto label_12dfe4;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFF0u: goto label_12dff0;
            case 0x12DFF4u: goto label_12dff4;
            case 0x12DFF8u: goto label_12dff8;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E000u: goto label_12e000;
            case 0x12E004u: goto label_12e004;
            case 0x12E008u: goto label_12e008;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E010u: goto label_12e010;
            case 0x12E014u: goto label_12e014;
            case 0x12E018u: goto label_12e018;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E020u: goto label_12e020;
            case 0x12E024u: goto label_12e024;
            case 0x12E028u: goto label_12e028;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E030u: goto label_12e030;
            case 0x12E034u: goto label_12e034;
            case 0x12E038u: goto label_12e038;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E040u: goto label_12e040;
            case 0x12E044u: goto label_12e044;
            case 0x12E048u: goto label_12e048;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E050u: goto label_12e050;
            case 0x12E054u: goto label_12e054;
            case 0x12E058u: goto label_12e058;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E060u: goto label_12e060;
            case 0x12E064u: goto label_12e064;
            case 0x12E068u: goto label_12e068;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E070u: goto label_12e070;
            case 0x12E074u: goto label_12e074;
            case 0x12E078u: goto label_12e078;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E080u: goto label_12e080;
            case 0x12E084u: goto label_12e084;
            case 0x12E088u: goto label_12e088;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E090u: goto label_12e090;
            case 0x12E094u: goto label_12e094;
            case 0x12E098u: goto label_12e098;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0A4u: goto label_12e0a4;
            case 0x12E0A8u: goto label_12e0a8;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B0u: goto label_12e0b0;
            case 0x12E0B4u: goto label_12e0b4;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0C0u: goto label_12e0c0;
            case 0x12E0C4u: goto label_12e0c4;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0CCu: goto label_12e0cc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0D4u: goto label_12e0d4;
            case 0x12E0D8u: goto label_12e0d8;
            case 0x12E0DCu: goto label_12e0dc;
            case 0x12E0E0u: goto label_12e0e0;
            case 0x12E0E4u: goto label_12e0e4;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E0ECu: goto label_12e0ec;
            case 0x12E0F0u: goto label_12e0f0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E0FCu: goto label_12e0fc;
            case 0x12E100u: goto label_12e100;
            case 0x12E104u: goto label_12e104;
            case 0x12E108u: goto label_12e108;
            case 0x12E10Cu: goto label_12e10c;
            case 0x12E110u: goto label_12e110;
            case 0x12E114u: goto label_12e114;
            case 0x12E118u: goto label_12e118;
            case 0x12E11Cu: goto label_12e11c;
            case 0x12E120u: goto label_12e120;
            case 0x12E124u: goto label_12e124;
            case 0x12E128u: goto label_12e128;
            case 0x12E12Cu: goto label_12e12c;
            case 0x12E130u: goto label_12e130;
            case 0x12E134u: goto label_12e134;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E0E8u; }
            if (ctx->pc != 0x12E0E8u) { return; }
        }
    }
    ctx->pc = 0x12E0E8u;
label_12e0e8:
    // 0x12e0e8: 0x240102d
    ctx->pc = 0x12e0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e0ec:
    // 0x12e0ec: 0xdfb00010
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e0f0:
    // 0x12e0f0: 0xdfb10018
    ctx->pc = 0x12e0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12e0f4:
    // 0x12e0f4: 0xdfb20020
    ctx->pc = 0x12e0f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12e0f8:
    // 0x12e0f8: 0xdfb30028
    ctx->pc = 0x12e0f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12e0fc:
    // 0x12e0fc: 0xdfb40030
    ctx->pc = 0x12e0fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12e100:
    // 0x12e100: 0xdfbf0038
    ctx->pc = 0x12e100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12e104:
    // 0x12e104: 0x3e00008
label_12e108:
    if (ctx->pc == 0x12E108u) {
        ctx->pc = 0x12E108u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x12E10Cu;
        goto label_12e10c;
    }
    ctx->pc = 0x12E104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E108u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF50u: goto label_12df50;
            case 0x12DF54u: goto label_12df54;
            case 0x12DF58u: goto label_12df58;
            case 0x12DF5Cu: goto label_12df5c;
            case 0x12DF60u: goto label_12df60;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF6Cu: goto label_12df6c;
            case 0x12DF70u: goto label_12df70;
            case 0x12DF74u: goto label_12df74;
            case 0x12DF78u: goto label_12df78;
            case 0x12DF7Cu: goto label_12df7c;
            case 0x12DF80u: goto label_12df80;
            case 0x12DF84u: goto label_12df84;
            case 0x12DF88u: goto label_12df88;
            case 0x12DF8Cu: goto label_12df8c;
            case 0x12DF90u: goto label_12df90;
            case 0x12DF94u: goto label_12df94;
            case 0x12DF98u: goto label_12df98;
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFA0u: goto label_12dfa0;
            case 0x12DFA4u: goto label_12dfa4;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFACu: goto label_12dfac;
            case 0x12DFB0u: goto label_12dfb0;
            case 0x12DFB4u: goto label_12dfb4;
            case 0x12DFB8u: goto label_12dfb8;
            case 0x12DFBCu: goto label_12dfbc;
            case 0x12DFC0u: goto label_12dfc0;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12DFC8u: goto label_12dfc8;
            case 0x12DFCCu: goto label_12dfcc;
            case 0x12DFD0u: goto label_12dfd0;
            case 0x12DFD4u: goto label_12dfd4;
            case 0x12DFD8u: goto label_12dfd8;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12DFE0u: goto label_12dfe0;
            case 0x12DFE4u: goto label_12dfe4;
            case 0x12DFE8u: goto label_12dfe8;
            case 0x12DFECu: goto label_12dfec;
            case 0x12DFF0u: goto label_12dff0;
            case 0x12DFF4u: goto label_12dff4;
            case 0x12DFF8u: goto label_12dff8;
            case 0x12DFFCu: goto label_12dffc;
            case 0x12E000u: goto label_12e000;
            case 0x12E004u: goto label_12e004;
            case 0x12E008u: goto label_12e008;
            case 0x12E00Cu: goto label_12e00c;
            case 0x12E010u: goto label_12e010;
            case 0x12E014u: goto label_12e014;
            case 0x12E018u: goto label_12e018;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E020u: goto label_12e020;
            case 0x12E024u: goto label_12e024;
            case 0x12E028u: goto label_12e028;
            case 0x12E02Cu: goto label_12e02c;
            case 0x12E030u: goto label_12e030;
            case 0x12E034u: goto label_12e034;
            case 0x12E038u: goto label_12e038;
            case 0x12E03Cu: goto label_12e03c;
            case 0x12E040u: goto label_12e040;
            case 0x12E044u: goto label_12e044;
            case 0x12E048u: goto label_12e048;
            case 0x12E04Cu: goto label_12e04c;
            case 0x12E050u: goto label_12e050;
            case 0x12E054u: goto label_12e054;
            case 0x12E058u: goto label_12e058;
            case 0x12E05Cu: goto label_12e05c;
            case 0x12E060u: goto label_12e060;
            case 0x12E064u: goto label_12e064;
            case 0x12E068u: goto label_12e068;
            case 0x12E06Cu: goto label_12e06c;
            case 0x12E070u: goto label_12e070;
            case 0x12E074u: goto label_12e074;
            case 0x12E078u: goto label_12e078;
            case 0x12E07Cu: goto label_12e07c;
            case 0x12E080u: goto label_12e080;
            case 0x12E084u: goto label_12e084;
            case 0x12E088u: goto label_12e088;
            case 0x12E08Cu: goto label_12e08c;
            case 0x12E090u: goto label_12e090;
            case 0x12E094u: goto label_12e094;
            case 0x12E098u: goto label_12e098;
            case 0x12E09Cu: goto label_12e09c;
            case 0x12E0A0u: goto label_12e0a0;
            case 0x12E0A4u: goto label_12e0a4;
            case 0x12E0A8u: goto label_12e0a8;
            case 0x12E0ACu: goto label_12e0ac;
            case 0x12E0B0u: goto label_12e0b0;
            case 0x12E0B4u: goto label_12e0b4;
            case 0x12E0B8u: goto label_12e0b8;
            case 0x12E0BCu: goto label_12e0bc;
            case 0x12E0C0u: goto label_12e0c0;
            case 0x12E0C4u: goto label_12e0c4;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0CCu: goto label_12e0cc;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0D4u: goto label_12e0d4;
            case 0x12E0D8u: goto label_12e0d8;
            case 0x12E0DCu: goto label_12e0dc;
            case 0x12E0E0u: goto label_12e0e0;
            case 0x12E0E4u: goto label_12e0e4;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E0ECu: goto label_12e0ec;
            case 0x12E0F0u: goto label_12e0f0;
            case 0x12E0F4u: goto label_12e0f4;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E0FCu: goto label_12e0fc;
            case 0x12E100u: goto label_12e100;
            case 0x12E104u: goto label_12e104;
            case 0x12E108u: goto label_12e108;
            case 0x12E10Cu: goto label_12e10c;
            case 0x12E110u: goto label_12e110;
            case 0x12E114u: goto label_12e114;
            case 0x12E118u: goto label_12e118;
            case 0x12E11Cu: goto label_12e11c;
            case 0x12E120u: goto label_12e120;
            case 0x12E124u: goto label_12e124;
            case 0x12E128u: goto label_12e128;
            case 0x12E12Cu: goto label_12e12c;
            case 0x12E130u: goto label_12e130;
            case 0x12E134u: goto label_12e134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E10Cu;
label_12e10c:
    // 0x12e10c: 0x0
    ctx->pc = 0x12e10cu;
    // NOP
label_12e110:
    // 0x12e110: 0x27bdfff0
    ctx->pc = 0x12e110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12e114:
    // 0x12e114: 0x3c040022
    ctx->pc = 0x12e114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
label_12e118:
    // 0x12e118: 0xffbf0000
    ctx->pc = 0x12e118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12e11c:
    // 0x12e11c: 0x282d
    ctx->pc = 0x12e11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e120:
    // 0x12e120: 0x24849ee0
    ctx->pc = 0x12e120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942432));
label_12e124:
    // 0x12e124: 0x240600c0
    ctx->pc = 0x12e124u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
label_12e128:
    // 0x12e128: 0xdfbf0000
    ctx->pc = 0x12e128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e12c:
    // 0x12e12c: 0x8041f1a
label_12e130:
    if (ctx->pc == 0x12E130u) {
        ctx->pc = 0x12E130u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12E134u;
        goto label_12e134;
    }
    ctx->pc = 0x12E12Cu;
    ctx->pc = 0x12E130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12E134u;
label_12e134:
    // 0x12e134: 0x0
    ctx->pc = 0x12e134u;
    // NOP
}
