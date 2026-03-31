#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00121A28
// Address: 0x121a28 - 0x121ef0
void sub_00121A28_0x121a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121a28u;

    // 0x121a28: 0x27bdffc0
    ctx->pc = 0x121a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x121a2c: 0xffb30018
    ctx->pc = 0x121a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121a30: 0x80982d
    ctx->pc = 0x121a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a34: 0xffb00000
    ctx->pc = 0x121a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121a38: 0xffb10008
    ctx->pc = 0x121a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121a3c: 0xffb20010
    ctx->pc = 0x121a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121a40: 0xffb40020
    ctx->pc = 0x121a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x121a44: 0xffb50028
    ctx->pc = 0x121a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x121a48: 0x260102d
    ctx->pc = 0x121a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a4c: 0x2a83f
    ctx->pc = 0x121a4cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x121a50: 0x3c037fff
    ctx->pc = 0x121a50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x121a54: 0x3c02440f
    ctx->pc = 0x121a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17423 << 16));
    // 0x121a58: 0x3463ffff
    ctx->pc = 0x121a58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x121a5c: 0x3442ffff
    ctx->pc = 0x121a5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x121a60: 0x2a38024
    ctx->pc = 0x121a60u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x121a64: 0x50102a
    ctx->pc = 0x121a64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x121a68: 0x10400027
    ctx->pc = 0x121A68u;
    {
        const bool branch_taken_0x121a68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121A6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x121a68) {
            ctx->pc = 0x121B08u;
            goto label_121b08;
        }
    }
    ctx->pc = 0x121A70u;
    // 0x121a70: 0x260102d
    ctx->pc = 0x121a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a74: 0x2283c
    ctx->pc = 0x121a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121a78: 0x5283f
    ctx->pc = 0x121a78u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x121a7c: 0x3c037ff0
    ctx->pc = 0x121a7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
    // 0x121a80: 0x70102a
    ctx->pc = 0x121a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x121a84: 0x14400005
    ctx->pc = 0x121A84u;
    {
        const bool branch_taken_0x121a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x121a84) {
            ctx->pc = 0x121A9Cu;
            goto label_121a9c;
        }
    }
    ctx->pc = 0x121A8Cu;
    // 0x121a8c: 0x16030008
    ctx->pc = 0x121A8Cu;
    {
        const bool branch_taken_0x121a8c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x121a8c) {
            ctx->pc = 0x121AB0u;
            goto label_121ab0;
        }
    }
    ctx->pc = 0x121A94u;
    // 0x121a94: 0x10a00006
    ctx->pc = 0x121A94u;
    {
        const bool branch_taken_0x121a94 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x121a94) {
            ctx->pc = 0x121AB0u;
            goto label_121ab0;
        }
    }
    ctx->pc = 0x121A9Cu;
label_121a9c:
    // 0x121a9c: 0x260282d
    ctx->pc = 0x121a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121aa0: 0xc04473c
    ctx->pc = 0x121AA0u;
    SET_GPR_U32(ctx, 31, 0x121AA8u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AA8u; }
    }
    if (ctx->pc != 0x121AA8u) { return; }
    ctx->pc = 0x121AA8u;
    // 0x121aa8: 0x10000109
    ctx->pc = 0x121AA8u;
    {
        const bool branch_taken_0x121aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121AACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x121aa8) {
            ctx->pc = 0x121ED0u;
            goto label_121ed0;
        }
    }
    ctx->pc = 0x121AB0u;
