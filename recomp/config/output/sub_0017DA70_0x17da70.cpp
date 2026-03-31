#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017DA70
// Address: 0x17da70 - 0x17daf0
void sub_0017DA70_0x17da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17da70u;

    // 0x17da70: 0x27bdffc0
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17da74: 0x24840028
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    // 0x17da78: 0xffb00020
    ctx->pc = 0x17da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17da7c: 0xe0802d
    ctx->pc = 0x17da7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da80: 0xffb10028
    ctx->pc = 0x17da80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17da84: 0x100882d
    ctx->pc = 0x17da84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da88: 0xffbf0030
    ctx->pc = 0x17da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17da8c: 0x24030001
    ctx->pc = 0x17da8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da90: 0x8c820000
    ctx->pc = 0x17da90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17da94: 0x54430005
    ctx->pc = 0x17DA94u;
    {
        const bool branch_taken_0x17da94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x17da94) {
            ctx->pc = 0x17DA98u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x17DAACu;
            goto label_17daac;
        }
    }
    ctx->pc = 0x17DA9Cu;
    // 0x17da9c: 0x8c830004
    ctx->pc = 0x17da9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17daa0: 0x54600005
    ctx->pc = 0x17DAA0u;
    {
        const bool branch_taken_0x17daa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17daa0) {
            ctx->pc = 0x17DAA4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x17DAB8u;
            goto label_17dab8;
        }
    }
    ctx->pc = 0x17DAA8u;
    // 0x17daa8: 0xae000000
    ctx->pc = 0x17daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17daac:
    // 0x17daac: 0x1000000b
    ctx->pc = 0x17DAACu;
    {
        const bool branch_taken_0x17daac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DAB0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x17daac) {
            ctx->pc = 0x17DADCu;
            goto label_17dadc;
        }
    }
    ctx->pc = 0x17DAB4u;
    // 0x17dab4: 0x0
    ctx->pc = 0x17dab4u;
    // NOP
label_17dab8:
    // 0x17dab8: 0x3a0202d
    ctx->pc = 0x17dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dabc: 0x27a70010
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dac0: 0xafa30000
    ctx->pc = 0x17dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17dac4: 0xc050288
    ctx->pc = 0x17DAC4u;
    SET_GPR_U32(ctx, 31, 0x17DACCu);
    ctx->pc = 0x17DAC8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DACCu; }
    }
    if (ctx->pc != 0x17DACCu) { return; }
    ctx->pc = 0x17DACCu;
    // 0x17dacc: 0x8fa30010
    ctx->pc = 0x17daccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dad0: 0x8fa20014
    ctx->pc = 0x17dad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17dad4: 0xae030000
    ctx->pc = 0x17dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17dad8: 0xae220000
    ctx->pc = 0x17dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_17dadc:
    // 0x17dadc: 0xdfb00020
    ctx->pc = 0x17dadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dae0: 0xdfb10028
    ctx->pc = 0x17dae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dae4: 0xdfbf0030
    ctx->pc = 0x17dae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dae8: 0x3e00008
    ctx->pc = 0x17DAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DAACu: goto label_17daac;
            case 0x17DAB8u: goto label_17dab8;
            case 0x17DADCu: goto label_17dadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DAF0u;
}
