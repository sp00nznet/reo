#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178E58
// Address: 0x178e58 - 0x178ed8
void sub_00178E58_0x178e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178e58u;

    // 0x178e58: 0x27bdffe0
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178e5c: 0x24050006
    ctx->pc = 0x178e5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x178e60: 0xffb00000
    ctx->pc = 0x178e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178e64: 0x80802d
    ctx->pc = 0x178e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e68: 0xffb10008
    ctx->pc = 0x178e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178e6c: 0xffbf0010
    ctx->pc = 0x178e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178e70: 0xc05df12
    ctx->pc = 0x178E70u;
    SET_GPR_U32(ctx, 31, 0x178E78u);
    ctx->pc = 0x178E74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E78u; }
    }
    if (ctx->pc != 0x178E78u) { return; }
    ctx->pc = 0x178E78u;
    // 0x178e78: 0x10510011
    ctx->pc = 0x178E78u;
    {
        const bool branch_taken_0x178e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x178E7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178e78) {
            ctx->pc = 0x178EC0u;
            goto label_178ec0;
        }
    }
    ctx->pc = 0x178E80u;
    // 0x178e80: 0xc059f30
    ctx->pc = 0x178E80u;
    SET_GPR_U32(ctx, 31, 0x178E88u);
    ctx->pc = 0x178E84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E88u; }
    }
    if (ctx->pc != 0x178E88u) { return; }
    ctx->pc = 0x178E88u;
    // 0x178e88: 0x1451000d
    ctx->pc = 0x178E88u;
    {
        const bool branch_taken_0x178e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x178E8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178e88) {
            ctx->pc = 0x178EC0u;
            goto label_178ec0;
        }
    }
    ctx->pc = 0x178E90u;
    // 0x178e90: 0xc05e3b6
    ctx->pc = 0x178E90u;
    SET_GPR_U32(ctx, 31, 0x178E98u);
    ctx->pc = 0x178ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178ED8_0x178ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E98u; }
    }
    if (ctx->pc != 0x178E98u) { return; }
    ctx->pc = 0x178E98u;
    // 0x178e98: 0x10400009
    ctx->pc = 0x178E98u;
    {
        const bool branch_taken_0x178e98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178E9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178e98) {
            ctx->pc = 0x178EC0u;
            goto label_178ec0;
        }
    }
    ctx->pc = 0x178EA0u;
    // 0x178ea0: 0xdfb00000
    ctx->pc = 0x178ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ea4: 0xdfb10008
    ctx->pc = 0x178ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ea8: 0x24050006
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x178eac: 0xdfbf0010
    ctx->pc = 0x178eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178eb0: 0x24060001
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178eb4: 0x805df0c
    ctx->pc = 0x178EB4u;
    ctx->pc = 0x178EB8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177C30u;
    entry_177c30_0x177c48(rdram, ctx, runtime); return;
    ctx->pc = 0x178EBCu;
    // 0x178ebc: 0x0
    ctx->pc = 0x178ebcu;
    // NOP
label_178ec0:
    // 0x178ec0: 0xdfb00000
    ctx->pc = 0x178ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ec4: 0xdfb10008
    ctx->pc = 0x178ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ec8: 0xdfbf0010
    ctx->pc = 0x178ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ecc: 0x3e00008
    ctx->pc = 0x178ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178ED0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178EC0u: goto label_178ec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178ED4u;
    // 0x178ed4: 0x0
    ctx->pc = 0x178ed4u;
    // NOP
}