label_121ab0:
    // 0x121ab0: 0x1aa00009
    ctx->pc = 0x121AB0u;
    {
        const bool branch_taken_0x121ab0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x121AB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x121ab0) {
            ctx->pc = 0x121AD8u;
            goto label_121ad8;
        }
    }
    ctx->pc = 0x121AB8u;
    // 0x121ab8: 0x3c030024
    ctx->pc = 0x121ab8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x121abc: 0xdc449210
    ctx->pc = 0x121abcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294939152)));
    // 0x121ac0: 0xdc659230
    ctx->pc = 0x121ac0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294939184)));
    // 0x121ac4: 0xc04473c
    ctx->pc = 0x121AC4u;
    SET_GPR_U32(ctx, 31, 0x121ACCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121ACCu; }
    }
    if (ctx->pc != 0x121ACCu) { return; }
    ctx->pc = 0x121ACCu;
    // 0x121acc: 0x10000100
    ctx->pc = 0x121ACCu;
    {
        const bool branch_taken_0x121acc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121AD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x121acc) {
            ctx->pc = 0x121ED0u;
            goto label_121ed0;
        }
    }
    ctx->pc = 0x121AD4u;
    // 0x121ad4: 0x0
    ctx->pc = 0x121ad4u;
    // NOP
label_121ad8:
    // 0x121ad8: 0x202d
    ctx->pc = 0x121ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121adc: 0xdc459210
    ctx->pc = 0x121adcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294939152)));
    // 0x121ae0: 0xc044752
    ctx->pc = 0x121AE0u;
    SET_GPR_U32(ctx, 31, 0x121AE8u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AE8u; }
    }
    if (ctx->pc != 0x121AE8u) { return; }
    ctx->pc = 0x121AE8u;
    // 0x121ae8: 0x3c030024
    ctx->pc = 0x121ae8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x121aec: 0xdc659230
    ctx->pc = 0x121aecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294939184)));
    // 0x121af0: 0x40202d
    ctx->pc = 0x121af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121af4: 0xc044752
    ctx->pc = 0x121AF4u;
    SET_GPR_U32(ctx, 31, 0x121AFCu);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AFCu; }
    }
    if (ctx->pc != 0x121AFCu) { return; }
    ctx->pc = 0x121AFCu;
    // 0x121afc: 0x100000f4
    ctx->pc = 0x121AFCu;
    {
        const bool branch_taken_0x121afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121B00u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x121afc) {
            ctx->pc = 0x121ED0u;
            goto label_121ed0;
        }
    }
    ctx->pc = 0x121B04u;
    // 0x121b04: 0x0
    ctx->pc = 0x121b04u;
    // NOP
label_121b08:
    // 0x121b08: 0x3c023fdb
    ctx->pc = 0x121b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16347 << 16));
    // 0x121b0c: 0x3442ffff
    ctx->pc = 0x121b0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x121b10: 0x50102a
    ctx->pc = 0x121b10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x121b14: 0x14400014
    ctx->pc = 0x121B14u;
    {
        const bool branch_taken_0x121b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x121B18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15903 << 16));
        if (branch_taken_0x121b14) {
            ctx->pc = 0x121B68u;
            goto label_121b68;
        }
    }
    ctx->pc = 0x121B1Cu;
    // 0x121b1c: 0x3442ffff
    ctx->pc = 0x121b1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x121b20: 0x50102a
    ctx->pc = 0x121b20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x121b24: 0x1440005e
    ctx->pc = 0x121B24u;
    {
        const bool branch_taken_0x121b24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x121B28u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x121b24) {
            ctx->pc = 0x121CA0u;
            goto label_121ca0;
        }
    }
    ctx->pc = 0x121B2Cu;
    // 0x121b2c: 0x3c020024
    ctx->pc = 0x121b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x121b30: 0xdc4592a0
    ctx->pc = 0x121b30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294939296)));
    // 0x121b34: 0xc04473c
    ctx->pc = 0x121B34u;
    SET_GPR_U32(ctx, 31, 0x121B3Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B3Cu; }
    }
    if (ctx->pc != 0x121B3Cu) { return; }
    ctx->pc = 0x121B3Cu;
    // 0x121b3c: 0x3405ffc0
    ctx->pc = 0x121b3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x121b40: 0x52bbc
    ctx->pc = 0x121b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x121b44: 0x40202d
    ctx->pc = 0x121b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b48: 0xc0448a6
    ctx->pc = 0x121B48u;
    SET_GPR_U32(ctx, 31, 0x121B50u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B50u; }
    }
    if (ctx->pc != 0x121B50u) { return; }
    ctx->pc = 0x121B50u;
    // 0x121b50: 0x18400053
    ctx->pc = 0x121B50u;
    {
        const bool branch_taken_0x121b50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x121B54u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x121b50) {
            ctx->pc = 0x121CA0u;
            goto label_121ca0;
        }
    }
    ctx->pc = 0x121B58u;
    // 0x121b58: 0x260102d
    ctx->pc = 0x121b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b5c: 0x100000dd
    ctx->pc = 0x121B5Cu;
    {
        const bool branch_taken_0x121b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121B60u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x121b5c) {
            ctx->pc = 0x121ED4u;
            goto label_121ed4;
        }
    }
    ctx->pc = 0x121B64u;
    // 0x121b64: 0x0
    ctx->pc = 0x121b64u;
    // NOP
