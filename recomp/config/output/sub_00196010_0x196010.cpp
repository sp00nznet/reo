#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00196010
// Address: 0x196010 - 0x197470
void sub_00196010_0x196010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x196010u;

label_196010:
    // 0x196010: 0x27bdffc0
    ctx->pc = 0x196010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_196014:
    // 0x196014: 0xffbf0020
    ctx->pc = 0x196014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_196018:
    // 0x196018: 0x7fb10010
    ctx->pc = 0x196018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19601c:
    // 0x19601c: 0x7fb00000
    ctx->pc = 0x19601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_196020:
    // 0x196020: 0x309000ff
    ctx->pc = 0x196020u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 255));
label_196024:
    // 0x196024: 0x2a02001a
    ctx->pc = 0x196024u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 26));
label_196028:
    // 0x196028: 0x14400018
label_19602c:
    if (ctx->pc == 0x19602Cu) {
        ctx->pc = 0x19602Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
        ctx->pc = 0x196030u;
        goto label_196030;
    }
    ctx->pc = 0x196028u;
    {
        const bool branch_taken_0x196028 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19602Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
        if (branch_taken_0x196028) {
            ctx->pc = 0x19608Cu;
            goto label_19608c;
        }
    }
    ctx->pc = 0x196030u;
label_196030:
    // 0x196030: 0x2a01003a
    ctx->pc = 0x196030u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 58));
label_196034:
    // 0x196034: 0x10200016
label_196038:
    if (ctx->pc == 0x196038u) {
        ctx->pc = 0x196038u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 58));
        ctx->pc = 0x19603Cu;
        goto label_19603c;
    }
    ctx->pc = 0x196034u;
    {
        const bool branch_taken_0x196034 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x196038u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 58));
        if (branch_taken_0x196034) {
            ctx->pc = 0x196090u;
            goto label_196090;
        }
    }
    ctx->pc = 0x19603Cu;
label_19603c:
    // 0x19603c: 0x8fa60038
    ctx->pc = 0x19603cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196040:
    // 0x196040: 0x10c00010
label_196044:
    if (ctx->pc == 0x196044u) {
        ctx->pc = 0x196044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x196048u;
        goto label_196048;
    }
    ctx->pc = 0x196040u;
    {
        const bool branch_taken_0x196040 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x196044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196040) {
            ctx->pc = 0x196084u;
            goto label_196084;
        }
    }
    ctx->pc = 0x196048u;
label_196048:
    // 0x196048: 0x2602ffe6
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967270));
label_19604c:
    // 0x19604c: 0x3c017000
    ctx->pc = 0x19604cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
label_196050:
    // 0x196050: 0x21180
    ctx->pc = 0x196050u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
label_196054:
    // 0x196054: 0x34213700
    ctx->pc = 0x196054u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 14080));
label_196058:
    // 0x196058: 0x24040008
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_19605c:
    // 0x19605c: 0x412821
    ctx->pc = 0x19605cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_196060:
    // 0x196060: 0x8cc30000
    ctx->pc = 0x196060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_196064:
    // 0x196064: 0x2484ffff
    ctx->pc = 0x196064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_196068:
    // 0x196068: 0x8cc20004
    ctx->pc = 0x196068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_19606c:
    // 0x19606c: 0xaca30000
    ctx->pc = 0x19606cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196070:
    // 0x196070: 0x24c60008
    ctx->pc = 0x196070u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_196074:
    // 0x196074: 0xaca20004
    ctx->pc = 0x196074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_196078:
    // 0x196078: 0x1c80fff9
label_19607c:
    if (ctx->pc == 0x19607Cu) {
        ctx->pc = 0x19607Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x196080u;
        goto label_196080;
    }
    ctx->pc = 0x196078u;
    {
        const bool branch_taken_0x196078 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x19607Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x196078) {
            ctx->pc = 0x196060u;
            goto label_196060;
        }
    }
    ctx->pc = 0x196080u;
label_196080:
    // 0x196080: 0x24020001
    ctx->pc = 0x196080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196084:
    // 0x196084: 0x10000398
label_196088:
    if (ctx->pc == 0x196088u) {
        ctx->pc = 0x196088u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x19608Cu;
        goto label_19608c;
    }
    ctx->pc = 0x196084u;
    {
        const bool branch_taken_0x196084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196088u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x196084) {
            ctx->pc = 0x196EE8u;
            goto label_196ee8;
        }
    }
    ctx->pc = 0x19608Cu;
label_19608c:
    // 0x19608c: 0x2a02003a
    ctx->pc = 0x19608cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 58));
label_196090:
    // 0x196090: 0x14400017
label_196094:
    if (ctx->pc == 0x196094u) {
        ctx->pc = 0x196094u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 90));
        ctx->pc = 0x196098u;
        goto label_196098;
    }
    ctx->pc = 0x196090u;
    {
        const bool branch_taken_0x196090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x196094u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 90));
        if (branch_taken_0x196090) {
            ctx->pc = 0x1960F0u;
            goto label_1960f0;
        }
    }
    ctx->pc = 0x196098u;
label_196098:
    // 0x196098: 0x2a01005a
    ctx->pc = 0x196098u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 90));
label_19609c:
    // 0x19609c: 0x10200014
label_1960a0:
    if (ctx->pc == 0x1960A0u) {
        ctx->pc = 0x1960A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967238));
        ctx->pc = 0x1960A4u;
        goto label_1960a4;
    }
    ctx->pc = 0x19609Cu;
    {
        const bool branch_taken_0x19609c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1960A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967238));
        if (branch_taken_0x19609c) {
            ctx->pc = 0x1960F0u;
            goto label_1960f0;
        }
    }
    ctx->pc = 0x1960A4u;
label_1960a4:
    // 0x1960a4: 0x3c020029
    ctx->pc = 0x1960a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_1960a8:
    // 0x1960a8: 0x618c0
    ctx->pc = 0x1960a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
label_1960ac:
    // 0x1960ac: 0x8fa40038
    ctx->pc = 0x1960acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1960b0:
    // 0x1960b0: 0x662821
    ctx->pc = 0x1960b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1960b4:
    // 0x1960b4: 0x24424340
    ctx->pc = 0x1960b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17216));
label_1960b8:
    // 0x1960b8: 0x52840
    ctx->pc = 0x1960b8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
label_1960bc:
    // 0x1960bc: 0x24030013
    ctx->pc = 0x1960bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
label_1960c0:
    // 0x1960c0: 0xa62821
    ctx->pc = 0x1960c0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1960c4:
    // 0x1960c4: 0x52880
    ctx->pc = 0x1960c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_1960c8:
    // 0x1960c8: 0x452821
    ctx->pc = 0x1960c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1960cc:
    // 0x1960cc: 0x8c820000
    ctx->pc = 0x1960ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1960d0:
    // 0x1960d0: 0x2463ffff
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1960d4:
    // 0x1960d4: 0xaca20000
    ctx->pc = 0x1960d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1960d8:
    // 0x1960d8: 0x24840004
    ctx->pc = 0x1960d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_1960dc:
    // 0x1960dc: 0x24a50004
    ctx->pc = 0x1960dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_1960e0:
    // 0x1960e0: 0x1c60fffa
label_1960e4:
    if (ctx->pc == 0x1960E4u) {
        ctx->pc = 0x1960E8u;
        goto label_1960e8;
    }
    ctx->pc = 0x1960E0u;
    {
        const bool branch_taken_0x1960e0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1960e0) {
            ctx->pc = 0x1960CCu;
            goto label_1960cc;
        }
    }
    ctx->pc = 0x1960E8u;
label_1960e8:
    // 0x1960e8: 0x1000037e
label_1960ec:
    if (ctx->pc == 0x1960ECu) {
        ctx->pc = 0x1960ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1960F0u;
        goto label_1960f0;
    }
    ctx->pc = 0x1960E8u;
    {
        const bool branch_taken_0x1960e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1960ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1960e8) {
            ctx->pc = 0x196EE4u;
            goto label_196ee4;
        }
    }
    ctx->pc = 0x1960F0u;
label_1960f0:
    // 0x1960f0: 0x14400031
label_1960f4:
    if (ctx->pc == 0x1960F4u) {
        ctx->pc = 0x1960F4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 93));
        ctx->pc = 0x1960F8u;
        goto label_1960f8;
    }
    ctx->pc = 0x1960F0u;
    {
        const bool branch_taken_0x1960f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1960F4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 93));
        if (branch_taken_0x1960f0) {
            ctx->pc = 0x1961B8u;
            goto label_1961b8;
        }
    }
    ctx->pc = 0x1960F8u;
label_1960f8:
    // 0x1960f8: 0x10200030
label_1960fc:
    if (ctx->pc == 0x1960FCu) {
        ctx->pc = 0x1960FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
        ctx->pc = 0x196100u;
        goto label_196100;
    }
    ctx->pc = 0x1960F8u;
    {
        const bool branch_taken_0x1960f8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1960FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
        if (branch_taken_0x1960f8) {
            ctx->pc = 0x1961BCu;
            goto label_1961bc;
        }
    }
    ctx->pc = 0x196100u;
label_196100:
    // 0x196100: 0x2611ffa6
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294967206));
label_196104:
    // 0x196104: 0x3c020029
    ctx->pc = 0x196104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_196108:
    // 0x196108: 0x111840
    ctx->pc = 0x196108u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
label_19610c:
    // 0x19610c: 0x8fa60038
    ctx->pc = 0x19610cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196110:
    // 0x196110: 0x711821
    ctx->pc = 0x196110u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_196114:
    // 0x196114: 0x24424200
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16896));
label_196118:
    // 0x196118: 0x31880
    ctx->pc = 0x196118u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_19611c:
    // 0x19611c: 0x2404000d
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
label_196120:
    // 0x196120: 0x711821
    ctx->pc = 0x196120u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_196124:
    // 0x196124: 0x380c0
    ctx->pc = 0x196124u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 3));
label_196128:
    // 0x196128: 0x503821
    ctx->pc = 0x196128u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19612c:
    // 0x19612c: 0xe0282d
    ctx->pc = 0x19612cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196130:
    // 0x196130: 0x8cc30000
    ctx->pc = 0x196130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_196134:
    // 0x196134: 0x2484ffff
    ctx->pc = 0x196134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_196138:
    // 0x196138: 0x8cc20004
    ctx->pc = 0x196138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_19613c:
    // 0x19613c: 0xaca30000
    ctx->pc = 0x19613cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196140:
    // 0x196140: 0x24c60008
    ctx->pc = 0x196140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_196144:
    // 0x196144: 0xaca20004
    ctx->pc = 0x196144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_196148:
    // 0x196148: 0x1c80fff9
label_19614c:
    if (ctx->pc == 0x19614Cu) {
        ctx->pc = 0x19614Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x196150u;
        goto label_196150;
    }
    ctx->pc = 0x196148u;
    {
        const bool branch_taken_0x196148 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x19614Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x196148) {
            ctx->pc = 0x196130u;
            goto label_196130;
        }
    }
    ctx->pc = 0x196150u;
label_196150:
    // 0x196150: 0xc064760
label_196154:
    if (ctx->pc == 0x196154u) {
        ctx->pc = 0x196154u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 52));
        ctx->pc = 0x196158u;
        goto label_196158;
    }
    ctx->pc = 0x196150u;
    SET_GPR_U32(ctx, 31, 0x196158u);
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 52));
    ctx->pc = 0x191D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191D80_0x191d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196158u; }
    }
    if (ctx->pc != 0x196158u) { return; }
    ctx->pc = 0x196158u;
label_196158:
    // 0x196158: 0x3c020029
    ctx->pc = 0x196158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_19615c:
    // 0x19615c: 0x112080
    ctx->pc = 0x19615cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_196160:
    // 0x196160: 0x24424210
    ctx->pc = 0x196160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16912));
label_196164:
    // 0x196164: 0x501821
    ctx->pc = 0x196164u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_196168:
    // 0x196168: 0x3c020029
    ctx->pc = 0x196168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_19616c:
    // 0x19616c: 0xac600000
    ctx->pc = 0x19616cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_196170:
    // 0x196170: 0x24424220
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16928));
label_196174:
    // 0x196174: 0x501021
    ctx->pc = 0x196174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_196178:
    // 0x196178: 0xac400000
    ctx->pc = 0x196178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19617c:
    // 0x19617c: 0x3c020029
    ctx->pc = 0x19617cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_196180:
    // 0x196180: 0x24424250
    ctx->pc = 0x196180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16976));
label_196184:
    // 0x196184: 0x501821
    ctx->pc = 0x196184u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_196188:
    // 0x196188: 0xc4600000
    ctx->pc = 0x196188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19618c:
    // 0x19618c: 0x3c023f80
    ctx->pc = 0x19618cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_196190:
    // 0x196190: 0x44820800
    ctx->pc = 0x196190u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_196194:
    // 0x196194: 0x24020001
    ctx->pc = 0x196194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196198:
    // 0x196198: 0x46000803
    ctx->pc = 0x196198u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_19619c:
    // 0x19619c: 0x3c030029
    ctx->pc = 0x19619cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_1961a0:
    // 0x1961a0: 0x246341e8
    ctx->pc = 0x1961a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16872));
label_1961a4:
    // 0x1961a4: 0x641821
    ctx->pc = 0x1961a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1961a8:
    // 0x1961a8: 0x0
    ctx->pc = 0x1961a8u;
    // NOP
label_1961ac:
    // 0x1961ac: 0x0
    ctx->pc = 0x1961acu;
    // NOP
label_1961b0:
    // 0x1961b0: 0x1000034c
label_1961b4:
    if (ctx->pc == 0x1961B4u) {
        ctx->pc = 0x1961B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x1961B8u;
        goto label_1961b8;
    }
    ctx->pc = 0x1961B0u;
    {
        const bool branch_taken_0x1961b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1961B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x1961b0) {
            ctx->pc = 0x196EE4u;
            goto label_196ee4;
        }
    }
    ctx->pc = 0x1961B8u;
label_1961b8:
    // 0x1961b8: 0x2402006d
    ctx->pc = 0x1961b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
label_1961bc:
    // 0x1961bc: 0x12020321
label_1961c0:
    if (ctx->pc == 0x1961C0u) {
        ctx->pc = 0x1961C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x1961C4u;
        goto label_1961c4;
    }
    ctx->pc = 0x1961BCu;
    {
        const bool branch_taken_0x1961bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1961C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x1961bc) {
            ctx->pc = 0x196E44u;
            goto label_196e44;
        }
    }
    ctx->pc = 0x1961C4u;
label_1961c4:
    // 0x1961c4: 0x12020303
label_1961c8:
    if (ctx->pc == 0x1961C8u) {
        ctx->pc = 0x1961CCu;
        goto label_1961cc;
    }
    ctx->pc = 0x1961C4u;
    {
        const bool branch_taken_0x1961c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x1961c4) {
            ctx->pc = 0x196DD4u;
            goto label_196dd4;
        }
    }
    ctx->pc = 0x1961CCu;
label_1961cc:
    // 0x1961cc: 0x2402006b
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
label_1961d0:
    // 0x1961d0: 0x120202f0
label_1961d4:
    if (ctx->pc == 0x1961D4u) {
        ctx->pc = 0x1961D4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1961D8u;
        goto label_1961d8;
    }
    ctx->pc = 0x1961D0u;
    {
        const bool branch_taken_0x1961d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1961D4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1961d0) {
            ctx->pc = 0x196D94u;
            goto label_196d94;
        }
    }
    ctx->pc = 0x1961D8u;
label_1961d8:
    // 0x1961d8: 0x2402006a
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 106));
label_1961dc:
    // 0x1961dc: 0x120202e9
label_1961e0:
    if (ctx->pc == 0x1961E0u) {
        ctx->pc = 0x1961E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x1961E4u;
        goto label_1961e4;
    }
    ctx->pc = 0x1961DCu;
    {
        const bool branch_taken_0x1961dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1961E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 105));
        if (branch_taken_0x1961dc) {
            ctx->pc = 0x196D84u;
            goto label_196d84;
        }
    }
    ctx->pc = 0x1961E4u;
label_1961e4:
    // 0x1961e4: 0x120202e3
label_1961e8:
    if (ctx->pc == 0x1961E8u) {
        ctx->pc = 0x1961ECu;
        goto label_1961ec;
    }
    ctx->pc = 0x1961E4u;
    {
        const bool branch_taken_0x1961e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x1961e4) {
            ctx->pc = 0x196D74u;
            goto label_196d74;
        }
    }
    ctx->pc = 0x1961ECu;
label_1961ec:
    // 0x1961ec: 0x24020068
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
label_1961f0:
    // 0x1961f0: 0x1202033c
label_1961f4:
    if (ctx->pc == 0x1961F4u) {
        ctx->pc = 0x1961F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1961F8u;
        goto label_1961f8;
    }
    ctx->pc = 0x1961F0u;
    {
        const bool branch_taken_0x1961f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1961F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1961f0) {
            ctx->pc = 0x196EE4u;
            goto label_196ee4;
        }
    }
    ctx->pc = 0x1961F8u;
label_1961f8:
    // 0x1961f8: 0x24020067
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
label_1961fc:
    // 0x1961fc: 0x1202028c
label_196200:
    if (ctx->pc == 0x196200u) {
        ctx->pc = 0x196200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x196204u;
        goto label_196204;
    }
    ctx->pc = 0x1961FCu;
    {
        const bool branch_taken_0x1961fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x1961fc) {
            ctx->pc = 0x196C30u;
            goto label_196c30;
        }
    }
    ctx->pc = 0x196204u;
label_196204:
    // 0x196204: 0x1202027a
label_196208:
    if (ctx->pc == 0x196208u) {
        ctx->pc = 0x196208u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x19620Cu;
        goto label_19620c;
    }
    ctx->pc = 0x196204u;
    {
        const bool branch_taken_0x196204 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196208u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196204) {
            ctx->pc = 0x196BF0u;
            goto label_196bf0;
        }
    }
    ctx->pc = 0x19620Cu;
label_19620c:
    // 0x19620c: 0x24020065
    ctx->pc = 0x19620cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
label_196210:
    // 0x196210: 0x12020333
label_196214:
    if (ctx->pc == 0x196214u) {
        ctx->pc = 0x196214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x196218u;
        goto label_196218;
    }
    ctx->pc = 0x196210u;
    {
        const bool branch_taken_0x196210 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x196210) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196218u;
label_196218:
    // 0x196218: 0x12020265
label_19621c:
    if (ctx->pc == 0x19621Cu) {
        ctx->pc = 0x19621Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196220u;
        goto label_196220;
    }
    ctx->pc = 0x196218u;
    {
        const bool branch_taken_0x196218 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19621Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196218) {
            ctx->pc = 0x196BB0u;
            goto label_196bb0;
        }
    }
    ctx->pc = 0x196220u;
label_196220:
    // 0x196220: 0x24020063
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_196224:
    // 0x196224: 0x1202024e
label_196228:
    if (ctx->pc == 0x196228u) {
        ctx->pc = 0x196228u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x19622Cu;
        goto label_19622c;
    }
    ctx->pc = 0x196224u;
    {
        const bool branch_taken_0x196224 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196228u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196224) {
            ctx->pc = 0x196B60u;
            goto label_196b60;
        }
    }
    ctx->pc = 0x19622Cu;
label_19622c:
    // 0x19622c: 0x24020062
    ctx->pc = 0x19622cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 98));
label_196230:
    // 0x196230: 0x1202023e
label_196234:
    if (ctx->pc == 0x196234u) {
        ctx->pc = 0x196234u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196238u;
        goto label_196238;
    }
    ctx->pc = 0x196230u;
    {
        const bool branch_taken_0x196230 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196234u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196230) {
            ctx->pc = 0x196B2Cu;
            goto label_196b2c;
        }
    }
    ctx->pc = 0x196238u;
label_196238:
    // 0x196238: 0x24020060
    ctx->pc = 0x196238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
label_19623c:
    // 0x19623c: 0x1202022f
label_196240:
    if (ctx->pc == 0x196240u) {
        ctx->pc = 0x196240u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196244u;
        goto label_196244;
    }
    ctx->pc = 0x19623Cu;
    {
        const bool branch_taken_0x19623c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196240u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x19623c) {
            ctx->pc = 0x196AFCu;
            goto label_196afc;
        }
    }
    ctx->pc = 0x196244u;
label_196244:
    // 0x196244: 0x2402005f
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
label_196248:
    // 0x196248: 0x120201f5
label_19624c:
    if (ctx->pc == 0x19624Cu) {
        ctx->pc = 0x19624Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 93));
        ctx->pc = 0x196250u;
        goto label_196250;
    }
    ctx->pc = 0x196248u;
    {
        const bool branch_taken_0x196248 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19624Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x196248) {
            ctx->pc = 0x196A20u;
            goto label_196a20;
        }
    }
    ctx->pc = 0x196250u;
label_196250:
    // 0x196250: 0x120201e7
label_196254:
    if (ctx->pc == 0x196254u) {
        ctx->pc = 0x196254u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196258u;
        goto label_196258;
    }
    ctx->pc = 0x196250u;
    {
        const bool branch_taken_0x196250 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196254u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196250) {
            ctx->pc = 0x1969F0u;
            goto label_1969f0;
        }
    }
    ctx->pc = 0x196258u;
label_196258:
    // 0x196258: 0x24020019
    ctx->pc = 0x196258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
label_19625c:
    // 0x19625c: 0x120201d6
label_196260:
    if (ctx->pc == 0x196260u) {
        ctx->pc = 0x196260u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x196264u;
        goto label_196264;
    }
    ctx->pc = 0x19625Cu;
    {
        const bool branch_taken_0x19625c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196260u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x19625c) {
            ctx->pc = 0x1969B8u;
            goto label_1969b8;
        }
    }
    ctx->pc = 0x196264u;
label_196264:
    // 0x196264: 0x120301c9
label_196268:
    if (ctx->pc == 0x196268u) {
        ctx->pc = 0x196268u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x19626Cu;
        goto label_19626c;
    }
    ctx->pc = 0x196264u;
    {
        const bool branch_taken_0x196264 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x196268u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x196264) {
            ctx->pc = 0x19698Cu;
            goto label_19698c;
        }
    }
    ctx->pc = 0x19626Cu;
label_19626c:
    // 0x19626c: 0x120201ac
label_196270:
    if (ctx->pc == 0x196270u) {
        ctx->pc = 0x196274u;
        goto label_196274;
    }
    ctx->pc = 0x19626Cu;
    {
        const bool branch_taken_0x19626c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x19626c) {
            ctx->pc = 0x196920u;
            goto label_196920;
        }
    }
    ctx->pc = 0x196274u;
label_196274:
    // 0x196274: 0x24020016
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
label_196278:
    // 0x196278: 0x1202019b
label_19627c:
    if (ctx->pc == 0x19627Cu) {
        ctx->pc = 0x19627Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x196280u;
        goto label_196280;
    }
    ctx->pc = 0x196278u;
    {
        const bool branch_taken_0x196278 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19627Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x196278) {
            ctx->pc = 0x1968E8u;
            goto label_1968e8;
        }
    }
    ctx->pc = 0x196280u;
label_196280:
    // 0x196280: 0x1202018a
label_196284:
    if (ctx->pc == 0x196284u) {
        ctx->pc = 0x196284u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196288u;
        goto label_196288;
    }
    ctx->pc = 0x196280u;
    {
        const bool branch_taken_0x196280 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196284u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196280) {
            ctx->pc = 0x1968ACu;
            goto label_1968ac;
        }
    }
    ctx->pc = 0x196288u;
label_196288:
    // 0x196288: 0x24020014
    ctx->pc = 0x196288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_19628c:
    // 0x19628c: 0x12020183
label_196290:
    if (ctx->pc == 0x196290u) {
        ctx->pc = 0x196290u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x196294u;
        goto label_196294;
    }
    ctx->pc = 0x19628Cu;
    {
        const bool branch_taken_0x19628c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196290u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x19628c) {
            ctx->pc = 0x19689Cu;
            goto label_19689c;
        }
    }
    ctx->pc = 0x196294u;
label_196294:
    // 0x196294: 0x12040312
label_196298:
    if (ctx->pc == 0x196298u) {
        ctx->pc = 0x19629Cu;
        goto label_19629c;
    }
    ctx->pc = 0x196294u;
    {
        const bool branch_taken_0x196294 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        if (branch_taken_0x196294) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19629Cu;
label_19629c:
    // 0x19629c: 0x24040012
    ctx->pc = 0x19629cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_1962a0:
    // 0x1962a0: 0x1204016f
label_1962a4:
    if (ctx->pc == 0x1962A4u) {
        ctx->pc = 0x1962A4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1962A8u;
        goto label_1962a8;
    }
    ctx->pc = 0x1962A0u;
    {
        const bool branch_taken_0x1962a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962A4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1962a0) {
            ctx->pc = 0x196860u;
            goto label_196860;
        }
    }
    ctx->pc = 0x1962A8u;
label_1962a8:
    // 0x1962a8: 0x24040011
    ctx->pc = 0x1962a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
label_1962ac:
    // 0x1962ac: 0x12040168
label_1962b0:
    if (ctx->pc == 0x1962B0u) {
        ctx->pc = 0x1962B0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1962B4u;
        goto label_1962b4;
    }
    ctx->pc = 0x1962ACu;
    {
        const bool branch_taken_0x1962ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962B0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1962ac) {
            ctx->pc = 0x196850u;
            goto label_196850;
        }
    }
    ctx->pc = 0x1962B4u;
label_1962b4:
    // 0x1962b4: 0x12090162
label_1962b8:
    if (ctx->pc == 0x1962B8u) {
        ctx->pc = 0x1962B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1962BCu;
        goto label_1962bc;
    }
    ctx->pc = 0x1962B4u;
    {
        const bool branch_taken_0x1962b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 9));
        ctx->pc = 0x1962B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1962b4) {
            ctx->pc = 0x196840u;
            goto label_196840;
        }
    }
    ctx->pc = 0x1962BCu;
label_1962bc:
    // 0x1962bc: 0x12040157
label_1962c0:
    if (ctx->pc == 0x1962C0u) {
        ctx->pc = 0x1962C0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1962C4u;
        goto label_1962c4;
    }
    ctx->pc = 0x1962BCu;
    {
        const bool branch_taken_0x1962bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962C0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1962bc) {
            ctx->pc = 0x19681Cu;
            goto label_19681c;
        }
    }
    ctx->pc = 0x1962C4u;
label_1962c4:
    // 0x1962c4: 0x2404000e
    ctx->pc = 0x1962c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_1962c8:
    // 0x1962c8: 0x120400f8
label_1962cc:
    if (ctx->pc == 0x1962CCu) {
        ctx->pc = 0x1962CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 97));
        ctx->pc = 0x1962D0u;
        goto label_1962d0;
    }
    ctx->pc = 0x1962C8u;
    {
        const bool branch_taken_0x1962c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 97));
        if (branch_taken_0x1962c8) {
            ctx->pc = 0x1966ACu;
            goto label_1966ac;
        }
    }
    ctx->pc = 0x1962D0u;
label_1962d0:
    // 0x1962d0: 0x120400e1
label_1962d4:
    if (ctx->pc == 0x1962D4u) {
        ctx->pc = 0x1962D4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1962D8u;
        goto label_1962d8;
    }
    ctx->pc = 0x1962D0u;
    {
        const bool branch_taken_0x1962d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962D4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1962d0) {
            ctx->pc = 0x196658u;
            goto label_196658;
        }
    }
    ctx->pc = 0x1962D8u;
label_1962d8:
    // 0x1962d8: 0x2404005e
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_1962dc:
    // 0x1962dc: 0x120400cb
label_1962e0:
    if (ctx->pc == 0x1962E0u) {
        ctx->pc = 0x1962E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1962E4u;
        goto label_1962e4;
    }
    ctx->pc = 0x1962DCu;
    {
        const bool branch_taken_0x1962dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1962dc) {
            ctx->pc = 0x19660Cu;
            goto label_19660c;
        }
    }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0x2404000d
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
label_1962e8:
    // 0x1962e8: 0x120400b5
label_1962ec:
    if (ctx->pc == 0x1962ECu) {
        ctx->pc = 0x1962ECu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1962F0u;
        goto label_1962f0;
    }
    ctx->pc = 0x1962E8u;
    {
        const bool branch_taken_0x1962e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x1962ECu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1962e8) {
            ctx->pc = 0x1965C0u;
            goto label_1965c0;
        }
    }
    ctx->pc = 0x1962F0u;
label_1962f0:
    // 0x1962f0: 0x2408000c
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
label_1962f4:
    // 0x1962f4: 0x120800a4
label_1962f8:
    if (ctx->pc == 0x1962F8u) {
        ctx->pc = 0x1962F8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1962FCu;
        goto label_1962fc;
    }
    ctx->pc = 0x1962F4u;
    {
        const bool branch_taken_0x1962f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 8));
        ctx->pc = 0x1962F8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1962f4) {
            ctx->pc = 0x196588u;
            goto label_196588;
        }
    }
    ctx->pc = 0x1962FCu;
label_1962fc:
    // 0x1962fc: 0x2404000b
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
label_196300:
    // 0x196300: 0x120402f7
label_196304:
    if (ctx->pc == 0x196304u) {
        ctx->pc = 0x196304u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x196308u;
        goto label_196308;
    }
    ctx->pc = 0x196300u;
    {
        const bool branch_taken_0x196300 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x196304u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x196300) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196308u;
label_196308:
    // 0x196308: 0x120402f5
label_19630c:
    if (ctx->pc == 0x19630Cu) {
        ctx->pc = 0x196310u;
        goto label_196310;
    }
    ctx->pc = 0x196308u;
    {
        const bool branch_taken_0x196308 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        if (branch_taken_0x196308) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196310u;
label_196310:
    // 0x196310: 0x24040009
    ctx->pc = 0x196310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
label_196314:
    // 0x196314: 0x120402f2
label_196318:
    if (ctx->pc == 0x196318u) {
        ctx->pc = 0x196318u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x19631Cu;
        goto label_19631c;
    }
    ctx->pc = 0x196314u;
    {
        const bool branch_taken_0x196314 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x196318u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x196314) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19631Cu;
label_19631c:
    // 0x19631c: 0x120702f0
label_196320:
    if (ctx->pc == 0x196320u) {
        ctx->pc = 0x196320u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x196324u;
        goto label_196324;
    }
    ctx->pc = 0x19631Cu;
    {
        const bool branch_taken_0x19631c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 7));
        ctx->pc = 0x196320u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x19631c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196324u;
label_196324:
    // 0x196324: 0x12040084
label_196328:
    if (ctx->pc == 0x196328u) {
        ctx->pc = 0x19632Cu;
        goto label_19632c;
    }
    ctx->pc = 0x196324u;
    {
        const bool branch_taken_0x196324 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        if (branch_taken_0x196324) {
            ctx->pc = 0x196538u;
            goto label_196538;
        }
    }
    ctx->pc = 0x19632Cu;
label_19632c:
    // 0x19632c: 0x24040006
    ctx->pc = 0x19632cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
label_196330:
    // 0x196330: 0x12040081
label_196334:
    if (ctx->pc == 0x196334u) {
        ctx->pc = 0x196334u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x196338u;
        goto label_196338;
    }
    ctx->pc = 0x196330u;
    {
        const bool branch_taken_0x196330 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x196334u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x196330) {
            ctx->pc = 0x196538u;
            goto label_196538;
        }
    }
    ctx->pc = 0x196338u;
label_196338:
    // 0x196338: 0x1204007f
label_19633c:
    if (ctx->pc == 0x19633Cu) {
        ctx->pc = 0x19633Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x196340u;
        goto label_196340;
    }
    ctx->pc = 0x196338u;
    {
        const bool branch_taken_0x196338 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x19633Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x196338) {
            ctx->pc = 0x196538u;
            goto label_196538;
        }
    }
    ctx->pc = 0x196340u;
label_196340:
    // 0x196340: 0x1206007d
label_196344:
    if (ctx->pc == 0x196344u) {
        ctx->pc = 0x196344u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x196348u;
        goto label_196348;
    }
    ctx->pc = 0x196340u;
    {
        const bool branch_taken_0x196340 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 6));
        ctx->pc = 0x196344u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x196340) {
            ctx->pc = 0x196538u;
            goto label_196538;
        }
    }
    ctx->pc = 0x196348u;
label_196348:
    // 0x196348: 0x12040060
label_19634c:
    if (ctx->pc == 0x19634Cu) {
        ctx->pc = 0x19634Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196350u;
        goto label_196350;
    }
    ctx->pc = 0x196348u;
    {
        const bool branch_taken_0x196348 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x19634Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196348) {
            ctx->pc = 0x1964CCu;
            goto label_1964cc;
        }
    }
    ctx->pc = 0x196350u;
label_196350:
    // 0x196350: 0x24020001
    ctx->pc = 0x196350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196354:
    // 0x196354: 0x12020014
label_196358:
    if (ctx->pc == 0x196358u) {
        ctx->pc = 0x196358u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x19635Cu;
        goto label_19635c;
    }
    ctx->pc = 0x196354u;
    {
        const bool branch_taken_0x196354 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x196358u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196354) {
            ctx->pc = 0x1963A8u;
            goto label_1963a8;
        }
    }
    ctx->pc = 0x19635Cu;
label_19635c:
    // 0x19635c: 0x24020003
    ctx->pc = 0x19635cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_196360:
    // 0x196360: 0x120202df
label_196364:
    if (ctx->pc == 0x196364u) {
        ctx->pc = 0x196368u;
        goto label_196368;
    }
    ctx->pc = 0x196360u;
    {
        const bool branch_taken_0x196360 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x196360) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196368u;
label_196368:
    // 0x196368: 0x12000003
label_19636c:
    if (ctx->pc == 0x19636Cu) {
        ctx->pc = 0x19636Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196370u;
        goto label_196370;
    }
    ctx->pc = 0x196368u;
    {
        const bool branch_taken_0x196368 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x19636Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196368) {
            ctx->pc = 0x196378u;
            goto label_196378;
        }
    }
    ctx->pc = 0x196370u;
label_196370:
    // 0x196370: 0x100002db
label_196374:
    if (ctx->pc == 0x196374u) {
        ctx->pc = 0x196378u;
        goto label_196378;
    }
    ctx->pc = 0x196370u;
    {
        const bool branch_taken_0x196370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196370) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196378u;
label_196378:
    // 0x196378: 0x2403ff9f
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967199));
label_19637c:
    // 0x19637c: 0x8c24fe70
    ctx->pc = 0x19637cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196380:
    // 0x196380: 0x8fa20038
    ctx->pc = 0x196380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196384:
    // 0x196384: 0x831824
    ctx->pc = 0x196384u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_196388:
    // 0x196388: 0x3c01002a
    ctx->pc = 0x196388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19638c:
    // 0x19638c: 0xac23fe70
    ctx->pc = 0x19638cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 3));
label_196390:
    // 0x196390: 0x3c01002a
    ctx->pc = 0x196390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196394:
    // 0x196394: 0x8c23fe70
    ctx->pc = 0x196394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196398:
    // 0x196398: 0x621025
    ctx->pc = 0x196398u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19639c:
    // 0x19639c: 0x3c01002a
    ctx->pc = 0x19639cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1963a0:
    // 0x1963a0: 0x100002cf
label_1963a4:
    if (ctx->pc == 0x1963A4u) {
        ctx->pc = 0x1963A4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1963A8u;
        goto label_1963a8;
    }
    ctx->pc = 0x1963A0u;
    {
        const bool branch_taken_0x1963a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1963A4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1963a0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1963A8u;
label_1963a8:
    // 0x1963a8: 0x8fa30038
    ctx->pc = 0x1963a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1963ac:
    // 0x1963ac: 0x8c24fe70
    ctx->pc = 0x1963acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1963b0:
    // 0x1963b0: 0x2402f0ff
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963455));
label_1963b4:
    // 0x1963b4: 0x821024
    ctx->pc = 0x1963b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1963b8:
    // 0x1963b8: 0x3c01002a
    ctx->pc = 0x1963b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1963bc:
    // 0x1963bc: 0x106002c8
label_1963c0:
    if (ctx->pc == 0x1963C0u) {
        ctx->pc = 0x1963C0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1963C4u;
        goto label_1963c4;
    }
    ctx->pc = 0x1963BCu;
    {
        const bool branch_taken_0x1963bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1963C0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1963bc) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1963C4u;
label_1963c4:
    // 0x1963c4: 0x24020800
    ctx->pc = 0x1963c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2048));
label_1963c8:
    // 0x1963c8: 0x1062003b
label_1963cc:
    if (ctx->pc == 0x1963CCu) {
        ctx->pc = 0x1963CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1963D0u;
        goto label_1963d0;
    }
    ctx->pc = 0x1963C8u;
    {
        const bool branch_taken_0x1963c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1963CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1963c8) {
            ctx->pc = 0x1964B8u;
            goto label_1964b8;
        }
    }
    ctx->pc = 0x1963D0u;
label_1963d0:
    // 0x1963d0: 0x24020700
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1792));
label_1963d4:
    // 0x1963d4: 0x10620033
label_1963d8:
    if (ctx->pc == 0x1963D8u) {
        ctx->pc = 0x1963D8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1963DCu;
        goto label_1963dc;
    }
    ctx->pc = 0x1963D4u;
    {
        const bool branch_taken_0x1963d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1963D8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1963d4) {
            ctx->pc = 0x1964A4u;
            goto label_1964a4;
        }
    }
    ctx->pc = 0x1963DCu;
label_1963dc:
    // 0x1963dc: 0x24020600
    ctx->pc = 0x1963dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1536));
label_1963e0:
    // 0x1963e0: 0x1062002b
label_1963e4:
    if (ctx->pc == 0x1963E4u) {
        ctx->pc = 0x1963E4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1963E8u;
        goto label_1963e8;
    }
    ctx->pc = 0x1963E0u;
    {
        const bool branch_taken_0x1963e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1963E4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1963e0) {
            ctx->pc = 0x196490u;
            goto label_196490;
        }
    }
    ctx->pc = 0x1963E8u;
label_1963e8:
    // 0x1963e8: 0x24020500
    ctx->pc = 0x1963e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1280));
label_1963ec:
    // 0x1963ec: 0x10620023
label_1963f0:
    if (ctx->pc == 0x1963F0u) {
        ctx->pc = 0x1963F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1963F4u;
        goto label_1963f4;
    }
    ctx->pc = 0x1963ECu;
    {
        const bool branch_taken_0x1963ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1963F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1963ec) {
            ctx->pc = 0x19647Cu;
            goto label_19647c;
        }
    }
    ctx->pc = 0x1963F4u;
label_1963f4:
    // 0x1963f4: 0x24020400
    ctx->pc = 0x1963f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_1963f8:
    // 0x1963f8: 0x1062001b
label_1963fc:
    if (ctx->pc == 0x1963FCu) {
        ctx->pc = 0x1963FCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196400u;
        goto label_196400;
    }
    ctx->pc = 0x1963F8u;
    {
        const bool branch_taken_0x1963f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1963FCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1963f8) {
            ctx->pc = 0x196468u;
            goto label_196468;
        }
    }
    ctx->pc = 0x196400u;
label_196400:
    // 0x196400: 0x24020300
    ctx->pc = 0x196400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
label_196404:
    // 0x196404: 0x10620013
label_196408:
    if (ctx->pc == 0x196408u) {
        ctx->pc = 0x196408u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x19640Cu;
        goto label_19640c;
    }
    ctx->pc = 0x196404u;
    {
        const bool branch_taken_0x196404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x196408u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196404) {
            ctx->pc = 0x196454u;
            goto label_196454;
        }
    }
    ctx->pc = 0x19640Cu;
label_19640c:
    // 0x19640c: 0x24020100
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
label_196410:
    // 0x196410: 0x1062000b
label_196414:
    if (ctx->pc == 0x196414u) {
        ctx->pc = 0x196414u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196418u;
        goto label_196418;
    }
    ctx->pc = 0x196410u;
    {
        const bool branch_taken_0x196410 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x196414u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196410) {
            ctx->pc = 0x196440u;
            goto label_196440;
        }
    }
    ctx->pc = 0x196418u;
label_196418:
    // 0x196418: 0x24020200
    ctx->pc = 0x196418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
label_19641c:
    // 0x19641c: 0x10620003
label_196420:
    if (ctx->pc == 0x196420u) {
        ctx->pc = 0x196420u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196424u;
        goto label_196424;
    }
    ctx->pc = 0x19641Cu;
    {
        const bool branch_taken_0x19641c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x196420u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x19641c) {
            ctx->pc = 0x19642Cu;
            goto label_19642c;
        }
    }
    ctx->pc = 0x196424u;
label_196424:
    // 0x196424: 0x100002ae
label_196428:
    if (ctx->pc == 0x196428u) {
        ctx->pc = 0x19642Cu;
        goto label_19642c;
    }
    ctx->pc = 0x196424u;
    {
        const bool branch_taken_0x196424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196424) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19642Cu;
label_19642c:
    // 0x19642c: 0x8c22fe70
    ctx->pc = 0x19642cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196430:
    // 0x196430: 0x34420200
    ctx->pc = 0x196430u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
label_196434:
    // 0x196434: 0x3c01002a
    ctx->pc = 0x196434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196438:
    // 0x196438: 0x100002a9
label_19643c:
    if (ctx->pc == 0x19643Cu) {
        ctx->pc = 0x19643Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196440u;
        goto label_196440;
    }
    ctx->pc = 0x196438u;
    {
        const bool branch_taken_0x196438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19643Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196438) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196440u;
label_196440:
    // 0x196440: 0x8c22fe70
    ctx->pc = 0x196440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196444:
    // 0x196444: 0x34420100
    ctx->pc = 0x196444u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
label_196448:
    // 0x196448: 0x3c01002a
    ctx->pc = 0x196448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19644c:
    // 0x19644c: 0x100002a4
label_196450:
    if (ctx->pc == 0x196450u) {
        ctx->pc = 0x196450u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196454u;
        goto label_196454;
    }
    ctx->pc = 0x19644Cu;
    {
        const bool branch_taken_0x19644c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196450u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x19644c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196454u;
label_196454:
    // 0x196454: 0x8c22fe70
    ctx->pc = 0x196454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196458:
    // 0x196458: 0x34420300
    ctx->pc = 0x196458u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 768));
label_19645c:
    // 0x19645c: 0x3c01002a
    ctx->pc = 0x19645cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196460:
    // 0x196460: 0x1000029f
label_196464:
    if (ctx->pc == 0x196464u) {
        ctx->pc = 0x196464u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196468u;
        goto label_196468;
    }
    ctx->pc = 0x196460u;
    {
        const bool branch_taken_0x196460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196464u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196460) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196468u;
label_196468:
    // 0x196468: 0x8c22fe70
    ctx->pc = 0x196468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_19646c:
    // 0x19646c: 0x34420400
    ctx->pc = 0x19646cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
label_196470:
    // 0x196470: 0x3c01002a
    ctx->pc = 0x196470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196474:
    // 0x196474: 0x1000029a
label_196478:
    if (ctx->pc == 0x196478u) {
        ctx->pc = 0x196478u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x19647Cu;
        goto label_19647c;
    }
    ctx->pc = 0x196474u;
    {
        const bool branch_taken_0x196474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196478u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196474) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19647Cu;
label_19647c:
    // 0x19647c: 0x8c22fe70
    ctx->pc = 0x19647cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196480:
    // 0x196480: 0x34420500
    ctx->pc = 0x196480u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1280));
label_196484:
    // 0x196484: 0x3c01002a
    ctx->pc = 0x196484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196488:
    // 0x196488: 0x10000295
label_19648c:
    if (ctx->pc == 0x19648Cu) {
        ctx->pc = 0x19648Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196490u;
        goto label_196490;
    }
    ctx->pc = 0x196488u;
    {
        const bool branch_taken_0x196488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19648Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196488) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196490u;
label_196490:
    // 0x196490: 0x8c22fe70
    ctx->pc = 0x196490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196494:
    // 0x196494: 0x34420600
    ctx->pc = 0x196494u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1536));
label_196498:
    // 0x196498: 0x3c01002a
    ctx->pc = 0x196498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19649c:
    // 0x19649c: 0x10000290
label_1964a0:
    if (ctx->pc == 0x1964A0u) {
        ctx->pc = 0x1964A0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1964A4u;
        goto label_1964a4;
    }
    ctx->pc = 0x19649Cu;
    {
        const bool branch_taken_0x19649c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964A0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x19649c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1964A4u;
label_1964a4:
    // 0x1964a4: 0x8c22fe70
    ctx->pc = 0x1964a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1964a8:
    // 0x1964a8: 0x34420700
    ctx->pc = 0x1964a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1792));
label_1964ac:
    // 0x1964ac: 0x3c01002a
    ctx->pc = 0x1964acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1964b0:
    // 0x1964b0: 0x1000028b
label_1964b4:
    if (ctx->pc == 0x1964B4u) {
        ctx->pc = 0x1964B4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1964B8u;
        goto label_1964b8;
    }
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964B4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0x8c22fe70
    ctx->pc = 0x1964b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1964bc:
    // 0x1964bc: 0x34420800
    ctx->pc = 0x1964bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_1964c0:
    // 0x1964c0: 0x3c01002a
    ctx->pc = 0x1964c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1964c4:
    // 0x1964c4: 0x10000286
label_1964c8:
    if (ctx->pc == 0x1964C8u) {
        ctx->pc = 0x1964C8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1964CCu;
        goto label_1964cc;
    }
    ctx->pc = 0x1964C4u;
    {
        const bool branch_taken_0x1964c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964C8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1964c4) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1964CCu;
label_1964cc:
    // 0x1964cc: 0x8faa0038
    ctx->pc = 0x1964ccu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1964d0:
    // 0x1964d0: 0x8c25fe70
    ctx->pc = 0x1964d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1964d4:
    // 0x1964d4: 0x2404ffe3
    ctx->pc = 0x1964d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967267));
label_1964d8:
    // 0x1964d8: 0xa42024
    ctx->pc = 0x1964d8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1964dc:
    // 0x1964dc: 0x3c01002a
    ctx->pc = 0x1964dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1964e0:
    // 0x1964e0: 0x1140027f
label_1964e4:
    if (ctx->pc == 0x1964E4u) {
        ctx->pc = 0x1964E4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        ctx->pc = 0x1964E8u;
        goto label_1964e8;
    }
    ctx->pc = 0x1964E0u;
    {
        const bool branch_taken_0x1964e0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964E4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        if (branch_taken_0x1964e0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1964E8u;
label_1964e8:
    // 0x1964e8: 0x1143000d
label_1964ec:
    if (ctx->pc == 0x1964ECu) {
        ctx->pc = 0x1964F0u;
        goto label_1964f0;
    }
    ctx->pc = 0x1964E8u;
    {
        const bool branch_taken_0x1964e8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 3));
        if (branch_taken_0x1964e8) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x1964F0u;
label_1964f0:
    // 0x1964f0: 0x1142000b
label_1964f4:
    if (ctx->pc == 0x1964F4u) {
        ctx->pc = 0x1964F8u;
        goto label_1964f8;
    }
    ctx->pc = 0x1964F0u;
    {
        const bool branch_taken_0x1964f0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 2));
        if (branch_taken_0x1964f0) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x1964F8u;
label_1964f8:
    // 0x1964f8: 0x11490009
label_1964fc:
    if (ctx->pc == 0x1964FCu) {
        ctx->pc = 0x196500u;
        goto label_196500;
    }
    ctx->pc = 0x1964F8u;
    {
        const bool branch_taken_0x1964f8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 9));
        if (branch_taken_0x1964f8) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x196500u;
label_196500:
    // 0x196500: 0x11480007
label_196504:
    if (ctx->pc == 0x196504u) {
        ctx->pc = 0x196508u;
        goto label_196508;
    }
    ctx->pc = 0x196500u;
    {
        const bool branch_taken_0x196500 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 8));
        if (branch_taken_0x196500) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x196508u;
label_196508:
    // 0x196508: 0x11470005
label_19650c:
    if (ctx->pc == 0x19650Cu) {
        ctx->pc = 0x196510u;
        goto label_196510;
    }
    ctx->pc = 0x196508u;
    {
        const bool branch_taken_0x196508 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 7));
        if (branch_taken_0x196508) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0x11460003
label_196514:
    if (ctx->pc == 0x196514u) {
        ctx->pc = 0x196518u;
        goto label_196518;
    }
    ctx->pc = 0x196510u;
    {
        const bool branch_taken_0x196510 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 6));
        if (branch_taken_0x196510) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x196518u;
label_196518:
    // 0x196518: 0x10000271
label_19651c:
    if (ctx->pc == 0x19651Cu) {
        ctx->pc = 0x196520u;
        goto label_196520;
    }
    ctx->pc = 0x196518u;
    {
        const bool branch_taken_0x196518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196518) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196520u;
label_196520:
    // 0x196520: 0x3c01002a
    ctx->pc = 0x196520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196524:
    // 0x196524: 0x8c22fe70
    ctx->pc = 0x196524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196528:
    // 0x196528: 0x4a1025
    ctx->pc = 0x196528u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_19652c:
    // 0x19652c: 0x3c01002a
    ctx->pc = 0x19652cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196530:
    // 0x196530: 0x1000026b
label_196534:
    if (ctx->pc == 0x196534u) {
        ctx->pc = 0x196534u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196538u;
        goto label_196538;
    }
    ctx->pc = 0x196530u;
    {
        const bool branch_taken_0x196530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196534u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196530) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196538u;
label_196538:
    // 0x196538: 0x8fa30038
    ctx->pc = 0x196538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19653c:
    // 0x19653c: 0x24020004
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_196540:
    // 0x196540: 0x16020009
label_196544:
    if (ctx->pc == 0x196544u) {
        ctx->pc = 0x196544u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->pc = 0x196548u;
        goto label_196548;
    }
    ctx->pc = 0x196540u;
    {
        const bool branch_taken_0x196540 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x196544u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        if (branch_taken_0x196540) {
            ctx->pc = 0x196568u;
            goto label_196568;
        }
    }
    ctx->pc = 0x196548u;
label_196548:
    // 0x196548: 0x24040001
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_19654c:
    // 0x19654c: 0xc0675c8
label_196550:
    if (ctx->pc == 0x196550u) {
        ctx->pc = 0x196550u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x196554u;
        goto label_196554;
    }
    ctx->pc = 0x19654Cu;
    SET_GPR_U32(ctx, 31, 0x196554u);
    ctx->pc = 0x196550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x19D720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D720_0x19d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196554u; }
    }
    if (ctx->pc != 0x196554u) { return; }
    ctx->pc = 0x196554u;
label_196554:
    // 0x196554: 0xc066118
label_196558:
    if (ctx->pc == 0x196558u) {
        ctx->pc = 0x196558u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x19655Cu;
        goto label_19655c;
    }
    ctx->pc = 0x196554u;
    SET_GPR_U32(ctx, 31, 0x19655Cu);
    ctx->pc = 0x196558u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->pc = 0x198460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198460_0x198460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19655Cu; }
    }
    if (ctx->pc != 0x19655Cu) { return; }
    ctx->pc = 0x19655Cu;
label_19655c:
    // 0x19655c: 0x8fa2003c
    ctx->pc = 0x19655cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_196560:
    // 0x196560: 0x3c01002a
    ctx->pc = 0x196560u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196564:
    // 0x196564: 0xac22fee8
    ctx->pc = 0x196564u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967016), GPR_U32(ctx, 2));
label_196568:
    // 0x196568: 0x8fa4003c
    ctx->pc = 0x196568u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19656c:
    // 0x19656c: 0x2602fffc
    ctx->pc = 0x19656cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967292));
label_196570:
    // 0x196570: 0x21880
    ctx->pc = 0x196570u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_196574:
    // 0x196574: 0x3c020029
    ctx->pc = 0x196574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_196578:
    // 0x196578: 0x24424e60
    ctx->pc = 0x196578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20064));
label_19657c:
    // 0x19657c: 0x431021
    ctx->pc = 0x19657cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196580:
    // 0x196580: 0x10000257
label_196584:
    if (ctx->pc == 0x196584u) {
        ctx->pc = 0x196584u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x196588u;
        goto label_196588;
    }
    ctx->pc = 0x196580u;
    {
        const bool branch_taken_0x196580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196584u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x196580) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196588u;
label_196588:
    // 0x196588: 0x8fa30038
    ctx->pc = 0x196588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19658c:
    // 0x19658c: 0x8c25fe70
    ctx->pc = 0x19658cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196590:
    // 0x196590: 0x2404ff7f
    ctx->pc = 0x196590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967167));
label_196594:
    // 0x196594: 0x24020001
    ctx->pc = 0x196594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196598:
    // 0x196598: 0xa42024
    ctx->pc = 0x196598u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19659c:
    // 0x19659c: 0x3c01002a
    ctx->pc = 0x19659cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965a0:
    // 0x1965a0: 0x1462024f
label_1965a4:
    if (ctx->pc == 0x1965A4u) {
        ctx->pc = 0x1965A4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        ctx->pc = 0x1965A8u;
        goto label_1965a8;
    }
    ctx->pc = 0x1965A0u;
    {
        const bool branch_taken_0x1965a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1965A4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        if (branch_taken_0x1965a0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1965A8u;
label_1965a8:
    // 0x1965a8: 0x3c01002a
    ctx->pc = 0x1965a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965ac:
    // 0x1965ac: 0x8c22fe70
    ctx->pc = 0x1965acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1965b0:
    // 0x1965b0: 0x34420080
    ctx->pc = 0x1965b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
label_1965b4:
    // 0x1965b4: 0x3c01002a
    ctx->pc = 0x1965b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965b8:
    // 0x1965b8: 0x10000249
label_1965bc:
    if (ctx->pc == 0x1965BCu) {
        ctx->pc = 0x1965BCu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1965C0u;
        goto label_1965c0;
    }
    ctx->pc = 0x1965B8u;
    {
        const bool branch_taken_0x1965b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1965BCu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1965b8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1965C0u;
label_1965c0:
    // 0x1965c0: 0x8fa40038
    ctx->pc = 0x1965c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1965c4:
    // 0x1965c4: 0x8c23fe68
    ctx->pc = 0x1965c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_1965c8:
    // 0x1965c8: 0x30620c00
    ctx->pc = 0x1965c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3072));
label_1965cc:
    // 0x1965cc: 0x10440244
label_1965d0:
    if (ctx->pc == 0x1965D0u) {
        ctx->pc = 0x1965D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294964223));
        ctx->pc = 0x1965D4u;
        goto label_1965d4;
    }
    ctx->pc = 0x1965CCu;
    {
        const bool branch_taken_0x1965cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1965D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294964223));
        if (branch_taken_0x1965cc) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1965D4u;
label_1965d4:
    // 0x1965d4: 0x3c01002a
    ctx->pc = 0x1965d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965d8:
    // 0x1965d8: 0x621024
    ctx->pc = 0x1965d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1965dc:
    // 0x1965dc: 0xac22fe68
    ctx->pc = 0x1965dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_1965e0:
    // 0x1965e0: 0x3c01002a
    ctx->pc = 0x1965e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965e4:
    // 0x1965e4: 0x8c22fe68
    ctx->pc = 0x1965e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_1965e8:
    // 0x1965e8: 0x441025
    ctx->pc = 0x1965e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1965ec:
    // 0x1965ec: 0x3c01002a
    ctx->pc = 0x1965ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965f0:
    // 0x1965f0: 0xac22fe68
    ctx->pc = 0x1965f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_1965f4:
    // 0x1965f4: 0x3c01002a
    ctx->pc = 0x1965f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1965f8:
    // 0x1965f8: 0x8c24fe68
    ctx->pc = 0x1965f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_1965fc:
    // 0x1965fc: 0xc065eec
label_196600:
    if (ctx->pc == 0x196600u) {
        ctx->pc = 0x196600u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196604u;
        goto label_196604;
    }
    ctx->pc = 0x1965FCu;
    SET_GPR_U32(ctx, 31, 0x196604u);
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197BB0_0x197bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196604u; }
    }
    if (ctx->pc != 0x196604u) { return; }
    ctx->pc = 0x196604u;
label_196604:
    // 0x196604: 0x10000236
label_196608:
    if (ctx->pc == 0x196608u) {
        ctx->pc = 0x19660Cu;
        goto label_19660c;
    }
    ctx->pc = 0x196604u;
    {
        const bool branch_taken_0x196604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196604) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19660Cu;
label_19660c:
    // 0x19660c: 0x8fa40038
    ctx->pc = 0x19660cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196610:
    // 0x196610: 0x8c23fe68
    ctx->pc = 0x196610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196614:
    // 0x196614: 0x306200ff
    ctx->pc = 0x196614u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
label_196618:
    // 0x196618: 0x10440231
label_19661c:
    if (ctx->pc == 0x19661Cu) {
        ctx->pc = 0x19661Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->pc = 0x196620u;
        goto label_196620;
    }
    ctx->pc = 0x196618u;
    {
        const bool branch_taken_0x196618 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x19661Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x196618) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196620u;
label_196620:
    // 0x196620: 0x3c01002a
    ctx->pc = 0x196620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196624:
    // 0x196624: 0x621024
    ctx->pc = 0x196624u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196628:
    // 0x196628: 0xac22fe68
    ctx->pc = 0x196628u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_19662c:
    // 0x19662c: 0x3c01002a
    ctx->pc = 0x19662cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196630:
    // 0x196630: 0x8c22fe68
    ctx->pc = 0x196630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196634:
    // 0x196634: 0x441025
    ctx->pc = 0x196634u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_196638:
    // 0x196638: 0x3c01002a
    ctx->pc = 0x196638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19663c:
    // 0x19663c: 0xac22fe68
    ctx->pc = 0x19663cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196640:
    // 0x196640: 0x3c01002a
    ctx->pc = 0x196640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196644:
    // 0x196644: 0x8c24fe68
    ctx->pc = 0x196644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196648:
    // 0x196648: 0xc065eec
label_19664c:
    if (ctx->pc == 0x19664Cu) {
        ctx->pc = 0x19664Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196650u;
        goto label_196650;
    }
    ctx->pc = 0x196648u;
    SET_GPR_U32(ctx, 31, 0x196650u);
    ctx->pc = 0x19664Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197BB0_0x197bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196650u; }
    }
    if (ctx->pc != 0x196650u) { return; }
    ctx->pc = 0x196650u;
label_196650:
    // 0x196650: 0x10000223
label_196654:
    if (ctx->pc == 0x196654u) {
        ctx->pc = 0x196658u;
        goto label_196658;
    }
    ctx->pc = 0x196650u;
    {
        const bool branch_taken_0x196650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196650) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196658u;
label_196658:
    // 0x196658: 0x8fa40038
    ctx->pc = 0x196658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19665c:
    // 0x19665c: 0x8c23fe68
    ctx->pc = 0x19665cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196660:
    // 0x196660: 0x3c020100
    ctx->pc = 0x196660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
label_196664:
    // 0x196664: 0x621024
    ctx->pc = 0x196664u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196668:
    // 0x196668: 0x1044021d
label_19666c:
    if (ctx->pc == 0x19666Cu) {
        ctx->pc = 0x19666Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65279 << 16));
        ctx->pc = 0x196670u;
        goto label_196670;
    }
    ctx->pc = 0x196668u;
    {
        const bool branch_taken_0x196668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x19666Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65279 << 16));
        if (branch_taken_0x196668) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196670u;
label_196670:
    // 0x196670: 0x3c01002a
    ctx->pc = 0x196670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196674:
    // 0x196674: 0x3442ffff
    ctx->pc = 0x196674u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_196678:
    // 0x196678: 0x621024
    ctx->pc = 0x196678u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19667c:
    // 0x19667c: 0xac22fe68
    ctx->pc = 0x19667cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196680:
    // 0x196680: 0x3c01002a
    ctx->pc = 0x196680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196684:
    // 0x196684: 0x8c22fe68
    ctx->pc = 0x196684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196688:
    // 0x196688: 0x441025
    ctx->pc = 0x196688u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19668c:
    // 0x19668c: 0x3c01002a
    ctx->pc = 0x19668cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196690:
    // 0x196690: 0xac22fe68
    ctx->pc = 0x196690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196694:
    // 0x196694: 0x3c01002a
    ctx->pc = 0x196694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196698:
    // 0x196698: 0x8c24fe68
    ctx->pc = 0x196698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_19669c:
    // 0x19669c: 0xc065eec
label_1966a0:
    if (ctx->pc == 0x1966A0u) {
        ctx->pc = 0x1966A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1966A4u;
        goto label_1966a4;
    }
    ctx->pc = 0x19669Cu;
    SET_GPR_U32(ctx, 31, 0x1966A4u);
    ctx->pc = 0x1966A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197BB0_0x197bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966A4u; }
    }
    if (ctx->pc != 0x1966A4u) { return; }
    ctx->pc = 0x1966A4u;
label_1966a4:
    // 0x1966a4: 0x1000020e
label_1966a8:
    if (ctx->pc == 0x1966A8u) {
        ctx->pc = 0x1966ACu;
        goto label_1966ac;
    }
    ctx->pc = 0x1966A4u;
    {
        const bool branch_taken_0x1966a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1966a4) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1966ACu;
label_1966ac:
    // 0x1966ac: 0x8fa20038
    ctx->pc = 0x1966acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1966b0:
    // 0x1966b0: 0x3c01002a
    ctx->pc = 0x1966b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1966b4:
    // 0x1966b4: 0xac22fe30
    ctx->pc = 0x1966b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966832), GPR_U32(ctx, 2));
label_1966b8:
    // 0x1966b8: 0x3c01002a
    ctx->pc = 0x1966b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1966bc:
    // 0x1966bc: 0x8c24fe30
    ctx->pc = 0x1966bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966832)));
label_1966c0:
    // 0x1966c0: 0x41402
    ctx->pc = 0x1966c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 16));
label_1966c4:
    // 0x1966c4: 0x304200ff
    ctx->pc = 0x1966c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1966c8:
    // 0x1966c8: 0x4400004
label_1966cc:
    if (ctx->pc == 0x1966CCu) {
        ctx->pc = 0x1966CCu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1966D0u;
        goto label_1966d0;
    }
    ctx->pc = 0x1966C8u;
    {
        const bool branch_taken_0x1966c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1966CCu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1966c8) {
            ctx->pc = 0x1966DCu;
            goto label_1966dc;
        }
    }
    ctx->pc = 0x1966D0u;
label_1966d0:
    // 0x1966d0: 0x44820000
    ctx->pc = 0x1966d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1966d4:
    // 0x1966d4: 0x10000007
label_1966d8:
    if (ctx->pc == 0x1966D8u) {
        ctx->pc = 0x1966D8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x1966DCu;
        goto label_1966dc;
    }
    ctx->pc = 0x1966D4u;
    {
        const bool branch_taken_0x1966d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1966D8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1966d4) {
            ctx->pc = 0x1966F4u;
            goto label_1966f4;
        }
    }
    ctx->pc = 0x1966DCu;
label_1966dc:
    // 0x1966dc: 0x30420001
    ctx->pc = 0x1966dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_1966e0:
    // 0x1966e0: 0x621825
    ctx->pc = 0x1966e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1966e4:
    // 0x1966e4: 0x44830000
    ctx->pc = 0x1966e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1966e8:
    // 0x1966e8: 0x0
    ctx->pc = 0x1966e8u;
    // NOP
label_1966ec:
    // 0x1966ec: 0x46800060
    ctx->pc = 0x1966ecu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1966f0:
    // 0x1966f0: 0x46010840
    ctx->pc = 0x1966f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1966f4:
    // 0x1966f4: 0x3c03437f
    ctx->pc = 0x1966f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
label_1966f8:
    // 0x1966f8: 0x41202
    ctx->pc = 0x1966f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
label_1966fc:
    // 0x1966fc: 0x44830000
    ctx->pc = 0x1966fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196700:
    // 0x196700: 0x304200ff
    ctx->pc = 0x196700u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_196704:
    // 0x196704: 0x46000803
    ctx->pc = 0x196704u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_196708:
    // 0x196708: 0x0
    ctx->pc = 0x196708u;
    // NOP
label_19670c:
    // 0x19670c: 0x3c010029
    ctx->pc = 0x19670cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196710:
    // 0x196710: 0x4400004
label_196714:
    if (ctx->pc == 0x196714u) {
        ctx->pc = 0x196714u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20048), bits); }
        ctx->pc = 0x196718u;
        goto label_196718;
    }
    ctx->pc = 0x196710u;
    {
        const bool branch_taken_0x196710 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x196714u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20048), bits); }
        if (branch_taken_0x196710) {
            ctx->pc = 0x196724u;
            goto label_196724;
        }
    }
    ctx->pc = 0x196718u;
label_196718:
    // 0x196718: 0x44820000
    ctx->pc = 0x196718u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_19671c:
    // 0x19671c: 0x10000008
label_196720:
    if (ctx->pc == 0x196720u) {
        ctx->pc = 0x196720u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x196724u;
        goto label_196724;
    }
    ctx->pc = 0x19671Cu;
    {
        const bool branch_taken_0x19671c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196720u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x19671c) {
            ctx->pc = 0x196740u;
            goto label_196740;
        }
    }
    ctx->pc = 0x196724u;
label_196724:
    // 0x196724: 0x21842
    ctx->pc = 0x196724u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
label_196728:
    // 0x196728: 0x30420001
    ctx->pc = 0x196728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_19672c:
    // 0x19672c: 0x621825
    ctx->pc = 0x19672cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196730:
    // 0x196730: 0x44830000
    ctx->pc = 0x196730u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196734:
    // 0x196734: 0x0
    ctx->pc = 0x196734u;
    // NOP
label_196738:
    // 0x196738: 0x46800060
    ctx->pc = 0x196738u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_19673c:
    // 0x19673c: 0x46010840
    ctx->pc = 0x19673cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_196740:
    // 0x196740: 0x3c03437f
    ctx->pc = 0x196740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
label_196744:
    // 0x196744: 0x308200ff
    ctx->pc = 0x196744u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
label_196748:
    // 0x196748: 0x44830000
    ctx->pc = 0x196748u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_19674c:
    // 0x19674c: 0x0
    ctx->pc = 0x19674cu;
    // NOP
label_196750:
    // 0x196750: 0x46000803
    ctx->pc = 0x196750u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_196754:
    // 0x196754: 0x0
    ctx->pc = 0x196754u;
    // NOP
label_196758:
    // 0x196758: 0x3c010029
    ctx->pc = 0x196758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_19675c:
    // 0x19675c: 0x4400004
label_196760:
    if (ctx->pc == 0x196760u) {
        ctx->pc = 0x196760u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20052), bits); }
        ctx->pc = 0x196764u;
        goto label_196764;
    }
    ctx->pc = 0x19675Cu;
    {
        const bool branch_taken_0x19675c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x196760u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20052), bits); }
        if (branch_taken_0x19675c) {
            ctx->pc = 0x196770u;
            goto label_196770;
        }
    }
    ctx->pc = 0x196764u;
label_196764:
    // 0x196764: 0x44820000
    ctx->pc = 0x196764u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_196768:
    // 0x196768: 0x10000008
label_19676c:
    if (ctx->pc == 0x19676Cu) {
        ctx->pc = 0x19676Cu;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x196770u;
        goto label_196770;
    }
    ctx->pc = 0x196768u;
    {
        const bool branch_taken_0x196768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19676Cu;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x196768) {
            ctx->pc = 0x19678Cu;
            goto label_19678c;
        }
    }
    ctx->pc = 0x196770u;
label_196770:
    // 0x196770: 0x21842
    ctx->pc = 0x196770u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
label_196774:
    // 0x196774: 0x30420001
    ctx->pc = 0x196774u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_196778:
    // 0x196778: 0x621825
    ctx->pc = 0x196778u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19677c:
    // 0x19677c: 0x44830000
    ctx->pc = 0x19677cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196780:
    // 0x196780: 0x0
    ctx->pc = 0x196780u;
    // NOP
label_196784:
    // 0x196784: 0x46800060
    ctx->pc = 0x196784u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_196788:
    // 0x196788: 0x46010840
    ctx->pc = 0x196788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19678c:
    // 0x19678c: 0x3c03437f
    ctx->pc = 0x19678cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
label_196790:
    // 0x196790: 0x41602
    ctx->pc = 0x196790u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 24));
label_196794:
    // 0x196794: 0x44830000
    ctx->pc = 0x196794u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196798:
    // 0x196798: 0x304400ff
    ctx->pc = 0x196798u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 255));
label_19679c:
    // 0x19679c: 0x240200ff
    ctx->pc = 0x19679cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_1967a0:
    // 0x1967a0: 0x46000803
    ctx->pc = 0x1967a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1967a4:
    // 0x1967a4: 0x0
    ctx->pc = 0x1967a4u;
    // NOP
label_1967a8:
    // 0x1967a8: 0x3c010029
    ctx->pc = 0x1967a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_1967ac:
    // 0x1967ac: 0x14820005
label_1967b0:
    if (ctx->pc == 0x1967B0u) {
        ctx->pc = 0x1967B0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20056), bits); }
        ctx->pc = 0x1967B4u;
        goto label_1967b4;
    }
    ctx->pc = 0x1967ACu;
    {
        const bool branch_taken_0x1967ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1967B0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20056), bits); }
        if (branch_taken_0x1967ac) {
            ctx->pc = 0x1967C4u;
            goto label_1967c4;
        }
    }
    ctx->pc = 0x1967B4u;
label_1967b4:
    // 0x1967b4: 0x3c024300
    ctx->pc = 0x1967b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
label_1967b8:
    // 0x1967b8: 0x3c010029
    ctx->pc = 0x1967b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_1967bc:
    // 0x1967bc: 0x100001c8
label_1967c0:
    if (ctx->pc == 0x1967C0u) {
        ctx->pc = 0x1967C0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20060), GPR_U32(ctx, 2));
        ctx->pc = 0x1967C4u;
        goto label_1967c4;
    }
    ctx->pc = 0x1967BCu;
    {
        const bool branch_taken_0x1967bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1967C0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20060), GPR_U32(ctx, 2));
        if (branch_taken_0x1967bc) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1967C4u;
label_1967c4:
    // 0x1967c4: 0x10800013
label_1967c8:
    if (ctx->pc == 0x1967C8u) {
        ctx->pc = 0x1967C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        ctx->pc = 0x1967CCu;
        goto label_1967cc;
    }
    ctx->pc = 0x1967C4u;
    {
        const bool branch_taken_0x1967c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1967C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x1967c4) {
            ctx->pc = 0x196814u;
            goto label_196814;
        }
    }
    ctx->pc = 0x1967CCu;
label_1967cc:
    // 0x1967cc: 0x42042
    ctx->pc = 0x1967ccu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
label_1967d0:
    // 0x1967d0: 0x14800002
label_1967d4:
    if (ctx->pc == 0x1967D4u) {
        ctx->pc = 0x1967D8u;
        goto label_1967d8;
    }
    ctx->pc = 0x1967D0u;
    {
        const bool branch_taken_0x1967d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1967d0) {
            ctx->pc = 0x1967DCu;
            goto label_1967dc;
        }
    }
    ctx->pc = 0x1967D8u;
label_1967d8:
    // 0x1967d8: 0x24040001
    ctx->pc = 0x1967d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1967dc:
    // 0x1967dc: 0x4800004
label_1967e0:
    if (ctx->pc == 0x1967E0u) {
        ctx->pc = 0x1967E0u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x1967E4u;
        goto label_1967e4;
    }
    ctx->pc = 0x1967DCu;
    {
        const bool branch_taken_0x1967dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1967E0u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1967dc) {
            ctx->pc = 0x1967F0u;
            goto label_1967f0;
        }
    }
    ctx->pc = 0x1967E4u;
label_1967e4:
    // 0x1967e4: 0x44840000
    ctx->pc = 0x1967e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
label_1967e8:
    // 0x1967e8: 0x10000007
label_1967ec:
    if (ctx->pc == 0x1967ECu) {
        ctx->pc = 0x1967ECu;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x1967F0u;
        goto label_1967f0;
    }
    ctx->pc = 0x1967E8u;
    {
        const bool branch_taken_0x1967e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1967ECu;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1967e8) {
            ctx->pc = 0x196808u;
            goto label_196808;
        }
    }
    ctx->pc = 0x1967F0u;
label_1967f0:
    // 0x1967f0: 0x30820001
    ctx->pc = 0x1967f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
label_1967f4:
    // 0x1967f4: 0x621825
    ctx->pc = 0x1967f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1967f8:
    // 0x1967f8: 0x44830000
    ctx->pc = 0x1967f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1967fc:
    // 0x1967fc: 0x0
    ctx->pc = 0x1967fcu;
    // NOP
label_196800:
    // 0x196800: 0x46800020
    ctx->pc = 0x196800u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_196804:
    // 0x196804: 0x46000000
    ctx->pc = 0x196804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_196808:
    // 0x196808: 0x3c010029
    ctx->pc = 0x196808u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_19680c:
    // 0x19680c: 0x100001b4
label_196810:
    if (ctx->pc == 0x196810u) {
        ctx->pc = 0x196810u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20060), bits); }
        ctx->pc = 0x196814u;
        goto label_196814;
    }
    ctx->pc = 0x19680Cu;
    {
        const bool branch_taken_0x19680c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196810u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20060), bits); }
        if (branch_taken_0x19680c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196814u;
label_196814:
    // 0x196814: 0x100001b2
label_196818:
    if (ctx->pc == 0x196818u) {
        ctx->pc = 0x196818u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20060), GPR_U32(ctx, 0));
        ctx->pc = 0x19681Cu;
        goto label_19681c;
    }
    ctx->pc = 0x196814u;
    {
        const bool branch_taken_0x196814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196818u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20060), GPR_U32(ctx, 0));
        if (branch_taken_0x196814) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19681Cu;
label_19681c:
    // 0x19681c: 0x8fa40038
    ctx->pc = 0x19681cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196820:
    // 0x196820: 0x8c22fe38
    ctx->pc = 0x196820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966840)));
label_196824:
    // 0x196824: 0x104401ae
label_196828:
    if (ctx->pc == 0x196828u) {
        ctx->pc = 0x19682Cu;
        goto label_19682c;
    }
    ctx->pc = 0x196824u;
    {
        const bool branch_taken_0x196824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x196824) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19682Cu;
label_19682c:
    // 0x19682c: 0x3c01002a
    ctx->pc = 0x19682cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196830:
    // 0x196830: 0xc0660b4
label_196834:
    if (ctx->pc == 0x196834u) {
        ctx->pc = 0x196834u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966840), GPR_U32(ctx, 4));
        ctx->pc = 0x196838u;
        goto label_196838;
    }
    ctx->pc = 0x196830u;
    SET_GPR_U32(ctx, 31, 0x196838u);
    ctx->pc = 0x196834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966840), GPR_U32(ctx, 4));
    ctx->pc = 0x1982D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001982D0_0x1982d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196838u; }
    }
    if (ctx->pc != 0x196838u) { return; }
    ctx->pc = 0x196838u;
label_196838:
    // 0x196838: 0x100001a9
label_19683c:
    if (ctx->pc == 0x19683Cu) {
        ctx->pc = 0x196840u;
        goto label_196840;
    }
    ctx->pc = 0x196838u;
    {
        const bool branch_taken_0x196838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196838) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196840u;
label_196840:
    // 0x196840: 0xc7a00038
    ctx->pc = 0x196840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196844:
    // 0x196844: 0x3c01002a
    ctx->pc = 0x196844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196848:
    // 0x196848: 0x100001a5
label_19684c:
    if (ctx->pc == 0x19684Cu) {
        ctx->pc = 0x19684Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966856), bits); }
        ctx->pc = 0x196850u;
        goto label_196850;
    }
    ctx->pc = 0x196848u;
    {
        const bool branch_taken_0x196848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19684Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966856), bits); }
        if (branch_taken_0x196848) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196850u;
label_196850:
    // 0x196850: 0xc7a00038
    ctx->pc = 0x196850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196854:
    // 0x196854: 0x3c01002a
    ctx->pc = 0x196854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196858:
    // 0x196858: 0x100001a1
label_19685c:
    if (ctx->pc == 0x19685Cu) {
        ctx->pc = 0x19685Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966848), bits); }
        ctx->pc = 0x196860u;
        goto label_196860;
    }
    ctx->pc = 0x196858u;
    {
        const bool branch_taken_0x196858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19685Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966848), bits); }
        if (branch_taken_0x196858) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196860u;
label_196860:
    // 0x196860: 0x3c02fffe
    ctx->pc = 0x196860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
label_196864:
    // 0x196864: 0x8c25fe70
    ctx->pc = 0x196864u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196868:
    // 0x196868: 0x34447fff
    ctx->pc = 0x196868u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 32767));
label_19686c:
    // 0x19686c: 0x8fa30038
    ctx->pc = 0x19686cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196870:
    // 0x196870: 0x34028000
    ctx->pc = 0x196870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_196874:
    // 0x196874: 0xa42024
    ctx->pc = 0x196874u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_196878:
    // 0x196878: 0x3c01002a
    ctx->pc = 0x196878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19687c:
    // 0x19687c: 0x14620198
label_196880:
    if (ctx->pc == 0x196880u) {
        ctx->pc = 0x196880u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        ctx->pc = 0x196884u;
        goto label_196884;
    }
    ctx->pc = 0x19687Cu;
    {
        const bool branch_taken_0x19687c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x196880u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        if (branch_taken_0x19687c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196884u;
label_196884:
    // 0x196884: 0x3c01002a
    ctx->pc = 0x196884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196888:
    // 0x196888: 0x8c22fe70
    ctx->pc = 0x196888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_19688c:
    // 0x19688c: 0x34428000
    ctx->pc = 0x19688cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
label_196890:
    // 0x196890: 0x3c01002a
    ctx->pc = 0x196890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196894:
    // 0x196894: 0x10000192
label_196898:
    if (ctx->pc == 0x196898u) {
        ctx->pc = 0x196898u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x19689Cu;
        goto label_19689c;
    }
    ctx->pc = 0x196894u;
    {
        const bool branch_taken_0x196894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196898u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196894) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19689Cu;
label_19689c:
    // 0x19689c: 0xc065d1c
label_1968a0:
    if (ctx->pc == 0x1968A0u) {
        ctx->pc = 0x1968A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x1968A4u;
        goto label_1968a4;
    }
    ctx->pc = 0x19689Cu;
    SET_GPR_U32(ctx, 31, 0x1968A4u);
    ctx->pc = 0x1968A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x197470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197470_0x197470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968A4u; }
    }
    if (ctx->pc != 0x1968A4u) { return; }
    ctx->pc = 0x1968A4u;
label_1968a4:
    // 0x1968a4: 0x1000018e
label_1968a8:
    if (ctx->pc == 0x1968A8u) {
        ctx->pc = 0x1968ACu;
        goto label_1968ac;
    }
    ctx->pc = 0x1968A4u;
    {
        const bool branch_taken_0x1968a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1968a4) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1968ACu;
label_1968ac:
    // 0x1968ac: 0x8fa40038
    ctx->pc = 0x1968acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1968b0:
    // 0x1968b0: 0x8c23fe70
    ctx->pc = 0x1968b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1968b4:
    // 0x1968b4: 0x2402fffc
    ctx->pc = 0x1968b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_1968b8:
    // 0x1968b8: 0x621024
    ctx->pc = 0x1968b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1968bc:
    // 0x1968bc: 0x3c01002a
    ctx->pc = 0x1968bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1968c0:
    // 0x1968c0: 0x10800187
label_1968c4:
    if (ctx->pc == 0x1968C4u) {
        ctx->pc = 0x1968C4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1968C8u;
        goto label_1968c8;
    }
    ctx->pc = 0x1968C0u;
    {
        const bool branch_taken_0x1968c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1968C4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1968c0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1968C8u;
label_1968c8:
    // 0x1968c8: 0x24020002
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1968cc:
    // 0x1968cc: 0x14820184
label_1968d0:
    if (ctx->pc == 0x1968D0u) {
        ctx->pc = 0x1968D0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x1968D4u;
        goto label_1968d4;
    }
    ctx->pc = 0x1968CCu;
    {
        const bool branch_taken_0x1968cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1968D0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x1968cc) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1968D4u;
label_1968d4:
    // 0x1968d4: 0x8c22fe70
    ctx->pc = 0x1968d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1968d8:
    // 0x1968d8: 0x34420002
    ctx->pc = 0x1968d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_1968dc:
    // 0x1968dc: 0x3c01002a
    ctx->pc = 0x1968dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1968e0:
    // 0x1968e0: 0x1000017f
label_1968e4:
    if (ctx->pc == 0x1968E4u) {
        ctx->pc = 0x1968E4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x1968E8u;
        goto label_1968e8;
    }
    ctx->pc = 0x1968E0u;
    {
        const bool branch_taken_0x1968e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1968E4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x1968e0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1968E8u;
label_1968e8:
    // 0x1968e8: 0x8fa60038
    ctx->pc = 0x1968e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1968ec:
    // 0x1968ec: 0x3c027000
    ctx->pc = 0x1968ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_1968f0:
    // 0x1968f0: 0x34453f40
    ctx->pc = 0x1968f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16192));
label_1968f4:
    // 0x1968f4: 0x24040008
    ctx->pc = 0x1968f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1968f8:
    // 0x1968f8: 0x8cc30000
    ctx->pc = 0x1968f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1968fc:
    // 0x1968fc: 0x2484ffff
    ctx->pc = 0x1968fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_196900:
    // 0x196900: 0x8cc20004
    ctx->pc = 0x196900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_196904:
    // 0x196904: 0xaca30000
    ctx->pc = 0x196904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196908:
    // 0x196908: 0x24c60008
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_19690c:
    // 0x19690c: 0xaca20004
    ctx->pc = 0x19690cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_196910:
    // 0x196910: 0x1c80fff9
label_196914:
    if (ctx->pc == 0x196914u) {
        ctx->pc = 0x196914u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x196918u;
        goto label_196918;
    }
    ctx->pc = 0x196910u;
    {
        const bool branch_taken_0x196910 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x196914u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x196910) {
            ctx->pc = 0x1968F8u;
            goto label_1968f8;
        }
    }
    ctx->pc = 0x196918u;
label_196918:
    // 0x196918: 0x10000171
label_19691c:
    if (ctx->pc == 0x19691Cu) {
        ctx->pc = 0x196920u;
        goto label_196920;
    }
    ctx->pc = 0x196918u;
    {
        const bool branch_taken_0x196918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196918) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196920u;
label_196920:
    // 0x196920: 0x8fa60038
    ctx->pc = 0x196920u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196924:
    // 0x196924: 0x3c027000
    ctx->pc = 0x196924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_196928:
    // 0x196928: 0x34453f00
    ctx->pc = 0x196928u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
label_19692c:
    // 0x19692c: 0x24040008
    ctx->pc = 0x19692cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_196930:
    // 0x196930: 0x8cc30000
    ctx->pc = 0x196930u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_196934:
    // 0x196934: 0x2484ffff
    ctx->pc = 0x196934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_196938:
    // 0x196938: 0x8cc20004
    ctx->pc = 0x196938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_19693c:
    // 0x19693c: 0xaca30000
    ctx->pc = 0x19693cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196940:
    // 0x196940: 0x24c60008
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_196944:
    // 0x196944: 0xaca20004
    ctx->pc = 0x196944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_196948:
    // 0x196948: 0x1c80fff9
label_19694c:
    if (ctx->pc == 0x19694Cu) {
        ctx->pc = 0x19694Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x196950u;
        goto label_196950;
    }
    ctx->pc = 0x196948u;
    {
        const bool branch_taken_0x196948 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x19694Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x196948) {
            ctx->pc = 0x196930u;
            goto label_196930;
        }
    }
    ctx->pc = 0x196950u;
label_196950:
    // 0x196950: 0x3c027000
    ctx->pc = 0x196950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_196954:
    // 0x196954: 0x3c040029
    ctx->pc = 0x196954u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
label_196958:
    // 0x196958: 0x24844d40
    ctx->pc = 0x196958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19776));
label_19695c:
    // 0x19695c: 0x34453f00
    ctx->pc = 0x19695cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
label_196960:
    // 0x196960: 0xc0644a0
label_196964:
    if (ctx->pc == 0x196964u) {
        ctx->pc = 0x196964u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16256));
        ctx->pc = 0x196968u;
        goto label_196968;
    }
    ctx->pc = 0x196960u;
    SET_GPR_U32(ctx, 31, 0x196968u);
    ctx->pc = 0x196964u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16256));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196968u; }
    }
    if (ctx->pc != 0x196968u) { return; }
    ctx->pc = 0x196968u;
label_196968:
    // 0x196968: 0x3c040029
    ctx->pc = 0x196968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
label_19696c:
    // 0x19696c: 0x3c027000
    ctx->pc = 0x19696cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_196970:
    // 0x196970: 0x3c060029
    ctx->pc = 0x196970u;
    SET_GPR_U32(ctx, 6, ((uint32_t)41 << 16));
label_196974:
    // 0x196974: 0x24844d80
    ctx->pc = 0x196974u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19840));
label_196978:
    // 0x196978: 0x34453f00
    ctx->pc = 0x196978u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
label_19697c:
    // 0x19697c: 0xc0644a0
label_196980:
    if (ctx->pc == 0x196980u) {
        ctx->pc = 0x196980u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19904));
        ctx->pc = 0x196984u;
        goto label_196984;
    }
    ctx->pc = 0x19697Cu;
    SET_GPR_U32(ctx, 31, 0x196984u);
    ctx->pc = 0x196980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19904));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196984u; }
    }
    if (ctx->pc != 0x196984u) { return; }
    ctx->pc = 0x196984u;
label_196984:
    // 0x196984: 0x10000156
label_196988:
    if (ctx->pc == 0x196988u) {
        ctx->pc = 0x19698Cu;
        goto label_19698c;
    }
    ctx->pc = 0x196984u;
    {
        const bool branch_taken_0x196984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196984) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x19698Cu;
label_19698c:
    // 0x19698c: 0x8fa20038
    ctx->pc = 0x19698cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196990:
    // 0x196990: 0x8c450000
    ctx->pc = 0x196990u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196994:
    // 0x196994: 0xc44c0010
    ctx->pc = 0x196994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_196998:
    // 0x196998: 0x8c460004
    ctx->pc = 0x196998u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19699c:
    // 0x19699c: 0xc44d0014
    ctx->pc = 0x19699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1969a0:
    // 0x1969a0: 0x8c470008
    ctx->pc = 0x1969a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1969a4:
    // 0x1969a4: 0x8c48000c
    ctx->pc = 0x1969a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1969a8:
    // 0x1969a8: 0xc063e20
label_1969ac:
    if (ctx->pc == 0x1969ACu) {
        ctx->pc = 0x1969ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1969B0u;
        goto label_1969b0;
    }
    ctx->pc = 0x1969A8u;
    SET_GPR_U32(ctx, 31, 0x1969B0u);
    ctx->pc = 0x1969ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x18F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F880_0x18f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969B0u; }
    }
    if (ctx->pc != 0x1969B0u) { return; }
    ctx->pc = 0x1969B0u;
label_1969b0:
    // 0x1969b0: 0x1000014b
label_1969b4:
    if (ctx->pc == 0x1969B4u) {
        ctx->pc = 0x1969B8u;
        goto label_1969b8;
    }
    ctx->pc = 0x1969B0u;
    {
        const bool branch_taken_0x1969b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1969b0) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1969B8u;
label_1969b8:
    // 0x1969b8: 0x8fa60038
    ctx->pc = 0x1969b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1969bc:
    // 0x1969bc: 0x3c027000
    ctx->pc = 0x1969bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
label_1969c0:
    // 0x1969c0: 0x34453fc0
    ctx->pc = 0x1969c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16320));
label_1969c4:
    // 0x1969c4: 0x24040008
    ctx->pc = 0x1969c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1969c8:
    // 0x1969c8: 0x8cc30000
    ctx->pc = 0x1969c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1969cc:
    // 0x1969cc: 0x2484ffff
    ctx->pc = 0x1969ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1969d0:
    // 0x1969d0: 0x8cc20004
    ctx->pc = 0x1969d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1969d4:
    // 0x1969d4: 0xaca30000
    ctx->pc = 0x1969d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1969d8:
    // 0x1969d8: 0x24c60008
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_1969dc:
    // 0x1969dc: 0xaca20004
    ctx->pc = 0x1969dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1969e0:
    // 0x1969e0: 0x1c80fff9
label_1969e4:
    if (ctx->pc == 0x1969E4u) {
        ctx->pc = 0x1969E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x1969E8u;
        goto label_1969e8;
    }
    ctx->pc = 0x1969E0u;
    {
        const bool branch_taken_0x1969e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1969E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1969e0) {
            ctx->pc = 0x1969C8u;
            goto label_1969c8;
        }
    }
    ctx->pc = 0x1969E8u;
label_1969e8:
    // 0x1969e8: 0x1000013d
label_1969ec:
    if (ctx->pc == 0x1969ECu) {
        ctx->pc = 0x1969F0u;
        goto label_1969f0;
    }
    ctx->pc = 0x1969E8u;
    {
        const bool branch_taken_0x1969e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1969e8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x1969F0u;
label_1969f0:
    // 0x1969f0: 0x8fa20038
    ctx->pc = 0x1969f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1969f4:
    // 0x1969f4: 0x8c23fe70
    ctx->pc = 0x1969f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1969f8:
    // 0x1969f8: 0x31a3c
    ctx->pc = 0x1969f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1969fc:
    // 0x1969fc: 0x3c01002a
    ctx->pc = 0x1969fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196a00:
    // 0x196a00: 0x31a3e
    ctx->pc = 0x196a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_196a04:
    // 0x196a04: 0xac23fe70
    ctx->pc = 0x196a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 3));
label_196a08:
    // 0x196a08: 0x3c01002a
    ctx->pc = 0x196a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196a0c:
    // 0x196a0c: 0x8c23fe70
    ctx->pc = 0x196a0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196a10:
    // 0x196a10: 0x621025
    ctx->pc = 0x196a10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196a14:
    // 0x196a14: 0x3c01002a
    ctx->pc = 0x196a14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196a18:
    // 0x196a18: 0x10000131
label_196a1c:
    if (ctx->pc == 0x196A1Cu) {
        ctx->pc = 0x196A1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196A20u;
        goto label_196a20;
    }
    ctx->pc = 0x196A18u;
    {
        const bool branch_taken_0x196a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196a18) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196A20u;
label_196a20:
    // 0x196a20: 0x8fa20038
    ctx->pc = 0x196a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196a24:
    // 0x196a24: 0x2c410008
    ctx->pc = 0x196a24u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 8));
label_196a28:
    // 0x196a28: 0x1020001e
label_196a2c:
    if (ctx->pc == 0x196A2Cu) {
        ctx->pc = 0x196A30u;
        goto label_196a30;
    }
    ctx->pc = 0x196A28u;
    {
        const bool branch_taken_0x196a28 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x196a28) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A30u;
label_196a30:
    // 0x196a30: 0x3c030024
    ctx->pc = 0x196a30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_196a34:
    // 0x196a34: 0x21080
    ctx->pc = 0x196a34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_196a38:
    // 0x196a38: 0x24631cc0
    ctx->pc = 0x196a38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7360));
label_196a3c:
    // 0x196a3c: 0x431021
    ctx->pc = 0x196a3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196a40:
    // 0x196a40: 0x8c420000
    ctx->pc = 0x196a40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196a44:
    // 0x196a44: 0x400008
label_196a48:
    if (ctx->pc == 0x196A48u) {
        ctx->pc = 0x196A4Cu;
        goto label_196a4c;
    }
    ctx->pc = 0x196A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196010u: goto label_196010;
            case 0x196014u: goto label_196014;
            case 0x196018u: goto label_196018;
            case 0x19601Cu: goto label_19601c;
            case 0x196020u: goto label_196020;
            case 0x196024u: goto label_196024;
            case 0x196028u: goto label_196028;
            case 0x19602Cu: goto label_19602c;
            case 0x196030u: goto label_196030;
            case 0x196034u: goto label_196034;
            case 0x196038u: goto label_196038;
            case 0x19603Cu: goto label_19603c;
            case 0x196040u: goto label_196040;
            case 0x196044u: goto label_196044;
            case 0x196048u: goto label_196048;
            case 0x19604Cu: goto label_19604c;
            case 0x196050u: goto label_196050;
            case 0x196054u: goto label_196054;
            case 0x196058u: goto label_196058;
            case 0x19605Cu: goto label_19605c;
            case 0x196060u: goto label_196060;
            case 0x196064u: goto label_196064;
            case 0x196068u: goto label_196068;
            case 0x19606Cu: goto label_19606c;
            case 0x196070u: goto label_196070;
            case 0x196074u: goto label_196074;
            case 0x196078u: goto label_196078;
            case 0x19607Cu: goto label_19607c;
            case 0x196080u: goto label_196080;
            case 0x196084u: goto label_196084;
            case 0x196088u: goto label_196088;
            case 0x19608Cu: goto label_19608c;
            case 0x196090u: goto label_196090;
            case 0x196094u: goto label_196094;
            case 0x196098u: goto label_196098;
            case 0x19609Cu: goto label_19609c;
            case 0x1960A0u: goto label_1960a0;
            case 0x1960A4u: goto label_1960a4;
            case 0x1960A8u: goto label_1960a8;
            case 0x1960ACu: goto label_1960ac;
            case 0x1960B0u: goto label_1960b0;
            case 0x1960B4u: goto label_1960b4;
            case 0x1960B8u: goto label_1960b8;
            case 0x1960BCu: goto label_1960bc;
            case 0x1960C0u: goto label_1960c0;
            case 0x1960C4u: goto label_1960c4;
            case 0x1960C8u: goto label_1960c8;
            case 0x1960CCu: goto label_1960cc;
            case 0x1960D0u: goto label_1960d0;
            case 0x1960D4u: goto label_1960d4;
            case 0x1960D8u: goto label_1960d8;
            case 0x1960DCu: goto label_1960dc;
            case 0x1960E0u: goto label_1960e0;
            case 0x1960E4u: goto label_1960e4;
            case 0x1960E8u: goto label_1960e8;
            case 0x1960ECu: goto label_1960ec;
            case 0x1960F0u: goto label_1960f0;
            case 0x1960F4u: goto label_1960f4;
            case 0x1960F8u: goto label_1960f8;
            case 0x1960FCu: goto label_1960fc;
            case 0x196100u: goto label_196100;
            case 0x196104u: goto label_196104;
            case 0x196108u: goto label_196108;
            case 0x19610Cu: goto label_19610c;
            case 0x196110u: goto label_196110;
            case 0x196114u: goto label_196114;
            case 0x196118u: goto label_196118;
            case 0x19611Cu: goto label_19611c;
            case 0x196120u: goto label_196120;
            case 0x196124u: goto label_196124;
            case 0x196128u: goto label_196128;
            case 0x19612Cu: goto label_19612c;
            case 0x196130u: goto label_196130;
            case 0x196134u: goto label_196134;
            case 0x196138u: goto label_196138;
            case 0x19613Cu: goto label_19613c;
            case 0x196140u: goto label_196140;
            case 0x196144u: goto label_196144;
            case 0x196148u: goto label_196148;
            case 0x19614Cu: goto label_19614c;
            case 0x196150u: goto label_196150;
            case 0x196154u: goto label_196154;
            case 0x196158u: goto label_196158;
            case 0x19615Cu: goto label_19615c;
            case 0x196160u: goto label_196160;
            case 0x196164u: goto label_196164;
            case 0x196168u: goto label_196168;
            case 0x19616Cu: goto label_19616c;
            case 0x196170u: goto label_196170;
            case 0x196174u: goto label_196174;
            case 0x196178u: goto label_196178;
            case 0x19617Cu: goto label_19617c;
            case 0x196180u: goto label_196180;
            case 0x196184u: goto label_196184;
            case 0x196188u: goto label_196188;
            case 0x19618Cu: goto label_19618c;
            case 0x196190u: goto label_196190;
            case 0x196194u: goto label_196194;
            case 0x196198u: goto label_196198;
            case 0x19619Cu: goto label_19619c;
            case 0x1961A0u: goto label_1961a0;
            case 0x1961A4u: goto label_1961a4;
            case 0x1961A8u: goto label_1961a8;
            case 0x1961ACu: goto label_1961ac;
            case 0x1961B0u: goto label_1961b0;
            case 0x1961B4u: goto label_1961b4;
            case 0x1961B8u: goto label_1961b8;
            case 0x1961BCu: goto label_1961bc;
            case 0x1961C0u: goto label_1961c0;
            case 0x1961C4u: goto label_1961c4;
            case 0x1961C8u: goto label_1961c8;
            case 0x1961CCu: goto label_1961cc;
            case 0x1961D0u: goto label_1961d0;
            case 0x1961D4u: goto label_1961d4;
            case 0x1961D8u: goto label_1961d8;
            case 0x1961DCu: goto label_1961dc;
            case 0x1961E0u: goto label_1961e0;
            case 0x1961E4u: goto label_1961e4;
            case 0x1961E8u: goto label_1961e8;
            case 0x1961ECu: goto label_1961ec;
            case 0x1961F0u: goto label_1961f0;
            case 0x1961F4u: goto label_1961f4;
            case 0x1961F8u: goto label_1961f8;
            case 0x1961FCu: goto label_1961fc;
            case 0x196200u: goto label_196200;
            case 0x196204u: goto label_196204;
            case 0x196208u: goto label_196208;
            case 0x19620Cu: goto label_19620c;
            case 0x196210u: goto label_196210;
            case 0x196214u: goto label_196214;
            case 0x196218u: goto label_196218;
            case 0x19621Cu: goto label_19621c;
            case 0x196220u: goto label_196220;
            case 0x196224u: goto label_196224;
            case 0x196228u: goto label_196228;
            case 0x19622Cu: goto label_19622c;
            case 0x196230u: goto label_196230;
            case 0x196234u: goto label_196234;
            case 0x196238u: goto label_196238;
            case 0x19623Cu: goto label_19623c;
            case 0x196240u: goto label_196240;
            case 0x196244u: goto label_196244;
            case 0x196248u: goto label_196248;
            case 0x19624Cu: goto label_19624c;
            case 0x196250u: goto label_196250;
            case 0x196254u: goto label_196254;
            case 0x196258u: goto label_196258;
            case 0x19625Cu: goto label_19625c;
            case 0x196260u: goto label_196260;
            case 0x196264u: goto label_196264;
            case 0x196268u: goto label_196268;
            case 0x19626Cu: goto label_19626c;
            case 0x196270u: goto label_196270;
            case 0x196274u: goto label_196274;
            case 0x196278u: goto label_196278;
            case 0x19627Cu: goto label_19627c;
            case 0x196280u: goto label_196280;
            case 0x196284u: goto label_196284;
            case 0x196288u: goto label_196288;
            case 0x19628Cu: goto label_19628c;
            case 0x196290u: goto label_196290;
            case 0x196294u: goto label_196294;
            case 0x196298u: goto label_196298;
            case 0x19629Cu: goto label_19629c;
            case 0x1962A0u: goto label_1962a0;
            case 0x1962A4u: goto label_1962a4;
            case 0x1962A8u: goto label_1962a8;
            case 0x1962ACu: goto label_1962ac;
            case 0x1962B0u: goto label_1962b0;
            case 0x1962B4u: goto label_1962b4;
            case 0x1962B8u: goto label_1962b8;
            case 0x1962BCu: goto label_1962bc;
            case 0x1962C0u: goto label_1962c0;
            case 0x1962C4u: goto label_1962c4;
            case 0x1962C8u: goto label_1962c8;
            case 0x1962CCu: goto label_1962cc;
            case 0x1962D0u: goto label_1962d0;
            case 0x1962D4u: goto label_1962d4;
            case 0x1962D8u: goto label_1962d8;
            case 0x1962DCu: goto label_1962dc;
            case 0x1962E0u: goto label_1962e0;
            case 0x1962E4u: goto label_1962e4;
            case 0x1962E8u: goto label_1962e8;
            case 0x1962ECu: goto label_1962ec;
            case 0x1962F0u: goto label_1962f0;
            case 0x1962F4u: goto label_1962f4;
            case 0x1962F8u: goto label_1962f8;
            case 0x1962FCu: goto label_1962fc;
            case 0x196300u: goto label_196300;
            case 0x196304u: goto label_196304;
            case 0x196308u: goto label_196308;
            case 0x19630Cu: goto label_19630c;
            case 0x196310u: goto label_196310;
            case 0x196314u: goto label_196314;
            case 0x196318u: goto label_196318;
            case 0x19631Cu: goto label_19631c;
            case 0x196320u: goto label_196320;
            case 0x196324u: goto label_196324;
            case 0x196328u: goto label_196328;
            case 0x19632Cu: goto label_19632c;
            case 0x196330u: goto label_196330;
            case 0x196334u: goto label_196334;
            case 0x196338u: goto label_196338;
            case 0x19633Cu: goto label_19633c;
            case 0x196340u: goto label_196340;
            case 0x196344u: goto label_196344;
            case 0x196348u: goto label_196348;
            case 0x19634Cu: goto label_19634c;
            case 0x196350u: goto label_196350;
            case 0x196354u: goto label_196354;
            case 0x196358u: goto label_196358;
            case 0x19635Cu: goto label_19635c;
            case 0x196360u: goto label_196360;
            case 0x196364u: goto label_196364;
            case 0x196368u: goto label_196368;
            case 0x19636Cu: goto label_19636c;
            case 0x196370u: goto label_196370;
            case 0x196374u: goto label_196374;
            case 0x196378u: goto label_196378;
            case 0x19637Cu: goto label_19637c;
            case 0x196380u: goto label_196380;
            case 0x196384u: goto label_196384;
            case 0x196388u: goto label_196388;
            case 0x19638Cu: goto label_19638c;
            case 0x196390u: goto label_196390;
            case 0x196394u: goto label_196394;
            case 0x196398u: goto label_196398;
            case 0x19639Cu: goto label_19639c;
            case 0x1963A0u: goto label_1963a0;
            case 0x1963A4u: goto label_1963a4;
            case 0x1963A8u: goto label_1963a8;
            case 0x1963ACu: goto label_1963ac;
            case 0x1963B0u: goto label_1963b0;
            case 0x1963B4u: goto label_1963b4;
            case 0x1963B8u: goto label_1963b8;
            case 0x1963BCu: goto label_1963bc;
            case 0x1963C0u: goto label_1963c0;
            case 0x1963C4u: goto label_1963c4;
            case 0x1963C8u: goto label_1963c8;
            case 0x1963CCu: goto label_1963cc;
            case 0x1963D0u: goto label_1963d0;
            case 0x1963D4u: goto label_1963d4;
            case 0x1963D8u: goto label_1963d8;
            case 0x1963DCu: goto label_1963dc;
            case 0x1963E0u: goto label_1963e0;
            case 0x1963E4u: goto label_1963e4;
            case 0x1963E8u: goto label_1963e8;
            case 0x1963ECu: goto label_1963ec;
            case 0x1963F0u: goto label_1963f0;
            case 0x1963F4u: goto label_1963f4;
            case 0x1963F8u: goto label_1963f8;
            case 0x1963FCu: goto label_1963fc;
            case 0x196400u: goto label_196400;
            case 0x196404u: goto label_196404;
            case 0x196408u: goto label_196408;
            case 0x19640Cu: goto label_19640c;
            case 0x196410u: goto label_196410;
            case 0x196414u: goto label_196414;
            case 0x196418u: goto label_196418;
            case 0x19641Cu: goto label_19641c;
            case 0x196420u: goto label_196420;
            case 0x196424u: goto label_196424;
            case 0x196428u: goto label_196428;
            case 0x19642Cu: goto label_19642c;
            case 0x196430u: goto label_196430;
            case 0x196434u: goto label_196434;
            case 0x196438u: goto label_196438;
            case 0x19643Cu: goto label_19643c;
            case 0x196440u: goto label_196440;
            case 0x196444u: goto label_196444;
            case 0x196448u: goto label_196448;
            case 0x19644Cu: goto label_19644c;
            case 0x196450u: goto label_196450;
            case 0x196454u: goto label_196454;
            case 0x196458u: goto label_196458;
            case 0x19645Cu: goto label_19645c;
            case 0x196460u: goto label_196460;
            case 0x196464u: goto label_196464;
            case 0x196468u: goto label_196468;
            case 0x19646Cu: goto label_19646c;
            case 0x196470u: goto label_196470;
            case 0x196474u: goto label_196474;
            case 0x196478u: goto label_196478;
            case 0x19647Cu: goto label_19647c;
            case 0x196480u: goto label_196480;
            case 0x196484u: goto label_196484;
            case 0x196488u: goto label_196488;
            case 0x19648Cu: goto label_19648c;
            case 0x196490u: goto label_196490;
            case 0x196494u: goto label_196494;
            case 0x196498u: goto label_196498;
            case 0x19649Cu: goto label_19649c;
            case 0x1964A0u: goto label_1964a0;
            case 0x1964A4u: goto label_1964a4;
            case 0x1964A8u: goto label_1964a8;
            case 0x1964ACu: goto label_1964ac;
            case 0x1964B0u: goto label_1964b0;
            case 0x1964B4u: goto label_1964b4;
            case 0x1964B8u: goto label_1964b8;
            case 0x1964BCu: goto label_1964bc;
            case 0x1964C0u: goto label_1964c0;
            case 0x1964C4u: goto label_1964c4;
            case 0x1964C8u: goto label_1964c8;
            case 0x1964CCu: goto label_1964cc;
            case 0x1964D0u: goto label_1964d0;
            case 0x1964D4u: goto label_1964d4;
            case 0x1964D8u: goto label_1964d8;
            case 0x1964DCu: goto label_1964dc;
            case 0x1964E0u: goto label_1964e0;
            case 0x1964E4u: goto label_1964e4;
            case 0x1964E8u: goto label_1964e8;
            case 0x1964ECu: goto label_1964ec;
            case 0x1964F0u: goto label_1964f0;
            case 0x1964F4u: goto label_1964f4;
            case 0x1964F8u: goto label_1964f8;
            case 0x1964FCu: goto label_1964fc;
            case 0x196500u: goto label_196500;
            case 0x196504u: goto label_196504;
            case 0x196508u: goto label_196508;
            case 0x19650Cu: goto label_19650c;
            case 0x196510u: goto label_196510;
            case 0x196514u: goto label_196514;
            case 0x196518u: goto label_196518;
            case 0x19651Cu: goto label_19651c;
            case 0x196520u: goto label_196520;
            case 0x196524u: goto label_196524;
            case 0x196528u: goto label_196528;
            case 0x19652Cu: goto label_19652c;
            case 0x196530u: goto label_196530;
            case 0x196534u: goto label_196534;
            case 0x196538u: goto label_196538;
            case 0x19653Cu: goto label_19653c;
            case 0x196540u: goto label_196540;
            case 0x196544u: goto label_196544;
            case 0x196548u: goto label_196548;
            case 0x19654Cu: goto label_19654c;
            case 0x196550u: goto label_196550;
            case 0x196554u: goto label_196554;
            case 0x196558u: goto label_196558;
            case 0x19655Cu: goto label_19655c;
            case 0x196560u: goto label_196560;
            case 0x196564u: goto label_196564;
            case 0x196568u: goto label_196568;
            case 0x19656Cu: goto label_19656c;
            case 0x196570u: goto label_196570;
            case 0x196574u: goto label_196574;
            case 0x196578u: goto label_196578;
            case 0x19657Cu: goto label_19657c;
            case 0x196580u: goto label_196580;
            case 0x196584u: goto label_196584;
            case 0x196588u: goto label_196588;
            case 0x19658Cu: goto label_19658c;
            case 0x196590u: goto label_196590;
            case 0x196594u: goto label_196594;
            case 0x196598u: goto label_196598;
            case 0x19659Cu: goto label_19659c;
            case 0x1965A0u: goto label_1965a0;
            case 0x1965A4u: goto label_1965a4;
            case 0x1965A8u: goto label_1965a8;
            case 0x1965ACu: goto label_1965ac;
            case 0x1965B0u: goto label_1965b0;
            case 0x1965B4u: goto label_1965b4;
            case 0x1965B8u: goto label_1965b8;
            case 0x1965BCu: goto label_1965bc;
            case 0x1965C0u: goto label_1965c0;
            case 0x1965C4u: goto label_1965c4;
            case 0x1965C8u: goto label_1965c8;
            case 0x1965CCu: goto label_1965cc;
            case 0x1965D0u: goto label_1965d0;
            case 0x1965D4u: goto label_1965d4;
            case 0x1965D8u: goto label_1965d8;
            case 0x1965DCu: goto label_1965dc;
            case 0x1965E0u: goto label_1965e0;
            case 0x1965E4u: goto label_1965e4;
            case 0x1965E8u: goto label_1965e8;
            case 0x1965ECu: goto label_1965ec;
            case 0x1965F0u: goto label_1965f0;
            case 0x1965F4u: goto label_1965f4;
            case 0x1965F8u: goto label_1965f8;
            case 0x1965FCu: goto label_1965fc;
            case 0x196600u: goto label_196600;
            case 0x196604u: goto label_196604;
            case 0x196608u: goto label_196608;
            case 0x19660Cu: goto label_19660c;
            case 0x196610u: goto label_196610;
            case 0x196614u: goto label_196614;
            case 0x196618u: goto label_196618;
            case 0x19661Cu: goto label_19661c;
            case 0x196620u: goto label_196620;
            case 0x196624u: goto label_196624;
            case 0x196628u: goto label_196628;
            case 0x19662Cu: goto label_19662c;
            case 0x196630u: goto label_196630;
            case 0x196634u: goto label_196634;
            case 0x196638u: goto label_196638;
            case 0x19663Cu: goto label_19663c;
            case 0x196640u: goto label_196640;
            case 0x196644u: goto label_196644;
            case 0x196648u: goto label_196648;
            case 0x19664Cu: goto label_19664c;
            case 0x196650u: goto label_196650;
            case 0x196654u: goto label_196654;
            case 0x196658u: goto label_196658;
            case 0x19665Cu: goto label_19665c;
            case 0x196660u: goto label_196660;
            case 0x196664u: goto label_196664;
            case 0x196668u: goto label_196668;
            case 0x19666Cu: goto label_19666c;
            case 0x196670u: goto label_196670;
            case 0x196674u: goto label_196674;
            case 0x196678u: goto label_196678;
            case 0x19667Cu: goto label_19667c;
            case 0x196680u: goto label_196680;
            case 0x196684u: goto label_196684;
            case 0x196688u: goto label_196688;
            case 0x19668Cu: goto label_19668c;
            case 0x196690u: goto label_196690;
            case 0x196694u: goto label_196694;
            case 0x196698u: goto label_196698;
            case 0x19669Cu: goto label_19669c;
            case 0x1966A0u: goto label_1966a0;
            case 0x1966A4u: goto label_1966a4;
            case 0x1966A8u: goto label_1966a8;
            case 0x1966ACu: goto label_1966ac;
            case 0x1966B0u: goto label_1966b0;
            case 0x1966B4u: goto label_1966b4;
            case 0x1966B8u: goto label_1966b8;
            case 0x1966BCu: goto label_1966bc;
            case 0x1966C0u: goto label_1966c0;
            case 0x1966C4u: goto label_1966c4;
            case 0x1966C8u: goto label_1966c8;
            case 0x1966CCu: goto label_1966cc;
            case 0x1966D0u: goto label_1966d0;
            case 0x1966D4u: goto label_1966d4;
            case 0x1966D8u: goto label_1966d8;
            case 0x1966DCu: goto label_1966dc;
            case 0x1966E0u: goto label_1966e0;
            case 0x1966E4u: goto label_1966e4;
            case 0x1966E8u: goto label_1966e8;
            case 0x1966ECu: goto label_1966ec;
            case 0x1966F0u: goto label_1966f0;
            case 0x1966F4u: goto label_1966f4;
            case 0x1966F8u: goto label_1966f8;
            case 0x1966FCu: goto label_1966fc;
            case 0x196700u: goto label_196700;
            case 0x196704u: goto label_196704;
            case 0x196708u: goto label_196708;
            case 0x19670Cu: goto label_19670c;
            case 0x196710u: goto label_196710;
            case 0x196714u: goto label_196714;
            case 0x196718u: goto label_196718;
            case 0x19671Cu: goto label_19671c;
            case 0x196720u: goto label_196720;
            case 0x196724u: goto label_196724;
            case 0x196728u: goto label_196728;
            case 0x19672Cu: goto label_19672c;
            case 0x196730u: goto label_196730;
            case 0x196734u: goto label_196734;
            case 0x196738u: goto label_196738;
            case 0x19673Cu: goto label_19673c;
            case 0x196740u: goto label_196740;
            case 0x196744u: goto label_196744;
            case 0x196748u: goto label_196748;
            case 0x19674Cu: goto label_19674c;
            case 0x196750u: goto label_196750;
            case 0x196754u: goto label_196754;
            case 0x196758u: goto label_196758;
            case 0x19675Cu: goto label_19675c;
            case 0x196760u: goto label_196760;
            case 0x196764u: goto label_196764;
            case 0x196768u: goto label_196768;
            case 0x19676Cu: goto label_19676c;
            case 0x196770u: goto label_196770;
            case 0x196774u: goto label_196774;
            case 0x196778u: goto label_196778;
            case 0x19677Cu: goto label_19677c;
            case 0x196780u: goto label_196780;
            case 0x196784u: goto label_196784;
            case 0x196788u: goto label_196788;
            case 0x19678Cu: goto label_19678c;
            case 0x196790u: goto label_196790;
            case 0x196794u: goto label_196794;
            case 0x196798u: goto label_196798;
            case 0x19679Cu: goto label_19679c;
            case 0x1967A0u: goto label_1967a0;
            case 0x1967A4u: goto label_1967a4;
            case 0x1967A8u: goto label_1967a8;
            case 0x1967ACu: goto label_1967ac;
            case 0x1967B0u: goto label_1967b0;
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1967BCu: goto label_1967bc;
            case 0x1967C0u: goto label_1967c0;
            case 0x1967C4u: goto label_1967c4;
            case 0x1967C8u: goto label_1967c8;
            case 0x1967CCu: goto label_1967cc;
            case 0x1967D0u: goto label_1967d0;
            case 0x1967D4u: goto label_1967d4;
            case 0x1967D8u: goto label_1967d8;
            case 0x1967DCu: goto label_1967dc;
            case 0x1967E0u: goto label_1967e0;
            case 0x1967E4u: goto label_1967e4;
            case 0x1967E8u: goto label_1967e8;
            case 0x1967ECu: goto label_1967ec;
            case 0x1967F0u: goto label_1967f0;
            case 0x1967F4u: goto label_1967f4;
            case 0x1967F8u: goto label_1967f8;
            case 0x1967FCu: goto label_1967fc;
            case 0x196800u: goto label_196800;
            case 0x196804u: goto label_196804;
            case 0x196808u: goto label_196808;
            case 0x19680Cu: goto label_19680c;
            case 0x196810u: goto label_196810;
            case 0x196814u: goto label_196814;
            case 0x196818u: goto label_196818;
            case 0x19681Cu: goto label_19681c;
            case 0x196820u: goto label_196820;
            case 0x196824u: goto label_196824;
            case 0x196828u: goto label_196828;
            case 0x19682Cu: goto label_19682c;
            case 0x196830u: goto label_196830;
            case 0x196834u: goto label_196834;
            case 0x196838u: goto label_196838;
            case 0x19683Cu: goto label_19683c;
            case 0x196840u: goto label_196840;
            case 0x196844u: goto label_196844;
            case 0x196848u: goto label_196848;
            case 0x19684Cu: goto label_19684c;
            case 0x196850u: goto label_196850;
            case 0x196854u: goto label_196854;
            case 0x196858u: goto label_196858;
            case 0x19685Cu: goto label_19685c;
            case 0x196860u: goto label_196860;
            case 0x196864u: goto label_196864;
            case 0x196868u: goto label_196868;
            case 0x19686Cu: goto label_19686c;
            case 0x196870u: goto label_196870;
            case 0x196874u: goto label_196874;
            case 0x196878u: goto label_196878;
            case 0x19687Cu: goto label_19687c;
            case 0x196880u: goto label_196880;
            case 0x196884u: goto label_196884;
            case 0x196888u: goto label_196888;
            case 0x19688Cu: goto label_19688c;
            case 0x196890u: goto label_196890;
            case 0x196894u: goto label_196894;
            case 0x196898u: goto label_196898;
            case 0x19689Cu: goto label_19689c;
            case 0x1968A0u: goto label_1968a0;
            case 0x1968A4u: goto label_1968a4;
            case 0x1968A8u: goto label_1968a8;
            case 0x1968ACu: goto label_1968ac;
            case 0x1968B0u: goto label_1968b0;
            case 0x1968B4u: goto label_1968b4;
            case 0x1968B8u: goto label_1968b8;
            case 0x1968BCu: goto label_1968bc;
            case 0x1968C0u: goto label_1968c0;
            case 0x1968C4u: goto label_1968c4;
            case 0x1968C8u: goto label_1968c8;
            case 0x1968CCu: goto label_1968cc;
            case 0x1968D0u: goto label_1968d0;
            case 0x1968D4u: goto label_1968d4;
            case 0x1968D8u: goto label_1968d8;
            case 0x1968DCu: goto label_1968dc;
            case 0x1968E0u: goto label_1968e0;
            case 0x1968E4u: goto label_1968e4;
            case 0x1968E8u: goto label_1968e8;
            case 0x1968ECu: goto label_1968ec;
            case 0x1968F0u: goto label_1968f0;
            case 0x1968F4u: goto label_1968f4;
            case 0x1968F8u: goto label_1968f8;
            case 0x1968FCu: goto label_1968fc;
            case 0x196900u: goto label_196900;
            case 0x196904u: goto label_196904;
            case 0x196908u: goto label_196908;
            case 0x19690Cu: goto label_19690c;
            case 0x196910u: goto label_196910;
            case 0x196914u: goto label_196914;
            case 0x196918u: goto label_196918;
            case 0x19691Cu: goto label_19691c;
            case 0x196920u: goto label_196920;
            case 0x196924u: goto label_196924;
            case 0x196928u: goto label_196928;
            case 0x19692Cu: goto label_19692c;
            case 0x196930u: goto label_196930;
            case 0x196934u: goto label_196934;
            case 0x196938u: goto label_196938;
            case 0x19693Cu: goto label_19693c;
            case 0x196940u: goto label_196940;
            case 0x196944u: goto label_196944;
            case 0x196948u: goto label_196948;
            case 0x19694Cu: goto label_19694c;
            case 0x196950u: goto label_196950;
            case 0x196954u: goto label_196954;
            case 0x196958u: goto label_196958;
            case 0x19695Cu: goto label_19695c;
            case 0x196960u: goto label_196960;
            case 0x196964u: goto label_196964;
            case 0x196968u: goto label_196968;
            case 0x19696Cu: goto label_19696c;
            case 0x196970u: goto label_196970;
            case 0x196974u: goto label_196974;
            case 0x196978u: goto label_196978;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            case 0x196988u: goto label_196988;
            case 0x19698Cu: goto label_19698c;
            case 0x196990u: goto label_196990;
            case 0x196994u: goto label_196994;
            case 0x196998u: goto label_196998;
            case 0x19699Cu: goto label_19699c;
            case 0x1969A0u: goto label_1969a0;
            case 0x1969A4u: goto label_1969a4;
            case 0x1969A8u: goto label_1969a8;
            case 0x1969ACu: goto label_1969ac;
            case 0x1969B0u: goto label_1969b0;
            case 0x1969B4u: goto label_1969b4;
            case 0x1969B8u: goto label_1969b8;
            case 0x1969BCu: goto label_1969bc;
            case 0x1969C0u: goto label_1969c0;
            case 0x1969C4u: goto label_1969c4;
            case 0x1969C8u: goto label_1969c8;
            case 0x1969CCu: goto label_1969cc;
            case 0x1969D0u: goto label_1969d0;
            case 0x1969D4u: goto label_1969d4;
            case 0x1969D8u: goto label_1969d8;
            case 0x1969DCu: goto label_1969dc;
            case 0x1969E0u: goto label_1969e0;
            case 0x1969E4u: goto label_1969e4;
            case 0x1969E8u: goto label_1969e8;
            case 0x1969ECu: goto label_1969ec;
            case 0x1969F0u: goto label_1969f0;
            case 0x1969F4u: goto label_1969f4;
            case 0x1969F8u: goto label_1969f8;
            case 0x1969FCu: goto label_1969fc;
            case 0x196A00u: goto label_196a00;
            case 0x196A04u: goto label_196a04;
            case 0x196A08u: goto label_196a08;
            case 0x196A0Cu: goto label_196a0c;
            case 0x196A10u: goto label_196a10;
            case 0x196A14u: goto label_196a14;
            case 0x196A18u: goto label_196a18;
            case 0x196A1Cu: goto label_196a1c;
            case 0x196A20u: goto label_196a20;
            case 0x196A24u: goto label_196a24;
            case 0x196A28u: goto label_196a28;
            case 0x196A2Cu: goto label_196a2c;
            case 0x196A30u: goto label_196a30;
            case 0x196A34u: goto label_196a34;
            case 0x196A38u: goto label_196a38;
            case 0x196A3Cu: goto label_196a3c;
            case 0x196A40u: goto label_196a40;
            case 0x196A44u: goto label_196a44;
            case 0x196A48u: goto label_196a48;
            case 0x196A4Cu: goto label_196a4c;
            case 0x196A50u: goto label_196a50;
            case 0x196A54u: goto label_196a54;
            case 0x196A58u: goto label_196a58;
            case 0x196A5Cu: goto label_196a5c;
            case 0x196A60u: goto label_196a60;
            case 0x196A64u: goto label_196a64;
            case 0x196A68u: goto label_196a68;
            case 0x196A6Cu: goto label_196a6c;
            case 0x196A70u: goto label_196a70;
            case 0x196A74u: goto label_196a74;
            case 0x196A78u: goto label_196a78;
            case 0x196A7Cu: goto label_196a7c;
            case 0x196A80u: goto label_196a80;
            case 0x196A84u: goto label_196a84;
            case 0x196A88u: goto label_196a88;
            case 0x196A8Cu: goto label_196a8c;
            case 0x196A90u: goto label_196a90;
            case 0x196A94u: goto label_196a94;
            case 0x196A98u: goto label_196a98;
            case 0x196A9Cu: goto label_196a9c;
            case 0x196AA0u: goto label_196aa0;
            case 0x196AA4u: goto label_196aa4;
            case 0x196AA8u: goto label_196aa8;
            case 0x196AACu: goto label_196aac;
            case 0x196AB0u: goto label_196ab0;
            case 0x196AB4u: goto label_196ab4;
            case 0x196AB8u: goto label_196ab8;
            case 0x196ABCu: goto label_196abc;
            case 0x196AC0u: goto label_196ac0;
            case 0x196AC4u: goto label_196ac4;
            case 0x196AC8u: goto label_196ac8;
            case 0x196ACCu: goto label_196acc;
            case 0x196AD0u: goto label_196ad0;
            case 0x196AD4u: goto label_196ad4;
            case 0x196AD8u: goto label_196ad8;
            case 0x196ADCu: goto label_196adc;
            case 0x196AE0u: goto label_196ae0;
            case 0x196AE4u: goto label_196ae4;
            case 0x196AE8u: goto label_196ae8;
            case 0x196AECu: goto label_196aec;
            case 0x196AF0u: goto label_196af0;
            case 0x196AF4u: goto label_196af4;
            case 0x196AF8u: goto label_196af8;
            case 0x196AFCu: goto label_196afc;
            case 0x196B00u: goto label_196b00;
            case 0x196B04u: goto label_196b04;
            case 0x196B08u: goto label_196b08;
            case 0x196B0Cu: goto label_196b0c;
            case 0x196B10u: goto label_196b10;
            case 0x196B14u: goto label_196b14;
            case 0x196B18u: goto label_196b18;
            case 0x196B1Cu: goto label_196b1c;
            case 0x196B20u: goto label_196b20;
            case 0x196B24u: goto label_196b24;
            case 0x196B28u: goto label_196b28;
            case 0x196B2Cu: goto label_196b2c;
            case 0x196B30u: goto label_196b30;
            case 0x196B34u: goto label_196b34;
            case 0x196B38u: goto label_196b38;
            case 0x196B3Cu: goto label_196b3c;
            case 0x196B40u: goto label_196b40;
            case 0x196B44u: goto label_196b44;
            case 0x196B48u: goto label_196b48;
            case 0x196B4Cu: goto label_196b4c;
            case 0x196B50u: goto label_196b50;
            case 0x196B54u: goto label_196b54;
            case 0x196B58u: goto label_196b58;
            case 0x196B5Cu: goto label_196b5c;
            case 0x196B60u: goto label_196b60;
            case 0x196B64u: goto label_196b64;
            case 0x196B68u: goto label_196b68;
            case 0x196B6Cu: goto label_196b6c;
            case 0x196B70u: goto label_196b70;
            case 0x196B74u: goto label_196b74;
            case 0x196B78u: goto label_196b78;
            case 0x196B7Cu: goto label_196b7c;
            case 0x196B80u: goto label_196b80;
            case 0x196B84u: goto label_196b84;
            case 0x196B88u: goto label_196b88;
            case 0x196B8Cu: goto label_196b8c;
            case 0x196B90u: goto label_196b90;
            case 0x196B94u: goto label_196b94;
            case 0x196B98u: goto label_196b98;
            case 0x196B9Cu: goto label_196b9c;
            case 0x196BA0u: goto label_196ba0;
            case 0x196BA4u: goto label_196ba4;
            case 0x196BA8u: goto label_196ba8;
            case 0x196BACu: goto label_196bac;
            case 0x196BB0u: goto label_196bb0;
            case 0x196BB4u: goto label_196bb4;
            case 0x196BB8u: goto label_196bb8;
            case 0x196BBCu: goto label_196bbc;
            case 0x196BC0u: goto label_196bc0;
            case 0x196BC4u: goto label_196bc4;
            case 0x196BC8u: goto label_196bc8;
            case 0x196BCCu: goto label_196bcc;
            case 0x196BD0u: goto label_196bd0;
            case 0x196BD4u: goto label_196bd4;
            case 0x196BD8u: goto label_196bd8;
            case 0x196BDCu: goto label_196bdc;
            case 0x196BE0u: goto label_196be0;
            case 0x196BE4u: goto label_196be4;
            case 0x196BE8u: goto label_196be8;
            case 0x196BECu: goto label_196bec;
            case 0x196BF0u: goto label_196bf0;
            case 0x196BF4u: goto label_196bf4;
            case 0x196BF8u: goto label_196bf8;
            case 0x196BFCu: goto label_196bfc;
            case 0x196C00u: goto label_196c00;
            case 0x196C04u: goto label_196c04;
            case 0x196C08u: goto label_196c08;
            case 0x196C0Cu: goto label_196c0c;
            case 0x196C10u: goto label_196c10;
            case 0x196C14u: goto label_196c14;
            case 0x196C18u: goto label_196c18;
            case 0x196C1Cu: goto label_196c1c;
            case 0x196C20u: goto label_196c20;
            case 0x196C24u: goto label_196c24;
            case 0x196C28u: goto label_196c28;
            case 0x196C2Cu: goto label_196c2c;
            case 0x196C30u: goto label_196c30;
            case 0x196C34u: goto label_196c34;
            case 0x196C38u: goto label_196c38;
            case 0x196C3Cu: goto label_196c3c;
            case 0x196C40u: goto label_196c40;
            case 0x196C44u: goto label_196c44;
            case 0x196C48u: goto label_196c48;
            case 0x196C4Cu: goto label_196c4c;
            case 0x196C50u: goto label_196c50;
            case 0x196C54u: goto label_196c54;
            case 0x196C58u: goto label_196c58;
            case 0x196C5Cu: goto label_196c5c;
            case 0x196C60u: goto label_196c60;
            case 0x196C64u: goto label_196c64;
            case 0x196C68u: goto label_196c68;
            case 0x196C6Cu: goto label_196c6c;
            case 0x196C70u: goto label_196c70;
            case 0x196C74u: goto label_196c74;
            case 0x196C78u: goto label_196c78;
            case 0x196C7Cu: goto label_196c7c;
            case 0x196C80u: goto label_196c80;
            case 0x196C84u: goto label_196c84;
            case 0x196C88u: goto label_196c88;
            case 0x196C8Cu: goto label_196c8c;
            case 0x196C90u: goto label_196c90;
            case 0x196C94u: goto label_196c94;
            case 0x196C98u: goto label_196c98;
            case 0x196C9Cu: goto label_196c9c;
            case 0x196CA0u: goto label_196ca0;
            case 0x196CA4u: goto label_196ca4;
            case 0x196CA8u: goto label_196ca8;
            case 0x196CACu: goto label_196cac;
            case 0x196CB0u: goto label_196cb0;
            case 0x196CB4u: goto label_196cb4;
            case 0x196CB8u: goto label_196cb8;
            case 0x196CBCu: goto label_196cbc;
            case 0x196CC0u: goto label_196cc0;
            case 0x196CC4u: goto label_196cc4;
            case 0x196CC8u: goto label_196cc8;
            case 0x196CCCu: goto label_196ccc;
            case 0x196CD0u: goto label_196cd0;
            case 0x196CD4u: goto label_196cd4;
            case 0x196CD8u: goto label_196cd8;
            case 0x196CDCu: goto label_196cdc;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196CE8u: goto label_196ce8;
            case 0x196CECu: goto label_196cec;
            case 0x196CF0u: goto label_196cf0;
            case 0x196CF4u: goto label_196cf4;
            case 0x196CF8u: goto label_196cf8;
            case 0x196CFCu: goto label_196cfc;
            case 0x196D00u: goto label_196d00;
            case 0x196D04u: goto label_196d04;
            case 0x196D08u: goto label_196d08;
            case 0x196D0Cu: goto label_196d0c;
            case 0x196D10u: goto label_196d10;
            case 0x196D14u: goto label_196d14;
            case 0x196D18u: goto label_196d18;
            case 0x196D1Cu: goto label_196d1c;
            case 0x196D20u: goto label_196d20;
            case 0x196D24u: goto label_196d24;
            case 0x196D28u: goto label_196d28;
            case 0x196D2Cu: goto label_196d2c;
            case 0x196D30u: goto label_196d30;
            case 0x196D34u: goto label_196d34;
            case 0x196D38u: goto label_196d38;
            case 0x196D3Cu: goto label_196d3c;
            case 0x196D40u: goto label_196d40;
            case 0x196D44u: goto label_196d44;
            case 0x196D48u: goto label_196d48;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D50u: goto label_196d50;
            case 0x196D54u: goto label_196d54;
            case 0x196D58u: goto label_196d58;
            case 0x196D5Cu: goto label_196d5c;
            case 0x196D60u: goto label_196d60;
            case 0x196D64u: goto label_196d64;
            case 0x196D68u: goto label_196d68;
            case 0x196D6Cu: goto label_196d6c;
            case 0x196D70u: goto label_196d70;
            case 0x196D74u: goto label_196d74;
            case 0x196D78u: goto label_196d78;
            case 0x196D7Cu: goto label_196d7c;
            case 0x196D80u: goto label_196d80;
            case 0x196D84u: goto label_196d84;
            case 0x196D88u: goto label_196d88;
            case 0x196D8Cu: goto label_196d8c;
            case 0x196D90u: goto label_196d90;
            case 0x196D94u: goto label_196d94;
            case 0x196D98u: goto label_196d98;
            case 0x196D9Cu: goto label_196d9c;
            case 0x196DA0u: goto label_196da0;
            case 0x196DA4u: goto label_196da4;
            case 0x196DA8u: goto label_196da8;
            case 0x196DACu: goto label_196dac;
            case 0x196DB0u: goto label_196db0;
            case 0x196DB4u: goto label_196db4;
            case 0x196DB8u: goto label_196db8;
            case 0x196DBCu: goto label_196dbc;
            case 0x196DC0u: goto label_196dc0;
            case 0x196DC4u: goto label_196dc4;
            case 0x196DC8u: goto label_196dc8;
            case 0x196DCCu: goto label_196dcc;
            case 0x196DD0u: goto label_196dd0;
            case 0x196DD4u: goto label_196dd4;
            case 0x196DD8u: goto label_196dd8;
            case 0x196DDCu: goto label_196ddc;
            case 0x196DE0u: goto label_196de0;
            case 0x196DE4u: goto label_196de4;
            case 0x196DE8u: goto label_196de8;
            case 0x196DECu: goto label_196dec;
            case 0x196DF0u: goto label_196df0;
            case 0x196DF4u: goto label_196df4;
            case 0x196DF8u: goto label_196df8;
            case 0x196DFCu: goto label_196dfc;
            case 0x196E00u: goto label_196e00;
            case 0x196E04u: goto label_196e04;
            case 0x196E08u: goto label_196e08;
            case 0x196E0Cu: goto label_196e0c;
            case 0x196E10u: goto label_196e10;
            case 0x196E14u: goto label_196e14;
            case 0x196E18u: goto label_196e18;
            case 0x196E1Cu: goto label_196e1c;
            case 0x196E20u: goto label_196e20;
            case 0x196E24u: goto label_196e24;
            case 0x196E28u: goto label_196e28;
            case 0x196E2Cu: goto label_196e2c;
            case 0x196E30u: goto label_196e30;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196E3Cu: goto label_196e3c;
            case 0x196E40u: goto label_196e40;
            case 0x196E44u: goto label_196e44;
            case 0x196E48u: goto label_196e48;
            case 0x196E4Cu: goto label_196e4c;
            case 0x196E50u: goto label_196e50;
            case 0x196E54u: goto label_196e54;
            case 0x196E58u: goto label_196e58;
            case 0x196E5Cu: goto label_196e5c;
            case 0x196E60u: goto label_196e60;
            case 0x196E64u: goto label_196e64;
            case 0x196E68u: goto label_196e68;
            case 0x196E6Cu: goto label_196e6c;
            case 0x196E70u: goto label_196e70;
            case 0x196E74u: goto label_196e74;
            case 0x196E78u: goto label_196e78;
            case 0x196E7Cu: goto label_196e7c;
            case 0x196E80u: goto label_196e80;
            case 0x196E84u: goto label_196e84;
            case 0x196E88u: goto label_196e88;
            case 0x196E8Cu: goto label_196e8c;
            case 0x196E90u: goto label_196e90;
            case 0x196E94u: goto label_196e94;
            case 0x196E98u: goto label_196e98;
            case 0x196E9Cu: goto label_196e9c;
            case 0x196EA0u: goto label_196ea0;
            case 0x196EA4u: goto label_196ea4;
            case 0x196EA8u: goto label_196ea8;
            case 0x196EACu: goto label_196eac;
            case 0x196EB0u: goto label_196eb0;
            case 0x196EB4u: goto label_196eb4;
            case 0x196EB8u: goto label_196eb8;
            case 0x196EBCu: goto label_196ebc;
            case 0x196EC0u: goto label_196ec0;
            case 0x196EC4u: goto label_196ec4;
            case 0x196EC8u: goto label_196ec8;
            case 0x196ECCu: goto label_196ecc;
            case 0x196ED0u: goto label_196ed0;
            case 0x196ED4u: goto label_196ed4;
            case 0x196ED8u: goto label_196ed8;
            case 0x196EDCu: goto label_196edc;
            case 0x196EE0u: goto label_196ee0;
            case 0x196EE4u: goto label_196ee4;
            case 0x196EE8u: goto label_196ee8;
            case 0x196EECu: goto label_196eec;
            case 0x196EF0u: goto label_196ef0;
            case 0x196EF4u: goto label_196ef4;
            case 0x196EF8u: goto label_196ef8;
            case 0x196EFCu: goto label_196efc;
            case 0x196F00u: goto label_196f00;
            case 0x196F04u: goto label_196f04;
            case 0x196F08u: goto label_196f08;
            case 0x196F0Cu: goto label_196f0c;
            case 0x196F10u: goto label_196f10;
            case 0x196F14u: goto label_196f14;
            case 0x196F18u: goto label_196f18;
            case 0x196F1Cu: goto label_196f1c;
            case 0x196F20u: goto label_196f20;
            case 0x196F24u: goto label_196f24;
            case 0x196F28u: goto label_196f28;
            case 0x196F2Cu: goto label_196f2c;
            case 0x196F30u: goto label_196f30;
            case 0x196F34u: goto label_196f34;
            case 0x196F38u: goto label_196f38;
            case 0x196F3Cu: goto label_196f3c;
            case 0x196F40u: goto label_196f40;
            case 0x196F44u: goto label_196f44;
            case 0x196F48u: goto label_196f48;
            case 0x196F4Cu: goto label_196f4c;
            case 0x196F50u: goto label_196f50;
            case 0x196F54u: goto label_196f54;
            case 0x196F58u: goto label_196f58;
            case 0x196F5Cu: goto label_196f5c;
            case 0x196F60u: goto label_196f60;
            case 0x196F64u: goto label_196f64;
            case 0x196F68u: goto label_196f68;
            case 0x196F6Cu: goto label_196f6c;
            case 0x196F70u: goto label_196f70;
            case 0x196F74u: goto label_196f74;
            case 0x196F78u: goto label_196f78;
            case 0x196F7Cu: goto label_196f7c;
            case 0x196F80u: goto label_196f80;
            case 0x196F84u: goto label_196f84;
            case 0x196F88u: goto label_196f88;
            case 0x196F8Cu: goto label_196f8c;
            case 0x196F90u: goto label_196f90;
            case 0x196F94u: goto label_196f94;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x196FA0u: goto label_196fa0;
            case 0x196FA4u: goto label_196fa4;
            case 0x196FA8u: goto label_196fa8;
            case 0x196FACu: goto label_196fac;
            case 0x196FB0u: goto label_196fb0;
            case 0x196FB4u: goto label_196fb4;
            case 0x196FB8u: goto label_196fb8;
            case 0x196FBCu: goto label_196fbc;
            case 0x196FC0u: goto label_196fc0;
            case 0x196FC4u: goto label_196fc4;
            case 0x196FC8u: goto label_196fc8;
            case 0x196FCCu: goto label_196fcc;
            case 0x196FD0u: goto label_196fd0;
            case 0x196FD4u: goto label_196fd4;
            case 0x196FD8u: goto label_196fd8;
            case 0x196FDCu: goto label_196fdc;
            case 0x196FE0u: goto label_196fe0;
            case 0x196FE4u: goto label_196fe4;
            case 0x196FE8u: goto label_196fe8;
            case 0x196FECu: goto label_196fec;
            case 0x196FF0u: goto label_196ff0;
            case 0x196FF4u: goto label_196ff4;
            case 0x196FF8u: goto label_196ff8;
            case 0x196FFCu: goto label_196ffc;
            case 0x197000u: goto label_197000;
            case 0x197004u: goto label_197004;
            case 0x197008u: goto label_197008;
            case 0x19700Cu: goto label_19700c;
            case 0x197010u: goto label_197010;
            case 0x197014u: goto label_197014;
            case 0x197018u: goto label_197018;
            case 0x19701Cu: goto label_19701c;
            case 0x197020u: goto label_197020;
            case 0x197024u: goto label_197024;
            case 0x197028u: goto label_197028;
            case 0x19702Cu: goto label_19702c;
            case 0x197030u: goto label_197030;
            case 0x197034u: goto label_197034;
            case 0x197038u: goto label_197038;
            case 0x19703Cu: goto label_19703c;
            case 0x197040u: goto label_197040;
            case 0x197044u: goto label_197044;
            case 0x197048u: goto label_197048;
            case 0x19704Cu: goto label_19704c;
            case 0x197050u: goto label_197050;
            case 0x197054u: goto label_197054;
            case 0x197058u: goto label_197058;
            case 0x19705Cu: goto label_19705c;
            case 0x197060u: goto label_197060;
            case 0x197064u: goto label_197064;
            case 0x197068u: goto label_197068;
            case 0x19706Cu: goto label_19706c;
            case 0x197070u: goto label_197070;
            case 0x197074u: goto label_197074;
            case 0x197078u: goto label_197078;
            case 0x19707Cu: goto label_19707c;
            case 0x197080u: goto label_197080;
            case 0x197084u: goto label_197084;
            case 0x197088u: goto label_197088;
            case 0x19708Cu: goto label_19708c;
            case 0x197090u: goto label_197090;
            case 0x197094u: goto label_197094;
            case 0x197098u: goto label_197098;
            case 0x19709Cu: goto label_19709c;
            case 0x1970A0u: goto label_1970a0;
            case 0x1970A4u: goto label_1970a4;
            case 0x1970A8u: goto label_1970a8;
            case 0x1970ACu: goto label_1970ac;
            case 0x1970B0u: goto label_1970b0;
            case 0x1970B4u: goto label_1970b4;
            case 0x1970B8u: goto label_1970b8;
            case 0x1970BCu: goto label_1970bc;
            case 0x1970C0u: goto label_1970c0;
            case 0x1970C4u: goto label_1970c4;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970D0u: goto label_1970d0;
            case 0x1970D4u: goto label_1970d4;
            case 0x1970D8u: goto label_1970d8;
            case 0x1970DCu: goto label_1970dc;
            case 0x1970E0u: goto label_1970e0;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970E8u: goto label_1970e8;
            case 0x1970ECu: goto label_1970ec;
            case 0x1970F0u: goto label_1970f0;
            case 0x1970F4u: goto label_1970f4;
            case 0x1970F8u: goto label_1970f8;
            case 0x1970FCu: goto label_1970fc;
            case 0x197100u: goto label_197100;
            case 0x197104u: goto label_197104;
            case 0x197108u: goto label_197108;
            case 0x19710Cu: goto label_19710c;
            case 0x197110u: goto label_197110;
            case 0x197114u: goto label_197114;
            case 0x197118u: goto label_197118;
            case 0x19711Cu: goto label_19711c;
            case 0x197120u: goto label_197120;
            case 0x197124u: goto label_197124;
            case 0x197128u: goto label_197128;
            case 0x19712Cu: goto label_19712c;
            case 0x197130u: goto label_197130;
            case 0x197134u: goto label_197134;
            case 0x197138u: goto label_197138;
            case 0x19713Cu: goto label_19713c;
            case 0x197140u: goto label_197140;
            case 0x197144u: goto label_197144;
            case 0x197148u: goto label_197148;
            case 0x19714Cu: goto label_19714c;
            case 0x197150u: goto label_197150;
            case 0x197154u: goto label_197154;
            case 0x197158u: goto label_197158;
            case 0x19715Cu: goto label_19715c;
            case 0x197160u: goto label_197160;
            case 0x197164u: goto label_197164;
            case 0x197168u: goto label_197168;
            case 0x19716Cu: goto label_19716c;
            case 0x197170u: goto label_197170;
            case 0x197174u: goto label_197174;
            case 0x197178u: goto label_197178;
            case 0x19717Cu: goto label_19717c;
            case 0x197180u: goto label_197180;
            case 0x197184u: goto label_197184;
            case 0x197188u: goto label_197188;
            case 0x19718Cu: goto label_19718c;
            case 0x197190u: goto label_197190;
            case 0x197194u: goto label_197194;
            case 0x197198u: goto label_197198;
            case 0x19719Cu: goto label_19719c;
            case 0x1971A0u: goto label_1971a0;
            case 0x1971A4u: goto label_1971a4;
            case 0x1971A8u: goto label_1971a8;
            case 0x1971ACu: goto label_1971ac;
            case 0x1971B0u: goto label_1971b0;
            case 0x1971B4u: goto label_1971b4;
            case 0x1971B8u: goto label_1971b8;
            case 0x1971BCu: goto label_1971bc;
            case 0x1971C0u: goto label_1971c0;
            case 0x1971C4u: goto label_1971c4;
            case 0x1971C8u: goto label_1971c8;
            case 0x1971CCu: goto label_1971cc;
            case 0x1971D0u: goto label_1971d0;
            case 0x1971D4u: goto label_1971d4;
            case 0x1971D8u: goto label_1971d8;
            case 0x1971DCu: goto label_1971dc;
            case 0x1971E0u: goto label_1971e0;
            case 0x1971E4u: goto label_1971e4;
            case 0x1971E8u: goto label_1971e8;
            case 0x1971ECu: goto label_1971ec;
            case 0x1971F0u: goto label_1971f0;
            case 0x1971F4u: goto label_1971f4;
            case 0x1971F8u: goto label_1971f8;
            case 0x1971FCu: goto label_1971fc;
            case 0x197200u: goto label_197200;
            case 0x197204u: goto label_197204;
            case 0x197208u: goto label_197208;
            case 0x19720Cu: goto label_19720c;
            case 0x197210u: goto label_197210;
            case 0x197214u: goto label_197214;
            case 0x197218u: goto label_197218;
            case 0x19721Cu: goto label_19721c;
            case 0x197220u: goto label_197220;
            case 0x197224u: goto label_197224;
            case 0x197228u: goto label_197228;
            case 0x19722Cu: goto label_19722c;
            case 0x197230u: goto label_197230;
            case 0x197234u: goto label_197234;
            case 0x197238u: goto label_197238;
            case 0x19723Cu: goto label_19723c;
            case 0x197240u: goto label_197240;
            case 0x197244u: goto label_197244;
            case 0x197248u: goto label_197248;
            case 0x19724Cu: goto label_19724c;
            case 0x197250u: goto label_197250;
            case 0x197254u: goto label_197254;
            case 0x197258u: goto label_197258;
            case 0x19725Cu: goto label_19725c;
            case 0x197260u: goto label_197260;
            case 0x197264u: goto label_197264;
            case 0x197268u: goto label_197268;
            case 0x19726Cu: goto label_19726c;
            case 0x197270u: goto label_197270;
            case 0x197274u: goto label_197274;
            case 0x197278u: goto label_197278;
            case 0x19727Cu: goto label_19727c;
            case 0x197280u: goto label_197280;
            case 0x197284u: goto label_197284;
            case 0x197288u: goto label_197288;
            case 0x19728Cu: goto label_19728c;
            case 0x197290u: goto label_197290;
            case 0x197294u: goto label_197294;
            case 0x197298u: goto label_197298;
            case 0x19729Cu: goto label_19729c;
            case 0x1972A0u: goto label_1972a0;
            case 0x1972A4u: goto label_1972a4;
            case 0x1972A8u: goto label_1972a8;
            case 0x1972ACu: goto label_1972ac;
            case 0x1972B0u: goto label_1972b0;
            case 0x1972B4u: goto label_1972b4;
            case 0x1972B8u: goto label_1972b8;
            case 0x1972BCu: goto label_1972bc;
            case 0x1972C0u: goto label_1972c0;
            case 0x1972C4u: goto label_1972c4;
            case 0x1972C8u: goto label_1972c8;
            case 0x1972CCu: goto label_1972cc;
            case 0x1972D0u: goto label_1972d0;
            case 0x1972D4u: goto label_1972d4;
            case 0x1972D8u: goto label_1972d8;
            case 0x1972DCu: goto label_1972dc;
            case 0x1972E0u: goto label_1972e0;
            case 0x1972E4u: goto label_1972e4;
            case 0x1972E8u: goto label_1972e8;
            case 0x1972ECu: goto label_1972ec;
            case 0x1972F0u: goto label_1972f0;
            case 0x1972F4u: goto label_1972f4;
            case 0x1972F8u: goto label_1972f8;
            case 0x1972FCu: goto label_1972fc;
            case 0x197300u: goto label_197300;
            case 0x197304u: goto label_197304;
            case 0x197308u: goto label_197308;
            case 0x19730Cu: goto label_19730c;
            case 0x197310u: goto label_197310;
            case 0x197314u: goto label_197314;
            case 0x197318u: goto label_197318;
            case 0x19731Cu: goto label_19731c;
            case 0x197320u: goto label_197320;
            case 0x197324u: goto label_197324;
            case 0x197328u: goto label_197328;
            case 0x19732Cu: goto label_19732c;
            case 0x197330u: goto label_197330;
            case 0x197334u: goto label_197334;
            case 0x197338u: goto label_197338;
            case 0x19733Cu: goto label_19733c;
            case 0x197340u: goto label_197340;
            case 0x197344u: goto label_197344;
            case 0x197348u: goto label_197348;
            case 0x19734Cu: goto label_19734c;
            case 0x197350u: goto label_197350;
            case 0x197354u: goto label_197354;
            case 0x197358u: goto label_197358;
            case 0x19735Cu: goto label_19735c;
            case 0x197360u: goto label_197360;
            case 0x197364u: goto label_197364;
            case 0x197368u: goto label_197368;
            case 0x19736Cu: goto label_19736c;
            case 0x197370u: goto label_197370;
            case 0x197374u: goto label_197374;
            case 0x197378u: goto label_197378;
            case 0x19737Cu: goto label_19737c;
            case 0x197380u: goto label_197380;
            case 0x197384u: goto label_197384;
            case 0x197388u: goto label_197388;
            case 0x19738Cu: goto label_19738c;
            case 0x197390u: goto label_197390;
            case 0x197394u: goto label_197394;
            case 0x197398u: goto label_197398;
            case 0x19739Cu: goto label_19739c;
            case 0x1973A0u: goto label_1973a0;
            case 0x1973A4u: goto label_1973a4;
            case 0x1973A8u: goto label_1973a8;
            case 0x1973ACu: goto label_1973ac;
            case 0x1973B0u: goto label_1973b0;
            case 0x1973B4u: goto label_1973b4;
            case 0x1973B8u: goto label_1973b8;
            case 0x1973BCu: goto label_1973bc;
            case 0x1973C0u: goto label_1973c0;
            case 0x1973C4u: goto label_1973c4;
            case 0x1973C8u: goto label_1973c8;
            case 0x1973CCu: goto label_1973cc;
            case 0x1973D0u: goto label_1973d0;
            case 0x1973D4u: goto label_1973d4;
            case 0x1973D8u: goto label_1973d8;
            case 0x1973DCu: goto label_1973dc;
            case 0x1973E0u: goto label_1973e0;
            case 0x1973E4u: goto label_1973e4;
            case 0x1973E8u: goto label_1973e8;
            case 0x1973ECu: goto label_1973ec;
            case 0x1973F0u: goto label_1973f0;
            case 0x1973F4u: goto label_1973f4;
            case 0x1973F8u: goto label_1973f8;
            case 0x1973FCu: goto label_1973fc;
            case 0x197400u: goto label_197400;
            case 0x197404u: goto label_197404;
            case 0x197408u: goto label_197408;
            case 0x19740Cu: goto label_19740c;
            case 0x197410u: goto label_197410;
            case 0x197414u: goto label_197414;
            case 0x197418u: goto label_197418;
            case 0x19741Cu: goto label_19741c;
            case 0x197420u: goto label_197420;
            case 0x197424u: goto label_197424;
            case 0x197428u: goto label_197428;
            case 0x19742Cu: goto label_19742c;
            case 0x197430u: goto label_197430;
            case 0x197434u: goto label_197434;
            case 0x197438u: goto label_197438;
            case 0x19743Cu: goto label_19743c;
            case 0x197440u: goto label_197440;
            case 0x197444u: goto label_197444;
            case 0x197448u: goto label_197448;
            case 0x19744Cu: goto label_19744c;
            case 0x197450u: goto label_197450;
            case 0x197454u: goto label_197454;
            case 0x197458u: goto label_197458;
            case 0x19745Cu: goto label_19745c;
            case 0x197460u: goto label_197460;
            case 0x197464u: goto label_197464;
            case 0x197468u: goto label_197468;
            case 0x19746Cu: goto label_19746c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196A4Cu;
label_196a4c:
    // 0x196a4c: 0x3c020010
    ctx->pc = 0x196a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_196a50:
    // 0x196a50: 0x10000014
label_196a54:
    if (ctx->pc == 0x196A54u) {
        ctx->pc = 0x196A54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196A58u;
        goto label_196a58;
    }
    ctx->pc = 0x196A50u;
    {
        const bool branch_taken_0x196a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196a50) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A58u;
label_196a58:
    // 0x196a58: 0x3c020028
    ctx->pc = 0x196a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
label_196a5c:
    // 0x196a5c: 0x10000011
label_196a60:
    if (ctx->pc == 0x196A60u) {
        ctx->pc = 0x196A60u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196A64u;
        goto label_196a64;
    }
    ctx->pc = 0x196A5Cu;
    {
        const bool branch_taken_0x196a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A60u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196a5c) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A64u;
label_196a64:
    // 0x196a64: 0x3c020020
    ctx->pc = 0x196a64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
label_196a68:
    // 0x196a68: 0x1000000e
label_196a6c:
    if (ctx->pc == 0x196A6Cu) {
        ctx->pc = 0x196A6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196A70u;
        goto label_196a70;
    }
    ctx->pc = 0x196A68u;
    {
        const bool branch_taken_0x196a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196a68) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A70u;
label_196a70:
    // 0x196a70: 0x3c020030
    ctx->pc = 0x196a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
label_196a74:
    // 0x196a74: 0x1000000b
label_196a78:
    if (ctx->pc == 0x196A78u) {
        ctx->pc = 0x196A78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196A7Cu;
        goto label_196a7c;
    }
    ctx->pc = 0x196A74u;
    {
        const bool branch_taken_0x196a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196a74) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A7Cu;
label_196a7c:
    // 0x196a7c: 0x10000009
label_196a80:
    if (ctx->pc == 0x196A80u) {
        ctx->pc = 0x196A80u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x196A84u;
        goto label_196a84;
    }
    ctx->pc = 0x196A7Cu;
    {
        const bool branch_taken_0x196a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A80u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        if (branch_taken_0x196a7c) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A84u;
label_196a84:
    // 0x196a84: 0x3c020038
    ctx->pc = 0x196a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_196a88:
    // 0x196a88: 0x10000006
label_196a8c:
    if (ctx->pc == 0x196A8Cu) {
        ctx->pc = 0x196A8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196A90u;
        goto label_196a90;
    }
    ctx->pc = 0x196A88u;
    {
        const bool branch_taken_0x196a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196a88) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A90u;
label_196a90:
    // 0x196a90: 0x3c020008
    ctx->pc = 0x196a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
label_196a94:
    // 0x196a94: 0x10000003
label_196a98:
    if (ctx->pc == 0x196A98u) {
        ctx->pc = 0x196A98u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196A9Cu;
        goto label_196a9c;
    }
    ctx->pc = 0x196A94u;
    {
        const bool branch_taken_0x196a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A98u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196a94) {
            ctx->pc = 0x196AA4u;
            goto label_196aa4;
        }
    }
    ctx->pc = 0x196A9Cu;
label_196a9c:
    // 0x196a9c: 0x3c020018
    ctx->pc = 0x196a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
label_196aa0:
    // 0x196aa0: 0xafa20038
    ctx->pc = 0x196aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_196aa4:
    // 0x196aa4: 0x3c01002a
    ctx->pc = 0x196aa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196aa8:
    // 0x196aa8: 0x8fa40038
    ctx->pc = 0x196aa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196aac:
    // 0x196aac: 0x8c23fe68
    ctx->pc = 0x196aacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196ab0:
    // 0x196ab0: 0x3c020038
    ctx->pc = 0x196ab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_196ab4:
    // 0x196ab4: 0x621024
    ctx->pc = 0x196ab4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196ab8:
    // 0x196ab8: 0x10440109
label_196abc:
    if (ctx->pc == 0x196ABCu) {
        ctx->pc = 0x196ABCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65479 << 16));
        ctx->pc = 0x196AC0u;
        goto label_196ac0;
    }
    ctx->pc = 0x196AB8u;
    {
        const bool branch_taken_0x196ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x196ABCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65479 << 16));
        if (branch_taken_0x196ab8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196AC0u;
label_196ac0:
    // 0x196ac0: 0x3c01002a
    ctx->pc = 0x196ac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ac4:
    // 0x196ac4: 0x3442ffff
    ctx->pc = 0x196ac4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_196ac8:
    // 0x196ac8: 0x621024
    ctx->pc = 0x196ac8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196acc:
    // 0x196acc: 0xac22fe68
    ctx->pc = 0x196accu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196ad0:
    // 0x196ad0: 0x3c01002a
    ctx->pc = 0x196ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ad4:
    // 0x196ad4: 0x8c22fe68
    ctx->pc = 0x196ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196ad8:
    // 0x196ad8: 0x441025
    ctx->pc = 0x196ad8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_196adc:
    // 0x196adc: 0x3c01002a
    ctx->pc = 0x196adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ae0:
    // 0x196ae0: 0xac22fe68
    ctx->pc = 0x196ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196ae4:
    // 0x196ae4: 0x3c01002a
    ctx->pc = 0x196ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ae8:
    // 0x196ae8: 0x8c24fe68
    ctx->pc = 0x196ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196aec:
    // 0x196aec: 0xc065e40
label_196af0:
    if (ctx->pc == 0x196AF0u) {
        ctx->pc = 0x196AF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196AF4u;
        goto label_196af4;
    }
    ctx->pc = 0x196AECu;
    SET_GPR_U32(ctx, 31, 0x196AF4u);
    ctx->pc = 0x196AF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197900_0x197900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AF4u; }
    }
    if (ctx->pc != 0x196AF4u) { return; }
    ctx->pc = 0x196AF4u;
label_196af4:
    // 0x196af4: 0x100000fa
label_196af8:
    if (ctx->pc == 0x196AF8u) {
        ctx->pc = 0x196AFCu;
        goto label_196afc;
    }
    ctx->pc = 0x196AF4u;
    {
        const bool branch_taken_0x196af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196af4) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196AFCu;
label_196afc:
    // 0x196afc: 0x8fa30038
    ctx->pc = 0x196afcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196b00:
    // 0x196b00: 0x8c22fe20
    ctx->pc = 0x196b00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966816)));
label_196b04:
    // 0x196b04: 0x106200f6
label_196b08:
    if (ctx->pc == 0x196B08u) {
        ctx->pc = 0x196B0Cu;
        goto label_196b0c;
    }
    ctx->pc = 0x196B04u;
    {
        const bool branch_taken_0x196b04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x196b04) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196B0Cu;
label_196b0c:
    // 0x196b0c: 0x3c01002a
    ctx->pc = 0x196b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b10:
    // 0x196b10: 0xac23fe20
    ctx->pc = 0x196b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966816), GPR_U32(ctx, 3));
label_196b14:
    // 0x196b14: 0x3c01002a
    ctx->pc = 0x196b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b18:
    // 0x196b18: 0x8c24fe68
    ctx->pc = 0x196b18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196b1c:
    // 0x196b1c: 0xc065e40
label_196b20:
    if (ctx->pc == 0x196B20u) {
        ctx->pc = 0x196B20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196B24u;
        goto label_196b24;
    }
    ctx->pc = 0x196B1Cu;
    SET_GPR_U32(ctx, 31, 0x196B24u);
    ctx->pc = 0x196B20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197900_0x197900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B24u; }
    }
    if (ctx->pc != 0x196B24u) { return; }
    ctx->pc = 0x196B24u;
label_196b24:
    // 0x196b24: 0x100000ee
label_196b28:
    if (ctx->pc == 0x196B28u) {
        ctx->pc = 0x196B2Cu;
        goto label_196b2c;
    }
    ctx->pc = 0x196B24u;
    {
        const bool branch_taken_0x196b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196b24) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196B2Cu;
label_196b2c:
    // 0x196b2c: 0x8fa20038
    ctx->pc = 0x196b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196b30:
    // 0x196b30: 0x8c24fe70
    ctx->pc = 0x196b30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196b34:
    // 0x196b34: 0x2403bfff
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
label_196b38:
    // 0x196b38: 0x831824
    ctx->pc = 0x196b38u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_196b3c:
    // 0x196b3c: 0x3c01002a
    ctx->pc = 0x196b3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b40:
    // 0x196b40: 0x104000e7
label_196b44:
    if (ctx->pc == 0x196B44u) {
        ctx->pc = 0x196B44u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 3));
        ctx->pc = 0x196B48u;
        goto label_196b48;
    }
    ctx->pc = 0x196B40u;
    {
        const bool branch_taken_0x196b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196B44u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 3));
        if (branch_taken_0x196b40) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196B48u;
label_196b48:
    // 0x196b48: 0x3c01002a
    ctx->pc = 0x196b48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b4c:
    // 0x196b4c: 0x8c22fe70
    ctx->pc = 0x196b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196b50:
    // 0x196b50: 0x34424000
    ctx->pc = 0x196b50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
label_196b54:
    // 0x196b54: 0x3c01002a
    ctx->pc = 0x196b54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b58:
    // 0x196b58: 0x100000e1
label_196b5c:
    if (ctx->pc == 0x196B5Cu) {
        ctx->pc = 0x196B5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196B60u;
        goto label_196b60;
    }
    ctx->pc = 0x196B58u;
    {
        const bool branch_taken_0x196b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196B5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196b58) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196B60u;
label_196b60:
    // 0x196b60: 0x3c02fffe
    ctx->pc = 0x196b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
label_196b64:
    // 0x196b64: 0x8c25fe68
    ctx->pc = 0x196b64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196b68:
    // 0x196b68: 0x3444ffff
    ctx->pc = 0x196b68u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 65535));
label_196b6c:
    // 0x196b6c: 0x8fa20038
    ctx->pc = 0x196b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196b70:
    // 0x196b70: 0x3c030001
    ctx->pc = 0x196b70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_196b74:
    // 0x196b74: 0xa42024
    ctx->pc = 0x196b74u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_196b78:
    // 0x196b78: 0x3c01002a
    ctx->pc = 0x196b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b7c:
    // 0x196b7c: 0x14430006
label_196b80:
    if (ctx->pc == 0x196B80u) {
        ctx->pc = 0x196B80u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 4));
        ctx->pc = 0x196B84u;
        goto label_196b84;
    }
    ctx->pc = 0x196B7Cu;
    {
        const bool branch_taken_0x196b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x196B80u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 4));
        if (branch_taken_0x196b7c) {
            ctx->pc = 0x196B98u;
            goto label_196b98;
        }
    }
    ctx->pc = 0x196B84u;
label_196b84:
    // 0x196b84: 0x3c01002a
    ctx->pc = 0x196b84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b88:
    // 0x196b88: 0x8c22fe68
    ctx->pc = 0x196b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196b8c:
    // 0x196b8c: 0x431025
    ctx->pc = 0x196b8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196b90:
    // 0x196b90: 0x3c01002a
    ctx->pc = 0x196b90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b94:
    // 0x196b94: 0xac22fe68
    ctx->pc = 0x196b94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196b98:
    // 0x196b98: 0x3c01002a
    ctx->pc = 0x196b98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196b9c:
    // 0x196b9c: 0x8c24fe68
    ctx->pc = 0x196b9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196ba0:
    // 0x196ba0: 0xc0660e4
label_196ba4:
    if (ctx->pc == 0x196BA4u) {
        ctx->pc = 0x196BA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196BA8u;
        goto label_196ba8;
    }
    ctx->pc = 0x196BA0u;
    SET_GPR_U32(ctx, 31, 0x196BA8u);
    ctx->pc = 0x196BA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198390u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198390_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BA8u; }
    }
    if (ctx->pc != 0x196BA8u) { return; }
    ctx->pc = 0x196BA8u;
label_196ba8:
    // 0x196ba8: 0x100000cd
label_196bac:
    if (ctx->pc == 0x196BACu) {
        ctx->pc = 0x196BB0u;
        goto label_196bb0;
    }
    ctx->pc = 0x196BA8u;
    {
        const bool branch_taken_0x196ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196ba8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196BB0u;
label_196bb0:
    // 0x196bb0: 0x3c02fff9
    ctx->pc = 0x196bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65529 << 16));
label_196bb4:
    // 0x196bb4: 0x8c23fe68
    ctx->pc = 0x196bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196bb8:
    // 0x196bb8: 0x3442ffff
    ctx->pc = 0x196bb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_196bbc:
    // 0x196bbc: 0x8fa40038
    ctx->pc = 0x196bbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196bc0:
    // 0x196bc0: 0x621024
    ctx->pc = 0x196bc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196bc4:
    // 0x196bc4: 0x3c01002a
    ctx->pc = 0x196bc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196bc8:
    // 0x196bc8: 0x108000c5
label_196bcc:
    if (ctx->pc == 0x196BCCu) {
        ctx->pc = 0x196BCCu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
        ctx->pc = 0x196BD0u;
        goto label_196bd0;
    }
    ctx->pc = 0x196BC8u;
    {
        const bool branch_taken_0x196bc8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x196BCCu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
        if (branch_taken_0x196bc8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196BD0u;
label_196bd0:
    // 0x196bd0: 0x3c030002
    ctx->pc = 0x196bd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
label_196bd4:
    // 0x196bd4: 0x148300c2
label_196bd8:
    if (ctx->pc == 0x196BD8u) {
        ctx->pc = 0x196BD8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        ctx->pc = 0x196BDCu;
        goto label_196bdc;
    }
    ctx->pc = 0x196BD4u;
    {
        const bool branch_taken_0x196bd4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x196BD8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x196bd4) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196BDCu;
label_196bdc:
    // 0x196bdc: 0x8c22fe68
    ctx->pc = 0x196bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196be0:
    // 0x196be0: 0x431025
    ctx->pc = 0x196be0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196be4:
    // 0x196be4: 0x3c01002a
    ctx->pc = 0x196be4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196be8:
    // 0x196be8: 0x100000bd
label_196bec:
    if (ctx->pc == 0x196BECu) {
        ctx->pc = 0x196BECu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
        ctx->pc = 0x196BF0u;
        goto label_196bf0;
    }
    ctx->pc = 0x196BE8u;
    {
        const bool branch_taken_0x196be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196BECu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
        if (branch_taken_0x196be8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196BF0u;
label_196bf0:
    // 0x196bf0: 0x3c02fffd
    ctx->pc = 0x196bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65533 << 16));
label_196bf4:
    // 0x196bf4: 0x8c25fe70
    ctx->pc = 0x196bf4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196bf8:
    // 0x196bf8: 0x3444ffff
    ctx->pc = 0x196bf8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 65535));
label_196bfc:
    // 0x196bfc: 0x8fa30038
    ctx->pc = 0x196bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196c00:
    // 0x196c00: 0x24020001
    ctx->pc = 0x196c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196c04:
    // 0x196c04: 0xa42024
    ctx->pc = 0x196c04u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_196c08:
    // 0x196c08: 0x3c01002a
    ctx->pc = 0x196c08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196c0c:
    // 0x196c0c: 0x146200b4
label_196c10:
    if (ctx->pc == 0x196C10u) {
        ctx->pc = 0x196C10u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        ctx->pc = 0x196C14u;
        goto label_196c14;
    }
    ctx->pc = 0x196C0Cu;
    {
        const bool branch_taken_0x196c0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x196C10u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 4));
        if (branch_taken_0x196c0c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196C14u;
label_196c14:
    // 0x196c14: 0x3c01002a
    ctx->pc = 0x196c14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196c18:
    // 0x196c18: 0x3c020002
    ctx->pc = 0x196c18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_196c1c:
    // 0x196c1c: 0x8c23fe70
    ctx->pc = 0x196c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_196c20:
    // 0x196c20: 0x621025
    ctx->pc = 0x196c20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196c24:
    // 0x196c24: 0x3c01002a
    ctx->pc = 0x196c24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196c28:
    // 0x196c28: 0x100000ad
label_196c2c:
    if (ctx->pc == 0x196C2Cu) {
        ctx->pc = 0x196C2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        ctx->pc = 0x196C30u;
        goto label_196c30;
    }
    ctx->pc = 0x196C28u;
    {
        const bool branch_taken_0x196c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196C2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
        if (branch_taken_0x196c28) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196C30u;
label_196c30:
    // 0x196c30: 0x8fa40038
    ctx->pc = 0x196c30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196c34:
    // 0x196c34: 0x3c01002a
    ctx->pc = 0x196c34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196c38:
    // 0x196c38: 0x41402
    ctx->pc = 0x196c38u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 16));
label_196c3c:
    // 0x196c3c: 0x304200ff
    ctx->pc = 0x196c3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_196c40:
    // 0x196c40: 0x4400004
label_196c44:
    if (ctx->pc == 0x196C44u) {
        ctx->pc = 0x196C44u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966824), GPR_U32(ctx, 4));
        ctx->pc = 0x196C48u;
        goto label_196c48;
    }
    ctx->pc = 0x196C40u;
    {
        const bool branch_taken_0x196c40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x196C44u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966824), GPR_U32(ctx, 4));
        if (branch_taken_0x196c40) {
            ctx->pc = 0x196C54u;
            goto label_196c54;
        }
    }
    ctx->pc = 0x196C48u;
label_196c48:
    // 0x196c48: 0x44820000
    ctx->pc = 0x196c48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_196c4c:
    // 0x196c4c: 0x10000008
label_196c50:
    if (ctx->pc == 0x196C50u) {
        ctx->pc = 0x196C50u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x196C54u;
        goto label_196c54;
    }
    ctx->pc = 0x196C4Cu;
    {
        const bool branch_taken_0x196c4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196C50u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x196c4c) {
            ctx->pc = 0x196C70u;
            goto label_196c70;
        }
    }
    ctx->pc = 0x196C54u;
label_196c54:
    // 0x196c54: 0x21842
    ctx->pc = 0x196c54u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
label_196c58:
    // 0x196c58: 0x30420001
    ctx->pc = 0x196c58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_196c5c:
    // 0x196c5c: 0x621825
    ctx->pc = 0x196c5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196c60:
    // 0x196c60: 0x44830000
    ctx->pc = 0x196c60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196c64:
    // 0x196c64: 0x0
    ctx->pc = 0x196c64u;
    // NOP
label_196c68:
    // 0x196c68: 0x46800060
    ctx->pc = 0x196c68u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_196c6c:
    // 0x196c6c: 0x46010840
    ctx->pc = 0x196c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_196c70:
    // 0x196c70: 0x3c03437f
    ctx->pc = 0x196c70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
label_196c74:
    // 0x196c74: 0x41202
    ctx->pc = 0x196c74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
label_196c78:
    // 0x196c78: 0x44830000
    ctx->pc = 0x196c78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196c7c:
    // 0x196c7c: 0x304200ff
    ctx->pc = 0x196c7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_196c80:
    // 0x196c80: 0x46000803
    ctx->pc = 0x196c80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_196c84:
    // 0x196c84: 0x0
    ctx->pc = 0x196c84u;
    // NOP
label_196c88:
    // 0x196c88: 0x3c010029
    ctx->pc = 0x196c88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196c8c:
    // 0x196c8c: 0x4400004
label_196c90:
    if (ctx->pc == 0x196C90u) {
        ctx->pc = 0x196C90u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20032), bits); }
        ctx->pc = 0x196C94u;
        goto label_196c94;
    }
    ctx->pc = 0x196C8Cu;
    {
        const bool branch_taken_0x196c8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x196C90u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20032), bits); }
        if (branch_taken_0x196c8c) {
            ctx->pc = 0x196CA0u;
            goto label_196ca0;
        }
    }
    ctx->pc = 0x196C94u;
label_196c94:
    // 0x196c94: 0x44820000
    ctx->pc = 0x196c94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_196c98:
    // 0x196c98: 0x10000008
label_196c9c:
    if (ctx->pc == 0x196C9Cu) {
        ctx->pc = 0x196C9Cu;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x196CA0u;
        goto label_196ca0;
    }
    ctx->pc = 0x196C98u;
    {
        const bool branch_taken_0x196c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196C9Cu;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x196c98) {
            ctx->pc = 0x196CBCu;
            goto label_196cbc;
        }
    }
    ctx->pc = 0x196CA0u;
label_196ca0:
    // 0x196ca0: 0x21842
    ctx->pc = 0x196ca0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
label_196ca4:
    // 0x196ca4: 0x30420001
    ctx->pc = 0x196ca4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_196ca8:
    // 0x196ca8: 0x621825
    ctx->pc = 0x196ca8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196cac:
    // 0x196cac: 0x44830000
    ctx->pc = 0x196cacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196cb0:
    // 0x196cb0: 0x0
    ctx->pc = 0x196cb0u;
    // NOP
label_196cb4:
    // 0x196cb4: 0x46800060
    ctx->pc = 0x196cb4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_196cb8:
    // 0x196cb8: 0x46010840
    ctx->pc = 0x196cb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_196cbc:
    // 0x196cbc: 0x3c03437f
    ctx->pc = 0x196cbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
label_196cc0:
    // 0x196cc0: 0x308200ff
    ctx->pc = 0x196cc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
label_196cc4:
    // 0x196cc4: 0x44830000
    ctx->pc = 0x196cc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196cc8:
    // 0x196cc8: 0x0
    ctx->pc = 0x196cc8u;
    // NOP
label_196ccc:
    // 0x196ccc: 0x46000803
    ctx->pc = 0x196cccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_196cd0:
    // 0x196cd0: 0x0
    ctx->pc = 0x196cd0u;
    // NOP
label_196cd4:
    // 0x196cd4: 0x3c010029
    ctx->pc = 0x196cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196cd8:
    // 0x196cd8: 0x4400004
label_196cdc:
    if (ctx->pc == 0x196CDCu) {
        ctx->pc = 0x196CDCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20036), bits); }
        ctx->pc = 0x196CE0u;
        goto label_196ce0;
    }
    ctx->pc = 0x196CD8u;
    {
        const bool branch_taken_0x196cd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x196CDCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20036), bits); }
        if (branch_taken_0x196cd8) {
            ctx->pc = 0x196CECu;
            goto label_196cec;
        }
    }
    ctx->pc = 0x196CE0u;
label_196ce0:
    // 0x196ce0: 0x44820000
    ctx->pc = 0x196ce0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_196ce4:
    // 0x196ce4: 0x10000008
label_196ce8:
    if (ctx->pc == 0x196CE8u) {
        ctx->pc = 0x196CE8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x196CECu;
        goto label_196cec;
    }
    ctx->pc = 0x196CE4u;
    {
        const bool branch_taken_0x196ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196CE8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x196ce4) {
            ctx->pc = 0x196D08u;
            goto label_196d08;
        }
    }
    ctx->pc = 0x196CECu;
label_196cec:
    // 0x196cec: 0x21842
    ctx->pc = 0x196cecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
label_196cf0:
    // 0x196cf0: 0x30420001
    ctx->pc = 0x196cf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_196cf4:
    // 0x196cf4: 0x621825
    ctx->pc = 0x196cf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196cf8:
    // 0x196cf8: 0x44830000
    ctx->pc = 0x196cf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196cfc:
    // 0x196cfc: 0x0
    ctx->pc = 0x196cfcu;
    // NOP
label_196d00:
    // 0x196d00: 0x46800060
    ctx->pc = 0x196d00u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_196d04:
    // 0x196d04: 0x46010840
    ctx->pc = 0x196d04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_196d08:
    // 0x196d08: 0x3c03437f
    ctx->pc = 0x196d08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
label_196d0c:
    // 0x196d0c: 0x41602
    ctx->pc = 0x196d0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 24));
label_196d10:
    // 0x196d10: 0x44830000
    ctx->pc = 0x196d10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196d14:
    // 0x196d14: 0x304200ff
    ctx->pc = 0x196d14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_196d18:
    // 0x196d18: 0x46000803
    ctx->pc = 0x196d18u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_196d1c:
    // 0x196d1c: 0x0
    ctx->pc = 0x196d1cu;
    // NOP
label_196d20:
    // 0x196d20: 0x3c010029
    ctx->pc = 0x196d20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196d24:
    // 0x196d24: 0x4400004
label_196d28:
    if (ctx->pc == 0x196D28u) {
        ctx->pc = 0x196D28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20040), bits); }
        ctx->pc = 0x196D2Cu;
        goto label_196d2c;
    }
    ctx->pc = 0x196D24u;
    {
        const bool branch_taken_0x196d24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x196D28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20040), bits); }
        if (branch_taken_0x196d24) {
            ctx->pc = 0x196D38u;
            goto label_196d38;
        }
    }
    ctx->pc = 0x196D2Cu;
label_196d2c:
    // 0x196d2c: 0x44820000
    ctx->pc = 0x196d2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_196d30:
    // 0x196d30: 0x10000008
label_196d34:
    if (ctx->pc == 0x196D34u) {
        ctx->pc = 0x196D34u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x196D38u;
        goto label_196d38;
    }
    ctx->pc = 0x196D30u;
    {
        const bool branch_taken_0x196d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196D34u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x196d30) {
            ctx->pc = 0x196D54u;
            goto label_196d54;
        }
    }
    ctx->pc = 0x196D38u;
label_196d38:
    // 0x196d38: 0x21842
    ctx->pc = 0x196d38u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
label_196d3c:
    // 0x196d3c: 0x30420001
    ctx->pc = 0x196d3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_196d40:
    // 0x196d40: 0x621825
    ctx->pc = 0x196d40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196d44:
    // 0x196d44: 0x44830000
    ctx->pc = 0x196d44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_196d48:
    // 0x196d48: 0x0
    ctx->pc = 0x196d48u;
    // NOP
label_196d4c:
    // 0x196d4c: 0x46800060
    ctx->pc = 0x196d4cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_196d50:
    // 0x196d50: 0x46010840
    ctx->pc = 0x196d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_196d54:
    // 0x196d54: 0x3c02437f
    ctx->pc = 0x196d54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17279 << 16));
label_196d58:
    // 0x196d58: 0x44820000
    ctx->pc = 0x196d58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_196d5c:
    // 0x196d5c: 0x0
    ctx->pc = 0x196d5cu;
    // NOP
label_196d60:
    // 0x196d60: 0x46000803
    ctx->pc = 0x196d60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_196d64:
    // 0x196d64: 0x0
    ctx->pc = 0x196d64u;
    // NOP
label_196d68:
    // 0x196d68: 0x3c010029
    ctx->pc = 0x196d68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196d6c:
    // 0x196d6c: 0x1000005c
label_196d70:
    if (ctx->pc == 0x196D70u) {
        ctx->pc = 0x196D70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20044), bits); }
        ctx->pc = 0x196D74u;
        goto label_196d74;
    }
    ctx->pc = 0x196D6Cu;
    {
        const bool branch_taken_0x196d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196D70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20044), bits); }
        if (branch_taken_0x196d6c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196D74u;
label_196d74:
    // 0x196d74: 0x8fa20038
    ctx->pc = 0x196d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196d78:
    // 0x196d78: 0x3c010029
    ctx->pc = 0x196d78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196d7c:
    // 0x196d7c: 0x10000058
label_196d80:
    if (ctx->pc == 0x196D80u) {
        ctx->pc = 0x196D80u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20080), GPR_U32(ctx, 2));
        ctx->pc = 0x196D84u;
        goto label_196d84;
    }
    ctx->pc = 0x196D7Cu;
    {
        const bool branch_taken_0x196d7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196D80u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20080), GPR_U32(ctx, 2));
        if (branch_taken_0x196d7c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196D84u;
label_196d84:
    // 0x196d84: 0x8fa20038
    ctx->pc = 0x196d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196d88:
    // 0x196d88: 0x3c010029
    ctx->pc = 0x196d88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_196d8c:
    // 0x196d8c: 0x10000054
label_196d90:
    if (ctx->pc == 0x196D90u) {
        ctx->pc = 0x196D90u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20072), GPR_U32(ctx, 2));
        ctx->pc = 0x196D94u;
        goto label_196d94;
    }
    ctx->pc = 0x196D8Cu;
    {
        const bool branch_taken_0x196d8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196D90u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20072), GPR_U32(ctx, 2));
        if (branch_taken_0x196d8c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196D94u;
label_196d94:
    // 0x196d94: 0x8fa40038
    ctx->pc = 0x196d94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196d98:
    // 0x196d98: 0x8c23fe68
    ctx->pc = 0x196d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196d9c:
    // 0x196d9c: 0x3c0200c0
    ctx->pc = 0x196d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)192 << 16));
label_196da0:
    // 0x196da0: 0x621024
    ctx->pc = 0x196da0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196da4:
    // 0x196da4: 0x1044004e
label_196da8:
    if (ctx->pc == 0x196DA8u) {
        ctx->pc = 0x196DA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65343 << 16));
        ctx->pc = 0x196DACu;
        goto label_196dac;
    }
    ctx->pc = 0x196DA4u;
    {
        const bool branch_taken_0x196da4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x196DA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65343 << 16));
        if (branch_taken_0x196da4) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196DACu;
label_196dac:
    // 0x196dac: 0x3c01002a
    ctx->pc = 0x196dacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196db0:
    // 0x196db0: 0x3442ffff
    ctx->pc = 0x196db0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_196db4:
    // 0x196db4: 0x621024
    ctx->pc = 0x196db4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196db8:
    // 0x196db8: 0xac22fe68
    ctx->pc = 0x196db8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196dbc:
    // 0x196dbc: 0x3c01002a
    ctx->pc = 0x196dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196dc0:
    // 0x196dc0: 0x8c22fe68
    ctx->pc = 0x196dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196dc4:
    // 0x196dc4: 0x441025
    ctx->pc = 0x196dc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_196dc8:
    // 0x196dc8: 0x3c01002a
    ctx->pc = 0x196dc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196dcc:
    // 0x196dcc: 0x10000044
label_196dd0:
    if (ctx->pc == 0x196DD0u) {
        ctx->pc = 0x196DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
        ctx->pc = 0x196DD4u;
        goto label_196dd4;
    }
    ctx->pc = 0x196DCCu;
    {
        const bool branch_taken_0x196dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
        if (branch_taken_0x196dcc) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196DD4u;
label_196dd4:
    // 0x196dd4: 0x8fa30038
    ctx->pc = 0x196dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196dd8:
    // 0x196dd8: 0x24020001
    ctx->pc = 0x196dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196ddc:
    // 0x196ddc: 0x14620002
label_196de0:
    if (ctx->pc == 0x196DE0u) {
        ctx->pc = 0x196DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196DE4u;
        goto label_196de4;
    }
    ctx->pc = 0x196DDCu;
    {
        const bool branch_taken_0x196ddc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x196DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196ddc) {
            ctx->pc = 0x196DE8u;
            goto label_196de8;
        }
    }
    ctx->pc = 0x196DE4u;
label_196de4:
    // 0x196de4: 0x34028000
    ctx->pc = 0x196de4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_196de8:
    // 0x196de8: 0x3c01002a
    ctx->pc = 0x196de8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196dec:
    // 0x196dec: 0xafa20038
    ctx->pc = 0x196decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_196df0:
    // 0x196df0: 0x8c23fe68
    ctx->pc = 0x196df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196df4:
    // 0x196df4: 0x8fa40038
    ctx->pc = 0x196df4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196df8:
    // 0x196df8: 0x30628000
    ctx->pc = 0x196df8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
label_196dfc:
    // 0x196dfc: 0x10440038
label_196e00:
    if (ctx->pc == 0x196E00u) {
        ctx->pc = 0x196E04u;
        goto label_196e04;
    }
    ctx->pc = 0x196DFCu;
    {
        const bool branch_taken_0x196dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x196dfc) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196E04u;
label_196e04:
    // 0x196e04: 0x3c02ffff
    ctx->pc = 0x196e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_196e08:
    // 0x196e08: 0x3c01002a
    ctx->pc = 0x196e08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196e0c:
    // 0x196e0c: 0x34427fff
    ctx->pc = 0x196e0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32767));
label_196e10:
    // 0x196e10: 0x621024
    ctx->pc = 0x196e10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196e14:
    // 0x196e14: 0xac22fe68
    ctx->pc = 0x196e14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196e18:
    // 0x196e18: 0x3c01002a
    ctx->pc = 0x196e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196e1c:
    // 0x196e1c: 0x8c22fe68
    ctx->pc = 0x196e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196e20:
    // 0x196e20: 0x441025
    ctx->pc = 0x196e20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_196e24:
    // 0x196e24: 0x3c01002a
    ctx->pc = 0x196e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196e28:
    // 0x196e28: 0xac22fe68
    ctx->pc = 0x196e28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196e2c:
    // 0x196e2c: 0x3c01002a
    ctx->pc = 0x196e2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196e30:
    // 0x196e30: 0x8c24fe68
    ctx->pc = 0x196e30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196e34:
    // 0x196e34: 0xc065de0
label_196e38:
    if (ctx->pc == 0x196E38u) {
        ctx->pc = 0x196E38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196E3Cu;
        goto label_196e3c;
    }
    ctx->pc = 0x196E34u;
    SET_GPR_U32(ctx, 31, 0x196E3Cu);
    ctx->pc = 0x196E38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197780_0x197780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E3Cu; }
    }
    if (ctx->pc != 0x196E3Cu) { return; }
    ctx->pc = 0x196E3Cu;
label_196e3c:
    // 0x196e3c: 0x10000028
label_196e40:
    if (ctx->pc == 0x196E40u) {
        ctx->pc = 0x196E44u;
        goto label_196e44;
    }
    ctx->pc = 0x196E3Cu;
    {
        const bool branch_taken_0x196e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x196e3c) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196E44u;
label_196e44:
    // 0x196e44: 0x8fa20038
    ctx->pc = 0x196e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196e48:
    // 0x196e48: 0x2c410008
    ctx->pc = 0x196e48u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 8));
label_196e4c:
    // 0x196e4c: 0x10200012
label_196e50:
    if (ctx->pc == 0x196E50u) {
        ctx->pc = 0x196E54u;
        goto label_196e54;
    }
    ctx->pc = 0x196E4Cu;
    {
        const bool branch_taken_0x196e4c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x196e4c) {
            ctx->pc = 0x196E98u;
            goto label_196e98;
        }
    }
    ctx->pc = 0x196E54u;
label_196e54:
    // 0x196e54: 0x3c030024
    ctx->pc = 0x196e54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_196e58:
    // 0x196e58: 0x21080
    ctx->pc = 0x196e58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_196e5c:
    // 0x196e5c: 0x24631ca0
    ctx->pc = 0x196e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7328));
label_196e60:
    // 0x196e60: 0x431021
    ctx->pc = 0x196e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196e64:
    // 0x196e64: 0x8c420000
    ctx->pc = 0x196e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196e68:
    // 0x196e68: 0x400008
label_196e6c:
    if (ctx->pc == 0x196E6Cu) {
        ctx->pc = 0x196E70u;
        goto label_196e70;
    }
    ctx->pc = 0x196E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196010u: goto label_196010;
            case 0x196014u: goto label_196014;
            case 0x196018u: goto label_196018;
            case 0x19601Cu: goto label_19601c;
            case 0x196020u: goto label_196020;
            case 0x196024u: goto label_196024;
            case 0x196028u: goto label_196028;
            case 0x19602Cu: goto label_19602c;
            case 0x196030u: goto label_196030;
            case 0x196034u: goto label_196034;
            case 0x196038u: goto label_196038;
            case 0x19603Cu: goto label_19603c;
            case 0x196040u: goto label_196040;
            case 0x196044u: goto label_196044;
            case 0x196048u: goto label_196048;
            case 0x19604Cu: goto label_19604c;
            case 0x196050u: goto label_196050;
            case 0x196054u: goto label_196054;
            case 0x196058u: goto label_196058;
            case 0x19605Cu: goto label_19605c;
            case 0x196060u: goto label_196060;
            case 0x196064u: goto label_196064;
            case 0x196068u: goto label_196068;
            case 0x19606Cu: goto label_19606c;
            case 0x196070u: goto label_196070;
            case 0x196074u: goto label_196074;
            case 0x196078u: goto label_196078;
            case 0x19607Cu: goto label_19607c;
            case 0x196080u: goto label_196080;
            case 0x196084u: goto label_196084;
            case 0x196088u: goto label_196088;
            case 0x19608Cu: goto label_19608c;
            case 0x196090u: goto label_196090;
            case 0x196094u: goto label_196094;
            case 0x196098u: goto label_196098;
            case 0x19609Cu: goto label_19609c;
            case 0x1960A0u: goto label_1960a0;
            case 0x1960A4u: goto label_1960a4;
            case 0x1960A8u: goto label_1960a8;
            case 0x1960ACu: goto label_1960ac;
            case 0x1960B0u: goto label_1960b0;
            case 0x1960B4u: goto label_1960b4;
            case 0x1960B8u: goto label_1960b8;
            case 0x1960BCu: goto label_1960bc;
            case 0x1960C0u: goto label_1960c0;
            case 0x1960C4u: goto label_1960c4;
            case 0x1960C8u: goto label_1960c8;
            case 0x1960CCu: goto label_1960cc;
            case 0x1960D0u: goto label_1960d0;
            case 0x1960D4u: goto label_1960d4;
            case 0x1960D8u: goto label_1960d8;
            case 0x1960DCu: goto label_1960dc;
            case 0x1960E0u: goto label_1960e0;
            case 0x1960E4u: goto label_1960e4;
            case 0x1960E8u: goto label_1960e8;
            case 0x1960ECu: goto label_1960ec;
            case 0x1960F0u: goto label_1960f0;
            case 0x1960F4u: goto label_1960f4;
            case 0x1960F8u: goto label_1960f8;
            case 0x1960FCu: goto label_1960fc;
            case 0x196100u: goto label_196100;
            case 0x196104u: goto label_196104;
            case 0x196108u: goto label_196108;
            case 0x19610Cu: goto label_19610c;
            case 0x196110u: goto label_196110;
            case 0x196114u: goto label_196114;
            case 0x196118u: goto label_196118;
            case 0x19611Cu: goto label_19611c;
            case 0x196120u: goto label_196120;
            case 0x196124u: goto label_196124;
            case 0x196128u: goto label_196128;
            case 0x19612Cu: goto label_19612c;
            case 0x196130u: goto label_196130;
            case 0x196134u: goto label_196134;
            case 0x196138u: goto label_196138;
            case 0x19613Cu: goto label_19613c;
            case 0x196140u: goto label_196140;
            case 0x196144u: goto label_196144;
            case 0x196148u: goto label_196148;
            case 0x19614Cu: goto label_19614c;
            case 0x196150u: goto label_196150;
            case 0x196154u: goto label_196154;
            case 0x196158u: goto label_196158;
            case 0x19615Cu: goto label_19615c;
            case 0x196160u: goto label_196160;
            case 0x196164u: goto label_196164;
            case 0x196168u: goto label_196168;
            case 0x19616Cu: goto label_19616c;
            case 0x196170u: goto label_196170;
            case 0x196174u: goto label_196174;
            case 0x196178u: goto label_196178;
            case 0x19617Cu: goto label_19617c;
            case 0x196180u: goto label_196180;
            case 0x196184u: goto label_196184;
            case 0x196188u: goto label_196188;
            case 0x19618Cu: goto label_19618c;
            case 0x196190u: goto label_196190;
            case 0x196194u: goto label_196194;
            case 0x196198u: goto label_196198;
            case 0x19619Cu: goto label_19619c;
            case 0x1961A0u: goto label_1961a0;
            case 0x1961A4u: goto label_1961a4;
            case 0x1961A8u: goto label_1961a8;
            case 0x1961ACu: goto label_1961ac;
            case 0x1961B0u: goto label_1961b0;
            case 0x1961B4u: goto label_1961b4;
            case 0x1961B8u: goto label_1961b8;
            case 0x1961BCu: goto label_1961bc;
            case 0x1961C0u: goto label_1961c0;
            case 0x1961C4u: goto label_1961c4;
            case 0x1961C8u: goto label_1961c8;
            case 0x1961CCu: goto label_1961cc;
            case 0x1961D0u: goto label_1961d0;
            case 0x1961D4u: goto label_1961d4;
            case 0x1961D8u: goto label_1961d8;
            case 0x1961DCu: goto label_1961dc;
            case 0x1961E0u: goto label_1961e0;
            case 0x1961E4u: goto label_1961e4;
            case 0x1961E8u: goto label_1961e8;
            case 0x1961ECu: goto label_1961ec;
            case 0x1961F0u: goto label_1961f0;
            case 0x1961F4u: goto label_1961f4;
            case 0x1961F8u: goto label_1961f8;
            case 0x1961FCu: goto label_1961fc;
            case 0x196200u: goto label_196200;
            case 0x196204u: goto label_196204;
            case 0x196208u: goto label_196208;
            case 0x19620Cu: goto label_19620c;
            case 0x196210u: goto label_196210;
            case 0x196214u: goto label_196214;
            case 0x196218u: goto label_196218;
            case 0x19621Cu: goto label_19621c;
            case 0x196220u: goto label_196220;
            case 0x196224u: goto label_196224;
            case 0x196228u: goto label_196228;
            case 0x19622Cu: goto label_19622c;
            case 0x196230u: goto label_196230;
            case 0x196234u: goto label_196234;
            case 0x196238u: goto label_196238;
            case 0x19623Cu: goto label_19623c;
            case 0x196240u: goto label_196240;
            case 0x196244u: goto label_196244;
            case 0x196248u: goto label_196248;
            case 0x19624Cu: goto label_19624c;
            case 0x196250u: goto label_196250;
            case 0x196254u: goto label_196254;
            case 0x196258u: goto label_196258;
            case 0x19625Cu: goto label_19625c;
            case 0x196260u: goto label_196260;
            case 0x196264u: goto label_196264;
            case 0x196268u: goto label_196268;
            case 0x19626Cu: goto label_19626c;
            case 0x196270u: goto label_196270;
            case 0x196274u: goto label_196274;
            case 0x196278u: goto label_196278;
            case 0x19627Cu: goto label_19627c;
            case 0x196280u: goto label_196280;
            case 0x196284u: goto label_196284;
            case 0x196288u: goto label_196288;
            case 0x19628Cu: goto label_19628c;
            case 0x196290u: goto label_196290;
            case 0x196294u: goto label_196294;
            case 0x196298u: goto label_196298;
            case 0x19629Cu: goto label_19629c;
            case 0x1962A0u: goto label_1962a0;
            case 0x1962A4u: goto label_1962a4;
            case 0x1962A8u: goto label_1962a8;
            case 0x1962ACu: goto label_1962ac;
            case 0x1962B0u: goto label_1962b0;
            case 0x1962B4u: goto label_1962b4;
            case 0x1962B8u: goto label_1962b8;
            case 0x1962BCu: goto label_1962bc;
            case 0x1962C0u: goto label_1962c0;
            case 0x1962C4u: goto label_1962c4;
            case 0x1962C8u: goto label_1962c8;
            case 0x1962CCu: goto label_1962cc;
            case 0x1962D0u: goto label_1962d0;
            case 0x1962D4u: goto label_1962d4;
            case 0x1962D8u: goto label_1962d8;
            case 0x1962DCu: goto label_1962dc;
            case 0x1962E0u: goto label_1962e0;
            case 0x1962E4u: goto label_1962e4;
            case 0x1962E8u: goto label_1962e8;
            case 0x1962ECu: goto label_1962ec;
            case 0x1962F0u: goto label_1962f0;
            case 0x1962F4u: goto label_1962f4;
            case 0x1962F8u: goto label_1962f8;
            case 0x1962FCu: goto label_1962fc;
            case 0x196300u: goto label_196300;
            case 0x196304u: goto label_196304;
            case 0x196308u: goto label_196308;
            case 0x19630Cu: goto label_19630c;
            case 0x196310u: goto label_196310;
            case 0x196314u: goto label_196314;
            case 0x196318u: goto label_196318;
            case 0x19631Cu: goto label_19631c;
            case 0x196320u: goto label_196320;
            case 0x196324u: goto label_196324;
            case 0x196328u: goto label_196328;
            case 0x19632Cu: goto label_19632c;
            case 0x196330u: goto label_196330;
            case 0x196334u: goto label_196334;
            case 0x196338u: goto label_196338;
            case 0x19633Cu: goto label_19633c;
            case 0x196340u: goto label_196340;
            case 0x196344u: goto label_196344;
            case 0x196348u: goto label_196348;
            case 0x19634Cu: goto label_19634c;
            case 0x196350u: goto label_196350;
            case 0x196354u: goto label_196354;
            case 0x196358u: goto label_196358;
            case 0x19635Cu: goto label_19635c;
            case 0x196360u: goto label_196360;
            case 0x196364u: goto label_196364;
            case 0x196368u: goto label_196368;
            case 0x19636Cu: goto label_19636c;
            case 0x196370u: goto label_196370;
            case 0x196374u: goto label_196374;
            case 0x196378u: goto label_196378;
            case 0x19637Cu: goto label_19637c;
            case 0x196380u: goto label_196380;
            case 0x196384u: goto label_196384;
            case 0x196388u: goto label_196388;
            case 0x19638Cu: goto label_19638c;
            case 0x196390u: goto label_196390;
            case 0x196394u: goto label_196394;
            case 0x196398u: goto label_196398;
            case 0x19639Cu: goto label_19639c;
            case 0x1963A0u: goto label_1963a0;
            case 0x1963A4u: goto label_1963a4;
            case 0x1963A8u: goto label_1963a8;
            case 0x1963ACu: goto label_1963ac;
            case 0x1963B0u: goto label_1963b0;
            case 0x1963B4u: goto label_1963b4;
            case 0x1963B8u: goto label_1963b8;
            case 0x1963BCu: goto label_1963bc;
            case 0x1963C0u: goto label_1963c0;
            case 0x1963C4u: goto label_1963c4;
            case 0x1963C8u: goto label_1963c8;
            case 0x1963CCu: goto label_1963cc;
            case 0x1963D0u: goto label_1963d0;
            case 0x1963D4u: goto label_1963d4;
            case 0x1963D8u: goto label_1963d8;
            case 0x1963DCu: goto label_1963dc;
            case 0x1963E0u: goto label_1963e0;
            case 0x1963E4u: goto label_1963e4;
            case 0x1963E8u: goto label_1963e8;
            case 0x1963ECu: goto label_1963ec;
            case 0x1963F0u: goto label_1963f0;
            case 0x1963F4u: goto label_1963f4;
            case 0x1963F8u: goto label_1963f8;
            case 0x1963FCu: goto label_1963fc;
            case 0x196400u: goto label_196400;
            case 0x196404u: goto label_196404;
            case 0x196408u: goto label_196408;
            case 0x19640Cu: goto label_19640c;
            case 0x196410u: goto label_196410;
            case 0x196414u: goto label_196414;
            case 0x196418u: goto label_196418;
            case 0x19641Cu: goto label_19641c;
            case 0x196420u: goto label_196420;
            case 0x196424u: goto label_196424;
            case 0x196428u: goto label_196428;
            case 0x19642Cu: goto label_19642c;
            case 0x196430u: goto label_196430;
            case 0x196434u: goto label_196434;
            case 0x196438u: goto label_196438;
            case 0x19643Cu: goto label_19643c;
            case 0x196440u: goto label_196440;
            case 0x196444u: goto label_196444;
            case 0x196448u: goto label_196448;
            case 0x19644Cu: goto label_19644c;
            case 0x196450u: goto label_196450;
            case 0x196454u: goto label_196454;
            case 0x196458u: goto label_196458;
            case 0x19645Cu: goto label_19645c;
            case 0x196460u: goto label_196460;
            case 0x196464u: goto label_196464;
            case 0x196468u: goto label_196468;
            case 0x19646Cu: goto label_19646c;
            case 0x196470u: goto label_196470;
            case 0x196474u: goto label_196474;
            case 0x196478u: goto label_196478;
            case 0x19647Cu: goto label_19647c;
            case 0x196480u: goto label_196480;
            case 0x196484u: goto label_196484;
            case 0x196488u: goto label_196488;
            case 0x19648Cu: goto label_19648c;
            case 0x196490u: goto label_196490;
            case 0x196494u: goto label_196494;
            case 0x196498u: goto label_196498;
            case 0x19649Cu: goto label_19649c;
            case 0x1964A0u: goto label_1964a0;
            case 0x1964A4u: goto label_1964a4;
            case 0x1964A8u: goto label_1964a8;
            case 0x1964ACu: goto label_1964ac;
            case 0x1964B0u: goto label_1964b0;
            case 0x1964B4u: goto label_1964b4;
            case 0x1964B8u: goto label_1964b8;
            case 0x1964BCu: goto label_1964bc;
            case 0x1964C0u: goto label_1964c0;
            case 0x1964C4u: goto label_1964c4;
            case 0x1964C8u: goto label_1964c8;
            case 0x1964CCu: goto label_1964cc;
            case 0x1964D0u: goto label_1964d0;
            case 0x1964D4u: goto label_1964d4;
            case 0x1964D8u: goto label_1964d8;
            case 0x1964DCu: goto label_1964dc;
            case 0x1964E0u: goto label_1964e0;
            case 0x1964E4u: goto label_1964e4;
            case 0x1964E8u: goto label_1964e8;
            case 0x1964ECu: goto label_1964ec;
            case 0x1964F0u: goto label_1964f0;
            case 0x1964F4u: goto label_1964f4;
            case 0x1964F8u: goto label_1964f8;
            case 0x1964FCu: goto label_1964fc;
            case 0x196500u: goto label_196500;
            case 0x196504u: goto label_196504;
            case 0x196508u: goto label_196508;
            case 0x19650Cu: goto label_19650c;
            case 0x196510u: goto label_196510;
            case 0x196514u: goto label_196514;
            case 0x196518u: goto label_196518;
            case 0x19651Cu: goto label_19651c;
            case 0x196520u: goto label_196520;
            case 0x196524u: goto label_196524;
            case 0x196528u: goto label_196528;
            case 0x19652Cu: goto label_19652c;
            case 0x196530u: goto label_196530;
            case 0x196534u: goto label_196534;
            case 0x196538u: goto label_196538;
            case 0x19653Cu: goto label_19653c;
            case 0x196540u: goto label_196540;
            case 0x196544u: goto label_196544;
            case 0x196548u: goto label_196548;
            case 0x19654Cu: goto label_19654c;
            case 0x196550u: goto label_196550;
            case 0x196554u: goto label_196554;
            case 0x196558u: goto label_196558;
            case 0x19655Cu: goto label_19655c;
            case 0x196560u: goto label_196560;
            case 0x196564u: goto label_196564;
            case 0x196568u: goto label_196568;
            case 0x19656Cu: goto label_19656c;
            case 0x196570u: goto label_196570;
            case 0x196574u: goto label_196574;
            case 0x196578u: goto label_196578;
            case 0x19657Cu: goto label_19657c;
            case 0x196580u: goto label_196580;
            case 0x196584u: goto label_196584;
            case 0x196588u: goto label_196588;
            case 0x19658Cu: goto label_19658c;
            case 0x196590u: goto label_196590;
            case 0x196594u: goto label_196594;
            case 0x196598u: goto label_196598;
            case 0x19659Cu: goto label_19659c;
            case 0x1965A0u: goto label_1965a0;
            case 0x1965A4u: goto label_1965a4;
            case 0x1965A8u: goto label_1965a8;
            case 0x1965ACu: goto label_1965ac;
            case 0x1965B0u: goto label_1965b0;
            case 0x1965B4u: goto label_1965b4;
            case 0x1965B8u: goto label_1965b8;
            case 0x1965BCu: goto label_1965bc;
            case 0x1965C0u: goto label_1965c0;
            case 0x1965C4u: goto label_1965c4;
            case 0x1965C8u: goto label_1965c8;
            case 0x1965CCu: goto label_1965cc;
            case 0x1965D0u: goto label_1965d0;
            case 0x1965D4u: goto label_1965d4;
            case 0x1965D8u: goto label_1965d8;
            case 0x1965DCu: goto label_1965dc;
            case 0x1965E0u: goto label_1965e0;
            case 0x1965E4u: goto label_1965e4;
            case 0x1965E8u: goto label_1965e8;
            case 0x1965ECu: goto label_1965ec;
            case 0x1965F0u: goto label_1965f0;
            case 0x1965F4u: goto label_1965f4;
            case 0x1965F8u: goto label_1965f8;
            case 0x1965FCu: goto label_1965fc;
            case 0x196600u: goto label_196600;
            case 0x196604u: goto label_196604;
            case 0x196608u: goto label_196608;
            case 0x19660Cu: goto label_19660c;
            case 0x196610u: goto label_196610;
            case 0x196614u: goto label_196614;
            case 0x196618u: goto label_196618;
            case 0x19661Cu: goto label_19661c;
            case 0x196620u: goto label_196620;
            case 0x196624u: goto label_196624;
            case 0x196628u: goto label_196628;
            case 0x19662Cu: goto label_19662c;
            case 0x196630u: goto label_196630;
            case 0x196634u: goto label_196634;
            case 0x196638u: goto label_196638;
            case 0x19663Cu: goto label_19663c;
            case 0x196640u: goto label_196640;
            case 0x196644u: goto label_196644;
            case 0x196648u: goto label_196648;
            case 0x19664Cu: goto label_19664c;
            case 0x196650u: goto label_196650;
            case 0x196654u: goto label_196654;
            case 0x196658u: goto label_196658;
            case 0x19665Cu: goto label_19665c;
            case 0x196660u: goto label_196660;
            case 0x196664u: goto label_196664;
            case 0x196668u: goto label_196668;
            case 0x19666Cu: goto label_19666c;
            case 0x196670u: goto label_196670;
            case 0x196674u: goto label_196674;
            case 0x196678u: goto label_196678;
            case 0x19667Cu: goto label_19667c;
            case 0x196680u: goto label_196680;
            case 0x196684u: goto label_196684;
            case 0x196688u: goto label_196688;
            case 0x19668Cu: goto label_19668c;
            case 0x196690u: goto label_196690;
            case 0x196694u: goto label_196694;
            case 0x196698u: goto label_196698;
            case 0x19669Cu: goto label_19669c;
            case 0x1966A0u: goto label_1966a0;
            case 0x1966A4u: goto label_1966a4;
            case 0x1966A8u: goto label_1966a8;
            case 0x1966ACu: goto label_1966ac;
            case 0x1966B0u: goto label_1966b0;
            case 0x1966B4u: goto label_1966b4;
            case 0x1966B8u: goto label_1966b8;
            case 0x1966BCu: goto label_1966bc;
            case 0x1966C0u: goto label_1966c0;
            case 0x1966C4u: goto label_1966c4;
            case 0x1966C8u: goto label_1966c8;
            case 0x1966CCu: goto label_1966cc;
            case 0x1966D0u: goto label_1966d0;
            case 0x1966D4u: goto label_1966d4;
            case 0x1966D8u: goto label_1966d8;
            case 0x1966DCu: goto label_1966dc;
            case 0x1966E0u: goto label_1966e0;
            case 0x1966E4u: goto label_1966e4;
            case 0x1966E8u: goto label_1966e8;
            case 0x1966ECu: goto label_1966ec;
            case 0x1966F0u: goto label_1966f0;
            case 0x1966F4u: goto label_1966f4;
            case 0x1966F8u: goto label_1966f8;
            case 0x1966FCu: goto label_1966fc;
            case 0x196700u: goto label_196700;
            case 0x196704u: goto label_196704;
            case 0x196708u: goto label_196708;
            case 0x19670Cu: goto label_19670c;
            case 0x196710u: goto label_196710;
            case 0x196714u: goto label_196714;
            case 0x196718u: goto label_196718;
            case 0x19671Cu: goto label_19671c;
            case 0x196720u: goto label_196720;
            case 0x196724u: goto label_196724;
            case 0x196728u: goto label_196728;
            case 0x19672Cu: goto label_19672c;
            case 0x196730u: goto label_196730;
            case 0x196734u: goto label_196734;
            case 0x196738u: goto label_196738;
            case 0x19673Cu: goto label_19673c;
            case 0x196740u: goto label_196740;
            case 0x196744u: goto label_196744;
            case 0x196748u: goto label_196748;
            case 0x19674Cu: goto label_19674c;
            case 0x196750u: goto label_196750;
            case 0x196754u: goto label_196754;
            case 0x196758u: goto label_196758;
            case 0x19675Cu: goto label_19675c;
            case 0x196760u: goto label_196760;
            case 0x196764u: goto label_196764;
            case 0x196768u: goto label_196768;
            case 0x19676Cu: goto label_19676c;
            case 0x196770u: goto label_196770;
            case 0x196774u: goto label_196774;
            case 0x196778u: goto label_196778;
            case 0x19677Cu: goto label_19677c;
            case 0x196780u: goto label_196780;
            case 0x196784u: goto label_196784;
            case 0x196788u: goto label_196788;
            case 0x19678Cu: goto label_19678c;
            case 0x196790u: goto label_196790;
            case 0x196794u: goto label_196794;
            case 0x196798u: goto label_196798;
            case 0x19679Cu: goto label_19679c;
            case 0x1967A0u: goto label_1967a0;
            case 0x1967A4u: goto label_1967a4;
            case 0x1967A8u: goto label_1967a8;
            case 0x1967ACu: goto label_1967ac;
            case 0x1967B0u: goto label_1967b0;
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1967BCu: goto label_1967bc;
            case 0x1967C0u: goto label_1967c0;
            case 0x1967C4u: goto label_1967c4;
            case 0x1967C8u: goto label_1967c8;
            case 0x1967CCu: goto label_1967cc;
            case 0x1967D0u: goto label_1967d0;
            case 0x1967D4u: goto label_1967d4;
            case 0x1967D8u: goto label_1967d8;
            case 0x1967DCu: goto label_1967dc;
            case 0x1967E0u: goto label_1967e0;
            case 0x1967E4u: goto label_1967e4;
            case 0x1967E8u: goto label_1967e8;
            case 0x1967ECu: goto label_1967ec;
            case 0x1967F0u: goto label_1967f0;
            case 0x1967F4u: goto label_1967f4;
            case 0x1967F8u: goto label_1967f8;
            case 0x1967FCu: goto label_1967fc;
            case 0x196800u: goto label_196800;
            case 0x196804u: goto label_196804;
            case 0x196808u: goto label_196808;
            case 0x19680Cu: goto label_19680c;
            case 0x196810u: goto label_196810;
            case 0x196814u: goto label_196814;
            case 0x196818u: goto label_196818;
            case 0x19681Cu: goto label_19681c;
            case 0x196820u: goto label_196820;
            case 0x196824u: goto label_196824;
            case 0x196828u: goto label_196828;
            case 0x19682Cu: goto label_19682c;
            case 0x196830u: goto label_196830;
            case 0x196834u: goto label_196834;
            case 0x196838u: goto label_196838;
            case 0x19683Cu: goto label_19683c;
            case 0x196840u: goto label_196840;
            case 0x196844u: goto label_196844;
            case 0x196848u: goto label_196848;
            case 0x19684Cu: goto label_19684c;
            case 0x196850u: goto label_196850;
            case 0x196854u: goto label_196854;
            case 0x196858u: goto label_196858;
            case 0x19685Cu: goto label_19685c;
            case 0x196860u: goto label_196860;
            case 0x196864u: goto label_196864;
            case 0x196868u: goto label_196868;
            case 0x19686Cu: goto label_19686c;
            case 0x196870u: goto label_196870;
            case 0x196874u: goto label_196874;
            case 0x196878u: goto label_196878;
            case 0x19687Cu: goto label_19687c;
            case 0x196880u: goto label_196880;
            case 0x196884u: goto label_196884;
            case 0x196888u: goto label_196888;
            case 0x19688Cu: goto label_19688c;
            case 0x196890u: goto label_196890;
            case 0x196894u: goto label_196894;
            case 0x196898u: goto label_196898;
            case 0x19689Cu: goto label_19689c;
            case 0x1968A0u: goto label_1968a0;
            case 0x1968A4u: goto label_1968a4;
            case 0x1968A8u: goto label_1968a8;
            case 0x1968ACu: goto label_1968ac;
            case 0x1968B0u: goto label_1968b0;
            case 0x1968B4u: goto label_1968b4;
            case 0x1968B8u: goto label_1968b8;
            case 0x1968BCu: goto label_1968bc;
            case 0x1968C0u: goto label_1968c0;
            case 0x1968C4u: goto label_1968c4;
            case 0x1968C8u: goto label_1968c8;
            case 0x1968CCu: goto label_1968cc;
            case 0x1968D0u: goto label_1968d0;
            case 0x1968D4u: goto label_1968d4;
            case 0x1968D8u: goto label_1968d8;
            case 0x1968DCu: goto label_1968dc;
            case 0x1968E0u: goto label_1968e0;
            case 0x1968E4u: goto label_1968e4;
            case 0x1968E8u: goto label_1968e8;
            case 0x1968ECu: goto label_1968ec;
            case 0x1968F0u: goto label_1968f0;
            case 0x1968F4u: goto label_1968f4;
            case 0x1968F8u: goto label_1968f8;
            case 0x1968FCu: goto label_1968fc;
            case 0x196900u: goto label_196900;
            case 0x196904u: goto label_196904;
            case 0x196908u: goto label_196908;
            case 0x19690Cu: goto label_19690c;
            case 0x196910u: goto label_196910;
            case 0x196914u: goto label_196914;
            case 0x196918u: goto label_196918;
            case 0x19691Cu: goto label_19691c;
            case 0x196920u: goto label_196920;
            case 0x196924u: goto label_196924;
            case 0x196928u: goto label_196928;
            case 0x19692Cu: goto label_19692c;
            case 0x196930u: goto label_196930;
            case 0x196934u: goto label_196934;
            case 0x196938u: goto label_196938;
            case 0x19693Cu: goto label_19693c;
            case 0x196940u: goto label_196940;
            case 0x196944u: goto label_196944;
            case 0x196948u: goto label_196948;
            case 0x19694Cu: goto label_19694c;
            case 0x196950u: goto label_196950;
            case 0x196954u: goto label_196954;
            case 0x196958u: goto label_196958;
            case 0x19695Cu: goto label_19695c;
            case 0x196960u: goto label_196960;
            case 0x196964u: goto label_196964;
            case 0x196968u: goto label_196968;
            case 0x19696Cu: goto label_19696c;
            case 0x196970u: goto label_196970;
            case 0x196974u: goto label_196974;
            case 0x196978u: goto label_196978;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            case 0x196988u: goto label_196988;
            case 0x19698Cu: goto label_19698c;
            case 0x196990u: goto label_196990;
            case 0x196994u: goto label_196994;
            case 0x196998u: goto label_196998;
            case 0x19699Cu: goto label_19699c;
            case 0x1969A0u: goto label_1969a0;
            case 0x1969A4u: goto label_1969a4;
            case 0x1969A8u: goto label_1969a8;
            case 0x1969ACu: goto label_1969ac;
            case 0x1969B0u: goto label_1969b0;
            case 0x1969B4u: goto label_1969b4;
            case 0x1969B8u: goto label_1969b8;
            case 0x1969BCu: goto label_1969bc;
            case 0x1969C0u: goto label_1969c0;
            case 0x1969C4u: goto label_1969c4;
            case 0x1969C8u: goto label_1969c8;
            case 0x1969CCu: goto label_1969cc;
            case 0x1969D0u: goto label_1969d0;
            case 0x1969D4u: goto label_1969d4;
            case 0x1969D8u: goto label_1969d8;
            case 0x1969DCu: goto label_1969dc;
            case 0x1969E0u: goto label_1969e0;
            case 0x1969E4u: goto label_1969e4;
            case 0x1969E8u: goto label_1969e8;
            case 0x1969ECu: goto label_1969ec;
            case 0x1969F0u: goto label_1969f0;
            case 0x1969F4u: goto label_1969f4;
            case 0x1969F8u: goto label_1969f8;
            case 0x1969FCu: goto label_1969fc;
            case 0x196A00u: goto label_196a00;
            case 0x196A04u: goto label_196a04;
            case 0x196A08u: goto label_196a08;
            case 0x196A0Cu: goto label_196a0c;
            case 0x196A10u: goto label_196a10;
            case 0x196A14u: goto label_196a14;
            case 0x196A18u: goto label_196a18;
            case 0x196A1Cu: goto label_196a1c;
            case 0x196A20u: goto label_196a20;
            case 0x196A24u: goto label_196a24;
            case 0x196A28u: goto label_196a28;
            case 0x196A2Cu: goto label_196a2c;
            case 0x196A30u: goto label_196a30;
            case 0x196A34u: goto label_196a34;
            case 0x196A38u: goto label_196a38;
            case 0x196A3Cu: goto label_196a3c;
            case 0x196A40u: goto label_196a40;
            case 0x196A44u: goto label_196a44;
            case 0x196A48u: goto label_196a48;
            case 0x196A4Cu: goto label_196a4c;
            case 0x196A50u: goto label_196a50;
            case 0x196A54u: goto label_196a54;
            case 0x196A58u: goto label_196a58;
            case 0x196A5Cu: goto label_196a5c;
            case 0x196A60u: goto label_196a60;
            case 0x196A64u: goto label_196a64;
            case 0x196A68u: goto label_196a68;
            case 0x196A6Cu: goto label_196a6c;
            case 0x196A70u: goto label_196a70;
            case 0x196A74u: goto label_196a74;
            case 0x196A78u: goto label_196a78;
            case 0x196A7Cu: goto label_196a7c;
            case 0x196A80u: goto label_196a80;
            case 0x196A84u: goto label_196a84;
            case 0x196A88u: goto label_196a88;
            case 0x196A8Cu: goto label_196a8c;
            case 0x196A90u: goto label_196a90;
            case 0x196A94u: goto label_196a94;
            case 0x196A98u: goto label_196a98;
            case 0x196A9Cu: goto label_196a9c;
            case 0x196AA0u: goto label_196aa0;
            case 0x196AA4u: goto label_196aa4;
            case 0x196AA8u: goto label_196aa8;
            case 0x196AACu: goto label_196aac;
            case 0x196AB0u: goto label_196ab0;
            case 0x196AB4u: goto label_196ab4;
            case 0x196AB8u: goto label_196ab8;
            case 0x196ABCu: goto label_196abc;
            case 0x196AC0u: goto label_196ac0;
            case 0x196AC4u: goto label_196ac4;
            case 0x196AC8u: goto label_196ac8;
            case 0x196ACCu: goto label_196acc;
            case 0x196AD0u: goto label_196ad0;
            case 0x196AD4u: goto label_196ad4;
            case 0x196AD8u: goto label_196ad8;
            case 0x196ADCu: goto label_196adc;
            case 0x196AE0u: goto label_196ae0;
            case 0x196AE4u: goto label_196ae4;
            case 0x196AE8u: goto label_196ae8;
            case 0x196AECu: goto label_196aec;
            case 0x196AF0u: goto label_196af0;
            case 0x196AF4u: goto label_196af4;
            case 0x196AF8u: goto label_196af8;
            case 0x196AFCu: goto label_196afc;
            case 0x196B00u: goto label_196b00;
            case 0x196B04u: goto label_196b04;
            case 0x196B08u: goto label_196b08;
            case 0x196B0Cu: goto label_196b0c;
            case 0x196B10u: goto label_196b10;
            case 0x196B14u: goto label_196b14;
            case 0x196B18u: goto label_196b18;
            case 0x196B1Cu: goto label_196b1c;
            case 0x196B20u: goto label_196b20;
            case 0x196B24u: goto label_196b24;
            case 0x196B28u: goto label_196b28;
            case 0x196B2Cu: goto label_196b2c;
            case 0x196B30u: goto label_196b30;
            case 0x196B34u: goto label_196b34;
            case 0x196B38u: goto label_196b38;
            case 0x196B3Cu: goto label_196b3c;
            case 0x196B40u: goto label_196b40;
            case 0x196B44u: goto label_196b44;
            case 0x196B48u: goto label_196b48;
            case 0x196B4Cu: goto label_196b4c;
            case 0x196B50u: goto label_196b50;
            case 0x196B54u: goto label_196b54;
            case 0x196B58u: goto label_196b58;
            case 0x196B5Cu: goto label_196b5c;
            case 0x196B60u: goto label_196b60;
            case 0x196B64u: goto label_196b64;
            case 0x196B68u: goto label_196b68;
            case 0x196B6Cu: goto label_196b6c;
            case 0x196B70u: goto label_196b70;
            case 0x196B74u: goto label_196b74;
            case 0x196B78u: goto label_196b78;
            case 0x196B7Cu: goto label_196b7c;
            case 0x196B80u: goto label_196b80;
            case 0x196B84u: goto label_196b84;
            case 0x196B88u: goto label_196b88;
            case 0x196B8Cu: goto label_196b8c;
            case 0x196B90u: goto label_196b90;
            case 0x196B94u: goto label_196b94;
            case 0x196B98u: goto label_196b98;
            case 0x196B9Cu: goto label_196b9c;
            case 0x196BA0u: goto label_196ba0;
            case 0x196BA4u: goto label_196ba4;
            case 0x196BA8u: goto label_196ba8;
            case 0x196BACu: goto label_196bac;
            case 0x196BB0u: goto label_196bb0;
            case 0x196BB4u: goto label_196bb4;
            case 0x196BB8u: goto label_196bb8;
            case 0x196BBCu: goto label_196bbc;
            case 0x196BC0u: goto label_196bc0;
            case 0x196BC4u: goto label_196bc4;
            case 0x196BC8u: goto label_196bc8;
            case 0x196BCCu: goto label_196bcc;
            case 0x196BD0u: goto label_196bd0;
            case 0x196BD4u: goto label_196bd4;
            case 0x196BD8u: goto label_196bd8;
            case 0x196BDCu: goto label_196bdc;
            case 0x196BE0u: goto label_196be0;
            case 0x196BE4u: goto label_196be4;
            case 0x196BE8u: goto label_196be8;
            case 0x196BECu: goto label_196bec;
            case 0x196BF0u: goto label_196bf0;
            case 0x196BF4u: goto label_196bf4;
            case 0x196BF8u: goto label_196bf8;
            case 0x196BFCu: goto label_196bfc;
            case 0x196C00u: goto label_196c00;
            case 0x196C04u: goto label_196c04;
            case 0x196C08u: goto label_196c08;
            case 0x196C0Cu: goto label_196c0c;
            case 0x196C10u: goto label_196c10;
            case 0x196C14u: goto label_196c14;
            case 0x196C18u: goto label_196c18;
            case 0x196C1Cu: goto label_196c1c;
            case 0x196C20u: goto label_196c20;
            case 0x196C24u: goto label_196c24;
            case 0x196C28u: goto label_196c28;
            case 0x196C2Cu: goto label_196c2c;
            case 0x196C30u: goto label_196c30;
            case 0x196C34u: goto label_196c34;
            case 0x196C38u: goto label_196c38;
            case 0x196C3Cu: goto label_196c3c;
            case 0x196C40u: goto label_196c40;
            case 0x196C44u: goto label_196c44;
            case 0x196C48u: goto label_196c48;
            case 0x196C4Cu: goto label_196c4c;
            case 0x196C50u: goto label_196c50;
            case 0x196C54u: goto label_196c54;
            case 0x196C58u: goto label_196c58;
            case 0x196C5Cu: goto label_196c5c;
            case 0x196C60u: goto label_196c60;
            case 0x196C64u: goto label_196c64;
            case 0x196C68u: goto label_196c68;
            case 0x196C6Cu: goto label_196c6c;
            case 0x196C70u: goto label_196c70;
            case 0x196C74u: goto label_196c74;
            case 0x196C78u: goto label_196c78;
            case 0x196C7Cu: goto label_196c7c;
            case 0x196C80u: goto label_196c80;
            case 0x196C84u: goto label_196c84;
            case 0x196C88u: goto label_196c88;
            case 0x196C8Cu: goto label_196c8c;
            case 0x196C90u: goto label_196c90;
            case 0x196C94u: goto label_196c94;
            case 0x196C98u: goto label_196c98;
            case 0x196C9Cu: goto label_196c9c;
            case 0x196CA0u: goto label_196ca0;
            case 0x196CA4u: goto label_196ca4;
            case 0x196CA8u: goto label_196ca8;
            case 0x196CACu: goto label_196cac;
            case 0x196CB0u: goto label_196cb0;
            case 0x196CB4u: goto label_196cb4;
            case 0x196CB8u: goto label_196cb8;
            case 0x196CBCu: goto label_196cbc;
            case 0x196CC0u: goto label_196cc0;
            case 0x196CC4u: goto label_196cc4;
            case 0x196CC8u: goto label_196cc8;
            case 0x196CCCu: goto label_196ccc;
            case 0x196CD0u: goto label_196cd0;
            case 0x196CD4u: goto label_196cd4;
            case 0x196CD8u: goto label_196cd8;
            case 0x196CDCu: goto label_196cdc;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196CE8u: goto label_196ce8;
            case 0x196CECu: goto label_196cec;
            case 0x196CF0u: goto label_196cf0;
            case 0x196CF4u: goto label_196cf4;
            case 0x196CF8u: goto label_196cf8;
            case 0x196CFCu: goto label_196cfc;
            case 0x196D00u: goto label_196d00;
            case 0x196D04u: goto label_196d04;
            case 0x196D08u: goto label_196d08;
            case 0x196D0Cu: goto label_196d0c;
            case 0x196D10u: goto label_196d10;
            case 0x196D14u: goto label_196d14;
            case 0x196D18u: goto label_196d18;
            case 0x196D1Cu: goto label_196d1c;
            case 0x196D20u: goto label_196d20;
            case 0x196D24u: goto label_196d24;
            case 0x196D28u: goto label_196d28;
            case 0x196D2Cu: goto label_196d2c;
            case 0x196D30u: goto label_196d30;
            case 0x196D34u: goto label_196d34;
            case 0x196D38u: goto label_196d38;
            case 0x196D3Cu: goto label_196d3c;
            case 0x196D40u: goto label_196d40;
            case 0x196D44u: goto label_196d44;
            case 0x196D48u: goto label_196d48;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D50u: goto label_196d50;
            case 0x196D54u: goto label_196d54;
            case 0x196D58u: goto label_196d58;
            case 0x196D5Cu: goto label_196d5c;
            case 0x196D60u: goto label_196d60;
            case 0x196D64u: goto label_196d64;
            case 0x196D68u: goto label_196d68;
            case 0x196D6Cu: goto label_196d6c;
            case 0x196D70u: goto label_196d70;
            case 0x196D74u: goto label_196d74;
            case 0x196D78u: goto label_196d78;
            case 0x196D7Cu: goto label_196d7c;
            case 0x196D80u: goto label_196d80;
            case 0x196D84u: goto label_196d84;
            case 0x196D88u: goto label_196d88;
            case 0x196D8Cu: goto label_196d8c;
            case 0x196D90u: goto label_196d90;
            case 0x196D94u: goto label_196d94;
            case 0x196D98u: goto label_196d98;
            case 0x196D9Cu: goto label_196d9c;
            case 0x196DA0u: goto label_196da0;
            case 0x196DA4u: goto label_196da4;
            case 0x196DA8u: goto label_196da8;
            case 0x196DACu: goto label_196dac;
            case 0x196DB0u: goto label_196db0;
            case 0x196DB4u: goto label_196db4;
            case 0x196DB8u: goto label_196db8;
            case 0x196DBCu: goto label_196dbc;
            case 0x196DC0u: goto label_196dc0;
            case 0x196DC4u: goto label_196dc4;
            case 0x196DC8u: goto label_196dc8;
            case 0x196DCCu: goto label_196dcc;
            case 0x196DD0u: goto label_196dd0;
            case 0x196DD4u: goto label_196dd4;
            case 0x196DD8u: goto label_196dd8;
            case 0x196DDCu: goto label_196ddc;
            case 0x196DE0u: goto label_196de0;
            case 0x196DE4u: goto label_196de4;
            case 0x196DE8u: goto label_196de8;
            case 0x196DECu: goto label_196dec;
            case 0x196DF0u: goto label_196df0;
            case 0x196DF4u: goto label_196df4;
            case 0x196DF8u: goto label_196df8;
            case 0x196DFCu: goto label_196dfc;
            case 0x196E00u: goto label_196e00;
            case 0x196E04u: goto label_196e04;
            case 0x196E08u: goto label_196e08;
            case 0x196E0Cu: goto label_196e0c;
            case 0x196E10u: goto label_196e10;
            case 0x196E14u: goto label_196e14;
            case 0x196E18u: goto label_196e18;
            case 0x196E1Cu: goto label_196e1c;
            case 0x196E20u: goto label_196e20;
            case 0x196E24u: goto label_196e24;
            case 0x196E28u: goto label_196e28;
            case 0x196E2Cu: goto label_196e2c;
            case 0x196E30u: goto label_196e30;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196E3Cu: goto label_196e3c;
            case 0x196E40u: goto label_196e40;
            case 0x196E44u: goto label_196e44;
            case 0x196E48u: goto label_196e48;
            case 0x196E4Cu: goto label_196e4c;
            case 0x196E50u: goto label_196e50;
            case 0x196E54u: goto label_196e54;
            case 0x196E58u: goto label_196e58;
            case 0x196E5Cu: goto label_196e5c;
            case 0x196E60u: goto label_196e60;
            case 0x196E64u: goto label_196e64;
            case 0x196E68u: goto label_196e68;
            case 0x196E6Cu: goto label_196e6c;
            case 0x196E70u: goto label_196e70;
            case 0x196E74u: goto label_196e74;
            case 0x196E78u: goto label_196e78;
            case 0x196E7Cu: goto label_196e7c;
            case 0x196E80u: goto label_196e80;
            case 0x196E84u: goto label_196e84;
            case 0x196E88u: goto label_196e88;
            case 0x196E8Cu: goto label_196e8c;
            case 0x196E90u: goto label_196e90;
            case 0x196E94u: goto label_196e94;
            case 0x196E98u: goto label_196e98;
            case 0x196E9Cu: goto label_196e9c;
            case 0x196EA0u: goto label_196ea0;
            case 0x196EA4u: goto label_196ea4;
            case 0x196EA8u: goto label_196ea8;
            case 0x196EACu: goto label_196eac;
            case 0x196EB0u: goto label_196eb0;
            case 0x196EB4u: goto label_196eb4;
            case 0x196EB8u: goto label_196eb8;
            case 0x196EBCu: goto label_196ebc;
            case 0x196EC0u: goto label_196ec0;
            case 0x196EC4u: goto label_196ec4;
            case 0x196EC8u: goto label_196ec8;
            case 0x196ECCu: goto label_196ecc;
            case 0x196ED0u: goto label_196ed0;
            case 0x196ED4u: goto label_196ed4;
            case 0x196ED8u: goto label_196ed8;
            case 0x196EDCu: goto label_196edc;
            case 0x196EE0u: goto label_196ee0;
            case 0x196EE4u: goto label_196ee4;
            case 0x196EE8u: goto label_196ee8;
            case 0x196EECu: goto label_196eec;
            case 0x196EF0u: goto label_196ef0;
            case 0x196EF4u: goto label_196ef4;
            case 0x196EF8u: goto label_196ef8;
            case 0x196EFCu: goto label_196efc;
            case 0x196F00u: goto label_196f00;
            case 0x196F04u: goto label_196f04;
            case 0x196F08u: goto label_196f08;
            case 0x196F0Cu: goto label_196f0c;
            case 0x196F10u: goto label_196f10;
            case 0x196F14u: goto label_196f14;
            case 0x196F18u: goto label_196f18;
            case 0x196F1Cu: goto label_196f1c;
            case 0x196F20u: goto label_196f20;
            case 0x196F24u: goto label_196f24;
            case 0x196F28u: goto label_196f28;
            case 0x196F2Cu: goto label_196f2c;
            case 0x196F30u: goto label_196f30;
            case 0x196F34u: goto label_196f34;
            case 0x196F38u: goto label_196f38;
            case 0x196F3Cu: goto label_196f3c;
            case 0x196F40u: goto label_196f40;
            case 0x196F44u: goto label_196f44;
            case 0x196F48u: goto label_196f48;
            case 0x196F4Cu: goto label_196f4c;
            case 0x196F50u: goto label_196f50;
            case 0x196F54u: goto label_196f54;
            case 0x196F58u: goto label_196f58;
            case 0x196F5Cu: goto label_196f5c;
            case 0x196F60u: goto label_196f60;
            case 0x196F64u: goto label_196f64;
            case 0x196F68u: goto label_196f68;
            case 0x196F6Cu: goto label_196f6c;
            case 0x196F70u: goto label_196f70;
            case 0x196F74u: goto label_196f74;
            case 0x196F78u: goto label_196f78;
            case 0x196F7Cu: goto label_196f7c;
            case 0x196F80u: goto label_196f80;
            case 0x196F84u: goto label_196f84;
            case 0x196F88u: goto label_196f88;
            case 0x196F8Cu: goto label_196f8c;
            case 0x196F90u: goto label_196f90;
            case 0x196F94u: goto label_196f94;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x196FA0u: goto label_196fa0;
            case 0x196FA4u: goto label_196fa4;
            case 0x196FA8u: goto label_196fa8;
            case 0x196FACu: goto label_196fac;
            case 0x196FB0u: goto label_196fb0;
            case 0x196FB4u: goto label_196fb4;
            case 0x196FB8u: goto label_196fb8;
            case 0x196FBCu: goto label_196fbc;
            case 0x196FC0u: goto label_196fc0;
            case 0x196FC4u: goto label_196fc4;
            case 0x196FC8u: goto label_196fc8;
            case 0x196FCCu: goto label_196fcc;
            case 0x196FD0u: goto label_196fd0;
            case 0x196FD4u: goto label_196fd4;
            case 0x196FD8u: goto label_196fd8;
            case 0x196FDCu: goto label_196fdc;
            case 0x196FE0u: goto label_196fe0;
            case 0x196FE4u: goto label_196fe4;
            case 0x196FE8u: goto label_196fe8;
            case 0x196FECu: goto label_196fec;
            case 0x196FF0u: goto label_196ff0;
            case 0x196FF4u: goto label_196ff4;
            case 0x196FF8u: goto label_196ff8;
            case 0x196FFCu: goto label_196ffc;
            case 0x197000u: goto label_197000;
            case 0x197004u: goto label_197004;
            case 0x197008u: goto label_197008;
            case 0x19700Cu: goto label_19700c;
            case 0x197010u: goto label_197010;
            case 0x197014u: goto label_197014;
            case 0x197018u: goto label_197018;
            case 0x19701Cu: goto label_19701c;
            case 0x197020u: goto label_197020;
            case 0x197024u: goto label_197024;
            case 0x197028u: goto label_197028;
            case 0x19702Cu: goto label_19702c;
            case 0x197030u: goto label_197030;
            case 0x197034u: goto label_197034;
            case 0x197038u: goto label_197038;
            case 0x19703Cu: goto label_19703c;
            case 0x197040u: goto label_197040;
            case 0x197044u: goto label_197044;
            case 0x197048u: goto label_197048;
            case 0x19704Cu: goto label_19704c;
            case 0x197050u: goto label_197050;
            case 0x197054u: goto label_197054;
            case 0x197058u: goto label_197058;
            case 0x19705Cu: goto label_19705c;
            case 0x197060u: goto label_197060;
            case 0x197064u: goto label_197064;
            case 0x197068u: goto label_197068;
            case 0x19706Cu: goto label_19706c;
            case 0x197070u: goto label_197070;
            case 0x197074u: goto label_197074;
            case 0x197078u: goto label_197078;
            case 0x19707Cu: goto label_19707c;
            case 0x197080u: goto label_197080;
            case 0x197084u: goto label_197084;
            case 0x197088u: goto label_197088;
            case 0x19708Cu: goto label_19708c;
            case 0x197090u: goto label_197090;
            case 0x197094u: goto label_197094;
            case 0x197098u: goto label_197098;
            case 0x19709Cu: goto label_19709c;
            case 0x1970A0u: goto label_1970a0;
            case 0x1970A4u: goto label_1970a4;
            case 0x1970A8u: goto label_1970a8;
            case 0x1970ACu: goto label_1970ac;
            case 0x1970B0u: goto label_1970b0;
            case 0x1970B4u: goto label_1970b4;
            case 0x1970B8u: goto label_1970b8;
            case 0x1970BCu: goto label_1970bc;
            case 0x1970C0u: goto label_1970c0;
            case 0x1970C4u: goto label_1970c4;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970D0u: goto label_1970d0;
            case 0x1970D4u: goto label_1970d4;
            case 0x1970D8u: goto label_1970d8;
            case 0x1970DCu: goto label_1970dc;
            case 0x1970E0u: goto label_1970e0;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970E8u: goto label_1970e8;
            case 0x1970ECu: goto label_1970ec;
            case 0x1970F0u: goto label_1970f0;
            case 0x1970F4u: goto label_1970f4;
            case 0x1970F8u: goto label_1970f8;
            case 0x1970FCu: goto label_1970fc;
            case 0x197100u: goto label_197100;
            case 0x197104u: goto label_197104;
            case 0x197108u: goto label_197108;
            case 0x19710Cu: goto label_19710c;
            case 0x197110u: goto label_197110;
            case 0x197114u: goto label_197114;
            case 0x197118u: goto label_197118;
            case 0x19711Cu: goto label_19711c;
            case 0x197120u: goto label_197120;
            case 0x197124u: goto label_197124;
            case 0x197128u: goto label_197128;
            case 0x19712Cu: goto label_19712c;
            case 0x197130u: goto label_197130;
            case 0x197134u: goto label_197134;
            case 0x197138u: goto label_197138;
            case 0x19713Cu: goto label_19713c;
            case 0x197140u: goto label_197140;
            case 0x197144u: goto label_197144;
            case 0x197148u: goto label_197148;
            case 0x19714Cu: goto label_19714c;
            case 0x197150u: goto label_197150;
            case 0x197154u: goto label_197154;
            case 0x197158u: goto label_197158;
            case 0x19715Cu: goto label_19715c;
            case 0x197160u: goto label_197160;
            case 0x197164u: goto label_197164;
            case 0x197168u: goto label_197168;
            case 0x19716Cu: goto label_19716c;
            case 0x197170u: goto label_197170;
            case 0x197174u: goto label_197174;
            case 0x197178u: goto label_197178;
            case 0x19717Cu: goto label_19717c;
            case 0x197180u: goto label_197180;
            case 0x197184u: goto label_197184;
            case 0x197188u: goto label_197188;
            case 0x19718Cu: goto label_19718c;
            case 0x197190u: goto label_197190;
            case 0x197194u: goto label_197194;
            case 0x197198u: goto label_197198;
            case 0x19719Cu: goto label_19719c;
            case 0x1971A0u: goto label_1971a0;
            case 0x1971A4u: goto label_1971a4;
            case 0x1971A8u: goto label_1971a8;
            case 0x1971ACu: goto label_1971ac;
            case 0x1971B0u: goto label_1971b0;
            case 0x1971B4u: goto label_1971b4;
            case 0x1971B8u: goto label_1971b8;
            case 0x1971BCu: goto label_1971bc;
            case 0x1971C0u: goto label_1971c0;
            case 0x1971C4u: goto label_1971c4;
            case 0x1971C8u: goto label_1971c8;
            case 0x1971CCu: goto label_1971cc;
            case 0x1971D0u: goto label_1971d0;
            case 0x1971D4u: goto label_1971d4;
            case 0x1971D8u: goto label_1971d8;
            case 0x1971DCu: goto label_1971dc;
            case 0x1971E0u: goto label_1971e0;
            case 0x1971E4u: goto label_1971e4;
            case 0x1971E8u: goto label_1971e8;
            case 0x1971ECu: goto label_1971ec;
            case 0x1971F0u: goto label_1971f0;
            case 0x1971F4u: goto label_1971f4;
            case 0x1971F8u: goto label_1971f8;
            case 0x1971FCu: goto label_1971fc;
            case 0x197200u: goto label_197200;
            case 0x197204u: goto label_197204;
            case 0x197208u: goto label_197208;
            case 0x19720Cu: goto label_19720c;
            case 0x197210u: goto label_197210;
            case 0x197214u: goto label_197214;
            case 0x197218u: goto label_197218;
            case 0x19721Cu: goto label_19721c;
            case 0x197220u: goto label_197220;
            case 0x197224u: goto label_197224;
            case 0x197228u: goto label_197228;
            case 0x19722Cu: goto label_19722c;
            case 0x197230u: goto label_197230;
            case 0x197234u: goto label_197234;
            case 0x197238u: goto label_197238;
            case 0x19723Cu: goto label_19723c;
            case 0x197240u: goto label_197240;
            case 0x197244u: goto label_197244;
            case 0x197248u: goto label_197248;
            case 0x19724Cu: goto label_19724c;
            case 0x197250u: goto label_197250;
            case 0x197254u: goto label_197254;
            case 0x197258u: goto label_197258;
            case 0x19725Cu: goto label_19725c;
            case 0x197260u: goto label_197260;
            case 0x197264u: goto label_197264;
            case 0x197268u: goto label_197268;
            case 0x19726Cu: goto label_19726c;
            case 0x197270u: goto label_197270;
            case 0x197274u: goto label_197274;
            case 0x197278u: goto label_197278;
            case 0x19727Cu: goto label_19727c;
            case 0x197280u: goto label_197280;
            case 0x197284u: goto label_197284;
            case 0x197288u: goto label_197288;
            case 0x19728Cu: goto label_19728c;
            case 0x197290u: goto label_197290;
            case 0x197294u: goto label_197294;
            case 0x197298u: goto label_197298;
            case 0x19729Cu: goto label_19729c;
            case 0x1972A0u: goto label_1972a0;
            case 0x1972A4u: goto label_1972a4;
            case 0x1972A8u: goto label_1972a8;
            case 0x1972ACu: goto label_1972ac;
            case 0x1972B0u: goto label_1972b0;
            case 0x1972B4u: goto label_1972b4;
            case 0x1972B8u: goto label_1972b8;
            case 0x1972BCu: goto label_1972bc;
            case 0x1972C0u: goto label_1972c0;
            case 0x1972C4u: goto label_1972c4;
            case 0x1972C8u: goto label_1972c8;
            case 0x1972CCu: goto label_1972cc;
            case 0x1972D0u: goto label_1972d0;
            case 0x1972D4u: goto label_1972d4;
            case 0x1972D8u: goto label_1972d8;
            case 0x1972DCu: goto label_1972dc;
            case 0x1972E0u: goto label_1972e0;
            case 0x1972E4u: goto label_1972e4;
            case 0x1972E8u: goto label_1972e8;
            case 0x1972ECu: goto label_1972ec;
            case 0x1972F0u: goto label_1972f0;
            case 0x1972F4u: goto label_1972f4;
            case 0x1972F8u: goto label_1972f8;
            case 0x1972FCu: goto label_1972fc;
            case 0x197300u: goto label_197300;
            case 0x197304u: goto label_197304;
            case 0x197308u: goto label_197308;
            case 0x19730Cu: goto label_19730c;
            case 0x197310u: goto label_197310;
            case 0x197314u: goto label_197314;
            case 0x197318u: goto label_197318;
            case 0x19731Cu: goto label_19731c;
            case 0x197320u: goto label_197320;
            case 0x197324u: goto label_197324;
            case 0x197328u: goto label_197328;
            case 0x19732Cu: goto label_19732c;
            case 0x197330u: goto label_197330;
            case 0x197334u: goto label_197334;
            case 0x197338u: goto label_197338;
            case 0x19733Cu: goto label_19733c;
            case 0x197340u: goto label_197340;
            case 0x197344u: goto label_197344;
            case 0x197348u: goto label_197348;
            case 0x19734Cu: goto label_19734c;
            case 0x197350u: goto label_197350;
            case 0x197354u: goto label_197354;
            case 0x197358u: goto label_197358;
            case 0x19735Cu: goto label_19735c;
            case 0x197360u: goto label_197360;
            case 0x197364u: goto label_197364;
            case 0x197368u: goto label_197368;
            case 0x19736Cu: goto label_19736c;
            case 0x197370u: goto label_197370;
            case 0x197374u: goto label_197374;
            case 0x197378u: goto label_197378;
            case 0x19737Cu: goto label_19737c;
            case 0x197380u: goto label_197380;
            case 0x197384u: goto label_197384;
            case 0x197388u: goto label_197388;
            case 0x19738Cu: goto label_19738c;
            case 0x197390u: goto label_197390;
            case 0x197394u: goto label_197394;
            case 0x197398u: goto label_197398;
            case 0x19739Cu: goto label_19739c;
            case 0x1973A0u: goto label_1973a0;
            case 0x1973A4u: goto label_1973a4;
            case 0x1973A8u: goto label_1973a8;
            case 0x1973ACu: goto label_1973ac;
            case 0x1973B0u: goto label_1973b0;
            case 0x1973B4u: goto label_1973b4;
            case 0x1973B8u: goto label_1973b8;
            case 0x1973BCu: goto label_1973bc;
            case 0x1973C0u: goto label_1973c0;
            case 0x1973C4u: goto label_1973c4;
            case 0x1973C8u: goto label_1973c8;
            case 0x1973CCu: goto label_1973cc;
            case 0x1973D0u: goto label_1973d0;
            case 0x1973D4u: goto label_1973d4;
            case 0x1973D8u: goto label_1973d8;
            case 0x1973DCu: goto label_1973dc;
            case 0x1973E0u: goto label_1973e0;
            case 0x1973E4u: goto label_1973e4;
            case 0x1973E8u: goto label_1973e8;
            case 0x1973ECu: goto label_1973ec;
            case 0x1973F0u: goto label_1973f0;
            case 0x1973F4u: goto label_1973f4;
            case 0x1973F8u: goto label_1973f8;
            case 0x1973FCu: goto label_1973fc;
            case 0x197400u: goto label_197400;
            case 0x197404u: goto label_197404;
            case 0x197408u: goto label_197408;
            case 0x19740Cu: goto label_19740c;
            case 0x197410u: goto label_197410;
            case 0x197414u: goto label_197414;
            case 0x197418u: goto label_197418;
            case 0x19741Cu: goto label_19741c;
            case 0x197420u: goto label_197420;
            case 0x197424u: goto label_197424;
            case 0x197428u: goto label_197428;
            case 0x19742Cu: goto label_19742c;
            case 0x197430u: goto label_197430;
            case 0x197434u: goto label_197434;
            case 0x197438u: goto label_197438;
            case 0x19743Cu: goto label_19743c;
            case 0x197440u: goto label_197440;
            case 0x197444u: goto label_197444;
            case 0x197448u: goto label_197448;
            case 0x19744Cu: goto label_19744c;
            case 0x197450u: goto label_197450;
            case 0x197454u: goto label_197454;
            case 0x197458u: goto label_197458;
            case 0x19745Cu: goto label_19745c;
            case 0x197460u: goto label_197460;
            case 0x197464u: goto label_197464;
            case 0x197468u: goto label_197468;
            case 0x19746Cu: goto label_19746c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196E70u;
label_196e70:
    // 0x196e70: 0x10000009
label_196e74:
    if (ctx->pc == 0x196E74u) {
        ctx->pc = 0x196E74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x196E78u;
        goto label_196e78;
    }
    ctx->pc = 0x196E70u;
    {
        const bool branch_taken_0x196e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196E74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        if (branch_taken_0x196e70) {
            ctx->pc = 0x196E98u;
            goto label_196e98;
        }
    }
    ctx->pc = 0x196E78u;
label_196e78:
    // 0x196e78: 0x24027000
    ctx->pc = 0x196e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28672));
label_196e7c:
    // 0x196e7c: 0x10000006
label_196e80:
    if (ctx->pc == 0x196E80u) {
        ctx->pc = 0x196E80u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196E84u;
        goto label_196e84;
    }
    ctx->pc = 0x196E7Cu;
    {
        const bool branch_taken_0x196e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196E80u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196e7c) {
            ctx->pc = 0x196E98u;
            goto label_196e98;
        }
    }
    ctx->pc = 0x196E84u;
label_196e84:
    // 0x196e84: 0x24021000
    ctx->pc = 0x196e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
label_196e88:
    // 0x196e88: 0x10000003
label_196e8c:
    if (ctx->pc == 0x196E8Cu) {
        ctx->pc = 0x196E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x196E90u;
        goto label_196e90;
    }
    ctx->pc = 0x196E88u;
    {
        const bool branch_taken_0x196e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x196e88) {
            ctx->pc = 0x196E98u;
            goto label_196e98;
        }
    }
    ctx->pc = 0x196E90u;
label_196e90:
    // 0x196e90: 0x24023000
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12288));
label_196e94:
    // 0x196e94: 0xafa20038
    ctx->pc = 0x196e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_196e98:
    // 0x196e98: 0x3c01002a
    ctx->pc = 0x196e98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196e9c:
    // 0x196e9c: 0x8fa40038
    ctx->pc = 0x196e9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_196ea0:
    // 0x196ea0: 0x8c23fe68
    ctx->pc = 0x196ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196ea4:
    // 0x196ea4: 0x30627000
    ctx->pc = 0x196ea4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 28672));
label_196ea8:
    // 0x196ea8: 0x1044000d
label_196eac:
    if (ctx->pc == 0x196EACu) {
        ctx->pc = 0x196EACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294938623));
        ctx->pc = 0x196EB0u;
        goto label_196eb0;
    }
    ctx->pc = 0x196EA8u;
    {
        const bool branch_taken_0x196ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x196EACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294938623));
        if (branch_taken_0x196ea8) {
            ctx->pc = 0x196EE0u;
            goto label_196ee0;
        }
    }
    ctx->pc = 0x196EB0u;
label_196eb0:
    // 0x196eb0: 0x3c01002a
    ctx->pc = 0x196eb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196eb4:
    // 0x196eb4: 0x621024
    ctx->pc = 0x196eb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196eb8:
    // 0x196eb8: 0xac22fe68
    ctx->pc = 0x196eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196ebc:
    // 0x196ebc: 0x3c01002a
    ctx->pc = 0x196ebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ec0:
    // 0x196ec0: 0x8c22fe68
    ctx->pc = 0x196ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196ec4:
    // 0x196ec4: 0x441025
    ctx->pc = 0x196ec4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_196ec8:
    // 0x196ec8: 0x3c01002a
    ctx->pc = 0x196ec8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ecc:
    // 0x196ecc: 0xac22fe68
    ctx->pc = 0x196eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
label_196ed0:
    // 0x196ed0: 0x3c01002a
    ctx->pc = 0x196ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_196ed4:
    // 0x196ed4: 0x8c24fe68
    ctx->pc = 0x196ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_196ed8:
    // 0x196ed8: 0xc065e40
label_196edc:
    if (ctx->pc == 0x196EDCu) {
        ctx->pc = 0x196EDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196EE0u;
        goto label_196ee0;
    }
    ctx->pc = 0x196ED8u;
    SET_GPR_U32(ctx, 31, 0x196EE0u);
    ctx->pc = 0x196EDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197900_0x197900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EE0u; }
    }
    if (ctx->pc != 0x196EE0u) { return; }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0x24020001
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196ee4:
    // 0x196ee4: 0xdfbf0020
    ctx->pc = 0x196ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196ee8:
    // 0x196ee8: 0x7bb10010
    ctx->pc = 0x196ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196eec:
    // 0x196eec: 0x7bb00000
    ctx->pc = 0x196eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196ef0:
    // 0x196ef0: 0x3e00008
label_196ef4:
    if (ctx->pc == 0x196EF4u) {
        ctx->pc = 0x196EF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x196EF8u;
        goto label_196ef8;
    }
    ctx->pc = 0x196EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196EF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196010u: goto label_196010;
            case 0x196014u: goto label_196014;
            case 0x196018u: goto label_196018;
            case 0x19601Cu: goto label_19601c;
            case 0x196020u: goto label_196020;
            case 0x196024u: goto label_196024;
            case 0x196028u: goto label_196028;
            case 0x19602Cu: goto label_19602c;
            case 0x196030u: goto label_196030;
            case 0x196034u: goto label_196034;
            case 0x196038u: goto label_196038;
            case 0x19603Cu: goto label_19603c;
            case 0x196040u: goto label_196040;
            case 0x196044u: goto label_196044;
            case 0x196048u: goto label_196048;
            case 0x19604Cu: goto label_19604c;
            case 0x196050u: goto label_196050;
            case 0x196054u: goto label_196054;
            case 0x196058u: goto label_196058;
            case 0x19605Cu: goto label_19605c;
            case 0x196060u: goto label_196060;
            case 0x196064u: goto label_196064;
            case 0x196068u: goto label_196068;
            case 0x19606Cu: goto label_19606c;
            case 0x196070u: goto label_196070;
            case 0x196074u: goto label_196074;
            case 0x196078u: goto label_196078;
            case 0x19607Cu: goto label_19607c;
            case 0x196080u: goto label_196080;
            case 0x196084u: goto label_196084;
            case 0x196088u: goto label_196088;
            case 0x19608Cu: goto label_19608c;
            case 0x196090u: goto label_196090;
            case 0x196094u: goto label_196094;
            case 0x196098u: goto label_196098;
            case 0x19609Cu: goto label_19609c;
            case 0x1960A0u: goto label_1960a0;
            case 0x1960A4u: goto label_1960a4;
            case 0x1960A8u: goto label_1960a8;
            case 0x1960ACu: goto label_1960ac;
            case 0x1960B0u: goto label_1960b0;
            case 0x1960B4u: goto label_1960b4;
            case 0x1960B8u: goto label_1960b8;
            case 0x1960BCu: goto label_1960bc;
            case 0x1960C0u: goto label_1960c0;
            case 0x1960C4u: goto label_1960c4;
            case 0x1960C8u: goto label_1960c8;
            case 0x1960CCu: goto label_1960cc;
            case 0x1960D0u: goto label_1960d0;
            case 0x1960D4u: goto label_1960d4;
            case 0x1960D8u: goto label_1960d8;
            case 0x1960DCu: goto label_1960dc;
            case 0x1960E0u: goto label_1960e0;
            case 0x1960E4u: goto label_1960e4;
            case 0x1960E8u: goto label_1960e8;
            case 0x1960ECu: goto label_1960ec;
            case 0x1960F0u: goto label_1960f0;
            case 0x1960F4u: goto label_1960f4;
            case 0x1960F8u: goto label_1960f8;
            case 0x1960FCu: goto label_1960fc;
            case 0x196100u: goto label_196100;
            case 0x196104u: goto label_196104;
            case 0x196108u: goto label_196108;
            case 0x19610Cu: goto label_19610c;
            case 0x196110u: goto label_196110;
            case 0x196114u: goto label_196114;
            case 0x196118u: goto label_196118;
            case 0x19611Cu: goto label_19611c;
            case 0x196120u: goto label_196120;
            case 0x196124u: goto label_196124;
            case 0x196128u: goto label_196128;
            case 0x19612Cu: goto label_19612c;
            case 0x196130u: goto label_196130;
            case 0x196134u: goto label_196134;
            case 0x196138u: goto label_196138;
            case 0x19613Cu: goto label_19613c;
            case 0x196140u: goto label_196140;
            case 0x196144u: goto label_196144;
            case 0x196148u: goto label_196148;
            case 0x19614Cu: goto label_19614c;
            case 0x196150u: goto label_196150;
            case 0x196154u: goto label_196154;
            case 0x196158u: goto label_196158;
            case 0x19615Cu: goto label_19615c;
            case 0x196160u: goto label_196160;
            case 0x196164u: goto label_196164;
            case 0x196168u: goto label_196168;
            case 0x19616Cu: goto label_19616c;
            case 0x196170u: goto label_196170;
            case 0x196174u: goto label_196174;
            case 0x196178u: goto label_196178;
            case 0x19617Cu: goto label_19617c;
            case 0x196180u: goto label_196180;
            case 0x196184u: goto label_196184;
            case 0x196188u: goto label_196188;
            case 0x19618Cu: goto label_19618c;
            case 0x196190u: goto label_196190;
            case 0x196194u: goto label_196194;
            case 0x196198u: goto label_196198;
            case 0x19619Cu: goto label_19619c;
            case 0x1961A0u: goto label_1961a0;
            case 0x1961A4u: goto label_1961a4;
            case 0x1961A8u: goto label_1961a8;
            case 0x1961ACu: goto label_1961ac;
            case 0x1961B0u: goto label_1961b0;
            case 0x1961B4u: goto label_1961b4;
            case 0x1961B8u: goto label_1961b8;
            case 0x1961BCu: goto label_1961bc;
            case 0x1961C0u: goto label_1961c0;
            case 0x1961C4u: goto label_1961c4;
            case 0x1961C8u: goto label_1961c8;
            case 0x1961CCu: goto label_1961cc;
            case 0x1961D0u: goto label_1961d0;
            case 0x1961D4u: goto label_1961d4;
            case 0x1961D8u: goto label_1961d8;
            case 0x1961DCu: goto label_1961dc;
            case 0x1961E0u: goto label_1961e0;
            case 0x1961E4u: goto label_1961e4;
            case 0x1961E8u: goto label_1961e8;
            case 0x1961ECu: goto label_1961ec;
            case 0x1961F0u: goto label_1961f0;
            case 0x1961F4u: goto label_1961f4;
            case 0x1961F8u: goto label_1961f8;
            case 0x1961FCu: goto label_1961fc;
            case 0x196200u: goto label_196200;
            case 0x196204u: goto label_196204;
            case 0x196208u: goto label_196208;
            case 0x19620Cu: goto label_19620c;
            case 0x196210u: goto label_196210;
            case 0x196214u: goto label_196214;
            case 0x196218u: goto label_196218;
            case 0x19621Cu: goto label_19621c;
            case 0x196220u: goto label_196220;
            case 0x196224u: goto label_196224;
            case 0x196228u: goto label_196228;
            case 0x19622Cu: goto label_19622c;
            case 0x196230u: goto label_196230;
            case 0x196234u: goto label_196234;
            case 0x196238u: goto label_196238;
            case 0x19623Cu: goto label_19623c;
            case 0x196240u: goto label_196240;
            case 0x196244u: goto label_196244;
            case 0x196248u: goto label_196248;
            case 0x19624Cu: goto label_19624c;
            case 0x196250u: goto label_196250;
            case 0x196254u: goto label_196254;
            case 0x196258u: goto label_196258;
            case 0x19625Cu: goto label_19625c;
            case 0x196260u: goto label_196260;
            case 0x196264u: goto label_196264;
            case 0x196268u: goto label_196268;
            case 0x19626Cu: goto label_19626c;
            case 0x196270u: goto label_196270;
            case 0x196274u: goto label_196274;
            case 0x196278u: goto label_196278;
            case 0x19627Cu: goto label_19627c;
            case 0x196280u: goto label_196280;
            case 0x196284u: goto label_196284;
            case 0x196288u: goto label_196288;
            case 0x19628Cu: goto label_19628c;
            case 0x196290u: goto label_196290;
            case 0x196294u: goto label_196294;
            case 0x196298u: goto label_196298;
            case 0x19629Cu: goto label_19629c;
            case 0x1962A0u: goto label_1962a0;
            case 0x1962A4u: goto label_1962a4;
            case 0x1962A8u: goto label_1962a8;
            case 0x1962ACu: goto label_1962ac;
            case 0x1962B0u: goto label_1962b0;
            case 0x1962B4u: goto label_1962b4;
            case 0x1962B8u: goto label_1962b8;
            case 0x1962BCu: goto label_1962bc;
            case 0x1962C0u: goto label_1962c0;
            case 0x1962C4u: goto label_1962c4;
            case 0x1962C8u: goto label_1962c8;
            case 0x1962CCu: goto label_1962cc;
            case 0x1962D0u: goto label_1962d0;
            case 0x1962D4u: goto label_1962d4;
            case 0x1962D8u: goto label_1962d8;
            case 0x1962DCu: goto label_1962dc;
            case 0x1962E0u: goto label_1962e0;
            case 0x1962E4u: goto label_1962e4;
            case 0x1962E8u: goto label_1962e8;
            case 0x1962ECu: goto label_1962ec;
            case 0x1962F0u: goto label_1962f0;
            case 0x1962F4u: goto label_1962f4;
            case 0x1962F8u: goto label_1962f8;
            case 0x1962FCu: goto label_1962fc;
            case 0x196300u: goto label_196300;
            case 0x196304u: goto label_196304;
            case 0x196308u: goto label_196308;
            case 0x19630Cu: goto label_19630c;
            case 0x196310u: goto label_196310;
            case 0x196314u: goto label_196314;
            case 0x196318u: goto label_196318;
            case 0x19631Cu: goto label_19631c;
            case 0x196320u: goto label_196320;
            case 0x196324u: goto label_196324;
            case 0x196328u: goto label_196328;
            case 0x19632Cu: goto label_19632c;
            case 0x196330u: goto label_196330;
            case 0x196334u: goto label_196334;
            case 0x196338u: goto label_196338;
            case 0x19633Cu: goto label_19633c;
            case 0x196340u: goto label_196340;
            case 0x196344u: goto label_196344;
            case 0x196348u: goto label_196348;
            case 0x19634Cu: goto label_19634c;
            case 0x196350u: goto label_196350;
            case 0x196354u: goto label_196354;
            case 0x196358u: goto label_196358;
            case 0x19635Cu: goto label_19635c;
            case 0x196360u: goto label_196360;
            case 0x196364u: goto label_196364;
            case 0x196368u: goto label_196368;
            case 0x19636Cu: goto label_19636c;
            case 0x196370u: goto label_196370;
            case 0x196374u: goto label_196374;
            case 0x196378u: goto label_196378;
            case 0x19637Cu: goto label_19637c;
            case 0x196380u: goto label_196380;
            case 0x196384u: goto label_196384;
            case 0x196388u: goto label_196388;
            case 0x19638Cu: goto label_19638c;
            case 0x196390u: goto label_196390;
            case 0x196394u: goto label_196394;
            case 0x196398u: goto label_196398;
            case 0x19639Cu: goto label_19639c;
            case 0x1963A0u: goto label_1963a0;
            case 0x1963A4u: goto label_1963a4;
            case 0x1963A8u: goto label_1963a8;
            case 0x1963ACu: goto label_1963ac;
            case 0x1963B0u: goto label_1963b0;
            case 0x1963B4u: goto label_1963b4;
            case 0x1963B8u: goto label_1963b8;
            case 0x1963BCu: goto label_1963bc;
            case 0x1963C0u: goto label_1963c0;
            case 0x1963C4u: goto label_1963c4;
            case 0x1963C8u: goto label_1963c8;
            case 0x1963CCu: goto label_1963cc;
            case 0x1963D0u: goto label_1963d0;
            case 0x1963D4u: goto label_1963d4;
            case 0x1963D8u: goto label_1963d8;
            case 0x1963DCu: goto label_1963dc;
            case 0x1963E0u: goto label_1963e0;
            case 0x1963E4u: goto label_1963e4;
            case 0x1963E8u: goto label_1963e8;
            case 0x1963ECu: goto label_1963ec;
            case 0x1963F0u: goto label_1963f0;
            case 0x1963F4u: goto label_1963f4;
            case 0x1963F8u: goto label_1963f8;
            case 0x1963FCu: goto label_1963fc;
            case 0x196400u: goto label_196400;
            case 0x196404u: goto label_196404;
            case 0x196408u: goto label_196408;
            case 0x19640Cu: goto label_19640c;
            case 0x196410u: goto label_196410;
            case 0x196414u: goto label_196414;
            case 0x196418u: goto label_196418;
            case 0x19641Cu: goto label_19641c;
            case 0x196420u: goto label_196420;
            case 0x196424u: goto label_196424;
            case 0x196428u: goto label_196428;
            case 0x19642Cu: goto label_19642c;
            case 0x196430u: goto label_196430;
            case 0x196434u: goto label_196434;
            case 0x196438u: goto label_196438;
            case 0x19643Cu: goto label_19643c;
            case 0x196440u: goto label_196440;
            case 0x196444u: goto label_196444;
            case 0x196448u: goto label_196448;
            case 0x19644Cu: goto label_19644c;
            case 0x196450u: goto label_196450;
            case 0x196454u: goto label_196454;
            case 0x196458u: goto label_196458;
            case 0x19645Cu: goto label_19645c;
            case 0x196460u: goto label_196460;
            case 0x196464u: goto label_196464;
            case 0x196468u: goto label_196468;
            case 0x19646Cu: goto label_19646c;
            case 0x196470u: goto label_196470;
            case 0x196474u: goto label_196474;
            case 0x196478u: goto label_196478;
            case 0x19647Cu: goto label_19647c;
            case 0x196480u: goto label_196480;
            case 0x196484u: goto label_196484;
            case 0x196488u: goto label_196488;
            case 0x19648Cu: goto label_19648c;
            case 0x196490u: goto label_196490;
            case 0x196494u: goto label_196494;
            case 0x196498u: goto label_196498;
            case 0x19649Cu: goto label_19649c;
            case 0x1964A0u: goto label_1964a0;
            case 0x1964A4u: goto label_1964a4;
            case 0x1964A8u: goto label_1964a8;
            case 0x1964ACu: goto label_1964ac;
            case 0x1964B0u: goto label_1964b0;
            case 0x1964B4u: goto label_1964b4;
            case 0x1964B8u: goto label_1964b8;
            case 0x1964BCu: goto label_1964bc;
            case 0x1964C0u: goto label_1964c0;
            case 0x1964C4u: goto label_1964c4;
            case 0x1964C8u: goto label_1964c8;
            case 0x1964CCu: goto label_1964cc;
            case 0x1964D0u: goto label_1964d0;
            case 0x1964D4u: goto label_1964d4;
            case 0x1964D8u: goto label_1964d8;
            case 0x1964DCu: goto label_1964dc;
            case 0x1964E0u: goto label_1964e0;
            case 0x1964E4u: goto label_1964e4;
            case 0x1964E8u: goto label_1964e8;
            case 0x1964ECu: goto label_1964ec;
            case 0x1964F0u: goto label_1964f0;
            case 0x1964F4u: goto label_1964f4;
            case 0x1964F8u: goto label_1964f8;
            case 0x1964FCu: goto label_1964fc;
            case 0x196500u: goto label_196500;
            case 0x196504u: goto label_196504;
            case 0x196508u: goto label_196508;
            case 0x19650Cu: goto label_19650c;
            case 0x196510u: goto label_196510;
            case 0x196514u: goto label_196514;
            case 0x196518u: goto label_196518;
            case 0x19651Cu: goto label_19651c;
            case 0x196520u: goto label_196520;
            case 0x196524u: goto label_196524;
            case 0x196528u: goto label_196528;
            case 0x19652Cu: goto label_19652c;
            case 0x196530u: goto label_196530;
            case 0x196534u: goto label_196534;
            case 0x196538u: goto label_196538;
            case 0x19653Cu: goto label_19653c;
            case 0x196540u: goto label_196540;
            case 0x196544u: goto label_196544;
            case 0x196548u: goto label_196548;
            case 0x19654Cu: goto label_19654c;
            case 0x196550u: goto label_196550;
            case 0x196554u: goto label_196554;
            case 0x196558u: goto label_196558;
            case 0x19655Cu: goto label_19655c;
            case 0x196560u: goto label_196560;
            case 0x196564u: goto label_196564;
            case 0x196568u: goto label_196568;
            case 0x19656Cu: goto label_19656c;
            case 0x196570u: goto label_196570;
            case 0x196574u: goto label_196574;
            case 0x196578u: goto label_196578;
            case 0x19657Cu: goto label_19657c;
            case 0x196580u: goto label_196580;
            case 0x196584u: goto label_196584;
            case 0x196588u: goto label_196588;
            case 0x19658Cu: goto label_19658c;
            case 0x196590u: goto label_196590;
            case 0x196594u: goto label_196594;
            case 0x196598u: goto label_196598;
            case 0x19659Cu: goto label_19659c;
            case 0x1965A0u: goto label_1965a0;
            case 0x1965A4u: goto label_1965a4;
            case 0x1965A8u: goto label_1965a8;
            case 0x1965ACu: goto label_1965ac;
            case 0x1965B0u: goto label_1965b0;
            case 0x1965B4u: goto label_1965b4;
            case 0x1965B8u: goto label_1965b8;
            case 0x1965BCu: goto label_1965bc;
            case 0x1965C0u: goto label_1965c0;
            case 0x1965C4u: goto label_1965c4;
            case 0x1965C8u: goto label_1965c8;
            case 0x1965CCu: goto label_1965cc;
            case 0x1965D0u: goto label_1965d0;
            case 0x1965D4u: goto label_1965d4;
            case 0x1965D8u: goto label_1965d8;
            case 0x1965DCu: goto label_1965dc;
            case 0x1965E0u: goto label_1965e0;
            case 0x1965E4u: goto label_1965e4;
            case 0x1965E8u: goto label_1965e8;
            case 0x1965ECu: goto label_1965ec;
            case 0x1965F0u: goto label_1965f0;
            case 0x1965F4u: goto label_1965f4;
            case 0x1965F8u: goto label_1965f8;
            case 0x1965FCu: goto label_1965fc;
            case 0x196600u: goto label_196600;
            case 0x196604u: goto label_196604;
            case 0x196608u: goto label_196608;
            case 0x19660Cu: goto label_19660c;
            case 0x196610u: goto label_196610;
            case 0x196614u: goto label_196614;
            case 0x196618u: goto label_196618;
            case 0x19661Cu: goto label_19661c;
            case 0x196620u: goto label_196620;
            case 0x196624u: goto label_196624;
            case 0x196628u: goto label_196628;
            case 0x19662Cu: goto label_19662c;
            case 0x196630u: goto label_196630;
            case 0x196634u: goto label_196634;
            case 0x196638u: goto label_196638;
            case 0x19663Cu: goto label_19663c;
            case 0x196640u: goto label_196640;
            case 0x196644u: goto label_196644;
            case 0x196648u: goto label_196648;
            case 0x19664Cu: goto label_19664c;
            case 0x196650u: goto label_196650;
            case 0x196654u: goto label_196654;
            case 0x196658u: goto label_196658;
            case 0x19665Cu: goto label_19665c;
            case 0x196660u: goto label_196660;
            case 0x196664u: goto label_196664;
            case 0x196668u: goto label_196668;
            case 0x19666Cu: goto label_19666c;
            case 0x196670u: goto label_196670;
            case 0x196674u: goto label_196674;
            case 0x196678u: goto label_196678;
            case 0x19667Cu: goto label_19667c;
            case 0x196680u: goto label_196680;
            case 0x196684u: goto label_196684;
            case 0x196688u: goto label_196688;
            case 0x19668Cu: goto label_19668c;
            case 0x196690u: goto label_196690;
            case 0x196694u: goto label_196694;
            case 0x196698u: goto label_196698;
            case 0x19669Cu: goto label_19669c;
            case 0x1966A0u: goto label_1966a0;
            case 0x1966A4u: goto label_1966a4;
            case 0x1966A8u: goto label_1966a8;
            case 0x1966ACu: goto label_1966ac;
            case 0x1966B0u: goto label_1966b0;
            case 0x1966B4u: goto label_1966b4;
            case 0x1966B8u: goto label_1966b8;
            case 0x1966BCu: goto label_1966bc;
            case 0x1966C0u: goto label_1966c0;
            case 0x1966C4u: goto label_1966c4;
            case 0x1966C8u: goto label_1966c8;
            case 0x1966CCu: goto label_1966cc;
            case 0x1966D0u: goto label_1966d0;
            case 0x1966D4u: goto label_1966d4;
            case 0x1966D8u: goto label_1966d8;
            case 0x1966DCu: goto label_1966dc;
            case 0x1966E0u: goto label_1966e0;
            case 0x1966E4u: goto label_1966e4;
            case 0x1966E8u: goto label_1966e8;
            case 0x1966ECu: goto label_1966ec;
            case 0x1966F0u: goto label_1966f0;
            case 0x1966F4u: goto label_1966f4;
            case 0x1966F8u: goto label_1966f8;
            case 0x1966FCu: goto label_1966fc;
            case 0x196700u: goto label_196700;
            case 0x196704u: goto label_196704;
            case 0x196708u: goto label_196708;
            case 0x19670Cu: goto label_19670c;
            case 0x196710u: goto label_196710;
            case 0x196714u: goto label_196714;
            case 0x196718u: goto label_196718;
            case 0x19671Cu: goto label_19671c;
            case 0x196720u: goto label_196720;
            case 0x196724u: goto label_196724;
            case 0x196728u: goto label_196728;
            case 0x19672Cu: goto label_19672c;
            case 0x196730u: goto label_196730;
            case 0x196734u: goto label_196734;
            case 0x196738u: goto label_196738;
            case 0x19673Cu: goto label_19673c;
            case 0x196740u: goto label_196740;
            case 0x196744u: goto label_196744;
            case 0x196748u: goto label_196748;
            case 0x19674Cu: goto label_19674c;
            case 0x196750u: goto label_196750;
            case 0x196754u: goto label_196754;
            case 0x196758u: goto label_196758;
            case 0x19675Cu: goto label_19675c;
            case 0x196760u: goto label_196760;
            case 0x196764u: goto label_196764;
            case 0x196768u: goto label_196768;
            case 0x19676Cu: goto label_19676c;
            case 0x196770u: goto label_196770;
            case 0x196774u: goto label_196774;
            case 0x196778u: goto label_196778;
            case 0x19677Cu: goto label_19677c;
            case 0x196780u: goto label_196780;
            case 0x196784u: goto label_196784;
            case 0x196788u: goto label_196788;
            case 0x19678Cu: goto label_19678c;
            case 0x196790u: goto label_196790;
            case 0x196794u: goto label_196794;
            case 0x196798u: goto label_196798;
            case 0x19679Cu: goto label_19679c;
            case 0x1967A0u: goto label_1967a0;
            case 0x1967A4u: goto label_1967a4;
            case 0x1967A8u: goto label_1967a8;
            case 0x1967ACu: goto label_1967ac;
            case 0x1967B0u: goto label_1967b0;
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1967BCu: goto label_1967bc;
            case 0x1967C0u: goto label_1967c0;
            case 0x1967C4u: goto label_1967c4;
            case 0x1967C8u: goto label_1967c8;
            case 0x1967CCu: goto label_1967cc;
            case 0x1967D0u: goto label_1967d0;
            case 0x1967D4u: goto label_1967d4;
            case 0x1967D8u: goto label_1967d8;
            case 0x1967DCu: goto label_1967dc;
            case 0x1967E0u: goto label_1967e0;
            case 0x1967E4u: goto label_1967e4;
            case 0x1967E8u: goto label_1967e8;
            case 0x1967ECu: goto label_1967ec;
            case 0x1967F0u: goto label_1967f0;
            case 0x1967F4u: goto label_1967f4;
            case 0x1967F8u: goto label_1967f8;
            case 0x1967FCu: goto label_1967fc;
            case 0x196800u: goto label_196800;
            case 0x196804u: goto label_196804;
            case 0x196808u: goto label_196808;
            case 0x19680Cu: goto label_19680c;
            case 0x196810u: goto label_196810;
            case 0x196814u: goto label_196814;
            case 0x196818u: goto label_196818;
            case 0x19681Cu: goto label_19681c;
            case 0x196820u: goto label_196820;
            case 0x196824u: goto label_196824;
            case 0x196828u: goto label_196828;
            case 0x19682Cu: goto label_19682c;
            case 0x196830u: goto label_196830;
            case 0x196834u: goto label_196834;
            case 0x196838u: goto label_196838;
            case 0x19683Cu: goto label_19683c;
            case 0x196840u: goto label_196840;
            case 0x196844u: goto label_196844;
            case 0x196848u: goto label_196848;
            case 0x19684Cu: goto label_19684c;
            case 0x196850u: goto label_196850;
            case 0x196854u: goto label_196854;
            case 0x196858u: goto label_196858;
            case 0x19685Cu: goto label_19685c;
            case 0x196860u: goto label_196860;
            case 0x196864u: goto label_196864;
            case 0x196868u: goto label_196868;
            case 0x19686Cu: goto label_19686c;
            case 0x196870u: goto label_196870;
            case 0x196874u: goto label_196874;
            case 0x196878u: goto label_196878;
            case 0x19687Cu: goto label_19687c;
            case 0x196880u: goto label_196880;
            case 0x196884u: goto label_196884;
            case 0x196888u: goto label_196888;
            case 0x19688Cu: goto label_19688c;
            case 0x196890u: goto label_196890;
            case 0x196894u: goto label_196894;
            case 0x196898u: goto label_196898;
            case 0x19689Cu: goto label_19689c;
            case 0x1968A0u: goto label_1968a0;
            case 0x1968A4u: goto label_1968a4;
            case 0x1968A8u: goto label_1968a8;
            case 0x1968ACu: goto label_1968ac;
            case 0x1968B0u: goto label_1968b0;
            case 0x1968B4u: goto label_1968b4;
            case 0x1968B8u: goto label_1968b8;
            case 0x1968BCu: goto label_1968bc;
            case 0x1968C0u: goto label_1968c0;
            case 0x1968C4u: goto label_1968c4;
            case 0x1968C8u: goto label_1968c8;
            case 0x1968CCu: goto label_1968cc;
            case 0x1968D0u: goto label_1968d0;
            case 0x1968D4u: goto label_1968d4;
            case 0x1968D8u: goto label_1968d8;
            case 0x1968DCu: goto label_1968dc;
            case 0x1968E0u: goto label_1968e0;
            case 0x1968E4u: goto label_1968e4;
            case 0x1968E8u: goto label_1968e8;
            case 0x1968ECu: goto label_1968ec;
            case 0x1968F0u: goto label_1968f0;
            case 0x1968F4u: goto label_1968f4;
            case 0x1968F8u: goto label_1968f8;
            case 0x1968FCu: goto label_1968fc;
            case 0x196900u: goto label_196900;
            case 0x196904u: goto label_196904;
            case 0x196908u: goto label_196908;
            case 0x19690Cu: goto label_19690c;
            case 0x196910u: goto label_196910;
            case 0x196914u: goto label_196914;
            case 0x196918u: goto label_196918;
            case 0x19691Cu: goto label_19691c;
            case 0x196920u: goto label_196920;
            case 0x196924u: goto label_196924;
            case 0x196928u: goto label_196928;
            case 0x19692Cu: goto label_19692c;
            case 0x196930u: goto label_196930;
            case 0x196934u: goto label_196934;
            case 0x196938u: goto label_196938;
            case 0x19693Cu: goto label_19693c;
            case 0x196940u: goto label_196940;
            case 0x196944u: goto label_196944;
            case 0x196948u: goto label_196948;
            case 0x19694Cu: goto label_19694c;
            case 0x196950u: goto label_196950;
            case 0x196954u: goto label_196954;
            case 0x196958u: goto label_196958;
            case 0x19695Cu: goto label_19695c;
            case 0x196960u: goto label_196960;
            case 0x196964u: goto label_196964;
            case 0x196968u: goto label_196968;
            case 0x19696Cu: goto label_19696c;
            case 0x196970u: goto label_196970;
            case 0x196974u: goto label_196974;
            case 0x196978u: goto label_196978;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            case 0x196988u: goto label_196988;
            case 0x19698Cu: goto label_19698c;
            case 0x196990u: goto label_196990;
            case 0x196994u: goto label_196994;
            case 0x196998u: goto label_196998;
            case 0x19699Cu: goto label_19699c;
            case 0x1969A0u: goto label_1969a0;
            case 0x1969A4u: goto label_1969a4;
            case 0x1969A8u: goto label_1969a8;
            case 0x1969ACu: goto label_1969ac;
            case 0x1969B0u: goto label_1969b0;
            case 0x1969B4u: goto label_1969b4;
            case 0x1969B8u: goto label_1969b8;
            case 0x1969BCu: goto label_1969bc;
            case 0x1969C0u: goto label_1969c0;
            case 0x1969C4u: goto label_1969c4;
            case 0x1969C8u: goto label_1969c8;
            case 0x1969CCu: goto label_1969cc;
            case 0x1969D0u: goto label_1969d0;
            case 0x1969D4u: goto label_1969d4;
            case 0x1969D8u: goto label_1969d8;
            case 0x1969DCu: goto label_1969dc;
            case 0x1969E0u: goto label_1969e0;
            case 0x1969E4u: goto label_1969e4;
            case 0x1969E8u: goto label_1969e8;
            case 0x1969ECu: goto label_1969ec;
            case 0x1969F0u: goto label_1969f0;
            case 0x1969F4u: goto label_1969f4;
            case 0x1969F8u: goto label_1969f8;
            case 0x1969FCu: goto label_1969fc;
            case 0x196A00u: goto label_196a00;
            case 0x196A04u: goto label_196a04;
            case 0x196A08u: goto label_196a08;
            case 0x196A0Cu: goto label_196a0c;
            case 0x196A10u: goto label_196a10;
            case 0x196A14u: goto label_196a14;
            case 0x196A18u: goto label_196a18;
            case 0x196A1Cu: goto label_196a1c;
            case 0x196A20u: goto label_196a20;
            case 0x196A24u: goto label_196a24;
            case 0x196A28u: goto label_196a28;
            case 0x196A2Cu: goto label_196a2c;
            case 0x196A30u: goto label_196a30;
            case 0x196A34u: goto label_196a34;
            case 0x196A38u: goto label_196a38;
            case 0x196A3Cu: goto label_196a3c;
            case 0x196A40u: goto label_196a40;
            case 0x196A44u: goto label_196a44;
            case 0x196A48u: goto label_196a48;
            case 0x196A4Cu: goto label_196a4c;
            case 0x196A50u: goto label_196a50;
            case 0x196A54u: goto label_196a54;
            case 0x196A58u: goto label_196a58;
            case 0x196A5Cu: goto label_196a5c;
            case 0x196A60u: goto label_196a60;
            case 0x196A64u: goto label_196a64;
            case 0x196A68u: goto label_196a68;
            case 0x196A6Cu: goto label_196a6c;
            case 0x196A70u: goto label_196a70;
            case 0x196A74u: goto label_196a74;
            case 0x196A78u: goto label_196a78;
            case 0x196A7Cu: goto label_196a7c;
            case 0x196A80u: goto label_196a80;
            case 0x196A84u: goto label_196a84;
            case 0x196A88u: goto label_196a88;
            case 0x196A8Cu: goto label_196a8c;
            case 0x196A90u: goto label_196a90;
            case 0x196A94u: goto label_196a94;
            case 0x196A98u: goto label_196a98;
            case 0x196A9Cu: goto label_196a9c;
            case 0x196AA0u: goto label_196aa0;
            case 0x196AA4u: goto label_196aa4;
            case 0x196AA8u: goto label_196aa8;
            case 0x196AACu: goto label_196aac;
            case 0x196AB0u: goto label_196ab0;
            case 0x196AB4u: goto label_196ab4;
            case 0x196AB8u: goto label_196ab8;
            case 0x196ABCu: goto label_196abc;
            case 0x196AC0u: goto label_196ac0;
            case 0x196AC4u: goto label_196ac4;
            case 0x196AC8u: goto label_196ac8;
            case 0x196ACCu: goto label_196acc;
            case 0x196AD0u: goto label_196ad0;
            case 0x196AD4u: goto label_196ad4;
            case 0x196AD8u: goto label_196ad8;
            case 0x196ADCu: goto label_196adc;
            case 0x196AE0u: goto label_196ae0;
            case 0x196AE4u: goto label_196ae4;
            case 0x196AE8u: goto label_196ae8;
            case 0x196AECu: goto label_196aec;
            case 0x196AF0u: goto label_196af0;
            case 0x196AF4u: goto label_196af4;
            case 0x196AF8u: goto label_196af8;
            case 0x196AFCu: goto label_196afc;
            case 0x196B00u: goto label_196b00;
            case 0x196B04u: goto label_196b04;
            case 0x196B08u: goto label_196b08;
            case 0x196B0Cu: goto label_196b0c;
            case 0x196B10u: goto label_196b10;
            case 0x196B14u: goto label_196b14;
            case 0x196B18u: goto label_196b18;
            case 0x196B1Cu: goto label_196b1c;
            case 0x196B20u: goto label_196b20;
            case 0x196B24u: goto label_196b24;
            case 0x196B28u: goto label_196b28;
            case 0x196B2Cu: goto label_196b2c;
            case 0x196B30u: goto label_196b30;
            case 0x196B34u: goto label_196b34;
            case 0x196B38u: goto label_196b38;
            case 0x196B3Cu: goto label_196b3c;
            case 0x196B40u: goto label_196b40;
            case 0x196B44u: goto label_196b44;
            case 0x196B48u: goto label_196b48;
            case 0x196B4Cu: goto label_196b4c;
            case 0x196B50u: goto label_196b50;
            case 0x196B54u: goto label_196b54;
            case 0x196B58u: goto label_196b58;
            case 0x196B5Cu: goto label_196b5c;
            case 0x196B60u: goto label_196b60;
            case 0x196B64u: goto label_196b64;
            case 0x196B68u: goto label_196b68;
            case 0x196B6Cu: goto label_196b6c;
            case 0x196B70u: goto label_196b70;
            case 0x196B74u: goto label_196b74;
            case 0x196B78u: goto label_196b78;
            case 0x196B7Cu: goto label_196b7c;
            case 0x196B80u: goto label_196b80;
            case 0x196B84u: goto label_196b84;
            case 0x196B88u: goto label_196b88;
            case 0x196B8Cu: goto label_196b8c;
            case 0x196B90u: goto label_196b90;
            case 0x196B94u: goto label_196b94;
            case 0x196B98u: goto label_196b98;
            case 0x196B9Cu: goto label_196b9c;
            case 0x196BA0u: goto label_196ba0;
            case 0x196BA4u: goto label_196ba4;
            case 0x196BA8u: goto label_196ba8;
            case 0x196BACu: goto label_196bac;
            case 0x196BB0u: goto label_196bb0;
            case 0x196BB4u: goto label_196bb4;
            case 0x196BB8u: goto label_196bb8;
            case 0x196BBCu: goto label_196bbc;
            case 0x196BC0u: goto label_196bc0;
            case 0x196BC4u: goto label_196bc4;
            case 0x196BC8u: goto label_196bc8;
            case 0x196BCCu: goto label_196bcc;
            case 0x196BD0u: goto label_196bd0;
            case 0x196BD4u: goto label_196bd4;
            case 0x196BD8u: goto label_196bd8;
            case 0x196BDCu: goto label_196bdc;
            case 0x196BE0u: goto label_196be0;
            case 0x196BE4u: goto label_196be4;
            case 0x196BE8u: goto label_196be8;
            case 0x196BECu: goto label_196bec;
            case 0x196BF0u: goto label_196bf0;
            case 0x196BF4u: goto label_196bf4;
            case 0x196BF8u: goto label_196bf8;
            case 0x196BFCu: goto label_196bfc;
            case 0x196C00u: goto label_196c00;
            case 0x196C04u: goto label_196c04;
            case 0x196C08u: goto label_196c08;
            case 0x196C0Cu: goto label_196c0c;
            case 0x196C10u: goto label_196c10;
            case 0x196C14u: goto label_196c14;
            case 0x196C18u: goto label_196c18;
            case 0x196C1Cu: goto label_196c1c;
            case 0x196C20u: goto label_196c20;
            case 0x196C24u: goto label_196c24;
            case 0x196C28u: goto label_196c28;
            case 0x196C2Cu: goto label_196c2c;
            case 0x196C30u: goto label_196c30;
            case 0x196C34u: goto label_196c34;
            case 0x196C38u: goto label_196c38;
            case 0x196C3Cu: goto label_196c3c;
            case 0x196C40u: goto label_196c40;
            case 0x196C44u: goto label_196c44;
            case 0x196C48u: goto label_196c48;
            case 0x196C4Cu: goto label_196c4c;
            case 0x196C50u: goto label_196c50;
            case 0x196C54u: goto label_196c54;
            case 0x196C58u: goto label_196c58;
            case 0x196C5Cu: goto label_196c5c;
            case 0x196C60u: goto label_196c60;
            case 0x196C64u: goto label_196c64;
            case 0x196C68u: goto label_196c68;
            case 0x196C6Cu: goto label_196c6c;
            case 0x196C70u: goto label_196c70;
            case 0x196C74u: goto label_196c74;
            case 0x196C78u: goto label_196c78;
            case 0x196C7Cu: goto label_196c7c;
            case 0x196C80u: goto label_196c80;
            case 0x196C84u: goto label_196c84;
            case 0x196C88u: goto label_196c88;
            case 0x196C8Cu: goto label_196c8c;
            case 0x196C90u: goto label_196c90;
            case 0x196C94u: goto label_196c94;
            case 0x196C98u: goto label_196c98;
            case 0x196C9Cu: goto label_196c9c;
            case 0x196CA0u: goto label_196ca0;
            case 0x196CA4u: goto label_196ca4;
            case 0x196CA8u: goto label_196ca8;
            case 0x196CACu: goto label_196cac;
            case 0x196CB0u: goto label_196cb0;
            case 0x196CB4u: goto label_196cb4;
            case 0x196CB8u: goto label_196cb8;
            case 0x196CBCu: goto label_196cbc;
            case 0x196CC0u: goto label_196cc0;
            case 0x196CC4u: goto label_196cc4;
            case 0x196CC8u: goto label_196cc8;
            case 0x196CCCu: goto label_196ccc;
            case 0x196CD0u: goto label_196cd0;
            case 0x196CD4u: goto label_196cd4;
            case 0x196CD8u: goto label_196cd8;
            case 0x196CDCu: goto label_196cdc;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196CE8u: goto label_196ce8;
            case 0x196CECu: goto label_196cec;
            case 0x196CF0u: goto label_196cf0;
            case 0x196CF4u: goto label_196cf4;
            case 0x196CF8u: goto label_196cf8;
            case 0x196CFCu: goto label_196cfc;
            case 0x196D00u: goto label_196d00;
            case 0x196D04u: goto label_196d04;
            case 0x196D08u: goto label_196d08;
            case 0x196D0Cu: goto label_196d0c;
            case 0x196D10u: goto label_196d10;
            case 0x196D14u: goto label_196d14;
            case 0x196D18u: goto label_196d18;
            case 0x196D1Cu: goto label_196d1c;
            case 0x196D20u: goto label_196d20;
            case 0x196D24u: goto label_196d24;
            case 0x196D28u: goto label_196d28;
            case 0x196D2Cu: goto label_196d2c;
            case 0x196D30u: goto label_196d30;
            case 0x196D34u: goto label_196d34;
            case 0x196D38u: goto label_196d38;
            case 0x196D3Cu: goto label_196d3c;
            case 0x196D40u: goto label_196d40;
            case 0x196D44u: goto label_196d44;
            case 0x196D48u: goto label_196d48;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D50u: goto label_196d50;
            case 0x196D54u: goto label_196d54;
            case 0x196D58u: goto label_196d58;
            case 0x196D5Cu: goto label_196d5c;
            case 0x196D60u: goto label_196d60;
            case 0x196D64u: goto label_196d64;
            case 0x196D68u: goto label_196d68;
            case 0x196D6Cu: goto label_196d6c;
            case 0x196D70u: goto label_196d70;
            case 0x196D74u: goto label_196d74;
            case 0x196D78u: goto label_196d78;
            case 0x196D7Cu: goto label_196d7c;
            case 0x196D80u: goto label_196d80;
            case 0x196D84u: goto label_196d84;
            case 0x196D88u: goto label_196d88;
            case 0x196D8Cu: goto label_196d8c;
            case 0x196D90u: goto label_196d90;
            case 0x196D94u: goto label_196d94;
            case 0x196D98u: goto label_196d98;
            case 0x196D9Cu: goto label_196d9c;
            case 0x196DA0u: goto label_196da0;
            case 0x196DA4u: goto label_196da4;
            case 0x196DA8u: goto label_196da8;
            case 0x196DACu: goto label_196dac;
            case 0x196DB0u: goto label_196db0;
            case 0x196DB4u: goto label_196db4;
            case 0x196DB8u: goto label_196db8;
            case 0x196DBCu: goto label_196dbc;
            case 0x196DC0u: goto label_196dc0;
            case 0x196DC4u: goto label_196dc4;
            case 0x196DC8u: goto label_196dc8;
            case 0x196DCCu: goto label_196dcc;
            case 0x196DD0u: goto label_196dd0;
            case 0x196DD4u: goto label_196dd4;
            case 0x196DD8u: goto label_196dd8;
            case 0x196DDCu: goto label_196ddc;
            case 0x196DE0u: goto label_196de0;
            case 0x196DE4u: goto label_196de4;
            case 0x196DE8u: goto label_196de8;
            case 0x196DECu: goto label_196dec;
            case 0x196DF0u: goto label_196df0;
            case 0x196DF4u: goto label_196df4;
            case 0x196DF8u: goto label_196df8;
            case 0x196DFCu: goto label_196dfc;
            case 0x196E00u: goto label_196e00;
            case 0x196E04u: goto label_196e04;
            case 0x196E08u: goto label_196e08;
            case 0x196E0Cu: goto label_196e0c;
            case 0x196E10u: goto label_196e10;
            case 0x196E14u: goto label_196e14;
            case 0x196E18u: goto label_196e18;
            case 0x196E1Cu: goto label_196e1c;
            case 0x196E20u: goto label_196e20;
            case 0x196E24u: goto label_196e24;
            case 0x196E28u: goto label_196e28;
            case 0x196E2Cu: goto label_196e2c;
            case 0x196E30u: goto label_196e30;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196E3Cu: goto label_196e3c;
            case 0x196E40u: goto label_196e40;
            case 0x196E44u: goto label_196e44;
            case 0x196E48u: goto label_196e48;
            case 0x196E4Cu: goto label_196e4c;
            case 0x196E50u: goto label_196e50;
            case 0x196E54u: goto label_196e54;
            case 0x196E58u: goto label_196e58;
            case 0x196E5Cu: goto label_196e5c;
            case 0x196E60u: goto label_196e60;
            case 0x196E64u: goto label_196e64;
            case 0x196E68u: goto label_196e68;
            case 0x196E6Cu: goto label_196e6c;
            case 0x196E70u: goto label_196e70;
            case 0x196E74u: goto label_196e74;
            case 0x196E78u: goto label_196e78;
            case 0x196E7Cu: goto label_196e7c;
            case 0x196E80u: goto label_196e80;
            case 0x196E84u: goto label_196e84;
            case 0x196E88u: goto label_196e88;
            case 0x196E8Cu: goto label_196e8c;
            case 0x196E90u: goto label_196e90;
            case 0x196E94u: goto label_196e94;
            case 0x196E98u: goto label_196e98;
            case 0x196E9Cu: goto label_196e9c;
            case 0x196EA0u: goto label_196ea0;
            case 0x196EA4u: goto label_196ea4;
            case 0x196EA8u: goto label_196ea8;
            case 0x196EACu: goto label_196eac;
            case 0x196EB0u: goto label_196eb0;
            case 0x196EB4u: goto label_196eb4;
            case 0x196EB8u: goto label_196eb8;
            case 0x196EBCu: goto label_196ebc;
            case 0x196EC0u: goto label_196ec0;
            case 0x196EC4u: goto label_196ec4;
            case 0x196EC8u: goto label_196ec8;
            case 0x196ECCu: goto label_196ecc;
            case 0x196ED0u: goto label_196ed0;
            case 0x196ED4u: goto label_196ed4;
            case 0x196ED8u: goto label_196ed8;
            case 0x196EDCu: goto label_196edc;
            case 0x196EE0u: goto label_196ee0;
            case 0x196EE4u: goto label_196ee4;
            case 0x196EE8u: goto label_196ee8;
            case 0x196EECu: goto label_196eec;
            case 0x196EF0u: goto label_196ef0;
            case 0x196EF4u: goto label_196ef4;
            case 0x196EF8u: goto label_196ef8;
            case 0x196EFCu: goto label_196efc;
            case 0x196F00u: goto label_196f00;
            case 0x196F04u: goto label_196f04;
            case 0x196F08u: goto label_196f08;
            case 0x196F0Cu: goto label_196f0c;
            case 0x196F10u: goto label_196f10;
            case 0x196F14u: goto label_196f14;
            case 0x196F18u: goto label_196f18;
            case 0x196F1Cu: goto label_196f1c;
            case 0x196F20u: goto label_196f20;
            case 0x196F24u: goto label_196f24;
            case 0x196F28u: goto label_196f28;
            case 0x196F2Cu: goto label_196f2c;
            case 0x196F30u: goto label_196f30;
            case 0x196F34u: goto label_196f34;
            case 0x196F38u: goto label_196f38;
            case 0x196F3Cu: goto label_196f3c;
            case 0x196F40u: goto label_196f40;
            case 0x196F44u: goto label_196f44;
            case 0x196F48u: goto label_196f48;
            case 0x196F4Cu: goto label_196f4c;
            case 0x196F50u: goto label_196f50;
            case 0x196F54u: goto label_196f54;
            case 0x196F58u: goto label_196f58;
            case 0x196F5Cu: goto label_196f5c;
            case 0x196F60u: goto label_196f60;
            case 0x196F64u: goto label_196f64;
            case 0x196F68u: goto label_196f68;
            case 0x196F6Cu: goto label_196f6c;
            case 0x196F70u: goto label_196f70;
            case 0x196F74u: goto label_196f74;
            case 0x196F78u: goto label_196f78;
            case 0x196F7Cu: goto label_196f7c;
            case 0x196F80u: goto label_196f80;
            case 0x196F84u: goto label_196f84;
            case 0x196F88u: goto label_196f88;
            case 0x196F8Cu: goto label_196f8c;
            case 0x196F90u: goto label_196f90;
            case 0x196F94u: goto label_196f94;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x196FA0u: goto label_196fa0;
            case 0x196FA4u: goto label_196fa4;
            case 0x196FA8u: goto label_196fa8;
            case 0x196FACu: goto label_196fac;
            case 0x196FB0u: goto label_196fb0;
            case 0x196FB4u: goto label_196fb4;
            case 0x196FB8u: goto label_196fb8;
            case 0x196FBCu: goto label_196fbc;
            case 0x196FC0u: goto label_196fc0;
            case 0x196FC4u: goto label_196fc4;
            case 0x196FC8u: goto label_196fc8;
            case 0x196FCCu: goto label_196fcc;
            case 0x196FD0u: goto label_196fd0;
            case 0x196FD4u: goto label_196fd4;
            case 0x196FD8u: goto label_196fd8;
            case 0x196FDCu: goto label_196fdc;
            case 0x196FE0u: goto label_196fe0;
            case 0x196FE4u: goto label_196fe4;
            case 0x196FE8u: goto label_196fe8;
            case 0x196FECu: goto label_196fec;
            case 0x196FF0u: goto label_196ff0;
            case 0x196FF4u: goto label_196ff4;
            case 0x196FF8u: goto label_196ff8;
            case 0x196FFCu: goto label_196ffc;
            case 0x197000u: goto label_197000;
            case 0x197004u: goto label_197004;
            case 0x197008u: goto label_197008;
            case 0x19700Cu: goto label_19700c;
            case 0x197010u: goto label_197010;
            case 0x197014u: goto label_197014;
            case 0x197018u: goto label_197018;
            case 0x19701Cu: goto label_19701c;
            case 0x197020u: goto label_197020;
            case 0x197024u: goto label_197024;
            case 0x197028u: goto label_197028;
            case 0x19702Cu: goto label_19702c;
            case 0x197030u: goto label_197030;
            case 0x197034u: goto label_197034;
            case 0x197038u: goto label_197038;
            case 0x19703Cu: goto label_19703c;
            case 0x197040u: goto label_197040;
            case 0x197044u: goto label_197044;
            case 0x197048u: goto label_197048;
            case 0x19704Cu: goto label_19704c;
            case 0x197050u: goto label_197050;
            case 0x197054u: goto label_197054;
            case 0x197058u: goto label_197058;
            case 0x19705Cu: goto label_19705c;
            case 0x197060u: goto label_197060;
            case 0x197064u: goto label_197064;
            case 0x197068u: goto label_197068;
            case 0x19706Cu: goto label_19706c;
            case 0x197070u: goto label_197070;
            case 0x197074u: goto label_197074;
            case 0x197078u: goto label_197078;
            case 0x19707Cu: goto label_19707c;
            case 0x197080u: goto label_197080;
            case 0x197084u: goto label_197084;
            case 0x197088u: goto label_197088;
            case 0x19708Cu: goto label_19708c;
            case 0x197090u: goto label_197090;
            case 0x197094u: goto label_197094;
            case 0x197098u: goto label_197098;
            case 0x19709Cu: goto label_19709c;
            case 0x1970A0u: goto label_1970a0;
            case 0x1970A4u: goto label_1970a4;
            case 0x1970A8u: goto label_1970a8;
            case 0x1970ACu: goto label_1970ac;
            case 0x1970B0u: goto label_1970b0;
            case 0x1970B4u: goto label_1970b4;
            case 0x1970B8u: goto label_1970b8;
            case 0x1970BCu: goto label_1970bc;
            case 0x1970C0u: goto label_1970c0;
            case 0x1970C4u: goto label_1970c4;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970D0u: goto label_1970d0;
            case 0x1970D4u: goto label_1970d4;
            case 0x1970D8u: goto label_1970d8;
            case 0x1970DCu: goto label_1970dc;
            case 0x1970E0u: goto label_1970e0;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970E8u: goto label_1970e8;
            case 0x1970ECu: goto label_1970ec;
            case 0x1970F0u: goto label_1970f0;
            case 0x1970F4u: goto label_1970f4;
            case 0x1970F8u: goto label_1970f8;
            case 0x1970FCu: goto label_1970fc;
            case 0x197100u: goto label_197100;
            case 0x197104u: goto label_197104;
            case 0x197108u: goto label_197108;
            case 0x19710Cu: goto label_19710c;
            case 0x197110u: goto label_197110;
            case 0x197114u: goto label_197114;
            case 0x197118u: goto label_197118;
            case 0x19711Cu: goto label_19711c;
            case 0x197120u: goto label_197120;
            case 0x197124u: goto label_197124;
            case 0x197128u: goto label_197128;
            case 0x19712Cu: goto label_19712c;
            case 0x197130u: goto label_197130;
            case 0x197134u: goto label_197134;
            case 0x197138u: goto label_197138;
            case 0x19713Cu: goto label_19713c;
            case 0x197140u: goto label_197140;
            case 0x197144u: goto label_197144;
            case 0x197148u: goto label_197148;
            case 0x19714Cu: goto label_19714c;
            case 0x197150u: goto label_197150;
            case 0x197154u: goto label_197154;
            case 0x197158u: goto label_197158;
            case 0x19715Cu: goto label_19715c;
            case 0x197160u: goto label_197160;
            case 0x197164u: goto label_197164;
            case 0x197168u: goto label_197168;
            case 0x19716Cu: goto label_19716c;
            case 0x197170u: goto label_197170;
            case 0x197174u: goto label_197174;
            case 0x197178u: goto label_197178;
            case 0x19717Cu: goto label_19717c;
            case 0x197180u: goto label_197180;
            case 0x197184u: goto label_197184;
            case 0x197188u: goto label_197188;
            case 0x19718Cu: goto label_19718c;
            case 0x197190u: goto label_197190;
            case 0x197194u: goto label_197194;
            case 0x197198u: goto label_197198;
            case 0x19719Cu: goto label_19719c;
            case 0x1971A0u: goto label_1971a0;
            case 0x1971A4u: goto label_1971a4;
            case 0x1971A8u: goto label_1971a8;
            case 0x1971ACu: goto label_1971ac;
            case 0x1971B0u: goto label_1971b0;
            case 0x1971B4u: goto label_1971b4;
            case 0x1971B8u: goto label_1971b8;
            case 0x1971BCu: goto label_1971bc;
            case 0x1971C0u: goto label_1971c0;
            case 0x1971C4u: goto label_1971c4;
            case 0x1971C8u: goto label_1971c8;
            case 0x1971CCu: goto label_1971cc;
            case 0x1971D0u: goto label_1971d0;
            case 0x1971D4u: goto label_1971d4;
            case 0x1971D8u: goto label_1971d8;
            case 0x1971DCu: goto label_1971dc;
            case 0x1971E0u: goto label_1971e0;
            case 0x1971E4u: goto label_1971e4;
            case 0x1971E8u: goto label_1971e8;
            case 0x1971ECu: goto label_1971ec;
            case 0x1971F0u: goto label_1971f0;
            case 0x1971F4u: goto label_1971f4;
            case 0x1971F8u: goto label_1971f8;
            case 0x1971FCu: goto label_1971fc;
            case 0x197200u: goto label_197200;
            case 0x197204u: goto label_197204;
            case 0x197208u: goto label_197208;
            case 0x19720Cu: goto label_19720c;
            case 0x197210u: goto label_197210;
            case 0x197214u: goto label_197214;
            case 0x197218u: goto label_197218;
            case 0x19721Cu: goto label_19721c;
            case 0x197220u: goto label_197220;
            case 0x197224u: goto label_197224;
            case 0x197228u: goto label_197228;
            case 0x19722Cu: goto label_19722c;
            case 0x197230u: goto label_197230;
            case 0x197234u: goto label_197234;
            case 0x197238u: goto label_197238;
            case 0x19723Cu: goto label_19723c;
            case 0x197240u: goto label_197240;
            case 0x197244u: goto label_197244;
            case 0x197248u: goto label_197248;
            case 0x19724Cu: goto label_19724c;
            case 0x197250u: goto label_197250;
            case 0x197254u: goto label_197254;
            case 0x197258u: goto label_197258;
            case 0x19725Cu: goto label_19725c;
            case 0x197260u: goto label_197260;
            case 0x197264u: goto label_197264;
            case 0x197268u: goto label_197268;
            case 0x19726Cu: goto label_19726c;
            case 0x197270u: goto label_197270;
            case 0x197274u: goto label_197274;
            case 0x197278u: goto label_197278;
            case 0x19727Cu: goto label_19727c;
            case 0x197280u: goto label_197280;
            case 0x197284u: goto label_197284;
            case 0x197288u: goto label_197288;
            case 0x19728Cu: goto label_19728c;
            case 0x197290u: goto label_197290;
            case 0x197294u: goto label_197294;
            case 0x197298u: goto label_197298;
            case 0x19729Cu: goto label_19729c;
            case 0x1972A0u: goto label_1972a0;
            case 0x1972A4u: goto label_1972a4;
            case 0x1972A8u: goto label_1972a8;
            case 0x1972ACu: goto label_1972ac;
            case 0x1972B0u: goto label_1972b0;
            case 0x1972B4u: goto label_1972b4;
            case 0x1972B8u: goto label_1972b8;
            case 0x1972BCu: goto label_1972bc;
            case 0x1972C0u: goto label_1972c0;
            case 0x1972C4u: goto label_1972c4;
            case 0x1972C8u: goto label_1972c8;
            case 0x1972CCu: goto label_1972cc;
            case 0x1972D0u: goto label_1972d0;
            case 0x1972D4u: goto label_1972d4;
            case 0x1972D8u: goto label_1972d8;
            case 0x1972DCu: goto label_1972dc;
            case 0x1972E0u: goto label_1972e0;
            case 0x1972E4u: goto label_1972e4;
            case 0x1972E8u: goto label_1972e8;
            case 0x1972ECu: goto label_1972ec;
            case 0x1972F0u: goto label_1972f0;
            case 0x1972F4u: goto label_1972f4;
            case 0x1972F8u: goto label_1972f8;
            case 0x1972FCu: goto label_1972fc;
            case 0x197300u: goto label_197300;
            case 0x197304u: goto label_197304;
            case 0x197308u: goto label_197308;
            case 0x19730Cu: goto label_19730c;
            case 0x197310u: goto label_197310;
            case 0x197314u: goto label_197314;
            case 0x197318u: goto label_197318;
            case 0x19731Cu: goto label_19731c;
            case 0x197320u: goto label_197320;
            case 0x197324u: goto label_197324;
            case 0x197328u: goto label_197328;
            case 0x19732Cu: goto label_19732c;
            case 0x197330u: goto label_197330;
            case 0x197334u: goto label_197334;
            case 0x197338u: goto label_197338;
            case 0x19733Cu: goto label_19733c;
            case 0x197340u: goto label_197340;
            case 0x197344u: goto label_197344;
            case 0x197348u: goto label_197348;
            case 0x19734Cu: goto label_19734c;
            case 0x197350u: goto label_197350;
            case 0x197354u: goto label_197354;
            case 0x197358u: goto label_197358;
            case 0x19735Cu: goto label_19735c;
            case 0x197360u: goto label_197360;
            case 0x197364u: goto label_197364;
            case 0x197368u: goto label_197368;
            case 0x19736Cu: goto label_19736c;
            case 0x197370u: goto label_197370;
            case 0x197374u: goto label_197374;
            case 0x197378u: goto label_197378;
            case 0x19737Cu: goto label_19737c;
            case 0x197380u: goto label_197380;
            case 0x197384u: goto label_197384;
            case 0x197388u: goto label_197388;
            case 0x19738Cu: goto label_19738c;
            case 0x197390u: goto label_197390;
            case 0x197394u: goto label_197394;
            case 0x197398u: goto label_197398;
            case 0x19739Cu: goto label_19739c;
            case 0x1973A0u: goto label_1973a0;
            case 0x1973A4u: goto label_1973a4;
            case 0x1973A8u: goto label_1973a8;
            case 0x1973ACu: goto label_1973ac;
            case 0x1973B0u: goto label_1973b0;
            case 0x1973B4u: goto label_1973b4;
            case 0x1973B8u: goto label_1973b8;
            case 0x1973BCu: goto label_1973bc;
            case 0x1973C0u: goto label_1973c0;
            case 0x1973C4u: goto label_1973c4;
            case 0x1973C8u: goto label_1973c8;
            case 0x1973CCu: goto label_1973cc;
            case 0x1973D0u: goto label_1973d0;
            case 0x1973D4u: goto label_1973d4;
            case 0x1973D8u: goto label_1973d8;
            case 0x1973DCu: goto label_1973dc;
            case 0x1973E0u: goto label_1973e0;
            case 0x1973E4u: goto label_1973e4;
            case 0x1973E8u: goto label_1973e8;
            case 0x1973ECu: goto label_1973ec;
            case 0x1973F0u: goto label_1973f0;
            case 0x1973F4u: goto label_1973f4;
            case 0x1973F8u: goto label_1973f8;
            case 0x1973FCu: goto label_1973fc;
            case 0x197400u: goto label_197400;
            case 0x197404u: goto label_197404;
            case 0x197408u: goto label_197408;
            case 0x19740Cu: goto label_19740c;
            case 0x197410u: goto label_197410;
            case 0x197414u: goto label_197414;
            case 0x197418u: goto label_197418;
            case 0x19741Cu: goto label_19741c;
            case 0x197420u: goto label_197420;
            case 0x197424u: goto label_197424;
            case 0x197428u: goto label_197428;
            case 0x19742Cu: goto label_19742c;
            case 0x197430u: goto label_197430;
            case 0x197434u: goto label_197434;
            case 0x197438u: goto label_197438;
            case 0x19743Cu: goto label_19743c;
            case 0x197440u: goto label_197440;
            case 0x197444u: goto label_197444;
            case 0x197448u: goto label_197448;
            case 0x19744Cu: goto label_19744c;
            case 0x197450u: goto label_197450;
            case 0x197454u: goto label_197454;
            case 0x197458u: goto label_197458;
            case 0x19745Cu: goto label_19745c;
            case 0x197460u: goto label_197460;
            case 0x197464u: goto label_197464;
            case 0x197468u: goto label_197468;
            case 0x19746Cu: goto label_19746c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196EF8u;
label_196ef8:
    // 0x196ef8: 0x0
    ctx->pc = 0x196ef8u;
    // NOP
label_196efc:
    // 0x196efc: 0x0
    ctx->pc = 0x196efcu;
    // NOP
label_196f00:
    // 0x196f00: 0x308300ff
    ctx->pc = 0x196f00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
label_196f04:
    // 0x196f04: 0x27bdfff0
    ctx->pc = 0x196f04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_196f08:
    // 0x196f08: 0x2404006d
    ctx->pc = 0x196f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 109));
label_196f0c:
    // 0x196f0c: 0xffbf0000
    ctx->pc = 0x196f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196f10:
    // 0x196f10: 0x10640129
label_196f14:
    if (ctx->pc == 0x196F14u) {
        ctx->pc = 0x196F14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196F18u;
        goto label_196f18;
    }
    ctx->pc = 0x196F10u;
    {
        const bool branch_taken_0x196f10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x196F14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196f10) {
            ctx->pc = 0x1973B8u;
            goto label_1973b8;
        }
    }
    ctx->pc = 0x196F18u;
label_196f18:
    // 0x196f18: 0x2404006c
    ctx->pc = 0x196f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
label_196f1c:
    // 0x196f1c: 0x1064011e
label_196f20:
    if (ctx->pc == 0x196F20u) {
        ctx->pc = 0x196F24u;
        goto label_196f24;
    }
    ctx->pc = 0x196F1Cu;
    {
        const bool branch_taken_0x196f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f1c) {
            ctx->pc = 0x197398u;
            goto label_197398;
        }
    }
    ctx->pc = 0x196F24u;
label_196f24:
    // 0x196f24: 0x2404006b
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 107));
label_196f28:
    // 0x196f28: 0x10640116
label_196f2c:
    if (ctx->pc == 0x196F2Cu) {
        ctx->pc = 0x196F30u;
        goto label_196f30;
    }
    ctx->pc = 0x196F28u;
    {
        const bool branch_taken_0x196f28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f28) {
            ctx->pc = 0x197384u;
            goto label_197384;
        }
    }
    ctx->pc = 0x196F30u;
label_196f30:
    // 0x196f30: 0x2404006a
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 106));
label_196f34:
    // 0x196f34: 0x10640110
label_196f38:
    if (ctx->pc == 0x196F38u) {
        ctx->pc = 0x196F3Cu;
        goto label_196f3c;
    }
    ctx->pc = 0x196F34u;
    {
        const bool branch_taken_0x196f34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f34) {
            ctx->pc = 0x197378u;
            goto label_197378;
        }
    }
    ctx->pc = 0x196F3Cu;
label_196f3c:
    // 0x196f3c: 0x24040069
    ctx->pc = 0x196f3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 105));
label_196f40:
    // 0x196f40: 0x1064010a
label_196f44:
    if (ctx->pc == 0x196F44u) {
        ctx->pc = 0x196F48u;
        goto label_196f48;
    }
    ctx->pc = 0x196F40u;
    {
        const bool branch_taken_0x196f40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f40) {
            ctx->pc = 0x19736Cu;
            goto label_19736c;
        }
    }
    ctx->pc = 0x196F48u;
label_196f48:
    // 0x196f48: 0x24040068
    ctx->pc = 0x196f48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 104));
label_196f4c:
    // 0x196f4c: 0x10640143
label_196f50:
    if (ctx->pc == 0x196F50u) {
        ctx->pc = 0x196F54u;
        goto label_196f54;
    }
    ctx->pc = 0x196F4Cu;
    {
        const bool branch_taken_0x196f4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f4c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x196F54u;
label_196f54:
    // 0x196f54: 0x24040066
    ctx->pc = 0x196f54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
label_196f58:
    // 0x196f58: 0x106400fc
label_196f5c:
    if (ctx->pc == 0x196F5Cu) {
        ctx->pc = 0x196F60u;
        goto label_196f60;
    }
    ctx->pc = 0x196F58u;
    {
        const bool branch_taken_0x196f58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f58) {
            ctx->pc = 0x19734Cu;
            goto label_19734c;
        }
    }
    ctx->pc = 0x196F60u;
label_196f60:
    // 0x196f60: 0x24040065
    ctx->pc = 0x196f60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 101));
label_196f64:
    // 0x196f64: 0x1064013d
label_196f68:
    if (ctx->pc == 0x196F68u) {
        ctx->pc = 0x196F6Cu;
        goto label_196f6c;
    }
    ctx->pc = 0x196F64u;
    {
        const bool branch_taken_0x196f64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f64) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x196F6Cu;
label_196f6c:
    // 0x196f6c: 0x24040064
    ctx->pc = 0x196f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 100));
label_196f70:
    // 0x196f70: 0x106400f1
label_196f74:
    if (ctx->pc == 0x196F74u) {
        ctx->pc = 0x196F78u;
        goto label_196f78;
    }
    ctx->pc = 0x196F70u;
    {
        const bool branch_taken_0x196f70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f70) {
            ctx->pc = 0x197338u;
            goto label_197338;
        }
    }
    ctx->pc = 0x196F78u;
label_196f78:
    // 0x196f78: 0x24040063
    ctx->pc = 0x196f78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
label_196f7c:
    // 0x196f7c: 0x106400e9
label_196f80:
    if (ctx->pc == 0x196F80u) {
        ctx->pc = 0x196F84u;
        goto label_196f84;
    }
    ctx->pc = 0x196F7Cu;
    {
        const bool branch_taken_0x196f7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f7c) {
            ctx->pc = 0x197324u;
            goto label_197324;
        }
    }
    ctx->pc = 0x196F84u;
label_196f84:
    // 0x196f84: 0x24040062
    ctx->pc = 0x196f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
label_196f88:
    // 0x196f88: 0x106400de
label_196f8c:
    if (ctx->pc == 0x196F8Cu) {
        ctx->pc = 0x196F90u;
        goto label_196f90;
    }
    ctx->pc = 0x196F88u;
    {
        const bool branch_taken_0x196f88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f88) {
            ctx->pc = 0x197304u;
            goto label_197304;
        }
    }
    ctx->pc = 0x196F90u;
label_196f90:
    // 0x196f90: 0x24040061
    ctx->pc = 0x196f90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 97));
label_196f94:
    // 0x196f94: 0x106400d3
label_196f98:
    if (ctx->pc == 0x196F98u) {
        ctx->pc = 0x196F9Cu;
        goto label_196f9c;
    }
    ctx->pc = 0x196F94u;
    {
        const bool branch_taken_0x196f94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196f94) {
            ctx->pc = 0x1972E4u;
            goto label_1972e4;
        }
    }
    ctx->pc = 0x196F9Cu;
label_196f9c:
    // 0x196f9c: 0x24040060
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
label_196fa0:
    // 0x196fa0: 0x106400cd
label_196fa4:
    if (ctx->pc == 0x196FA4u) {
        ctx->pc = 0x196FA8u;
        goto label_196fa8;
    }
    ctx->pc = 0x196FA0u;
    {
        const bool branch_taken_0x196fa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196fa0) {
            ctx->pc = 0x1972D8u;
            goto label_1972d8;
        }
    }
    ctx->pc = 0x196FA8u;
label_196fa8:
    // 0x196fa8: 0x2404005f
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
label_196fac:
    // 0x196fac: 0x106400a0
label_196fb0:
    if (ctx->pc == 0x196FB0u) {
        ctx->pc = 0x196FB4u;
        goto label_196fb4;
    }
    ctx->pc = 0x196FACu;
    {
        const bool branch_taken_0x196fac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196fac) {
            ctx->pc = 0x197230u;
            goto label_197230;
        }
    }
    ctx->pc = 0x196FB4u;
label_196fb4:
    // 0x196fb4: 0x2404005e
    ctx->pc = 0x196fb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_196fb8:
    // 0x196fb8: 0x1064009a
label_196fbc:
    if (ctx->pc == 0x196FBCu) {
        ctx->pc = 0x196FC0u;
        goto label_196fc0;
    }
    ctx->pc = 0x196FB8u;
    {
        const bool branch_taken_0x196fb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196fb8) {
            ctx->pc = 0x197224u;
            goto label_197224;
        }
    }
    ctx->pc = 0x196FC0u;
label_196fc0:
    // 0x196fc0: 0x2404005d
    ctx->pc = 0x196fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
label_196fc4:
    // 0x196fc4: 0x10640092
label_196fc8:
    if (ctx->pc == 0x196FC8u) {
        ctx->pc = 0x196FCCu;
        goto label_196fcc;
    }
    ctx->pc = 0x196FC4u;
    {
        const bool branch_taken_0x196fc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196fc4) {
            ctx->pc = 0x197210u;
            goto label_197210;
        }
    }
    ctx->pc = 0x196FCCu;
label_196fcc:
    // 0x196fcc: 0x2404005c
    ctx->pc = 0x196fccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
label_196fd0:
    // 0x196fd0: 0x10640086
label_196fd4:
    if (ctx->pc == 0x196FD4u) {
        ctx->pc = 0x196FD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967206));
        ctx->pc = 0x196FD8u;
        goto label_196fd8;
    }
    ctx->pc = 0x196FD0u;
    {
        const bool branch_taken_0x196fd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x196FD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967206));
        if (branch_taken_0x196fd0) {
            ctx->pc = 0x1971ECu;
            goto label_1971ec;
        }
    }
    ctx->pc = 0x196FD8u;
label_196fd8:
    // 0x196fd8: 0x2404005b
    ctx->pc = 0x196fd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 91));
label_196fdc:
    // 0x196fdc: 0x10640082
label_196fe0:
    if (ctx->pc == 0x196FE0u) {
        ctx->pc = 0x196FE4u;
        goto label_196fe4;
    }
    ctx->pc = 0x196FDCu;
    {
        const bool branch_taken_0x196fdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196fdc) {
            ctx->pc = 0x1971E8u;
            goto label_1971e8;
        }
    }
    ctx->pc = 0x196FE4u;
label_196fe4:
    // 0x196fe4: 0x2404005a
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 90));
label_196fe8:
    // 0x196fe8: 0x1064007f
label_196fec:
    if (ctx->pc == 0x196FECu) {
        ctx->pc = 0x196FF0u;
        goto label_196ff0;
    }
    ctx->pc = 0x196FE8u;
    {
        const bool branch_taken_0x196fe8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196fe8) {
            ctx->pc = 0x1971E8u;
            goto label_1971e8;
        }
    }
    ctx->pc = 0x196FF0u;
label_196ff0:
    // 0x196ff0: 0x24040015
    ctx->pc = 0x196ff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
label_196ff4:
    // 0x196ff4: 0x10640070
label_196ff8:
    if (ctx->pc == 0x196FF8u) {
        ctx->pc = 0x196FFCu;
        goto label_196ffc;
    }
    ctx->pc = 0x196FF4u;
    {
        const bool branch_taken_0x196ff4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x196ff4) {
            ctx->pc = 0x1971B8u;
            goto label_1971b8;
        }
    }
    ctx->pc = 0x196FFCu;
label_196ffc:
    // 0x196ffc: 0x24040014
    ctx->pc = 0x196ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
label_197000:
    // 0x197000: 0x10640069
label_197004:
    if (ctx->pc == 0x197004u) {
        ctx->pc = 0x197008u;
        goto label_197008;
    }
    ctx->pc = 0x197000u;
    {
        const bool branch_taken_0x197000 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197000) {
            ctx->pc = 0x1971A8u;
            goto label_1971a8;
        }
    }
    ctx->pc = 0x197008u;
label_197008:
    // 0x197008: 0x24040013
    ctx->pc = 0x197008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
label_19700c:
    // 0x19700c: 0x10640113
label_197010:
    if (ctx->pc == 0x197010u) {
        ctx->pc = 0x197014u;
        goto label_197014;
    }
    ctx->pc = 0x19700Cu;
    {
        const bool branch_taken_0x19700c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x19700c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197014u;
label_197014:
    // 0x197014: 0x24040012
    ctx->pc = 0x197014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
label_197018:
    // 0x197018: 0x10640059
label_19701c:
    if (ctx->pc == 0x19701Cu) {
        ctx->pc = 0x197020u;
        goto label_197020;
    }
    ctx->pc = 0x197018u;
    {
        const bool branch_taken_0x197018 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197018) {
            ctx->pc = 0x197180u;
            goto label_197180;
        }
    }
    ctx->pc = 0x197020u;
label_197020:
    // 0x197020: 0x24040011
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
label_197024:
    // 0x197024: 0x1064010d
label_197028:
    if (ctx->pc == 0x197028u) {
        ctx->pc = 0x19702Cu;
        goto label_19702c;
    }
    ctx->pc = 0x197024u;
    {
        const bool branch_taken_0x197024 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197024) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19702Cu;
label_19702c:
    // 0x19702c: 0x24040010
    ctx->pc = 0x19702cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_197030:
    // 0x197030: 0x1064010a
label_197034:
    if (ctx->pc == 0x197034u) {
        ctx->pc = 0x197038u;
        goto label_197038;
    }
    ctx->pc = 0x197030u;
    {
        const bool branch_taken_0x197030 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197030) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197038u;
label_197038:
    // 0x197038: 0x2404000f
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
label_19703c:
    // 0x19703c: 0x1064004d
label_197040:
    if (ctx->pc == 0x197040u) {
        ctx->pc = 0x197044u;
        goto label_197044;
    }
    ctx->pc = 0x19703Cu;
    {
        const bool branch_taken_0x19703c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x19703c) {
            ctx->pc = 0x197174u;
            goto label_197174;
        }
    }
    ctx->pc = 0x197044u;
label_197044:
    // 0x197044: 0x2404000e
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_197048:
    // 0x197048: 0x10640047
label_19704c:
    if (ctx->pc == 0x19704Cu) {
        ctx->pc = 0x197050u;
        goto label_197050;
    }
    ctx->pc = 0x197048u;
    {
        const bool branch_taken_0x197048 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197048) {
            ctx->pc = 0x197168u;
            goto label_197168;
        }
    }
    ctx->pc = 0x197050u;
label_197050:
    // 0x197050: 0x2404000d
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
label_197054:
    // 0x197054: 0x10640040
label_197058:
    if (ctx->pc == 0x197058u) {
        ctx->pc = 0x19705Cu;
        goto label_19705c;
    }
    ctx->pc = 0x197054u;
    {
        const bool branch_taken_0x197054 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197054) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x19705Cu;
label_19705c:
    // 0x19705c: 0x2404000c
    ctx->pc = 0x19705cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
label_197060:
    // 0x197060: 0x10640035
label_197064:
    if (ctx->pc == 0x197064u) {
        ctx->pc = 0x197068u;
        goto label_197068;
    }
    ctx->pc = 0x197060u;
    {
        const bool branch_taken_0x197060 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197060) {
            ctx->pc = 0x197138u;
            goto label_197138;
        }
    }
    ctx->pc = 0x197068u;
label_197068:
    // 0x197068: 0x2404000b
    ctx->pc = 0x197068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
label_19706c:
    // 0x19706c: 0x106400fb
label_197070:
    if (ctx->pc == 0x197070u) {
        ctx->pc = 0x197074u;
        goto label_197074;
    }
    ctx->pc = 0x19706Cu;
    {
        const bool branch_taken_0x19706c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x19706c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197074u;
label_197074:
    // 0x197074: 0x2404000a
    ctx->pc = 0x197074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
label_197078:
    // 0x197078: 0x106400f8
label_19707c:
    if (ctx->pc == 0x19707Cu) {
        ctx->pc = 0x197080u;
        goto label_197080;
    }
    ctx->pc = 0x197078u;
    {
        const bool branch_taken_0x197078 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197078) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197080u;
label_197080:
    // 0x197080: 0x24040009
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
label_197084:
    // 0x197084: 0x106400f5
label_197088:
    if (ctx->pc == 0x197088u) {
        ctx->pc = 0x19708Cu;
        goto label_19708c;
    }
    ctx->pc = 0x197084u;
    {
        const bool branch_taken_0x197084 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197084) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19708Cu;
label_19708c:
    // 0x19708c: 0x24040008
    ctx->pc = 0x19708cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_197090:
    // 0x197090: 0x106400f2
label_197094:
    if (ctx->pc == 0x197094u) {
        ctx->pc = 0x197098u;
        goto label_197098;
    }
    ctx->pc = 0x197090u;
    {
        const bool branch_taken_0x197090 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x197090) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197098u;
label_197098:
    // 0x197098: 0x24040007
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_19709c:
    // 0x19709c: 0x1064001f
label_1970a0:
    if (ctx->pc == 0x1970A0u) {
        ctx->pc = 0x1970A4u;
        goto label_1970a4;
    }
    ctx->pc = 0x19709Cu;
    {
        const bool branch_taken_0x19709c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x19709c) {
            ctx->pc = 0x19711Cu;
            goto label_19711c;
        }
    }
    ctx->pc = 0x1970A4u;
label_1970a4:
    // 0x1970a4: 0x24040006
    ctx->pc = 0x1970a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
label_1970a8:
    // 0x1970a8: 0x1064001c
label_1970ac:
    if (ctx->pc == 0x1970ACu) {
        ctx->pc = 0x1970B0u;
        goto label_1970b0;
    }
    ctx->pc = 0x1970A8u;
    {
        const bool branch_taken_0x1970a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1970a8) {
            ctx->pc = 0x19711Cu;
            goto label_19711c;
        }
    }
    ctx->pc = 0x1970B0u;
label_1970b0:
    // 0x1970b0: 0x24040005
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_1970b4:
    // 0x1970b4: 0x10640019
label_1970b8:
    if (ctx->pc == 0x1970B8u) {
        ctx->pc = 0x1970BCu;
        goto label_1970bc;
    }
    ctx->pc = 0x1970B4u;
    {
        const bool branch_taken_0x1970b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1970b4) {
            ctx->pc = 0x19711Cu;
            goto label_19711c;
        }
    }
    ctx->pc = 0x1970BCu;
label_1970bc:
    // 0x1970bc: 0x24040004
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_1970c0:
    // 0x1970c0: 0x10640016
label_1970c4:
    if (ctx->pc == 0x1970C4u) {
        ctx->pc = 0x1970C8u;
        goto label_1970c8;
    }
    ctx->pc = 0x1970C0u;
    {
        const bool branch_taken_0x1970c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1970c0) {
            ctx->pc = 0x19711Cu;
            goto label_19711c;
        }
    }
    ctx->pc = 0x1970C8u;
label_1970c8:
    // 0x1970c8: 0x24040002
    ctx->pc = 0x1970c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1970cc:
    // 0x1970cc: 0x1064000f
label_1970d0:
    if (ctx->pc == 0x1970D0u) {
        ctx->pc = 0x1970D4u;
        goto label_1970d4;
    }
    ctx->pc = 0x1970CCu;
    {
        const bool branch_taken_0x1970cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1970cc) {
            ctx->pc = 0x19710Cu;
            goto label_19710c;
        }
    }
    ctx->pc = 0x1970D4u;
label_1970d4:
    // 0x1970d4: 0x24040001
    ctx->pc = 0x1970d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1970d8:
    // 0x1970d8: 0x10640008
label_1970dc:
    if (ctx->pc == 0x1970DCu) {
        ctx->pc = 0x1970E0u;
        goto label_1970e0;
    }
    ctx->pc = 0x1970D8u;
    {
        const bool branch_taken_0x1970d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1970d8) {
            ctx->pc = 0x1970FCu;
            goto label_1970fc;
        }
    }
    ctx->pc = 0x1970E0u;
label_1970e0:
    // 0x1970e0: 0x24040003
    ctx->pc = 0x1970e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_1970e4:
    // 0x1970e4: 0x106400dd
label_1970e8:
    if (ctx->pc == 0x1970E8u) {
        ctx->pc = 0x1970ECu;
        goto label_1970ec;
    }
    ctx->pc = 0x1970E4u;
    {
        const bool branch_taken_0x1970e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1970e4) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1970ECu;
label_1970ec:
    // 0x1970ec: 0x106000db
label_1970f0:
    if (ctx->pc == 0x1970F0u) {
        ctx->pc = 0x1970F4u;
        goto label_1970f4;
    }
    ctx->pc = 0x1970ECu;
    {
        const bool branch_taken_0x1970ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1970ec) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1970F4u;
label_1970f4:
    // 0x1970f4: 0x100000da
label_1970f8:
    if (ctx->pc == 0x1970F8u) {
        ctx->pc = 0x1970F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1970FCu;
        goto label_1970fc;
    }
    ctx->pc = 0x1970F4u;
    {
        const bool branch_taken_0x1970f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1970F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1970f4) {
            ctx->pc = 0x197460u;
            goto label_197460;
        }
    }
    ctx->pc = 0x1970FCu;
label_1970fc:
    // 0x1970fc: 0x3c01002a
    ctx->pc = 0x1970fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197100:
    // 0x197100: 0x8c22fe70
    ctx->pc = 0x197100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_197104:
    // 0x197104: 0x100000d5
label_197108:
    if (ctx->pc == 0x197108u) {
        ctx->pc = 0x197108u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3840));
        ctx->pc = 0x19710Cu;
        goto label_19710c;
    }
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197108u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3840));
        if (branch_taken_0x197104) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19710Cu;
label_19710c:
    // 0x19710c: 0x3c01002a
    ctx->pc = 0x19710cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197110:
    // 0x197110: 0x8c22fe70
    ctx->pc = 0x197110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_197114:
    // 0x197114: 0x100000d1
label_197118:
    if (ctx->pc == 0x197118u) {
        ctx->pc = 0x197118u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 28));
        ctx->pc = 0x19711Cu;
        goto label_19711c;
    }
    ctx->pc = 0x197114u;
    {
        const bool branch_taken_0x197114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197118u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 28));
        if (branch_taken_0x197114) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19711Cu;
label_19711c:
    // 0x19711c: 0x2463fffc
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_197120:
    // 0x197120: 0x3c020029
    ctx->pc = 0x197120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_197124:
    // 0x197124: 0x24424e60
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20064));
label_197128:
    // 0x197128: 0x31880
    ctx->pc = 0x197128u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_19712c:
    // 0x19712c: 0x431021
    ctx->pc = 0x19712cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197130:
    // 0x197130: 0x100000ca
label_197134:
    if (ctx->pc == 0x197134u) {
        ctx->pc = 0x197134u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x197138u;
        goto label_197138;
    }
    ctx->pc = 0x197130u;
    {
        const bool branch_taken_0x197130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197134u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x197130) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197138u;
label_197138:
    // 0x197138: 0x3c01002a
    ctx->pc = 0x197138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19713c:
    // 0x19713c: 0x24030080
    ctx->pc = 0x19713cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
label_197140:
    // 0x197140: 0x8c24fe70
    ctx->pc = 0x197140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_197144:
    // 0x197144: 0x30840080
    ctx->pc = 0x197144u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 128));
label_197148:
    // 0x197148: 0x148300c4
label_19714c:
    if (ctx->pc == 0x19714Cu) {
        ctx->pc = 0x197150u;
        goto label_197150;
    }
    ctx->pc = 0x197148u;
    {
        const bool branch_taken_0x197148 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x197148) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197150u;
label_197150:
    // 0x197150: 0x100000c2
label_197154:
    if (ctx->pc == 0x197154u) {
        ctx->pc = 0x197154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x197158u;
        goto label_197158;
    }
    ctx->pc = 0x197150u;
    {
        const bool branch_taken_0x197150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x197150) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197158u;
label_197158:
    // 0x197158: 0x3c01002a
    ctx->pc = 0x197158u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19715c:
    // 0x19715c: 0x8c22fe68
    ctx->pc = 0x19715cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_197160:
    // 0x197160: 0x100000be
label_197164:
    if (ctx->pc == 0x197164u) {
        ctx->pc = 0x197164u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3072));
        ctx->pc = 0x197168u;
        goto label_197168;
    }
    ctx->pc = 0x197160u;
    {
        const bool branch_taken_0x197160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197164u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3072));
        if (branch_taken_0x197160) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197168u;
label_197168:
    // 0x197168: 0x3c01002a
    ctx->pc = 0x197168u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19716c:
    // 0x19716c: 0x100000bb
label_197170:
    if (ctx->pc == 0x197170u) {
        ctx->pc = 0x197170u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966832)));
        ctx->pc = 0x197174u;
        goto label_197174;
    }
    ctx->pc = 0x19716Cu;
    {
        const bool branch_taken_0x19716c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197170u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966832)));
        if (branch_taken_0x19716c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197174u;
label_197174:
    // 0x197174: 0x3c01002a
    ctx->pc = 0x197174u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197178:
    // 0x197178: 0x100000b8
label_19717c:
    if (ctx->pc == 0x19717Cu) {
        ctx->pc = 0x19717Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966840)));
        ctx->pc = 0x197180u;
        goto label_197180;
    }
    ctx->pc = 0x197178u;
    {
        const bool branch_taken_0x197178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19717Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966840)));
        if (branch_taken_0x197178) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197180u;
label_197180:
    // 0x197180: 0x3c01002a
    ctx->pc = 0x197180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197184:
    // 0x197184: 0x3c030001
    ctx->pc = 0x197184u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_197188:
    // 0x197188: 0x8c25fe70
    ctx->pc = 0x197188u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_19718c:
    // 0x19718c: 0x34648000
    ctx->pc = 0x19718cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 32768));
label_197190:
    // 0x197190: 0x34038000
    ctx->pc = 0x197190u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_197194:
    // 0x197194: 0xa42024
    ctx->pc = 0x197194u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_197198:
    // 0x197198: 0x148300b0
label_19719c:
    if (ctx->pc == 0x19719Cu) {
        ctx->pc = 0x1971A0u;
        goto label_1971a0;
    }
    ctx->pc = 0x197198u;
    {
        const bool branch_taken_0x197198 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x197198) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1971A0u;
label_1971a0:
    // 0x1971a0: 0x100000ae
label_1971a4:
    if (ctx->pc == 0x1971A4u) {
        ctx->pc = 0x1971A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1971A8u;
        goto label_1971a8;
    }
    ctx->pc = 0x1971A0u;
    {
        const bool branch_taken_0x1971a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1971A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1971a0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1971A8u;
label_1971a8:
    // 0x1971a8: 0xc065d20
label_1971ac:
    if (ctx->pc == 0x1971ACu) {
        ctx->pc = 0x1971B0u;
        goto label_1971b0;
    }
    ctx->pc = 0x1971A8u;
    SET_GPR_U32(ctx, 31, 0x1971B0u);
    ctx->pc = 0x197480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197480_0x197480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1971B0u; }
    }
    if (ctx->pc != 0x1971B0u) { return; }
    ctx->pc = 0x1971B0u;
label_1971b0:
    // 0x1971b0: 0x100000aa
label_1971b4:
    if (ctx->pc == 0x1971B4u) {
        ctx->pc = 0x1971B8u;
        goto label_1971b8;
    }
    ctx->pc = 0x1971B0u;
    {
        const bool branch_taken_0x1971b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1971b0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1971B8u;
label_1971b8:
    // 0x1971b8: 0x3c01002a
    ctx->pc = 0x1971b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1971bc:
    // 0x1971bc: 0x8c22fe70
    ctx->pc = 0x1971bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_1971c0:
    // 0x1971c0: 0x30420003
    ctx->pc = 0x1971c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_1971c4:
    // 0x1971c4: 0x14400004
label_1971c8:
    if (ctx->pc == 0x1971C8u) {
        ctx->pc = 0x1971C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1971CCu;
        goto label_1971cc;
    }
    ctx->pc = 0x1971C4u;
    {
        const bool branch_taken_0x1971c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1971C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1971c4) {
            ctx->pc = 0x1971D8u;
            goto label_1971d8;
        }
    }
    ctx->pc = 0x1971CCu;
label_1971cc:
    // 0x1971cc: 0x100000a3
label_1971d0:
    if (ctx->pc == 0x1971D0u) {
        ctx->pc = 0x1971D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1971D4u;
        goto label_1971d4;
    }
    ctx->pc = 0x1971CCu;
    {
        const bool branch_taken_0x1971cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1971D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1971cc) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1971D4u;
label_1971d4:
    // 0x1971d4: 0x24030002
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1971d8:
    // 0x1971d8: 0x144300a0
label_1971dc:
    if (ctx->pc == 0x1971DCu) {
        ctx->pc = 0x1971E0u;
        goto label_1971e0;
    }
    ctx->pc = 0x1971D8u;
    {
        const bool branch_taken_0x1971d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1971d8) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1971E0u;
label_1971e0:
    // 0x1971e0: 0x1000009e
label_1971e4:
    if (ctx->pc == 0x1971E4u) {
        ctx->pc = 0x1971E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1971E8u;
        goto label_1971e8;
    }
    ctx->pc = 0x1971E0u;
    {
        const bool branch_taken_0x1971e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1971E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1971e0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1971E8u;
label_1971e8:
    // 0x1971e8: 0x2464ffa6
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967206));
label_1971ec:
    // 0x1971ec: 0x3c020029
    ctx->pc = 0x1971ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_1971f0:
    // 0x1971f0: 0x41840
    ctx->pc = 0x1971f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_1971f4:
    // 0x1971f4: 0x24424200
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16896));
label_1971f8:
    // 0x1971f8: 0x641821
    ctx->pc = 0x1971f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1971fc:
    // 0x1971fc: 0x31880
    ctx->pc = 0x1971fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_197200:
    // 0x197200: 0x641821
    ctx->pc = 0x197200u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197204:
    // 0x197204: 0x318c0
    ctx->pc = 0x197204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_197208:
    // 0x197208: 0x10000094
label_19720c:
    if (ctx->pc == 0x19720Cu) {
        ctx->pc = 0x19720Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x197210u;
        goto label_197210;
    }
    ctx->pc = 0x197208u;
    {
        const bool branch_taken_0x197208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19720Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x197208) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197210u;
label_197210:
    // 0x197210: 0x3c01002a
    ctx->pc = 0x197210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197214:
    // 0x197214: 0x3c02ff00
    ctx->pc = 0x197214u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_197218:
    // 0x197218: 0x8c23fe70
    ctx->pc = 0x197218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_19721c:
    // 0x19721c: 0x1000008f
label_197220:
    if (ctx->pc == 0x197220u) {
        ctx->pc = 0x197220u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x197224u;
        goto label_197224;
    }
    ctx->pc = 0x19721Cu;
    {
        const bool branch_taken_0x19721c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197220u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x19721c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197224u;
label_197224:
    // 0x197224: 0x3c01002a
    ctx->pc = 0x197224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197228:
    // 0x197228: 0x1000008c
label_19722c:
    if (ctx->pc == 0x19722Cu) {
        ctx->pc = 0x19722Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966888)));
        ctx->pc = 0x197230u;
        goto label_197230;
    }
    ctx->pc = 0x197228u;
    {
        const bool branch_taken_0x197228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19722Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966888)));
        if (branch_taken_0x197228) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197230u;
label_197230:
    // 0x197230: 0x3c01002a
    ctx->pc = 0x197230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197234:
    // 0x197234: 0x3c030038
    ctx->pc = 0x197234u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
label_197238:
    // 0x197238: 0x8c24fe68
    ctx->pc = 0x197238u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_19723c:
    // 0x19723c: 0x832024
    ctx->pc = 0x19723cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_197240:
    // 0x197240: 0x10830023
label_197244:
    if (ctx->pc == 0x197244u) {
        ctx->pc = 0x197248u;
        goto label_197248;
    }
    ctx->pc = 0x197240u;
    {
        const bool branch_taken_0x197240 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197240) {
            ctx->pc = 0x1972D0u;
            goto label_1972d0;
        }
    }
    ctx->pc = 0x197248u;
label_197248:
    // 0x197248: 0x3c030030
    ctx->pc = 0x197248u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
label_19724c:
    // 0x19724c: 0x1083001e
label_197250:
    if (ctx->pc == 0x197250u) {
        ctx->pc = 0x197254u;
        goto label_197254;
    }
    ctx->pc = 0x19724Cu;
    {
        const bool branch_taken_0x19724c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x19724c) {
            ctx->pc = 0x1972C8u;
            goto label_1972c8;
        }
    }
    ctx->pc = 0x197254u;
label_197254:
    // 0x197254: 0x3c030028
    ctx->pc = 0x197254u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
label_197258:
    // 0x197258: 0x10830019
label_19725c:
    if (ctx->pc == 0x19725Cu) {
        ctx->pc = 0x197260u;
        goto label_197260;
    }
    ctx->pc = 0x197258u;
    {
        const bool branch_taken_0x197258 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197258) {
            ctx->pc = 0x1972C0u;
            goto label_1972c0;
        }
    }
    ctx->pc = 0x197260u;
label_197260:
    // 0x197260: 0x3c030020
    ctx->pc = 0x197260u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
label_197264:
    // 0x197264: 0x10830014
label_197268:
    if (ctx->pc == 0x197268u) {
        ctx->pc = 0x19726Cu;
        goto label_19726c;
    }
    ctx->pc = 0x197264u;
    {
        const bool branch_taken_0x197264 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197264) {
            ctx->pc = 0x1972B8u;
            goto label_1972b8;
        }
    }
    ctx->pc = 0x19726Cu;
label_19726c:
    // 0x19726c: 0x3c030018
    ctx->pc = 0x19726cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
label_197270:
    // 0x197270: 0x1083000f
label_197274:
    if (ctx->pc == 0x197274u) {
        ctx->pc = 0x197278u;
        goto label_197278;
    }
    ctx->pc = 0x197270u;
    {
        const bool branch_taken_0x197270 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197270) {
            ctx->pc = 0x1972B0u;
            goto label_1972b0;
        }
    }
    ctx->pc = 0x197278u;
label_197278:
    // 0x197278: 0x3c030010
    ctx->pc = 0x197278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_19727c:
    // 0x19727c: 0x1083000a
label_197280:
    if (ctx->pc == 0x197280u) {
        ctx->pc = 0x197284u;
        goto label_197284;
    }
    ctx->pc = 0x19727Cu;
    {
        const bool branch_taken_0x19727c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x19727c) {
            ctx->pc = 0x1972A8u;
            goto label_1972a8;
        }
    }
    ctx->pc = 0x197284u;
label_197284:
    // 0x197284: 0x3c030008
    ctx->pc = 0x197284u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_197288:
    // 0x197288: 0x10830005
label_19728c:
    if (ctx->pc == 0x19728Cu) {
        ctx->pc = 0x197290u;
        goto label_197290;
    }
    ctx->pc = 0x197288u;
    {
        const bool branch_taken_0x197288 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197288) {
            ctx->pc = 0x1972A0u;
            goto label_1972a0;
        }
    }
    ctx->pc = 0x197290u;
label_197290:
    // 0x197290: 0x10800072
label_197294:
    if (ctx->pc == 0x197294u) {
        ctx->pc = 0x197298u;
        goto label_197298;
    }
    ctx->pc = 0x197290u;
    {
        const bool branch_taken_0x197290 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x197290) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197298u;
label_197298:
    // 0x197298: 0x10000070
label_19729c:
    if (ctx->pc == 0x19729Cu) {
        ctx->pc = 0x1972A0u;
        goto label_1972a0;
    }
    ctx->pc = 0x197298u;
    {
        const bool branch_taken_0x197298 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x197298) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972A0u;
label_1972a0:
    // 0x1972a0: 0x1000006e
label_1972a4:
    if (ctx->pc == 0x1972A4u) {
        ctx->pc = 0x1972A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1972A8u;
        goto label_1972a8;
    }
    ctx->pc = 0x1972A0u;
    {
        const bool branch_taken_0x1972a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1972a0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972A8u;
label_1972a8:
    // 0x1972a8: 0x1000006c
label_1972ac:
    if (ctx->pc == 0x1972ACu) {
        ctx->pc = 0x1972ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1972B0u;
        goto label_1972b0;
    }
    ctx->pc = 0x1972A8u;
    {
        const bool branch_taken_0x1972a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1972a8) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972B0u;
label_1972b0:
    // 0x1972b0: 0x1000006a
label_1972b4:
    if (ctx->pc == 0x1972B4u) {
        ctx->pc = 0x1972B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1972B8u;
        goto label_1972b8;
    }
    ctx->pc = 0x1972B0u;
    {
        const bool branch_taken_0x1972b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1972b0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972B8u;
label_1972b8:
    // 0x1972b8: 0x10000068
label_1972bc:
    if (ctx->pc == 0x1972BCu) {
        ctx->pc = 0x1972BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1972C0u;
        goto label_1972c0;
    }
    ctx->pc = 0x1972B8u;
    {
        const bool branch_taken_0x1972b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1972b8) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972C0u;
label_1972c0:
    // 0x1972c0: 0x10000066
label_1972c4:
    if (ctx->pc == 0x1972C4u) {
        ctx->pc = 0x1972C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1972C8u;
        goto label_1972c8;
    }
    ctx->pc = 0x1972C0u;
    {
        const bool branch_taken_0x1972c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1972c0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972C8u;
label_1972c8:
    // 0x1972c8: 0x10000064
label_1972cc:
    if (ctx->pc == 0x1972CCu) {
        ctx->pc = 0x1972CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1972D0u;
        goto label_1972d0;
    }
    ctx->pc = 0x1972C8u;
    {
        const bool branch_taken_0x1972c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1972c8) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972D0u;
label_1972d0:
    // 0x1972d0: 0x10000062
label_1972d4:
    if (ctx->pc == 0x1972D4u) {
        ctx->pc = 0x1972D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1972D8u;
        goto label_1972d8;
    }
    ctx->pc = 0x1972D0u;
    {
        const bool branch_taken_0x1972d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1972d0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972D8u;
label_1972d8:
    // 0x1972d8: 0x3c01002a
    ctx->pc = 0x1972d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1972dc:
    // 0x1972dc: 0x1000005f
label_1972e0:
    if (ctx->pc == 0x1972E0u) {
        ctx->pc = 0x1972E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966816)));
        ctx->pc = 0x1972E4u;
        goto label_1972e4;
    }
    ctx->pc = 0x1972DCu;
    {
        const bool branch_taken_0x1972dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1972E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966816)));
        if (branch_taken_0x1972dc) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972E4u;
label_1972e4:
    // 0x1972e4: 0x3c01002a
    ctx->pc = 0x1972e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1972e8:
    // 0x1972e8: 0x3c040100
    ctx->pc = 0x1972e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)256 << 16));
label_1972ec:
    // 0x1972ec: 0x8c23fe68
    ctx->pc = 0x1972ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_1972f0:
    // 0x1972f0: 0x641824
    ctx->pc = 0x1972f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1972f4:
    // 0x1972f4: 0x14640059
label_1972f8:
    if (ctx->pc == 0x1972F8u) {
        ctx->pc = 0x1972FCu;
        goto label_1972fc;
    }
    ctx->pc = 0x1972F4u;
    {
        const bool branch_taken_0x1972f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1972f4) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1972FCu;
label_1972fc:
    // 0x1972fc: 0x10000057
label_197300:
    if (ctx->pc == 0x197300u) {
        ctx->pc = 0x197300u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x197304u;
        goto label_197304;
    }
    ctx->pc = 0x1972FCu;
    {
        const bool branch_taken_0x1972fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197300u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1972fc) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197304u;
label_197304:
    // 0x197304: 0x3c01002a
    ctx->pc = 0x197304u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197308:
    // 0x197308: 0x24034000
    ctx->pc = 0x197308u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
label_19730c:
    // 0x19730c: 0x8c24fe70
    ctx->pc = 0x19730cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_197310:
    // 0x197310: 0x30844000
    ctx->pc = 0x197310u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 16384));
label_197314:
    // 0x197314: 0x14830051
label_197318:
    if (ctx->pc == 0x197318u) {
        ctx->pc = 0x19731Cu;
        goto label_19731c;
    }
    ctx->pc = 0x197314u;
    {
        const bool branch_taken_0x197314 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x197314) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19731Cu;
label_19731c:
    // 0x19731c: 0x1000004f
label_197320:
    if (ctx->pc == 0x197320u) {
        ctx->pc = 0x197320u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x197324u;
        goto label_197324;
    }
    ctx->pc = 0x19731Cu;
    {
        const bool branch_taken_0x19731c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197320u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19731c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197324u;
label_197324:
    // 0x197324: 0x3c01002a
    ctx->pc = 0x197324u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197328:
    // 0x197328: 0x3c020001
    ctx->pc = 0x197328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_19732c:
    // 0x19732c: 0x8c23fe68
    ctx->pc = 0x19732cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_197330:
    // 0x197330: 0x1000004a
label_197334:
    if (ctx->pc == 0x197334u) {
        ctx->pc = 0x197334u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x197338u;
        goto label_197338;
    }
    ctx->pc = 0x197330u;
    {
        const bool branch_taken_0x197330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197334u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x197330) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197338u;
label_197338:
    // 0x197338: 0x3c01002a
    ctx->pc = 0x197338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19733c:
    // 0x19733c: 0x3c020006
    ctx->pc = 0x19733cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)6 << 16));
label_197340:
    // 0x197340: 0x8c23fe68
    ctx->pc = 0x197340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_197344:
    // 0x197344: 0x10000045
label_197348:
    if (ctx->pc == 0x197348u) {
        ctx->pc = 0x197348u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19734Cu;
        goto label_19734c;
    }
    ctx->pc = 0x197344u;
    {
        const bool branch_taken_0x197344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197348u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x197344) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19734Cu;
label_19734c:
    // 0x19734c: 0x3c01002a
    ctx->pc = 0x19734cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197350:
    // 0x197350: 0x3c040002
    ctx->pc = 0x197350u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
label_197354:
    // 0x197354: 0x8c23fe70
    ctx->pc = 0x197354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966896)));
label_197358:
    // 0x197358: 0x641824
    ctx->pc = 0x197358u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19735c:
    // 0x19735c: 0x1464003f
label_197360:
    if (ctx->pc == 0x197360u) {
        ctx->pc = 0x197364u;
        goto label_197364;
    }
    ctx->pc = 0x19735Cu;
    {
        const bool branch_taken_0x19735c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x19735c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197364u;
label_197364:
    // 0x197364: 0x1000003d
label_197368:
    if (ctx->pc == 0x197368u) {
        ctx->pc = 0x197368u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19736Cu;
        goto label_19736c;
    }
    ctx->pc = 0x197364u;
    {
        const bool branch_taken_0x197364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197368u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x197364) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x19736Cu;
label_19736c:
    // 0x19736c: 0x3c010029
    ctx->pc = 0x19736cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_197370:
    // 0x197370: 0x1000003a
label_197374:
    if (ctx->pc == 0x197374u) {
        ctx->pc = 0x197374u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
        ctx->pc = 0x197378u;
        goto label_197378;
    }
    ctx->pc = 0x197370u;
    {
        const bool branch_taken_0x197370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197374u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
        if (branch_taken_0x197370) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197378u;
label_197378:
    // 0x197378: 0x3c010029
    ctx->pc = 0x197378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_19737c:
    // 0x19737c: 0x10000037
label_197380:
    if (ctx->pc == 0x197380u) {
        ctx->pc = 0x197380u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20072)));
        ctx->pc = 0x197384u;
        goto label_197384;
    }
    ctx->pc = 0x19737Cu;
    {
        const bool branch_taken_0x19737c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197380u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 20072)));
        if (branch_taken_0x19737c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197384u;
label_197384:
    // 0x197384: 0x3c01002a
    ctx->pc = 0x197384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_197388:
    // 0x197388: 0x3c0200c0
    ctx->pc = 0x197388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)192 << 16));
label_19738c:
    // 0x19738c: 0x8c23fe68
    ctx->pc = 0x19738cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_197390:
    // 0x197390: 0x10000032
label_197394:
    if (ctx->pc == 0x197394u) {
        ctx->pc = 0x197394u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x197398u;
        goto label_197398;
    }
    ctx->pc = 0x197390u;
    {
        const bool branch_taken_0x197390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197394u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x197390) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197398u;
label_197398:
    // 0x197398: 0x3c01002a
    ctx->pc = 0x197398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_19739c:
    // 0x19739c: 0x34038000
    ctx->pc = 0x19739cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_1973a0:
    // 0x1973a0: 0x8c24fe68
    ctx->pc = 0x1973a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_1973a4:
    // 0x1973a4: 0x30848000
    ctx->pc = 0x1973a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 32768));
label_1973a8:
    // 0x1973a8: 0x1483002c
label_1973ac:
    if (ctx->pc == 0x1973ACu) {
        ctx->pc = 0x1973B0u;
        goto label_1973b0;
    }
    ctx->pc = 0x1973A8u;
    {
        const bool branch_taken_0x1973a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1973a8) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1973B0u;
label_1973b0:
    // 0x1973b0: 0x1000002a
label_1973b4:
    if (ctx->pc == 0x1973B4u) {
        ctx->pc = 0x1973B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1973B8u;
        goto label_1973b8;
    }
    ctx->pc = 0x1973B0u;
    {
        const bool branch_taken_0x1973b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1973B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1973b0) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x1973B8u;
label_1973b8:
    // 0x1973b8: 0x3c01002a
    ctx->pc = 0x1973b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
label_1973bc:
    // 0x1973bc: 0x24037000
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28672));
label_1973c0:
    // 0x1973c0: 0x8c24fe68
    ctx->pc = 0x1973c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
label_1973c4:
    // 0x1973c4: 0x30847000
    ctx->pc = 0x1973c4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 28672));
label_1973c8:
    // 0x1973c8: 0x10830023
label_1973cc:
    if (ctx->pc == 0x1973CCu) {
        ctx->pc = 0x1973D0u;
        goto label_1973d0;
    }
    ctx->pc = 0x1973C8u;
    {
        const bool branch_taken_0x1973c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1973c8) {
            ctx->pc = 0x197458u;
            goto label_197458;
        }
    }
    ctx->pc = 0x1973D0u;
label_1973d0:
    // 0x1973d0: 0x24036000
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24576));
label_1973d4:
    // 0x1973d4: 0x1083001e
label_1973d8:
    if (ctx->pc == 0x1973D8u) {
        ctx->pc = 0x1973DCu;
        goto label_1973dc;
    }
    ctx->pc = 0x1973D4u;
    {
        const bool branch_taken_0x1973d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1973d4) {
            ctx->pc = 0x197450u;
            goto label_197450;
        }
    }
    ctx->pc = 0x1973DCu;
label_1973dc:
    // 0x1973dc: 0x24035000
    ctx->pc = 0x1973dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20480));
label_1973e0:
    // 0x1973e0: 0x10830019
label_1973e4:
    if (ctx->pc == 0x1973E4u) {
        ctx->pc = 0x1973E8u;
        goto label_1973e8;
    }
    ctx->pc = 0x1973E0u;
    {
        const bool branch_taken_0x1973e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1973e0) {
            ctx->pc = 0x197448u;
            goto label_197448;
        }
    }
    ctx->pc = 0x1973E8u;
label_1973e8:
    // 0x1973e8: 0x24034000
    ctx->pc = 0x1973e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
label_1973ec:
    // 0x1973ec: 0x10830014
label_1973f0:
    if (ctx->pc == 0x1973F0u) {
        ctx->pc = 0x1973F4u;
        goto label_1973f4;
    }
    ctx->pc = 0x1973ECu;
    {
        const bool branch_taken_0x1973ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1973ec) {
            ctx->pc = 0x197440u;
            goto label_197440;
        }
    }
    ctx->pc = 0x1973F4u;
label_1973f4:
    // 0x1973f4: 0x24033000
    ctx->pc = 0x1973f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12288));
label_1973f8:
    // 0x1973f8: 0x1083000f
label_1973fc:
    if (ctx->pc == 0x1973FCu) {
        ctx->pc = 0x197400u;
        goto label_197400;
    }
    ctx->pc = 0x1973F8u;
    {
        const bool branch_taken_0x1973f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1973f8) {
            ctx->pc = 0x197438u;
            goto label_197438;
        }
    }
    ctx->pc = 0x197400u;
label_197400:
    // 0x197400: 0x24032000
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8192));
label_197404:
    // 0x197404: 0x1083000a
label_197408:
    if (ctx->pc == 0x197408u) {
        ctx->pc = 0x19740Cu;
        goto label_19740c;
    }
    ctx->pc = 0x197404u;
    {
        const bool branch_taken_0x197404 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197404) {
            ctx->pc = 0x197430u;
            goto label_197430;
        }
    }
    ctx->pc = 0x19740Cu;
label_19740c:
    // 0x19740c: 0x24031000
    ctx->pc = 0x19740cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
label_197410:
    // 0x197410: 0x10830005
label_197414:
    if (ctx->pc == 0x197414u) {
        ctx->pc = 0x197418u;
        goto label_197418;
    }
    ctx->pc = 0x197410u;
    {
        const bool branch_taken_0x197410 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x197410) {
            ctx->pc = 0x197428u;
            goto label_197428;
        }
    }
    ctx->pc = 0x197418u;
label_197418:
    // 0x197418: 0x10800010
label_19741c:
    if (ctx->pc == 0x19741Cu) {
        ctx->pc = 0x197420u;
        goto label_197420;
    }
    ctx->pc = 0x197418u;
    {
        const bool branch_taken_0x197418 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x197418) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197420u;
label_197420:
    // 0x197420: 0x1000000e
label_197424:
    if (ctx->pc == 0x197424u) {
        ctx->pc = 0x197428u;
        goto label_197428;
    }
    ctx->pc = 0x197420u;
    {
        const bool branch_taken_0x197420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x197420) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197428u;
label_197428:
    // 0x197428: 0x1000000c
label_19742c:
    if (ctx->pc == 0x19742Cu) {
        ctx->pc = 0x19742Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x197430u;
        goto label_197430;
    }
    ctx->pc = 0x197428u;
    {
        const bool branch_taken_0x197428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19742Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x197428) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197430u;
label_197430:
    // 0x197430: 0x1000000a
label_197434:
    if (ctx->pc == 0x197434u) {
        ctx->pc = 0x197434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x197438u;
        goto label_197438;
    }
    ctx->pc = 0x197430u;
    {
        const bool branch_taken_0x197430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x197430) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197438u;
label_197438:
    // 0x197438: 0x10000008
label_19743c:
    if (ctx->pc == 0x19743Cu) {
        ctx->pc = 0x19743Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x197440u;
        goto label_197440;
    }
    ctx->pc = 0x197438u;
    {
        const bool branch_taken_0x197438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19743Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x197438) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197440u;
label_197440:
    // 0x197440: 0x10000006
label_197444:
    if (ctx->pc == 0x197444u) {
        ctx->pc = 0x197444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x197448u;
        goto label_197448;
    }
    ctx->pc = 0x197440u;
    {
        const bool branch_taken_0x197440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x197440) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197448u;
label_197448:
    // 0x197448: 0x10000004
label_19744c:
    if (ctx->pc == 0x19744Cu) {
        ctx->pc = 0x19744Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x197450u;
        goto label_197450;
    }
    ctx->pc = 0x197448u;
    {
        const bool branch_taken_0x197448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19744Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x197448) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197450u;
label_197450:
    // 0x197450: 0x10000002
label_197454:
    if (ctx->pc == 0x197454u) {
        ctx->pc = 0x197454u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x197458u;
        goto label_197458;
    }
    ctx->pc = 0x197450u;
    {
        const bool branch_taken_0x197450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197454u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x197450) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197458u;
label_197458:
    // 0x197458: 0x24020007
    ctx->pc = 0x197458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_19745c:
    // 0x19745c: 0xdfbf0000
    ctx->pc = 0x19745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197460:
    // 0x197460: 0x3e00008
label_197464:
    if (ctx->pc == 0x197464u) {
        ctx->pc = 0x197464u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x197468u;
        goto label_197468;
    }
    ctx->pc = 0x197460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197464u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196010u: goto label_196010;
            case 0x196014u: goto label_196014;
            case 0x196018u: goto label_196018;
            case 0x19601Cu: goto label_19601c;
            case 0x196020u: goto label_196020;
            case 0x196024u: goto label_196024;
            case 0x196028u: goto label_196028;
            case 0x19602Cu: goto label_19602c;
            case 0x196030u: goto label_196030;
            case 0x196034u: goto label_196034;
            case 0x196038u: goto label_196038;
            case 0x19603Cu: goto label_19603c;
            case 0x196040u: goto label_196040;
            case 0x196044u: goto label_196044;
            case 0x196048u: goto label_196048;
            case 0x19604Cu: goto label_19604c;
            case 0x196050u: goto label_196050;
            case 0x196054u: goto label_196054;
            case 0x196058u: goto label_196058;
            case 0x19605Cu: goto label_19605c;
            case 0x196060u: goto label_196060;
            case 0x196064u: goto label_196064;
            case 0x196068u: goto label_196068;
            case 0x19606Cu: goto label_19606c;
            case 0x196070u: goto label_196070;
            case 0x196074u: goto label_196074;
            case 0x196078u: goto label_196078;
            case 0x19607Cu: goto label_19607c;
            case 0x196080u: goto label_196080;
            case 0x196084u: goto label_196084;
            case 0x196088u: goto label_196088;
            case 0x19608Cu: goto label_19608c;
            case 0x196090u: goto label_196090;
            case 0x196094u: goto label_196094;
            case 0x196098u: goto label_196098;
            case 0x19609Cu: goto label_19609c;
            case 0x1960A0u: goto label_1960a0;
            case 0x1960A4u: goto label_1960a4;
            case 0x1960A8u: goto label_1960a8;
            case 0x1960ACu: goto label_1960ac;
            case 0x1960B0u: goto label_1960b0;
            case 0x1960B4u: goto label_1960b4;
            case 0x1960B8u: goto label_1960b8;
            case 0x1960BCu: goto label_1960bc;
            case 0x1960C0u: goto label_1960c0;
            case 0x1960C4u: goto label_1960c4;
            case 0x1960C8u: goto label_1960c8;
            case 0x1960CCu: goto label_1960cc;
            case 0x1960D0u: goto label_1960d0;
            case 0x1960D4u: goto label_1960d4;
            case 0x1960D8u: goto label_1960d8;
            case 0x1960DCu: goto label_1960dc;
            case 0x1960E0u: goto label_1960e0;
            case 0x1960E4u: goto label_1960e4;
            case 0x1960E8u: goto label_1960e8;
            case 0x1960ECu: goto label_1960ec;
            case 0x1960F0u: goto label_1960f0;
            case 0x1960F4u: goto label_1960f4;
            case 0x1960F8u: goto label_1960f8;
            case 0x1960FCu: goto label_1960fc;
            case 0x196100u: goto label_196100;
            case 0x196104u: goto label_196104;
            case 0x196108u: goto label_196108;
            case 0x19610Cu: goto label_19610c;
            case 0x196110u: goto label_196110;
            case 0x196114u: goto label_196114;
            case 0x196118u: goto label_196118;
            case 0x19611Cu: goto label_19611c;
            case 0x196120u: goto label_196120;
            case 0x196124u: goto label_196124;
            case 0x196128u: goto label_196128;
            case 0x19612Cu: goto label_19612c;
            case 0x196130u: goto label_196130;
            case 0x196134u: goto label_196134;
            case 0x196138u: goto label_196138;
            case 0x19613Cu: goto label_19613c;
            case 0x196140u: goto label_196140;
            case 0x196144u: goto label_196144;
            case 0x196148u: goto label_196148;
            case 0x19614Cu: goto label_19614c;
            case 0x196150u: goto label_196150;
            case 0x196154u: goto label_196154;
            case 0x196158u: goto label_196158;
            case 0x19615Cu: goto label_19615c;
            case 0x196160u: goto label_196160;
            case 0x196164u: goto label_196164;
            case 0x196168u: goto label_196168;
            case 0x19616Cu: goto label_19616c;
            case 0x196170u: goto label_196170;
            case 0x196174u: goto label_196174;
            case 0x196178u: goto label_196178;
            case 0x19617Cu: goto label_19617c;
            case 0x196180u: goto label_196180;
            case 0x196184u: goto label_196184;
            case 0x196188u: goto label_196188;
            case 0x19618Cu: goto label_19618c;
            case 0x196190u: goto label_196190;
            case 0x196194u: goto label_196194;
            case 0x196198u: goto label_196198;
            case 0x19619Cu: goto label_19619c;
            case 0x1961A0u: goto label_1961a0;
            case 0x1961A4u: goto label_1961a4;
            case 0x1961A8u: goto label_1961a8;
            case 0x1961ACu: goto label_1961ac;
            case 0x1961B0u: goto label_1961b0;
            case 0x1961B4u: goto label_1961b4;
            case 0x1961B8u: goto label_1961b8;
            case 0x1961BCu: goto label_1961bc;
            case 0x1961C0u: goto label_1961c0;
            case 0x1961C4u: goto label_1961c4;
            case 0x1961C8u: goto label_1961c8;
            case 0x1961CCu: goto label_1961cc;
            case 0x1961D0u: goto label_1961d0;
            case 0x1961D4u: goto label_1961d4;
            case 0x1961D8u: goto label_1961d8;
            case 0x1961DCu: goto label_1961dc;
            case 0x1961E0u: goto label_1961e0;
            case 0x1961E4u: goto label_1961e4;
            case 0x1961E8u: goto label_1961e8;
            case 0x1961ECu: goto label_1961ec;
            case 0x1961F0u: goto label_1961f0;
            case 0x1961F4u: goto label_1961f4;
            case 0x1961F8u: goto label_1961f8;
            case 0x1961FCu: goto label_1961fc;
            case 0x196200u: goto label_196200;
            case 0x196204u: goto label_196204;
            case 0x196208u: goto label_196208;
            case 0x19620Cu: goto label_19620c;
            case 0x196210u: goto label_196210;
            case 0x196214u: goto label_196214;
            case 0x196218u: goto label_196218;
            case 0x19621Cu: goto label_19621c;
            case 0x196220u: goto label_196220;
            case 0x196224u: goto label_196224;
            case 0x196228u: goto label_196228;
            case 0x19622Cu: goto label_19622c;
            case 0x196230u: goto label_196230;
            case 0x196234u: goto label_196234;
            case 0x196238u: goto label_196238;
            case 0x19623Cu: goto label_19623c;
            case 0x196240u: goto label_196240;
            case 0x196244u: goto label_196244;
            case 0x196248u: goto label_196248;
            case 0x19624Cu: goto label_19624c;
            case 0x196250u: goto label_196250;
            case 0x196254u: goto label_196254;
            case 0x196258u: goto label_196258;
            case 0x19625Cu: goto label_19625c;
            case 0x196260u: goto label_196260;
            case 0x196264u: goto label_196264;
            case 0x196268u: goto label_196268;
            case 0x19626Cu: goto label_19626c;
            case 0x196270u: goto label_196270;
            case 0x196274u: goto label_196274;
            case 0x196278u: goto label_196278;
            case 0x19627Cu: goto label_19627c;
            case 0x196280u: goto label_196280;
            case 0x196284u: goto label_196284;
            case 0x196288u: goto label_196288;
            case 0x19628Cu: goto label_19628c;
            case 0x196290u: goto label_196290;
            case 0x196294u: goto label_196294;
            case 0x196298u: goto label_196298;
            case 0x19629Cu: goto label_19629c;
            case 0x1962A0u: goto label_1962a0;
            case 0x1962A4u: goto label_1962a4;
            case 0x1962A8u: goto label_1962a8;
            case 0x1962ACu: goto label_1962ac;
            case 0x1962B0u: goto label_1962b0;
            case 0x1962B4u: goto label_1962b4;
            case 0x1962B8u: goto label_1962b8;
            case 0x1962BCu: goto label_1962bc;
            case 0x1962C0u: goto label_1962c0;
            case 0x1962C4u: goto label_1962c4;
            case 0x1962C8u: goto label_1962c8;
            case 0x1962CCu: goto label_1962cc;
            case 0x1962D0u: goto label_1962d0;
            case 0x1962D4u: goto label_1962d4;
            case 0x1962D8u: goto label_1962d8;
            case 0x1962DCu: goto label_1962dc;
            case 0x1962E0u: goto label_1962e0;
            case 0x1962E4u: goto label_1962e4;
            case 0x1962E8u: goto label_1962e8;
            case 0x1962ECu: goto label_1962ec;
            case 0x1962F0u: goto label_1962f0;
            case 0x1962F4u: goto label_1962f4;
            case 0x1962F8u: goto label_1962f8;
            case 0x1962FCu: goto label_1962fc;
            case 0x196300u: goto label_196300;
            case 0x196304u: goto label_196304;
            case 0x196308u: goto label_196308;
            case 0x19630Cu: goto label_19630c;
            case 0x196310u: goto label_196310;
            case 0x196314u: goto label_196314;
            case 0x196318u: goto label_196318;
            case 0x19631Cu: goto label_19631c;
            case 0x196320u: goto label_196320;
            case 0x196324u: goto label_196324;
            case 0x196328u: goto label_196328;
            case 0x19632Cu: goto label_19632c;
            case 0x196330u: goto label_196330;
            case 0x196334u: goto label_196334;
            case 0x196338u: goto label_196338;
            case 0x19633Cu: goto label_19633c;
            case 0x196340u: goto label_196340;
            case 0x196344u: goto label_196344;
            case 0x196348u: goto label_196348;
            case 0x19634Cu: goto label_19634c;
            case 0x196350u: goto label_196350;
            case 0x196354u: goto label_196354;
            case 0x196358u: goto label_196358;
            case 0x19635Cu: goto label_19635c;
            case 0x196360u: goto label_196360;
            case 0x196364u: goto label_196364;
            case 0x196368u: goto label_196368;
            case 0x19636Cu: goto label_19636c;
            case 0x196370u: goto label_196370;
            case 0x196374u: goto label_196374;
            case 0x196378u: goto label_196378;
            case 0x19637Cu: goto label_19637c;
            case 0x196380u: goto label_196380;
            case 0x196384u: goto label_196384;
            case 0x196388u: goto label_196388;
            case 0x19638Cu: goto label_19638c;
            case 0x196390u: goto label_196390;
            case 0x196394u: goto label_196394;
            case 0x196398u: goto label_196398;
            case 0x19639Cu: goto label_19639c;
            case 0x1963A0u: goto label_1963a0;
            case 0x1963A4u: goto label_1963a4;
            case 0x1963A8u: goto label_1963a8;
            case 0x1963ACu: goto label_1963ac;
            case 0x1963B0u: goto label_1963b0;
            case 0x1963B4u: goto label_1963b4;
            case 0x1963B8u: goto label_1963b8;
            case 0x1963BCu: goto label_1963bc;
            case 0x1963C0u: goto label_1963c0;
            case 0x1963C4u: goto label_1963c4;
            case 0x1963C8u: goto label_1963c8;
            case 0x1963CCu: goto label_1963cc;
            case 0x1963D0u: goto label_1963d0;
            case 0x1963D4u: goto label_1963d4;
            case 0x1963D8u: goto label_1963d8;
            case 0x1963DCu: goto label_1963dc;
            case 0x1963E0u: goto label_1963e0;
            case 0x1963E4u: goto label_1963e4;
            case 0x1963E8u: goto label_1963e8;
            case 0x1963ECu: goto label_1963ec;
            case 0x1963F0u: goto label_1963f0;
            case 0x1963F4u: goto label_1963f4;
            case 0x1963F8u: goto label_1963f8;
            case 0x1963FCu: goto label_1963fc;
            case 0x196400u: goto label_196400;
            case 0x196404u: goto label_196404;
            case 0x196408u: goto label_196408;
            case 0x19640Cu: goto label_19640c;
            case 0x196410u: goto label_196410;
            case 0x196414u: goto label_196414;
            case 0x196418u: goto label_196418;
            case 0x19641Cu: goto label_19641c;
            case 0x196420u: goto label_196420;
            case 0x196424u: goto label_196424;
            case 0x196428u: goto label_196428;
            case 0x19642Cu: goto label_19642c;
            case 0x196430u: goto label_196430;
            case 0x196434u: goto label_196434;
            case 0x196438u: goto label_196438;
            case 0x19643Cu: goto label_19643c;
            case 0x196440u: goto label_196440;
            case 0x196444u: goto label_196444;
            case 0x196448u: goto label_196448;
            case 0x19644Cu: goto label_19644c;
            case 0x196450u: goto label_196450;
            case 0x196454u: goto label_196454;
            case 0x196458u: goto label_196458;
            case 0x19645Cu: goto label_19645c;
            case 0x196460u: goto label_196460;
            case 0x196464u: goto label_196464;
            case 0x196468u: goto label_196468;
            case 0x19646Cu: goto label_19646c;
            case 0x196470u: goto label_196470;
            case 0x196474u: goto label_196474;
            case 0x196478u: goto label_196478;
            case 0x19647Cu: goto label_19647c;
            case 0x196480u: goto label_196480;
            case 0x196484u: goto label_196484;
            case 0x196488u: goto label_196488;
            case 0x19648Cu: goto label_19648c;
            case 0x196490u: goto label_196490;
            case 0x196494u: goto label_196494;
            case 0x196498u: goto label_196498;
            case 0x19649Cu: goto label_19649c;
            case 0x1964A0u: goto label_1964a0;
            case 0x1964A4u: goto label_1964a4;
            case 0x1964A8u: goto label_1964a8;
            case 0x1964ACu: goto label_1964ac;
            case 0x1964B0u: goto label_1964b0;
            case 0x1964B4u: goto label_1964b4;
            case 0x1964B8u: goto label_1964b8;
            case 0x1964BCu: goto label_1964bc;
            case 0x1964C0u: goto label_1964c0;
            case 0x1964C4u: goto label_1964c4;
            case 0x1964C8u: goto label_1964c8;
            case 0x1964CCu: goto label_1964cc;
            case 0x1964D0u: goto label_1964d0;
            case 0x1964D4u: goto label_1964d4;
            case 0x1964D8u: goto label_1964d8;
            case 0x1964DCu: goto label_1964dc;
            case 0x1964E0u: goto label_1964e0;
            case 0x1964E4u: goto label_1964e4;
            case 0x1964E8u: goto label_1964e8;
            case 0x1964ECu: goto label_1964ec;
            case 0x1964F0u: goto label_1964f0;
            case 0x1964F4u: goto label_1964f4;
            case 0x1964F8u: goto label_1964f8;
            case 0x1964FCu: goto label_1964fc;
            case 0x196500u: goto label_196500;
            case 0x196504u: goto label_196504;
            case 0x196508u: goto label_196508;
            case 0x19650Cu: goto label_19650c;
            case 0x196510u: goto label_196510;
            case 0x196514u: goto label_196514;
            case 0x196518u: goto label_196518;
            case 0x19651Cu: goto label_19651c;
            case 0x196520u: goto label_196520;
            case 0x196524u: goto label_196524;
            case 0x196528u: goto label_196528;
            case 0x19652Cu: goto label_19652c;
            case 0x196530u: goto label_196530;
            case 0x196534u: goto label_196534;
            case 0x196538u: goto label_196538;
            case 0x19653Cu: goto label_19653c;
            case 0x196540u: goto label_196540;
            case 0x196544u: goto label_196544;
            case 0x196548u: goto label_196548;
            case 0x19654Cu: goto label_19654c;
            case 0x196550u: goto label_196550;
            case 0x196554u: goto label_196554;
            case 0x196558u: goto label_196558;
            case 0x19655Cu: goto label_19655c;
            case 0x196560u: goto label_196560;
            case 0x196564u: goto label_196564;
            case 0x196568u: goto label_196568;
            case 0x19656Cu: goto label_19656c;
            case 0x196570u: goto label_196570;
            case 0x196574u: goto label_196574;
            case 0x196578u: goto label_196578;
            case 0x19657Cu: goto label_19657c;
            case 0x196580u: goto label_196580;
            case 0x196584u: goto label_196584;
            case 0x196588u: goto label_196588;
            case 0x19658Cu: goto label_19658c;
            case 0x196590u: goto label_196590;
            case 0x196594u: goto label_196594;
            case 0x196598u: goto label_196598;
            case 0x19659Cu: goto label_19659c;
            case 0x1965A0u: goto label_1965a0;
            case 0x1965A4u: goto label_1965a4;
            case 0x1965A8u: goto label_1965a8;
            case 0x1965ACu: goto label_1965ac;
            case 0x1965B0u: goto label_1965b0;
            case 0x1965B4u: goto label_1965b4;
            case 0x1965B8u: goto label_1965b8;
            case 0x1965BCu: goto label_1965bc;
            case 0x1965C0u: goto label_1965c0;
            case 0x1965C4u: goto label_1965c4;
            case 0x1965C8u: goto label_1965c8;
            case 0x1965CCu: goto label_1965cc;
            case 0x1965D0u: goto label_1965d0;
            case 0x1965D4u: goto label_1965d4;
            case 0x1965D8u: goto label_1965d8;
            case 0x1965DCu: goto label_1965dc;
            case 0x1965E0u: goto label_1965e0;
            case 0x1965E4u: goto label_1965e4;
            case 0x1965E8u: goto label_1965e8;
            case 0x1965ECu: goto label_1965ec;
            case 0x1965F0u: goto label_1965f0;
            case 0x1965F4u: goto label_1965f4;
            case 0x1965F8u: goto label_1965f8;
            case 0x1965FCu: goto label_1965fc;
            case 0x196600u: goto label_196600;
            case 0x196604u: goto label_196604;
            case 0x196608u: goto label_196608;
            case 0x19660Cu: goto label_19660c;
            case 0x196610u: goto label_196610;
            case 0x196614u: goto label_196614;
            case 0x196618u: goto label_196618;
            case 0x19661Cu: goto label_19661c;
            case 0x196620u: goto label_196620;
            case 0x196624u: goto label_196624;
            case 0x196628u: goto label_196628;
            case 0x19662Cu: goto label_19662c;
            case 0x196630u: goto label_196630;
            case 0x196634u: goto label_196634;
            case 0x196638u: goto label_196638;
            case 0x19663Cu: goto label_19663c;
            case 0x196640u: goto label_196640;
            case 0x196644u: goto label_196644;
            case 0x196648u: goto label_196648;
            case 0x19664Cu: goto label_19664c;
            case 0x196650u: goto label_196650;
            case 0x196654u: goto label_196654;
            case 0x196658u: goto label_196658;
            case 0x19665Cu: goto label_19665c;
            case 0x196660u: goto label_196660;
            case 0x196664u: goto label_196664;
            case 0x196668u: goto label_196668;
            case 0x19666Cu: goto label_19666c;
            case 0x196670u: goto label_196670;
            case 0x196674u: goto label_196674;
            case 0x196678u: goto label_196678;
            case 0x19667Cu: goto label_19667c;
            case 0x196680u: goto label_196680;
            case 0x196684u: goto label_196684;
            case 0x196688u: goto label_196688;
            case 0x19668Cu: goto label_19668c;
            case 0x196690u: goto label_196690;
            case 0x196694u: goto label_196694;
            case 0x196698u: goto label_196698;
            case 0x19669Cu: goto label_19669c;
            case 0x1966A0u: goto label_1966a0;
            case 0x1966A4u: goto label_1966a4;
            case 0x1966A8u: goto label_1966a8;
            case 0x1966ACu: goto label_1966ac;
            case 0x1966B0u: goto label_1966b0;
            case 0x1966B4u: goto label_1966b4;
            case 0x1966B8u: goto label_1966b8;
            case 0x1966BCu: goto label_1966bc;
            case 0x1966C0u: goto label_1966c0;
            case 0x1966C4u: goto label_1966c4;
            case 0x1966C8u: goto label_1966c8;
            case 0x1966CCu: goto label_1966cc;
            case 0x1966D0u: goto label_1966d0;
            case 0x1966D4u: goto label_1966d4;
            case 0x1966D8u: goto label_1966d8;
            case 0x1966DCu: goto label_1966dc;
            case 0x1966E0u: goto label_1966e0;
            case 0x1966E4u: goto label_1966e4;
            case 0x1966E8u: goto label_1966e8;
            case 0x1966ECu: goto label_1966ec;
            case 0x1966F0u: goto label_1966f0;
            case 0x1966F4u: goto label_1966f4;
            case 0x1966F8u: goto label_1966f8;
            case 0x1966FCu: goto label_1966fc;
            case 0x196700u: goto label_196700;
            case 0x196704u: goto label_196704;
            case 0x196708u: goto label_196708;
            case 0x19670Cu: goto label_19670c;
            case 0x196710u: goto label_196710;
            case 0x196714u: goto label_196714;
            case 0x196718u: goto label_196718;
            case 0x19671Cu: goto label_19671c;
            case 0x196720u: goto label_196720;
            case 0x196724u: goto label_196724;
            case 0x196728u: goto label_196728;
            case 0x19672Cu: goto label_19672c;
            case 0x196730u: goto label_196730;
            case 0x196734u: goto label_196734;
            case 0x196738u: goto label_196738;
            case 0x19673Cu: goto label_19673c;
            case 0x196740u: goto label_196740;
            case 0x196744u: goto label_196744;
            case 0x196748u: goto label_196748;
            case 0x19674Cu: goto label_19674c;
            case 0x196750u: goto label_196750;
            case 0x196754u: goto label_196754;
            case 0x196758u: goto label_196758;
            case 0x19675Cu: goto label_19675c;
            case 0x196760u: goto label_196760;
            case 0x196764u: goto label_196764;
            case 0x196768u: goto label_196768;
            case 0x19676Cu: goto label_19676c;
            case 0x196770u: goto label_196770;
            case 0x196774u: goto label_196774;
            case 0x196778u: goto label_196778;
            case 0x19677Cu: goto label_19677c;
            case 0x196780u: goto label_196780;
            case 0x196784u: goto label_196784;
            case 0x196788u: goto label_196788;
            case 0x19678Cu: goto label_19678c;
            case 0x196790u: goto label_196790;
            case 0x196794u: goto label_196794;
            case 0x196798u: goto label_196798;
            case 0x19679Cu: goto label_19679c;
            case 0x1967A0u: goto label_1967a0;
            case 0x1967A4u: goto label_1967a4;
            case 0x1967A8u: goto label_1967a8;
            case 0x1967ACu: goto label_1967ac;
            case 0x1967B0u: goto label_1967b0;
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1967BCu: goto label_1967bc;
            case 0x1967C0u: goto label_1967c0;
            case 0x1967C4u: goto label_1967c4;
            case 0x1967C8u: goto label_1967c8;
            case 0x1967CCu: goto label_1967cc;
            case 0x1967D0u: goto label_1967d0;
            case 0x1967D4u: goto label_1967d4;
            case 0x1967D8u: goto label_1967d8;
            case 0x1967DCu: goto label_1967dc;
            case 0x1967E0u: goto label_1967e0;
            case 0x1967E4u: goto label_1967e4;
            case 0x1967E8u: goto label_1967e8;
            case 0x1967ECu: goto label_1967ec;
            case 0x1967F0u: goto label_1967f0;
            case 0x1967F4u: goto label_1967f4;
            case 0x1967F8u: goto label_1967f8;
            case 0x1967FCu: goto label_1967fc;
            case 0x196800u: goto label_196800;
            case 0x196804u: goto label_196804;
            case 0x196808u: goto label_196808;
            case 0x19680Cu: goto label_19680c;
            case 0x196810u: goto label_196810;
            case 0x196814u: goto label_196814;
            case 0x196818u: goto label_196818;
            case 0x19681Cu: goto label_19681c;
            case 0x196820u: goto label_196820;
            case 0x196824u: goto label_196824;
            case 0x196828u: goto label_196828;
            case 0x19682Cu: goto label_19682c;
            case 0x196830u: goto label_196830;
            case 0x196834u: goto label_196834;
            case 0x196838u: goto label_196838;
            case 0x19683Cu: goto label_19683c;
            case 0x196840u: goto label_196840;
            case 0x196844u: goto label_196844;
            case 0x196848u: goto label_196848;
            case 0x19684Cu: goto label_19684c;
            case 0x196850u: goto label_196850;
            case 0x196854u: goto label_196854;
            case 0x196858u: goto label_196858;
            case 0x19685Cu: goto label_19685c;
            case 0x196860u: goto label_196860;
            case 0x196864u: goto label_196864;
            case 0x196868u: goto label_196868;
            case 0x19686Cu: goto label_19686c;
            case 0x196870u: goto label_196870;
            case 0x196874u: goto label_196874;
            case 0x196878u: goto label_196878;
            case 0x19687Cu: goto label_19687c;
            case 0x196880u: goto label_196880;
            case 0x196884u: goto label_196884;
            case 0x196888u: goto label_196888;
            case 0x19688Cu: goto label_19688c;
            case 0x196890u: goto label_196890;
            case 0x196894u: goto label_196894;
            case 0x196898u: goto label_196898;
            case 0x19689Cu: goto label_19689c;
            case 0x1968A0u: goto label_1968a0;
            case 0x1968A4u: goto label_1968a4;
            case 0x1968A8u: goto label_1968a8;
            case 0x1968ACu: goto label_1968ac;
            case 0x1968B0u: goto label_1968b0;
            case 0x1968B4u: goto label_1968b4;
            case 0x1968B8u: goto label_1968b8;
            case 0x1968BCu: goto label_1968bc;
            case 0x1968C0u: goto label_1968c0;
            case 0x1968C4u: goto label_1968c4;
            case 0x1968C8u: goto label_1968c8;
            case 0x1968CCu: goto label_1968cc;
            case 0x1968D0u: goto label_1968d0;
            case 0x1968D4u: goto label_1968d4;
            case 0x1968D8u: goto label_1968d8;
            case 0x1968DCu: goto label_1968dc;
            case 0x1968E0u: goto label_1968e0;
            case 0x1968E4u: goto label_1968e4;
            case 0x1968E8u: goto label_1968e8;
            case 0x1968ECu: goto label_1968ec;
            case 0x1968F0u: goto label_1968f0;
            case 0x1968F4u: goto label_1968f4;
            case 0x1968F8u: goto label_1968f8;
            case 0x1968FCu: goto label_1968fc;
            case 0x196900u: goto label_196900;
            case 0x196904u: goto label_196904;
            case 0x196908u: goto label_196908;
            case 0x19690Cu: goto label_19690c;
            case 0x196910u: goto label_196910;
            case 0x196914u: goto label_196914;
            case 0x196918u: goto label_196918;
            case 0x19691Cu: goto label_19691c;
            case 0x196920u: goto label_196920;
            case 0x196924u: goto label_196924;
            case 0x196928u: goto label_196928;
            case 0x19692Cu: goto label_19692c;
            case 0x196930u: goto label_196930;
            case 0x196934u: goto label_196934;
            case 0x196938u: goto label_196938;
            case 0x19693Cu: goto label_19693c;
            case 0x196940u: goto label_196940;
            case 0x196944u: goto label_196944;
            case 0x196948u: goto label_196948;
            case 0x19694Cu: goto label_19694c;
            case 0x196950u: goto label_196950;
            case 0x196954u: goto label_196954;
            case 0x196958u: goto label_196958;
            case 0x19695Cu: goto label_19695c;
            case 0x196960u: goto label_196960;
            case 0x196964u: goto label_196964;
            case 0x196968u: goto label_196968;
            case 0x19696Cu: goto label_19696c;
            case 0x196970u: goto label_196970;
            case 0x196974u: goto label_196974;
            case 0x196978u: goto label_196978;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            case 0x196988u: goto label_196988;
            case 0x19698Cu: goto label_19698c;
            case 0x196990u: goto label_196990;
            case 0x196994u: goto label_196994;
            case 0x196998u: goto label_196998;
            case 0x19699Cu: goto label_19699c;
            case 0x1969A0u: goto label_1969a0;
            case 0x1969A4u: goto label_1969a4;
            case 0x1969A8u: goto label_1969a8;
            case 0x1969ACu: goto label_1969ac;
            case 0x1969B0u: goto label_1969b0;
            case 0x1969B4u: goto label_1969b4;
            case 0x1969B8u: goto label_1969b8;
            case 0x1969BCu: goto label_1969bc;
            case 0x1969C0u: goto label_1969c0;
            case 0x1969C4u: goto label_1969c4;
            case 0x1969C8u: goto label_1969c8;
            case 0x1969CCu: goto label_1969cc;
            case 0x1969D0u: goto label_1969d0;
            case 0x1969D4u: goto label_1969d4;
            case 0x1969D8u: goto label_1969d8;
            case 0x1969DCu: goto label_1969dc;
            case 0x1969E0u: goto label_1969e0;
            case 0x1969E4u: goto label_1969e4;
            case 0x1969E8u: goto label_1969e8;
            case 0x1969ECu: goto label_1969ec;
            case 0x1969F0u: goto label_1969f0;
            case 0x1969F4u: goto label_1969f4;
            case 0x1969F8u: goto label_1969f8;
            case 0x1969FCu: goto label_1969fc;
            case 0x196A00u: goto label_196a00;
            case 0x196A04u: goto label_196a04;
            case 0x196A08u: goto label_196a08;
            case 0x196A0Cu: goto label_196a0c;
            case 0x196A10u: goto label_196a10;
            case 0x196A14u: goto label_196a14;
            case 0x196A18u: goto label_196a18;
            case 0x196A1Cu: goto label_196a1c;
            case 0x196A20u: goto label_196a20;
            case 0x196A24u: goto label_196a24;
            case 0x196A28u: goto label_196a28;
            case 0x196A2Cu: goto label_196a2c;
            case 0x196A30u: goto label_196a30;
            case 0x196A34u: goto label_196a34;
            case 0x196A38u: goto label_196a38;
            case 0x196A3Cu: goto label_196a3c;
            case 0x196A40u: goto label_196a40;
            case 0x196A44u: goto label_196a44;
            case 0x196A48u: goto label_196a48;
            case 0x196A4Cu: goto label_196a4c;
            case 0x196A50u: goto label_196a50;
            case 0x196A54u: goto label_196a54;
            case 0x196A58u: goto label_196a58;
            case 0x196A5Cu: goto label_196a5c;
            case 0x196A60u: goto label_196a60;
            case 0x196A64u: goto label_196a64;
            case 0x196A68u: goto label_196a68;
            case 0x196A6Cu: goto label_196a6c;
            case 0x196A70u: goto label_196a70;
            case 0x196A74u: goto label_196a74;
            case 0x196A78u: goto label_196a78;
            case 0x196A7Cu: goto label_196a7c;
            case 0x196A80u: goto label_196a80;
            case 0x196A84u: goto label_196a84;
            case 0x196A88u: goto label_196a88;
            case 0x196A8Cu: goto label_196a8c;
            case 0x196A90u: goto label_196a90;
            case 0x196A94u: goto label_196a94;
            case 0x196A98u: goto label_196a98;
            case 0x196A9Cu: goto label_196a9c;
            case 0x196AA0u: goto label_196aa0;
            case 0x196AA4u: goto label_196aa4;
            case 0x196AA8u: goto label_196aa8;
            case 0x196AACu: goto label_196aac;
            case 0x196AB0u: goto label_196ab0;
            case 0x196AB4u: goto label_196ab4;
            case 0x196AB8u: goto label_196ab8;
            case 0x196ABCu: goto label_196abc;
            case 0x196AC0u: goto label_196ac0;
            case 0x196AC4u: goto label_196ac4;
            case 0x196AC8u: goto label_196ac8;
            case 0x196ACCu: goto label_196acc;
            case 0x196AD0u: goto label_196ad0;
            case 0x196AD4u: goto label_196ad4;
            case 0x196AD8u: goto label_196ad8;
            case 0x196ADCu: goto label_196adc;
            case 0x196AE0u: goto label_196ae0;
            case 0x196AE4u: goto label_196ae4;
            case 0x196AE8u: goto label_196ae8;
            case 0x196AECu: goto label_196aec;
            case 0x196AF0u: goto label_196af0;
            case 0x196AF4u: goto label_196af4;
            case 0x196AF8u: goto label_196af8;
            case 0x196AFCu: goto label_196afc;
            case 0x196B00u: goto label_196b00;
            case 0x196B04u: goto label_196b04;
            case 0x196B08u: goto label_196b08;
            case 0x196B0Cu: goto label_196b0c;
            case 0x196B10u: goto label_196b10;
            case 0x196B14u: goto label_196b14;
            case 0x196B18u: goto label_196b18;
            case 0x196B1Cu: goto label_196b1c;
            case 0x196B20u: goto label_196b20;
            case 0x196B24u: goto label_196b24;
            case 0x196B28u: goto label_196b28;
            case 0x196B2Cu: goto label_196b2c;
            case 0x196B30u: goto label_196b30;
            case 0x196B34u: goto label_196b34;
            case 0x196B38u: goto label_196b38;
            case 0x196B3Cu: goto label_196b3c;
            case 0x196B40u: goto label_196b40;
            case 0x196B44u: goto label_196b44;
            case 0x196B48u: goto label_196b48;
            case 0x196B4Cu: goto label_196b4c;
            case 0x196B50u: goto label_196b50;
            case 0x196B54u: goto label_196b54;
            case 0x196B58u: goto label_196b58;
            case 0x196B5Cu: goto label_196b5c;
            case 0x196B60u: goto label_196b60;
            case 0x196B64u: goto label_196b64;
            case 0x196B68u: goto label_196b68;
            case 0x196B6Cu: goto label_196b6c;
            case 0x196B70u: goto label_196b70;
            case 0x196B74u: goto label_196b74;
            case 0x196B78u: goto label_196b78;
            case 0x196B7Cu: goto label_196b7c;
            case 0x196B80u: goto label_196b80;
            case 0x196B84u: goto label_196b84;
            case 0x196B88u: goto label_196b88;
            case 0x196B8Cu: goto label_196b8c;
            case 0x196B90u: goto label_196b90;
            case 0x196B94u: goto label_196b94;
            case 0x196B98u: goto label_196b98;
            case 0x196B9Cu: goto label_196b9c;
            case 0x196BA0u: goto label_196ba0;
            case 0x196BA4u: goto label_196ba4;
            case 0x196BA8u: goto label_196ba8;
            case 0x196BACu: goto label_196bac;
            case 0x196BB0u: goto label_196bb0;
            case 0x196BB4u: goto label_196bb4;
            case 0x196BB8u: goto label_196bb8;
            case 0x196BBCu: goto label_196bbc;
            case 0x196BC0u: goto label_196bc0;
            case 0x196BC4u: goto label_196bc4;
            case 0x196BC8u: goto label_196bc8;
            case 0x196BCCu: goto label_196bcc;
            case 0x196BD0u: goto label_196bd0;
            case 0x196BD4u: goto label_196bd4;
            case 0x196BD8u: goto label_196bd8;
            case 0x196BDCu: goto label_196bdc;
            case 0x196BE0u: goto label_196be0;
            case 0x196BE4u: goto label_196be4;
            case 0x196BE8u: goto label_196be8;
            case 0x196BECu: goto label_196bec;
            case 0x196BF0u: goto label_196bf0;
            case 0x196BF4u: goto label_196bf4;
            case 0x196BF8u: goto label_196bf8;
            case 0x196BFCu: goto label_196bfc;
            case 0x196C00u: goto label_196c00;
            case 0x196C04u: goto label_196c04;
            case 0x196C08u: goto label_196c08;
            case 0x196C0Cu: goto label_196c0c;
            case 0x196C10u: goto label_196c10;
            case 0x196C14u: goto label_196c14;
            case 0x196C18u: goto label_196c18;
            case 0x196C1Cu: goto label_196c1c;
            case 0x196C20u: goto label_196c20;
            case 0x196C24u: goto label_196c24;
            case 0x196C28u: goto label_196c28;
            case 0x196C2Cu: goto label_196c2c;
            case 0x196C30u: goto label_196c30;
            case 0x196C34u: goto label_196c34;
            case 0x196C38u: goto label_196c38;
            case 0x196C3Cu: goto label_196c3c;
            case 0x196C40u: goto label_196c40;
            case 0x196C44u: goto label_196c44;
            case 0x196C48u: goto label_196c48;
            case 0x196C4Cu: goto label_196c4c;
            case 0x196C50u: goto label_196c50;
            case 0x196C54u: goto label_196c54;
            case 0x196C58u: goto label_196c58;
            case 0x196C5Cu: goto label_196c5c;
            case 0x196C60u: goto label_196c60;
            case 0x196C64u: goto label_196c64;
            case 0x196C68u: goto label_196c68;
            case 0x196C6Cu: goto label_196c6c;
            case 0x196C70u: goto label_196c70;
            case 0x196C74u: goto label_196c74;
            case 0x196C78u: goto label_196c78;
            case 0x196C7Cu: goto label_196c7c;
            case 0x196C80u: goto label_196c80;
            case 0x196C84u: goto label_196c84;
            case 0x196C88u: goto label_196c88;
            case 0x196C8Cu: goto label_196c8c;
            case 0x196C90u: goto label_196c90;
            case 0x196C94u: goto label_196c94;
            case 0x196C98u: goto label_196c98;
            case 0x196C9Cu: goto label_196c9c;
            case 0x196CA0u: goto label_196ca0;
            case 0x196CA4u: goto label_196ca4;
            case 0x196CA8u: goto label_196ca8;
            case 0x196CACu: goto label_196cac;
            case 0x196CB0u: goto label_196cb0;
            case 0x196CB4u: goto label_196cb4;
            case 0x196CB8u: goto label_196cb8;
            case 0x196CBCu: goto label_196cbc;
            case 0x196CC0u: goto label_196cc0;
            case 0x196CC4u: goto label_196cc4;
            case 0x196CC8u: goto label_196cc8;
            case 0x196CCCu: goto label_196ccc;
            case 0x196CD0u: goto label_196cd0;
            case 0x196CD4u: goto label_196cd4;
            case 0x196CD8u: goto label_196cd8;
            case 0x196CDCu: goto label_196cdc;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196CE8u: goto label_196ce8;
            case 0x196CECu: goto label_196cec;
            case 0x196CF0u: goto label_196cf0;
            case 0x196CF4u: goto label_196cf4;
            case 0x196CF8u: goto label_196cf8;
            case 0x196CFCu: goto label_196cfc;
            case 0x196D00u: goto label_196d00;
            case 0x196D04u: goto label_196d04;
            case 0x196D08u: goto label_196d08;
            case 0x196D0Cu: goto label_196d0c;
            case 0x196D10u: goto label_196d10;
            case 0x196D14u: goto label_196d14;
            case 0x196D18u: goto label_196d18;
            case 0x196D1Cu: goto label_196d1c;
            case 0x196D20u: goto label_196d20;
            case 0x196D24u: goto label_196d24;
            case 0x196D28u: goto label_196d28;
            case 0x196D2Cu: goto label_196d2c;
            case 0x196D30u: goto label_196d30;
            case 0x196D34u: goto label_196d34;
            case 0x196D38u: goto label_196d38;
            case 0x196D3Cu: goto label_196d3c;
            case 0x196D40u: goto label_196d40;
            case 0x196D44u: goto label_196d44;
            case 0x196D48u: goto label_196d48;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D50u: goto label_196d50;
            case 0x196D54u: goto label_196d54;
            case 0x196D58u: goto label_196d58;
            case 0x196D5Cu: goto label_196d5c;
            case 0x196D60u: goto label_196d60;
            case 0x196D64u: goto label_196d64;
            case 0x196D68u: goto label_196d68;
            case 0x196D6Cu: goto label_196d6c;
            case 0x196D70u: goto label_196d70;
            case 0x196D74u: goto label_196d74;
            case 0x196D78u: goto label_196d78;
            case 0x196D7Cu: goto label_196d7c;
            case 0x196D80u: goto label_196d80;
            case 0x196D84u: goto label_196d84;
            case 0x196D88u: goto label_196d88;
            case 0x196D8Cu: goto label_196d8c;
            case 0x196D90u: goto label_196d90;
            case 0x196D94u: goto label_196d94;
            case 0x196D98u: goto label_196d98;
            case 0x196D9Cu: goto label_196d9c;
            case 0x196DA0u: goto label_196da0;
            case 0x196DA4u: goto label_196da4;
            case 0x196DA8u: goto label_196da8;
            case 0x196DACu: goto label_196dac;
            case 0x196DB0u: goto label_196db0;
            case 0x196DB4u: goto label_196db4;
            case 0x196DB8u: goto label_196db8;
            case 0x196DBCu: goto label_196dbc;
            case 0x196DC0u: goto label_196dc0;
            case 0x196DC4u: goto label_196dc4;
            case 0x196DC8u: goto label_196dc8;
            case 0x196DCCu: goto label_196dcc;
            case 0x196DD0u: goto label_196dd0;
            case 0x196DD4u: goto label_196dd4;
            case 0x196DD8u: goto label_196dd8;
            case 0x196DDCu: goto label_196ddc;
            case 0x196DE0u: goto label_196de0;
            case 0x196DE4u: goto label_196de4;
            case 0x196DE8u: goto label_196de8;
            case 0x196DECu: goto label_196dec;
            case 0x196DF0u: goto label_196df0;
            case 0x196DF4u: goto label_196df4;
            case 0x196DF8u: goto label_196df8;
            case 0x196DFCu: goto label_196dfc;
            case 0x196E00u: goto label_196e00;
            case 0x196E04u: goto label_196e04;
            case 0x196E08u: goto label_196e08;
            case 0x196E0Cu: goto label_196e0c;
            case 0x196E10u: goto label_196e10;
            case 0x196E14u: goto label_196e14;
            case 0x196E18u: goto label_196e18;
            case 0x196E1Cu: goto label_196e1c;
            case 0x196E20u: goto label_196e20;
            case 0x196E24u: goto label_196e24;
            case 0x196E28u: goto label_196e28;
            case 0x196E2Cu: goto label_196e2c;
            case 0x196E30u: goto label_196e30;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196E3Cu: goto label_196e3c;
            case 0x196E40u: goto label_196e40;
            case 0x196E44u: goto label_196e44;
            case 0x196E48u: goto label_196e48;
            case 0x196E4Cu: goto label_196e4c;
            case 0x196E50u: goto label_196e50;
            case 0x196E54u: goto label_196e54;
            case 0x196E58u: goto label_196e58;
            case 0x196E5Cu: goto label_196e5c;
            case 0x196E60u: goto label_196e60;
            case 0x196E64u: goto label_196e64;
            case 0x196E68u: goto label_196e68;
            case 0x196E6Cu: goto label_196e6c;
            case 0x196E70u: goto label_196e70;
            case 0x196E74u: goto label_196e74;
            case 0x196E78u: goto label_196e78;
            case 0x196E7Cu: goto label_196e7c;
            case 0x196E80u: goto label_196e80;
            case 0x196E84u: goto label_196e84;
            case 0x196E88u: goto label_196e88;
            case 0x196E8Cu: goto label_196e8c;
            case 0x196E90u: goto label_196e90;
            case 0x196E94u: goto label_196e94;
            case 0x196E98u: goto label_196e98;
            case 0x196E9Cu: goto label_196e9c;
            case 0x196EA0u: goto label_196ea0;
            case 0x196EA4u: goto label_196ea4;
            case 0x196EA8u: goto label_196ea8;
            case 0x196EACu: goto label_196eac;
            case 0x196EB0u: goto label_196eb0;
            case 0x196EB4u: goto label_196eb4;
            case 0x196EB8u: goto label_196eb8;
            case 0x196EBCu: goto label_196ebc;
            case 0x196EC0u: goto label_196ec0;
            case 0x196EC4u: goto label_196ec4;
            case 0x196EC8u: goto label_196ec8;
            case 0x196ECCu: goto label_196ecc;
            case 0x196ED0u: goto label_196ed0;
            case 0x196ED4u: goto label_196ed4;
            case 0x196ED8u: goto label_196ed8;
            case 0x196EDCu: goto label_196edc;
            case 0x196EE0u: goto label_196ee0;
            case 0x196EE4u: goto label_196ee4;
            case 0x196EE8u: goto label_196ee8;
            case 0x196EECu: goto label_196eec;
            case 0x196EF0u: goto label_196ef0;
            case 0x196EF4u: goto label_196ef4;
            case 0x196EF8u: goto label_196ef8;
            case 0x196EFCu: goto label_196efc;
            case 0x196F00u: goto label_196f00;
            case 0x196F04u: goto label_196f04;
            case 0x196F08u: goto label_196f08;
            case 0x196F0Cu: goto label_196f0c;
            case 0x196F10u: goto label_196f10;
            case 0x196F14u: goto label_196f14;
            case 0x196F18u: goto label_196f18;
            case 0x196F1Cu: goto label_196f1c;
            case 0x196F20u: goto label_196f20;
            case 0x196F24u: goto label_196f24;
            case 0x196F28u: goto label_196f28;
            case 0x196F2Cu: goto label_196f2c;
            case 0x196F30u: goto label_196f30;
            case 0x196F34u: goto label_196f34;
            case 0x196F38u: goto label_196f38;
            case 0x196F3Cu: goto label_196f3c;
            case 0x196F40u: goto label_196f40;
            case 0x196F44u: goto label_196f44;
            case 0x196F48u: goto label_196f48;
            case 0x196F4Cu: goto label_196f4c;
            case 0x196F50u: goto label_196f50;
            case 0x196F54u: goto label_196f54;
            case 0x196F58u: goto label_196f58;
            case 0x196F5Cu: goto label_196f5c;
            case 0x196F60u: goto label_196f60;
            case 0x196F64u: goto label_196f64;
            case 0x196F68u: goto label_196f68;
            case 0x196F6Cu: goto label_196f6c;
            case 0x196F70u: goto label_196f70;
            case 0x196F74u: goto label_196f74;
            case 0x196F78u: goto label_196f78;
            case 0x196F7Cu: goto label_196f7c;
            case 0x196F80u: goto label_196f80;
            case 0x196F84u: goto label_196f84;
            case 0x196F88u: goto label_196f88;
            case 0x196F8Cu: goto label_196f8c;
            case 0x196F90u: goto label_196f90;
            case 0x196F94u: goto label_196f94;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x196FA0u: goto label_196fa0;
            case 0x196FA4u: goto label_196fa4;
            case 0x196FA8u: goto label_196fa8;
            case 0x196FACu: goto label_196fac;
            case 0x196FB0u: goto label_196fb0;
            case 0x196FB4u: goto label_196fb4;
            case 0x196FB8u: goto label_196fb8;
            case 0x196FBCu: goto label_196fbc;
            case 0x196FC0u: goto label_196fc0;
            case 0x196FC4u: goto label_196fc4;
            case 0x196FC8u: goto label_196fc8;
            case 0x196FCCu: goto label_196fcc;
            case 0x196FD0u: goto label_196fd0;
            case 0x196FD4u: goto label_196fd4;
            case 0x196FD8u: goto label_196fd8;
            case 0x196FDCu: goto label_196fdc;
            case 0x196FE0u: goto label_196fe0;
            case 0x196FE4u: goto label_196fe4;
            case 0x196FE8u: goto label_196fe8;
            case 0x196FECu: goto label_196fec;
            case 0x196FF0u: goto label_196ff0;
            case 0x196FF4u: goto label_196ff4;
            case 0x196FF8u: goto label_196ff8;
            case 0x196FFCu: goto label_196ffc;
            case 0x197000u: goto label_197000;
            case 0x197004u: goto label_197004;
            case 0x197008u: goto label_197008;
            case 0x19700Cu: goto label_19700c;
            case 0x197010u: goto label_197010;
            case 0x197014u: goto label_197014;
            case 0x197018u: goto label_197018;
            case 0x19701Cu: goto label_19701c;
            case 0x197020u: goto label_197020;
            case 0x197024u: goto label_197024;
            case 0x197028u: goto label_197028;
            case 0x19702Cu: goto label_19702c;
            case 0x197030u: goto label_197030;
            case 0x197034u: goto label_197034;
            case 0x197038u: goto label_197038;
            case 0x19703Cu: goto label_19703c;
            case 0x197040u: goto label_197040;
            case 0x197044u: goto label_197044;
            case 0x197048u: goto label_197048;
            case 0x19704Cu: goto label_19704c;
            case 0x197050u: goto label_197050;
            case 0x197054u: goto label_197054;
            case 0x197058u: goto label_197058;
            case 0x19705Cu: goto label_19705c;
            case 0x197060u: goto label_197060;
            case 0x197064u: goto label_197064;
            case 0x197068u: goto label_197068;
            case 0x19706Cu: goto label_19706c;
            case 0x197070u: goto label_197070;
            case 0x197074u: goto label_197074;
            case 0x197078u: goto label_197078;
            case 0x19707Cu: goto label_19707c;
            case 0x197080u: goto label_197080;
            case 0x197084u: goto label_197084;
            case 0x197088u: goto label_197088;
            case 0x19708Cu: goto label_19708c;
            case 0x197090u: goto label_197090;
            case 0x197094u: goto label_197094;
            case 0x197098u: goto label_197098;
            case 0x19709Cu: goto label_19709c;
            case 0x1970A0u: goto label_1970a0;
            case 0x1970A4u: goto label_1970a4;
            case 0x1970A8u: goto label_1970a8;
            case 0x1970ACu: goto label_1970ac;
            case 0x1970B0u: goto label_1970b0;
            case 0x1970B4u: goto label_1970b4;
            case 0x1970B8u: goto label_1970b8;
            case 0x1970BCu: goto label_1970bc;
            case 0x1970C0u: goto label_1970c0;
            case 0x1970C4u: goto label_1970c4;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970D0u: goto label_1970d0;
            case 0x1970D4u: goto label_1970d4;
            case 0x1970D8u: goto label_1970d8;
            case 0x1970DCu: goto label_1970dc;
            case 0x1970E0u: goto label_1970e0;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970E8u: goto label_1970e8;
            case 0x1970ECu: goto label_1970ec;
            case 0x1970F0u: goto label_1970f0;
            case 0x1970F4u: goto label_1970f4;
            case 0x1970F8u: goto label_1970f8;
            case 0x1970FCu: goto label_1970fc;
            case 0x197100u: goto label_197100;
            case 0x197104u: goto label_197104;
            case 0x197108u: goto label_197108;
            case 0x19710Cu: goto label_19710c;
            case 0x197110u: goto label_197110;
            case 0x197114u: goto label_197114;
            case 0x197118u: goto label_197118;
            case 0x19711Cu: goto label_19711c;
            case 0x197120u: goto label_197120;
            case 0x197124u: goto label_197124;
            case 0x197128u: goto label_197128;
            case 0x19712Cu: goto label_19712c;
            case 0x197130u: goto label_197130;
            case 0x197134u: goto label_197134;
            case 0x197138u: goto label_197138;
            case 0x19713Cu: goto label_19713c;
            case 0x197140u: goto label_197140;
            case 0x197144u: goto label_197144;
            case 0x197148u: goto label_197148;
            case 0x19714Cu: goto label_19714c;
            case 0x197150u: goto label_197150;
            case 0x197154u: goto label_197154;
            case 0x197158u: goto label_197158;
            case 0x19715Cu: goto label_19715c;
            case 0x197160u: goto label_197160;
            case 0x197164u: goto label_197164;
            case 0x197168u: goto label_197168;
            case 0x19716Cu: goto label_19716c;
            case 0x197170u: goto label_197170;
            case 0x197174u: goto label_197174;
            case 0x197178u: goto label_197178;
            case 0x19717Cu: goto label_19717c;
            case 0x197180u: goto label_197180;
            case 0x197184u: goto label_197184;
            case 0x197188u: goto label_197188;
            case 0x19718Cu: goto label_19718c;
            case 0x197190u: goto label_197190;
            case 0x197194u: goto label_197194;
            case 0x197198u: goto label_197198;
            case 0x19719Cu: goto label_19719c;
            case 0x1971A0u: goto label_1971a0;
            case 0x1971A4u: goto label_1971a4;
            case 0x1971A8u: goto label_1971a8;
            case 0x1971ACu: goto label_1971ac;
            case 0x1971B0u: goto label_1971b0;
            case 0x1971B4u: goto label_1971b4;
            case 0x1971B8u: goto label_1971b8;
            case 0x1971BCu: goto label_1971bc;
            case 0x1971C0u: goto label_1971c0;
            case 0x1971C4u: goto label_1971c4;
            case 0x1971C8u: goto label_1971c8;
            case 0x1971CCu: goto label_1971cc;
            case 0x1971D0u: goto label_1971d0;
            case 0x1971D4u: goto label_1971d4;
            case 0x1971D8u: goto label_1971d8;
            case 0x1971DCu: goto label_1971dc;
            case 0x1971E0u: goto label_1971e0;
            case 0x1971E4u: goto label_1971e4;
            case 0x1971E8u: goto label_1971e8;
            case 0x1971ECu: goto label_1971ec;
            case 0x1971F0u: goto label_1971f0;
            case 0x1971F4u: goto label_1971f4;
            case 0x1971F8u: goto label_1971f8;
            case 0x1971FCu: goto label_1971fc;
            case 0x197200u: goto label_197200;
            case 0x197204u: goto label_197204;
            case 0x197208u: goto label_197208;
            case 0x19720Cu: goto label_19720c;
            case 0x197210u: goto label_197210;
            case 0x197214u: goto label_197214;
            case 0x197218u: goto label_197218;
            case 0x19721Cu: goto label_19721c;
            case 0x197220u: goto label_197220;
            case 0x197224u: goto label_197224;
            case 0x197228u: goto label_197228;
            case 0x19722Cu: goto label_19722c;
            case 0x197230u: goto label_197230;
            case 0x197234u: goto label_197234;
            case 0x197238u: goto label_197238;
            case 0x19723Cu: goto label_19723c;
            case 0x197240u: goto label_197240;
            case 0x197244u: goto label_197244;
            case 0x197248u: goto label_197248;
            case 0x19724Cu: goto label_19724c;
            case 0x197250u: goto label_197250;
            case 0x197254u: goto label_197254;
            case 0x197258u: goto label_197258;
            case 0x19725Cu: goto label_19725c;
            case 0x197260u: goto label_197260;
            case 0x197264u: goto label_197264;
            case 0x197268u: goto label_197268;
            case 0x19726Cu: goto label_19726c;
            case 0x197270u: goto label_197270;
            case 0x197274u: goto label_197274;
            case 0x197278u: goto label_197278;
            case 0x19727Cu: goto label_19727c;
            case 0x197280u: goto label_197280;
            case 0x197284u: goto label_197284;
            case 0x197288u: goto label_197288;
            case 0x19728Cu: goto label_19728c;
            case 0x197290u: goto label_197290;
            case 0x197294u: goto label_197294;
            case 0x197298u: goto label_197298;
            case 0x19729Cu: goto label_19729c;
            case 0x1972A0u: goto label_1972a0;
            case 0x1972A4u: goto label_1972a4;
            case 0x1972A8u: goto label_1972a8;
            case 0x1972ACu: goto label_1972ac;
            case 0x1972B0u: goto label_1972b0;
            case 0x1972B4u: goto label_1972b4;
            case 0x1972B8u: goto label_1972b8;
            case 0x1972BCu: goto label_1972bc;
            case 0x1972C0u: goto label_1972c0;
            case 0x1972C4u: goto label_1972c4;
            case 0x1972C8u: goto label_1972c8;
            case 0x1972CCu: goto label_1972cc;
            case 0x1972D0u: goto label_1972d0;
            case 0x1972D4u: goto label_1972d4;
            case 0x1972D8u: goto label_1972d8;
            case 0x1972DCu: goto label_1972dc;
            case 0x1972E0u: goto label_1972e0;
            case 0x1972E4u: goto label_1972e4;
            case 0x1972E8u: goto label_1972e8;
            case 0x1972ECu: goto label_1972ec;
            case 0x1972F0u: goto label_1972f0;
            case 0x1972F4u: goto label_1972f4;
            case 0x1972F8u: goto label_1972f8;
            case 0x1972FCu: goto label_1972fc;
            case 0x197300u: goto label_197300;
            case 0x197304u: goto label_197304;
            case 0x197308u: goto label_197308;
            case 0x19730Cu: goto label_19730c;
            case 0x197310u: goto label_197310;
            case 0x197314u: goto label_197314;
            case 0x197318u: goto label_197318;
            case 0x19731Cu: goto label_19731c;
            case 0x197320u: goto label_197320;
            case 0x197324u: goto label_197324;
            case 0x197328u: goto label_197328;
            case 0x19732Cu: goto label_19732c;
            case 0x197330u: goto label_197330;
            case 0x197334u: goto label_197334;
            case 0x197338u: goto label_197338;
            case 0x19733Cu: goto label_19733c;
            case 0x197340u: goto label_197340;
            case 0x197344u: goto label_197344;
            case 0x197348u: goto label_197348;
            case 0x19734Cu: goto label_19734c;
            case 0x197350u: goto label_197350;
            case 0x197354u: goto label_197354;
            case 0x197358u: goto label_197358;
            case 0x19735Cu: goto label_19735c;
            case 0x197360u: goto label_197360;
            case 0x197364u: goto label_197364;
            case 0x197368u: goto label_197368;
            case 0x19736Cu: goto label_19736c;
            case 0x197370u: goto label_197370;
            case 0x197374u: goto label_197374;
            case 0x197378u: goto label_197378;
            case 0x19737Cu: goto label_19737c;
            case 0x197380u: goto label_197380;
            case 0x197384u: goto label_197384;
            case 0x197388u: goto label_197388;
            case 0x19738Cu: goto label_19738c;
            case 0x197390u: goto label_197390;
            case 0x197394u: goto label_197394;
            case 0x197398u: goto label_197398;
            case 0x19739Cu: goto label_19739c;
            case 0x1973A0u: goto label_1973a0;
            case 0x1973A4u: goto label_1973a4;
            case 0x1973A8u: goto label_1973a8;
            case 0x1973ACu: goto label_1973ac;
            case 0x1973B0u: goto label_1973b0;
            case 0x1973B4u: goto label_1973b4;
            case 0x1973B8u: goto label_1973b8;
            case 0x1973BCu: goto label_1973bc;
            case 0x1973C0u: goto label_1973c0;
            case 0x1973C4u: goto label_1973c4;
            case 0x1973C8u: goto label_1973c8;
            case 0x1973CCu: goto label_1973cc;
            case 0x1973D0u: goto label_1973d0;
            case 0x1973D4u: goto label_1973d4;
            case 0x1973D8u: goto label_1973d8;
            case 0x1973DCu: goto label_1973dc;
            case 0x1973E0u: goto label_1973e0;
            case 0x1973E4u: goto label_1973e4;
            case 0x1973E8u: goto label_1973e8;
            case 0x1973ECu: goto label_1973ec;
            case 0x1973F0u: goto label_1973f0;
            case 0x1973F4u: goto label_1973f4;
            case 0x1973F8u: goto label_1973f8;
            case 0x1973FCu: goto label_1973fc;
            case 0x197400u: goto label_197400;
            case 0x197404u: goto label_197404;
            case 0x197408u: goto label_197408;
            case 0x19740Cu: goto label_19740c;
            case 0x197410u: goto label_197410;
            case 0x197414u: goto label_197414;
            case 0x197418u: goto label_197418;
            case 0x19741Cu: goto label_19741c;
            case 0x197420u: goto label_197420;
            case 0x197424u: goto label_197424;
            case 0x197428u: goto label_197428;
            case 0x19742Cu: goto label_19742c;
            case 0x197430u: goto label_197430;
            case 0x197434u: goto label_197434;
            case 0x197438u: goto label_197438;
            case 0x19743Cu: goto label_19743c;
            case 0x197440u: goto label_197440;
            case 0x197444u: goto label_197444;
            case 0x197448u: goto label_197448;
            case 0x19744Cu: goto label_19744c;
            case 0x197450u: goto label_197450;
            case 0x197454u: goto label_197454;
            case 0x197458u: goto label_197458;
            case 0x19745Cu: goto label_19745c;
            case 0x197460u: goto label_197460;
            case 0x197464u: goto label_197464;
            case 0x197468u: goto label_197468;
            case 0x19746Cu: goto label_19746c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197468u;
label_197468:
    // 0x197468: 0x0
    ctx->pc = 0x197468u;
    // NOP
label_19746c:
    // 0x19746c: 0x0
    ctx->pc = 0x19746cu;
    // NOP
}
