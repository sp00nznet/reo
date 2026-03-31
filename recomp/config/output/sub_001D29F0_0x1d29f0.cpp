#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D29F0
// Address: 0x1d29f0 - 0x1d2c00
void sub_001D29F0_0x1d29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d29f0u;

    // 0x1d29f0: 0x27bdffd0
    ctx->pc = 0x1d29f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d29f4: 0x3c020023
    ctx->pc = 0x1d29f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d29f8: 0xffbf0020
    ctx->pc = 0x1d29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d29fc: 0x24426768
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26472));
    // 0x1d2a00: 0x7fb10010
    ctx->pc = 0x1d2a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2a04: 0x7fb00000
    ctx->pc = 0x1d2a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2a08: 0x80882d
    ctx->pc = 0x1d2a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a0c: 0x8c830004
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d2a10: 0xa0802d
    ctx->pc = 0x1d2a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a14: 0x31880
    ctx->pc = 0x1d2a14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2a18: 0x431021
    ctx->pc = 0x1d2a18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2a1c: 0x8c450000
    ctx->pc = 0x1d2a1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2a20: 0xc06bde0
    ctx->pc = 0x1D2A20u;
    SET_GPR_U32(ctx, 31, 0x1D2A28u);
    ctx->pc = 0x1D2A24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A28u; }
    }
    if (ctx->pc != 0x1D2A28u) { return; }
    ctx->pc = 0x1D2A28u;
    // 0x1d2a28: 0x8e230004
    ctx->pc = 0x1d2a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d2a2c: 0x3c020023
    ctx->pc = 0x1d2a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2a30: 0x24426768
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26472));
    // 0x1d2a34: 0x24040002
    ctx->pc = 0x1d2a34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2a38: 0x31880
    ctx->pc = 0x1d2a38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2a3c: 0x431021
    ctx->pc = 0x1d2a3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2a40: 0x8c420000
    ctx->pc = 0x1d2a40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2a44: 0x1444000c
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1D2A48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A78u;
            goto label_1d2a78;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x8e230008
    ctx->pc = 0x1d2a4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d2a50: 0x3c020023
    ctx->pc = 0x1d2a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2a54: 0x244267b0
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26544));
    // 0x1d2a58: 0x31880
    ctx->pc = 0x1d2a58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2a5c: 0x431021
    ctx->pc = 0x1d2a5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2a60: 0xc06bde0
    ctx->pc = 0x1D2A60u;
    SET_GPR_U32(ctx, 31, 0x1D2A68u);
    ctx->pc = 0x1D2A64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A68u; }
    }
    if (ctx->pc != 0x1D2A68u) { return; }
    ctx->pc = 0x1D2A68u;
    // 0x1d2a68: 0xa200008d
    ctx->pc = 0x1d2a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2a6c: 0x8e220014
    ctx->pc = 0x1d2a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d2a70: 0x1000000b
    ctx->pc = 0x1D2A70u;
    {
        const bool branch_taken_0x1d2a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2A74u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1d2a70) {
            ctx->pc = 0x1D2AA0u;
            goto label_1d2aa0;
        }
    }
    ctx->pc = 0x1D2A78u;
label_1d2a78:
    // 0x1d2a78: 0xc06bde0
    ctx->pc = 0x1D2A78u;
    SET_GPR_U32(ctx, 31, 0x1D2A80u);
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A80u; }
    }
    if (ctx->pc != 0x1D2A80u) { return; }
    ctx->pc = 0x1D2A80u;
    // 0x1d2a80: 0xa2000090
    ctx->pc = 0x1d2a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2a84: 0x8e220008
    ctx->pc = 0x1d2a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d2a88: 0x30420001
    ctx->pc = 0x1d2a88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1d2a8c: 0x10400003
    ctx->pc = 0x1D2A8Cu;
    {
        const bool branch_taken_0x1d2a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2A90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d2a8c) {
            ctx->pc = 0x1D2A9Cu;
            goto label_1d2a9c;
        }
    }
    ctx->pc = 0x1D2A94u;
    // 0x1d2a94: 0x10000002
    ctx->pc = 0x1D2A94u;
    {
        const bool branch_taken_0x1d2a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2A98u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1d2a94) {
            ctx->pc = 0x1D2AA0u;
            goto label_1d2aa0;
        }
    }
    ctx->pc = 0x1D2A9Cu;
label_1d2a9c:
    // 0x1d2a9c: 0xa200008d
    ctx->pc = 0x1d2a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 0));
