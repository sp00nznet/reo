#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129D78
// Address: 0x129d78 - 0x129e18
void sub_00129D78_0x129d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129d78u;

    // 0x129d78: 0x27bdfff0
    ctx->pc = 0x129d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129d7c: 0x41080
    ctx->pc = 0x129d7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x129d80: 0x2c840100
    ctx->pc = 0x129d80u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 256));
    // 0x129d84: 0x14800004
    ctx->pc = 0x129D84u;
    {
        const bool branch_taken_0x129d84 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x129D88u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x129d84) {
            ctx->pc = 0x129D98u;
            goto label_129d98;
        }
    }
    ctx->pc = 0x129D8Cu;
    // 0x129d8c: 0x3c040024
    ctx->pc = 0x129d8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129d90: 0x10000011
    ctx->pc = 0x129D90u;
    {
        const bool branch_taken_0x129d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129D94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943288));
        if (branch_taken_0x129d90) {
            ctx->pc = 0x129DD8u;
            goto label_129dd8;
        }
    }
    ctx->pc = 0x129D98u;
label_129d98:
    // 0x129d98: 0x3c040021
    ctx->pc = 0x129d98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x129d9c: 0x822021
    ctx->pc = 0x129d9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x129da0: 0x8c84cd00
    ctx->pc = 0x129da0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294954240)));
    // 0x129da4: 0x14800004
    ctx->pc = 0x129DA4u;
    {
        const bool branch_taken_0x129da4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x129da4) {
            ctx->pc = 0x129DB8u;
            goto label_129db8;
        }
    }
    ctx->pc = 0x129DACu;
    // 0x129dac: 0x3c040024
    ctx->pc = 0x129dacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129db0: 0x10000009
    ctx->pc = 0x129DB0u;
    {
        const bool branch_taken_0x129db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129DB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943288));
        if (branch_taken_0x129db0) {
            ctx->pc = 0x129DD8u;
            goto label_129dd8;
        }
    }
    ctx->pc = 0x129DB8u;
label_129db8:
    // 0x129db8: 0x4a20006
    ctx->pc = 0x129DB8u;
    {
        const bool branch_taken_0x129db8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x129db8) {
            ctx->pc = 0x129DBCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x129DD4u;
            goto label_129dd4;
        }
    }
    ctx->pc = 0x129DC0u;
    // 0x129dc0: 0x8c820008
    ctx->pc = 0x129dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x129dc4: 0xa2102a
    ctx->pc = 0x129dc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x129dc8: 0x14400006
    ctx->pc = 0x129DC8u;
    {
        const bool branch_taken_0x129dc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129DCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129dc8) {
            ctx->pc = 0x129DE4u;
            goto label_129de4;
        }
    }
    ctx->pc = 0x129DD0u;
    // 0x129dd0: 0x3c040024
    ctx->pc = 0x129dd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_129dd4:
    // 0x129dd4: 0x2484a260
    ctx->pc = 0x129dd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943328));
label_129dd8:
    // 0x129dd8: 0xc04a034
    ctx->pc = 0x129DD8u;
    SET_GPR_U32(ctx, 31, 0x129DE0u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129DE0u; }
    }
    if (ctx->pc != 0x129DE0u) { return; }
    ctx->pc = 0x129DE0u;
    // 0x129de0: 0x2402fffd
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_129de4:
    // 0x129de4: 0xdfbf0000
    ctx->pc = 0x129de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129de8: 0x3e00008
    ctx->pc = 0x129DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129DECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129D98u: goto label_129d98;
            case 0x129DB8u: goto label_129db8;
            case 0x129DD4u: goto label_129dd4;
            case 0x129DD8u: goto label_129dd8;
            case 0x129DE4u: goto label_129de4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129DF0u;
    // 0x129df0: 0x27bdffe0
    ctx->pc = 0x129df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129df4: 0xe0102d
    ctx->pc = 0x129df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129df8: 0x100482d
    ctx->pc = 0x129df8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129dfc: 0x40402d
    ctx->pc = 0x129dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e00: 0xffbf0010
    ctx->pc = 0x129e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129e04: 0xc04a786
    ctx->pc = 0x129E04u;
    SET_GPR_U32(ctx, 31, 0x129E0Cu);
    ctx->pc = 0x129E08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E18_0x129e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E0Cu; }
    }
    if (ctx->pc != 0x129E0Cu) { return; }
    ctx->pc = 0x129E0Cu;
    // 0x129e0c: 0xdfbf0010
    ctx->pc = 0x129e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129e10: 0x3e00008
    ctx->pc = 0x129E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129D98u: goto label_129d98;
            case 0x129DB8u: goto label_129db8;
            case 0x129DD4u: goto label_129dd4;
            case 0x129DD8u: goto label_129dd8;
            case 0x129DE4u: goto label_129de4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129E18u;
}
