#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C748
// Address: 0x12c748 - 0x12c798
void sub_0012C748_0x12c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c748u;

    // 0x12c748: 0x27bdfff0
    ctx->pc = 0x12c748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c74c: 0xffbf0000
    ctx->pc = 0x12c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c750: 0xdfbf0000
    ctx->pc = 0x12c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c754: 0x804fb3c
    ctx->pc = 0x12C754u;
    ctx->pc = 0x12C758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13ECF0u;
    entry_13ecf0_0x13ed28(rdram, ctx, runtime); return;
    ctx->pc = 0x12C75Cu;
    // 0x12c75c: 0x0
    ctx->pc = 0x12c75cu;
    // NOP
    // 0x12c760: 0x3c040024
    ctx->pc = 0x12c760u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x12c764: 0x27bdfff0
    ctx->pc = 0x12c764u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c768: 0xffbf0000
    ctx->pc = 0x12c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c76c: 0xc045a12
    ctx->pc = 0x12C76Cu;
    SET_GPR_U32(ctx, 31, 0x12C774u);
    ctx->pc = 0x12C770u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946088));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C774u; }
    }
    if (ctx->pc != 0x12C774u) { return; }
    ctx->pc = 0x12C774u;
    // 0x12c774: 0x0
    ctx->pc = 0x12c774u;
    // NOP
label_12c778:
    // 0x12c778: 0x0
    ctx->pc = 0x12c778u;
    // NOP
    // 0x12c77c: 0x0
    ctx->pc = 0x12c77cu;
    // NOP
    // 0x12c780: 0x0
    ctx->pc = 0x12c780u;
    // NOP
    // 0x12c784: 0x0
    ctx->pc = 0x12c784u;
    // NOP
    // 0x12c788: 0x0
    ctx->pc = 0x12c788u;
    // NOP
    // 0x12c78c: 0x1000fffa
    ctx->pc = 0x12C78Cu;
    {
        const bool branch_taken_0x12c78c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12c78c) {
            ctx->pc = 0x12C778u;
            goto label_12c778;
        }
    }
    ctx->pc = 0x12C794u;
    // 0x12c794: 0x0
    ctx->pc = 0x12c794u;
    // NOP
}
