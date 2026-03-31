#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00126AC8
// Address: 0x126ac8 - 0x126d28
void sub_00126AC8_0x126ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126ac8u;

    // 0x126ac8: 0x27bdffa0
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x126acc: 0xffb20020
    ctx->pc = 0x126accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x126ad0: 0xe0902d
    ctx->pc = 0x126ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ad4: 0xffb00010
    ctx->pc = 0x126ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126ad8: 0x80802d
    ctx->pc = 0x126ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126adc: 0xffb10018
    ctx->pc = 0x126adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x126ae0: 0xa0882d
    ctx->pc = 0x126ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ae4: 0xffb30028
    ctx->pc = 0x126ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x126ae8: 0xc0982d
    ctx->pc = 0x126ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126aec: 0xffb40030
    ctx->pc = 0x126aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x126af0: 0x120a02d
    ctx->pc = 0x126af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126af4: 0xffb50038
    ctx->pc = 0x126af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x126af8: 0x140a82d
    ctx->pc = 0x126af8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126afc: 0xffb60040
    ctx->pc = 0x126afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x126b00: 0x100b02d
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b04: 0xffb70048
    ctx->pc = 0x126b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x126b08: 0x160b82d
    ctx->pc = 0x126b08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b0c: 0xffbf0050
    ctx->pc = 0x126b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x126b10: 0x27a70001
    ctx->pc = 0x126b10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 1));
    // 0x126b14: 0xa6400000
    ctx->pc = 0x126b14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x126b18: 0xc049a46
    ctx->pc = 0x126B18u;
    SET_GPR_U32(ctx, 31, 0x126B20u);
    ctx->pc = 0x126B1Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126918_0x126918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B20u; }
    }
    if (ctx->pc != 0x126B20u) { return; }
    ctx->pc = 0x126B20u;
    // 0x126b20: 0x54400077
    ctx->pc = 0x126B20u;
    {
        const bool branch_taken_0x126b20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x126b20) {
            ctx->pc = 0x126B24u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x126D00u;
            goto label_126d00;
        }
    }
    ctx->pc = 0x126B28u;
    // 0x126b28: 0x93a30000
    ctx->pc = 0x126b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126b2c: 0x24060030
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x126b30: 0x2404003c
    ctx->pc = 0x126b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x126b34: 0x38670004
    ctx->pc = 0x126b34u;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 3), 4));
    // 0x126b38: 0x87300a
    ctx->pc = 0x126b38u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
    // 0x126b3c: 0x226182a
    ctx->pc = 0x126b3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 6)));
    // 0x126b40: 0x5460006e
    ctx->pc = 0x126B40u;
    {
        const bool branch_taken_0x126b40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x126b40) {
            ctx->pc = 0x126B44u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x126CFCu;
            goto label_126cfc;
        }
    }
    ctx->pc = 0x126B48u;
    // 0x126b48: 0x96030000
    ctx->pc = 0x126b48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126b4c: 0x34058000
    ctx->pc = 0x126b4cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x126b50: 0x32200
    ctx->pc = 0x126b50u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126b54: 0x31a02
    ctx->pc = 0x126b54u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x126b58: 0x641825
    ctx->pc = 0x126b58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126b5c: 0x3063ffff
    ctx->pc = 0x126b5cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x126b60: 0x14650027
    ctx->pc = 0x126B60u;
    {
        const bool branch_taken_0x126b60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x126B64u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x126b60) {
            ctx->pc = 0x126C00u;
            goto label_126c00;
        }
    }
    ctx->pc = 0x126B68u;
    // 0x126b68: 0x96030002
    ctx->pc = 0x126b68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x126b6c: 0x24c5fffc
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x126b70: 0x92040003
    ctx->pc = 0x126b70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x126b74: 0x31a00
    ctx->pc = 0x126b74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126b78: 0x6e1824
    ctx->pc = 0x126b78u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x126b7c: 0x832025
    ctx->pc = 0x126b7cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x126b80: 0x42400
    ctx->pc = 0x126b80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x126b84: 0x42403
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x126b88: 0x85202a
    ctx->pc = 0x126b88u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x126b8c: 0x10800004
    ctx->pc = 0x126B8Cu;
    {
        const bool branch_taken_0x126b8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x126B90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x126b8c) {
            ctx->pc = 0x126BA0u;
            goto label_126ba0;
        }
    }
    ctx->pc = 0x126B94u;
    // 0x126b94: 0x10000059
    ctx->pc = 0x126B94u;
    {
        const bool branch_taken_0x126b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126B98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x126b94) {
            ctx->pc = 0x126CFCu;
            goto label_126cfc;
        }
    }
    ctx->pc = 0x126B9Cu;
    // 0x126b9c: 0x0
    ctx->pc = 0x126b9cu;
    // NOP
