#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BC88
// Address: 0x15bc88 - 0x15bcd8
void sub_0015BC88_0x15bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15bc88u;

    // 0x15bc88: 0x8c8a0008
    ctx->pc = 0x15bc88u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15bc8c: 0x8c8b000c
    ctx->pc = 0x15bc8cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15bc90: 0xa1fc2
    ctx->pc = 0x15bc90u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), 31));
    // 0x15bc94: 0x1431821
    ctx->pc = 0x15bc94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x15bc98: 0xb27c2
    ctx->pc = 0x15bc98u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 31));
    // 0x15bc9c: 0x31843
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x15bca0: 0x1642021
    ctx->pc = 0x15bca0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x15bca4: 0x2462001f
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 31));
    // 0x15bca8: 0x2463003e
    ctx->pc = 0x15bca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 62));
    // 0x15bcac: 0x28490000
    ctx->pc = 0x15bcacu;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 2), 0));
    // 0x15bcb0: 0x42043
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x15bcb4: 0x69100b
    ctx->pc = 0x15bcb4u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x15bcb8: 0x21143
    ctx->pc = 0x15bcb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x15bcbc: 0x21140
    ctx->pc = 0x15bcbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x15bcc0: 0xace20000
    ctx->pc = 0x15bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x15bcc4: 0xad040000
    ctx->pc = 0x15bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x15bcc8: 0xacaa0000
    ctx->pc = 0x15bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x15bccc: 0x3e00008
    ctx->pc = 0x15BCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCD0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BCD4u;
    // 0x15bcd4: 0x0
    ctx->pc = 0x15bcd4u;
    // NOP
}