label_1d2aa0:
    // 0x1d2aa0: 0x8e230020
    ctx->pc = 0x1d2aa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d2aa4: 0x3c020023
    ctx->pc = 0x1d2aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2aa8: 0x24426770
    ctx->pc = 0x1d2aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26480));
    // 0x1d2aac: 0x31880
    ctx->pc = 0x1d2aacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2ab0: 0x431021
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2ab4: 0x8c450000
    ctx->pc = 0x1d2ab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2ab8: 0xc06bde0
    ctx->pc = 0x1D2AB8u;
    SET_GPR_U32(ctx, 31, 0x1D2AC0u);
    ctx->pc = 0x1D2ABCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AC0u; }
    }
    if (ctx->pc != 0x1D2AC0u) { return; }
    ctx->pc = 0x1D2AC0u;
    // 0x1d2ac0: 0x8e230014
    ctx->pc = 0x1d2ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d2ac4: 0x3c020023
    ctx->pc = 0x1d2ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2ac8: 0x24426780
    ctx->pc = 0x1d2ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26496));
    // 0x1d2acc: 0x31880
    ctx->pc = 0x1d2accu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2ad0: 0x431021
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2ad4: 0x8c450000
    ctx->pc = 0x1d2ad4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2ad8: 0xc06bde0
    ctx->pc = 0x1D2AD8u;
    SET_GPR_U32(ctx, 31, 0x1D2AE0u);
    ctx->pc = 0x1D2ADCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AE0u; }
    }
    if (ctx->pc != 0x1D2AE0u) { return; }
    ctx->pc = 0x1D2AE0u;
    // 0x1d2ae0: 0x8e230024
    ctx->pc = 0x1d2ae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d2ae4: 0x3c020023
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2ae8: 0x244267d0
    ctx->pc = 0x1d2ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26576));
    // 0x1d2aec: 0x31880
    ctx->pc = 0x1d2aecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2af0: 0x431021
    ctx->pc = 0x1d2af0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2af4: 0x8c450000
    ctx->pc = 0x1d2af4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2af8: 0xc06bde0
    ctx->pc = 0x1D2AF8u;
    SET_GPR_U32(ctx, 31, 0x1D2B00u);
    ctx->pc = 0x1D2AFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B00u; }
    }
    if (ctx->pc != 0x1D2B00u) { return; }
    ctx->pc = 0x1D2B00u;
    // 0x1d2b00: 0x8e23001c
    ctx->pc = 0x1d2b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d2b04: 0x3c020023
    ctx->pc = 0x1d2b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2b08: 0x244267d8
    ctx->pc = 0x1d2b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26584));
    // 0x1d2b0c: 0x31880
    ctx->pc = 0x1d2b0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2b10: 0x431021
    ctx->pc = 0x1d2b10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2b14: 0x8c450000
    ctx->pc = 0x1d2b14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2b18: 0xc06bde0
    ctx->pc = 0x1D2B18u;
    SET_GPR_U32(ctx, 31, 0x1D2B20u);
    ctx->pc = 0x1D2B1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B20u; }
    }
    if (ctx->pc != 0x1D2B20u) { return; }
    ctx->pc = 0x1D2B20u;
    // 0x1d2b20: 0x8e230010
    ctx->pc = 0x1d2b20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d2b24: 0x3c020023
    ctx->pc = 0x1d2b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2b28: 0x244267e0
    ctx->pc = 0x1d2b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26592));
    // 0x1d2b2c: 0x31880
    ctx->pc = 0x1d2b2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2b30: 0x431021
    ctx->pc = 0x1d2b30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2b34: 0x8c450000
    ctx->pc = 0x1d2b34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2b38: 0xc06bde0
    ctx->pc = 0x1D2B38u;
    SET_GPR_U32(ctx, 31, 0x1D2B40u);
    ctx->pc = 0x1D2B3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B40u; }
    }
    if (ctx->pc != 0x1D2B40u) { return; }
    ctx->pc = 0x1D2B40u;
    // 0x1d2b40: 0x8e23000c
    ctx->pc = 0x1d2b40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2b44: 0x3c020023
    ctx->pc = 0x1d2b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d2b48: 0x244267f0
    ctx->pc = 0x1d2b48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26608));
    // 0x1d2b4c: 0x31880
    ctx->pc = 0x1d2b4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2b50: 0x431021
    ctx->pc = 0x1d2b50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2b54: 0x8c450000
    ctx->pc = 0x1d2b54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2b58: 0xc06bde0
    ctx->pc = 0x1D2B58u;
    SET_GPR_U32(ctx, 31, 0x1D2B60u);
    ctx->pc = 0x1D2B5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B60u; }
    }
    if (ctx->pc != 0x1D2B60u) { return; }
    ctx->pc = 0x1D2B60u;
    // 0x1d2b60: 0x8e230028
    ctx->pc = 0x1d2b60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d2b64: 0x10600012
    ctx->pc = 0x1D2B64u;
    {
        const bool branch_taken_0x1d2b64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2B68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x1d2b64) {
            ctx->pc = 0x1D2BB0u;
            goto label_1d2bb0;
        }
    }
    ctx->pc = 0x1D2B6Cu;
    // 0x1d2b6c: 0x24020005
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d2b70: 0x1062000a
    ctx->pc = 0x1D2B70u;
    {
        const bool branch_taken_0x1d2b70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D2B74u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x1d2b70) {
            ctx->pc = 0x1D2B9Cu;
            goto label_1d2b9c;
        }
    }
    ctx->pc = 0x1D2B78u;
    // 0x1d2b78: 0x24020006
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d2b7c: 0x10620003
    ctx->pc = 0x1D2B7Cu;
    {
        const bool branch_taken_0x1d2b7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D2B80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x1d2b7c) {
            ctx->pc = 0x1D2B8Cu;
            goto label_1d2b8c;
        }
    }
    ctx->pc = 0x1D2B84u;
    // 0x1d2b84: 0x10000009
    ctx->pc = 0x1D2B84u;
    {
        const bool branch_taken_0x1d2b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d2b84) {
            ctx->pc = 0x1D2BACu;
            goto label_1d2bac;
        }
    }
    ctx->pc = 0x1D2B8Cu;
