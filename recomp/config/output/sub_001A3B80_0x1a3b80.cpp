#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3B80
// Address: 0x1a3b80 - 0x1a3bd0
void sub_001A3B80_0x1a3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3b80u;

    // 0x1a3b80: 0x27bdfff0
    ctx->pc = 0x1a3b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3b84: 0xa0402d
    ctx->pc = 0x1a3b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b88: 0xffbf0000
    ctx->pc = 0x1a3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3b8c: 0x3c050007
    ctx->pc = 0x1a3b8cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)7 << 16));
    // 0x1a3b90: 0xc068d7c
    ctx->pc = 0x1A3B90u;
    SET_GPR_U32(ctx, 31, 0x1A3B98u);
    ctx->pc = 0x1A3B94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3B98u; }
    }
    if (ctx->pc != 0x1A3B98u) { return; }
    ctx->pc = 0x1A3B98u;
    // 0x1a3b98: 0x14400003
    ctx->pc = 0x1A3B98u;
    {
        const bool branch_taken_0x1a3b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3B9Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1a3b98) {
            ctx->pc = 0x1A3BA8u;
            goto label_1a3ba8;
        }
    }
    ctx->pc = 0x1A3BA0u;
    // 0x1a3ba0: 0x10000005
    ctx->pc = 0x1A3BA0u;
    {
        const bool branch_taken_0x1a3ba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3BA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ba0) {
            ctx->pc = 0x1A3BB8u;
            goto label_1a3bb8;
        }
    }
    ctx->pc = 0x1A3BA8u;
label_1a3ba8:
    // 0x1a3ba8: 0x681821
    ctx->pc = 0x1a3ba8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a3bac: 0x31880
    ctx->pc = 0x1a3bacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3bb0: 0x621021
    ctx->pc = 0x1a3bb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3bb4: 0x2442000c
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1a3bb8:
    // 0x1a3bb8: 0xdfbf0000
    ctx->pc = 0x1a3bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3bbc: 0x3e00008
    ctx->pc = 0x1A3BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3BC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3BA8u: goto label_1a3ba8;
            case 0x1A3BB8u: goto label_1a3bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3BC4u;
    // 0x1a3bc4: 0x0
    ctx->pc = 0x1a3bc4u;
    // NOP
    // 0x1a3bc8: 0x0
    ctx->pc = 0x1a3bc8u;
    // NOP
    // 0x1a3bcc: 0x0
    ctx->pc = 0x1a3bccu;
    // NOP
}
