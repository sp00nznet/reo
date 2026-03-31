#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017BB70
// Address: 0x17bb70 - 0x17be88
void sub_0017BB70_0x17bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17bb70u;

    // 0x17bb70: 0x27bdffd0
    ctx->pc = 0x17bb70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bb74: 0xffb10008
    ctx->pc = 0x17bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bb78: 0x80882d
    ctx->pc = 0x17bb78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb7c: 0xffb20010
    ctx->pc = 0x17bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bb80: 0xa0902d
    ctx->pc = 0x17bb80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb84: 0xffb30018
    ctx->pc = 0x17bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17bb88: 0xc0982d
    ctx->pc = 0x17bb88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb8c: 0xffb00000
    ctx->pc = 0x17bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bb90: 0x240202d
    ctx->pc = 0x17bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb94: 0xffbf0020
    ctx->pc = 0x17bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17bb98: 0x8e220004
    ctx->pc = 0x17bb98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bb9c: 0x14400005
    ctx->pc = 0x17BB9Cu;
    {
        const bool branch_taken_0x17bb9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17BBA0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x17bb9c) {
            ctx->pc = 0x17BBB4u;
            goto label_17bbb4;
        }
    }
    ctx->pc = 0x17BBA4u;
    // 0x17bba4: 0x3c050024
    ctx->pc = 0x17bba4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17bba8: 0xc05f386
    ctx->pc = 0x17BBA8u;
    SET_GPR_U32(ctx, 31, 0x17BBB0u);
    ctx->pc = 0x17BBACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3632));
    ctx->pc = 0x17CE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE18_0x17ce18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBB0u; }
    }
    if (ctx->pc != 0x17BBB0u) { return; }
    ctx->pc = 0x17BBB0u;
    // 0x17bbb0: 0xae220004
    ctx->pc = 0x17bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_17bbb4:
    // 0x17bbb4: 0x12000012
    ctx->pc = 0x17BBB4u;
    {
        const bool branch_taken_0x17bbb4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BBB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bbb4) {
            ctx->pc = 0x17BC00u;
            goto label_17bc00;
        }
    }
    ctx->pc = 0x17BBBCu;
    // 0x17bbbc: 0x2e020003
    ctx->pc = 0x17bbbcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 3));
    // 0x17bbc0: 0x54400010
    ctx->pc = 0x17BBC0u;
    {
        const bool branch_taken_0x17bbc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17bbc0) {
            ctx->pc = 0x17BBC4u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x17BC04u;
            goto label_17bc04;
        }
    }
    ctx->pc = 0x17BBC8u;
    // 0x17bbc8: 0x24020003
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17bbcc: 0x5602000d
    ctx->pc = 0x17BBCCu;
    {
        const bool branch_taken_0x17bbcc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x17bbcc) {
            ctx->pc = 0x17BBD0u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x17BC04u;
            goto label_17bc04;
        }
    }
    ctx->pc = 0x17BBD4u;
    // 0x17bbd4: 0x220202d
    ctx->pc = 0x17bbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbd8: 0xdfb10008
    ctx->pc = 0x17bbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bbdc: 0x240282d
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbe0: 0xdfb20010
    ctx->pc = 0x17bbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbe4: 0x260302d
    ctx->pc = 0x17bbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbe8: 0xdfb30018
    ctx->pc = 0x17bbe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bbec: 0xdfb00000
    ctx->pc = 0x17bbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbf0: 0xdfbf0020
    ctx->pc = 0x17bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bbf4: 0x805ef0a
    ctx->pc = 0x17BBF4u;
    ctx->pc = 0x17BBF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17BC28u;
    goto label_17bc28;
    ctx->pc = 0x17BBFCu;
    // 0x17bbfc: 0x0
    ctx->pc = 0x17bbfcu;
    // NOP
