#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A52D0
// Address: 0x1a52d0 - 0x1a5570
void sub_001A52D0_0x1a52d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a52d0u;

    // 0x1a52d0: 0x27bdffc0
    ctx->pc = 0x1a52d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a52d4: 0xffbf0030
    ctx->pc = 0x1a52d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a52d8: 0x7fb20020
    ctx->pc = 0x1a52d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a52dc: 0x7fb10010
    ctx->pc = 0x1a52dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a52e0: 0x7fb00000
    ctx->pc = 0x1a52e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a52e4: 0xa0882d
    ctx->pc = 0x1a52e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a52e8: 0x80802d
    ctx->pc = 0x1a52e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a52ec: 0xc0695ec
    ctx->pc = 0x1A52ECu;
    SET_GPR_U32(ctx, 31, 0x1A52F4u);
    ctx->pc = 0x1A52F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A57B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A57B0_0x1a57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52F4u; }
    }
    if (ctx->pc != 0x1A52F4u) { return; }
    ctx->pc = 0x1A52F4u;
    // 0x1a52f4: 0x14400003
    ctx->pc = 0x1A52F4u;
    {
        const bool branch_taken_0x1a52f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A52F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a52f4) {
            ctx->pc = 0x1A5304u;
            goto label_1a5304;
        }
    }
    ctx->pc = 0x1A52FCu;
    // 0x1a52fc: 0x10000096
    ctx->pc = 0x1A52FCu;
    {
        const bool branch_taken_0x1a52fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5300u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a52fc) {
            ctx->pc = 0x1A5558u;
            goto label_1a5558;
        }
    }
    ctx->pc = 0x1A5304u;
label_1a5304:
    // 0x1a5304: 0xc069630
    ctx->pc = 0x1A5304u;
    SET_GPR_U32(ctx, 31, 0x1A530Cu);
    ctx->pc = 0x1A5308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A58C0_0x1a58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A530Cu; }
    }
    if (ctx->pc != 0x1A530Cu) { return; }
    ctx->pc = 0x1A530Cu;
    // 0x1a530c: 0x90430011
    ctx->pc = 0x1a530cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a5310: 0x28610008
    ctx->pc = 0x1a5310u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1a5314: 0x14200003
    ctx->pc = 0x1A5314u;
    {
        const bool branch_taken_0x1a5314 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5314) {
            ctx->pc = 0x1A5324u;
            goto label_1a5324;
        }
    }
    ctx->pc = 0x1A531Cu;
    // 0x1a531c: 0x1000008e
    ctx->pc = 0x1A531Cu;
    {
        const bool branch_taken_0x1a531c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5320u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a531c) {
            ctx->pc = 0x1A5558u;
            goto label_1a5558;
        }
    }
    ctx->pc = 0x1A5324u;
label_1a5324:
    // 0x1a5324: 0x944c0014
    ctx->pc = 0x1a5324u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a5328: 0x682d
    ctx->pc = 0x1a5328u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a532c: 0x944b0016
    ctx->pc = 0x1a532cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1a5330: 0x24060004
    ctx->pc = 0x1a5330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5334: 0x24070005
    ctx->pc = 0x1a5334u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a5338: 0x24080001
    ctx->pc = 0x1a5338u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a533c: 0x24090002
    ctx->pc = 0x1a533cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5340: 0x240a0003
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a5344: 0x24120008
    ctx->pc = 0x1a5344u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a5348: 0x24110010
    ctx->pc = 0x1a5348u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a534c: 0x241900ff
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5350: 0x240f0018
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a5354: 0x2405000a
    ctx->pc = 0x1a5354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a5358: 0x2404001f
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a535c: 0x10000079
    ctx->pc = 0x1A535Cu;
    {
        const bool branch_taken_0x1a535c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5360u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1a535c) {
            ctx->pc = 0x1A5544u;
            goto label_1a5544;
        }
    }
    ctx->pc = 0x1A5364u;
