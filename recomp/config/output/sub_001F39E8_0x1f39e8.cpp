#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F39E8
// Address: 0x1f39e8 - 0x1f3bcc
void sub_001F39E8_0x1f39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f39e8u;

    // 0x1f39e8: 0x27bdffc0
    ctx->pc = 0x1f39e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f39ec: 0xffbe0030
    ctx->pc = 0x1f39ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x1f39f0: 0xffbf0038
    ctx->pc = 0x1f39f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f39f4: 0x3a0f02d
    ctx->pc = 0x1f39f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39f8: 0xafc40000
    ctx->pc = 0x1f39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f39fc: 0x8fc40000
    ctx->pc = 0x1f39fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3a00: 0xc07c6b6
    ctx->pc = 0x1F3A00u;
    SET_GPR_U32(ctx, 31, 0x1F3A08u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A08u; }
    }
    if (ctx->pc != 0x1F3A08u) { return; }
    ctx->pc = 0x1F3A08u;
    // 0x1f3a08: 0xafc20008
    ctx->pc = 0x1f3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f3a0c: 0x8fc40000
    ctx->pc = 0x1f3a0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3a10: 0xc07cd3b
    ctx->pc = 0x1F3A10u;
    SET_GPR_U32(ctx, 31, 0x1F3A18u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A18u; }
    }
    if (ctx->pc != 0x1F3A18u) { return; }
    ctx->pc = 0x1F3A18u;
    // 0x1f3a18: 0xafc2000c
    ctx->pc = 0x1f3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f3a1c:
    // 0x1f3a1c: 0x8fc2000c
    ctx->pc = 0x1f3a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3a20: 0x14400003
    ctx->pc = 0x1F3A20u;
    {
        const bool branch_taken_0x1f3a20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a20) {
            ctx->pc = 0x1F3A30u;
            goto label_1f3a30;
        }
    }
    ctx->pc = 0x1F3A28u;
    // 0x1f3a28: 0x10000061
    ctx->pc = 0x1F3A28u;
    {
        const bool branch_taken_0x1f3a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a28) {
            ctx->pc = 0x1F3BB0u;
            goto label_1f3bb0;
        }
    }
    ctx->pc = 0x1F3A30u;
label_1f3a30:
    // 0x1f3a30: 0x8fc20008
    ctx->pc = 0x1f3a30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3a34: 0x28420010
    ctx->pc = 0x1f3a34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x1f3a38: 0x10400004
    ctx->pc = 0x1F3A38u;
    {
        const bool branch_taken_0x1f3a38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a38) {
            ctx->pc = 0x1F3A4Cu;
            goto label_1f3a4c;
        }
    }
    ctx->pc = 0x1F3A40u;
    // 0x1f3a40: 0x2402e0c3
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959299));
    // 0x1f3a44: 0x1000005b
    ctx->pc = 0x1F3A44u;
    {
        const bool branch_taken_0x1f3a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a44) {
            ctx->pc = 0x1F3BB4u;
            goto label_1f3bb4;
        }
    }
    ctx->pc = 0x1F3A4Cu;
label_1f3a4c:
    // 0x1f3a4c: 0x8fc40000
    ctx->pc = 0x1f3a4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3a50: 0x8fc5000c
    ctx->pc = 0x1f3a50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3a54: 0xc07ce10
    ctx->pc = 0x1F3A54u;
    SET_GPR_U32(ctx, 31, 0x1F3A5Cu);
    ctx->pc = 0x1F3840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3840_0x1f3840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A5Cu; }
    }
    if (ctx->pc != 0x1F3A5Cu) { return; }
    ctx->pc = 0x1F3A5Cu;
    // 0x1f3a5c: 0x10400005
    ctx->pc = 0x1F3A5Cu;
    {
        const bool branch_taken_0x1f3a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a5c) {
            ctx->pc = 0x1F3A74u;
            goto label_1f3a74;
        }
    }
    ctx->pc = 0x1F3A64u;
    // 0x1f3a64: 0x8fc2000c
    ctx->pc = 0x1f3a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3a68: 0xafc20010
    ctx->pc = 0x1f3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1f3a6c: 0x10000009
    ctx->pc = 0x1F3A6Cu;
    {
        const bool branch_taken_0x1f3a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3a6c) {
            ctx->pc = 0x1F3A94u;
            goto label_1f3a94;
        }
    }
    ctx->pc = 0x1F3A74u;
