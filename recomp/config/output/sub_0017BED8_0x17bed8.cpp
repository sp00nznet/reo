#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017BED8
// Address: 0x17bed8 - 0x17c100
void sub_0017BED8_0x17bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17bed8u;

    // 0x17bed8: 0x27bdffd0
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bedc: 0xffb10008
    ctx->pc = 0x17bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bee0: 0x80882d
    ctx->pc = 0x17bee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bee4: 0xffb20010
    ctx->pc = 0x17bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bee8: 0xa0902d
    ctx->pc = 0x17bee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17beec: 0xffb30018
    ctx->pc = 0x17beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17bef0: 0xc0982d
    ctx->pc = 0x17bef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bef4: 0xffb40020
    ctx->pc = 0x17bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17bef8: 0xe0a02d
    ctx->pc = 0x17bef8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17befc: 0xffb00000
    ctx->pc = 0x17befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bf00: 0x240202d
    ctx->pc = 0x17bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf04: 0xffbf0028
    ctx->pc = 0x17bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17bf08: 0x8e220004
    ctx->pc = 0x17bf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bf0c: 0x14400005
    ctx->pc = 0x17BF0Cu;
    {
        const bool branch_taken_0x17bf0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17BF10u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x17bf0c) {
            ctx->pc = 0x17BF24u;
            goto label_17bf24;
        }
    }
    ctx->pc = 0x17BF14u;
    // 0x17bf14: 0x3c050024
    ctx->pc = 0x17bf14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17bf18: 0xc05f386
    ctx->pc = 0x17BF18u;
    SET_GPR_U32(ctx, 31, 0x17BF20u);
    ctx->pc = 0x17BF1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3632));
    ctx->pc = 0x17CE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE18_0x17ce18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BF20u; }
    }
    if (ctx->pc != 0x17BF20u) { return; }
    ctx->pc = 0x17BF20u;
    // 0x17bf20: 0xae220004
    ctx->pc = 0x17bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_17bf24:
    // 0x17bf24: 0x12000014
    ctx->pc = 0x17BF24u;
    {
        const bool branch_taken_0x17bf24 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BF28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bf24) {
            ctx->pc = 0x17BF78u;
            goto label_17bf78;
        }
    }
    ctx->pc = 0x17BF2Cu;
    // 0x17bf2c: 0x2e020003
    ctx->pc = 0x17bf2cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 3));
    // 0x17bf30: 0x54400012
    ctx->pc = 0x17BF30u;
    {
        const bool branch_taken_0x17bf30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17bf30) {
            ctx->pc = 0x17BF34u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x17BF7Cu;
            goto label_17bf7c;
        }
    }
    ctx->pc = 0x17BF38u;
    // 0x17bf38: 0x24020003
    ctx->pc = 0x17bf38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17bf3c: 0x5602000f
    ctx->pc = 0x17BF3Cu;
    {
        const bool branch_taken_0x17bf3c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x17bf3c) {
            ctx->pc = 0x17BF40u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x17BF7Cu;
            goto label_17bf7c;
        }
    }
    ctx->pc = 0x17BF44u;
    // 0x17bf44: 0x220202d
    ctx->pc = 0x17bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf48: 0xdfb10008
    ctx->pc = 0x17bf48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bf4c: 0x240282d
    ctx->pc = 0x17bf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf50: 0xdfb20010
    ctx->pc = 0x17bf50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf54: 0x260302d
    ctx->pc = 0x17bf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf58: 0xdfb30018
    ctx->pc = 0x17bf58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bf5c: 0x280382d
    ctx->pc = 0x17bf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf60: 0xdfb40020
    ctx->pc = 0x17bf60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bf64: 0xdfb00000
    ctx->pc = 0x17bf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf68: 0xdfbf0028
    ctx->pc = 0x17bf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17bf6c: 0x805efea
    ctx->pc = 0x17BF6Cu;
    ctx->pc = 0x17BF70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17BFA8u;
    goto label_17bfa8;
    ctx->pc = 0x17BF74u;
    // 0x17bf74: 0x0
    ctx->pc = 0x17bf74u;
    // NOP
label_17bf78:
    // 0x17bf78: 0xdfb10008
    ctx->pc = 0x17bf78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17bf7c:
    // 0x17bf7c: 0x240282d
    ctx->pc = 0x17bf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf80: 0xdfb20010
    ctx->pc = 0x17bf80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf84: 0x3c060024
    ctx->pc = 0x17bf84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17bf88: 0xdfb00000
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf8c: 0xdfb30018
    ctx->pc = 0x17bf8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bf90: 0x24c60ff0
    ctx->pc = 0x17bf90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4080));
    // 0x17bf94: 0xdfb40020
    ctx->pc = 0x17bf94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bf98: 0xdfbf0028
    ctx->pc = 0x17bf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17bf9c: 0x805f472
    ctx->pc = 0x17BF9Cu;
    ctx->pc = 0x17BFA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17BFA4u;
    // 0x17bfa4: 0x0
    ctx->pc = 0x17bfa4u;
    // NOP
