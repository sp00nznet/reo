#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CD38
// Address: 0x13cd38 - 0x13ced0
void sub_0013CD38_0x13cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13cd38u;

    // 0x13cd38: 0x27bdffc0
    ctx->pc = 0x13cd38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cd3c: 0xffb10008
    ctx->pc = 0x13cd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13cd40: 0x80882d
    ctx->pc = 0x13cd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd44: 0xffb20010
    ctx->pc = 0x13cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13cd48: 0xa0902d
    ctx->pc = 0x13cd48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd4c: 0xffb40020
    ctx->pc = 0x13cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13cd50: 0xe0a02d
    ctx->pc = 0x13cd50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd54: 0xffb50028
    ctx->pc = 0x13cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13cd58: 0x100a82d
    ctx->pc = 0x13cd58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd5c: 0xffb60030
    ctx->pc = 0x13cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13cd60: 0xc0b02d
    ctx->pc = 0x13cd60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd64: 0xffb00000
    ctx->pc = 0x13cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13cd68: 0xffb30018
    ctx->pc = 0x13cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13cd6c: 0x16200006
    ctx->pc = 0x13CD6Cu;
    {
        const bool branch_taken_0x13cd6c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CD70u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x13cd6c) {
            ctx->pc = 0x13CD88u;
            goto label_13cd88;
        }
    }
    ctx->pc = 0x13CD74u;
    // 0x13cd74: 0x3c040024
    ctx->pc = 0x13cd74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13cd78: 0xc04f53e
    ctx->pc = 0x13CD78u;
    SET_GPR_U32(ctx, 31, 0x13CD80u);
    ctx->pc = 0x13CD7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD80u; }
    }
    if (ctx->pc != 0x13CD80u) { return; }
    ctx->pc = 0x13CD80u;
    // 0x13cd80: 0x10000049
    ctx->pc = 0x13CD80u;
    {
        const bool branch_taken_0x13cd80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CD84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13cd80) {
            ctx->pc = 0x13CEA8u;
            goto label_13cea8;
        }
    }
    ctx->pc = 0x13CD88u;
label_13cd88:
    // 0x13cd88: 0x8e230024
    ctx->pc = 0x13cd88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13cd8c: 0x28630010
    ctx->pc = 0x13cd8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13cd90: 0x10600045
    ctx->pc = 0x13CD90u;
    {
        const bool branch_taken_0x13cd90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CD94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13cd90) {
            ctx->pc = 0x13CEA8u;
            goto label_13cea8;
        }
    }
    ctx->pc = 0x13CD98u;
    // 0x13cd98: 0x56400007
    ctx->pc = 0x13CD98u;
    {
        const bool branch_taken_0x13cd98 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x13cd98) {
            ctx->pc = 0x13CD9Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x13CDB8u;
            goto label_13cdb8;
        }
    }
    ctx->pc = 0x13CDA0u;
    // 0x13cda0: 0x3c040024
    ctx->pc = 0x13cda0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13cda4: 0xc04f53e
    ctx->pc = 0x13CDA4u;
    SET_GPR_U32(ctx, 31, 0x13CDACu);
    ctx->pc = 0x13CDA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955920));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDACu; }
    }
    if (ctx->pc != 0x13CDACu) { return; }
    ctx->pc = 0x13CDACu;
    // 0x13cdac: 0x1000003e
    ctx->pc = 0x13CDACu;
    {
        const bool branch_taken_0x13cdac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CDB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13cdac) {
            ctx->pc = 0x13CEA8u;
            goto label_13cea8;
        }
    }
    ctx->pc = 0x13CDB4u;
    // 0x13cdb4: 0x0
    ctx->pc = 0x13cdb4u;
    // NOP
label_13cdb8:
    // 0x13cdb8: 0x3c087fff
    ctx->pc = 0x13cdb8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32767 << 16));
    // 0x13cdbc: 0x3508ffff
    ctx->pc = 0x13cdbcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x13cdc0: 0x982d
    ctx->pc = 0x13cdc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdc4: 0x2466000f
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 15));
    // 0x13cdc8: 0x2467001e
    ctx->pc = 0x13cdc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 30));
    // 0x13cdcc: 0x28c50000
    ctx->pc = 0x13cdccu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), 0));
    // 0x13cdd0: 0xc0102d
    ctx->pc = 0x13cdd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdd4: 0xe5100b
    ctx->pc = 0x13cdd4u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x13cdd8: 0x31940
    ctx->pc = 0x13cdd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x13cddc: 0x21103
    ctx->pc = 0x13cddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13cde0: 0x2231821
    ctx->pc = 0x13cde0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13cde4: 0x21100
    ctx->pc = 0x13cde4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cde8: 0x24700038
    ctx->pc = 0x13cde8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 56));
    // 0x13cdec: 0xc21023
    ctx->pc = 0x13cdecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13cdf0: 0xae120004
    ctx->pc = 0x13cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x13cdf4: 0x21140
    ctx->pc = 0x13cdf4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x13cdf8: 0x240202d
    ctx->pc = 0x13cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdfc: 0x511021
    ctx->pc = 0x13cdfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce00: 0x8c430038
    ctx->pc = 0x13ce00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13ce04: 0x684026
    ctx->pc = 0x13ce04u;
    SET_GPR_U32(ctx, 8, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13ce08: 0x24630001
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ce0c: 0x68980b
    ctx->pc = 0x13ce0cu;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
    // 0x13ce10: 0xc042c56
    ctx->pc = 0x13CE10u;
    SET_GPR_U32(ctx, 31, 0x13CE18u);
    ctx->pc = 0x13CE14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE18u; }
    }
    if (ctx->pc != 0x13CE18u) { return; }
    ctx->pc = 0x13CE18u;
    // 0x13ce18: 0xae000008
    ctx->pc = 0x13ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13ce1c: 0x40302d
    ctx->pc = 0x13ce1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce20: 0x10c00009
    ctx->pc = 0x13CE20u;
    {
        const bool branch_taken_0x13ce20 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x13CE24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ce20) {
            ctx->pc = 0x13CE48u;
            goto label_13ce48;
        }
    }
    ctx->pc = 0x13CE28u;