label_1a5364:
    // 0x1a5364: 0xae000000
    ctx->pc = 0x1a5364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a5368: 0xae0c0004
    ctx->pc = 0x1a5368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 12));
    // 0x1a536c: 0xae0b0008
    ctx->pc = 0x1a536cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
    // 0x1a5370: 0x904e0013
    ctx->pc = 0x1a5370u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1a5374: 0x11ca005c
    ctx->pc = 0x1A5374u;
    {
        const bool branch_taken_0x1a5374 = (GPR_U32(ctx, 14) == GPR_U32(ctx, 10));
        if (branch_taken_0x1a5374) {
            ctx->pc = 0x1A54E8u;
            goto label_1a54e8;
        }
    }
    ctx->pc = 0x1A537Cu;
    // 0x1a537c: 0x11c90046
    ctx->pc = 0x1A537Cu;
    {
        const bool branch_taken_0x1a537c = (GPR_U32(ctx, 14) == GPR_U32(ctx, 9));
        if (branch_taken_0x1a537c) {
            ctx->pc = 0x1A5498u;
            goto label_1a5498;
        }
    }
    ctx->pc = 0x1A5384u;
    // 0x1a5384: 0x11c80030
    ctx->pc = 0x1A5384u;
    {
        const bool branch_taken_0x1a5384 = (GPR_U32(ctx, 14) == GPR_U32(ctx, 8));
        if (branch_taken_0x1a5384) {
            ctx->pc = 0x1A5448u;
            goto label_1a5448;
        }
    }
    ctx->pc = 0x1A538Cu;
    // 0x1a538c: 0x11c70019
    ctx->pc = 0x1A538Cu;
    {
        const bool branch_taken_0x1a538c = (GPR_U32(ctx, 14) == GPR_U32(ctx, 7));
        if (branch_taken_0x1a538c) {
            ctx->pc = 0x1A53F4u;
            goto label_1a53f4;
        }
    }
    ctx->pc = 0x1A5394u;
    // 0x1a5394: 0x11c60003
    ctx->pc = 0x1A5394u;
    {
        const bool branch_taken_0x1a5394 = (GPR_U32(ctx, 14) == GPR_U32(ctx, 6));
        if (branch_taken_0x1a5394) {
            ctx->pc = 0x1A53A4u;
            goto label_1a53a4;
        }
    }
    ctx->pc = 0x1A539Cu;
    // 0x1a539c: 0x10000066
    ctx->pc = 0x1A539Cu;
    {
        const bool branch_taken_0x1a539c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A53A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 72));
        if (branch_taken_0x1a539c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A53A4u;
label_1a53a4:
    // 0x1a53a4: 0x8e0e0000
    ctx->pc = 0x1a53a4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a53a8: 0x35ce0014
    ctx->pc = 0x1a53a8u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 20));
    // 0x1a53ac: 0xae0e0000
    ctx->pc = 0x1a53acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x1a53b0: 0xae000014
    ctx->pc = 0x1a53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a53b4: 0x8e0e0004
    ctx->pc = 0x1a53b4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a53b8: 0xe7043
    ctx->pc = 0x1a53b8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 1));
    // 0x1a53bc: 0xae0e000c
    ctx->pc = 0x1a53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1a53c0: 0xae00001c
    ctx->pc = 0x1a53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a53c4: 0xae000018
    ctx->pc = 0x1a53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a53c8: 0xae000020
    ctx->pc = 0x1a53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a53cc: 0xae000028
    ctx->pc = 0x1a53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a53d0: 0xae000024
    ctx->pc = 0x1a53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a53d4: 0xae00002c
    ctx->pc = 0x1a53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a53d8: 0xae000034
    ctx->pc = 0x1a53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a53dc: 0xae000030
    ctx->pc = 0x1a53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1a53e0: 0xae000038
    ctx->pc = 0x1a53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a53e4: 0xae000040
    ctx->pc = 0x1a53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1a53e8: 0xae00003c
    ctx->pc = 0x1a53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1a53ec: 0x10000051
    ctx->pc = 0x1A53ECu;
    {
        const bool branch_taken_0x1a53ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A53F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x1a53ec) {
            ctx->pc = 0x1A5534u;
            goto label_1a5534;
        }
    }
    ctx->pc = 0x1A53F4u;
