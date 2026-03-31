#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A918
// Address: 0x17a918 - 0x17ac68
void sub_0017A918_0x17a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a918u;

    // 0x17a918: 0x27bdffd0
    ctx->pc = 0x17a918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a91c: 0xffb10008
    ctx->pc = 0x17a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a920: 0x80882d
    ctx->pc = 0x17a920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a924: 0xffb20010
    ctx->pc = 0x17a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a928: 0xa0902d
    ctx->pc = 0x17a928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a92c: 0xffb30018
    ctx->pc = 0x17a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a930: 0xc0982d
    ctx->pc = 0x17a930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a934: 0xffb00000
    ctx->pc = 0x17a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a938: 0xffbf0020
    ctx->pc = 0x17a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a93c: 0x8e220004
    ctx->pc = 0x17a93cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a940: 0x14400006
    ctx->pc = 0x17A940u;
    {
        const bool branch_taken_0x17a940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A944u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x17a940) {
            ctx->pc = 0x17A95Cu;
            goto label_17a95c;
        }
    }
    ctx->pc = 0x17A948u;
    // 0x17a948: 0x3c050024
    ctx->pc = 0x17a948u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17a94c: 0x240202d
    ctx->pc = 0x17a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a950: 0xc05f386
    ctx->pc = 0x17A950u;
    SET_GPR_U32(ctx, 31, 0x17A958u);
    ctx->pc = 0x17A954u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3632));
    ctx->pc = 0x17CE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE18_0x17ce18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A958u; }
    }
    if (ctx->pc != 0x17A958u) { return; }
    ctx->pc = 0x17A958u;
    // 0x17a958: 0xae220004
    ctx->pc = 0x17a958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_17a95c:
    // 0x17a95c: 0x24020002
    ctx->pc = 0x17a95cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a960: 0x1202001f
    ctx->pc = 0x17A960u;
    {
        const bool branch_taken_0x17a960 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x17A964u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x17a960) {
            ctx->pc = 0x17A9E0u;
            goto label_17a9e0;
        }
    }
    ctx->pc = 0x17A968u;
    // 0x17a968: 0x10400007
    ctx->pc = 0x17A968u;
    {
        const bool branch_taken_0x17a968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A96Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x17a968) {
            ctx->pc = 0x17A988u;
            goto label_17a988;
        }
    }
    ctx->pc = 0x17A970u;
    // 0x17a970: 0x24020001
    ctx->pc = 0x17a970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a974: 0x12020010
    ctx->pc = 0x17A974u;
    {
        const bool branch_taken_0x17a974 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x17A978u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a974) {
            ctx->pc = 0x17A9B8u;
            goto label_17a9b8;
        }
    }
    ctx->pc = 0x17A97Cu;
    // 0x17a97c: 0x10000023
    ctx->pc = 0x17A97Cu;
    {
        const bool branch_taken_0x17a97c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A980u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x17a97c) {
            ctx->pc = 0x17AA0Cu;
            goto label_17aa0c;
        }
    }
    ctx->pc = 0x17A984u;
    // 0x17a984: 0x0
    ctx->pc = 0x17a984u;
    // NOP
label_17a988:
    // 0x17a988: 0x1602001f
    ctx->pc = 0x17A988u;
    {
        const bool branch_taken_0x17a988 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x17A98Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a988) {
            ctx->pc = 0x17AA08u;
            goto label_17aa08;
        }
    }
    ctx->pc = 0x17A990u;
    // 0x17a990: 0xdfb10008
    ctx->pc = 0x17a990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a994: 0x240282d
    ctx->pc = 0x17a994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a998: 0xdfb20010
    ctx->pc = 0x17a998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a99c: 0x260302d
    ctx->pc = 0x17a99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9a0: 0xdfb30018
    ctx->pc = 0x17a9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a9a4: 0xdfb00000
    ctx->pc = 0x17a9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9a8: 0xdfbf0020
    ctx->pc = 0x17a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9ac: 0x805ea8c
    ctx->pc = 0x17A9ACu;
    ctx->pc = 0x17A9B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17AA30u;
    goto label_17aa30;
    ctx->pc = 0x17A9B4u;
    // 0x17a9b4: 0x0
    ctx->pc = 0x17a9b4u;
    // NOP
