#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BDC0
// Address: 0x15bdc0 - 0x15be10
void sub_0015BDC0_0x15bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15bdc0u;

    // 0x15bdc0: 0x27bdfff0
    ctx->pc = 0x15bdc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15bdc4: 0x24020001
    ctx->pc = 0x15bdc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bdc8: 0xffbf0000
    ctx->pc = 0x15bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bdcc: 0x1082000c
    ctx->pc = 0x15BDCCu;
    {
        const bool branch_taken_0x15bdcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15BDD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15bdcc) {
            ctx->pc = 0x15BE00u;
            goto label_15be00;
        }
    }
    ctx->pc = 0x15BDD4u;
    // 0x15bdd4: 0x1080000a
    ctx->pc = 0x15BDD4u;
    {
        const bool branch_taken_0x15bdd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BDD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15bdd4) {
            ctx->pc = 0x15BE00u;
            goto label_15be00;
        }
    }
    ctx->pc = 0x15BDDCu;
    // 0x15bddc: 0x24020002
    ctx->pc = 0x15bddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bde0: 0x10820007
    ctx->pc = 0x15BDE0u;
    {
        const bool branch_taken_0x15bde0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15BDE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15bde0) {
            ctx->pc = 0x15BE00u;
            goto label_15be00;
        }
    }
    ctx->pc = 0x15BDE8u;
    // 0x15bde8: 0x10820005
    ctx->pc = 0x15BDE8u;
    {
        const bool branch_taken_0x15bde8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15BDECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15bde8) {
            ctx->pc = 0x15BE00u;
            goto label_15be00;
        }
    }
    ctx->pc = 0x15BDF0u;
    // 0x15bdf0: 0x3c040024
    ctx->pc = 0x15bdf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15bdf4: 0xc058dd4
    ctx->pc = 0x15BDF4u;
    SET_GPR_U32(ctx, 31, 0x15BDFCu);
    ctx->pc = 0x15BDF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDFCu; }
    }
    if (ctx->pc != 0x15BDFCu) { return; }
    ctx->pc = 0x15BDFCu;
    // 0x15bdfc: 0x24030003
    ctx->pc = 0x15bdfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_15be00:
    // 0x15be00: 0xdfbf0000
    ctx->pc = 0x15be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15be04: 0x60102d
    ctx->pc = 0x15be04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be08: 0x3e00008
    ctx->pc = 0x15BE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BE00u: goto label_15be00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BE10u;
}
