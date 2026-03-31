#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E9EE0
// Address: 0x1e9ee0 - 0x1ea000
void sub_001E9EE0_0x1e9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e9ee0u;

    // 0x1e9ee0: 0x27bdffd0
    ctx->pc = 0x1e9ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9ee4: 0xffbe0020
    ctx->pc = 0x1e9ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e9ee8: 0xffbf0028
    ctx->pc = 0x1e9ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e9eec: 0x3a0f02d
    ctx->pc = 0x1e9eecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ef0: 0xafc40000
    ctx->pc = 0x1e9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e9ef4: 0xafc50004
    ctx->pc = 0x1e9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e9ef8: 0xafc60008
    ctx->pc = 0x1e9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e9efc: 0xafc00014
    ctx->pc = 0x1e9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x1e9f00: 0x8fc40000
    ctx->pc = 0x1e9f00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9f04: 0xc07a216
    ctx->pc = 0x1E9F04u;
    SET_GPR_U32(ctx, 31, 0x1E9F0Cu);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F0Cu; }
    }
    if (ctx->pc != 0x1E9F0Cu) { return; }
    ctx->pc = 0x1E9F0Cu;
    // 0x1e9f0c: 0xafc2000c
    ctx->pc = 0x1e9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e9f10: 0x8fc2000c
    ctx->pc = 0x1e9f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9f14: 0x14400009
    ctx->pc = 0x1E9F14u;
    {
        const bool branch_taken_0x1e9f14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9f14) {
            ctx->pc = 0x1E9F3Cu;
            goto label_1e9f3c;
        }
    }
    ctx->pc = 0x1E9F1Cu;
    // 0x1e9f1c: 0xc0413bc
    ctx->pc = 0x1E9F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F24u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F24u; }
    }
    if (ctx->pc != 0x1E9F24u) { return; }
    ctx->pc = 0x1E9F24u;
    // 0x1e9f24: 0x40182d
    ctx->pc = 0x1e9f24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f28: 0x2402006c
    ctx->pc = 0x1e9f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e9f2c: 0xac620000
    ctx->pc = 0x1e9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9f30: 0x2402ffff
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9f34: 0x1000002c
    ctx->pc = 0x1E9F34u;
    {
        const bool branch_taken_0x1e9f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9f34) {
            ctx->pc = 0x1E9FE8u;
            goto label_1e9fe8;
        }
    }
    ctx->pc = 0x1E9F3Cu;
label_1e9f3c:
    // 0x1e9f3c: 0x8fc2000c
    ctx->pc = 0x1e9f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9f40: 0x94430004
    ctx->pc = 0x1e9f40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9f44: 0x2402007f
    ctx->pc = 0x1e9f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e9f48: 0x10620009
    ctx->pc = 0x1E9F48u;
    {
        const bool branch_taken_0x1e9f48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9f48) {
            ctx->pc = 0x1E9F70u;
            goto label_1e9f70;
        }
    }
    ctx->pc = 0x1E9F50u;
    // 0x1e9f50: 0xc0413bc
    ctx->pc = 0x1E9F50u;
    SET_GPR_U32(ctx, 31, 0x1E9F58u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F58u; }
    }
    if (ctx->pc != 0x1E9F58u) { return; }
    ctx->pc = 0x1E9F58u;
    // 0x1e9f58: 0x40182d
    ctx->pc = 0x1e9f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f5c: 0x24020009
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e9f60: 0xac620000
    ctx->pc = 0x1e9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9f64: 0x2402ffff
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9f68: 0x1000001f
    ctx->pc = 0x1E9F68u;
    {
        const bool branch_taken_0x1e9f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9f68) {
            ctx->pc = 0x1E9FE8u;
            goto label_1e9fe8;
        }
    }
    ctx->pc = 0x1E9F70u;