label_17a9b8:
    // 0x17a9b8: 0xdfb10008
    ctx->pc = 0x17a9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a9bc: 0x240282d
    ctx->pc = 0x17a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9c0: 0xdfb20010
    ctx->pc = 0x17a9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9c4: 0x260302d
    ctx->pc = 0x17a9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9c8: 0xdfb30018
    ctx->pc = 0x17a9c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a9cc: 0xdfb00000
    ctx->pc = 0x17a9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9d0: 0xdfbf0020
    ctx->pc = 0x17a9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9d4: 0x805ec26
    ctx->pc = 0x17A9D4u;
    ctx->pc = 0x17A9D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17B098u;
    entry_17b098_0x17b288(rdram, ctx, runtime); return;
    ctx->pc = 0x17A9DCu;
    // 0x17a9dc: 0x0
    ctx->pc = 0x17a9dcu;
    // NOP
label_17a9e0:
    // 0x17a9e0: 0x220202d
    ctx->pc = 0x17a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9e4: 0xdfb10008
    ctx->pc = 0x17a9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a9e8: 0x240282d
    ctx->pc = 0x17a9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9ec: 0xdfb20010
    ctx->pc = 0x17a9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9f0: 0x260302d
    ctx->pc = 0x17a9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9f4: 0xdfb30018
    ctx->pc = 0x17a9f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a9f8: 0xdfb00000
    ctx->pc = 0x17a9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9fc: 0xdfbf0020
    ctx->pc = 0x17a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa00: 0x805ed18
    ctx->pc = 0x17AA00u;
    ctx->pc = 0x17AA04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17B460u;
    entry_17b460_0x17b4e8(rdram, ctx, runtime); return;
    ctx->pc = 0x17AA08u;
label_17aa08:
    // 0x17aa08: 0xdfb10008
    ctx->pc = 0x17aa08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17aa0c:
    // 0x17aa0c: 0x240282d
    ctx->pc = 0x17aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa10: 0xdfb20010
    ctx->pc = 0x17aa10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa14: 0x3c060024
    ctx->pc = 0x17aa14u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17aa18: 0xdfb00000
    ctx->pc = 0x17aa18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa1c: 0xdfb30018
    ctx->pc = 0x17aa1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17aa20: 0x24c60e38
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3640));
    // 0x17aa24: 0xdfbf0020
    ctx->pc = 0x17aa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa28: 0x805f472
    ctx->pc = 0x17AA28u;
    ctx->pc = 0x17AA2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17AA30u;
label_17aa30:
    // 0x17aa30: 0x27bdffe0
    ctx->pc = 0x17aa30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aa34: 0x24020041
    ctx->pc = 0x17aa34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17aa38: 0xffb00000
    ctx->pc = 0x17aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17aa3c: 0x80802d
    ctx->pc = 0x17aa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa40: 0xffb10008
    ctx->pc = 0x17aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17aa44: 0xa0882d
    ctx->pc = 0x17aa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa48: 0xffb20010
    ctx->pc = 0x17aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17aa4c: 0xffbf0018
    ctx->pc = 0x17aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17aa50: 0x8e030004
    ctx->pc = 0x17aa50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17aa54: 0x10620062
    ctx->pc = 0x17AA54u;
    {
        const bool branch_taken_0x17aa54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17AA58u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aa54) {
            ctx->pc = 0x17ABE0u;
            goto label_17abe0;
        }
    }
    ctx->pc = 0x17AA5Cu;
    // 0x17aa5c: 0x28620042
    ctx->pc = 0x17aa5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17aa60: 0x1040000f
    ctx->pc = 0x17AA60u;
    {
        const bool branch_taken_0x17aa60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AA64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
        if (branch_taken_0x17aa60) {
            ctx->pc = 0x17AAA0u;
            goto label_17aaa0;
        }
    }
    ctx->pc = 0x17AA68u;
    // 0x17aa68: 0x24020021
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17aa6c: 0x10620044
    ctx->pc = 0x17AA6Cu;
    {
        const bool branch_taken_0x17aa6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17AA70u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17aa6c) {
            ctx->pc = 0x17AB80u;
            goto label_17ab80;
        }
    }
    ctx->pc = 0x17AA74u;
    // 0x17aa74: 0x10400006
    ctx->pc = 0x17AA74u;
    {
        const bool branch_taken_0x17aa74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AA78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x17aa74) {
            ctx->pc = 0x17AA90u;
            goto label_17aa90;
        }
    }
    ctx->pc = 0x17AA7Cu;
    // 0x17aa7c: 0x24020011
    ctx->pc = 0x17aa7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17aa80: 0x10620015
    ctx->pc = 0x17AA80u;
    {
        const bool branch_taken_0x17aa80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17aa80) {
            ctx->pc = 0x17AAD8u;
            goto label_17aad8;
        }
    }
    ctx->pc = 0x17AA88u;
    // 0x17aa88: 0x1000006d
    ctx->pc = 0x17AA88u;
    {
        const bool branch_taken_0x17aa88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AA8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aa88) {
            ctx->pc = 0x17AC40u;
            goto label_17ac40;
        }
    }
    ctx->pc = 0x17AA90u;
