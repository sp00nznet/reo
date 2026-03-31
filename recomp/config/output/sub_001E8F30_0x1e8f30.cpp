#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E8F30
// Address: 0x1e8f30 - 0x1e930c
void sub_001E8F30_0x1e8f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e8f30u;

    // 0x1e8f30: 0x27bdffd0
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8f34: 0xffbe0020
    ctx->pc = 0x1e8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e8f38: 0xffbf0028
    ctx->pc = 0x1e8f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e8f3c: 0x3a0f02d
    ctx->pc = 0x1e8f3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f40: 0xafc40000
    ctx->pc = 0x1e8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8f44: 0xafc50004
    ctx->pc = 0x1e8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e8f48: 0xafc60008
    ctx->pc = 0x1e8f48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e8f4c: 0xc0413bc
    ctx->pc = 0x1E8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E8F54u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F54u; }
    }
    if (ctx->pc != 0x1E8F54u) { return; }
    ctx->pc = 0x1E8F54u;
    // 0x1e8f54: 0xac400000
    ctx->pc = 0x1e8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e8f58: 0x8fc20004
    ctx->pc = 0x1e8f58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8f5c: 0xafc20010
    ctx->pc = 0x1e8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e8f60: 0x8fc40000
    ctx->pc = 0x1e8f60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8f64: 0xc07a216
    ctx->pc = 0x1E8F64u;
    SET_GPR_U32(ctx, 31, 0x1E8F6Cu);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F6Cu; }
    }
    if (ctx->pc != 0x1E8F6Cu) { return; }
    ctx->pc = 0x1E8F6Cu;
    // 0x1e8f6c: 0xafc2000c
    ctx->pc = 0x1e8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e8f70: 0x8fc2000c
    ctx->pc = 0x1e8f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8f74: 0x14400009
    ctx->pc = 0x1E8F74u;
    {
        const bool branch_taken_0x1e8f74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f74) {
            ctx->pc = 0x1E8F9Cu;
            goto label_1e8f9c;
        }
    }
    ctx->pc = 0x1E8F7Cu;
    // 0x1e8f7c: 0xc0413bc
    ctx->pc = 0x1E8F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E8F84u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F84u; }
    }
    if (ctx->pc != 0x1E8F84u) { return; }
    ctx->pc = 0x1E8F84u;
    // 0x1e8f84: 0x40182d
    ctx->pc = 0x1e8f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f88: 0x2402006c
    ctx->pc = 0x1e8f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e8f8c: 0xac620000
    ctx->pc = 0x1e8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8f90: 0x2402ffff
    ctx->pc = 0x1e8f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8f94: 0x1000006b
    ctx->pc = 0x1E8F94u;
    {
        const bool branch_taken_0x1e8f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f94) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E8F9Cu;
label_1e8f9c:
    // 0x1e8f9c: 0x8fc2000c
    ctx->pc = 0x1e8f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8fa0: 0x94430004
    ctx->pc = 0x1e8fa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8fa4: 0x3402ffff
    ctx->pc = 0x1e8fa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e8fa8: 0x10620009
    ctx->pc = 0x1E8FA8u;
    {
        const bool branch_taken_0x1e8fa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8fa8) {
            ctx->pc = 0x1E8FD0u;
            goto label_1e8fd0;
        }
    }
    ctx->pc = 0x1E8FB0u;
    // 0x1e8fb0: 0xc0413bc
    ctx->pc = 0x1E8FB0u;
    SET_GPR_U32(ctx, 31, 0x1E8FB8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FB8u; }
    }
    if (ctx->pc != 0x1E8FB8u) { return; }
    ctx->pc = 0x1E8FB8u;
    // 0x1e8fb8: 0x40182d
    ctx->pc = 0x1e8fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fbc: 0x2402006b
    ctx->pc = 0x1e8fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e8fc0: 0xac620000
    ctx->pc = 0x1e8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8fc4: 0x2402ffff
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8fc8: 0x1000005e
    ctx->pc = 0x1E8FC8u;
    {
        const bool branch_taken_0x1e8fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8fc8) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x8fc30008
    ctx->pc = 0x1e8fd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8fd4: 0x24020010
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e8fd8: 0x10620009
    ctx->pc = 0x1E8FD8u;
    {
        const bool branch_taken_0x1e8fd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8fd8) {
            ctx->pc = 0x1E9000u;
            goto label_1e9000;
        }
    }
    ctx->pc = 0x1E8FE0u;
    // 0x1e8fe0: 0xc0413bc
    ctx->pc = 0x1E8FE0u;
    SET_GPR_U32(ctx, 31, 0x1E8FE8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FE8u; }
    }
    if (ctx->pc != 0x1E8FE8u) { return; }
    ctx->pc = 0x1E8FE8u;
    // 0x1e8fe8: 0x40182d
    ctx->pc = 0x1e8fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fec: 0x2402000e
    ctx->pc = 0x1e8fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8ff0: 0xac620000
    ctx->pc = 0x1e8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8ff4: 0x2402ffff
    ctx->pc = 0x1e8ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8ff8: 0x10000052
    ctx->pc = 0x1E8FF8u;
    {
        const bool branch_taken_0x1e8ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ff8) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E9000u;
