#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001058D8
// Address: 0x1058d8 - 0x105bd0
void sub_001058D8_0x1058d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1058d8u;

    // 0x1058d8: 0x27bdffe0
    ctx->pc = 0x1058d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1058dc: 0xffb00000
    ctx->pc = 0x1058dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1058e0: 0xa0802d
    ctx->pc = 0x1058e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058e4: 0xffb10008
    ctx->pc = 0x1058e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1058e8: 0x80882d
    ctx->pc = 0x1058e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058ec: 0x120000b2
    ctx->pc = 0x1058ECu;
    {
        const bool branch_taken_0x1058ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1058F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1058ec) {
            ctx->pc = 0x105BB8u;
            goto label_105bb8;
        }
    }
    ctx->pc = 0x1058F4u;
    // 0x1058f4: 0xc041f4a
    ctx->pc = 0x1058F4u;
    SET_GPR_U32(ctx, 31, 0x1058FCu);
    ctx->pc = 0x107D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107D28_0x107d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1058FCu; }
    }
    if (ctx->pc != 0x1058FCu) { return; }
    ctx->pc = 0x1058FCu;
    // 0x1058fc: 0x2609fff8
    ctx->pc = 0x1058fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x105900: 0x8d260004
    ctx->pc = 0x105900u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x105904: 0x2402fffe
    ctx->pc = 0x105904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x105908: 0x3c0c0021
    ctx->pc = 0x105908u;
    SET_GPR_U32(ctx, 12, ((uint32_t)33 << 16));
    // 0x10590c: 0x2404fffc
    ctx->pc = 0x10590cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x105910: 0xc24024
    ctx->pc = 0x105910u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x105914: 0x258a9800
    ctx->pc = 0x105914u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 12), 4294940672));
    // 0x105918: 0x1282821
    ctx->pc = 0x105918u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x10591c: 0x8d430008
    ctx->pc = 0x10591cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x105920: 0x8ca20004
    ctx->pc = 0x105920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x105924: 0x14a3001e
    ctx->pc = 0x105924u;
    {
        const bool branch_taken_0x105924 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x105928u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x105924) {
            ctx->pc = 0x1059A0u;
            goto label_1059a0;
        }
    }
    ctx->pc = 0x10592Cu;
    // 0x10592c: 0x30c20001
    ctx->pc = 0x10592cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
    // 0x105930: 0x14400008
    ctx->pc = 0x105930u;
    {
        const bool branch_taken_0x105930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105934u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x105930) {
            ctx->pc = 0x105954u;
            goto label_105954;
        }
    }
    ctx->pc = 0x105938u;
    // 0x105938: 0x8d230000
    ctx->pc = 0x105938u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10593c: 0x1234823
    ctx->pc = 0x10593cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x105940: 0x1034021
    ctx->pc = 0x105940u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x105944: 0x8d27000c
    ctx->pc = 0x105944u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x105948: 0x8d260008
    ctx->pc = 0x105948u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10594c: 0xacc7000c
    ctx->pc = 0x10594cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x105950: 0xace60008
    ctx->pc = 0x105950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_105954:
    // 0x105954: 0x35030001
    ctx->pc = 0x105954u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 8), 1));
    // 0x105958: 0xad490008
    ctx->pc = 0x105958u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x10595c: 0xad230004
    ctx->pc = 0x10595cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x105960: 0x3c040021
    ctx->pc = 0x105960u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x105964: 0x8103c
    ctx->pc = 0x105964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x105968: 0xdc839c08
    ctx->pc = 0x105968u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294941704)));
    // 0x10596c: 0x2103e
    ctx->pc = 0x10596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x105970: 0x43102b
    ctx->pc = 0x105970u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105974: 0x14400005
    ctx->pc = 0x105974u;
    {
        const bool branch_taken_0x105974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105978u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105974) {
            ctx->pc = 0x10598Cu;
            goto label_10598c;
        }
    }
    ctx->pc = 0x10597Cu;
    // 0x10597c: 0x3c020021
    ctx->pc = 0x10597cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x105980: 0xc0416f4
    ctx->pc = 0x105980u;
    SET_GPR_U32(ctx, 31, 0x105988u);
    ctx->pc = 0x105984u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294941712)));
    ctx->pc = 0x105BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105BD0_0x105bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105988u; }
    }
    if (ctx->pc != 0x105988u) { return; }
    ctx->pc = 0x105988u;
    // 0x105988: 0x220202d
    ctx->pc = 0x105988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10598c:
    // 0x10598c: 0xdfb10008
    ctx->pc = 0x10598cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105990: 0xdfb00000
    ctx->pc = 0x105990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105994: 0xdfbf0010
    ctx->pc = 0x105994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105998: 0x8041f6a
    ctx->pc = 0x105998u;
    ctx->pc = 0x10599Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x107DA8u;
    sub_00107DA8_0x107da8(rdram, ctx, runtime); return;
    ctx->pc = 0x1059A0u;