label_17aa90:
    // 0x17aa90: 0x10620047
    ctx->pc = 0x17AA90u;
    {
        const bool branch_taken_0x17aa90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17aa90) {
            ctx->pc = 0x17ABB0u;
            goto label_17abb0;
        }
    }
    ctx->pc = 0x17AA98u;
    // 0x17aa98: 0x10000069
    ctx->pc = 0x17AA98u;
    {
        const bool branch_taken_0x17aa98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AA9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aa98) {
            ctx->pc = 0x17AC40u;
            goto label_17ac40;
        }
    }
    ctx->pc = 0x17AAA0u;
label_17aaa0:
    // 0x17aaa0: 0x10620029
    ctx->pc = 0x17AAA0u;
    {
        const bool branch_taken_0x17aaa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17AAA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 258));
        if (branch_taken_0x17aaa0) {
            ctx->pc = 0x17AB48u;
            goto label_17ab48;
        }
    }
    ctx->pc = 0x17AAA8u;
    // 0x17aaa8: 0x10400007
    ctx->pc = 0x17AAA8u;
    {
        const bool branch_taken_0x17aaa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AAACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4097));
        if (branch_taken_0x17aaa8) {
            ctx->pc = 0x17AAC8u;
            goto label_17aac8;
        }
    }
    ctx->pc = 0x17AAB0u;
    // 0x17aab0: 0x240200f1
    ctx->pc = 0x17aab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 241));
    // 0x17aab4: 0x5062002c
    ctx->pc = 0x17AAB4u;
    {
        const bool branch_taken_0x17aab4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17aab4) {
            ctx->pc = 0x17AAB8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x17AB68u;
            goto label_17ab68;
        }
    }
    ctx->pc = 0x17AABCu;
    // 0x17aabc: 0x10000060
    ctx->pc = 0x17AABCu;
    {
        const bool branch_taken_0x17aabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AAC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aabc) {
            ctx->pc = 0x17AC40u;
            goto label_17ac40;
        }
    }
    ctx->pc = 0x17AAC4u;
    // 0x17aac4: 0x0
    ctx->pc = 0x17aac4u;
    // NOP
label_17aac8:
    // 0x17aac8: 0x10620051
    ctx->pc = 0x17AAC8u;
    {
        const bool branch_taken_0x17aac8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17aac8) {
            ctx->pc = 0x17AC10u;
            goto label_17ac10;
        }
    }
    ctx->pc = 0x17AAD0u;
    // 0x17aad0: 0x1000005b
    ctx->pc = 0x17AAD0u;
    {
        const bool branch_taken_0x17aad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AAD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aad0) {
            ctx->pc = 0x17AC40u;
            goto label_17ac40;
        }
    }
    ctx->pc = 0x17AAD8u;
label_17aad8:
    // 0x17aad8: 0xc05f51a
    ctx->pc = 0x17AAD8u;
    SET_GPR_U32(ctx, 31, 0x17AAE0u);
    ctx->pc = 0x17D468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D468_0x17d468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAE0u; }
    }
    if (ctx->pc != 0x17AAE0u) { return; }
    ctx->pc = 0x17AAE0u;
    // 0x17aae0: 0x24030001
    ctx->pc = 0x17aae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aae4: 0x1043000a
    ctx->pc = 0x17AAE4u;
    {
        const bool branch_taken_0x17aae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17AAE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aae4) {
            ctx->pc = 0x17AB10u;
            goto label_17ab10;
        }
    }
    ctx->pc = 0x17AAECu;
    // 0x17aaec: 0xdfb00000
    ctx->pc = 0x17aaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aaf0: 0x220282d
    ctx->pc = 0x17aaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aaf4: 0xdfb10008
    ctx->pc = 0x17aaf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aaf8: 0x240302d
    ctx->pc = 0x17aaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aafc: 0xdfb20010
    ctx->pc = 0x17aafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab00: 0xdfbf0018
    ctx->pc = 0x17ab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ab04: 0x382d
    ctx->pc = 0x17ab04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab08: 0x805eb1a
    ctx->pc = 0x17AB08u;
    ctx->pc = 0x17AB0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AC68u;
    sub_0017AC68_0x17ac68(rdram, ctx, runtime); return;
    ctx->pc = 0x17AB10u;
