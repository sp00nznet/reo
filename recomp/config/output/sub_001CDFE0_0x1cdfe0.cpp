#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CDFE0
// Address: 0x1cdfe0 - 0x1ce110
void sub_001CDFE0_0x1cdfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cdfe0u;

    // 0x1cdfe0: 0x27bdffe0
    ctx->pc = 0x1cdfe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdfe4: 0x28822000
    ctx->pc = 0x1cdfe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8192));
    // 0x1cdfe8: 0xffbf0010
    ctx->pc = 0x1cdfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdfec: 0x7fb00000
    ctx->pc = 0x1cdfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdff0: 0x1440000a
    ctx->pc = 0x1CDFF0u;
    {
        const bool branch_taken_0x1cdff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDFF4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cdff0) {
            ctx->pc = 0x1CE01Cu;
            goto label_1ce01c;
        }
    }
    ctx->pc = 0x1CDFF8u;
    // 0x1cdff8: 0x28812100
    ctx->pc = 0x1cdff8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 8448));
    // 0x1cdffc: 0x10200008
    ctx->pc = 0x1CDFFCu;
    {
        const bool branch_taken_0x1cdffc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE000u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 9216));
        if (branch_taken_0x1cdffc) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CE004u;
    // 0x1ce004: 0xc0282d
    ctx->pc = 0x1ce004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce008: 0x200202d
    ctx->pc = 0x1ce008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce00c: 0xc074cd4
    ctx->pc = 0x1CE00Cu;
    SET_GPR_U32(ctx, 31, 0x1CE014u);
    ctx->pc = 0x1CE010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3350_0x1d3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE014u; }
    }
    if (ctx->pc != 0x1CE014u) { return; }
    ctx->pc = 0x1CE014u;
    // 0x1ce014: 0x10000039
    ctx->pc = 0x1CE014u;
    {
        const bool branch_taken_0x1ce014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE018u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1ce014) {
            ctx->pc = 0x1CE0FCu;
            goto label_1ce0fc;
        }
    }
    ctx->pc = 0x1CE01Cu;
label_1ce01c:
    // 0x1ce01c: 0x28822400
    ctx->pc = 0x1ce01cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 9216));
label_1ce020:
    // 0x1ce020: 0x14400009
    ctx->pc = 0x1CE020u;
    {
        const bool branch_taken_0x1ce020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE024u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10752));
        if (branch_taken_0x1ce020) {
            ctx->pc = 0x1CE048u;
            goto label_1ce048;
        }
    }
    ctx->pc = 0x1CE028u;
    // 0x1ce028: 0x28812500
    ctx->pc = 0x1ce028u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 9472));
    // 0x1ce02c: 0x10200006
    ctx->pc = 0x1CE02Cu;
    {
        const bool branch_taken_0x1ce02c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE030u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce02c) {
            ctx->pc = 0x1CE048u;
            goto label_1ce048;
        }
    }
    ctx->pc = 0x1CE034u;
    // 0x1ce034: 0x200202d
    ctx->pc = 0x1ce034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce038: 0xc074cd4
    ctx->pc = 0x1CE038u;
    SET_GPR_U32(ctx, 31, 0x1CE040u);
    ctx->pc = 0x1CE03Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D3350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3350_0x1d3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE040u; }
    }
    if (ctx->pc != 0x1CE040u) { return; }
    ctx->pc = 0x1CE040u;
    // 0x1ce040: 0x1000002d
    ctx->pc = 0x1CE040u;
    {
        const bool branch_taken_0x1ce040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce040) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE048u;
label_1ce048:
    // 0x1ce048: 0x14400008
    ctx->pc = 0x1CE048u;
    {
        const bool branch_taken_0x1ce048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE04Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 12288));
        if (branch_taken_0x1ce048) {
            ctx->pc = 0x1CE06Cu;
            goto label_1ce06c;
        }
    }
    ctx->pc = 0x1CE050u;
    // 0x1ce050: 0x10200007
    ctx->pc = 0x1CE050u;
    {
        const bool branch_taken_0x1ce050 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE054u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6144));
        if (branch_taken_0x1ce050) {
            ctx->pc = 0x1CE070u;
            goto label_1ce070;
        }
    }
    ctx->pc = 0x1CE058u;
    // 0x1ce058: 0x200202d
    ctx->pc = 0x1ce058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce05c: 0xc074c40
    ctx->pc = 0x1CE05Cu;
    SET_GPR_U32(ctx, 31, 0x1CE064u);
    ctx->pc = 0x1CE060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3100_0x1d3100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE064u; }
    }
    if (ctx->pc != 0x1CE064u) { return; }
    ctx->pc = 0x1CE064u;
    // 0x1ce064: 0x10000024
    ctx->pc = 0x1CE064u;
    {
        const bool branch_taken_0x1ce064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce064) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE06Cu;
label_1ce06c:
    // 0x1ce06c: 0x28821800
    ctx->pc = 0x1ce06cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6144));
