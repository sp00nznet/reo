#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E9DC8
// Address: 0x1e9dc8 - 0x1e9ee0
void sub_001E9DC8_0x1e9dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e9dc8u;

    // 0x1e9dc8: 0x27bdffe0
    ctx->pc = 0x1e9dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9dcc: 0xffbe0010
    ctx->pc = 0x1e9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e9dd0: 0xffbf0018
    ctx->pc = 0x1e9dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e9dd4: 0x3a0f02d
    ctx->pc = 0x1e9dd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9dd8: 0xafc40000
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e9ddc: 0xc0413bc
    ctx->pc = 0x1E9DDCu;
    SET_GPR_U32(ctx, 31, 0x1E9DE4u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DE4u; }
    }
    if (ctx->pc != 0x1E9DE4u) { return; }
    ctx->pc = 0x1E9DE4u;
    // 0x1e9de4: 0xac400000
    ctx->pc = 0x1e9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e9de8: 0x8fc40000
    ctx->pc = 0x1e9de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9dec: 0xc07a216
    ctx->pc = 0x1E9DECu;
    SET_GPR_U32(ctx, 31, 0x1E9DF4u);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF4u; }
    }
    if (ctx->pc != 0x1E9DF4u) { return; }
    ctx->pc = 0x1E9DF4u;
    // 0x1e9df4: 0xafc20004
    ctx->pc = 0x1e9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e9df8: 0x8fc20004
    ctx->pc = 0x1e9df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9dfc: 0x14400009
    ctx->pc = 0x1E9DFCu;
    {
        const bool branch_taken_0x1e9dfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9dfc) {
            ctx->pc = 0x1E9E24u;
            goto label_1e9e24;
        }
    }
    ctx->pc = 0x1E9E04u;
    // 0x1e9e04: 0xc0413bc
    ctx->pc = 0x1E9E04u;
    SET_GPR_U32(ctx, 31, 0x1E9E0Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E0Cu; }
    }
    if (ctx->pc != 0x1E9E0Cu) { return; }
    ctx->pc = 0x1E9E0Cu;
    // 0x1e9e0c: 0x40182d
    ctx->pc = 0x1e9e0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e10: 0x2402006c
    ctx->pc = 0x1e9e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e9e14: 0xac620000
    ctx->pc = 0x1e9e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9e18: 0x2402ffff
    ctx->pc = 0x1e9e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9e1c: 0x1000002a
    ctx->pc = 0x1E9E1Cu;
    {
        const bool branch_taken_0x1e9e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9e1c) {
            ctx->pc = 0x1E9EC8u;
            goto label_1e9ec8;
        }
    }
    ctx->pc = 0x1E9E24u;
label_1e9e24:
    // 0x1e9e24: 0x8fc20004
    ctx->pc = 0x1e9e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9e28: 0x94430002
    ctx->pc = 0x1e9e28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9e2c: 0x24020001
    ctx->pc = 0x1e9e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9e30: 0x1462000b
    ctx->pc = 0x1E9E30u;
    {
        const bool branch_taken_0x1e9e30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e9e30) {
            ctx->pc = 0x1E9E60u;
            goto label_1e9e60;
        }
    }
    ctx->pc = 0x1E9E38u;
    // 0x1e9e38: 0x8fc20004
    ctx->pc = 0x1e9e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9e3c: 0x84420000
    ctx->pc = 0x1e9e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9e40: 0x40202d
    ctx->pc = 0x1e9e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e44: 0xc075f18
    ctx->pc = 0x1E9E44u;
    SET_GPR_U32(ctx, 31, 0x1E9E4Cu);
    ctx->pc = 0x1D7C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7C60_0x1d7c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E4Cu; }
    }
    if (ctx->pc != 0x1E9E4Cu) { return; }
    ctx->pc = 0x1E9E4Cu;
    // 0x1e9e4c: 0x8fc30004
    ctx->pc = 0x1e9e4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9e50: 0x24020ff3
    ctx->pc = 0x1e9e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4083));
    // 0x1e9e54: 0xa4620004
    ctx->pc = 0x1e9e54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9e58: 0x10000017
    ctx->pc = 0x1E9E58u;
    {
        const bool branch_taken_0x1e9e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9e58) {
            ctx->pc = 0x1E9EB8u;
            goto label_1e9eb8;
        }
    }
    ctx->pc = 0x1E9E60u;
