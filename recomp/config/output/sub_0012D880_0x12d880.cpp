#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D880
// Address: 0x12d880 - 0x12d8b0
void sub_0012D880_0x12d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d880u;

    // 0x12d880: 0x27bdfff0
    ctx->pc = 0x12d880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d884: 0x102d
    ctx->pc = 0x12d884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d888: 0x10800005
    ctx->pc = 0x12D888u;
    {
        const bool branch_taken_0x12d888 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D88Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x12d888) {
            ctx->pc = 0x12D8A0u;
            goto label_12d8a0;
        }
    }
    ctx->pc = 0x12D890u;
    // 0x12d890: 0x8c840004
    ctx->pc = 0x12d890u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d894: 0xdfbf0000
    ctx->pc = 0x12d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d898: 0x80493c8
    ctx->pc = 0x12D898u;
    ctx->pc = 0x12D89Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F20u;
    entry_124f20_0x124f38(rdram, ctx, runtime); return;
    ctx->pc = 0x12D8A0u;
label_12d8a0:
    // 0x12d8a0: 0xdfbf0000
    ctx->pc = 0x12d8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8a4: 0x3e00008
    ctx->pc = 0x12D8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D8A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D8A0u: goto label_12d8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D8ACu;
    // 0x12d8ac: 0x0
    ctx->pc = 0x12d8acu;
    // NOP
}