label_17ab10:
    // 0x17ab10: 0x220282d
    ctx->pc = 0x17ab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab14: 0xc05f164
    ctx->pc = 0x17AB14u;
    SET_GPR_U32(ctx, 31, 0x17AB1Cu);
    ctx->pc = 0x17AB18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB1Cu; }
    }
    if (ctx->pc != 0x17AB1Cu) { return; }
    ctx->pc = 0x17AB1Cu;
    // 0x17ab1c: 0x200202d
    ctx->pc = 0x17ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab20: 0x220282d
    ctx->pc = 0x17ab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab24: 0xdfb10008
    ctx->pc = 0x17ab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ab28: 0x240302d
    ctx->pc = 0x17ab28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab2c: 0xdfb20010
    ctx->pc = 0x17ab2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab30: 0xdfb00000
    ctx->pc = 0x17ab30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab34: 0x24070001
    ctx->pc = 0x17ab34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ab38: 0xdfbf0018
    ctx->pc = 0x17ab38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ab3c: 0x805eb1a
    ctx->pc = 0x17AB3Cu;
    ctx->pc = 0x17AB40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AC68u;
    sub_0017AC68_0x17ac68(rdram, ctx, runtime); return;
    ctx->pc = 0x17AB44u;
    // 0x17ab44: 0x0
    ctx->pc = 0x17ab44u;
    // NOP
label_17ab48:
    // 0x17ab48: 0xdfb00000
    ctx->pc = 0x17ab48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab4c: 0x382d
    ctx->pc = 0x17ab4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab50: 0xdfb10008
    ctx->pc = 0x17ab50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ab54: 0xdfb20010
    ctx->pc = 0x17ab54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab58: 0xdfbf0018
    ctx->pc = 0x17ab58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ab5c: 0x805eb1a
    ctx->pc = 0x17AB5Cu;
    ctx->pc = 0x17AB60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AC68u;
    sub_0017AC68_0x17ac68(rdram, ctx, runtime); return;
    ctx->pc = 0x17AB64u;
    // 0x17ab64: 0x0
    ctx->pc = 0x17ab64u;
    // NOP
label_17ab68:
    // 0x17ab68: 0xdfb10008
    ctx->pc = 0x17ab68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ab6c: 0xdfb20010
    ctx->pc = 0x17ab6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab70: 0xdfbf0018
    ctx->pc = 0x17ab70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ab74: 0x805eb98
    ctx->pc = 0x17AB74u;
    ctx->pc = 0x17AB78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AE60u;
    entry_17ae60_0x17aef8(rdram, ctx, runtime); return;
    ctx->pc = 0x17AB7Cu;
    // 0x17ab7c: 0x0
    ctx->pc = 0x17ab7cu;
    // NOP
label_17ab80:
    // 0x17ab80: 0xc05f164
    ctx->pc = 0x17AB80u;
    SET_GPR_U32(ctx, 31, 0x17AB88u);
    ctx->pc = 0x17AB84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB88u; }
    }
    if (ctx->pc != 0x17AB88u) { return; }
    ctx->pc = 0x17AB88u;
    // 0x17ab88: 0x200202d
    ctx->pc = 0x17ab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab8c: 0x220282d
    ctx->pc = 0x17ab8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab90: 0xdfb10008
    ctx->pc = 0x17ab90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ab94: 0x240302d
    ctx->pc = 0x17ab94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab98: 0xdfb20010
    ctx->pc = 0x17ab98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab9c: 0xdfb00000
    ctx->pc = 0x17ab9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aba0: 0xdfbf0018
    ctx->pc = 0x17aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17aba4: 0x805ebbe
    ctx->pc = 0x17ABA4u;
    ctx->pc = 0x17ABA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AEF8u;
    entry_17aef8_0x17b010(rdram, ctx, runtime); return;
    ctx->pc = 0x17ABACu;
    // 0x17abac: 0x0
    ctx->pc = 0x17abacu;
    // NOP
