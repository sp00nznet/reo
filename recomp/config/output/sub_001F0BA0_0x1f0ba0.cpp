#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F0BA0
// Address: 0x1f0ba0 - 0x1f0c0c
void sub_001F0BA0_0x1f0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f0ba0u;

    // 0x1f0ba0: 0x27bdffe0
    ctx->pc = 0x1f0ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0ba4: 0xffbe0010
    ctx->pc = 0x1f0ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f0ba8: 0xffbf0018
    ctx->pc = 0x1f0ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f0bac: 0x3a0f02d
    ctx->pc = 0x1f0bacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0bb0: 0xafc40000
    ctx->pc = 0x1f0bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f0bb4: 0x27c20004
    ctx->pc = 0x1f0bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
    // 0x1f0bb8: 0x40202d
    ctx->pc = 0x1f0bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0bbc: 0x8fc50000
    ctx->pc = 0x1f0bbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f0bc0: 0x24060002
    ctx->pc = 0x1f0bc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0bc4: 0xc041eac
    ctx->pc = 0x1F0BC4u;
    SET_GPR_U32(ctx, 31, 0x1F0BCCu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0BCCu; }
    }
    if (ctx->pc != 0x1F0BCCu) { return; }
    ctx->pc = 0x1F0BCCu;
    // 0x1f0bcc: 0x87c20004
    ctx->pc = 0x1f0bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f0bd0: 0xafc2000c
    ctx->pc = 0x1f0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f0bd4: 0x8fc2000c
    ctx->pc = 0x1f0bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0bd8: 0x21040
    ctx->pc = 0x1f0bd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0bdc: 0x8fc3000c
    ctx->pc = 0x1f0bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0be0: 0x431021
    ctx->pc = 0x1f0be0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0be4: 0x21040
    ctx->pc = 0x1f0be4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0be8: 0x24420002
    ctx->pc = 0x1f0be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f0bec: 0xafc2000c
    ctx->pc = 0x1f0becu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f0bf0: 0x8fc2000c
    ctx->pc = 0x1f0bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0bf4: 0x3c0e82d
    ctx->pc = 0x1f0bf4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0bf8: 0xdfbe0010
    ctx->pc = 0x1f0bf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0bfc: 0xdfbf0018
    ctx->pc = 0x1f0bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0c00: 0x27bd0020
    ctx->pc = 0x1f0c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f0c04: 0x3e00008
    ctx->pc = 0x1F0C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0C0Cu;
}