label_1e9000:
    // 0x1e9000: 0x8fc2000c
    ctx->pc = 0x1e9000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9004: 0x94420002
    ctx->pc = 0x1e9004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9008: 0xafc20018
    ctx->pc = 0x1e9008u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1e900c: 0x24020001
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9010: 0x8fc30018
    ctx->pc = 0x1e9010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e9014: 0x1062003e
    ctx->pc = 0x1E9014u;
    {
        const bool branch_taken_0x1e9014 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9014) {
            ctx->pc = 0x1E9110u;
            goto label_1e9110;
        }
    }
    ctx->pc = 0x1E901Cu;
    // 0x1e901c: 0x24020002
    ctx->pc = 0x1e901cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9020: 0x8fc40018
    ctx->pc = 0x1e9020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e9024: 0x10820009
    ctx->pc = 0x1E9024u;
    {
        const bool branch_taken_0x1e9024 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9024) {
            ctx->pc = 0x1E904Cu;
            goto label_1e904c;
        }
    }
    ctx->pc = 0x1E902Cu;
    // 0x1e902c: 0xc0413bc
    ctx->pc = 0x1E902Cu;
    SET_GPR_U32(ctx, 31, 0x1E9034u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9034u; }
    }
    if (ctx->pc != 0x1E9034u) { return; }
    ctx->pc = 0x1E9034u;
    // 0x1e9034: 0x40182d
    ctx->pc = 0x1e9034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9038: 0x2402006c
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e903c: 0xac620000
    ctx->pc = 0x1e903cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9040: 0x2402ffff
    ctx->pc = 0x1e9040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9044: 0x1000003f
    ctx->pc = 0x1E9044u;
    {
        const bool branch_taken_0x1e9044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9044) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E904Cu;
label_1e904c:
    // 0x1e904c: 0x8fc20010
    ctx->pc = 0x1e904cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9050: 0x94420002
    ctx->pc = 0x1e9050u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9054: 0x202d
    ctx->pc = 0x1e9054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9058: 0x282d
    ctx->pc = 0x1e9058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e905c: 0x40302d
    ctx->pc = 0x1e905cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9060: 0xc0760f4
    ctx->pc = 0x1E9060u;
    SET_GPR_U32(ctx, 31, 0x1E9068u);
    ctx->pc = 0x1D83D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D83D0_0x1d83d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9068u; }
    }
    if (ctx->pc != 0x1E9068u) { return; }
    ctx->pc = 0x1E9068u;
    // 0x1e9068: 0xa7c20014
    ctx->pc = 0x1e9068u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e906c: 0x87c20014
    ctx->pc = 0x1e906cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e9070: 0x3c040026
    ctx->pc = 0x1e9070u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1e9074: 0x24848068
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934632));
    // 0x1e9078: 0x40282d
    ctx->pc = 0x1e9078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e907c: 0xc045a12
    ctx->pc = 0x1E907Cu;
    SET_GPR_U32(ctx, 31, 0x1E9084u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9084u; }
    }
    if (ctx->pc != 0x1E9084u) { return; }
    ctx->pc = 0x1E9084u;
    // 0x1e9084: 0x87c30014
    ctx->pc = 0x1e9084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e9088: 0x2402fffc
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1e908c: 0x14620009
    ctx->pc = 0x1E908Cu;
    {
        const bool branch_taken_0x1e908c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e908c) {
            ctx->pc = 0x1E90B4u;
            goto label_1e90b4;
        }
    }
    ctx->pc = 0x1E9094u;
    // 0x1e9094: 0xc0413bc
    ctx->pc = 0x1E9094u;
    SET_GPR_U32(ctx, 31, 0x1E909Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E909Cu; }
    }
    if (ctx->pc != 0x1E909Cu) { return; }
    ctx->pc = 0x1E909Cu;
    // 0x1e909c: 0x40182d
    ctx->pc = 0x1e909cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90a0: 0x2402007d
    ctx->pc = 0x1e90a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 125));
    // 0x1e90a4: 0xac620000
    ctx->pc = 0x1e90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e90a8: 0x2402ffff
    ctx->pc = 0x1e90a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e90ac: 0x10000025
    ctx->pc = 0x1E90ACu;
    {
        const bool branch_taken_0x1e90ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e90ac) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E90B4u;