label_126ba0:
    // 0x126ba0: 0x240d0014
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 20));
    // 0x126ba4: 0x67680a
    ctx->pc = 0x126ba4u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 13, GPR_U32(ctx, 3));
    // 0x126ba8: 0x24080001
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x126bac: 0x20d3021
    ctx->pc = 0x126bacu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126bb0: 0x25ad0002
    ctx->pc = 0x126bb0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
    // 0x126bb4: 0x20d3821
    ctx->pc = 0x126bb4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126bb8: 0x25ad0002
    ctx->pc = 0x126bb8u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
    // 0x126bbc: 0x94c50000
    ctx->pc = 0x126bbcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126bc0: 0x94e40000
    ctx->pc = 0x126bc0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x126bc4: 0x90c30001
    ctx->pc = 0x126bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x126bc8: 0x52a00
    ctx->pc = 0x126bc8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x126bcc: 0x90e60001
    ctx->pc = 0x126bccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x126bd0: 0x42200
    ctx->pc = 0x126bd0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x126bd4: 0x8e2024
    ctx->pc = 0x126bd4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x126bd8: 0xae2824
    ctx->pc = 0x126bd8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x126bdc: 0xc43025
    ctx->pc = 0x126bdcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x126be0: 0x651825
    ctx->pc = 0x126be0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126be4: 0x31c00
    ctx->pc = 0x126be4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x126be8: 0x62400
    ctx->pc = 0x126be8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 16));
    // 0x126bec: 0x31c03
    ctx->pc = 0x126becu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x126bf0: 0x42403
    ctx->pc = 0x126bf0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x126bf4: 0xae630000
    ctx->pc = 0x126bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x126bf8: 0x10880003
    ctx->pc = 0x126BF8u;
    {
        const bool branch_taken_0x126bf8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 8));
        ctx->pc = 0x126BFCu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x126bf8) {
            ctx->pc = 0x126C08u;
            goto label_126c08;
        }
    }
    ctx->pc = 0x126C00u;
label_126c00:
    // 0x126c00: 0x1000003e
    ctx->pc = 0x126C00u;
    {
        const bool branch_taken_0x126c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126C04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x126c00) {
            ctx->pc = 0x126CFCu;
            goto label_126cfc;
        }
    }
    ctx->pc = 0x126C08u;
