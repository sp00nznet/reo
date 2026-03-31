#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167D70
// Address: 0x167d70 - 0x167dd0
void sub_00167D70_0x167d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167d70u;

    // 0x167d70: 0x27bdfff0
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167d74: 0xffb00000
    ctx->pc = 0x167d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167d78: 0xffbf0008
    ctx->pc = 0x167d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x167d7c: 0xc05a78c
    ctx->pc = 0x167D7Cu;
    SET_GPR_U32(ctx, 31, 0x167D84u);
    ctx->pc = 0x167D80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D84u; }
    }
    if (ctx->pc != 0x167D84u) { return; }
    ctx->pc = 0x167D84u;
    // 0x167d84: 0x3c05ff00
    ctx->pc = 0x167d84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x167d88: 0x200202d
    ctx->pc = 0x167d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d8c: 0x24060001
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167d90: 0x10400007
    ctx->pc = 0x167D90u;
    {
        const bool branch_taken_0x167d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167D94u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 353));
        if (branch_taken_0x167d90) {
            ctx->pc = 0x167DB0u;
            goto label_167db0;
        }
    }
    ctx->pc = 0x167D98u;
    // 0x167d98: 0xdfb00000
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167d9c: 0x202d
    ctx->pc = 0x167d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167da0: 0xdfbf0008
    ctx->pc = 0x167da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167da4: 0x805a704
    ctx->pc = 0x167DA4u;
    ctx->pc = 0x167DA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x167DACu;
    // 0x167dac: 0x0
    ctx->pc = 0x167dacu;
    // NOP
label_167db0:
    // 0x167db0: 0xc05d518
    ctx->pc = 0x167DB0u;
    SET_GPR_U32(ctx, 31, 0x167DB8u);
    ctx->pc = 0x167DB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DB8u; }
    }
    if (ctx->pc != 0x167DB8u) { return; }
    ctx->pc = 0x167DB8u;
    // 0x167db8: 0x102d
    ctx->pc = 0x167db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167dbc: 0xdfb00000
    ctx->pc = 0x167dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167dc0: 0xdfbf0008
    ctx->pc = 0x167dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167dc4: 0x3e00008
    ctx->pc = 0x167DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167DC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167DB0u: goto label_167db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167DCCu;
    // 0x167dcc: 0x0
    ctx->pc = 0x167dccu;
    // NOP
}