label_1059a0:
    // 0x1059a0: 0x30c20001
    ctx->pc = 0x1059a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
    // 0x1059a4: 0xaca40004
    ctx->pc = 0x1059a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1059a8: 0x1440000e
    ctx->pc = 0x1059A8u;
    {
        const bool branch_taken_0x1059a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1059ACu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1059a8) {
            ctx->pc = 0x1059E4u;
            goto label_1059e4;
        }
    }
    ctx->pc = 0x1059B0u;
    // 0x1059b0: 0x8d230000
    ctx->pc = 0x1059b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1059b4: 0x25420008
    ctx->pc = 0x1059b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 8));
    // 0x1059b8: 0x1234823
    ctx->pc = 0x1059b8u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1059bc: 0x1034021
    ctx->pc = 0x1059bcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1059c0: 0x8d230008
    ctx->pc = 0x1059c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1059c4: 0x54620004
    ctx->pc = 0x1059C4u;
    {
        const bool branch_taken_0x1059c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1059c4) {
            ctx->pc = 0x1059C8u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->pc = 0x1059D8u;
            goto label_1059d8;
        }
    }
    ctx->pc = 0x1059CCu;
    // 0x1059cc: 0x10000005
    ctx->pc = 0x1059CCu;
    {
        const bool branch_taken_0x1059cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1059D0u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1059cc) {
            ctx->pc = 0x1059E4u;
            goto label_1059e4;
        }
    }
    ctx->pc = 0x1059D4u;
    // 0x1059d4: 0x0
    ctx->pc = 0x1059d4u;
    // NOP
label_1059d8:
    // 0x1059d8: 0x60302d
    ctx->pc = 0x1059d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059dc: 0xacc7000c
    ctx->pc = 0x1059dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x1059e0: 0xace60008
    ctx->pc = 0x1059e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_1059e4:
    // 0x1059e4: 0xa41821
    ctx->pc = 0x1059e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1059e8: 0x8c620004
    ctx->pc = 0x1059e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1059ec: 0x30420001
    ctx->pc = 0x1059ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1059f0: 0x14400015
    ctx->pc = 0x1059F0u;
    {
        const bool branch_taken_0x1059f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1059F4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1059f0) {
            ctx->pc = 0x105A48u;
            goto label_105a48;
        }
    }
    ctx->pc = 0x1059F8u;
    // 0x1059f8: 0x1560000d
    ctx->pc = 0x1059F8u;
    {
        const bool branch_taken_0x1059f8 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        ctx->pc = 0x1059FCu;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x1059f8) {
            ctx->pc = 0x105A30u;
            goto label_105a30;
        }
    }
    ctx->pc = 0x105A00u;
    // 0x105a00: 0x3c020021
    ctx->pc = 0x105a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x105a04: 0x8ca30008
    ctx->pc = 0x105a04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x105a08: 0x24429810
    ctx->pc = 0x105a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x105a0c: 0x2442fff8
    ctx->pc = 0x105a0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x105a10: 0x54620009
    ctx->pc = 0x105A10u;
    {
        const bool branch_taken_0x105a10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x105a10) {
            ctx->pc = 0x105A14u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->pc = 0x105A38u;
            goto label_105a38;
        }
    }
    ctx->pc = 0x105A18u;
    // 0x105a18: 0xac69000c
    ctx->pc = 0x105a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x105a1c: 0x240b0001
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x105a20: 0xac690008
    ctx->pc = 0x105a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x105a24: 0xad230008
    ctx->pc = 0x105a24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x105a28: 0x10000006
    ctx->pc = 0x105A28u;
    {
        const bool branch_taken_0x105a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x105a28) {
            ctx->pc = 0x105A44u;
            goto label_105a44;
        }
    }
    ctx->pc = 0x105A30u;