label_17bc00:
    // 0x17bc00: 0xdfb10008
    ctx->pc = 0x17bc00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17bc04:
    // 0x17bc04: 0x240282d
    ctx->pc = 0x17bc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc08: 0xdfb20010
    ctx->pc = 0x17bc08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bc0c: 0x3c060024
    ctx->pc = 0x17bc0cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17bc10: 0xdfb00000
    ctx->pc = 0x17bc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bc14: 0xdfb30018
    ctx->pc = 0x17bc14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bc18: 0x24c60f88
    ctx->pc = 0x17bc18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3976));
    // 0x17bc1c: 0xdfbf0020
    ctx->pc = 0x17bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bc20: 0x805f472
    ctx->pc = 0x17BC20u;
    ctx->pc = 0x17BC24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17BC28u;
label_17bc28:
    // 0x17bc28: 0x27bdffe0
    ctx->pc = 0x17bc28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bc2c: 0x24020041
    ctx->pc = 0x17bc2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17bc30: 0xffb00000
    ctx->pc = 0x17bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bc34: 0x80802d
    ctx->pc = 0x17bc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc38: 0xffb10008
    ctx->pc = 0x17bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bc3c: 0xa0882d
    ctx->pc = 0x17bc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc40: 0xffb20010
    ctx->pc = 0x17bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bc44: 0xffbf0018
    ctx->pc = 0x17bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17bc48: 0x8e030004
    ctx->pc = 0x17bc48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17bc4c: 0x10620048
    ctx->pc = 0x17BC4Cu;
    {
        const bool branch_taken_0x17bc4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BC50u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bc4c) {
            ctx->pc = 0x17BD70u;
            goto label_17bd70;
        }
    }
    ctx->pc = 0x17BC54u;
    // 0x17bc54: 0x28620042
    ctx->pc = 0x17bc54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17bc58: 0x1040000b
    ctx->pc = 0x17BC58u;
    {
        const bool branch_taken_0x17bc58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BC5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x17bc58) {
            ctx->pc = 0x17BC88u;
            goto label_17bc88;
        }
    }
    ctx->pc = 0x17BC60u;
    // 0x17bc60: 0x24020021
    ctx->pc = 0x17bc60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17bc64: 0x10620042
    ctx->pc = 0x17BC64u;
    {
        const bool branch_taken_0x17bc64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BC68u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17bc64) {
            ctx->pc = 0x17BD70u;
            goto label_17bd70;
        }
    }
    ctx->pc = 0x17BC6Cu;
    // 0x17bc6c: 0x50400041
    ctx->pc = 0x17BC6Cu;
    {
        const bool branch_taken_0x17bc6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bc6c) {
            ctx->pc = 0x17BC70u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17BD74u;
            goto label_17bd74;
        }
    }
    ctx->pc = 0x17BC74u;
    // 0x17bc74: 0x24020011
    ctx->pc = 0x17bc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17bc78: 0x1062000d
    ctx->pc = 0x17BC78u;
    {
        const bool branch_taken_0x17bc78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17bc78) {
            ctx->pc = 0x17BCB0u;
            goto label_17bcb0;
        }
    }
    ctx->pc = 0x17BC80u;
    // 0x17bc80: 0x1000003c
    ctx->pc = 0x17BC80u;
    {
        const bool branch_taken_0x17bc80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BC84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bc80) {
            ctx->pc = 0x17BD74u;
            goto label_17bd74;
        }
    }
    ctx->pc = 0x17BC88u;
label_17bc88:
    // 0x17bc88: 0x10620025
    ctx->pc = 0x17BC88u;
    {
        const bool branch_taken_0x17bc88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BC8Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 258));
        if (branch_taken_0x17bc88) {
            ctx->pc = 0x17BD20u;
            goto label_17bd20;
        }
    }
    ctx->pc = 0x17BC90u;
    // 0x17bc90: 0x54400038
    ctx->pc = 0x17BC90u;
    {
        const bool branch_taken_0x17bc90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17bc90) {
            ctx->pc = 0x17BC94u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17BD74u;
            goto label_17bd74;
        }
    }
    ctx->pc = 0x17BC98u;
    // 0x17bc98: 0x24021001
    ctx->pc = 0x17bc98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4097));
    // 0x17bc9c: 0x10620028
    ctx->pc = 0x17BC9Cu;
    {
        const bool branch_taken_0x17bc9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17bc9c) {
            ctx->pc = 0x17BD40u;
            goto label_17bd40;
        }
    }
    ctx->pc = 0x17BCA4u;
    // 0x17bca4: 0x10000033
    ctx->pc = 0x17BCA4u;
    {
        const bool branch_taken_0x17bca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BCA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bca4) {
            ctx->pc = 0x17BD74u;
            goto label_17bd74;
        }
    }
    ctx->pc = 0x17BCACu;
    // 0x17bcac: 0x0
    ctx->pc = 0x17bcacu;
    // NOP