label_1f3a74:
    // 0x1f3a74: 0x27c20020
    ctx->pc = 0x1f3a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1f3a78: 0x40202d
    ctx->pc = 0x1f3a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a7c: 0x8fc5000c
    ctx->pc = 0x1f3a7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3a80: 0x24060010
    ctx->pc = 0x1f3a80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f3a84: 0xc041eac
    ctx->pc = 0x1F3A84u;
    SET_GPR_U32(ctx, 31, 0x1F3A8Cu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A8Cu; }
    }
    if (ctx->pc != 0x1F3A8Cu) { return; }
    ctx->pc = 0x1F3A8Cu;
    // 0x1f3a8c: 0x27c20020
    ctx->pc = 0x1f3a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1f3a90: 0xafc20010
    ctx->pc = 0x1f3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1f3a94:
    // 0x1f3a94: 0x8fc20010
    ctx->pc = 0x1f3a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3a98: 0x94420000
    ctx->pc = 0x1f3a98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3a9c: 0x304203ff
    ctx->pc = 0x1f3a9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x1f3aa0: 0x3042ffff
    ctx->pc = 0x1f3aa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f3aa4: 0xafc20004
    ctx->pc = 0x1f3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1f3aa8: 0x8fc20010
    ctx->pc = 0x1f3aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3aac: 0x94420000
    ctx->pc = 0x1f3aacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3ab0: 0x40202d
    ctx->pc = 0x1f3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ab4: 0xc07a05f
    ctx->pc = 0x1F3AB4u;
    SET_GPR_U32(ctx, 31, 0x1F3ABCu);
    ctx->pc = 0x1E817Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E817C_0x1e817c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ABCu; }
    }
    if (ctx->pc != 0x1F3ABCu) { return; }
    ctx->pc = 0x1F3ABCu;
    // 0x1f3abc: 0x40182d
    ctx->pc = 0x1f3abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ac0: 0x8fc20010
    ctx->pc = 0x1f3ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3ac4: 0xa4430000
    ctx->pc = 0x1f3ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3ac8: 0x8fc20010
    ctx->pc = 0x1f3ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3acc: 0x94420002
    ctx->pc = 0x1f3accu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1f3ad0: 0x40202d
    ctx->pc = 0x1f3ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ad4: 0xc07a05f
    ctx->pc = 0x1F3AD4u;
    SET_GPR_U32(ctx, 31, 0x1F3ADCu);
    ctx->pc = 0x1E817Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E817C_0x1e817c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ADCu; }
    }
    if (ctx->pc != 0x1F3ADCu) { return; }
    ctx->pc = 0x1F3ADCu;
    // 0x1f3adc: 0x40182d
    ctx->pc = 0x1f3adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ae0: 0x8fc20010
    ctx->pc = 0x1f3ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3ae4: 0xa4430002
    ctx->pc = 0x1f3ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3ae8: 0x8fc20010
    ctx->pc = 0x1f3ae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3aec: 0x8c440004
    ctx->pc = 0x1f3aecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f3af0: 0xc07a04d
    ctx->pc = 0x1F3AF0u;
    SET_GPR_U32(ctx, 31, 0x1F3AF8u);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AF8u; }
    }
    if (ctx->pc != 0x1F3AF8u) { return; }
    ctx->pc = 0x1F3AF8u;
    // 0x1f3af8: 0x40182d
    ctx->pc = 0x1f3af8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3afc: 0x8fc20010
    ctx->pc = 0x1f3afcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3b00: 0xac430004
    ctx->pc = 0x1f3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1f3b04: 0x8fc20010
    ctx->pc = 0x1f3b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3b08: 0x8c440008
    ctx->pc = 0x1f3b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f3b0c: 0xc07a04d
    ctx->pc = 0x1F3B0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B14u);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B14u; }
    }
    if (ctx->pc != 0x1F3B14u) { return; }
    ctx->pc = 0x1F3B14u;
    // 0x1f3b14: 0x40182d
    ctx->pc = 0x1f3b14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b18: 0x8fc20010
    ctx->pc = 0x1f3b18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3b1c: 0xac430008
    ctx->pc = 0x1f3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1f3b20: 0x8fc20010
    ctx->pc = 0x1f3b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3b24: 0x8c44000c
    ctx->pc = 0x1f3b24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f3b28: 0xc07a04d
    ctx->pc = 0x1F3B28u;
    SET_GPR_U32(ctx, 31, 0x1F3B30u);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B30u; }
    }
    if (ctx->pc != 0x1F3B30u) { return; }
    ctx->pc = 0x1F3B30u;
    // 0x1f3b30: 0x40182d
    ctx->pc = 0x1f3b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b34: 0x8fc20010
    ctx->pc = 0x1f3b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f3b38: 0xac43000c
    ctx->pc = 0x1f3b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1f3b3c: 0x8fc40000
    ctx->pc = 0x1f3b3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3b40: 0x8fc5000c
    ctx->pc = 0x1f3b40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3b44: 0xc07ce10
    ctx->pc = 0x1F3B44u;
    SET_GPR_U32(ctx, 31, 0x1F3B4Cu);
    ctx->pc = 0x1F3840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3840_0x1f3840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B4Cu; }
    }
    if (ctx->pc != 0x1F3B4Cu) { return; }
    ctx->pc = 0x1F3B4Cu;
    // 0x1f3b4c: 0x14400007
    ctx->pc = 0x1F3B4Cu;
    {
        const bool branch_taken_0x1f3b4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3b4c) {
            ctx->pc = 0x1F3B6Cu;
            goto label_1f3b6c;
        }
    }
    ctx->pc = 0x1F3B54u;
    // 0x1f3b54: 0x27c20020
    ctx->pc = 0x1f3b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1f3b58: 0x8fc4000c
    ctx->pc = 0x1f3b58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3b5c: 0x40282d
    ctx->pc = 0x1f3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b60: 0x24060010
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f3b64: 0xc041eac
    ctx->pc = 0x1F3B64u;
    SET_GPR_U32(ctx, 31, 0x1F3B6Cu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B6Cu; }
    }
    if (ctx->pc != 0x1F3B6Cu) { return; }
    ctx->pc = 0x1F3B6Cu;