label_1ce070:
    // 0x1ce070: 0x1440000c
    ctx->pc = 0x1CE070u;
    {
        const bool branch_taken_0x1ce070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE074u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8448));
        if (branch_taken_0x1ce070) {
            ctx->pc = 0x1CE0A4u;
            goto label_1ce0a4;
        }
    }
    ctx->pc = 0x1CE078u;
    // 0x1ce078: 0x28812000
    ctx->pc = 0x1ce078u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 8192));
    // 0x1ce07c: 0x10200009
    ctx->pc = 0x1CE07Cu;
    {
        const bool branch_taken_0x1ce07c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE080u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce07c) {
            ctx->pc = 0x1CE0A4u;
            goto label_1ce0a4;
        }
    }
    ctx->pc = 0x1CE084u;
    // 0x1ce084: 0x3c07004a
    ctx->pc = 0x1ce084u;
    SET_GPR_U32(ctx, 7, ((uint32_t)74 << 16));
    // 0x1ce088: 0x3c06004a
    ctx->pc = 0x1ce088u;
    SET_GPR_U32(ctx, 6, ((uint32_t)74 << 16));
    // 0x1ce08c: 0x200202d
    ctx->pc = 0x1ce08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce090: 0x24c6fa10
    ctx->pc = 0x1ce090u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294965776));
    // 0x1ce094: 0xc074b2c
    ctx->pc = 0x1CE094u;
    SET_GPR_U32(ctx, 31, 0x1CE09Cu);
    ctx->pc = 0x1CE098u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 15392));
    ctx->pc = 0x1D2CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2CB0_0x1d2cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE09Cu; }
    }
    if (ctx->pc != 0x1CE09Cu) { return; }
    ctx->pc = 0x1CE09Cu;
    // 0x1ce09c: 0x10000016
    ctx->pc = 0x1CE09Cu;
    {
        const bool branch_taken_0x1ce09c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce09c) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE0A4u;
label_1ce0a4:
    // 0x1ce0a4: 0x14400009
    ctx->pc = 0x1CE0A4u;
    {
        const bool branch_taken_0x1ce0a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE0A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0a4) {
            ctx->pc = 0x1CE0CCu;
            goto label_1ce0cc;
        }
    }
    ctx->pc = 0x1CE0ACu;
    // 0x1ce0ac: 0x28812400
    ctx->pc = 0x1ce0acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 9216));
    // 0x1ce0b0: 0x10200006
    ctx->pc = 0x1CE0B0u;
    {
        const bool branch_taken_0x1ce0b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce0b0) {
            ctx->pc = 0x1CE0CCu;
            goto label_1ce0cc;
        }
    }
    ctx->pc = 0x1CE0B8u;
    // 0x1ce0b8: 0x200202d
    ctx->pc = 0x1ce0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0bc: 0xc074bf8
    ctx->pc = 0x1CE0BCu;
    SET_GPR_U32(ctx, 31, 0x1CE0C4u);
    ctx->pc = 0x1CE0C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D2FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2FE0_0x1d2fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0C4u; }
    }
    if (ctx->pc != 0x1CE0C4u) { return; }
    ctx->pc = 0x1CE0C4u;
    // 0x1ce0c4: 0x1000000c
    ctx->pc = 0x1CE0C4u;
    {
        const bool branch_taken_0x1ce0c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce0c4) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE0CCu;
label_1ce0cc:
    // 0x1ce0cc: 0xc074b00
    ctx->pc = 0x1CE0CCu;
    SET_GPR_U32(ctx, 31, 0x1CE0D4u);
    ctx->pc = 0x1CE0D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D2C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2C00_0x1d2c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0D4u; }
    }
    if (ctx->pc != 0x1CE0D4u) { return; }
    ctx->pc = 0x1CE0D4u;
    // 0x1ce0d4: 0x8e030004
    ctx->pc = 0x1ce0d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce0d8: 0x10600007
    ctx->pc = 0x1CE0D8u;
    {
        const bool branch_taken_0x1ce0d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce0d8) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE0E0u;
    // 0x1ce0e0: 0x9204081c
    ctx->pc = 0x1ce0e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1ce0e4: 0x24030001
    ctx->pc = 0x1ce0e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce0e8: 0x10830003
    ctx->pc = 0x1CE0E8u;
    {
        const bool branch_taken_0x1ce0e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE0ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0e8) {
            ctx->pc = 0x1CE0F8u;
            goto label_1ce0f8;
        }
    }
    ctx->pc = 0x1CE0F0u;
    // 0x1ce0f0: 0xc074d58
    ctx->pc = 0x1CE0F0u;
    SET_GPR_U32(ctx, 31, 0x1CE0F8u);
    ctx->pc = 0x1D3560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3560_0x1d3560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0F8u; }
    }
    if (ctx->pc != 0x1CE0F8u) { return; }
    ctx->pc = 0x1CE0F8u;
label_1ce0f8:
    // 0x1ce0f8: 0xdfbf0010
    ctx->pc = 0x1ce0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce0fc:
    // 0x1ce0fc: 0x7bb00000
    ctx->pc = 0x1ce0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce100: 0x3e00008
    ctx->pc = 0x1CE100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE104u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE01Cu: goto label_1ce01c;
            case 0x1CE020u: goto label_1ce020;
            case 0x1CE048u: goto label_1ce048;
            case 0x1CE06Cu: goto label_1ce06c;
            case 0x1CE070u: goto label_1ce070;
            case 0x1CE0A4u: goto label_1ce0a4;
            case 0x1CE0CCu: goto label_1ce0cc;
            case 0x1CE0F8u: goto label_1ce0f8;
            case 0x1CE0FCu: goto label_1ce0fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE108u;
    // 0x1ce108: 0x0
    ctx->pc = 0x1ce108u;
    // NOP
    // 0x1ce10c: 0x0
    ctx->pc = 0x1ce10cu;
    // NOP
}
