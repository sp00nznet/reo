#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13eba8
// Address: 0x13eba8 - 0x13ebd8
void entry_13eba8_0x13ebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13eba8u;

    // 0x13eba8: 0x27bdfff0
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ebac: 0x282d
    ctx->pc = 0x13ebacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebb0: 0xffb00000
    ctx->pc = 0x13ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ebb4: 0xffbf0008
    ctx->pc = 0x13ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13ebb8: 0xc04faf6
    ctx->pc = 0x13EBB8u;
    SET_GPR_U32(ctx, 31, 0x13EBC0u);
    ctx->pc = 0x13EBBCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13EBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EBD8_0x13ebd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBC0u; }
    }
    if (ctx->pc != 0x13EBC0u) { return; }
    ctx->pc = 0x13EBC0u;
    // 0x13ebc0: 0xdfbf0008
    ctx->pc = 0x13ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ebc4: 0x200202d
    ctx->pc = 0x13ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebc8: 0xdfb00000
    ctx->pc = 0x13ebc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ebcc: 0x282d
    ctx->pc = 0x13ebccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebd0: 0x804fb14
    ctx->pc = 0x13EBD0u;
    ctx->pc = 0x13EBD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EC50u;
    sub_0013EC50_0x13ec50(rdram, ctx, runtime); return;
    ctx->pc = 0x13EBD8u;
}