label_105a30:
    // 0x105a30: 0x8ca30008
    ctx->pc = 0x105a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x105a34: 0x8ca7000c
    ctx->pc = 0x105a34u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_105a38:
    // 0x105a38: 0x60302d
    ctx->pc = 0x105a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a3c: 0xacc7000c
    ctx->pc = 0x105a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x105a40: 0xace60008
    ctx->pc = 0x105a40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_105a44:
    // 0x105a44: 0x35020001
    ctx->pc = 0x105a44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), 1));
label_105a48:
    // 0x105a48: 0x1281821
    ctx->pc = 0x105a48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x105a4c: 0xad220004
    ctx->pc = 0x105a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x105a50: 0x15600053
    ctx->pc = 0x105A50u;
    {
        const bool branch_taken_0x105a50 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        ctx->pc = 0x105A54u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        if (branch_taken_0x105a50) {
            ctx->pc = 0x105BA0u;
            goto label_105ba0;
        }
    }
    ctx->pc = 0x105A58u;
    // 0x105a58: 0x2d020200
    ctx->pc = 0x105a58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), 512));
    // 0x105a5c: 0x50400012
    ctx->pc = 0x105A5Cu;
    {
        const bool branch_taken_0x105a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105a5c) {
            ctx->pc = 0x105A60u;
            SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 9));
            ctx->pc = 0x105AA8u;
            goto label_105aa8;
        }
    }
    ctx->pc = 0x105A64u;
    // 0x105a64: 0x828c2
    ctx->pc = 0x105a64u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 8), 3));
    // 0x105a68: 0x25849800
    ctx->pc = 0x105a68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 12), 4294940672));
    // 0x105a6c: 0x518c0
    ctx->pc = 0x105a6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x105a70: 0x52882
    ctx->pc = 0x105a70u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 2));
    // 0x105a74: 0x24020001
    ctx->pc = 0x105a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x105a78: 0x643821
    ctx->pc = 0x105a78u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x105a7c: 0xa21014
    ctx->pc = 0x105a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x105a80: 0x8c830004
    ctx->pc = 0x105a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x105a84: 0x8ce60008
    ctx->pc = 0x105a84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x105a88: 0x2103c
    ctx->pc = 0x105a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x105a8c: 0x2103f
    ctx->pc = 0x105a8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105a90: 0x621825
    ctx->pc = 0x105a90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105a94: 0xad27000c
    ctx->pc = 0x105a94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x105a98: 0xad260008
    ctx->pc = 0x105a98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x105a9c: 0x1000003e
    ctx->pc = 0x105A9Cu;
    {
        const bool branch_taken_0x105a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AA0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x105a9c) {
            ctx->pc = 0x105B98u;
            goto label_105b98;
        }
    }
    ctx->pc = 0x105AA4u;
    // 0x105aa4: 0x0
    ctx->pc = 0x105aa4u;
    // NOP
