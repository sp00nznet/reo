#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DD50
// Address: 0x15dd50 - 0x15ddb8
void sub_0015DD50_0x15dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15dd50u;

    // 0x15dd50: 0x27bdfff0
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15dd54: 0x24020002
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15dd58: 0xffbf0000
    ctx->pc = 0x15dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15dd5c: 0x2c850003
    ctx->pc = 0x15dd5cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x15dd60: 0x10820011
    ctx->pc = 0x15DD60u;
    {
        const bool branch_taken_0x15dd60 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15DD64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15dd60) {
            ctx->pc = 0x15DDA8u;
            goto label_15dda8;
        }
    }
    ctx->pc = 0x15DD68u;
    // 0x15dd68: 0x50a00005
    ctx->pc = 0x15DD68u;
    {
        const bool branch_taken_0x15dd68 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x15dd68) {
            ctx->pc = 0x15DD6Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15DD80u;
            goto label_15dd80;
        }
    }
    ctx->pc = 0x15DD70u;
    // 0x15dd70: 0x24020001
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dd74: 0x10000006
    ctx->pc = 0x15DD74u;
    {
        const bool branch_taken_0x15dd74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DD78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15dd74) {
            ctx->pc = 0x15DD90u;
            goto label_15dd90;
        }
    }
    ctx->pc = 0x15DD7Cu;
    // 0x15dd7c: 0x0
    ctx->pc = 0x15dd7cu;
    // NOP
label_15dd80:
    // 0x15dd80: 0x10820009
    ctx->pc = 0x15DD80u;
    {
        const bool branch_taken_0x15dd80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15DD84u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15dd80) {
            ctx->pc = 0x15DDA8u;
            goto label_15dda8;
        }
    }
    ctx->pc = 0x15DD88u;
    // 0x15dd88: 0x24020004
    ctx->pc = 0x15dd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x15dd8c: 0x24030004
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_15dd90:
    // 0x15dd90: 0x10820006
    ctx->pc = 0x15DD90u;
    {
        const bool branch_taken_0x15dd90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15DD94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15dd90) {
            ctx->pc = 0x15DDACu;
            goto label_15ddac;
        }
    }
    ctx->pc = 0x15DD98u;
    // 0x15dd98: 0x3c040024
    ctx->pc = 0x15dd98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15dd9c: 0xc058dd4
    ctx->pc = 0x15DD9Cu;
    SET_GPR_U32(ctx, 31, 0x15DDA4u);
    ctx->pc = 0x15DDA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962336));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDA4u; }
    }
    if (ctx->pc != 0x15DDA4u) { return; }
    ctx->pc = 0x15DDA4u;
    // 0x15dda4: 0x24030001
    ctx->pc = 0x15dda4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_15dda8:
    // 0x15dda8: 0xdfbf0000
    ctx->pc = 0x15dda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ddac:
    // 0x15ddac: 0x60102d
    ctx->pc = 0x15ddacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddb0: 0x3e00008
    ctx->pc = 0x15DDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DDB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DD80u: goto label_15dd80;
            case 0x15DD90u: goto label_15dd90;
            case 0x15DDA8u: goto label_15dda8;
            case 0x15DDACu: goto label_15ddac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DDB8u;
}