label_17bcb0:
    // 0x17bcb0: 0xc05f51a
    ctx->pc = 0x17BCB0u;
    SET_GPR_U32(ctx, 31, 0x17BCB8u);
    ctx->pc = 0x17D468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D468_0x17d468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCB8u; }
    }
    if (ctx->pc != 0x17BCB8u) { return; }
    ctx->pc = 0x17BCB8u;
    // 0x17bcb8: 0x24030001
    ctx->pc = 0x17bcb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bcbc: 0x1043000a
    ctx->pc = 0x17BCBCu;
    {
        const bool branch_taken_0x17bcbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17BCC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bcbc) {
            ctx->pc = 0x17BCE8u;
            goto label_17bce8;
        }
    }
    ctx->pc = 0x17BCC4u;
    // 0x17bcc4: 0xdfb00000
    ctx->pc = 0x17bcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bcc8: 0x220282d
    ctx->pc = 0x17bcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bccc: 0xdfb10008
    ctx->pc = 0x17bcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bcd0: 0x240302d
    ctx->pc = 0x17bcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcd4: 0xdfb20010
    ctx->pc = 0x17bcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bcd8: 0xdfbf0018
    ctx->pc = 0x17bcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bcdc: 0x382d
    ctx->pc = 0x17bcdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bce0: 0x805ef66
    ctx->pc = 0x17BCE0u;
    ctx->pc = 0x17BCE4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BD98u;
    goto label_17bd98;
    ctx->pc = 0x17BCE8u;
label_17bce8:
    // 0x17bce8: 0x220282d
    ctx->pc = 0x17bce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcec: 0xc05f164
    ctx->pc = 0x17BCECu;
    SET_GPR_U32(ctx, 31, 0x17BCF4u);
    ctx->pc = 0x17BCF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCF4u; }
    }
    if (ctx->pc != 0x17BCF4u) { return; }
    ctx->pc = 0x17BCF4u;
    // 0x17bcf4: 0x200202d
    ctx->pc = 0x17bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcf8: 0x220282d
    ctx->pc = 0x17bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcfc: 0xdfb10008
    ctx->pc = 0x17bcfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd00: 0x240302d
    ctx->pc = 0x17bd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd04: 0xdfb20010
    ctx->pc = 0x17bd04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd08: 0xdfb00000
    ctx->pc = 0x17bd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd0c: 0x24070001
    ctx->pc = 0x17bd0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bd10: 0xdfbf0018
    ctx->pc = 0x17bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd14: 0x805ef66
    ctx->pc = 0x17BD14u;
    ctx->pc = 0x17BD18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BD98u;
    goto label_17bd98;
    ctx->pc = 0x17BD1Cu;
    // 0x17bd1c: 0x0
    ctx->pc = 0x17bd1cu;
    // NOP
label_17bd20:
    // 0x17bd20: 0xdfb00000
    ctx->pc = 0x17bd20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd24: 0x382d
    ctx->pc = 0x17bd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd28: 0xdfb10008
    ctx->pc = 0x17bd28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd2c: 0xdfb20010
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd30: 0xdfbf0018
    ctx->pc = 0x17bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd34: 0x805ef66
    ctx->pc = 0x17BD34u;
    ctx->pc = 0x17BD38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BD98u;
    goto label_17bd98;
    ctx->pc = 0x17BD3Cu;
    // 0x17bd3c: 0x0
    ctx->pc = 0x17bd3cu;
    // NOP