label_121b68:
    // 0x121b68: 0xc0487bc
    ctx->pc = 0x121B68u;
    SET_GPR_U32(ctx, 31, 0x121B70u);
    ctx->pc = 0x121EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121EF0_0x121ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B70u; }
    }
    if (ctx->pc != 0x121B70u) { return; }
    ctx->pc = 0x121B70u;
    // 0x121b70: 0x40982d
    ctx->pc = 0x121b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b74: 0x3c023ff2
    ctx->pc = 0x121b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16370 << 16));
    // 0x121b78: 0x3442ffff
    ctx->pc = 0x121b78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x121b7c: 0x50102a
    ctx->pc = 0x121b7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x121b80: 0x14400029
    ctx->pc = 0x121B80u;
    {
        const bool branch_taken_0x121b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x121B84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16387 << 16));
        if (branch_taken_0x121b80) {
            ctx->pc = 0x121C28u;
            goto label_121c28;
        }
    }
    ctx->pc = 0x121B88u;
    // 0x121b88: 0x3c023fe5
    ctx->pc = 0x121b88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16357 << 16));
    // 0x121b8c: 0x3442ffff
    ctx->pc = 0x121b8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x121b90: 0x50102a
    ctx->pc = 0x121b90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x121b94: 0x14400014
    ctx->pc = 0x121B94u;
    {
        const bool branch_taken_0x121b94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x121b94) {
            ctx->pc = 0x121BE8u;
            goto label_121be8;
        }
    }
    ctx->pc = 0x121B9Cu;
    // 0x121b9c: 0x260282d
    ctx->pc = 0x121b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ba0: 0x260202d
    ctx->pc = 0x121ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ba4: 0xc04473c
    ctx->pc = 0x121BA4u;
    SET_GPR_U32(ctx, 31, 0x121BACu);
    ctx->pc = 0x121BA8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121BACu; }
    }
    if (ctx->pc != 0x121BACu) { return; }
    ctx->pc = 0x121BACu;
    // 0x121bac: 0x3405ffc0
    ctx->pc = 0x121bacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x121bb0: 0x52bbc
    ctx->pc = 0x121bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x121bb4: 0x40202d
    ctx->pc = 0x121bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bb8: 0xc044752
    ctx->pc = 0x121BB8u;
    SET_GPR_U32(ctx, 31, 0x121BC0u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121BC0u; }
    }
    if (ctx->pc != 0x121BC0u) { return; }
    ctx->pc = 0x121BC0u;
    // 0x121bc0: 0x260202d
    ctx->pc = 0x121bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bc4: 0x34058000
    ctx->pc = 0x121bc4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x121bc8: 0x52bfc
    ctx->pc = 0x121bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x121bcc: 0x40802d
    ctx->pc = 0x121bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bd0: 0xc04473c
    ctx->pc = 0x121BD0u;
    SET_GPR_U32(ctx, 31, 0x121BD8u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121BD8u; }
    }
    if (ctx->pc != 0x121BD8u) { return; }
    ctx->pc = 0x121BD8u;
    // 0x121bd8: 0x200202d
    ctx->pc = 0x121bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bdc: 0x40282d
    ctx->pc = 0x121bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121be0: 0x1000002c
    ctx->pc = 0x121BE0u;
    {
        const bool branch_taken_0x121be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x121be0) {
            ctx->pc = 0x121C94u;
            goto label_121c94;
        }
    }
    ctx->pc = 0x121BE8u;