label_1e9e60:
    // 0x1e9e60: 0x8fc20004
    ctx->pc = 0x1e9e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9e64: 0x94430002
    ctx->pc = 0x1e9e64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9e68: 0x24020002
    ctx->pc = 0x1e9e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9e6c: 0x14620012
    ctx->pc = 0x1E9E6Cu;
    {
        const bool branch_taken_0x1e9e6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e9e6c) {
            ctx->pc = 0x1E9EB8u;
            goto label_1e9eb8;
        }
    }
    ctx->pc = 0x1E9E74u;
    // 0x1e9e74: 0xc07a61b
    ctx->pc = 0x1E9E74u;
    SET_GPR_U32(ctx, 31, 0x1E9E7Cu);
    ctx->pc = 0x1E986Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E986C_0x1e986c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E7Cu; }
    }
    if (ctx->pc != 0x1E9E7Cu) { return; }
    ctx->pc = 0x1E9E7Cu;
    // 0x1e9e7c: 0xc07a61b
    ctx->pc = 0x1E9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E84u);
    ctx->pc = 0x1E986Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E986C_0x1e986c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E84u; }
    }
    if (ctx->pc != 0x1E9E84u) { return; }
    ctx->pc = 0x1E9E84u;
    // 0x1e9e84: 0xc07a61b
    ctx->pc = 0x1E9E84u;
    SET_GPR_U32(ctx, 31, 0x1E9E8Cu);
    ctx->pc = 0x1E986Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E986C_0x1e986c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E8Cu; }
    }
    if (ctx->pc != 0x1E9E8Cu) { return; }
    ctx->pc = 0x1E9E8Cu;
    // 0x1e9e8c: 0x8fc20004
    ctx->pc = 0x1e9e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9e90: 0x84420000
    ctx->pc = 0x1e9e90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9e94: 0x40202d
    ctx->pc = 0x1e9e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e98: 0xc0761c8
    ctx->pc = 0x1E9E98u;
    SET_GPR_U32(ctx, 31, 0x1E9EA0u);
    ctx->pc = 0x1D8720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA0u; }
    }
    if (ctx->pc != 0x1E9EA0u) { return; }
    ctx->pc = 0x1E9EA0u;
    // 0x1e9ea0: 0x8fc30004
    ctx->pc = 0x1e9ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9ea4: 0x2402ffff
    ctx->pc = 0x1e9ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9ea8: 0xa4620002
    ctx->pc = 0x1e9ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9eac: 0x8fc30004
    ctx->pc = 0x1e9eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9eb0: 0x2402ffff
    ctx->pc = 0x1e9eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9eb4: 0xa4620004
    ctx->pc = 0x1e9eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_1e9eb8:
    // 0x1e9eb8: 0x8fc40004
    ctx->pc = 0x1e9eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9ebc: 0xc07a121
    ctx->pc = 0x1E9EBCu;
    SET_GPR_U32(ctx, 31, 0x1E9EC4u);
    ctx->pc = 0x1E8484u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8484_0x1e8484(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EC4u; }
    }
    if (ctx->pc != 0x1E9EC4u) { return; }
    ctx->pc = 0x1E9EC4u;
    // 0x1e9ec4: 0x102d
    ctx->pc = 0x1e9ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ec8:
    // 0x1e9ec8: 0x3c0e82d
    ctx->pc = 0x1e9ec8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ecc: 0xdfbe0010
    ctx->pc = 0x1e9eccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ed0: 0xdfbf0018
    ctx->pc = 0x1e9ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e9ed4: 0x27bd0020
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9ed8: 0x3e00008
    ctx->pc = 0x1E9ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9E24u: goto label_1e9e24;
            case 0x1E9E60u: goto label_1e9e60;
            case 0x1E9EB8u: goto label_1e9eb8;
            case 0x1E9EC8u: goto label_1e9ec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9EE0u;
}
