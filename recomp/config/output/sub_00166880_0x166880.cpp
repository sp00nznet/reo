#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166880
// Address: 0x166880 - 0x1668c0
void sub_00166880_0x166880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166880u;

    // 0x166880: 0x80482d
    ctx->pc = 0x166880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166884: 0xa0402d
    ctx->pc = 0x166884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166888: 0x382d
    ctx->pc = 0x166888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16688c: 0x0
    ctx->pc = 0x16688cu;
    // NOP
label_166890:
    // 0x166890: 0x71080
    ctx->pc = 0x166890u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x166894: 0x24e70001
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x166898: 0x481821
    ctx->pc = 0x166898u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16689c: 0x491021
    ctx->pc = 0x16689cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1668a0: 0x8c640000
    ctx->pc = 0x1668a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1668a4: 0x28e50008
    ctx->pc = 0x1668a4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), 8));
    // 0x1668a8: 0xac460000
    ctx->pc = 0x1668a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1668ac: 0x14a0fff8
    ctx->pc = 0x1668ACu;
    {
        const bool branch_taken_0x1668ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1668B0u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x1668ac) {
            ctx->pc = 0x166890u;
            goto label_166890;
        }
    }
    ctx->pc = 0x1668B4u;
    // 0x1668b4: 0x3e00008
    ctx->pc = 0x1668B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166890u: goto label_166890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1668BCu;
    // 0x1668bc: 0x0
    ctx->pc = 0x1668bcu;
    // NOP
}
