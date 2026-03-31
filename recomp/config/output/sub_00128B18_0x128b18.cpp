#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128B18
// Address: 0x128b18 - 0x128f28
void sub_00128B18_0x128b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128b18u;

    // 0x128b18: 0x27bdfff0
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128b1c: 0xffbf0000
    ctx->pc = 0x128b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128b20: 0xdfbf0000
    ctx->pc = 0x128b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b24: 0x804a2cc
    ctx->pc = 0x128B24u;
    ctx->pc = 0x128B28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x128B30u;
    goto label_128b30;
    ctx->pc = 0x128B2Cu;
    // 0x128b2c: 0x0
    ctx->pc = 0x128b2cu;
    // NOP
label_128b30:
    // 0x128b30: 0x3c020021
    ctx->pc = 0x128b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x128b34: 0x27bdffa0
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x128b38: 0x8c43d234
    ctx->pc = 0x128b38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955572)));
    // 0x128b3c: 0xffb00010
    ctx->pc = 0x128b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x128b40: 0x80802d
    ctx->pc = 0x128b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b44: 0xffb30028
    ctx->pc = 0x128b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x128b48: 0x982d
    ctx->pc = 0x128b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b4c: 0xffb40030
    ctx->pc = 0x128b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x128b50: 0xa02d
    ctx->pc = 0x128b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b54: 0xffbe0050
    ctx->pc = 0x128b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x128b58: 0xf02d
    ctx->pc = 0x128b58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b5c: 0xffb10018
    ctx->pc = 0x128b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x128b60: 0xffb20020
    ctx->pc = 0x128b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x128b64: 0xffb50038
    ctx->pc = 0x128b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x128b68: 0xffb60040
    ctx->pc = 0x128b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x128b6c: 0xffb70048
    ctx->pc = 0x128b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x128b70: 0xffbf0058
    ctx->pc = 0x128b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x128b74: 0x12030006
    ctx->pc = 0x128B74u;
    {
        const bool branch_taken_0x128b74 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x128B78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x128b74) {
            ctx->pc = 0x128B90u;
            goto label_128b90;
        }
    }
    ctx->pc = 0x128B7Cu;
    // 0x128b7c: 0x3c040024
    ctx->pc = 0x128b7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x128b80: 0xc04a034
    ctx->pc = 0x128B80u;
    SET_GPR_U32(ctx, 31, 0x128B88u);
    ctx->pc = 0x128B84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942088));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B88u; }
    }
    if (ctx->pc != 0x128B88u) { return; }
    ctx->pc = 0x128B88u;
    // 0x128b88: 0x100000d5
    ctx->pc = 0x128B88u;
    {
        const bool branch_taken_0x128b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128B8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x128b88) {
            ctx->pc = 0x128EE0u;
            goto label_128ee0;
        }
    }
    ctx->pc = 0x128B90u;
label_128b90:
    // 0x128b90: 0x3c020021
    ctx->pc = 0x128b90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x128b94: 0xc04a752
    ctx->pc = 0x128B94u;
    SET_GPR_U32(ctx, 31, 0x128B9Cu);
    ctx->pc = 0x128B98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955568)));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B9Cu; }
    }
    if (ctx->pc != 0x128B9Cu) { return; }
    ctx->pc = 0x128B9Cu;
    // 0x128b9c: 0x24030003
    ctx->pc = 0x128b9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ba0: 0x40b02d
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ba4: 0x56c300cf
    ctx->pc = 0x128BA4u;
    {
        const bool branch_taken_0x128ba4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 3));
        if (branch_taken_0x128ba4) {
            ctx->pc = 0x128BA8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x128EE4u;
            goto label_128ee4;
        }
    }
    ctx->pc = 0x128BACu;
    // 0x128bac: 0x101080
    ctx->pc = 0x128bacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x128bb0: 0x24040001
    ctx->pc = 0x128bb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128bb4: 0x3c100021
    ctx->pc = 0x128bb4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x128bb8: 0x2028021
    ctx->pc = 0x128bb8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x128bbc: 0x8e10cd00
    ctx->pc = 0x128bbcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x128bc0: 0x8203000f
    ctx->pc = 0x128bc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x128bc4: 0x14640004
    ctx->pc = 0x128BC4u;
    {
        const bool branch_taken_0x128bc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x128BC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 282));
        if (branch_taken_0x128bc4) {
            ctx->pc = 0x128BD8u;
            goto label_128bd8;
        }
    }
    ctx->pc = 0x128BCCu;
    // 0x128bcc: 0x26130118
    ctx->pc = 0x128bccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 280));
    // 0x128bd0: 0x10000003
    ctx->pc = 0x128BD0u;
    {
        const bool branch_taken_0x128bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128BD4u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 16), 284));
        if (branch_taken_0x128bd0) {
            ctx->pc = 0x128BE0u;
            goto label_128be0;
        }
    }
    ctx->pc = 0x128BD8u;
