#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180E28
// Address: 0x180e28 - 0x180f60
void sub_00180E28_0x180e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180e28u;

    // 0x180e28: 0x3c030023
    ctx->pc = 0x180e28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x180e2c: 0x27bdfff0
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180e30: 0x8c65fa10
    ctx->pc = 0x180e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x180e34: 0x3c028101
    ctx->pc = 0x180e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180e38: 0xffbf0000
    ctx->pc = 0x180e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180e3c: 0x10a0000c
    ctx->pc = 0x180E3Cu;
    {
        const bool branch_taken_0x180e3c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180E40u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x180e3c) {
            ctx->pc = 0x180E70u;
            goto label_180e70;
        }
    }
    ctx->pc = 0x180E44u;
    // 0x180e44: 0x3c050028
    ctx->pc = 0x180e44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)40 << 16));
    // 0x180e48: 0x3c028101
    ctx->pc = 0x180e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180e4c: 0x8ca39504
    ctx->pc = 0x180e4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294939908)));
    // 0x180e50: 0x14600007
    ctx->pc = 0x180E50u;
    {
        const bool branch_taken_0x180e50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x180E54u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x180e50) {
            ctx->pc = 0x180E70u;
            goto label_180e70;
        }
    }
    ctx->pc = 0x180E58u;
    // 0x180e58: 0xc061e9c
    ctx->pc = 0x180E58u;
    SET_GPR_U32(ctx, 31, 0x180E60u);
    ctx->pc = 0x187A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A70_0x187a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E60u; }
    }
    if (ctx->pc != 0x180E60u) { return; }
    ctx->pc = 0x180E60u;
    // 0x180e60: 0x3c038101
    ctx->pc = 0x180e60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x180e64: 0x34638002
    ctx->pc = 0x180e64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32770));
    // 0x180e68: 0x2180b
    ctx->pc = 0x180e68u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x180e6c: 0x60102d
    ctx->pc = 0x180e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_180e70:
    // 0x180e70: 0xdfbf0000
    ctx->pc = 0x180e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e74: 0x3e00008
    ctx->pc = 0x180E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E70u: goto label_180e70;
            case 0x180EE0u: goto label_180ee0;
            case 0x180F18u: goto label_180f18;
            case 0x180F50u: goto label_180f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180E7Cu;
    // 0x180e7c: 0x0
    ctx->pc = 0x180e7cu;
    // NOP
    // 0x180e80: 0x3c030023
    ctx->pc = 0x180e80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x180e84: 0x27bdffc0
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180e88: 0x8c66fa10
    ctx->pc = 0x180e88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x180e8c: 0x3c028101
    ctx->pc = 0x180e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180e90: 0xffbf0030
    ctx->pc = 0x180e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180e94: 0x80382d
    ctx->pc = 0x180e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e98: 0x10c00011
    ctx->pc = 0x180E98u;
    {
        const bool branch_taken_0x180e98 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x180E9Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x180e98) {
            ctx->pc = 0x180EE0u;
            goto label_180ee0;
        }
    }
    ctx->pc = 0x180EA0u;
    // 0x180ea0: 0x3c040028
    ctx->pc = 0x180ea0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x180ea4: 0x3c028101
    ctx->pc = 0x180ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180ea8: 0x8c839504
    ctx->pc = 0x180ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294939908)));
    // 0x180eac: 0x1460000c
    ctx->pc = 0x180EACu;
    {
        const bool branch_taken_0x180eac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x180EB0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x180eac) {
            ctx->pc = 0x180EE0u;
            goto label_180ee0;
        }
    }
    ctx->pc = 0x180EB4u;
    // 0x180eb4: 0x3a0202d
    ctx->pc = 0x180eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180eb8: 0xafa70008
    ctx->pc = 0x180eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x180ebc: 0xc062448
    ctx->pc = 0x180EBCu;
    SET_GPR_U32(ctx, 31, 0x180EC4u);
    ctx->pc = 0x180EC0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    ctx->pc = 0x189120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189120_0x189120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EC4u; }
    }
    if (ctx->pc != 0x180EC4u) { return; }
    ctx->pc = 0x180EC4u;
    // 0x180ec4: 0x40182d
    ctx->pc = 0x180ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ec8: 0x3c028101
    ctx->pc = 0x180ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180ecc: 0x60202d
    ctx->pc = 0x180eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ed0: 0x4600003
    ctx->pc = 0x180ED0u;
    {
        const bool branch_taken_0x180ed0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x180ED4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x180ed0) {
            ctx->pc = 0x180EE0u;
            goto label_180ee0;
        }
    }
    ctx->pc = 0x180ED8u;
    // 0x180ed8: 0xc061eb4
    ctx->pc = 0x180ED8u;
    SET_GPR_U32(ctx, 31, 0x180EE0u);
    ctx->pc = 0x187AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187AD0_0x187ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EE0u; }
    }
    if (ctx->pc != 0x180EE0u) { return; }
    ctx->pc = 0x180EE0u;