label_17bd40:
    // 0x17bd40: 0xc05f164
    ctx->pc = 0x17BD40u;
    SET_GPR_U32(ctx, 31, 0x17BD48u);
    ctx->pc = 0x17BD44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD48u; }
    }
    if (ctx->pc != 0x17BD48u) { return; }
    ctx->pc = 0x17BD48u;
    // 0x17bd48: 0x200202d
    ctx->pc = 0x17bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd4c: 0x220282d
    ctx->pc = 0x17bd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd50: 0xdfb10008
    ctx->pc = 0x17bd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd54: 0x240302d
    ctx->pc = 0x17bd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd58: 0xdfb20010
    ctx->pc = 0x17bd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd5c: 0xdfb00000
    ctx->pc = 0x17bd5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd60: 0x24070001
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bd64: 0xdfbf0018
    ctx->pc = 0x17bd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd68: 0x805ef66
    ctx->pc = 0x17BD68u;
    ctx->pc = 0x17BD6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BD98u;
    goto label_17bd98;
    ctx->pc = 0x17BD70u;
label_17bd70:
    // 0x17bd70: 0x200202d
    ctx->pc = 0x17bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bd74:
    // 0x17bd74: 0xdfb00000
    ctx->pc = 0x17bd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd78: 0x220282d
    ctx->pc = 0x17bd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd7c: 0xdfb10008
    ctx->pc = 0x17bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd80: 0x3c060024
    ctx->pc = 0x17bd80u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17bd84: 0xdfb20010
    ctx->pc = 0x17bd84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd88: 0xdfbf0018
    ctx->pc = 0x17bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd8c: 0x24c60fc0
    ctx->pc = 0x17bd8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4032));
    // 0x17bd90: 0x805f472
    ctx->pc = 0x17BD90u;
    ctx->pc = 0x17BD94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17BD98u;
label_17bd98:
    // 0x17bd98: 0x27bdff90
    ctx->pc = 0x17bd98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17bd9c: 0xffb00040
    ctx->pc = 0x17bd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17bda0: 0xa0802d
    ctx->pc = 0x17bda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bda4: 0xffb10048
    ctx->pc = 0x17bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17bda8: 0x26110004
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17bdac: 0xffb20050
    ctx->pc = 0x17bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17bdb0: 0x80902d
    ctx->pc = 0x17bdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdb4: 0xffb30058
    ctx->pc = 0x17bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17bdb8: 0xe0982d
    ctx->pc = 0x17bdb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdbc: 0xffbf0060
    ctx->pc = 0x17bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17bdc0: 0x26020014
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17bdc4: 0xafa60020
    ctx->pc = 0x17bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x17bdc8: 0x26030024
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 36));
    // 0x17bdcc: 0x8c480004
    ctx->pc = 0x17bdccu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17bdd0: 0x8c690004
    ctx->pc = 0x17bdd0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17bdd4: 0x8c450000
    ctx->pc = 0x17bdd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bdd8: 0x8c660000
    ctx->pc = 0x17bdd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bddc: 0x8e220004
    ctx->pc = 0x17bddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bde0: 0x8e030044
    ctx->pc = 0x17bde0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17bde4: 0x8e270000
    ctx->pc = 0x17bde4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17bde8: 0xafa30024
    ctx->pc = 0x17bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x17bdec: 0xafa70000
    ctx->pc = 0x17bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x17bdf0: 0xafa50004
    ctx->pc = 0x17bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x17bdf4: 0xafa60008
    ctx->pc = 0x17bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x17bdf8: 0xafa2000c
    ctx->pc = 0x17bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x17bdfc: 0xafa80010
    ctx->pc = 0x17bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x17be00: 0xc05eb6a
    ctx->pc = 0x17BE00u;
    SET_GPR_U32(ctx, 31, 0x17BE08u);
    ctx->pc = 0x17BE04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ADA8_0x17ada8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE08u; }
    }
    if (ctx->pc != 0x17BE08u) { return; }
    ctx->pc = 0x17BE08u;
    // 0x17be08: 0x24030001
    ctx->pc = 0x17be08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be0c: 0x14430004
    ctx->pc = 0x17BE0Cu;
    {
        const bool branch_taken_0x17be0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17BE10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        if (branch_taken_0x17be0c) {
            ctx->pc = 0x17BE20u;
            goto label_17be20;
        }
    }
    ctx->pc = 0x17BE14u;
    // 0x17be14: 0x21fc2
    ctx->pc = 0x17be14u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17be18: 0x431021
    ctx->pc = 0x17be18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be1c: 0x21043
    ctx->pc = 0x17be1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_17be20:
    // 0x17be20: 0xafa20028
    ctx->pc = 0x17be20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x17be24: 0x8e420008
    ctx->pc = 0x17be24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17be28: 0x50400001
    ctx->pc = 0x17BE28u;
    {
        const bool branch_taken_0x17be28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17be28) {
            ctx->pc = 0x17BE2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x17BE30u;
            goto label_17be30;
        }
    }
    ctx->pc = 0x17BE30u;
