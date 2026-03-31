#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A2F0
// Address: 0x13a2f0 - 0x13a328
void sub_0013A2F0_0x13a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a2f0u;

    // 0x13a2f0: 0x42600
    ctx->pc = 0x13a2f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x13a2f4: 0x42603
    ctx->pc = 0x13a2f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x13a2f8: 0x2482ff9f
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x13a2fc: 0x2483ffe0
    ctx->pc = 0x13a2fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x13a300: 0x2c42001a
    ctx->pc = 0x13a300u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x13a304: 0x32e00
    ctx->pc = 0x13a304u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 24));
    // 0x13a308: 0x10400002
    ctx->pc = 0x13A308u;
    {
        const bool branch_taken_0x13a308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A30Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a308) {
            ctx->pc = 0x13A314u;
            goto label_13a314;
        }
    }
    ctx->pc = 0x13A310u;
    // 0x13a310: 0x52603
    ctx->pc = 0x13a310u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 24));
label_13a314:
    // 0x13a314: 0x3863005c
    ctx->pc = 0x13a314u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 92));
    // 0x13a318: 0x2402002f
    ctx->pc = 0x13a318u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x13a31c: 0x3e00008
    ctx->pc = 0x13A31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A320u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A314u: goto label_13a314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A324u;
    // 0x13a324: 0x0
    ctx->pc = 0x13a324u;
    // NOP
}