label_128bd8:
    // 0x128bd8: 0x26140118
    ctx->pc = 0x128bd8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 280));
    // 0x128bdc: 0xafa30000
    ctx->pc = 0x128bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_128be0:
    // 0x128be0: 0x8e020008
    ctx->pc = 0x128be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x128be4: 0x14400060
    ctx->pc = 0x128BE4u;
    {
        const bool branch_taken_0x128be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128BE8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x128be4) {
            ctx->pc = 0x128D68u;
            goto label_128d68;
        }
    }
    ctx->pc = 0x128BECu;
    // 0x128bec: 0x3c170021
    ctx->pc = 0x128becu;
    SET_GPR_U32(ctx, 23, ((uint32_t)33 << 16));
    // 0x128bf0: 0x3c050024
    ctx->pc = 0x128bf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x128bf4: 0x26f1d238
    ctx->pc = 0x128bf4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 23), 4294955576));
    // 0x128bf8: 0x24a59dc0
    ctx->pc = 0x128bf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942144));
    // 0x128bfc: 0x8e240000
    ctx->pc = 0x128bfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128c00: 0x24060003
    ctx->pc = 0x128c00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x128c04: 0xc041e86
    ctx->pc = 0x128C04u;
    SET_GPR_U32(ctx, 31, 0x128C0Cu);
    ctx->pc = 0x128C08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C0Cu; }
    }
    if (ctx->pc != 0x128C0Cu) { return; }
    ctx->pc = 0x128C0Cu;
    // 0x128c0c: 0x10400004
    ctx->pc = 0x128C0Cu;
    {
        const bool branch_taken_0x128c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x128C10u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x128c0c) {
            ctx->pc = 0x128C20u;
            goto label_128c20;
        }
    }
    ctx->pc = 0x128C14u;
    // 0x128c14: 0x100000aa
    ctx->pc = 0x128C14u;
    {
        const bool branch_taken_0x128c14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128C18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942152));
        if (branch_taken_0x128c14) {
            ctx->pc = 0x128EC0u;
            goto label_128ec0;
        }
    }
    ctx->pc = 0x128C1Cu;
    // 0x128c1c: 0x0
    ctx->pc = 0x128c1cu;
    // NOP