label_121be8:
    // 0x121be8: 0x3411ffc0
    ctx->pc = 0x121be8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 0), 65472));
    // 0x121bec: 0x118bbc
    ctx->pc = 0x121becu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x121bf0: 0x260202d
    ctx->pc = 0x121bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bf4: 0x220282d
    ctx->pc = 0x121bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bf8: 0xc044752
    ctx->pc = 0x121BF8u;
    SET_GPR_U32(ctx, 31, 0x121C00u);
    ctx->pc = 0x121BFCu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121C00u; }
    }
    if (ctx->pc != 0x121C00u) { return; }
    ctx->pc = 0x121C00u;
    // 0x121c00: 0x260202d
    ctx->pc = 0x121c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c04: 0x220282d
    ctx->pc = 0x121c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c08: 0x40802d
    ctx->pc = 0x121c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c0c: 0xc04473c
    ctx->pc = 0x121C0Cu;
    SET_GPR_U32(ctx, 31, 0x121C14u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121C14u; }
    }
    if (ctx->pc != 0x121C14u) { return; }
    ctx->pc = 0x121C14u;
    // 0x121c14: 0x200202d
    ctx->pc = 0x121c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c18: 0x40282d
    ctx->pc = 0x121c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c1c: 0x1000001d
    ctx->pc = 0x121C1Cu;
    {
        const bool branch_taken_0x121c1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x121c1c) {
            ctx->pc = 0x121C94u;
            goto label_121c94;
        }
    }
    ctx->pc = 0x121C24u;
    // 0x121c24: 0x0
    ctx->pc = 0x121c24u;
    // NOP
label_121c28:
    // 0x121c28: 0x34427fff
    ctx->pc = 0x121c28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32767));
    // 0x121c2c: 0x50102a
    ctx->pc = 0x121c2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x121c30: 0x54400015
    ctx->pc = 0x121C30u;
    {
        const bool branch_taken_0x121c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x121c30) {
            ctx->pc = 0x121C34u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x121C88u;
            goto label_121c88;
        }
    }
    ctx->pc = 0x121C38u;
    // 0x121c38: 0x3410ffe0
    ctx->pc = 0x121c38u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65504));
    // 0x121c3c: 0x1083bc
    ctx->pc = 0x121c3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x121c40: 0x260202d
    ctx->pc = 0x121c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c44: 0x200282d
    ctx->pc = 0x121c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c48: 0xc044752
    ctx->pc = 0x121C48u;
    SET_GPR_U32(ctx, 31, 0x121C50u);
    ctx->pc = 0x121C4Cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121C50u; }
    }
    if (ctx->pc != 0x121C50u) { return; }
    ctx->pc = 0x121C50u;
    // 0x121c50: 0x260202d
    ctx->pc = 0x121c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c54: 0x200282d
    ctx->pc = 0x121c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c58: 0x40882d
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c5c: 0xc04476c
    ctx->pc = 0x121C5Cu;
    SET_GPR_U32(ctx, 31, 0x121C64u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121C64u; }
    }
    if (ctx->pc != 0x121C64u) { return; }
    ctx->pc = 0x121C64u;
    // 0x121c64: 0x3405ffc0
    ctx->pc = 0x121c64u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x121c68: 0x52bbc
    ctx->pc = 0x121c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x121c6c: 0x40202d
    ctx->pc = 0x121c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c70: 0xc04473c
    ctx->pc = 0x121C70u;
    SET_GPR_U32(ctx, 31, 0x121C78u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121C78u; }
    }
    if (ctx->pc != 0x121C78u) { return; }
    ctx->pc = 0x121C78u;
    // 0x121c78: 0x220202d
    ctx->pc = 0x121c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c7c: 0x40282d
    ctx->pc = 0x121c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c80: 0x10000004
    ctx->pc = 0x121C80u;
    {
        const bool branch_taken_0x121c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x121c80) {
            ctx->pc = 0x121C94u;
            goto label_121c94;
        }
    }
    ctx->pc = 0x121C88u;