label_17bfa8:
    // 0x17bfa8: 0x27bdfff0
    ctx->pc = 0x17bfa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bfac: 0x80482d
    ctx->pc = 0x17bfacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfb0: 0xffbf0000
    ctx->pc = 0x17bfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bfb4: 0x24020041
    ctx->pc = 0x17bfb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17bfb8: 0xa0502d
    ctx->pc = 0x17bfb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfbc: 0x8d230004
    ctx->pc = 0x17bfbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17bfc0: 0x10620015
    ctx->pc = 0x17BFC0u;
    {
        const bool branch_taken_0x17bfc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BFC4u;
        SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 3), 66));
        if (branch_taken_0x17bfc0) {
            ctx->pc = 0x17C018u;
            goto label_17c018;
        }
    }
    ctx->pc = 0x17BFC8u;
    // 0x17bfc8: 0x1100000b
    ctx->pc = 0x17BFC8u;
    {
        const bool branch_taken_0x17bfc8 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BFCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x17bfc8) {
            ctx->pc = 0x17BFF8u;
            goto label_17bff8;
        }
    }
    ctx->pc = 0x17BFD0u;
    // 0x17bfd0: 0x24020021
    ctx->pc = 0x17bfd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17bfd4: 0x10620010
    ctx->pc = 0x17BFD4u;
    {
        const bool branch_taken_0x17bfd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BFD8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17bfd4) {
            ctx->pc = 0x17C018u;
            goto label_17c018;
        }
    }
    ctx->pc = 0x17BFDCu;
    // 0x17bfdc: 0x5040000f
    ctx->pc = 0x17BFDCu;
    {
        const bool branch_taken_0x17bfdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bfdc) {
            ctx->pc = 0x17BFE0u;
            SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
            ctx->pc = 0x17C01Cu;
            goto label_17c01c;
        }
    }
    ctx->pc = 0x17BFE4u;
    // 0x17bfe4: 0x24020011
    ctx->pc = 0x17bfe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17bfe8: 0x10620006
    ctx->pc = 0x17BFE8u;
    {
        const bool branch_taken_0x17bfe8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BFECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17bfe8) {
            ctx->pc = 0x17C004u;
            goto label_17c004;
        }
    }
    ctx->pc = 0x17BFF0u;
    // 0x17bff0: 0x1000000b
    ctx->pc = 0x17BFF0u;
    {
        const bool branch_taken_0x17bff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BFF4u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17bff0) {
            ctx->pc = 0x17C020u;
            goto label_17c020;
        }
    }
    ctx->pc = 0x17BFF8u;
label_17bff8:
    // 0x17bff8: 0x54620008
    ctx->pc = 0x17BFF8u;
    {
        const bool branch_taken_0x17bff8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17bff8) {
            ctx->pc = 0x17BFFCu;
            SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
            ctx->pc = 0x17C01Cu;
            goto label_17c01c;
        }
    }
    ctx->pc = 0x17C000u;
    // 0x17c000: 0xdfbf0000
    ctx->pc = 0x17c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c004:
    // 0x17c004: 0x120202d
    ctx->pc = 0x17c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c008: 0x140282d
    ctx->pc = 0x17c008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c00c: 0x805f00c
    ctx->pc = 0x17C00Cu;
    ctx->pc = 0x17C010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17C030u;
    goto label_17c030;
    ctx->pc = 0x17C014u;
    // 0x17c014: 0x0
    ctx->pc = 0x17c014u;
    // NOP
label_17c018:
    // 0x17c018: 0x3c060024
    ctx->pc = 0x17c018u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_17c01c:
    // 0x17c01c: 0xdfbf0000
    ctx->pc = 0x17c01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c020:
    // 0x17c020: 0x24c61028
    ctx->pc = 0x17c020u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4136));
    // 0x17c024: 0x805f472
    ctx->pc = 0x17C024u;
    ctx->pc = 0x17C028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C02Cu;
    // 0x17c02c: 0x0
    ctx->pc = 0x17c02cu;
    // NOP
