#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015EAF0
// Address: 0x15eaf0 - 0x15eb40
void sub_0015EAF0_0x15eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15eaf0u;

    // 0x15eaf0: 0x27bdfff0
    ctx->pc = 0x15eaf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15eaf4: 0xffb00000
    ctx->pc = 0x15eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15eaf8: 0xffbf0008
    ctx->pc = 0x15eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15eafc: 0xc05799e
    ctx->pc = 0x15EAFCu;
    SET_GPR_U32(ctx, 31, 0x15EB04u);
    ctx->pc = 0x15EB00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB04u; }
    }
    if (ctx->pc != 0x15EB04u) { return; }
    ctx->pc = 0x15EB04u;
    // 0x15eb04: 0xac500064
    ctx->pc = 0x15eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    // 0x15eb08: 0x200102d
    ctx->pc = 0x15eb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb0c: 0xdfbf0008
    ctx->pc = 0x15eb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15eb10: 0xdfb00000
    ctx->pc = 0x15eb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eb14: 0x3e00008
    ctx->pc = 0x15EB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EB18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EB1Cu;
    // 0x15eb1c: 0x0
    ctx->pc = 0x15eb1cu;
    // NOP
    // 0x15eb20: 0x27bdfff0
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15eb24: 0xffbf0000
    ctx->pc = 0x15eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15eb28: 0xc05799e
    ctx->pc = 0x15EB28u;
    SET_GPR_U32(ctx, 31, 0x15EB30u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB30u; }
    }
    if (ctx->pc != 0x15EB30u) { return; }
    ctx->pc = 0x15EB30u;
    // 0x15eb30: 0x8c420064
    ctx->pc = 0x15eb30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x15eb34: 0xdfbf0000
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eb38: 0x3e00008
    ctx->pc = 0x15EB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EB3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EB40u;
}