label_17abb0:
    // 0x17abb0: 0xc05f164
    ctx->pc = 0x17ABB0u;
    SET_GPR_U32(ctx, 31, 0x17ABB8u);
    ctx->pc = 0x17ABB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABB8u; }
    }
    if (ctx->pc != 0x17ABB8u) { return; }
    ctx->pc = 0x17ABB8u;
    // 0x17abb8: 0x200202d
    ctx->pc = 0x17abb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abbc: 0x220282d
    ctx->pc = 0x17abbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abc0: 0xdfb10008
    ctx->pc = 0x17abc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17abc4: 0x240302d
    ctx->pc = 0x17abc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abc8: 0xdfb20010
    ctx->pc = 0x17abc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abcc: 0xdfb00000
    ctx->pc = 0x17abccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abd0: 0x24070001
    ctx->pc = 0x17abd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17abd4: 0xdfbf0018
    ctx->pc = 0x17abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17abd8: 0x805eb1a
    ctx->pc = 0x17ABD8u;
    ctx->pc = 0x17ABDCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AC68u;
    sub_0017AC68_0x17ac68(rdram, ctx, runtime); return;
    ctx->pc = 0x17ABE0u;
label_17abe0:
    // 0x17abe0: 0xc05f164
    ctx->pc = 0x17ABE0u;
    SET_GPR_U32(ctx, 31, 0x17ABE8u);
    ctx->pc = 0x17ABE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABE8u; }
    }
    if (ctx->pc != 0x17ABE8u) { return; }
    ctx->pc = 0x17ABE8u;
    // 0x17abe8: 0x200202d
    ctx->pc = 0x17abe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abec: 0x220282d
    ctx->pc = 0x17abecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abf0: 0xdfb10008
    ctx->pc = 0x17abf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17abf4: 0x240302d
    ctx->pc = 0x17abf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abf8: 0xdfb20010
    ctx->pc = 0x17abf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abfc: 0xdfb00000
    ctx->pc = 0x17abfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac00: 0x24070001
    ctx->pc = 0x17ac00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ac04: 0xdfbf0018
    ctx->pc = 0x17ac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ac08: 0x805eb1a
    ctx->pc = 0x17AC08u;
    ctx->pc = 0x17AC0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AC68u;
    sub_0017AC68_0x17ac68(rdram, ctx, runtime); return;
    ctx->pc = 0x17AC10u;
label_17ac10:
    // 0x17ac10: 0xc05f164
    ctx->pc = 0x17AC10u;
    SET_GPR_U32(ctx, 31, 0x17AC18u);
    ctx->pc = 0x17AC14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x17C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C590_0x17c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC18u; }
    }
    if (ctx->pc != 0x17AC18u) { return; }
    ctx->pc = 0x17AC18u;
    // 0x17ac18: 0x200202d
    ctx->pc = 0x17ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac1c: 0x220282d
    ctx->pc = 0x17ac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac20: 0xdfb10008
    ctx->pc = 0x17ac20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ac24: 0x240302d
    ctx->pc = 0x17ac24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac28: 0xdfb20010
    ctx->pc = 0x17ac28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac2c: 0xdfb00000
    ctx->pc = 0x17ac2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac30: 0x24070001
    ctx->pc = 0x17ac30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ac34: 0xdfbf0018
    ctx->pc = 0x17ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ac38: 0x805eb1a
    ctx->pc = 0x17AC38u;
    ctx->pc = 0x17AC3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17AC68u;
    sub_0017AC68_0x17ac68(rdram, ctx, runtime); return;
    ctx->pc = 0x17AC40u;
label_17ac40:
    // 0x17ac40: 0xdfb00000
    ctx->pc = 0x17ac40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac44: 0x220282d
    ctx->pc = 0x17ac44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac48: 0xdfb10008
    ctx->pc = 0x17ac48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ac4c: 0x3c060024
    ctx->pc = 0x17ac4cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17ac50: 0xdfb20010
    ctx->pc = 0x17ac50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac54: 0xdfbf0018
    ctx->pc = 0x17ac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ac58: 0x24c60e70
    ctx->pc = 0x17ac58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3696));
    // 0x17ac5c: 0x805f472
    ctx->pc = 0x17AC5Cu;
    ctx->pc = 0x17AC60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17AC64u;
    // 0x17ac64: 0x0
    ctx->pc = 0x17ac64u;
    // NOP
}