label_105aa8:
    // 0x105aa8: 0x10600019
    ctx->pc = 0x105AA8u;
    {
        const bool branch_taken_0x105aa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AACu;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 8), 3));
        if (branch_taken_0x105aa8) {
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105AB0u;
    // 0x105ab0: 0x2c620005
    ctx->pc = 0x105ab0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
    // 0x105ab4: 0x10400004
    ctx->pc = 0x105AB4u;
    {
        const bool branch_taken_0x105ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AB8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 21));
        if (branch_taken_0x105ab4) {
            ctx->pc = 0x105AC8u;
            goto label_105ac8;
        }
    }
    ctx->pc = 0x105ABCu;
    // 0x105abc: 0x81182
    ctx->pc = 0x105abcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 6));
    // 0x105ac0: 0x10000013
    ctx->pc = 0x105AC0u;
    {
        const bool branch_taken_0x105ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AC4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 56));
        if (branch_taken_0x105ac0) {
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105AC8u;
label_105ac8:
    // 0x105ac8: 0x14400011
    ctx->pc = 0x105AC8u;
    {
        const bool branch_taken_0x105ac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105ACCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 91));
        if (branch_taken_0x105ac8) {
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105AD0u;
    // 0x105ad0: 0x2c620055
    ctx->pc = 0x105ad0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 85));
    // 0x105ad4: 0x10400004
    ctx->pc = 0x105AD4u;
    {
        const bool branch_taken_0x105ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AD8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 341));
        if (branch_taken_0x105ad4) {
            ctx->pc = 0x105AE8u;
            goto label_105ae8;
        }
    }
    ctx->pc = 0x105ADCu;
    // 0x105adc: 0x81302
    ctx->pc = 0x105adcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 12));
    // 0x105ae0: 0x1000000b
    ctx->pc = 0x105AE0u;
    {
        const bool branch_taken_0x105ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AE4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 110));
        if (branch_taken_0x105ae0) {
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105AE8u;
label_105ae8:
    // 0x105ae8: 0x10400005
    ctx->pc = 0x105AE8u;
    {
        const bool branch_taken_0x105ae8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AECu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 1365));
        if (branch_taken_0x105ae8) {
            ctx->pc = 0x105B00u;
            goto label_105b00;
        }
    }
    ctx->pc = 0x105AF0u;
    // 0x105af0: 0x813c2
    ctx->pc = 0x105af0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 15));
    // 0x105af4: 0x10000006
    ctx->pc = 0x105AF4u;
    {
        const bool branch_taken_0x105af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105AF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 119));
        if (branch_taken_0x105af4) {
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105AFCu;
    // 0x105afc: 0x0
    ctx->pc = 0x105afcu;
    // NOP
label_105b00:
    // 0x105b00: 0x50400003
    ctx->pc = 0x105B00u;
    {
        const bool branch_taken_0x105b00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105b00) {
            ctx->pc = 0x105B04u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 126));
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105B08u;
    // 0x105b08: 0x81482
    ctx->pc = 0x105b08u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 18));
    // 0x105b0c: 0x2445007c
    ctx->pc = 0x105b0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 124));
label_105b10:
    // 0x105b10: 0x3c020021
    ctx->pc = 0x105b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x105b14: 0x518c0
    ctx->pc = 0x105b14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x105b18: 0x24429808
    ctx->pc = 0x105b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940680));
    // 0x105b1c: 0x244afff8
    ctx->pc = 0x105b1cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x105b20: 0x6a3821
    ctx->pc = 0x105b20u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x105b24: 0x8ce60008
    ctx->pc = 0x105b24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x105b28: 0x54c7000d
    ctx->pc = 0x105B28u;
    {
        const bool branch_taken_0x105b28 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 7));
        if (branch_taken_0x105b28) {
            ctx->pc = 0x105B2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->pc = 0x105B60u;
            goto label_105b60;
        }
    }
    ctx->pc = 0x105B30u;
    // 0x105b30: 0x24a40003
    ctx->pc = 0x105b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 3));
    // 0x105b34: 0x28a30000
    ctx->pc = 0x105b34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 0));
    // 0x105b38: 0x83280b
    ctx->pc = 0x105b38u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
    // 0x105b3c: 0x8d430004
    ctx->pc = 0x105b3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x105b40: 0x24020001
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x105b44: 0x52083
    ctx->pc = 0x105b44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x105b48: 0x821014
    ctx->pc = 0x105b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x105b4c: 0x2103c
    ctx->pc = 0x105b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x105b50: 0x2103f
    ctx->pc = 0x105b50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105b54: 0x621825
    ctx->pc = 0x105b54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105b58: 0x1000000d
    ctx->pc = 0x105B58u;
    {
        const bool branch_taken_0x105b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105B5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x105b58) {
            ctx->pc = 0x105B90u;
            goto label_105b90;
        }
    }
    ctx->pc = 0x105B60u;
