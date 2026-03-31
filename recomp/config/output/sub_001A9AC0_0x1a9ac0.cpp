#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9AC0
// Address: 0x1a9ac0 - 0x1a9ba0
void sub_001A9AC0_0x1a9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9ac0u;

    // 0x1a9ac0: 0x27bdffd0
    ctx->pc = 0x1a9ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9ac4: 0x24020002
    ctx->pc = 0x1a9ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9ac8: 0xffbf0020
    ctx->pc = 0x1a9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9acc: 0x7fb10010
    ctx->pc = 0x1a9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9ad0: 0x7fb00000
    ctx->pc = 0x1a9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9ad4: 0xa0882d
    ctx->pc = 0x1a9ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad8: 0x10e2001c
    ctx->pc = 0x1A9AD8u;
    {
        const bool branch_taken_0x1a9ad8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A9ADCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9ad8) {
            ctx->pc = 0x1A9B4Cu;
            goto label_1a9b4c;
        }
    }
    ctx->pc = 0x1A9AE0u;
    // 0x1a9ae0: 0x24020001
    ctx->pc = 0x1a9ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9ae4: 0x10e2000f
    ctx->pc = 0x1A9AE4u;
    {
        const bool branch_taken_0x1a9ae4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a9ae4) {
            ctx->pc = 0x1A9B24u;
            goto label_1a9b24;
        }
    }
    ctx->pc = 0x1A9AECu;
    // 0x1a9aec: 0x10e00003
    ctx->pc = 0x1A9AECu;
    {
        const bool branch_taken_0x1a9aec = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9aec) {
            ctx->pc = 0x1A9AFCu;
            goto label_1a9afc;
        }
    }
    ctx->pc = 0x1A9AF4u;
    // 0x1a9af4: 0x1000001e
    ctx->pc = 0x1A9AF4u;
    {
        const bool branch_taken_0x1a9af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9AF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9af4) {
            ctx->pc = 0x1A9B70u;
            goto label_1a9b70;
        }
    }
    ctx->pc = 0x1A9AFCu;
label_1a9afc:
    // 0x1a9afc: 0xc06a678
    ctx->pc = 0x1A9AFCu;
    SET_GPR_U32(ctx, 31, 0x1A9B04u);
    ctx->pc = 0x1A99E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A99E0_0x1a99e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B04u; }
    }
    if (ctx->pc != 0x1A9B04u) { return; }
    ctx->pc = 0x1A9B04u;
    // 0x1a9b04: 0x40302d
    ctx->pc = 0x1a9b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b08: 0x4c00020
    ctx->pc = 0x1A9B08u;
    {
        const bool branch_taken_0x1a9b08 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A9B0Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b08) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9B10u;
    // 0x1a9b10: 0x200202d
    ctx->pc = 0x1a9b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b14: 0xc04a1ce
    ctx->pc = 0x1A9B14u;
    SET_GPR_U32(ctx, 31, 0x1A9B1Cu);
    ctx->pc = 0x1A9B18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x128738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128738_0x128738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B1Cu; }
    }
    if (ctx->pc != 0x1A9B1Cu) { return; }
    ctx->pc = 0x1A9B1Cu;
    // 0x1a9b1c: 0x10000013
    ctx->pc = 0x1A9B1Cu;
    {
        const bool branch_taken_0x1a9b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9b1c) {
            ctx->pc = 0x1A9B6Cu;
            goto label_1a9b6c;
        }
    }
    ctx->pc = 0x1A9B24u;
label_1a9b24:
    // 0x1a9b24: 0xc06a6e8
    ctx->pc = 0x1A9B24u;
    SET_GPR_U32(ctx, 31, 0x1A9B2Cu);
    ctx->pc = 0x1A9BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9BA0_0x1a9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B2Cu; }
    }
    if (ctx->pc != 0x1A9B2Cu) { return; }
    ctx->pc = 0x1A9B2Cu;
    // 0x1a9b2c: 0x40302d
    ctx->pc = 0x1a9b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b30: 0x4c00016
    ctx->pc = 0x1A9B30u;
    {
        const bool branch_taken_0x1a9b30 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A9B34u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b30) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9B38u;
    // 0x1a9b38: 0x200202d
    ctx->pc = 0x1a9b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b3c: 0xc04a1ce
    ctx->pc = 0x1A9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9B44u);
    ctx->pc = 0x1A9B40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x128738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128738_0x128738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B44u; }
    }
    if (ctx->pc != 0x1A9B44u) { return; }
    ctx->pc = 0x1A9B44u;
    // 0x1a9b44: 0x10000009
    ctx->pc = 0x1A9B44u;
    {
        const bool branch_taken_0x1a9b44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9b44) {
            ctx->pc = 0x1A9B6Cu;
            goto label_1a9b6c;
        }
    }
    ctx->pc = 0x1A9B4Cu;
label_1a9b4c:
    // 0x1a9b4c: 0xc06a720
    ctx->pc = 0x1A9B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9B54u);
    ctx->pc = 0x1A9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9C80_0x1a9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B54u; }
    }
    if (ctx->pc != 0x1A9B54u) { return; }
    ctx->pc = 0x1A9B54u;
    // 0x1a9b54: 0x40302d
    ctx->pc = 0x1a9b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b58: 0x4c0000c
    ctx->pc = 0x1A9B58u;
    {
        const bool branch_taken_0x1a9b58 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A9B5Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b58) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9B60u;
    // 0x1a9b60: 0x200202d
    ctx->pc = 0x1a9b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b64: 0xc04a1ce
    ctx->pc = 0x1A9B64u;
    SET_GPR_U32(ctx, 31, 0x1A9B6Cu);
    ctx->pc = 0x1A9B68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x128738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128738_0x128738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B6Cu; }
    }
    if (ctx->pc != 0x1A9B6Cu) { return; }
    ctx->pc = 0x1A9B6Cu;
label_1a9b6c:
    // 0x1a9b6c: 0x200202d
    ctx->pc = 0x1a9b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b70:
    // 0x1a9b70: 0xc04a2c6
    ctx->pc = 0x1A9B70u;
    SET_GPR_U32(ctx, 31, 0x1A9B78u);
    ctx->pc = 0x128B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B18_0x128b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B78u; }
    }
    if (ctx->pc != 0x1A9B78u) { return; }
    ctx->pc = 0x1A9B78u;
    // 0x1a9b78: 0x24030003
    ctx->pc = 0x1a9b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9b7c: 0x0
    ctx->pc = 0x1a9b7cu;
    // NOP
    // 0x1a9b80: 0x0
    ctx->pc = 0x1a9b80u;
    // NOP
    // 0x1a9b84: 0x1443fff9
    ctx->pc = 0x1A9B84u;
    {
        const bool branch_taken_0x1a9b84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a9b84) {
            ctx->pc = 0x1A9B6Cu;
            goto label_1a9b6c;
        }
    }
    ctx->pc = 0x1A9B8Cu;
label_1a9b8c:
    // 0x1a9b8c: 0xdfbf0020
    ctx->pc = 0x1a9b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9b90: 0x7bb10010
    ctx->pc = 0x1a9b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9b94: 0x7bb00000
    ctx->pc = 0x1a9b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b98: 0x3e00008
    ctx->pc = 0x1A9B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9AFCu: goto label_1a9afc;
            case 0x1A9B24u: goto label_1a9b24;
            case 0x1A9B4Cu: goto label_1a9b4c;
            case 0x1A9B6Cu: goto label_1a9b6c;
            case 0x1A9B70u: goto label_1a9b70;
            case 0x1A9B8Cu: goto label_1a9b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9BA0u;
}