label_128c20:
    // 0x128c20: 0x8e220000
    ctx->pc = 0x128c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128c24: 0x3c060001
    ctx->pc = 0x128c24u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x128c28: 0x24480005
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 5));
    // 0x128c2c: 0x90450007
    ctx->pc = 0x128c2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x128c30: 0x90430006
    ctx->pc = 0x128c30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x128c34: 0x24470004
    ctx->pc = 0x128c34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4));
    // 0x128c38: 0x91040000
    ctx->pc = 0x128c38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x128c3c: 0x52e00
    ctx->pc = 0x128c3cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x128c40: 0x90e20000
    ctx->pc = 0x128c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x128c44: 0x31c00
    ctx->pc = 0x128c44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x128c48: 0x42200
    ctx->pc = 0x128c48u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x128c4c: 0x451025
    ctx->pc = 0x128c4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x128c50: 0x641825
    ctx->pc = 0x128c50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128c54: 0x431025
    ctx->pc = 0x128c54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128c58: 0xc2302a
    ctx->pc = 0x128c58u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x128c5c: 0x10c00004
    ctx->pc = 0x128C5Cu;
    {
        const bool branch_taken_0x128c5c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x128C60u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x128c5c) {
            ctx->pc = 0x128C70u;
            goto label_128c70;
        }
    }
    ctx->pc = 0x128C64u;
    // 0x128c64: 0x3c040024
    ctx->pc = 0x128c64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x128c68: 0x10000095
    ctx->pc = 0x128C68u;
    {
        const bool branch_taken_0x128c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128C6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942208));
        if (branch_taken_0x128c68) {
            ctx->pc = 0x128EC0u;
            goto label_128ec0;
        }
    }
    ctx->pc = 0x128C70u;
label_128c70:
    // 0x128c70: 0x91020000
    ctx->pc = 0x128c70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x128c74: 0x90e30000
    ctx->pc = 0x128c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x128c78: 0x21200
    ctx->pc = 0x128c78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x128c7c: 0x8204000f
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x128c80: 0x621825
    ctx->pc = 0x128c80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128c84: 0x9205000f
    ctx->pc = 0x128c84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x128c88: 0x60102d
    ctx->pc = 0x128c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c8c: 0xa603000c
    ctx->pc = 0x128c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x128c90: 0x14910005
    ctx->pc = 0x128C90u;
    {
        const bool branch_taken_0x128c90 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 17));
        ctx->pc = 0x128C94u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x128c90) {
            ctx->pc = 0x128CA8u;
            goto label_128ca8;
        }
    }
    ctx->pc = 0x128C98u;
    // 0x128c98: 0x21080
    ctx->pc = 0x128c98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x128c9c: 0x10000006
    ctx->pc = 0x128C9Cu;
    {
        const bool branch_taken_0x128c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128CA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 288));
        if (branch_taken_0x128c9c) {
            ctx->pc = 0x128CB8u;
            goto label_128cb8;
        }
    }
    ctx->pc = 0x128CA4u;
    // 0x128ca4: 0x0
    ctx->pc = 0x128ca4u;
    // NOP
label_128ca8:
    // 0x128ca8: 0x21040
    ctx->pc = 0x128ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x128cac: 0x2442011c
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 284));
    // 0x128cb0: 0x21082
    ctx->pc = 0x128cb0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x128cb4: 0x21080
    ctx->pc = 0x128cb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_128cb8:
    // 0x128cb8: 0xae020004
    ctx->pc = 0x128cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x128cbc: 0x51600
    ctx->pc = 0x128cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
    // 0x128cc0: 0x24030001
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128cc4: 0x21603
    ctx->pc = 0x128cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x128cc8: 0x14430011
    ctx->pc = 0x128CC8u;
    {
        const bool branch_taken_0x128cc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x128CCCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294955576)));
        if (branch_taken_0x128cc8) {
            ctx->pc = 0x128D10u;
            goto label_128d10;
        }
    }
    ctx->pc = 0x128CD0u;
    // 0x128cd0: 0x90660009
    ctx->pc = 0x128cd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x128cd4: 0x9065000b
    ctx->pc = 0x128cd4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x128cd8: 0x9064000a
    ctx->pc = 0x128cd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x128cdc: 0x63200
    ctx->pc = 0x128cdcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x128ce0: 0x90620008
    ctx->pc = 0x128ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128ce4: 0x52e00
    ctx->pc = 0x128ce4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x128ce8: 0x42400
    ctx->pc = 0x128ce8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x128cec: 0x451025
    ctx->pc = 0x128cecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x128cf0: 0x862025
    ctx->pc = 0x128cf0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x128cf4: 0x441025
    ctx->pc = 0x128cf4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128cf8: 0x244507ff
    ctx->pc = 0x128cf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x128cfc: 0x28430000
    ctx->pc = 0x128cfcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x128d00: 0xa3100b
    ctx->pc = 0x128d00u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x128d04: 0x212c3
    ctx->pc = 0x128d04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x128d08: 0x10000010
    ctx->pc = 0x128D08u;
    {
        const bool branch_taken_0x128d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128D0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x128d08) {
            ctx->pc = 0x128D4Cu;
            goto label_128d4c;
        }
    }
    ctx->pc = 0x128D10u;
