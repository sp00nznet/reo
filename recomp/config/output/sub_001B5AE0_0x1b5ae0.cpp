#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5AE0
// Address: 0x1b5ae0 - 0x1b5ca0
void sub_001B5AE0_0x1b5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5ae0u;

    // 0x1b5ae0: 0x27bdff90
    ctx->pc = 0x1b5ae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b5ae4: 0x3c01002c
    ctx->pc = 0x1b5ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5ae8: 0xffbf0060
    ctx->pc = 0x1b5ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b5aec: 0x7fb50050
    ctx->pc = 0x1b5aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b5af0: 0x7fb40040
    ctx->pc = 0x1b5af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b5af4: 0x80a82d
    ctx->pc = 0x1b5af4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5af8: 0x7fb30030
    ctx->pc = 0x1b5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b5afc: 0x7fb20020
    ctx->pc = 0x1b5afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b5b00: 0x7fb10010
    ctx->pc = 0x1b5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5b04: 0x3c12002c
    ctx->pc = 0x1b5b04u;
    SET_GPR_U32(ctx, 18, ((uint32_t)44 << 16));
    // 0x1b5b08: 0x7fb00000
    ctx->pc = 0x1b5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5b0c: 0x8c23ab40
    ctx->pc = 0x1b5b0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294945600)));
    // 0x1b5b10: 0x2c630170
    ctx->pc = 0x1b5b10u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 368));
    // 0x1b5b14: 0x14600059
    ctx->pc = 0x1B5B14u;
    {
        const bool branch_taken_0x1b5b14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5B18u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294945520));
        if (branch_taken_0x1b5b14) {
            ctx->pc = 0x1B5C7Cu;
            goto label_1b5c7c;
        }
    }
    ctx->pc = 0x1B5B1Cu;
    // 0x1b5b1c: 0x8e50004c
    ctx->pc = 0x1b5b1cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1b5b20: 0x8e45000c
    ctx->pc = 0x1b5b20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1b5b24: 0xc06dba4
    ctx->pc = 0x1B5B24u;
    SET_GPR_U32(ctx, 31, 0x1B5B2Cu);
    ctx->pc = 0x1B5B28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B6E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6E90_0x1b6e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B2Cu; }
    }
    if (ctx->pc != 0x1B5B2Cu) { return; }
    ctx->pc = 0x1B5B2Cu;
    // 0x1b5b2c: 0x240202d
    ctx->pc = 0x1b5b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b30: 0xc06dc54
    ctx->pc = 0x1B5B30u;
    SET_GPR_U32(ctx, 31, 0x1B5B38u);
    ctx->pc = 0x1B5B34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B7150u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7150_0x1b7150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B38u; }
    }
    if (ctx->pc != 0x1B5B38u) { return; }
    ctx->pc = 0x1B5B38u;
    // 0x1b5b38: 0x200282d
    ctx->pc = 0x1b5b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b3c: 0xc06dd34
    ctx->pc = 0x1B5B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B44u);
    ctx->pc = 0x1B5B40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B74D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B74D0_0x1b74d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B44u; }
    }
    if (ctx->pc != 0x1B5B44u) { return; }
    ctx->pc = 0x1B5B44u;
    // 0x1b5b44: 0x8e430050
    ctx->pc = 0x1b5b44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1b5b48: 0x40802d
    ctx->pc = 0x1b5b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b4c: 0x200882d
    ctx->pc = 0x1b5b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b50: 0x2463fe90
    ctx->pc = 0x1b5b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966928));
    // 0x1b5b54: 0xae430050
    ctx->pc = 0x1b5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1b5b58: 0x8e540070
    ctx->pc = 0x1b5b58u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_1b5b5c:
    // 0x1b5b5c: 0x8e430050
    ctx->pc = 0x1b5b5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1b5b60: 0x2c630130
    ctx->pc = 0x1b5b60u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 304));
    // 0x1b5b64: 0x14600045
    ctx->pc = 0x1B5B64u;
    {
        const bool branch_taken_0x1b5b64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b5b64) {
            ctx->pc = 0x1B5C7Cu;
            goto label_1b5c7c;
        }
    }
    ctx->pc = 0x1B5B6Cu;
    // 0x1b5b6c: 0x92a40000
    ctx->pc = 0x1b5b6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b5b70: 0x1080003b
    ctx->pc = 0x1B5B70u;
    {
        const bool branch_taken_0x1b5b70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5B74u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1b5b70) {
            ctx->pc = 0x1B5C60u;
            goto label_1b5c60;
        }
    }
    ctx->pc = 0x1B5B78u;
    // 0x1b5b78: 0x2403000a
    ctx->pc = 0x1b5b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5b7c: 0x14830007
    ctx->pc = 0x1B5B7Cu;
    {
        const bool branch_taken_0x1b5b7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b5b7c) {
            ctx->pc = 0x1B5B9Cu;
            goto label_1b5b9c;
        }
    }
    ctx->pc = 0x1B5B84u;
    // 0x1b5b84: 0xae540070
    ctx->pc = 0x1b5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 20));
    // 0x1b5b88: 0x8e44006c
    ctx->pc = 0x1b5b88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1b5b8c: 0x8e430074
    ctx->pc = 0x1b5b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1b5b90: 0x641821
    ctx->pc = 0x1b5b90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b5b94: 0x1000fff1
    ctx->pc = 0x1B5B94u;
    {
        const bool branch_taken_0x1b5b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5B98u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
        if (branch_taken_0x1b5b94) {
            ctx->pc = 0x1B5B5Cu;
            goto label_1b5b5c;
        }
    }
    ctx->pc = 0x1B5B9Cu;
