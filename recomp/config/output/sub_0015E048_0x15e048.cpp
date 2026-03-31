#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E048
// Address: 0x15e048 - 0x15e160
void sub_0015E048_0x15e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e048u;

    // 0x15e048: 0x27bdffd0
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e04c: 0xffb00010
    ctx->pc = 0x15e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15e050: 0x80802d
    ctx->pc = 0x15e050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e054: 0xffb10018
    ctx->pc = 0x15e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15e058: 0xffb20020
    ctx->pc = 0x15e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15e05c: 0xffbf0028
    ctx->pc = 0x15e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15e060: 0x8ca20038
    ctx->pc = 0x15e060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x15e064: 0x8c520004
    ctx->pc = 0x15e064u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e068: 0xc057a4c
    ctx->pc = 0x15E068u;
    SET_GPR_U32(ctx, 31, 0x15E070u);
    ctx->pc = 0x15E06Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x15E930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E930_0x15e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E070u; }
    }
    if (ctx->pc != 0x15E070u) { return; }
    ctx->pc = 0x15E070u;
    // 0x15e070: 0x24030001
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e074: 0x5443002f
    ctx->pc = 0x15E074u;
    {
        const bool branch_taken_0x15e074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x15e074) {
            ctx->pc = 0x15E078u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x15E134u;
            goto label_15e134;
        }
    }
    ctx->pc = 0x15E07Cu;
    // 0x15e07c: 0x8e0200d8
    ctx->pc = 0x15e07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x15e080: 0x5040002c
    ctx->pc = 0x15E080u;
    {
        const bool branch_taken_0x15e080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15e080) {
            ctx->pc = 0x15E084u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x15E134u;
            goto label_15e134;
        }
    }
    ctx->pc = 0x15E088u;
    // 0x15e088: 0x1220000b
    ctx->pc = 0x15E088u;
    {
        const bool branch_taken_0x15e088 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E08Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 5));
        if (branch_taken_0x15e088) {
            ctx->pc = 0x15E0B8u;
            goto label_15e0b8;
        }
    }
    ctx->pc = 0x15E090u;
    // 0x15e090: 0x5440000a
    ctx->pc = 0x15E090u;
    {
        const bool branch_taken_0x15e090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e090) {
            ctx->pc = 0x15E094u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x15E0BCu;
            goto label_15e0bc;
        }
    }
    ctx->pc = 0x15E098u;
    // 0x15e098: 0x26240004
    ctx->pc = 0x15e098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x15e09c: 0x2645fffc
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x15e0a0: 0x3a0302d
    ctx->pc = 0x15e0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0a4: 0xc05f9a8
    ctx->pc = 0x15E0A4u;
    SET_GPR_U32(ctx, 31, 0x15E0ACu);
    ctx->pc = 0x15E0A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x17E6A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E6A0_0x17e6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E0ACu; }
    }
    if (ctx->pc != 0x15E0ACu) { return; }
    ctx->pc = 0x15E0ACu;
    // 0x15e0ac: 0x10000005
    ctx->pc = 0x15E0ACu;
    {
        const bool branch_taken_0x15e0ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E0B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15e0ac) {
            ctx->pc = 0x15E0C4u;
            goto label_15e0c4;
        }
    }
    ctx->pc = 0x15E0B4u;
    // 0x15e0b4: 0x0
    ctx->pc = 0x15e0b4u;
    // NOP