label_1f3b6c:
    // 0x1f3b6c: 0x8fc30008
    ctx->pc = 0x1f3b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3b70: 0x8fc20004
    ctx->pc = 0x1f3b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f3b74: 0x621023
    ctx->pc = 0x1f3b74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3b78: 0xafc20008
    ctx->pc = 0x1f3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f3b7c: 0x8fc20008
    ctx->pc = 0x1f3b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3b80: 0x14400003
    ctx->pc = 0x1F3B80u;
    {
        const bool branch_taken_0x1f3b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3b80) {
            ctx->pc = 0x1F3B90u;
            goto label_1f3b90;
        }
    }
    ctx->pc = 0x1F3B88u;
    // 0x1f3b88: 0x10000009
    ctx->pc = 0x1F3B88u;
    {
        const bool branch_taken_0x1f3b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3b88) {
            ctx->pc = 0x1F3BB0u;
            goto label_1f3bb0;
        }
    }
    ctx->pc = 0x1F3B90u;
label_1f3b90:
    // 0x1f3b90: 0x8fc40000
    ctx->pc = 0x1f3b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3b94: 0x8fc5000c
    ctx->pc = 0x1f3b94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3b98: 0x8fc60004
    ctx->pc = 0x1f3b98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f3b9c: 0xc07cfa4
    ctx->pc = 0x1F3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F3BA4u);
    ctx->pc = 0x1F3E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3E90_0x1f3e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BA4u; }
    }
    if (ctx->pc != 0x1F3BA4u) { return; }
    ctx->pc = 0x1F3BA4u;
    // 0x1f3ba4: 0xafc2000c
    ctx->pc = 0x1f3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f3ba8: 0x1000ff9c
    ctx->pc = 0x1F3BA8u;
    {
        const bool branch_taken_0x1f3ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3ba8) {
            ctx->pc = 0x1F3A1Cu;
            goto label_1f3a1c;
        }
    }
    ctx->pc = 0x1F3BB0u;
label_1f3bb0:
    // 0x1f3bb0: 0x102d
    ctx->pc = 0x1f3bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bb4:
    // 0x1f3bb4: 0x3c0e82d
    ctx->pc = 0x1f3bb4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bb8: 0xdfbe0030
    ctx->pc = 0x1f3bb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3bbc: 0xdfbf0038
    ctx->pc = 0x1f3bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bc0: 0x27bd0040
    ctx->pc = 0x1f3bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f3bc4: 0x3e00008
    ctx->pc = 0x1F3BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3A1Cu: goto label_1f3a1c;
            case 0x1F3A30u: goto label_1f3a30;
            case 0x1F3A4Cu: goto label_1f3a4c;
            case 0x1F3A74u: goto label_1f3a74;
            case 0x1F3A94u: goto label_1f3a94;
            case 0x1F3B6Cu: goto label_1f3b6c;
            case 0x1F3B90u: goto label_1f3b90;
            case 0x1F3BB0u: goto label_1f3bb0;
            case 0x1F3BB4u: goto label_1f3bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3BCCu;
}
