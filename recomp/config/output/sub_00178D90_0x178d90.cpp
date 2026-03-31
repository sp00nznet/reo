#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178D90
// Address: 0x178d90 - 0x178e10
void sub_00178D90_0x178d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178d90u;

    // 0x178d90: 0x27bdffe0
    ctx->pc = 0x178d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178d94: 0x24050006
    ctx->pc = 0x178d94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x178d98: 0xffb00000
    ctx->pc = 0x178d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178d9c: 0x80802d
    ctx->pc = 0x178d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178da0: 0xffb10008
    ctx->pc = 0x178da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178da4: 0xffbf0010
    ctx->pc = 0x178da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178da8: 0xc05df1e
    ctx->pc = 0x178DA8u;
    SET_GPR_U32(ctx, 31, 0x178DB0u);
    ctx->pc = 0x178DACu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DB0u; }
    }
    if (ctx->pc != 0x178DB0u) { return; }
    ctx->pc = 0x178DB0u;
    // 0x178db0: 0x10510011
    ctx->pc = 0x178DB0u;
    {
        const bool branch_taken_0x178db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x178DB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178db0) {
            ctx->pc = 0x178DF8u;
            goto label_178df8;
        }
    }
    ctx->pc = 0x178DB8u;
    // 0x178db8: 0xc059f40
    ctx->pc = 0x178DB8u;
    SET_GPR_U32(ctx, 31, 0x178DC0u);
    ctx->pc = 0x178DBCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7240)));
    ctx->pc = 0x167D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D00_0x167d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DC0u; }
    }
    if (ctx->pc != 0x178DC0u) { return; }
    ctx->pc = 0x178DC0u;
    // 0x178dc0: 0x1451000d
    ctx->pc = 0x178DC0u;
    {
        const bool branch_taken_0x178dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x178DC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178dc0) {
            ctx->pc = 0x178DF8u;
            goto label_178df8;
        }
    }
    ctx->pc = 0x178DC8u;
    // 0x178dc8: 0xc05e384
    ctx->pc = 0x178DC8u;
    SET_GPR_U32(ctx, 31, 0x178DD0u);
    ctx->pc = 0x178E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178E10_0x178e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DD0u; }
    }
    if (ctx->pc != 0x178DD0u) { return; }
    ctx->pc = 0x178DD0u;
    // 0x178dd0: 0x10400009
    ctx->pc = 0x178DD0u;
    {
        const bool branch_taken_0x178dd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178DD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178dd0) {
            ctx->pc = 0x178DF8u;
            goto label_178df8;
        }
    }
    ctx->pc = 0x178DD8u;
    // 0x178dd8: 0xdfb00000
    ctx->pc = 0x178dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ddc: 0xdfb10008
    ctx->pc = 0x178ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178de0: 0x24050006
    ctx->pc = 0x178de0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x178de4: 0xdfbf0010
    ctx->pc = 0x178de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178de8: 0x24060001
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178dec: 0x805df18
    ctx->pc = 0x178DECu;
    ctx->pc = 0x178DF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177C60u;
    entry_177c60_0x177c78(rdram, ctx, runtime); return;
    ctx->pc = 0x178DF4u;
    // 0x178df4: 0x0
    ctx->pc = 0x178df4u;
    // NOP
label_178df8:
    // 0x178df8: 0xdfb00000
    ctx->pc = 0x178df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178dfc: 0xdfb10008
    ctx->pc = 0x178dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178e00: 0xdfbf0010
    ctx->pc = 0x178e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178e04: 0x3e00008
    ctx->pc = 0x178E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178DF8u: goto label_178df8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178E0Cu;
    // 0x178e0c: 0x0
    ctx->pc = 0x178e0cu;
    // NOP
}