label_1e90b4:
    // 0x1e90b4: 0x87c30014
    ctx->pc = 0x1e90b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e90b8: 0x2402fffd
    ctx->pc = 0x1e90b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e90bc: 0x14620009
    ctx->pc = 0x1E90BCu;
    {
        const bool branch_taken_0x1e90bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e90bc) {
            ctx->pc = 0x1E90E4u;
            goto label_1e90e4;
        }
    }
    ctx->pc = 0x1E90C4u;
    // 0x1e90c4: 0xc0413bc
    ctx->pc = 0x1E90C4u;
    SET_GPR_U32(ctx, 31, 0x1E90CCu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90CCu; }
    }
    if (ctx->pc != 0x1E90CCu) { return; }
    ctx->pc = 0x1E90CCu;
    // 0x1e90cc: 0x40182d
    ctx->pc = 0x1e90ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90d0: 0x3402ffff
    ctx->pc = 0x1e90d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e90d4: 0xac620000
    ctx->pc = 0x1e90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e90d8: 0x2402ffff
    ctx->pc = 0x1e90d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e90dc: 0x10000019
    ctx->pc = 0x1E90DCu;
    {
        const bool branch_taken_0x1e90dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e90dc) {
            ctx->pc = 0x1E9144u;
            goto label_1e9144;
        }
    }
    ctx->pc = 0x1E90E4u;
label_1e90e4:
    // 0x1e90e4: 0x8fc3000c
    ctx->pc = 0x1e90e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e90e8: 0x97c20014
    ctx->pc = 0x1e90e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e90ec: 0xa4620000
    ctx->pc = 0x1e90ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e90f0: 0x8fc3000c
    ctx->pc = 0x1e90f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e90f4: 0x24020002
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e90f8: 0xa4620002
    ctx->pc = 0x1e90f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e90fc: 0x8fc3000c
    ctx->pc = 0x1e90fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9100: 0x2402007f
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e9104: 0xa4620004
    ctx->pc = 0x1e9104u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9108: 0x1000000d
    ctx->pc = 0x1E9108u;
    {
        const bool branch_taken_0x1e9108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9108) {
            ctx->pc = 0x1E9140u;
            goto label_1e9140;
        }
    }
    ctx->pc = 0x1E9110u;