label_128d10:
    // 0x128d10: 0x90660009
    ctx->pc = 0x128d10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x128d14: 0x9065000b
    ctx->pc = 0x128d14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x128d18: 0x9064000a
    ctx->pc = 0x128d18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x128d1c: 0x63200
    ctx->pc = 0x128d1cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x128d20: 0x90620008
    ctx->pc = 0x128d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128d24: 0x52e00
    ctx->pc = 0x128d24u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x128d28: 0x42400
    ctx->pc = 0x128d28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x128d2c: 0x451025
    ctx->pc = 0x128d2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x128d30: 0x862025
    ctx->pc = 0x128d30u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x128d34: 0x441025
    ctx->pc = 0x128d34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128d38: 0x244507ff
    ctx->pc = 0x128d38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x128d3c: 0x28430000
    ctx->pc = 0x128d3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x128d40: 0xa3100b
    ctx->pc = 0x128d40u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x128d44: 0x212c3
    ctx->pc = 0x128d44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x128d48: 0xa6820000
    ctx->pc = 0x128d48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_128d4c:
    // 0x128d4c: 0x10000007
    ctx->pc = 0x128D4Cu;
    {
        const bool branch_taken_0x128d4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128D50u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x128d4c) {
            ctx->pc = 0x128D6Cu;
            goto label_128d6c;
        }
    }
    ctx->pc = 0x128D54u;
    // 0x128d54: 0x0
    ctx->pc = 0x128d54u;
    // NOP
label_128d58:
    // 0x128d58: 0xc04a298
    ctx->pc = 0x128D58u;
    SET_GPR_U32(ctx, 31, 0x128D60u);
    ctx->pc = 0x128D5Cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x128A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128A60_0x128a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D60u; }
    }
    if (ctx->pc != 0x128D60u) { return; }
    ctx->pc = 0x128D60u;
    // 0x128d60: 0x10000045
    ctx->pc = 0x128D60u;
    {
        const bool branch_taken_0x128d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x128d60) {
            ctx->pc = 0x128E78u;
            goto label_128e78;
        }
    }
    ctx->pc = 0x128D68u;
label_128d68:
    // 0x128d68: 0x3c170021
    ctx->pc = 0x128d68u;
    SET_GPR_U32(ctx, 23, ((uint32_t)33 << 16));
