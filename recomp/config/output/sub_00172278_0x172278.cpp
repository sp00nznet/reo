#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172278
// Address: 0x172278 - 0x1722c0
void sub_00172278_0x172278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172278u;

    // 0x172278: 0x27bdfff0
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17227c: 0xffb00000
    ctx->pc = 0x17227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172280: 0xffbf0008
    ctx->pc = 0x172280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172284: 0xc05a78c
    ctx->pc = 0x172284u;
    SET_GPR_U32(ctx, 31, 0x17228Cu);
    ctx->pc = 0x172288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17228Cu; }
    }
    if (ctx->pc != 0x17228Cu) { return; }
    ctx->pc = 0x17228Cu;
    // 0x17228c: 0x3c05ff00
    ctx->pc = 0x17228cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x172290: 0x200202d
    ctx->pc = 0x172290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172294: 0x10400006
    ctx->pc = 0x172294u;
    {
        const bool branch_taken_0x172294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172298u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 323));
        if (branch_taken_0x172294) {
            ctx->pc = 0x1722B0u;
            goto label_1722b0;
        }
    }
    ctx->pc = 0x17229Cu;
    // 0x17229c: 0xdfb00000
    ctx->pc = 0x17229cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1722a0: 0x202d
    ctx->pc = 0x1722a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722a4: 0xdfbf0008
    ctx->pc = 0x1722a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1722a8: 0x805a704
    ctx->pc = 0x1722A8u;
    ctx->pc = 0x1722ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1722B0u;
label_1722b0:
    // 0x1722b0: 0xdfb00000
    ctx->pc = 0x1722b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1722b4: 0xdfbf0008
    ctx->pc = 0x1722b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1722b8: 0x805c8b0
    ctx->pc = 0x1722B8u;
    ctx->pc = 0x1722BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1722C0u;
    sub_001722C0_0x1722c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1722C0u;
}