label_121c88:
    // 0x121c88: 0x3404bff0
    ctx->pc = 0x121c88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 49136));
    // 0x121c8c: 0x4243c
    ctx->pc = 0x121c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x121c90: 0x260282d
    ctx->pc = 0x121c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_121c94:
    // 0x121c94: 0xc04480e
    ctx->pc = 0x121C94u;
    SET_GPR_U32(ctx, 31, 0x121C9Cu);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121C9Cu; }
    }
    if (ctx->pc != 0x121C9Cu) { return; }
    ctx->pc = 0x121C9Cu;
    // 0x121c9c: 0x40982d
    ctx->pc = 0x121c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121ca0:
    // 0x121ca0: 0x260202d
    ctx->pc = 0x121ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ca4: 0x260282d
    ctx->pc = 0x121ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ca8: 0xc04476c
    ctx->pc = 0x121CA8u;
    SET_GPR_U32(ctx, 31, 0x121CB0u);
    ctx->pc = 0x121CACu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CB0u; }
    }
    if (ctx->pc != 0x121CB0u) { return; }
    ctx->pc = 0x121CB0u;
    // 0x121cb0: 0x40902d
    ctx->pc = 0x121cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cb4: 0x240202d
    ctx->pc = 0x121cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cb8: 0x240282d
    ctx->pc = 0x121cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cbc: 0xc04476c
    ctx->pc = 0x121CBCu;
    SET_GPR_U32(ctx, 31, 0x121CC4u);
    ctx->pc = 0x121CC0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294939192));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CC4u; }
    }
    if (ctx->pc != 0x121CC4u) { return; }
    ctx->pc = 0x121CC4u;
    // 0x121cc4: 0xde050050
    ctx->pc = 0x121cc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x121cc8: 0x40882d
    ctx->pc = 0x121cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ccc: 0x220202d
    ctx->pc = 0x121cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cd0: 0xc04476c
    ctx->pc = 0x121CD0u;
    SET_GPR_U32(ctx, 31, 0x121CD8u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CD8u; }
    }
    if (ctx->pc != 0x121CD8u) { return; }
    ctx->pc = 0x121CD8u;
    // 0x121cd8: 0xde040040
    ctx->pc = 0x121cd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x121cdc: 0x40282d
    ctx->pc = 0x121cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ce0: 0xc04473c
    ctx->pc = 0x121CE0u;
    SET_GPR_U32(ctx, 31, 0x121CE8u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CE8u; }
    }
    if (ctx->pc != 0x121CE8u) { return; }
    ctx->pc = 0x121CE8u;
    // 0x121ce8: 0x220202d
    ctx->pc = 0x121ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cec: 0x40282d
    ctx->pc = 0x121cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cf0: 0xc04476c
    ctx->pc = 0x121CF0u;
    SET_GPR_U32(ctx, 31, 0x121CF8u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CF8u; }
    }
    if (ctx->pc != 0x121CF8u) { return; }
    ctx->pc = 0x121CF8u;
    // 0x121cf8: 0xde040030
    ctx->pc = 0x121cf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x121cfc: 0x40282d
    ctx->pc = 0x121cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d00: 0xc04473c
    ctx->pc = 0x121D00u;
    SET_GPR_U32(ctx, 31, 0x121D08u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D08u; }
    }
    if (ctx->pc != 0x121D08u) { return; }
    ctx->pc = 0x121D08u;
    // 0x121d08: 0x220202d
    ctx->pc = 0x121d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d0c: 0x40282d
    ctx->pc = 0x121d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d10: 0xc04476c
    ctx->pc = 0x121D10u;
    SET_GPR_U32(ctx, 31, 0x121D18u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D18u; }
    }
    if (ctx->pc != 0x121D18u) { return; }
    ctx->pc = 0x121D18u;
    // 0x121d18: 0xde040020
    ctx->pc = 0x121d18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x121d1c: 0x40282d
    ctx->pc = 0x121d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d20: 0xc04473c
    ctx->pc = 0x121D20u;
    SET_GPR_U32(ctx, 31, 0x121D28u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D28u; }
    }
    if (ctx->pc != 0x121D28u) { return; }
    ctx->pc = 0x121D28u;
    // 0x121d28: 0x220202d
    ctx->pc = 0x121d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d2c: 0x40282d
    ctx->pc = 0x121d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d30: 0xc04476c
    ctx->pc = 0x121D30u;
    SET_GPR_U32(ctx, 31, 0x121D38u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D38u; }
    }
    if (ctx->pc != 0x121D38u) { return; }
    ctx->pc = 0x121D38u;
    // 0x121d38: 0xde040010
    ctx->pc = 0x121d38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x121d3c: 0x40282d
    ctx->pc = 0x121d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d40: 0xc04473c
    ctx->pc = 0x121D40u;
    SET_GPR_U32(ctx, 31, 0x121D48u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D48u; }
    }
    if (ctx->pc != 0x121D48u) { return; }
    ctx->pc = 0x121D48u;
    // 0x121d48: 0x220202d
    ctx->pc = 0x121d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d4c: 0x40282d
    ctx->pc = 0x121d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d50: 0xc04476c
    ctx->pc = 0x121D50u;
    SET_GPR_U32(ctx, 31, 0x121D58u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D58u; }
    }
    if (ctx->pc != 0x121D58u) { return; }
    ctx->pc = 0x121D58u;
    // 0x121d58: 0xde040000
    ctx->pc = 0x121d58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x121d5c: 0x40282d
    ctx->pc = 0x121d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d60: 0xc04473c
    ctx->pc = 0x121D60u;
    SET_GPR_U32(ctx, 31, 0x121D68u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D68u; }
    }
    if (ctx->pc != 0x121D68u) { return; }
    ctx->pc = 0x121D68u;
    // 0x121d68: 0x240202d
    ctx->pc = 0x121d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d6c: 0x40282d
    ctx->pc = 0x121d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d70: 0xc04476c
    ctx->pc = 0x121D70u;
    SET_GPR_U32(ctx, 31, 0x121D78u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D78u; }
    }
    if (ctx->pc != 0x121D78u) { return; }
    ctx->pc = 0x121D78u;
    // 0x121d78: 0x220202d
    ctx->pc = 0x121d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d7c: 0xde050048
    ctx->pc = 0x121d7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x121d80: 0x40902d
    ctx->pc = 0x121d80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d84: 0xc04476c
    ctx->pc = 0x121D84u;
    SET_GPR_U32(ctx, 31, 0x121D8Cu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D8Cu; }
    }
    if (ctx->pc != 0x121D8Cu) { return; }
    ctx->pc = 0x121D8Cu;
    // 0x121d8c: 0xde040038
    ctx->pc = 0x121d8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x121d90: 0x40282d
    ctx->pc = 0x121d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d94: 0xc04473c
    ctx->pc = 0x121D94u;
    SET_GPR_U32(ctx, 31, 0x121D9Cu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121D9Cu; }
    }
    if (ctx->pc != 0x121D9Cu) { return; }
    ctx->pc = 0x121D9Cu;
    // 0x121d9c: 0x220202d
    ctx->pc = 0x121d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121da0: 0x40282d
    ctx->pc = 0x121da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121da4: 0xc04476c
    ctx->pc = 0x121DA4u;
    SET_GPR_U32(ctx, 31, 0x121DACu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DACu; }
    }
    if (ctx->pc != 0x121DACu) { return; }
    ctx->pc = 0x121DACu;
    // 0x121dac: 0xde040028
    ctx->pc = 0x121dacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x121db0: 0x40282d
    ctx->pc = 0x121db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121db4: 0xc04473c
    ctx->pc = 0x121DB4u;
    SET_GPR_U32(ctx, 31, 0x121DBCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DBCu; }
    }
    if (ctx->pc != 0x121DBCu) { return; }
    ctx->pc = 0x121DBCu;
    // 0x121dbc: 0x220202d
    ctx->pc = 0x121dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dc0: 0x40282d
    ctx->pc = 0x121dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dc4: 0xc04476c
    ctx->pc = 0x121DC4u;
    SET_GPR_U32(ctx, 31, 0x121DCCu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DCCu; }
    }
    if (ctx->pc != 0x121DCCu) { return; }
    ctx->pc = 0x121DCCu;
    // 0x121dcc: 0xde040018
    ctx->pc = 0x121dccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x121dd0: 0x40282d
    ctx->pc = 0x121dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dd4: 0xc04473c
    ctx->pc = 0x121DD4u;
    SET_GPR_U32(ctx, 31, 0x121DDCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DDCu; }
    }
    if (ctx->pc != 0x121DDCu) { return; }
    ctx->pc = 0x121DDCu;
    // 0x121ddc: 0x220202d
    ctx->pc = 0x121ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121de0: 0x40282d
    ctx->pc = 0x121de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121de4: 0xc04476c
    ctx->pc = 0x121DE4u;
    SET_GPR_U32(ctx, 31, 0x121DECu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DECu; }
    }
    if (ctx->pc != 0x121DECu) { return; }
    ctx->pc = 0x121DECu;
    // 0x121dec: 0xde040008
    ctx->pc = 0x121decu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x121df0: 0x40282d
    ctx->pc = 0x121df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121df4: 0xc04473c
    ctx->pc = 0x121DF4u;
    SET_GPR_U32(ctx, 31, 0x121DFCu);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121DFCu; }
    }
    if (ctx->pc != 0x121DFCu) { return; }
    ctx->pc = 0x121DFCu;
    // 0x121dfc: 0x220202d
    ctx->pc = 0x121dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e00: 0x40282d
    ctx->pc = 0x121e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e04: 0xc04476c
    ctx->pc = 0x121E04u;
    SET_GPR_U32(ctx, 31, 0x121E0Cu);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E0Cu; }
    }
    if (ctx->pc != 0x121E0Cu) { return; }
    ctx->pc = 0x121E0Cu;
    // 0x121e0c: 0x6810010
    ctx->pc = 0x121E0Cu;
    {
        const bool branch_taken_0x121e0c = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x121e0c) {
            ctx->pc = 0x121E50u;
            goto label_121e50;
        }
    }
    ctx->pc = 0x121E14u;
    // 0x121e14: 0x240202d
    ctx->pc = 0x121e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e18: 0x40282d
    ctx->pc = 0x121e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e1c: 0xc04473c
    ctx->pc = 0x121E1Cu;
    SET_GPR_U32(ctx, 31, 0x121E24u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E24u; }
    }
    if (ctx->pc != 0x121E24u) { return; }
    ctx->pc = 0x121E24u;
    // 0x121e24: 0x260202d
    ctx->pc = 0x121e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e28: 0x40282d
    ctx->pc = 0x121e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e2c: 0xc04476c
    ctx->pc = 0x121E2Cu;
    SET_GPR_U32(ctx, 31, 0x121E34u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E34u; }
    }
    if (ctx->pc != 0x121E34u) { return; }
    ctx->pc = 0x121E34u;
    // 0x121e34: 0x260202d
    ctx->pc = 0x121e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e38: 0x40282d
    ctx->pc = 0x121e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e3c: 0xc044752
    ctx->pc = 0x121E3Cu;
    SET_GPR_U32(ctx, 31, 0x121E44u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E44u; }
    }
    if (ctx->pc != 0x121E44u) { return; }
    ctx->pc = 0x121E44u;
    // 0x121e44: 0x10000022
    ctx->pc = 0x121E44u;
    {
        const bool branch_taken_0x121e44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121E48u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x121e44) {
            ctx->pc = 0x121ED0u;
            goto label_121ed0;
        }
    }
    ctx->pc = 0x121E4Cu;
    // 0x121e4c: 0x0
    ctx->pc = 0x121e4cu;
    // NOP