label_17be30:
    // 0x17be30: 0xafa2002c
    ctx->pc = 0x17be30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x17be34: 0x8e42000c
    ctx->pc = 0x17be34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17be38: 0x50400001
    ctx->pc = 0x17BE38u;
    {
        const bool branch_taken_0x17be38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17be38) {
            ctx->pc = 0x17BE3Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x17BE40u;
            goto label_17be40;
        }
    }
    ctx->pc = 0x17BE40u;
label_17be40:
    // 0x17be40: 0xafa20038
    ctx->pc = 0x17be40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x17be44: 0x24020001
    ctx->pc = 0x17be44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be48: 0x16620002
    ctx->pc = 0x17BE48u;
    {
        const bool branch_taken_0x17be48 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x17BE4Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17be48) {
            ctx->pc = 0x17BE54u;
            goto label_17be54;
        }
    }
    ctx->pc = 0x17BE50u;
    // 0x17be50: 0x8e48003c
    ctx->pc = 0x17be50u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_17be54:
    // 0x17be54: 0x240202d
    ctx->pc = 0x17be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be58: 0x200282d
    ctx->pc = 0x17be58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be5c: 0x3a0302d
    ctx->pc = 0x17be5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be60: 0xc05efa2
    ctx->pc = 0x17BE60u;
    SET_GPR_U32(ctx, 31, 0x17BE68u);
    ctx->pc = 0x17BE64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BE88_0x17be88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE68u; }
    }
    if (ctx->pc != 0x17BE68u) { return; }
    ctx->pc = 0x17BE68u;
    // 0x17be68: 0xdfb00040
    ctx->pc = 0x17be68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17be6c: 0xdfb10048
    ctx->pc = 0x17be6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17be70: 0xdfb20050
    ctx->pc = 0x17be70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17be74: 0xdfb30058
    ctx->pc = 0x17be74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17be78: 0xdfbf0060
    ctx->pc = 0x17be78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17be7c: 0x3e00008
    ctx->pc = 0x17BE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BBB4u: goto label_17bbb4;
            case 0x17BC00u: goto label_17bc00;
            case 0x17BC04u: goto label_17bc04;
            case 0x17BC28u: goto label_17bc28;
            case 0x17BC88u: goto label_17bc88;
            case 0x17BCB0u: goto label_17bcb0;
            case 0x17BCE8u: goto label_17bce8;
            case 0x17BD20u: goto label_17bd20;
            case 0x17BD40u: goto label_17bd40;
            case 0x17BD70u: goto label_17bd70;
            case 0x17BD74u: goto label_17bd74;
            case 0x17BD98u: goto label_17bd98;
            case 0x17BE20u: goto label_17be20;
            case 0x17BE30u: goto label_17be30;
            case 0x17BE40u: goto label_17be40;
            case 0x17BE54u: goto label_17be54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BE84u;
    // 0x17be84: 0x0
    ctx->pc = 0x17be84u;
    // NOP
}