label_1e9110:
    // 0x1e9110: 0x8fc3000c
    ctx->pc = 0x1e9110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9114: 0x8fc20010
    ctx->pc = 0x1e9114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9118: 0x88440007
    ctx->pc = 0x1e9118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1e911c: 0x98440004
    ctx->pc = 0x1e911cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1e9120: 0x80102d
    ctx->pc = 0x1e9120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9124: 0x2103c
    ctx->pc = 0x1e9124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e9128: 0x2103f
    ctx->pc = 0x1e9128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e912c: 0xac62001c
    ctx->pc = 0x1e912cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1e9130: 0x8fc3000c
    ctx->pc = 0x1e9130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9134: 0x8fc20010
    ctx->pc = 0x1e9134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9138: 0x94420002
    ctx->pc = 0x1e9138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e913c: 0xac620020
    ctx->pc = 0x1e913cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_1e9140:
    // 0x1e9140: 0x102d
    ctx->pc = 0x1e9140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9144:
    // 0x1e9144: 0x3c0e82d
    ctx->pc = 0x1e9144u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9148: 0xdfbe0020
    ctx->pc = 0x1e9148u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e914c: 0xdfbf0028
    ctx->pc = 0x1e914cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e9150: 0x27bd0030
    ctx->pc = 0x1e9150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9154: 0x3e00008
    ctx->pc = 0x1E9154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8F9Cu: goto label_1e8f9c;
            case 0x1E8FD0u: goto label_1e8fd0;
            case 0x1E9000u: goto label_1e9000;
            case 0x1E904Cu: goto label_1e904c;
            case 0x1E90B4u: goto label_1e90b4;
            case 0x1E90E4u: goto label_1e90e4;
            case 0x1E9110u: goto label_1e9110;
            case 0x1E9140u: goto label_1e9140;
            case 0x1E9144u: goto label_1e9144;
            case 0x1E91C4u: goto label_1e91c4;
            case 0x1E91F8u: goto label_1e91f8;
            case 0x1E9234u: goto label_1e9234;
            case 0x1E927Cu: goto label_1e927c;
            case 0x1E92C4u: goto label_1e92c4;
            case 0x1E92F0u: goto label_1e92f0;
            case 0x1E92F4u: goto label_1e92f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E915Cu;
    // 0x1e915c: 0x27bdffd0
    ctx->pc = 0x1e915cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9160: 0xffbe0020
    ctx->pc = 0x1e9160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e9164: 0xffbf0028
    ctx->pc = 0x1e9164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e9168: 0x3a0f02d
    ctx->pc = 0x1e9168u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e916c: 0xafc40000
    ctx->pc = 0x1e916cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e9170: 0xafc50004
    ctx->pc = 0x1e9170u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e9174: 0xafc60008
    ctx->pc = 0x1e9174u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e9178: 0xafc7000c
    ctx->pc = 0x1e9178u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1e917c: 0xc0413bc
    ctx->pc = 0x1E917Cu;
    SET_GPR_U32(ctx, 31, 0x1E9184u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9184u; }
    }
    if (ctx->pc != 0x1E9184u) { return; }
    ctx->pc = 0x1E9184u;
    // 0x1e9184: 0xac400000
    ctx->pc = 0x1e9184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e9188: 0x8fc40000
    ctx->pc = 0x1e9188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e918c: 0xc07a216
    ctx->pc = 0x1E918Cu;
    SET_GPR_U32(ctx, 31, 0x1E9194u);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9194u; }
    }
    if (ctx->pc != 0x1E9194u) { return; }
    ctx->pc = 0x1E9194u;
    // 0x1e9194: 0xafc20010
    ctx->pc = 0x1e9194u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e9198: 0x8fc20010
    ctx->pc = 0x1e9198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e919c: 0x14400009
    ctx->pc = 0x1E919Cu;
    {
        const bool branch_taken_0x1e919c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e919c) {
            ctx->pc = 0x1E91C4u;
            goto label_1e91c4;
        }
    }
    ctx->pc = 0x1E91A4u;
    // 0x1e91a4: 0xc0413bc
    ctx->pc = 0x1E91A4u;
    SET_GPR_U32(ctx, 31, 0x1E91ACu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91ACu; }
    }
    if (ctx->pc != 0x1E91ACu) { return; }
    ctx->pc = 0x1E91ACu;
    // 0x1e91ac: 0x40182d
    ctx->pc = 0x1e91acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91b0: 0x2402000e
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e91b4: 0xac620000
    ctx->pc = 0x1e91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e91b8: 0x2402ffff
    ctx->pc = 0x1e91b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e91bc: 0x1000004d
    ctx->pc = 0x1E91BCu;
    {
        const bool branch_taken_0x1e91bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e91bc) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E91C4u;