label_126c08:
    // 0x126c08: 0x25ad0002
    ctx->pc = 0x126c08u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
    // 0x126c0c: 0x3c0900ff
    ctx->pc = 0x126c0cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)255 << 16));
    // 0x126c10: 0x20d5021
    ctx->pc = 0x126c10u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126c14: 0x25ad0002
    ctx->pc = 0x126c14u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
    // 0x126c18: 0x20d1821
    ctx->pc = 0x126c18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126c1c: 0x25ad0004
    ctx->pc = 0x126c1cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4));
    // 0x126c20: 0x8c650000
    ctx->pc = 0x126c20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126c24: 0x20d5821
    ctx->pc = 0x126c24u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126c28: 0x25ad0004
    ctx->pc = 0x126c28u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4));
    // 0x126c2c: 0x95470000
    ctx->pc = 0x126c2cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x126c30: 0x53203
    ctx->pc = 0x126c30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x126c34: 0x52200
    ctx->pc = 0x126c34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 8));
    // 0x126c38: 0x30c6ff00
    ctx->pc = 0x126c38u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x126c3c: 0x51e02
    ctx->pc = 0x126c3cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 24));
    // 0x126c40: 0x892024
    ctx->pc = 0x126c40u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x126c44: 0x52e00
    ctx->pc = 0x126c44u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x126c48: 0x862025
    ctx->pc = 0x126c48u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x126c4c: 0x651825
    ctx->pc = 0x126c4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126c50: 0x641825
    ctx->pc = 0x126c50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126c54: 0x20d6021
    ctx->pc = 0x126c54u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126c58: 0xae830000
    ctx->pc = 0x126c58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x126c5c: 0x1b06821
    ctx->pc = 0x126c5cu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x126c60: 0x91480001
    ctx->pc = 0x126c60u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x126c64: 0x73a00
    ctx->pc = 0x126c64u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x126c68: 0x8d650000
    ctx->pc = 0x126c68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126c6c: 0xee3824
    ctx->pc = 0x126c6cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x126c70: 0x1074025
    ctx->pc = 0x126c70u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x126c74: 0x53203
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x126c78: 0x52200
    ctx->pc = 0x126c78u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 8));
    // 0x126c7c: 0x30c6ff00
    ctx->pc = 0x126c7cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x126c80: 0x51e02
    ctx->pc = 0x126c80u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 24));
    // 0x126c84: 0x892024
    ctx->pc = 0x126c84u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x126c88: 0x52e00
    ctx->pc = 0x126c88u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x126c8c: 0x862025
    ctx->pc = 0x126c8cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x126c90: 0x651825
    ctx->pc = 0x126c90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126c94: 0x641825
    ctx->pc = 0x126c94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126c98: 0xa6c80000
    ctx->pc = 0x126c98u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x126c9c: 0xaea30000
    ctx->pc = 0x126c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x126ca0: 0x8d840000
    ctx->pc = 0x126ca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x126ca4: 0x43203
    ctx->pc = 0x126ca4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x126ca8: 0x42a00
    ctx->pc = 0x126ca8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x126cac: 0x30c6ff00
    ctx->pc = 0x126cacu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x126cb0: 0x41e02
    ctx->pc = 0x126cb0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 24));
    // 0x126cb4: 0xa92824
    ctx->pc = 0x126cb4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x126cb8: 0x42600
    ctx->pc = 0x126cb8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x126cbc: 0xa62825
    ctx->pc = 0x126cbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x126cc0: 0x641825
    ctx->pc = 0x126cc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126cc4: 0x651825
    ctx->pc = 0x126cc4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126cc8: 0xaee30000
    ctx->pc = 0x126cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x126ccc: 0x8da40004
    ctx->pc = 0x126cccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126cd0: 0x43203
    ctx->pc = 0x126cd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x126cd4: 0x42a00
    ctx->pc = 0x126cd4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x126cd8: 0x41e02
    ctx->pc = 0x126cd8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 24));
    // 0x126cdc: 0x42600
    ctx->pc = 0x126cdcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x126ce0: 0xa92824
    ctx->pc = 0x126ce0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x126ce4: 0x30c6ff00
    ctx->pc = 0x126ce4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x126ce8: 0x641825
    ctx->pc = 0x126ce8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126cec: 0x8fa40060
    ctx->pc = 0x126cecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126cf0: 0xa62825
    ctx->pc = 0x126cf0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x126cf4: 0x651825
    ctx->pc = 0x126cf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126cf8: 0xac830000
    ctx->pc = 0x126cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_126cfc:
    // 0x126cfc: 0xdfb00010
    ctx->pc = 0x126cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126d00:
    // 0x126d00: 0xdfb10018
    ctx->pc = 0x126d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126d04: 0xdfb20020
    ctx->pc = 0x126d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126d08: 0xdfb30028
    ctx->pc = 0x126d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126d0c: 0xdfb40030
    ctx->pc = 0x126d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d10: 0xdfb50038
    ctx->pc = 0x126d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126d14: 0xdfb60040
    ctx->pc = 0x126d14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126d18: 0xdfb70048
    ctx->pc = 0x126d18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d1c: 0xdfbf0050
    ctx->pc = 0x126d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126d20: 0x3e00008
    ctx->pc = 0x126D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126D24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126BA0u: goto label_126ba0;
            case 0x126C00u: goto label_126c00;
            case 0x126C08u: goto label_126c08;
            case 0x126CFCu: goto label_126cfc;
            case 0x126D00u: goto label_126d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126D28u;
}
