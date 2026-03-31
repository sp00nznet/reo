#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13da88
// Address: 0x13da88 - 0x13db48
void entry_13da88_0x13db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13da88u;

    // 0x13da88: 0x27bdfff0
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13da8c: 0x80502d
    ctx->pc = 0x13da8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da90: 0xffbf0000
    ctx->pc = 0x13da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13da94: 0x5410008
    ctx->pc = 0x13DA94u;
    {
        const bool branch_taken_0x13da94 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x13DA98u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13da94) {
            ctx->pc = 0x13DAB8u;
            goto label_13dab8;
        }
    }
    ctx->pc = 0x13DA9Cu;
    // 0x13da9c: 0x3c040024
    ctx->pc = 0x13da9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13daa0: 0xdfbf0000
    ctx->pc = 0x13daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13daa4: 0x140282d
    ctx->pc = 0x13daa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13daa8: 0x2484d4e0
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956256));
    // 0x13daac: 0x8045a12
    ctx->pc = 0x13DAACu;
    ctx->pc = 0x13DAB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13DAB4u;
    // 0x13dab4: 0x0
    ctx->pc = 0x13dab4u;
    // NOP
label_13dab8:
    // 0x13dab8: 0x5610007
    ctx->pc = 0x13DAB8u;
    {
        const bool branch_taken_0x13dab8 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x13DABCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x13dab8) {
            ctx->pc = 0x13DAD8u;
            goto label_13dad8;
        }
    }
    ctx->pc = 0x13DAC0u;
    // 0x13dac0: 0x3c040024
    ctx->pc = 0x13dac0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13dac4: 0xdfbf0000
    ctx->pc = 0x13dac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dac8: 0x2484d510
    ctx->pc = 0x13dac8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956304));
    // 0x13dacc: 0x8045a12
    ctx->pc = 0x13DACCu;
    ctx->pc = 0x13DAD0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13DAD4u;
    // 0x13dad4: 0x0
    ctx->pc = 0x13dad4u;
    // NOP
label_13dad8:
    // 0x13dad8: 0x4b4821
    ctx->pc = 0x13dad8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x13dadc: 0x91980
    ctx->pc = 0x13dadcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 6));
    // 0x13dae0: 0x29220021
    ctx->pc = 0x13dae0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 33));
    // 0x13dae4: 0x14400008
    ctx->pc = 0x13DAE4u;
    {
        const bool branch_taken_0x13dae4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13DAE8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        if (branch_taken_0x13dae4) {
            ctx->pc = 0x13DB08u;
            goto label_13db08;
        }
    }
    ctx->pc = 0x13DAECu;
    // 0x13daec: 0x3c040024
    ctx->pc = 0x13daecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13daf0: 0xdfbf0000
    ctx->pc = 0x13daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13daf4: 0x24050020
    ctx->pc = 0x13daf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x13daf8: 0x2484d540
    ctx->pc = 0x13daf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956352));
    // 0x13dafc: 0x8045a12
    ctx->pc = 0x13DAFCu;
    ctx->pc = 0x13DB00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13DB04u;
    // 0x13db04: 0x0
    ctx->pc = 0x13db04u;
    // NOP
label_13db08:
    // 0x13db08: 0xdfbf0000
    ctx->pc = 0x13db08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db0c: 0x33a00
    ctx->pc = 0x13db0cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 8));
    // 0x13db10: 0x3c080022
    ctx->pc = 0x13db10u;
    SET_GPR_U32(ctx, 8, ((uint32_t)34 << 16));
    // 0x13db14: 0x3c040022
    ctx->pc = 0x13db14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13db18: 0x3c030022
    ctx->pc = 0x13db18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13db1c: 0x3c050022
    ctx->pc = 0x13db1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)34 << 16));
    // 0x13db20: 0x3c060022
    ctx->pc = 0x13db20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)34 << 16));
    // 0x13db24: 0x24020001
    ctx->pc = 0x13db24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13db28: 0xac6a1460
    ctx->pc = 0x13db28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5216), GPR_U32(ctx, 10));
    // 0x13db2c: 0xac8b1464
    ctx->pc = 0x13db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5220), GPR_U32(ctx, 11));
    // 0x13db30: 0xaca7143c
    ctx->pc = 0x13db30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5180), GPR_U32(ctx, 7));
    // 0x13db34: 0xacc21440
    ctx->pc = 0x13db34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5184), GPR_U32(ctx, 2));
    // 0x13db38: 0xad091438
    ctx->pc = 0x13db38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5176), GPR_U32(ctx, 9));
    // 0x13db3c: 0x3e00008
    ctx->pc = 0x13DB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DAB8u: goto label_13dab8;
            case 0x13DAD8u: goto label_13dad8;
            case 0x13DB08u: goto label_13db08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DB44u;
    // 0x13db44: 0x0
    ctx->pc = 0x13db44u;
    // NOP
}