label_1a53f4:
    // 0x1a53f4: 0x8e0e0000
    ctx->pc = 0x1a53f4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a53f8: 0x35ce0004
    ctx->pc = 0x1a53f8u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 4));
    // 0x1a53fc: 0xae0e0000
    ctx->pc = 0x1a53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x1a5400: 0xae080014
    ctx->pc = 0x1a5400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x1a5404: 0x8e180014
    ctx->pc = 0x1a5404u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a5408: 0x8e0e0004
    ctx->pc = 0x1a5408u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a540c: 0x30e7018
    ctx->pc = 0x1a540cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x1a5410: 0xae0e000c
    ctx->pc = 0x1a5410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1a5414: 0xae00001c
    ctx->pc = 0x1a5414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a5418: 0xae000018
    ctx->pc = 0x1a5418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a541c: 0xae000020
    ctx->pc = 0x1a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a5420: 0xae000028
    ctx->pc = 0x1a5420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a5424: 0xae000024
    ctx->pc = 0x1a5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a5428: 0xae00002c
    ctx->pc = 0x1a5428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a542c: 0xae000034
    ctx->pc = 0x1a542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a5430: 0xae000030
    ctx->pc = 0x1a5430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1a5434: 0xae000038
    ctx->pc = 0x1a5434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a5438: 0xae000040
    ctx->pc = 0x1a5438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1a543c: 0xae00003c
    ctx->pc = 0x1a543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1a5440: 0x1000003c
    ctx->pc = 0x1A5440u;
    {
        const bool branch_taken_0x1a5440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5444u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x1a5440) {
            ctx->pc = 0x1A5534u;
            goto label_1a5534;
        }
    }
    ctx->pc = 0x1A5448u;
label_1a5448:
    // 0x1a5448: 0xae090014
    ctx->pc = 0x1a5448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 9));
    // 0x1a544c: 0x8e180014
    ctx->pc = 0x1a544cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a5450: 0x8e0e0004
    ctx->pc = 0x1a5450u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5454: 0x30e7018
    ctx->pc = 0x1a5454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x1a5458: 0xae0e000c
    ctx->pc = 0x1a5458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1a545c: 0xae070018
    ctx->pc = 0x1a545cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x1a5460: 0xae05001c
    ctx->pc = 0x1a5460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1a5464: 0xae040020
    ctx->pc = 0x1a5464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1a5468: 0xae070024
    ctx->pc = 0x1a5468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
    // 0x1a546c: 0xae070028
    ctx->pc = 0x1a546cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x1a5470: 0xae04002c
    ctx->pc = 0x1a5470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1a5474: 0xae070030
    ctx->pc = 0x1a5474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x1a5478: 0xae000034
    ctx->pc = 0x1a5478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a547c: 0xae040038
    ctx->pc = 0x1a547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1a5480: 0xae08003c
    ctx->pc = 0x1a5480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
    // 0x1a5484: 0xae030040
    ctx->pc = 0x1a5484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1a5488: 0xae080044
    ctx->pc = 0x1a5488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 8));
    // 0x1a548c: 0xae00001c
    ctx->pc = 0x1a548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a5490: 0x10000028
    ctx->pc = 0x1A5490u;
    {
        const bool branch_taken_0x1a5490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5494u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
        if (branch_taken_0x1a5490) {
            ctx->pc = 0x1A5534u;
            goto label_1a5534;
        }
    }
    ctx->pc = 0x1A5498u;
label_1a5498:
    // 0x1a5498: 0xae0a0014
    ctx->pc = 0x1a5498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
    // 0x1a549c: 0x8e180014
    ctx->pc = 0x1a549cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a54a0: 0x8e0e0004
    ctx->pc = 0x1a54a0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a54a4: 0x30e7018
    ctx->pc = 0x1a54a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x1a54a8: 0xae0e000c
    ctx->pc = 0x1a54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1a54ac: 0xae120018
    ctx->pc = 0x1a54acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x1a54b0: 0xae11001c
    ctx->pc = 0x1a54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1a54b4: 0xae190020
    ctx->pc = 0x1a54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 25));
    // 0x1a54b8: 0xae120024
    ctx->pc = 0x1a54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1a54bc: 0xae120028
    ctx->pc = 0x1a54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x1a54c0: 0xae19002c
    ctx->pc = 0x1a54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 25));
    // 0x1a54c4: 0xae120030
    ctx->pc = 0x1a54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x1a54c8: 0xae000034
    ctx->pc = 0x1a54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a54cc: 0xae190038
    ctx->pc = 0x1a54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 25));
    // 0x1a54d0: 0xae00003c
    ctx->pc = 0x1a54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1a54d4: 0xae000040
    ctx->pc = 0x1a54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1a54d8: 0xae000044
    ctx->pc = 0x1a54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a54dc: 0xae00001c
    ctx->pc = 0x1a54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a54e0: 0x10000014
    ctx->pc = 0x1A54E0u;
    {
        const bool branch_taken_0x1a54e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A54E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
        if (branch_taken_0x1a54e0) {
            ctx->pc = 0x1A5534u;
            goto label_1a5534;
        }
    }
    ctx->pc = 0x1A54E8u;