label_15e0b8:
    // 0x15e0b8: 0xafa00000
    ctx->pc = 0x15e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_15e0bc:
    // 0x15e0bc: 0xafa00004
    ctx->pc = 0x15e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x15e0c0: 0x8fa20000
    ctx->pc = 0x15e0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15e0c4:
    // 0x15e0c4: 0x10400014
    ctx->pc = 0x15E0C4u;
    {
        const bool branch_taken_0x15e0c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E0C8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x15e0c4) {
            ctx->pc = 0x15E118u;
            goto label_15e118;
        }
    }
    ctx->pc = 0x15E0CCu;
    // 0x15e0cc: 0x58e00013
    ctx->pc = 0x15E0CCu;
    {
        const bool branch_taken_0x15e0cc = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x15e0cc) {
            ctx->pc = 0x15E0D0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->pc = 0x15E11Cu;
            goto label_15e11c;
        }
    }
    ctx->pc = 0x15E0D4u;
    // 0x15e0d4: 0x8e0200dc
    ctx->pc = 0x15e0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15e0d8: 0x282d
    ctx->pc = 0x15e0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0dc: 0x8e0400d8
    ctx->pc = 0x15e0dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x15e0e0: 0x47182a
    ctx->pc = 0x15e0e0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x15e0e4: 0x40302d
    ctx->pc = 0x15e0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0e8: 0x43380b
    ctx->pc = 0x15e0e8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
    // 0x15e0ec: 0xc041f1a
    ctx->pc = 0x15E0ECu;
    SET_GPR_U32(ctx, 31, 0x15E0F4u);
    ctx->pc = 0x15E0F0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E0F4u; }
    }
    if (ctx->pc != 0x15E0F4u) { return; }
    ctx->pc = 0x15E0F4u;
    // 0x15e0f4: 0x8fa50000
    ctx->pc = 0x15e0f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e0f8: 0x8e0400d8
    ctx->pc = 0x15e0f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x15e0fc: 0xc041eac
    ctx->pc = 0x15E0FCu;
    SET_GPR_U32(ctx, 31, 0x15E104u);
    ctx->pc = 0x15E100u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E104u; }
    }
    if (ctx->pc != 0x15E104u) { return; }
    ctx->pc = 0x15E104u;
    // 0x15e104: 0x8e0300d8
    ctx->pc = 0x15e104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x15e108: 0x8fa20004
    ctx->pc = 0x15e108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15e10c: 0xae0300e0
    ctx->pc = 0x15e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x15e110: 0x10000003
    ctx->pc = 0x15E110u;
    {
        const bool branch_taken_0x15e110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E114u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        if (branch_taken_0x15e110) {
            ctx->pc = 0x15E120u;
            goto label_15e120;
        }
    }
    ctx->pc = 0x15E118u;
label_15e118:
    // 0x15e118: 0xae0000e0
    ctx->pc = 0x15e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_15e11c:
    // 0x15e11c: 0xae0000e4
    ctx->pc = 0x15e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_15e120:
    // 0x15e120: 0x200202d
    ctx->pc = 0x15e120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e124: 0x8c8500e0
    ctx->pc = 0x15e124u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x15e128: 0xc058824
    ctx->pc = 0x15E128u;
    SET_GPR_U32(ctx, 31, 0x15E130u);
    ctx->pc = 0x15E12Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    ctx->pc = 0x162090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162090_0x162090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E130u; }
    }
    if (ctx->pc != 0x15E130u) { return; }
    ctx->pc = 0x15E130u;
    // 0x15e130: 0xdfb00010
    ctx->pc = 0x15e130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15e134:
    // 0x15e134: 0xdfb10018
    ctx->pc = 0x15e134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e138: 0xdfb20020
    ctx->pc = 0x15e138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e13c: 0xdfbf0028
    ctx->pc = 0x15e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e140: 0x3e00008
    ctx->pc = 0x15E140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E0B8u: goto label_15e0b8;
            case 0x15E0BCu: goto label_15e0bc;
            case 0x15E0C4u: goto label_15e0c4;
            case 0x15E118u: goto label_15e118;
            case 0x15E11Cu: goto label_15e11c;
            case 0x15E120u: goto label_15e120;
            case 0x15E134u: goto label_15e134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E148u;
    // 0x15e148: 0x8c8200e4
    ctx->pc = 0x15e148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x15e14c: 0x8c8300e0
    ctx->pc = 0x15e14cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x15e150: 0xacc20000
    ctx->pc = 0x15e150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x15e154: 0x3e00008
    ctx->pc = 0x15E154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E158u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E0B8u: goto label_15e0b8;
            case 0x15E0BCu: goto label_15e0bc;
            case 0x15E0C4u: goto label_15e0c4;
            case 0x15E118u: goto label_15e118;
            case 0x15E11Cu: goto label_15e11c;
            case 0x15E120u: goto label_15e120;
            case 0x15E134u: goto label_15e134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E15Cu;
    // 0x15e15c: 0x0
    ctx->pc = 0x15e15cu;
    // NOP
}
