#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F2E64
// Address: 0x1f2e64 - 0x1f2eec
void sub_001F2E64_0x1f2e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f2e64u;

    // 0x1f2e64: 0x27bdffe0
    ctx->pc = 0x1f2e64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2e68: 0xffbe0010
    ctx->pc = 0x1f2e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f2e6c: 0xffbf0018
    ctx->pc = 0x1f2e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f2e70: 0x3a0f02d
    ctx->pc = 0x1f2e70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e74: 0xafc40000
    ctx->pc = 0x1f2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f2e78: 0x8fc20000
    ctx->pc = 0x1f2e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2e7c: 0xac400010
    ctx->pc = 0x1f2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1f2e80: 0x8fc20000
    ctx->pc = 0x1f2e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2e84: 0xac400014
    ctx->pc = 0x1f2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1f2e88: 0x8fc20000
    ctx->pc = 0x1f2e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2e8c: 0xac400018
    ctx->pc = 0x1f2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1f2e90: 0x8fc20000
    ctx->pc = 0x1f2e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2e94: 0xac40001c
    ctx->pc = 0x1f2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1f2e98: 0x8fc20000
    ctx->pc = 0x1f2e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2e9c: 0xac400020
    ctx->pc = 0x1f2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1f2ea0: 0x8fc20000
    ctx->pc = 0x1f2ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2ea4: 0xac400024
    ctx->pc = 0x1f2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1f2ea8: 0x8fc20000
    ctx->pc = 0x1f2ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2eac: 0xac400028
    ctx->pc = 0x1f2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1f2eb0: 0x8fc40000
    ctx->pc = 0x1f2eb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2eb4: 0x282d
    ctx->pc = 0x1f2eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb8: 0xc07c6c0
    ctx->pc = 0x1F2EB8u;
    SET_GPR_U32(ctx, 31, 0x1F2EC0u);
    ctx->pc = 0x1F1B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B00_0x1f1b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EC0u; }
    }
    if (ctx->pc != 0x1F2EC0u) { return; }
    ctx->pc = 0x1F2EC0u;
    // 0x1f2ec0: 0x8fc40000
    ctx->pc = 0x1f2ec0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2ec4: 0x3405ffff
    ctx->pc = 0x1f2ec4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1f2ec8: 0xc07c690
    ctx->pc = 0x1F2EC8u;
    SET_GPR_U32(ctx, 31, 0x1F2ED0u);
    ctx->pc = 0x1F1A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A40_0x1f1a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2ED0u; }
    }
    if (ctx->pc != 0x1F2ED0u) { return; }
    ctx->pc = 0x1F2ED0u;
    // 0x1f2ed0: 0x102d
    ctx->pc = 0x1f2ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ed4: 0x3c0e82d
    ctx->pc = 0x1f2ed4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ed8: 0xdfbe0010
    ctx->pc = 0x1f2ed8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2edc: 0xdfbf0018
    ctx->pc = 0x1f2edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ee0: 0x27bd0020
    ctx->pc = 0x1f2ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f2ee4: 0x3e00008
    ctx->pc = 0x1F2EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2EECu;
}