label_1d2b8c:
    // 0x1d2b8c: 0xc06bde0
    ctx->pc = 0x1D2B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B94u);
    ctx->pc = 0x1D2B90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1536 << 16));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B94u; }
    }
    if (ctx->pc != 0x1D2B94u) { return; }
    ctx->pc = 0x1D2B94u;
    // 0x1d2b94: 0x10000009
    ctx->pc = 0x1D2B94u;
    {
        const bool branch_taken_0x1d2b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2B98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        if (branch_taken_0x1d2b94) {
            ctx->pc = 0x1D2BBCu;
            goto label_1d2bbc;
        }
    }
    ctx->pc = 0x1D2B9Cu;
label_1d2b9c:
    // 0x1d2b9c: 0xc06bde0
    ctx->pc = 0x1D2B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D2BA4u);
    ctx->pc = 0x1D2BA0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1280 << 16));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BA4u; }
    }
    if (ctx->pc != 0x1D2BA4u) { return; }
    ctx->pc = 0x1D2BA4u;
    // 0x1d2ba4: 0x10000004
    ctx->pc = 0x1D2BA4u;
    {
        const bool branch_taken_0x1d2ba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d2ba4) {
            ctx->pc = 0x1D2BB8u;
            goto label_1d2bb8;
        }
    }
    ctx->pc = 0x1D2BACu;
label_1d2bac:
    // 0x1d2bac: 0x2404005d
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
label_1d2bb0:
    // 0x1d2bb0: 0xc06bde0
    ctx->pc = 0x1D2BB0u;
    SET_GPR_U32(ctx, 31, 0x1D2BB8u);
    ctx->pc = 0x1D2BB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2BB8u; }
    }
    if (ctx->pc != 0x1D2BB8u) { return; }
    ctx->pc = 0x1D2BB8u;
label_1d2bb8:
    // 0x1d2bb8: 0x8e23002c
    ctx->pc = 0x1d2bb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1d2bbc:
    // 0x1d2bbc: 0xa2030089
    ctx->pc = 0x1d2bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2bc0: 0x8e230030
    ctx->pc = 0x1d2bc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d2bc4: 0xa203008a
    ctx->pc = 0x1d2bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2bc8: 0x8e230034
    ctx->pc = 0x1d2bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d2bcc: 0xa203008b
    ctx->pc = 0x1d2bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2bd0: 0x8e230040
    ctx->pc = 0x1d2bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1d2bd4: 0x31c03
    ctx->pc = 0x1d2bd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1d2bd8: 0xa203008c
    ctx->pc = 0x1d2bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2bdc: 0x8e23003c
    ctx->pc = 0x1d2bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d2be0: 0xa203008f
    ctx->pc = 0x1d2be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 143), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2be4: 0xdfbf0020
    ctx->pc = 0x1d2be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2be8: 0x7bb10010
    ctx->pc = 0x1d2be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2bec: 0x7bb00000
    ctx->pc = 0x1d2becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2bf0: 0x3e00008
    ctx->pc = 0x1D2BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2BF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2A78u: goto label_1d2a78;
            case 0x1D2A9Cu: goto label_1d2a9c;
            case 0x1D2AA0u: goto label_1d2aa0;
            case 0x1D2B8Cu: goto label_1d2b8c;
            case 0x1D2B9Cu: goto label_1d2b9c;
            case 0x1D2BACu: goto label_1d2bac;
            case 0x1D2BB0u: goto label_1d2bb0;
            case 0x1D2BB8u: goto label_1d2bb8;
            case 0x1D2BBCu: goto label_1d2bbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2BF8u;
    // 0x1d2bf8: 0x0
    ctx->pc = 0x1d2bf8u;
    // NOP
    // 0x1d2bfc: 0x0
    ctx->pc = 0x1d2bfcu;
    // NOP
}