label_128d6c:
    // 0x128d6c: 0x3c060021
    ctx->pc = 0x128d6cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x128d70: 0x8cc2d23c
    ctx->pc = 0x128d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294955580)));
    // 0x128d74: 0x2a240
    ctx->pc = 0x128d74u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 2), 9));
    // 0x128d78: 0x234982a
    ctx->pc = 0x128d78u;
    SET_GPR_U32(ctx, 19, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x128d7c: 0x12600041
    ctx->pc = 0x128D7Cu;
    {
        const bool branch_taken_0x128d7c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x128D80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x128d7c) {
            ctx->pc = 0x128E84u;
            goto label_128e84;
        }
    }
    ctx->pc = 0x128D84u;
    // 0x128d84: 0x3c150021
    ctx->pc = 0x128d84u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
    // 0x128d88: 0x26b2d22c
    ctx->pc = 0x128d88u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 4294955564));
    // 0x128d8c: 0x8203000f
    ctx->pc = 0x128d8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_128d90:
    // 0x128d90: 0x24020001
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x128d94: 0x14620016
    ctx->pc = 0x128D94u;
    {
        const bool branch_taken_0x128d94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x128D98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294955576)));
        if (branch_taken_0x128d94) {
            ctx->pc = 0x128DF0u;
            goto label_128df0;
        }
    }
    ctx->pc = 0x128D9Cu;
    // 0x128d9c: 0x111080
    ctx->pc = 0x128d9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x128da0: 0x431021
    ctx->pc = 0x128da0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128da4: 0x90460001
    ctx->pc = 0x128da4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x128da8: 0x90450003
    ctx->pc = 0x128da8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x128dac: 0x90440002
    ctx->pc = 0x128dacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x128db0: 0x63200
    ctx->pc = 0x128db0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x128db4: 0x90430000
    ctx->pc = 0x128db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128db8: 0x52e00
    ctx->pc = 0x128db8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x128dbc: 0x42400
    ctx->pc = 0x128dbcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x128dc0: 0x651825
    ctx->pc = 0x128dc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128dc4: 0x862025
    ctx->pc = 0x128dc4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x128dc8: 0xc04a134
    ctx->pc = 0x128DC8u;
    SET_GPR_U32(ctx, 31, 0x128DD0u);
    ctx->pc = 0x128DCCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1284D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284D0_0x1284d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128DD0u; }
    }
    if (ctx->pc != 0x128DD0u) { return; }
    ctx->pc = 0x128DD0u;
    // 0x128dd0: 0x2a0282d
    ctx->pc = 0x128dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dd4: 0x8e440000
    ctx->pc = 0x128dd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x128dd8: 0x41880
    ctx->pc = 0x128dd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x128ddc: 0x24840001
    ctx->pc = 0x128ddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x128de0: 0x7e1821
    ctx->pc = 0x128de0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x128de4: 0xac620000
    ctx->pc = 0x128de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x128de8: 0x1000001a
    ctx->pc = 0x128DE8u;
    {
        const bool branch_taken_0x128de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128DECu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x128de8) {
            ctx->pc = 0x128E54u;
            goto label_128e54;
        }
    }
    ctx->pc = 0x128DF0u;
label_128df0:
    // 0x128df0: 0x111080
    ctx->pc = 0x128df0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x128df4: 0x431021
    ctx->pc = 0x128df4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128df8: 0x90460001
    ctx->pc = 0x128df8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x128dfc: 0x90450003
    ctx->pc = 0x128dfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x128e00: 0x90440002
    ctx->pc = 0x128e00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x128e04: 0x63200
    ctx->pc = 0x128e04u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x128e08: 0x90430000
    ctx->pc = 0x128e08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128e0c: 0x52e00
    ctx->pc = 0x128e0cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x128e10: 0x42400
    ctx->pc = 0x128e10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x128e14: 0x651825
    ctx->pc = 0x128e14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128e18: 0x862025
    ctx->pc = 0x128e18u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x128e1c: 0xc04a134
    ctx->pc = 0x128E1Cu;
    SET_GPR_U32(ctx, 31, 0x128E24u);
    ctx->pc = 0x128E20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1284D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284D0_0x1284d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E24u; }
    }
    if (ctx->pc != 0x128E24u) { return; }
    ctx->pc = 0x128E24u;
    // 0x128e24: 0x40202d
    ctx->pc = 0x128e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e28: 0x3c02ffff
    ctx->pc = 0x128e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x128e2c: 0x821024
    ctx->pc = 0x128e2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x128e30: 0x14400021
    ctx->pc = 0x128E30u;
    {
        const bool branch_taken_0x128e30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x128E34u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128e30) {
            ctx->pc = 0x128EB8u;
            goto label_128eb8;
        }
    }
    ctx->pc = 0x128E38u;
    // 0x128e38: 0x8e430000
    ctx->pc = 0x128e38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x128e3c: 0x8fa60000
    ctx->pc = 0x128e3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128e40: 0x31040
    ctx->pc = 0x128e40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x128e44: 0x24630001
    ctx->pc = 0x128e44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x128e48: 0x461021
    ctx->pc = 0x128e48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x128e4c: 0xa4440000
    ctx->pc = 0x128e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x128e50: 0xae430000
    ctx->pc = 0x128e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_128e54:
    // 0x128e54: 0x8ca2d22c
    ctx->pc = 0x128e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294955564)));
    // 0x128e58: 0x8e030008
    ctx->pc = 0x128e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x128e5c: 0x43102a
    ctx->pc = 0x128e5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x128e60: 0x1040ffbd
    ctx->pc = 0x128E60u;
    {
        const bool branch_taken_0x128e60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x128e60) {
            ctx->pc = 0x128D58u;
            goto label_128d58;
        }
    }
    ctx->pc = 0x128E68u;
    // 0x128e68: 0x26310002
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x128e6c: 0x234982a
    ctx->pc = 0x128e6cu;
    SET_GPR_U32(ctx, 19, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x128e70: 0x5660ffc7
    ctx->pc = 0x128E70u;
    {
        const bool branch_taken_0x128e70 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x128e70) {
            ctx->pc = 0x128E74u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->pc = 0x128D90u;
            goto label_128d90;
        }
    }
    ctx->pc = 0x128E78u;