label_105b60:
    // 0x105b60: 0x10000004
    ctx->pc = 0x105B60u;
    {
        const bool branch_taken_0x105b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105B64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x105b60) {
            ctx->pc = 0x105B74u;
            goto label_105b74;
        }
    }
    ctx->pc = 0x105B68u;
label_105b68:
    // 0x105b68: 0x50c70009
    ctx->pc = 0x105B68u;
    {
        const bool branch_taken_0x105b68 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 7));
        if (branch_taken_0x105b68) {
            ctx->pc = 0x105B6Cu;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->pc = 0x105B90u;
            goto label_105b90;
        }
    }
    ctx->pc = 0x105B70u;
    // 0x105b70: 0x8cc20004
    ctx->pc = 0x105b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_105b74:
    // 0x105b74: 0x431024
    ctx->pc = 0x105b74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105b78: 0x102102b
    ctx->pc = 0x105b78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x105b7c: 0x0
    ctx->pc = 0x105b7cu;
    // NOP
    // 0x105b80: 0x0
    ctx->pc = 0x105b80u;
    // NOP
    // 0x105b84: 0x5440fff8
    ctx->pc = 0x105B84u;
    {
        const bool branch_taken_0x105b84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x105b84) {
            ctx->pc = 0x105B88u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->pc = 0x105B68u;
            goto label_105b68;
        }
    }
    ctx->pc = 0x105B8Cu;
    // 0x105b8c: 0x8cc7000c
    ctx->pc = 0x105b8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_105b90:
    // 0x105b90: 0xad27000c
    ctx->pc = 0x105b90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x105b94: 0xad260008
    ctx->pc = 0x105b94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_105b98:
    // 0x105b98: 0xace90008
    ctx->pc = 0x105b98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x105b9c: 0xacc9000c
    ctx->pc = 0x105b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_105ba0:
    // 0x105ba0: 0x220202d
    ctx->pc = 0x105ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ba4: 0xdfb10008
    ctx->pc = 0x105ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105ba8: 0xdfb00000
    ctx->pc = 0x105ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105bac: 0xdfbf0010
    ctx->pc = 0x105bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bb0: 0x8041f6a
    ctx->pc = 0x105BB0u;
    ctx->pc = 0x105BB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x107DA8u;
    sub_00107DA8_0x107da8(rdram, ctx, runtime); return;
    ctx->pc = 0x105BB8u;
label_105bb8:
    // 0x105bb8: 0xdfb00000
    ctx->pc = 0x105bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105bbc: 0xdfb10008
    ctx->pc = 0x105bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105bc0: 0xdfbf0010
    ctx->pc = 0x105bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bc4: 0x3e00008
    ctx->pc = 0x105BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105BC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105954u: goto label_105954;
            case 0x10598Cu: goto label_10598c;
            case 0x1059A0u: goto label_1059a0;
            case 0x1059D8u: goto label_1059d8;
            case 0x1059E4u: goto label_1059e4;
            case 0x105A30u: goto label_105a30;
            case 0x105A38u: goto label_105a38;
            case 0x105A44u: goto label_105a44;
            case 0x105A48u: goto label_105a48;
            case 0x105AA8u: goto label_105aa8;
            case 0x105AC8u: goto label_105ac8;
            case 0x105AE8u: goto label_105ae8;
            case 0x105B00u: goto label_105b00;
            case 0x105B10u: goto label_105b10;
            case 0x105B60u: goto label_105b60;
            case 0x105B68u: goto label_105b68;
            case 0x105B74u: goto label_105b74;
            case 0x105B90u: goto label_105b90;
            case 0x105B98u: goto label_105b98;
            case 0x105BA0u: goto label_105ba0;
            case 0x105BB8u: goto label_105bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105BCCu;
    // 0x105bcc: 0x0
    ctx->pc = 0x105bccu;
    // NOP
}