label_13ce28:
    // 0x13ce28: 0x2451021
    ctx->pc = 0x13ce28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x13ce2c: 0x24a50001
    ctx->pc = 0x13ce2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x13ce30: 0x90430000
    ctx->pc = 0x13ce30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce34: 0xa6202b
    ctx->pc = 0x13ce34u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13ce38: 0x8e020008
    ctx->pc = 0x13ce38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13ce3c: 0x431021
    ctx->pc = 0x13ce3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ce40: 0x1480fff9
    ctx->pc = 0x13CE40u;
    {
        const bool branch_taken_0x13ce40 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CE44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x13ce40) {
            ctx->pc = 0x13CE28u;
            goto label_13ce28;
        }
    }
    ctx->pc = 0x13CE48u;
label_13ce48:
    // 0x13ce48: 0xae140010
    ctx->pc = 0x13ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x13ce4c: 0x24080001
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ce50: 0xae150014
    ctx->pc = 0x13ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x13ce54: 0xae00001c
    ctx->pc = 0x13ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x13ce58: 0xae000018
    ctx->pc = 0x13ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x13ce5c: 0xae16000c
    ctx->pc = 0x13ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x13ce60: 0x8e23001c
    ctx->pc = 0x13ce60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13ce64: 0x8e260024
    ctx->pc = 0x13ce64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13ce68: 0x24640001
    ctx->pc = 0x13ce68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ce6c: 0x24630010
    ctx->pc = 0x13ce6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x13ce70: 0x28850000
    ctx->pc = 0x13ce70u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 4), 0));
    // 0x13ce74: 0x80102d
    ctx->pc = 0x13ce74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce78: 0x65100b
    ctx->pc = 0x13ce78u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x13ce7c: 0x82270001
    ctx->pc = 0x13ce7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13ce80: 0x21103
    ctx->pc = 0x13ce80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13ce84: 0x24c60001
    ctx->pc = 0x13ce84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x13ce88: 0x21100
    ctx->pc = 0x13ce88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ce8c: 0xae260024
    ctx->pc = 0x13ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x13ce90: 0x822023
    ctx->pc = 0x13ce90u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ce94: 0x14e80003
    ctx->pc = 0x13CE94u;
    {
        const bool branch_taken_0x13ce94 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 8));
        ctx->pc = 0x13CE98u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        if (branch_taken_0x13ce94) {
            ctx->pc = 0x13CEA4u;
            goto label_13cea4;
        }
    }
    ctx->pc = 0x13CE9Cu;
    // 0x13ce9c: 0x24020002
    ctx->pc = 0x13ce9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13cea0: 0xa2220001
    ctx->pc = 0x13cea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_13cea4:
    // 0x13cea4: 0x260102d
    ctx->pc = 0x13cea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13cea8:
    // 0x13cea8: 0xdfb00000
    ctx->pc = 0x13cea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ceac: 0xdfb10008
    ctx->pc = 0x13ceacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ceb0: 0xdfb20010
    ctx->pc = 0x13ceb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ceb4: 0xdfb30018
    ctx->pc = 0x13ceb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ceb8: 0xdfb40020
    ctx->pc = 0x13ceb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cebc: 0xdfb50028
    ctx->pc = 0x13cebcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13cec0: 0xdfb60030
    ctx->pc = 0x13cec0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cec4: 0xdfbf0038
    ctx->pc = 0x13cec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13cec8: 0x3e00008
    ctx->pc = 0x13CEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CD88u: goto label_13cd88;
            case 0x13CDB8u: goto label_13cdb8;
            case 0x13CE28u: goto label_13ce28;
            case 0x13CE48u: goto label_13ce48;
            case 0x13CEA4u: goto label_13cea4;
            case 0x13CEA8u: goto label_13cea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CED0u;
}