label_128e78:
    // 0x128e78: 0x16600019
    ctx->pc = 0x128E78u;
    {
        const bool branch_taken_0x128e78 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x128E7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128e78) {
            ctx->pc = 0x128EE0u;
            goto label_128ee0;
        }
    }
    ctx->pc = 0x128E80u;
    // 0x128e80: 0x3c020021
    ctx->pc = 0x128e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_128e84:
    // 0x128e84: 0x3c030021
    ctx->pc = 0x128e84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x128e88: 0x2450d230
    ctx->pc = 0x128e88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294955568));
    // 0x128e8c: 0x8c65d23c
    ctx->pc = 0x128e8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294955580)));
    // 0x128e90: 0x8ee6d238
    ctx->pc = 0x128e90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294955576)));
    // 0x128e94: 0xc04a5e8
    ctx->pc = 0x128E94u;
    SET_GPR_U32(ctx, 31, 0x128E9Cu);
    ctx->pc = 0x128E98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E9Cu; }
    }
    if (ctx->pc != 0x128E9Cu) { return; }
    ctx->pc = 0x128E9Cu;
    // 0x128e9c: 0x443000e
    ctx->pc = 0x128E9Cu;
    {
        const bool branch_taken_0x128e9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x128e9c) {
            ctx->pc = 0x128EA0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x128ED8u;
            goto label_128ed8;
        }
    }
    ctx->pc = 0x128EA4u;
    // 0x128ea4: 0xc04a298
    ctx->pc = 0x128EA4u;
    SET_GPR_U32(ctx, 31, 0x128EACu);
    ctx->pc = 0x128EA8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x128A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128A60_0x128a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EACu; }
    }
    if (ctx->pc != 0x128EACu) { return; }
    ctx->pc = 0x128EACu;
    // 0x128eac: 0x1000000c
    ctx->pc = 0x128EACu;
    {
        const bool branch_taken_0x128eac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128EB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x128eac) {
            ctx->pc = 0x128EE0u;
            goto label_128ee0;
        }
    }
    ctx->pc = 0x128EB4u;
    // 0x128eb4: 0x0
    ctx->pc = 0x128eb4u;
    // NOP
label_128eb8:
    // 0x128eb8: 0x3c040024
    ctx->pc = 0x128eb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x128ebc: 0x24849e38
    ctx->pc = 0x128ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942264));
label_128ec0:
    // 0x128ec0: 0xc04a034
    ctx->pc = 0x128EC0u;
    SET_GPR_U32(ctx, 31, 0x128EC8u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EC8u; }
    }
    if (ctx->pc != 0x128EC8u) { return; }
    ctx->pc = 0x128EC8u;
    // 0x128ec8: 0xc04a298
    ctx->pc = 0x128EC8u;
    SET_GPR_U32(ctx, 31, 0x128ED0u);
    ctx->pc = 0x128A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128A60_0x128a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128ED0u; }
    }
    if (ctx->pc != 0x128ED0u) { return; }
    ctx->pc = 0x128ED0u;
    // 0x128ed0: 0x10000003
    ctx->pc = 0x128ED0u;
    {
        const bool branch_taken_0x128ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x128ED4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x128ed0) {
            ctx->pc = 0x128EE0u;
            goto label_128ee0;
        }
    }
    ctx->pc = 0x128ED8u;