label_180ee0:
    // 0x180ee0: 0xdfbf0030
    ctx->pc = 0x180ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180ee4: 0x3e00008
    ctx->pc = 0x180EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E70u: goto label_180e70;
            case 0x180EE0u: goto label_180ee0;
            case 0x180F18u: goto label_180f18;
            case 0x180F50u: goto label_180f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180EECu;
    // 0x180eec: 0x0
    ctx->pc = 0x180eecu;
    // NOP
    // 0x180ef0: 0x27bdfff0
    ctx->pc = 0x180ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180ef4: 0x3c028101
    ctx->pc = 0x180ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180ef8: 0xffbf0000
    ctx->pc = 0x180ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180efc: 0x80282d
    ctx->pc = 0x180efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f00: 0x18800005
    ctx->pc = 0x180F00u;
    {
        const bool branch_taken_0x180f00 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x180F04u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x180f00) {
            ctx->pc = 0x180F18u;
            goto label_180f18;
        }
    }
    ctx->pc = 0x180F08u;
    // 0x180f08: 0x3c020028
    ctx->pc = 0x180f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x180f0c: 0xc04512c
    ctx->pc = 0x180F0Cu;
    SET_GPR_U32(ctx, 31, 0x180F14u);
    ctx->pc = 0x180F10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294941216)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F14u; }
    }
    if (ctx->pc != 0x180F14u) { return; }
    ctx->pc = 0x180F14u;
    // 0x180f14: 0x102d
    ctx->pc = 0x180f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180f18:
    // 0x180f18: 0xdfbf0000
    ctx->pc = 0x180f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f1c: 0x3e00008
    ctx->pc = 0x180F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E70u: goto label_180e70;
            case 0x180EE0u: goto label_180ee0;
            case 0x180F18u: goto label_180f18;
            case 0x180F50u: goto label_180f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180F24u;
    // 0x180f24: 0x0
    ctx->pc = 0x180f24u;
    // NOP
    // 0x180f28: 0x27bdfff0
    ctx->pc = 0x180f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180f2c: 0x3c028101
    ctx->pc = 0x180f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180f30: 0xffbf0000
    ctx->pc = 0x180f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180f34: 0x80282d
    ctx->pc = 0x180f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f38: 0x18800005
    ctx->pc = 0x180F38u;
    {
        const bool branch_taken_0x180f38 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x180F3Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x180f38) {
            ctx->pc = 0x180F50u;
            goto label_180f50;
        }
    }
    ctx->pc = 0x180F40u;
    // 0x180f40: 0x3c020028
    ctx->pc = 0x180f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x180f44: 0xc045130
    ctx->pc = 0x180F44u;
    SET_GPR_U32(ctx, 31, 0x180F4Cu);
    ctx->pc = 0x180F48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294941216)));
    ctx->pc = 0x1144C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144C0_0x1144c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F4Cu; }
    }
    if (ctx->pc != 0x180F4Cu) { return; }
    ctx->pc = 0x180F4Cu;
    // 0x180f4c: 0x102d
    ctx->pc = 0x180f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180f50:
    // 0x180f50: 0xdfbf0000
    ctx->pc = 0x180f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f54: 0x3e00008
    ctx->pc = 0x180F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E70u: goto label_180e70;
            case 0x180EE0u: goto label_180ee0;
            case 0x180F18u: goto label_180f18;
            case 0x180F50u: goto label_180f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180F5Cu;
    // 0x180f5c: 0x0
    ctx->pc = 0x180f5cu;
    // NOP
}