label_17c030:
    // 0x17c030: 0x27bdffb0
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c034: 0x24ad0004
    ctx->pc = 0x17c034u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 4));
    // 0x17c038: 0xffb00020
    ctx->pc = 0x17c038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17c03c: 0x24a90024
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 36));
    // 0x17c040: 0xffb10028
    ctx->pc = 0x17c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17c044: 0x80182d
    ctx->pc = 0x17c044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c048: 0xffb20030
    ctx->pc = 0x17c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17c04c: 0xe0902d
    ctx->pc = 0x17c04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c050: 0xffb30038
    ctx->pc = 0x17c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x17c054: 0xc0982d
    ctx->pc = 0x17c054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c058: 0xffbf0040
    ctx->pc = 0x17c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17c05c: 0x24a50014
    ctx->pc = 0x17c05cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x17c060: 0x8daa0004
    ctx->pc = 0x17c060u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x17c064: 0x8cac0004
    ctx->pc = 0x17c064u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17c068: 0x8ca70000
    ctx->pc = 0x17c068u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c06c: 0x140882d
    ctx->pc = 0x17c06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c070: 0x8c620008
    ctx->pc = 0x17c070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c074: 0x8c65000c
    ctx->pc = 0x17c074u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17c078: 0x8d2b0004
    ctx->pc = 0x17c078u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17c07c: 0x42880b
    ctx->pc = 0x17c07cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x17c080: 0x8da60000
    ctx->pc = 0x17c080u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x17c084: 0xa0802d
    ctx->pc = 0x17c084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c088: 0x8d280000
    ctx->pc = 0x17c088u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17c08c: 0xafac0010
    ctx->pc = 0x17c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x17c090: 0xafa60000
    ctx->pc = 0x17c090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x17c094: 0xafa70004
    ctx->pc = 0x17c094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x17c098: 0xafa80008
    ctx->pc = 0x17c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x17c09c: 0xafab0014
    ctx->pc = 0x17c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x17c0a0: 0x14a00002
    ctx->pc = 0x17C0A0u;
    {
        const bool branch_taken_0x17c0a0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C0A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
        if (branch_taken_0x17c0a0) {
            ctx->pc = 0x17C0ACu;
            goto label_17c0ac;
        }
    }
    ctx->pc = 0x17C0A8u;
    // 0x17c0a8: 0x8db00008
    ctx->pc = 0x17c0a8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_17c0ac:
    // 0x17c0ac: 0xc05eb6a
    ctx->pc = 0x17C0ACu;
    SET_GPR_U32(ctx, 31, 0x17C0B4u);
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ADA8_0x17ada8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0B4u; }
    }
    if (ctx->pc != 0x17C0B4u) { return; }
    ctx->pc = 0x17C0B4u;
    // 0x17c0b4: 0x24030001
    ctx->pc = 0x17c0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c0b8: 0x14430004
    ctx->pc = 0x17C0B8u;
    {
        const bool branch_taken_0x17c0b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17C0BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c0b8) {
            ctx->pc = 0x17C0CCu;
            goto label_17c0cc;
        }
    }
    ctx->pc = 0x17C0C0u;
    // 0x17c0c0: 0x1017c2
    ctx->pc = 0x17c0c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 31));
    // 0x17c0c4: 0x2021021
    ctx->pc = 0x17c0c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17c0c8: 0x28043
    ctx->pc = 0x17c0c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_17c0cc:
    // 0x17c0cc: 0x260282d
    ctx->pc = 0x17c0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0d0: 0x240302d
    ctx->pc = 0x17c0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0d4: 0x220382d
    ctx->pc = 0x17c0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0d8: 0xc0524a2
    ctx->pc = 0x17C0D8u;
    SET_GPR_U32(ctx, 31, 0x17C0E0u);
    ctx->pc = 0x17C0DCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149288u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00149288_0x149288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0E0u; }
    }
    if (ctx->pc != 0x17C0E0u) { return; }
    ctx->pc = 0x17C0E0u;
    // 0x17c0e0: 0xdfb00020
    ctx->pc = 0x17c0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c0e4: 0xdfb10028
    ctx->pc = 0x17c0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c0e8: 0xdfb20030
    ctx->pc = 0x17c0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c0ec: 0xdfb30038
    ctx->pc = 0x17c0ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c0f0: 0xdfbf0040
    ctx->pc = 0x17c0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c0f4: 0x3e00008
    ctx->pc = 0x17C0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BF24u: goto label_17bf24;
            case 0x17BF78u: goto label_17bf78;
            case 0x17BF7Cu: goto label_17bf7c;
            case 0x17BFA8u: goto label_17bfa8;
            case 0x17BFF8u: goto label_17bff8;
            case 0x17C004u: goto label_17c004;
            case 0x17C018u: goto label_17c018;
            case 0x17C01Cu: goto label_17c01c;
            case 0x17C020u: goto label_17c020;
            case 0x17C030u: goto label_17c030;
            case 0x17C0ACu: goto label_17c0ac;
            case 0x17C0CCu: goto label_17c0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C0FCu;
    // 0x17c0fc: 0x0
    ctx->pc = 0x17c0fcu;
    // NOP
}