label_1b5b9c:
    // 0x1b5b9c: 0x2c820080
    ctx->pc = 0x1b5b9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 128));
    // 0x1b5ba0: 0x14400004
    ctx->pc = 0x1B5BA0u;
    {
        const bool branch_taken_0x1b5ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5BA4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 224));
        if (branch_taken_0x1b5ba0) {
            ctx->pc = 0x1B5BB4u;
            goto label_1b5bb4;
        }
    }
    ctx->pc = 0x1B5BA8u;
    // 0x1b5ba8: 0x2c8100a0
    ctx->pc = 0x1b5ba8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 160));
    // 0x1b5bac: 0x14200005
    ctx->pc = 0x1B5BACu;
    {
        const bool branch_taken_0x1b5bac = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b5bac) {
            ctx->pc = 0x1B5BC4u;
            goto label_1b5bc4;
        }
    }
    ctx->pc = 0x1B5BB4u;
label_1b5bb4:
    // 0x1b5bb4: 0x1440000a
    ctx->pc = 0x1B5BB4u;
    {
        const bool branch_taken_0x1b5bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5BB8u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x1b5bb4) {
            ctx->pc = 0x1B5BE0u;
            goto label_1b5be0;
        }
    }
    ctx->pc = 0x1B5BBCu;
    // 0x1b5bbc: 0x10200008
    ctx->pc = 0x1B5BBCu;
    {
        const bool branch_taken_0x1b5bbc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b5bbc) {
            ctx->pc = 0x1B5BE0u;
            goto label_1b5be0;
        }
    }
    ctx->pc = 0x1B5BC4u;
label_1b5bc4:
    // 0x1b5bc4: 0x92a30000
    ctx->pc = 0x1b5bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b5bc8: 0x10600025
    ctx->pc = 0x1B5BC8u;
    {
        const bool branch_taken_0x1b5bc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5BCCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1b5bc8) {
            ctx->pc = 0x1B5C60u;
            goto label_1b5c60;
        }
    }
    ctx->pc = 0x1B5BD0u;
    // 0x1b5bd0: 0x41200
    ctx->pc = 0x1b5bd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1b5bd4: 0x982d
    ctx->pc = 0x1b5bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bd8: 0x10000005
    ctx->pc = 0x1B5BD8u;
    {
        const bool branch_taken_0x1b5bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5BDCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1b5bd8) {
            ctx->pc = 0x1B5BF0u;
            goto label_1b5bf0;
        }
    }
    ctx->pc = 0x1B5BE0u;