label_128ed8:
    // 0x128ed8: 0x80560001
    ctx->pc = 0x128ed8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x128edc: 0x2c0102d
    ctx->pc = 0x128edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_128ee0:
    // 0x128ee0: 0xdfb00010
    ctx->pc = 0x128ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128ee4:
    // 0x128ee4: 0xdfb10018
    ctx->pc = 0x128ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128ee8: 0xdfb20020
    ctx->pc = 0x128ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128eec: 0xdfb30028
    ctx->pc = 0x128eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x128ef0: 0xdfb40030
    ctx->pc = 0x128ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128ef4: 0xdfb50038
    ctx->pc = 0x128ef4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x128ef8: 0xdfb60040
    ctx->pc = 0x128ef8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128efc: 0xdfb70048
    ctx->pc = 0x128efcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128f00: 0xdfbe0050
    ctx->pc = 0x128f00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128f04: 0xdfbf0058
    ctx->pc = 0x128f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x128f08: 0x3e00008
    ctx->pc = 0x128F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128B30u: goto label_128b30;
            case 0x128B90u: goto label_128b90;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BE0u: goto label_128be0;
            case 0x128C20u: goto label_128c20;
            case 0x128C70u: goto label_128c70;
            case 0x128CA8u: goto label_128ca8;
            case 0x128CB8u: goto label_128cb8;
            case 0x128D10u: goto label_128d10;
            case 0x128D4Cu: goto label_128d4c;
            case 0x128D58u: goto label_128d58;
            case 0x128D68u: goto label_128d68;
            case 0x128D6Cu: goto label_128d6c;
            case 0x128D90u: goto label_128d90;
            case 0x128DF0u: goto label_128df0;
            case 0x128E54u: goto label_128e54;
            case 0x128E78u: goto label_128e78;
            case 0x128E84u: goto label_128e84;
            case 0x128EB8u: goto label_128eb8;
            case 0x128EC0u: goto label_128ec0;
            case 0x128ED8u: goto label_128ed8;
            case 0x128EE0u: goto label_128ee0;
            case 0x128EE4u: goto label_128ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128F10u;
    // 0x128f10: 0x42080
    ctx->pc = 0x128f10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x128f14: 0x3c030021
    ctx->pc = 0x128f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x128f18: 0x641821
    ctx->pc = 0x128f18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128f1c: 0x8c63cd00
    ctx->pc = 0x128f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954240)));
    // 0x128f20: 0x3e00008
    ctx->pc = 0x128F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128B30u: goto label_128b30;
            case 0x128B90u: goto label_128b90;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BE0u: goto label_128be0;
            case 0x128C20u: goto label_128c20;
            case 0x128C70u: goto label_128c70;
            case 0x128CA8u: goto label_128ca8;
            case 0x128CB8u: goto label_128cb8;
            case 0x128D10u: goto label_128d10;
            case 0x128D4Cu: goto label_128d4c;
            case 0x128D58u: goto label_128d58;
            case 0x128D68u: goto label_128d68;
            case 0x128D6Cu: goto label_128d6c;
            case 0x128D90u: goto label_128d90;
            case 0x128DF0u: goto label_128df0;
            case 0x128E54u: goto label_128e54;
            case 0x128E78u: goto label_128e78;
            case 0x128E84u: goto label_128e84;
            case 0x128EB8u: goto label_128eb8;
            case 0x128EC0u: goto label_128ec0;
            case 0x128ED8u: goto label_128ed8;
            case 0x128EE0u: goto label_128ee0;
            case 0x128EE4u: goto label_128ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128F28u;
}