label_1e9f70:
    // 0x1e9f70: 0x8fc30004
    ctx->pc = 0x1e9f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9f74: 0x3c027104
    ctx->pc = 0x1e9f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28932 << 16));
    // 0x1e9f78: 0x34425ead
    ctx->pc = 0x1e9f78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 24237));
    // 0x1e9f7c: 0x10620009
    ctx->pc = 0x1E9F7Cu;
    {
        const bool branch_taken_0x1e9f7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9f7c) {
            ctx->pc = 0x1E9FA4u;
            goto label_1e9fa4;
        }
    }
    ctx->pc = 0x1E9F84u;
    // 0x1e9f84: 0xc0413bc
    ctx->pc = 0x1E9F84u;
    SET_GPR_U32(ctx, 31, 0x1E9F8Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F8Cu; }
    }
    if (ctx->pc != 0x1E9F8Cu) { return; }
    ctx->pc = 0x1E9F8Cu;
    // 0x1e9f8c: 0x40182d
    ctx->pc = 0x1e9f8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f90: 0x24020016
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e9f94: 0xac620000
    ctx->pc = 0x1e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9f98: 0x2402ffff
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9f9c: 0x10000012
    ctx->pc = 0x1E9F9Cu;
    {
        const bool branch_taken_0x1e9f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9f9c) {
            ctx->pc = 0x1E9FE8u;
            goto label_1e9fe8;
        }
    }
    ctx->pc = 0x1E9FA4u;
label_1e9fa4:
    // 0x1e9fa4: 0x8fc2000c
    ctx->pc = 0x1e9fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e9fa8: 0x24420008
    ctx->pc = 0x1e9fa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e9fac: 0x40202d
    ctx->pc = 0x1e9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fb0: 0xc07c6e1
    ctx->pc = 0x1E9FB0u;
    SET_GPR_U32(ctx, 31, 0x1E9FB8u);
    ctx->pc = 0x1F1B84u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B84_0x1f1b84(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FB8u; }
    }
    if (ctx->pc != 0x1E9FB8u) { return; }
    ctx->pc = 0x1E9FB8u;
    // 0x1e9fb8: 0xafc20010
    ctx->pc = 0x1e9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e9fbc: 0x8fc20010
    ctx->pc = 0x1e9fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9fc0: 0x10400005
    ctx->pc = 0x1E9FC0u;
    {
        const bool branch_taken_0x1e9fc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9fc0) {
            ctx->pc = 0x1E9FD8u;
            goto label_1e9fd8;
        }
    }
    ctx->pc = 0x1E9FC8u;
    // 0x1e9fc8: 0x8fc40010
    ctx->pc = 0x1e9fc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9fcc: 0xc07c6b6
    ctx->pc = 0x1E9FCCu;
    SET_GPR_U32(ctx, 31, 0x1E9FD4u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FD4u; }
    }
    if (ctx->pc != 0x1E9FD4u) { return; }
    ctx->pc = 0x1E9FD4u;
    // 0x1e9fd4: 0xafc20014
    ctx->pc = 0x1e9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_1e9fd8:
    // 0x1e9fd8: 0x8fc30008
    ctx->pc = 0x1e9fd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e9fdc: 0x8fc20014
    ctx->pc = 0x1e9fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e9fe0: 0xac620000
    ctx->pc = 0x1e9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9fe4: 0x102d
    ctx->pc = 0x1e9fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fe8:
    // 0x1e9fe8: 0x3c0e82d
    ctx->pc = 0x1e9fe8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fec: 0xdfbe0020
    ctx->pc = 0x1e9fecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9ff0: 0xdfbf0028
    ctx->pc = 0x1e9ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e9ff4: 0x27bd0030
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9ff8: 0x3e00008
    ctx->pc = 0x1E9FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9F3Cu: goto label_1e9f3c;
            case 0x1E9F70u: goto label_1e9f70;
            case 0x1E9FA4u: goto label_1e9fa4;
            case 0x1E9FD8u: goto label_1e9fd8;
            case 0x1E9FE8u: goto label_1e9fe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA000u;
}