label_1e91c4:
    // 0x1e91c4: 0x8fc20010
    ctx->pc = 0x1e91c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e91c8: 0x94430002
    ctx->pc = 0x1e91c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e91cc: 0x24020001
    ctx->pc = 0x1e91ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e91d0: 0x10620009
    ctx->pc = 0x1E91D0u;
    {
        const bool branch_taken_0x1e91d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e91d0) {
            ctx->pc = 0x1E91F8u;
            goto label_1e91f8;
        }
    }
    ctx->pc = 0x1E91D8u;
    // 0x1e91d8: 0xc0413bc
    ctx->pc = 0x1E91D8u;
    SET_GPR_U32(ctx, 31, 0x1E91E0u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91E0u; }
    }
    if (ctx->pc != 0x1E91E0u) { return; }
    ctx->pc = 0x1E91E0u;
    // 0x1e91e0: 0x40182d
    ctx->pc = 0x1e91e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91e4: 0x2402006b
    ctx->pc = 0x1e91e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e91e8: 0xac620000
    ctx->pc = 0x1e91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e91ec: 0x2402ffff
    ctx->pc = 0x1e91ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e91f0: 0x10000040
    ctx->pc = 0x1E91F0u;
    {
        const bool branch_taken_0x1e91f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e91f0) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E91F8u;
label_1e91f8:
    // 0x1e91f8: 0x8fc40010
    ctx->pc = 0x1e91f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e91fc: 0xc07aa87
    ctx->pc = 0x1E91FCu;
    SET_GPR_U32(ctx, 31, 0x1E9204u);
    ctx->pc = 0x1EAA1Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAA1C_0x1eaa1c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9204u; }
    }
    if (ctx->pc != 0x1E9204u) { return; }
    ctx->pc = 0x1E9204u;
    // 0x1e9204: 0xa7c20014
    ctx->pc = 0x1e9204u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9208: 0x87c20014
    ctx->pc = 0x1e9208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e920c: 0x4410009
    ctx->pc = 0x1E920Cu;
    {
        const bool branch_taken_0x1e920c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e920c) {
            ctx->pc = 0x1E9234u;
            goto label_1e9234;
        }
    }
    ctx->pc = 0x1E9214u;
    // 0x1e9214: 0xc0413bc
    ctx->pc = 0x1E9214u;
    SET_GPR_U32(ctx, 31, 0x1E921Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E921Cu; }
    }
    if (ctx->pc != 0x1E921Cu) { return; }
    ctx->pc = 0x1E921Cu;
    // 0x1e921c: 0x40182d
    ctx->pc = 0x1e921cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9220: 0x24020009
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e9224: 0xac620000
    ctx->pc = 0x1e9224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9228: 0x2402ffff
    ctx->pc = 0x1e9228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e922c: 0x10000031
    ctx->pc = 0x1E922Cu;
    {
        const bool branch_taken_0x1e922c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e922c) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E9234u;
label_1e9234:
    // 0x1e9234: 0x8fc20010
    ctx->pc = 0x1e9234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9238: 0x94430004
    ctx->pc = 0x1e9238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e923c: 0x24020ff4
    ctx->pc = 0x1e923cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4084));
    // 0x1e9240: 0x1062000e
    ctx->pc = 0x1E9240u;
    {
        const bool branch_taken_0x1e9240 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9240) {
            ctx->pc = 0x1E927Cu;
            goto label_1e927c;
        }
    }
    ctx->pc = 0x1E9248u;
    // 0x1e9248: 0x8fc20010
    ctx->pc = 0x1e9248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e924c: 0x94430004
    ctx->pc = 0x1e924cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9250: 0x2402007f
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e9254: 0x10620009
    ctx->pc = 0x1E9254u;
    {
        const bool branch_taken_0x1e9254 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9254) {
            ctx->pc = 0x1E927Cu;
            goto label_1e927c;
        }
    }
    ctx->pc = 0x1E925Cu;
    // 0x1e925c: 0xc0413bc
    ctx->pc = 0x1E925Cu;
    SET_GPR_U32(ctx, 31, 0x1E9264u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9264u; }
    }
    if (ctx->pc != 0x1E9264u) { return; }
    ctx->pc = 0x1E9264u;
    // 0x1e9264: 0x40182d
    ctx->pc = 0x1e9264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9268: 0x24020009
    ctx->pc = 0x1e9268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e926c: 0xac620000
    ctx->pc = 0x1e926cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9270: 0x2402ffff
    ctx->pc = 0x1e9270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9274: 0x1000001f
    ctx->pc = 0x1E9274u;
    {
        const bool branch_taken_0x1e9274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9274) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E927Cu;
