#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7DC0
// Address: 0x1d7dc0 - 0x1d7e90
void sub_001D7DC0_0x1d7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7dc0u;

    // 0x1d7dc0: 0x27bdffc0
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7dc4: 0xffbf0030
    ctx->pc = 0x1d7dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7dc8: 0x7fb20020
    ctx->pc = 0x1d7dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7dcc: 0x7fb10010
    ctx->pc = 0x1d7dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7dd0: 0x80902d
    ctx->pc = 0x1d7dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7dd4: 0x7fb00000
    ctx->pc = 0x1d7dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7dd8: 0xa0882d
    ctx->pc = 0x1d7dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ddc: 0xc075e38
    ctx->pc = 0x1D7DDCu;
    SET_GPR_U32(ctx, 31, 0x1D7DE4u);
    ctx->pc = 0x1D7DE0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DE4u; }
    }
    if (ctx->pc != 0x1D7DE4u) { return; }
    ctx->pc = 0x1D7DE4u;
    // 0x1d7de4: 0x10143c
    ctx->pc = 0x1d7de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7de8: 0x2143f
    ctx->pc = 0x1d7de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7dec: 0x1c400004
    ctx->pc = 0x1D7DECu;
    {
        const bool branch_taken_0x1d7dec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7dec) {
            ctx->pc = 0x1D7E00u;
            goto label_1d7e00;
        }
    }
    ctx->pc = 0x1D7DF4u;
    // 0x1d7df4: 0x1000001e
    ctx->pc = 0x1D7DF4u;
    {
        const bool branch_taken_0x1d7df4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7DF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d7df4) {
            ctx->pc = 0x1D7E70u;
            goto label_1d7e70;
        }
    }
    ctx->pc = 0x1D7DFCu;
    // 0x1d7dfc: 0x0
    ctx->pc = 0x1d7dfcu;
    // NOP
label_1d7e00:
    // 0x1d7e00: 0x28410c01
    ctx->pc = 0x1d7e00u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 3073));
    // 0x1d7e04: 0x14200002
    ctx->pc = 0x1D7E04u;
    {
        const bool branch_taken_0x1d7e04 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d7e04) {
            ctx->pc = 0x1D7E10u;
            goto label_1d7e10;
        }
    }
    ctx->pc = 0x1D7E0Cu;
    // 0x1d7e0c: 0x24100c00
    ctx->pc = 0x1d7e0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3072));
label_1d7e10:
    // 0x1d7e10: 0x3c020034
    ctx->pc = 0x1d7e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d7e14: 0x2442729c
    ctx->pc = 0x1d7e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d7e18: 0x10343c
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7e1c: 0xa4520000
    ctx->pc = 0x1d7e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d7e20: 0x220282d
    ctx->pc = 0x1d7e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e24: 0x6343f
    ctx->pc = 0x1d7e24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1d7e28: 0x24440004
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d7e2c: 0xc041eac
    ctx->pc = 0x1D7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E34u);
    ctx->pc = 0x1D7E30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E34u; }
    }
    if (ctx->pc != 0x1D7E34u) { return; }
    ctx->pc = 0x1D7E34u;
    // 0x1d7e34: 0x10143c
    ctx->pc = 0x1d7e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7e38: 0x3c050034
    ctx->pc = 0x1d7e38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7e3c: 0x2143f
    ctx->pc = 0x1d7e3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7e40: 0x3c070034
    ctx->pc = 0x1d7e40u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7e44: 0x24460026
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 38));
    // 0x1d7e48: 0x2404000f
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d7e4c: 0x24a57280
    ctx->pc = 0x1d7e4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7e50: 0x24e76280
    ctx->pc = 0x1d7e50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7e54: 0xc075e40
    ctx->pc = 0x1D7E54u;
    SET_GPR_U32(ctx, 31, 0x1D7E5Cu);
    ctx->pc = 0x1D7E58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E5Cu; }
    }
    if (ctx->pc != 0x1D7E5Cu) { return; }
    ctx->pc = 0x1D7E5Cu;
    // 0x1d7e5c: 0x3c010034
    ctx->pc = 0x1d7e5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7e60: 0xc075e3c
    ctx->pc = 0x1D7E60u;
    SET_GPR_U32(ctx, 31, 0x1D7E68u);
    ctx->pc = 0x1D7E64u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E68u; }
    }
    if (ctx->pc != 0x1D7E68u) { return; }
    ctx->pc = 0x1D7E68u;
    // 0x1d7e68: 0x200102d
    ctx->pc = 0x1d7e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e6c: 0x0
    ctx->pc = 0x1d7e6cu;
    // NOP
label_1d7e70:
    // 0x1d7e70: 0xdfbf0030
    ctx->pc = 0x1d7e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7e74: 0x7bb20020
    ctx->pc = 0x1d7e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7e78: 0x7bb10010
    ctx->pc = 0x1d7e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e7c: 0x7bb00000
    ctx->pc = 0x1d7e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e80: 0x3e00008
    ctx->pc = 0x1D7E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7E00u: goto label_1d7e00;
            case 0x1D7E10u: goto label_1d7e10;
            case 0x1D7E70u: goto label_1d7e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7E88u;
    // 0x1d7e88: 0x0
    ctx->pc = 0x1d7e88u;
    // NOP
    // 0x1d7e8c: 0x0
    ctx->pc = 0x1d7e8cu;
    // NOP
}