label_1a54e8:
    // 0x1a54e8: 0xae060014
    ctx->pc = 0x1a54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x1a54ec: 0x8e180014
    ctx->pc = 0x1a54ecu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a54f0: 0x8e0e0004
    ctx->pc = 0x1a54f0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a54f4: 0x30e7018
    ctx->pc = 0x1a54f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x1a54f8: 0xae0e000c
    ctx->pc = 0x1a54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1a54fc: 0xae120018
    ctx->pc = 0x1a54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x1a5500: 0xae11001c
    ctx->pc = 0x1a5500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1a5504: 0xae190020
    ctx->pc = 0x1a5504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 25));
    // 0x1a5508: 0xae120024
    ctx->pc = 0x1a5508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1a550c: 0xae120028
    ctx->pc = 0x1a550cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x1a5510: 0xae19002c
    ctx->pc = 0x1a5510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 25));
    // 0x1a5514: 0xae120030
    ctx->pc = 0x1a5514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x1a5518: 0xae000034
    ctx->pc = 0x1a5518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1a551c: 0xae190038
    ctx->pc = 0x1a551cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 25));
    // 0x1a5520: 0xae12003c
    ctx->pc = 0x1a5520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x1a5524: 0xae0f0040
    ctx->pc = 0x1a5524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 15));
    // 0x1a5528: 0xae190044
    ctx->pc = 0x1a5528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 25));
    // 0x1a552c: 0xae00001c
    ctx->pc = 0x1a552cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a5530: 0xae110034
    ctx->pc = 0x1a5530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_1a5534:
    // 0x1a5534: 0x26100048
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 72));
label_1a5538:
    // 0x1a5538: 0xc6043
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
    // 0x1a553c: 0xb5843
    ctx->pc = 0x1a553cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x1a5540: 0x25ad0001
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_1a5544:
    // 0x1a5544: 0x904e0011
    ctx->pc = 0x1a5544u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a5548: 0x1ae702a
    ctx->pc = 0x1a5548u;
    SET_GPR_U32(ctx, 14, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 14)));
    // 0x1a554c: 0x15c0ff85
    ctx->pc = 0x1A554Cu;
    {
        const bool branch_taken_0x1a554c = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a554c) {
            ctx->pc = 0x1A5364u;
            goto label_1a5364;
        }
    }
    ctx->pc = 0x1A5554u;
    // 0x1a5554: 0x24020001
    ctx->pc = 0x1a5554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a5558:
    // 0x1a5558: 0xdfbf0030
    ctx->pc = 0x1a5558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a555c: 0x7bb20020
    ctx->pc = 0x1a555cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5560: 0x7bb10010
    ctx->pc = 0x1a5560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5564: 0x7bb00000
    ctx->pc = 0x1a5564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5568: 0x3e00008
    ctx->pc = 0x1A5568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A556Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5304u: goto label_1a5304;
            case 0x1A5324u: goto label_1a5324;
            case 0x1A5364u: goto label_1a5364;
            case 0x1A53A4u: goto label_1a53a4;
            case 0x1A53F4u: goto label_1a53f4;
            case 0x1A5448u: goto label_1a5448;
            case 0x1A5498u: goto label_1a5498;
            case 0x1A54E8u: goto label_1a54e8;
            case 0x1A5534u: goto label_1a5534;
            case 0x1A5538u: goto label_1a5538;
            case 0x1A5544u: goto label_1a5544;
            case 0x1A5558u: goto label_1a5558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5570u;
}