label_1e927c:
    // 0x1e927c: 0x8fc20010
    ctx->pc = 0x1e927cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9280: 0x84420000
    ctx->pc = 0x1e9280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9284: 0x87c30008
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e9288: 0x40202d
    ctx->pc = 0x1e9288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e928c: 0x8fc50004
    ctx->pc = 0x1e928cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9290: 0x60302d
    ctx->pc = 0x1e9290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9294: 0xc075fa4
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x1D7E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7E90_0x1d7e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E929Cu; }
    }
    if (ctx->pc != 0x1E929Cu) { return; }
    ctx->pc = 0x1E929Cu;
    // 0x1e929c: 0xa7c20014
    ctx->pc = 0x1e929cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e92a0: 0x87c30014
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e92a4: 0x2402ffff
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e92a8: 0x14620006
    ctx->pc = 0x1E92A8u;
    {
        const bool branch_taken_0x1e92a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e92a8) {
            ctx->pc = 0x1E92C4u;
            goto label_1e92c4;
        }
    }
    ctx->pc = 0x1E92B0u;
    // 0x1e92b0: 0x8fc30010
    ctx->pc = 0x1e92b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e92b4: 0x24020ff2
    ctx->pc = 0x1e92b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4082));
    // 0x1e92b8: 0xa4620004
    ctx->pc = 0x1e92b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e92bc: 0x1000000c
    ctx->pc = 0x1E92BCu;
    {
        const bool branch_taken_0x1e92bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e92bc) {
            ctx->pc = 0x1E92F0u;
            goto label_1e92f0;
        }
    }
    ctx->pc = 0x1E92C4u;
label_1e92c4:
    // 0x1e92c4: 0x87c20014
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e92c8: 0x4410009
    ctx->pc = 0x1E92C8u;
    {
        const bool branch_taken_0x1e92c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e92c8) {
            ctx->pc = 0x1E92F0u;
            goto label_1e92f0;
        }
    }
    ctx->pc = 0x1E92D0u;
    // 0x1e92d0: 0xc0413bc
    ctx->pc = 0x1E92D0u;
    SET_GPR_U32(ctx, 31, 0x1E92D8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92D8u; }
    }
    if (ctx->pc != 0x1E92D8u) { return; }
    ctx->pc = 0x1E92D8u;
    // 0x1e92d8: 0x40182d
    ctx->pc = 0x1e92d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92dc: 0x2402000e
    ctx->pc = 0x1e92dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e92e0: 0xac620000
    ctx->pc = 0x1e92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e92e4: 0x2402ffff
    ctx->pc = 0x1e92e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e92e8: 0x10000002
    ctx->pc = 0x1E92E8u;
    {
        const bool branch_taken_0x1e92e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e92e8) {
            ctx->pc = 0x1E92F4u;
            goto label_1e92f4;
        }
    }
    ctx->pc = 0x1E92F0u;
label_1e92f0:
    // 0x1e92f0: 0x102d
    ctx->pc = 0x1e92f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e92f4:
    // 0x1e92f4: 0x3c0e82d
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92f8: 0xdfbe0020
    ctx->pc = 0x1e92f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e92fc: 0xdfbf0028
    ctx->pc = 0x1e92fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e9300: 0x27bd0030
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9304: 0x3e00008
    ctx->pc = 0x1E9304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8F9Cu: goto label_1e8f9c;
            case 0x1E8FD0u: goto label_1e8fd0;
            case 0x1E9000u: goto label_1e9000;
            case 0x1E904Cu: goto label_1e904c;
            case 0x1E90B4u: goto label_1e90b4;
            case 0x1E90E4u: goto label_1e90e4;
            case 0x1E9110u: goto label_1e9110;
            case 0x1E9140u: goto label_1e9140;
            case 0x1E9144u: goto label_1e9144;
            case 0x1E91C4u: goto label_1e91c4;
            case 0x1E91F8u: goto label_1e91f8;
            case 0x1E9234u: goto label_1e9234;
            case 0x1E927Cu: goto label_1e927c;
            case 0x1E92C4u: goto label_1e92c4;
            case 0x1E92F0u: goto label_1e92f0;
            case 0x1E92F4u: goto label_1e92f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E930Cu;
}
