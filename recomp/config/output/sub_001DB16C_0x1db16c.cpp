#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DB16C
// Address: 0x1db16c - 0x1db1fc
void sub_001DB16C_0x1db16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1db16cu;

    // 0x1db16c: 0x27bdffe0
    ctx->pc = 0x1db16cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db170: 0xffbe0010
    ctx->pc = 0x1db170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1db174: 0xffbf0018
    ctx->pc = 0x1db174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db178: 0x3a0f02d
    ctx->pc = 0x1db178u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db17c: 0xafc40000
    ctx->pc = 0x1db17cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1db180: 0x8fc40000
    ctx->pc = 0x1db180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db184: 0x2405036c
    ctx->pc = 0x1db184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 876));
    // 0x1db188: 0xc076c2e
    ctx->pc = 0x1DB188u;
    SET_GPR_U32(ctx, 31, 0x1DB190u);
    ctx->pc = 0x1DB0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB0B8_0x1db0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB190u; }
    }
    if (ctx->pc != 0x1DB190u) { return; }
    ctx->pc = 0x1DB190u;
    // 0x1db190: 0x3c0e82d
    ctx->pc = 0x1db190u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db194: 0xdfbe0010
    ctx->pc = 0x1db194u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db198: 0xdfbf0018
    ctx->pc = 0x1db198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db19c: 0x27bd0020
    ctx->pc = 0x1db19cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db1a0: 0x3e00008
    ctx->pc = 0x1DB1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB1A8u;
    // 0x1db1a8: 0x27bdffe0
    ctx->pc = 0x1db1a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db1ac: 0xffbe0010
    ctx->pc = 0x1db1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1db1b0: 0xffbf0018
    ctx->pc = 0x1db1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db1b4: 0x3a0f02d
    ctx->pc = 0x1db1b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1b8: 0xafc40000
    ctx->pc = 0x1db1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1db1bc: 0x8fc20000
    ctx->pc = 0x1db1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db1c0: 0x27c30004
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4));
    // 0x1db1c4: 0x8c440520
    ctx->pc = 0x1db1c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1db1c8: 0x60282d
    ctx->pc = 0x1db1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1cc: 0x24060380
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 896));
    // 0x1db1d0: 0x382d
    ctx->pc = 0x1db1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d4: 0x24080001
    ctx->pc = 0x1db1d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1d8: 0xc07c80a
    ctx->pc = 0x1DB1D8u;
    SET_GPR_U32(ctx, 31, 0x1DB1E0u);
    ctx->pc = 0x1F2028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2028_0x1f2028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E0u; }
    }
    if (ctx->pc != 0x1DB1E0u) { return; }
    ctx->pc = 0x1DB1E0u;
    // 0x1db1e0: 0x8fc20004
    ctx->pc = 0x1db1e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1db1e4: 0x3c0e82d
    ctx->pc = 0x1db1e4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1e8: 0xdfbe0010
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db1ec: 0xdfbf0018
    ctx->pc = 0x1db1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db1f0: 0x27bd0020
    ctx->pc = 0x1db1f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db1f4: 0x3e00008
    ctx->pc = 0x1DB1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB1FCu;
}