label_1b5be0:
    // 0x1b5be0: 0x8e450008
    ctx->pc = 0x1b5be0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b5be4: 0xc06d960
    ctx->pc = 0x1B5BE4u;
    SET_GPR_U32(ctx, 31, 0x1B5BECu);
    ctx->pc = 0x1B5BE8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x1B6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6580_0x1b6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BECu; }
    }
    if (ctx->pc != 0x1B5BECu) { return; }
    ctx->pc = 0x1B5BECu;
    // 0x1b5bec: 0x24130001
    ctx->pc = 0x1b5becu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_1b5bf0:
    // 0x1b5bf0: 0x8e450008
    ctx->pc = 0x1b5bf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b5bf4: 0xc06d93c
    ctx->pc = 0x1B5BF4u;
    SET_GPR_U32(ctx, 31, 0x1B5BFCu);
    ctx->pc = 0x1B5BF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B64F0_0x1b64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BFCu; }
    }
    if (ctx->pc != 0x1B5BFCu) { return; }
    ctx->pc = 0x1B5BFCu;
    // 0x1b5bfc: 0x8e43001c
    ctx->pc = 0x1b5bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1b5c00: 0x40282d
    ctx->pc = 0x1b5c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c04: 0xa3082b
    ctx->pc = 0x1b5c04u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b5c08: 0x1020000f
    ctx->pc = 0x1B5C08u;
    {
        const bool branch_taken_0x1b5c08 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5C0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c08) {
            ctx->pc = 0x1B5C48u;
            goto label_1b5c48;
        }
    }
    ctx->pc = 0x1B5C10u;
    // 0x1b5c10: 0xc06d728
    ctx->pc = 0x1B5C10u;
    SET_GPR_U32(ctx, 31, 0x1B5C18u);
    ctx->pc = 0x1B5CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CA0_0x1b5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C18u; }
    }
    if (ctx->pc != 0x1B5C18u) { return; }
    ctx->pc = 0x1B5C18u;
    // 0x1b5c18: 0x200282d
    ctx->pc = 0x1b5c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c1c: 0x240202d
    ctx->pc = 0x1b5c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c20: 0x40302d
    ctx->pc = 0x1b5c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c24: 0xc06dc74
    ctx->pc = 0x1B5C24u;
    SET_GPR_U32(ctx, 31, 0x1B5C2Cu);
    ctx->pc = 0x1B5C28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B71D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B71D0_0x1b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C2Cu; }
    }
    if (ctx->pc != 0x1B5C2Cu) { return; }
    ctx->pc = 0x1B5C2Cu;
    // 0x1b5c2c: 0x8e430050
    ctx->pc = 0x1b5c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1b5c30: 0x40802d
    ctx->pc = 0x1b5c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c34: 0x2463fee0
    ctx->pc = 0x1b5c34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967008));
    // 0x1b5c38: 0xae430050
    ctx->pc = 0x1b5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1b5c3c: 0x8e430064
    ctx->pc = 0x1b5c3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1b5c40: 0x24630001
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b5c44: 0xae430064
    ctx->pc = 0x1b5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_1b5c48:
    // 0x1b5c48: 0x8e44006c
    ctx->pc = 0x1b5c48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1b5c4c: 0x8e430070
    ctx->pc = 0x1b5c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1b5c50: 0x2642006
    ctx->pc = 0x1b5c50u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x1b5c54: 0x641821
    ctx->pc = 0x1b5c54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b5c58: 0x1000ffc0
    ctx->pc = 0x1B5C58u;
    {
        const bool branch_taken_0x1b5c58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5C5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x1b5c58) {
            ctx->pc = 0x1B5B5Cu;
            goto label_1b5b5c;
        }
    }
    ctx->pc = 0x1B5C60u;
label_1b5c60:
    // 0x1b5c60: 0x200202d
    ctx->pc = 0x1b5c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c64: 0xc06dd34
    ctx->pc = 0x1B5C64u;
    SET_GPR_U32(ctx, 31, 0x1B5C6Cu);
    ctx->pc = 0x1B5C68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B74D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B74D0_0x1b74d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C6Cu; }
    }
    if (ctx->pc != 0x1B5C6Cu) { return; }
    ctx->pc = 0x1B5C6Cu;
    // 0x1b5c6c: 0x8e430050
    ctx->pc = 0x1b5c6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1b5c70: 0x2463fff0
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1b5c74: 0xae430050
    ctx->pc = 0x1b5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1b5c78: 0xae42004c
    ctx->pc = 0x1b5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_1b5c7c:
    // 0x1b5c7c: 0xdfbf0060
    ctx->pc = 0x1b5c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5c80: 0x7bb50050
    ctx->pc = 0x1b5c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5c84: 0x7bb40040
    ctx->pc = 0x1b5c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5c88: 0x7bb30030
    ctx->pc = 0x1b5c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5c8c: 0x7bb20020
    ctx->pc = 0x1b5c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5c90: 0x7bb10010
    ctx->pc = 0x1b5c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5c94: 0x7bb00000
    ctx->pc = 0x1b5c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5c98: 0x3e00008
    ctx->pc = 0x1B5C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5B5Cu: goto label_1b5b5c;
            case 0x1B5B9Cu: goto label_1b5b9c;
            case 0x1B5BB4u: goto label_1b5bb4;
            case 0x1B5BC4u: goto label_1b5bc4;
            case 0x1B5BE0u: goto label_1b5be0;
            case 0x1B5BF0u: goto label_1b5bf0;
            case 0x1B5C48u: goto label_1b5c48;
            case 0x1B5C60u: goto label_1b5c60;
            case 0x1B5C7Cu: goto label_1b5c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5CA0u;
}
