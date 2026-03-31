#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7E90
// Address: 0x1d7e90 - 0x1d7f60
void sub_001D7E90_0x1d7e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7e90u;

    // 0x1d7e90: 0x27bdffc0
    ctx->pc = 0x1d7e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7e94: 0xffbf0030
    ctx->pc = 0x1d7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7e98: 0x7fb20020
    ctx->pc = 0x1d7e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7e9c: 0x7fb10010
    ctx->pc = 0x1d7e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7ea0: 0x80902d
    ctx->pc = 0x1d7ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ea4: 0x7fb00000
    ctx->pc = 0x1d7ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7ea8: 0xa0882d
    ctx->pc = 0x1d7ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7eac: 0xc075e38
    ctx->pc = 0x1D7EACu;
    SET_GPR_U32(ctx, 31, 0x1D7EB4u);
    ctx->pc = 0x1D7EB0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EB4u; }
    }
    if (ctx->pc != 0x1D7EB4u) { return; }
    ctx->pc = 0x1D7EB4u;
    // 0x1d7eb4: 0x10143c
    ctx->pc = 0x1d7eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7eb8: 0x2143f
    ctx->pc = 0x1d7eb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7ebc: 0x1c400004
    ctx->pc = 0x1D7EBCu;
    {
        const bool branch_taken_0x1d7ebc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7ebc) {
            ctx->pc = 0x1D7ED0u;
            goto label_1d7ed0;
        }
    }
    ctx->pc = 0x1D7EC4u;
    // 0x1d7ec4: 0x1000001e
    ctx->pc = 0x1D7EC4u;
    {
        const bool branch_taken_0x1d7ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7EC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ec4) {
            ctx->pc = 0x1D7F40u;
            goto label_1d7f40;
        }
    }
    ctx->pc = 0x1D7ECCu;
    // 0x1d7ecc: 0x0
    ctx->pc = 0x1d7eccu;
    // NOP
label_1d7ed0:
    // 0x1d7ed0: 0x28410c01
    ctx->pc = 0x1d7ed0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 3073));
    // 0x1d7ed4: 0x14200002
    ctx->pc = 0x1D7ED4u;
    {
        const bool branch_taken_0x1d7ed4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d7ed4) {
            ctx->pc = 0x1D7EE0u;
            goto label_1d7ee0;
        }
    }
    ctx->pc = 0x1D7EDCu;
    // 0x1d7edc: 0x24100c00
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3072));
label_1d7ee0:
    // 0x1d7ee0: 0x3c020034
    ctx->pc = 0x1d7ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d7ee4: 0x2442729c
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d7ee8: 0x10343c
    ctx->pc = 0x1d7ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7eec: 0xa4520000
    ctx->pc = 0x1d7eecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d7ef0: 0x220282d
    ctx->pc = 0x1d7ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ef4: 0x6343f
    ctx->pc = 0x1d7ef4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1d7ef8: 0x24440004
    ctx->pc = 0x1d7ef8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d7efc: 0xc041eac
    ctx->pc = 0x1D7EFCu;
    SET_GPR_U32(ctx, 31, 0x1D7F04u);
    ctx->pc = 0x1D7F00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F04u; }
    }
    if (ctx->pc != 0x1D7F04u) { return; }
    ctx->pc = 0x1D7F04u;
    // 0x1d7f04: 0x10143c
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7f08: 0x3c050034
    ctx->pc = 0x1d7f08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7f0c: 0x2143f
    ctx->pc = 0x1d7f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7f10: 0x3c070034
    ctx->pc = 0x1d7f10u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7f14: 0x24460026
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 38));
    // 0x1d7f18: 0x24040010
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d7f1c: 0x24a57280
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7f20: 0x24e76280
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7f24: 0xc075e40
    ctx->pc = 0x1D7F24u;
    SET_GPR_U32(ctx, 31, 0x1D7F2Cu);
    ctx->pc = 0x1D7F28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F2Cu; }
    }
    if (ctx->pc != 0x1D7F2Cu) { return; }
    ctx->pc = 0x1D7F2Cu;
    // 0x1d7f2c: 0x3c010034
    ctx->pc = 0x1d7f2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7f30: 0xc075e3c
    ctx->pc = 0x1D7F30u;
    SET_GPR_U32(ctx, 31, 0x1D7F38u);
    ctx->pc = 0x1D7F34u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F38u; }
    }
    if (ctx->pc != 0x1D7F38u) { return; }
    ctx->pc = 0x1D7F38u;
    // 0x1d7f38: 0x200102d
    ctx->pc = 0x1d7f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f3c: 0x0
    ctx->pc = 0x1d7f3cu;
    // NOP
label_1d7f40:
    // 0x1d7f40: 0xdfbf0030
    ctx->pc = 0x1d7f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7f44: 0x7bb20020
    ctx->pc = 0x1d7f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7f48: 0x7bb10010
    ctx->pc = 0x1d7f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f4c: 0x7bb00000
    ctx->pc = 0x1d7f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f50: 0x3e00008
    ctx->pc = 0x1D7F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7ED0u: goto label_1d7ed0;
            case 0x1D7EE0u: goto label_1d7ee0;
            case 0x1D7F40u: goto label_1d7f40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7F58u;
    // 0x1d7f58: 0x0
    ctx->pc = 0x1d7f58u;
    // NOP
    // 0x1d7f5c: 0x0
    ctx->pc = 0x1d7f5cu;
    // NOP
}