label_121e50:
    // 0x121e50: 0x240202d
    ctx->pc = 0x121e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e54: 0x40282d
    ctx->pc = 0x121e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e58: 0xc04473c
    ctx->pc = 0x121E58u;
    SET_GPR_U32(ctx, 31, 0x121E60u);
    ctx->pc = 0x121E5Cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 20), 3));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E60u; }
    }
    if (ctx->pc != 0x121E60u) { return; }
    ctx->pc = 0x121E60u;
    // 0x121e60: 0x260202d
    ctx->pc = 0x121e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e64: 0x40282d
    ctx->pc = 0x121e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e68: 0xc04476c
    ctx->pc = 0x121E68u;
    SET_GPR_U32(ctx, 31, 0x121E70u);
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E70u; }
    }
    if (ctx->pc != 0x121E70u) { return; }
    ctx->pc = 0x121E70u;
    // 0x121e70: 0x3c050024
    ctx->pc = 0x121e70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x121e74: 0xb02821
    ctx->pc = 0x121e74u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x121e78: 0xdca59218
    ctx->pc = 0x121e78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294939160)));
    // 0x121e7c: 0x40202d
    ctx->pc = 0x121e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e80: 0x3c010024
    ctx->pc = 0x121e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x121e84: 0x242191f8
    ctx->pc = 0x121e84u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294939128));
    // 0x121e88: 0x308021
    ctx->pc = 0x121e88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x121e8c: 0xc044752
    ctx->pc = 0x121E8Cu;
    SET_GPR_U32(ctx, 31, 0x121E94u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121E94u; }
    }
    if (ctx->pc != 0x121E94u) { return; }
    ctx->pc = 0x121E94u;
    // 0x121e94: 0x260282d
    ctx->pc = 0x121e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e98: 0x40202d
    ctx->pc = 0x121e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e9c: 0xc044752
    ctx->pc = 0x121E9Cu;
    SET_GPR_U32(ctx, 31, 0x121EA4u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121EA4u; }
    }
    if (ctx->pc != 0x121EA4u) { return; }
    ctx->pc = 0x121EA4u;
    // 0x121ea4: 0xde040000
    ctx->pc = 0x121ea4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x121ea8: 0x40282d
    ctx->pc = 0x121ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121eac: 0xc044752
    ctx->pc = 0x121EACu;
    SET_GPR_U32(ctx, 31, 0x121EB4u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121EB4u; }
    }
    if (ctx->pc != 0x121EB4u) { return; }
    ctx->pc = 0x121EB4u;
    // 0x121eb4: 0x6a10006
    ctx->pc = 0x121EB4u;
    {
        const bool branch_taken_0x121eb4 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x121EB8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x121eb4) {
            ctx->pc = 0x121ED0u;
            goto label_121ed0;
        }
    }
    ctx->pc = 0x121EBCu;
    // 0x121ebc: 0x40282d
    ctx->pc = 0x121ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ec0: 0x202d
    ctx->pc = 0x121ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ec4: 0xc044752
    ctx->pc = 0x121EC4u;
    SET_GPR_U32(ctx, 31, 0x121ECCu);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121ECCu; }
    }
    if (ctx->pc != 0x121ECCu) { return; }
    ctx->pc = 0x121ECCu;
    // 0x121ecc: 0xdfb00000
    ctx->pc = 0x121eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121ed0:
    // 0x121ed0: 0xdfb10008
    ctx->pc = 0x121ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_121ed4:
    // 0x121ed4: 0xdfb20010
    ctx->pc = 0x121ed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121ed8: 0xdfb30018
    ctx->pc = 0x121ed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121edc: 0xdfb40020
    ctx->pc = 0x121edcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121ee0: 0xdfb50028
    ctx->pc = 0x121ee0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121ee4: 0xdfbf0030
    ctx->pc = 0x121ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121ee8: 0x3e00008
    ctx->pc = 0x121EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121A9Cu: goto label_121a9c;
            case 0x121AB0u: goto label_121ab0;
            case 0x121AD8u: goto label_121ad8;
            case 0x121B08u: goto label_121b08;
            case 0x121B68u: goto label_121b68;
            case 0x121BE8u: goto label_121be8;
            case 0x121C28u: goto label_121c28;
            case 0x121C88u: goto label_121c88;
            case 0x121C94u: goto label_121c94;
            case 0x121CA0u: goto label_121ca0;
            case 0x121E50u: goto label_121e50;
            case 0x121ED0u: goto label_121ed0;
            case 0x121ED4u: goto label_121ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121EF0u;
}
