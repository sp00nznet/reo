#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182198
// Address: 0x182198 - 0x182200
void sub_00182198_0x182198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182198u;

    // 0x182198: 0x80820000
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18219c: 0x52e00
    ctx->pc = 0x18219cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1821a0: 0x52e03
    ctx->pc = 0x1821a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1821a4: 0x80302d
    ctx->pc = 0x1821a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821a8: 0x1040000e
    ctx->pc = 0x1821A8u;
    {
        const bool branch_taken_0x1821a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1821ACu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1821a8) {
            ctx->pc = 0x1821E4u;
            goto label_1821e4;
        }
    }
    ctx->pc = 0x1821B0u;
    // 0x1821b0: 0x10450011
    ctx->pc = 0x1821B0u;
    {
        const bool branch_taken_0x1821b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1821B4u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x1821b0) {
            ctx->pc = 0x1821F8u;
            goto label_1821f8;
        }
    }
    ctx->pc = 0x1821B8u;
    // 0x1821b8: 0x24c60001
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1821bc: 0x0
    ctx->pc = 0x1821bcu;
    // NOP
label_1821c0:
    // 0x1821c0: 0x80c20000
    ctx->pc = 0x1821c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1821c4: 0x10400007
    ctx->pc = 0x1821C4u;
    {
        const bool branch_taken_0x1821c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1821C8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x1821c4) {
            ctx->pc = 0x1821E4u;
            goto label_1821e4;
        }
    }
    ctx->pc = 0x1821CCu;
    // 0x1821cc: 0x0
    ctx->pc = 0x1821ccu;
    // NOP
    // 0x1821d0: 0x0
    ctx->pc = 0x1821d0u;
    // NOP
    // 0x1821d4: 0x0
    ctx->pc = 0x1821d4u;
    // NOP
    // 0x1821d8: 0x0
    ctx->pc = 0x1821d8u;
    // NOP
    // 0x1821dc: 0x5445fff8
    ctx->pc = 0x1821DCu;
    {
        const bool branch_taken_0x1821dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x1821dc) {
            ctx->pc = 0x1821E0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1821C0u;
            goto label_1821c0;
        }
    }
    ctx->pc = 0x1821E4u;
label_1821e4:
    // 0x1821e4: 0x31e00
    ctx->pc = 0x1821e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x1821e8: 0x31e03
    ctx->pc = 0x1821e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1821ec: 0x14650002
    ctx->pc = 0x1821ECu;
    {
        const bool branch_taken_0x1821ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1821F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1821ec) {
            ctx->pc = 0x1821F8u;
            goto label_1821f8;
        }
    }
    ctx->pc = 0x1821F4u;
    // 0x1821f4: 0xc41023
    ctx->pc = 0x1821f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1821f8:
    // 0x1821f8: 0x3e00008
    ctx->pc = 0x1821F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1821C0u: goto label_1821c0;
            case 0x1821E4u: goto label_1821e4;
            case 0x1821F8u: goto label_1821f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182200u;
}
